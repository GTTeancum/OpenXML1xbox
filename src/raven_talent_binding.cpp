#include "raven_talent_binding.h"
#include <stdexcept>
#include <cmath>
#include "raven_numeric.h"
#include <set>

namespace raven {
NativeAffecterQueryResult query_xml2_native_affecters(raven_guest_read read,void *context,
    const raven_xml2_scope_runtime& runtime,uint32_t provider,uint32_t sentinel,
    uint32_t actor,uint8_t attribute,uint8_t mode,uint32_t query) {
    NativeAffecterQueryResult result;
    raven_xml2_affecter_range_reset(result.endpoints.data(),mode);
    auto word=[&](uint32_t address) {
        unsigned char b[4];
        if(!read||address>UINT32_MAX-3u||!read(context,address,b,4))
            throw std::runtime_error("Unreadable XML2 affecter collection");
        return uint32_t(b[0])|(uint32_t(b[1])<<8)|(uint32_t(b[2])<<16)|(uint32_t(b[3])<<24);
    };
    auto valid=[](raven_lookup status) {
        if(status==RAVEN_INVALID)throw std::runtime_error("Invalid XML2 affecter query state");
        return status==RAVEN_FOUND;
    };
    if(!actor||actor>UINT32_MAX-0x224u)throw std::runtime_error("Invalid XML2 query actor");
    uint32_t handle=word(actor+0x21c),pool=word(actor+0x220);
    std::set<std::pair<uint32_t,uint32_t>> attached_seen;
    bool first=true;
    while(pool) {
        if(!attached_seen.emplace(pool,handle).second)throw std::runtime_error("Cyclic XML2 attached query");
        raven_xml2_powerup_node node;
        if(!valid(raven_xml2_attached_powerup_node(read,context,pool,handle,&node)))break;
        // Native checks the advertised attribute bit only after validating head.
        if(first&&attribute<95&&!(word(actor+0x210+(attribute>>5)*4)&(1u<<(attribute&31))))return result;
        first=false;
        raven_xml2_powerup_definition definition;
        if(!valid(raven_xml2_powerup_definition_read(read,context,node.definition_pool,node.definition_handle,&definition)))
            return result; // Native early false retains endpoints already accumulated.
        raven_xml2_powerup_context selected;
        if(valid(raven_xml2_powerup_guest_context(read,context,runtime.manager,runtime.source_type,
                sentinel,node.address,actor,&selected))) {
            uint32_t ah=definition.affecter_handle,ap=definition.affecter_pool;
            std::set<std::pair<uint32_t,uint32_t>> affecter_seen;
            while(ap) {
                if(!affecter_seen.emplace(ap,ah).second)throw std::runtime_error("Cyclic XML2 affecter query");
                raven_xml2_affecter_node affecter;
                if(!valid(raven_xml2_affecter_node_read(read,context,ap,ah,&affecter)))break;
                if(affecter.attribute==attribute&&affecter.mode==mode&&
                   valid(raven_xml2_query_affecter_eligible(read,context,&runtime,node.address,&affecter,query))) {
                    float value[2]={0,0};
                    if(!valid(raven_xml2_affecter_value(read,context,provider,runtime.actor_type,
                            selected.actor,&affecter,selected.inherited,value)))++result.missing_references;
                    raven_xml2_affecter_range_apply(result.endpoints.data(),mode,value[0],value[1]);
                    ++result.applied;
                }
                ah=affecter.next_handle;ap=affecter.next_pool;
            }
        }
        handle=node.next_handle;pool=node.next_pool;
    }
    result.native_return=result.applied!=0;
    return result;
}
std::optional<std::vector<raven_xml2_affecter_node>> read_xml2_definition_affecters(
    raven_guest_read read,void *context,uint32_t pool,uint32_t handle) {
    raven_xml2_powerup_definition definition;
    auto status=raven_xml2_powerup_definition_read(read,context,pool,handle,&definition);
    if(status==RAVEN_MISSING)return std::nullopt;
    if(status==RAVEN_INVALID)throw std::runtime_error("Unreadable/unsupported XML2 powerup definition");
    pool=definition.affecter_pool;handle=definition.affecter_handle;
    std::set<std::pair<uint32_t,uint32_t>> visited;
    std::vector<raven_xml2_affecter_node> result;
    while(pool) {
        if(!visited.emplace(pool,handle).second)throw std::runtime_error("Cyclic XML2 affecter list");
        raven_xml2_affecter_node node;
        status=raven_xml2_affecter_node_read(read,context,pool,handle,&node);
        if(status==RAVEN_MISSING)break;
        if(status==RAVEN_INVALID)throw std::runtime_error("Unreadable/unsupported XML2 affecter node");
        result.push_back(node);pool=node.next_pool;handle=node.next_handle;
    }
    return result;
}
std::vector<raven_xml2_powerup_node> read_xml2_actor_powerup_list(
    raven_guest_read read,void *context,uint32_t actor) {
    unsigned char bytes[8];
    if(!read||!actor||actor>UINT32_MAX-0x224u||!read(context,actor+0x21c,bytes,8))
        throw std::runtime_error("Unreadable XML2 actor powerup list");
    auto word=[](const unsigned char *b){return uint32_t(b[0])|(uint32_t(b[1])<<8)|
        (uint32_t(b[2])<<16)|(uint32_t(b[3])<<24);};
    uint32_t handle=word(bytes),pool=word(bytes+4);
    std::set<std::pair<uint32_t,uint32_t>> visited;
    std::vector<raven_xml2_powerup_node> result;
    while(pool) {
        if(!visited.emplace(pool,handle).second)throw std::runtime_error("Cyclic XML2 powerup list");
        raven_xml2_powerup_node node;
        auto status=raven_xml2_attached_powerup_node(read,context,pool,handle,&node);
        if(status==RAVEN_MISSING)break;
        if(status==RAVEN_INVALID)throw std::runtime_error("Unreadable/unsupported XML2 powerup node");
        result.push_back(node);
        handle=node.next_handle;pool=node.next_pool;
    }
    return result;
}
AffecterQueryEntry read_xml2_powerup_query_entry(raven_guest_read read,void *context,
    uint32_t manager,uint32_t source_actor_type,uint32_t affecter_actor_type,
    uint32_t sentinel,uint32_t powerup,uint32_t queried_actor,
    const AffecterDeclaration& declaration,bool live,bool sharing_enabled,bool owner_matches) {
    AffecterQueryEntry entry{&declaration,false,std::nullopt,0,sharing_enabled,owner_matches};
    if(!live)return entry;
    raven_xml2_powerup_context selected;
    auto status=raven_xml2_powerup_guest_context(read,context,manager,source_actor_type,
        sentinel,powerup,queried_actor,&selected);
    if(status==RAVEN_INVALID)throw std::runtime_error("Unreadable/unsupported XML2 powerup context");
    if(status==RAVEN_MISSING)return entry;
    entry.eligible=true;
    entry.inherited=selected.inherited;
    int16_t id;
    status=raven_xml2_affecter_context(read,context,selected.actor,affecter_actor_type,&id);
    if(status==RAVEN_INVALID)throw std::runtime_error("Unreadable/unsupported XML2 affecter actor");
    if(status==RAVEN_FOUND)entry.context=id;
    return entry;
}
namespace {
std::string key(std::string text) {
    // D0B40 removes '%' and looks up a 20-byte name through D0BF0;
    // its comparator 3D66B7 folds case. Reject overlong names instead of
    // truncating one mod's symbol into another. The data reader has the
    // same 19-byte maximum. Non-ASCII locale semantics are not implemented.
    if(text.empty()||text.size()>=20)throw std::runtime_error("Invalid talent operand name: "+text);
    for(char& c:text) {
        if((unsigned char)c<=32||(unsigned char)c>=127)
            throw std::runtime_error("Unsupported talent operand byte");
        if(c>='A'&&c<='Z')c+=('a'-'A');
    }
    return text;
}
}
TalentBindings::TalentBindings(std::vector<TalentDefinition> definitions) {
    unsigned next_id=1;
    for(auto& value:definitions) {
        auto definition=std::make_shared<const TalentDefinition>(std::move(value));
        if(!talents_.emplace(definition->name,definition).second)
            throw std::runtime_error("Duplicate talent registration: "+definition->name);
        for(const auto& entry:definition->values) {
            // D1060 reserves zero and rejects the high tag bit. These IDs
            // belong to this complete catalog; never insert them into the
            // original guest registry or persist them across profile loads.
            if(next_id>0x7fff)throw std::runtime_error("Talent value registry exhausted");
            auto id=(uint16_t)next_id++;
            auto result=symbols_.emplace(key(entry.first),TalentBinding{definition,entry.first,id});
            if(!result.second)throw std::runtime_error("Ambiguous talent operand: "+entry.first);
            ids_.emplace(entry.first,id);
        }
    }
}
void TalentBindings::populate(TalentContextValues& values,int16_t context,
    const std::string& talent,std::optional<unsigned> rank) const {
    auto found=talents_.find(talent);
    if(found==talents_.end())throw std::runtime_error("Unregistered talent: "+talent);
    if(values.profile_&&values.profile_!=profile_)
        throw std::runtime_error("Talent context belongs to a different profile");
    if(!values.profile_&&!values.values_.empty())
        throw std::runtime_error("Cannot adopt preexisting unregistered context values");
    auto next=values;
    next.profile_=profile_;
    next.populate(context,*found->second,ids_,rank);
    values=std::move(next);
}
TalentBinding TalentBindings::bind(const std::string& operand) const {
    if(operand.empty()||operand[0]!='%')
        throw std::runtime_error("Expected XML2 talent reference: "+operand);
    auto found=symbols_.find(key(operand.substr(1)));
    if(found==symbols_.end())throw std::runtime_error("Unresolved talent operand: "+operand);
    return found->second;
}
std::optional<uint16_t> TalentBindings::native_xml2_value_id(raven_guest_read read,void *context,
    uint32_t provider,const std::string& operand) const {
    auto binding=bind(operand);
    uint16_t id;
    auto status=raven_xml2_talent_value_id(read,context,provider,binding.symbol.c_str(),&id);
    if(status==RAVEN_INVALID)throw std::runtime_error("Unreadable/unsupported XML2 talent value registry");
    if(status==RAVEN_MISSING)return std::nullopt;
    return id;
}
std::optional<std::array<float,2>> TalentBindings::native_xml2_value(raven_guest_read read,void *context,
    uint32_t provider,const std::string& operand,int16_t actor_context) const {
    auto id=native_xml2_value_id(read,context,provider,operand);
    if(!id)return std::nullopt;
    std::array<float,2> result;
    auto status=raven_xml2_talent_value_read(read,context,provider,actor_context,*id,result.data());
    if(status==RAVEN_INVALID)throw std::runtime_error("Unreadable/unsupported XML2 talent value tree");
    if(status==RAVEN_MISSING)return std::nullopt;
    return result;
}
std::optional<std::array<float,2>> TalentBindings::resolve(const TalentContextValues& values,
    const std::string& operand,int16_t context,std::optional<int16_t> owner) const {
    auto binding=bind(operand);
    if(values.profile_!=profile_)throw std::runtime_error("Talent operand/cache profile mismatch");
    return values.get_with_owner(context,owner,binding.value_id);
}
TalentResult TalentBinding::evaluate(raven_guest_read read,void *context,
    uint32_t system,uint32_t actor,float output[2]) const {
    if(!definition)return TalentResult::invalid_state;
    return evaluate_xml1_actor(*definition,symbol,read,context,system,actor,output);
}
std::optional<std::array<float,2>> TalentBindings::resolve_affecter_reference(
    const TalentContextValues& values,const std::string& operand,
    std::optional<int16_t> context,float inherited) const {
    // The FUCOM/JNP branch evaluates only ordered equality with zero.
    // NaN and nonzero values pass through to both outputs; -0 evaluates.
    if(inherited!=0)return std::array<float,2>{inherited,inherited};
    // F6D2B returns zero for a reference without a valid actor context.
    // Do not conflate this with an unresolved symbol or live-cache miss.
    if(!context)return std::array<float,2>{0,0};
    // F6CD0 -> D0950 -> D0A70 uses only the supplied stats context.
    // Owner fallback belongs to the separate energy caller E9EA0.
    auto result=resolve(values,operand,*context,std::nullopt);
    if(result)for(auto& value:*result)
        if(!(value>=-1.0e29f)||!std::isfinite(value))value=0;
    return result;
}
std::optional<std::array<float,2>> TalentBindings::resolve_affecter_level(
    const TalentContextValues& values,const AffecterDeclaration& declaration,
    std::optional<int16_t> context,float inherited,const TalentConstants *constants) const {
    if(inherited!=0)return std::array<float,2>{inherited,inherited};
    // D0B40 tests the FIRST byte for '%', before numeric whitespace trim.
    // F6CD0 evaluates stored literals even without an actor; only a
    // reference needs the actor's live talent context.
    if(!declaration.level.empty()&&declaration.level[0]=='%')
        return resolve_affecter_reference(values,declaration.level,context,0);
    return read_xml2_literal(declaration.level,constants);
}
std::optional<AffecterQueryResult> TalentBindings::query_damage_affecters(
    const TalentContextValues& values,const std::vector<AffecterQueryEntry>& entries,
    uint8_t attribute,uint8_t mode,uint32_t damage_flags,const TalentConstants *constants) const {
    AffecterQueryResult result;
    raven_xml2_affecter_range_reset(result.endpoints.data(),mode);
    for(const auto& entry:entries) {
        if(!entry.eligible)continue;
        if(!entry.declaration)throw std::runtime_error("Missing live affecter declaration");
        const auto& d=*entry.declaration;
        if(!d.attribute_id)throw std::runtime_error("Unresolved affecter attribute: "+d.attribute);
        // 15EA82/15EAB1 reject mode/type before touching level operands.
        if(d.mode!=mode||*d.attribute_id!=attribute)continue;
        if(!d.unhandled.empty()||!d.source.children.empty())return std::nullopt;
        // 144380 bypasses sharing and inversion when there is no scope.
        if(!d.scopes.empty()&&!xml2_share_filter_matches(d.share_filter,entry.sharing_enabled,entry.owner_matches))continue;
        auto matches=xml2_damage_scope_matches(d,damage_flags);
        if(!matches)return std::nullopt;
        const bool accepted=!d.scopes.empty()&&attribute==8?!*matches:*matches;
        if(!accepted)continue;
        auto level=resolve_affecter_level(values,d,entry.context,entry.inherited,constants);
        if(!level)return std::nullopt;
        raven_xml2_affecter_range_apply(result.endpoints.data(),mode,level->at(0),level->at(1));
        ++result.applied;
    }
    return result;
}
}
