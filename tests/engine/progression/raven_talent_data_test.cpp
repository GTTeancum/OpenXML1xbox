#include "engine/progression/raven_talent_data.h"
#include "engine/progression/raven_talent_runtime.h"
#include <fstream>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <filesystem>
#include <cmath>

static void check(bool yes,const char *message) {if(!yes)throw std::runtime_error(message);}
static std::vector<raven::TalentDefinition> from_text(const std::string& text) {
    auto b=xml1::compile_xmlb(text);return raven::load_talents(b.data(),(unsigned)b.size());
}
int wmain(int argc,wchar_t **argv) {
    try {
        if(argc>1) {
            unsigned talents=0,symbols=0,evaluations=0;
            for(int i=1;i<argc;++i) {
                std::ifstream in(std::filesystem::path(argv[i]),std::ios::binary);
                check(bool(in),"Cannot open talent resource");
                std::string bytes((std::istreambuf_iterator<char>(in)),{});
                auto source=xml1::parse_xmlb(bytes.data(),(unsigned)bytes.size());
                check(source.size()==1,"Expected one corpus root");
                auto definitions=raven::load_talent_nodes(raven::imported_shared_talent_nodes(source[0]));
                const auto adapted=raven::runtime_talent_xml(bytes.data(),(unsigned)bytes.size());
                const auto adapted_bytes=xml1::compile_xmlb(adapted);
                const auto native=xml1::parse_xmlb(adapted_bytes.data(),(unsigned)adapted_bytes.size());
                size_t imported_index=0;
                for(size_t n=0;n<source[0].children.size();++n) {
                    if(source[0].children[n].name!="talent") {
                        check(xml1::write_xml_nodes({source[0].children[n]})==
                              xml1::write_xml_nodes({native[0].children[n]}),"Native corpus node changed");
                        continue;
                    }
                    unsigned count=0;
                    for(const auto& node:native[0].children[n].children)if(node.name=="level")++count;
                    check(count==definitions[imported_index++].rank_count(),"Native runtime level count differs from imported rank count");
                }
                talents+=(unsigned)definitions.size();
                for(const auto& d:definitions) {
                    const auto ranks=d.rank_count();
                    for(unsigned rank=1;rank<=ranks;++rank)
                        check(d.level_for_rank(rank)!=nullptr,"Declared upgrade rank missing its level node");
                    check(!d.level_for_rank(0)&&!d.level_for_rank(ranks+1),"Out-of-range upgrade accepted");
                    for(const auto& symbol:d.values) {
                    ++symbols;
                    for(unsigned rank=1;rank<=45;++rank) {
                        float pair[2];check(d.evaluate(symbol.first,rank,pair),"Named value evaluation failed");
                        check(std::isfinite(pair[0])&&std::isfinite(pair[1]),"Nonfinite evaluation");++evaluations;
                    }
                    }
                }
            }
            std::cout<<"Loaded "<<talents<<" talent definitions and "<<symbols<<" symbols; "<<evaluations
                     <<" rank evaluations. Data/evaluator check only, not gameplay validation.\n";
            return 0;
        }
        auto defs=from_text("<talents><talent name='sun_ignite' power='power1'><talentvalues>"
                           "<talentvalue name='sun_ignite_dmg' level='1' value='11 15'/>"
                           "<talentvalue name='sun_ignite_dmg' level='20' value='195 217'/>"
                           "</talentvalues><level count='20' description='%sun_ignite_dmg &amp; fire'>"
                           "<require cat='level' level='%sun_ignite_req'/></level></talent></talents>");
        float pair[2]={-1,-2};
        auto table_bytes=xml1::compile_xmlb("<values><value name='DMG2' min='2' max='3'/>"
            "<value name='K2' min='120'/><value name='dmg2' min='4' max='6'/>"
            "<value name='unrelated' min='not a number'/></values>");
        auto constants=raven::load_talent_constants(table_bytes.data(),(unsigned)table_bytes.size());
        check(constants.size()==2&&constants.at("K2")[1]==120,"Scalar constant or filtering failed");
        auto named_bytes=xml1::compile_xmlb("<talents><talent name='x'><talentvalues>"
            "<talentvalue name='damage' level='1' value='dmg2'/>"
            "</talentvalues></talent></talents>");
        auto named=raven::load_talents(named_bytes.data(),(unsigned)named_bytes.size(),&constants);
        check(named[0].evaluate("damage",1,pair)&&pair[0]==4&&pair[1]==6,
              "Named range or last-definition precedence failed");
        bool missing=false;
        try {raven::load_talents(named_bytes.data(),(unsigned)named_bytes.size());}
        catch(const std::exception&) {missing=true;}
        check(missing,"Missing values table silently accepted");
        auto other=constants;other["DMG2"]={20,30};
        auto other_defs=raven::load_talents(named_bytes.data(),(unsigned)named_bytes.size(),&other);
        check(other_defs[0].evaluate("damage",1,pair)&&pair[0]==20&&pair[1]==30,
              "Explicit game-specific values ignored");
        check(named[0].evaluate("damage",1,pair)&&pair[0]==4&&pair[1]==6,
              "Second game polluted first game's resolved values");
        check(defs.size()==1&&defs[0].name=="sun_ignite","Talent identity lost");
        check(defs[0].rank_count()==20,"Counted ranks collapsed to one or capped at fifteen");
        check(defs[0].level_for_rank(1)==defs[0].level_for_rank(20),"Counted rank changed declaration");
        auto split=from_text("<talents><talent name='split'><level description='first'/>"
            "<level count='18' description='middle'><require cat='skill' item='other' level='1'/></level>"
            "<level description='last'/></talent></talents>");
        check(split[0].rank_count()==20,"Mixed explicit/counted rank total incorrect");
        check(split[0].level_for_rank(1)==&split[0].source.children[0]&&
            split[0].level_for_rank(2)==&split[0].source.children[1]&&
            split[0].level_for_rank(19)==&split[0].source.children[1]&&
            split[0].level_for_rank(20)==&split[0].source.children[2],"Rank boundary selection incorrect");
        check(!split[0].level_for_rank(0)&&!split[0].level_for_rank(21),"Unlearned/out-of-range rank mapped");
        for(const auto& bad:{"0","-1","256","2.5","20junk",""}) {
            auto invalid=from_text(std::string("<talents><talent name='bad'><level count='")+bad+"'/></talent></talents>");
            bool rejected=false;try{invalid[0].rank_count();}catch(const std::exception&){rejected=true;}
            check(rejected,"Invalid counted rank accepted");
        }
        auto overflow=from_text("<talents><talent name='overflow'><level count='255'/><level/></talent></talents>");
        bool overflow_rejected=false;try{overflow[0].level_for_rank(1);}catch(const std::exception&){overflow_rejected=true;}
        check(overflow_rejected,"Early rank lookup hid total overflow");
        auto adapt=[](const std::string& text){
            const auto binary=xml1::compile_xmlb(text);
            return raven::runtime_talent_xml(binary.data(),(unsigned)binary.size());
        };
        bool native_overflow=false;
        const auto hero_refs=adapt("<characters><stats name='import'><Talent name='shared'/>"
            "<Talent name='earned' level='3'/><Talent name='explicit_zero' level='0'/>"
            "<Talent name='inline'><level/></Talent><Talent/><Other name='untouched'/>"
            "</stats></characters>");
        check(hero_refs.find("<Talent name=\"shared\" level=\"0\"/>")!=std::string::npos,
            "Unlearned shared reference was omitted from native character admission");
        check(hero_refs.find("name=\"earned\" level=\"3\"")!=std::string::npos&&
              hero_refs.find("name=\"inline\"><level/>")!=std::string::npos&&
              hero_refs.find("<Talent/>")!=std::string::npos&&
              hero_refs.find("<Other name=\"untouched\"/>")!=std::string::npos,
            "Herostat default changed explicit ranks or unrelated declarations");
        check(adapt(hero_refs)==hero_refs,"Herostat default is not idempotent");
        try { adapt("<talents><talent name='too_many'><level count='64'/></talent></talents>"); }
        catch(const std::exception&) { native_overflow=true; }
        check(native_overflow,"Unsupported native rank count could wrap during upgrades");
        const auto plain=xml1::compile_xmlb("<talents><talent name='stock'><level/><level/></talent></talents>");
        check(raven::runtime_talent_xml(plain.data(),(unsigned)plain.size())==
            xml1::decode_xmlb(plain.data(),(unsigned)plain.size()),"Stock document text changed");
        const auto pkg=xml1::compile_xmlb("<packagedef><resource count='20' filename='original'/></packagedef>");
        check(raven::runtime_talent_xml(pkg.data(),(unsigned)pkg.size())==
            xml1::decode_xmlb(pkg.data(),(unsigned)pkg.size()),"Non-talent document changed");
        auto labels=adapt("<talents><talent name='labels' description='$HP/$EP, $DMG_ENERGY; $RES_PHYSICAL; $DMG_ENERGY_EXTRA; $MENU_ACCEPT; $'>"
            "<level description='$DR $DMG_RADIATION'/></talent></talents>");
        check(labels.find("HP/EP, Energy Dmg; Physical Resistance; $DMG_ENERGY_EXTRA; $MENU_ACCEPT; $")!=std::string::npos,
            "Semantic labels lost token boundaries, native prompts or terminal dollar");
        check(labels.find("DEF Radiation Dmg")!=std::string::npos,
            "Non-counted imported descriptions did not resolve labels");
        auto stock_labels=xml1::compile_xmlb("<Talents><Talent name='stock' description='$EP'/></Talents>");
        check(raven::runtime_talent_xml(stock_labels.data(),(unsigned)stock_labels.size())==
            xml1::decode_xmlb(stock_labels.data(),(unsigned)stock_labels.size()),"Stock token policy changed");
        const std::string stock_node="<Talent name='stock' description='$EP' custom='one' custom='two'><level description='^P1'/></Talent>";
        auto mixed=adapt("<Talents>"+stock_node+
            "<talent name='shared'><talentvalues><talentvalue name='regen' level='1' value='1.3'/>"
            "<talentvalue name='regen' level='15' value='2.98'/></talentvalues>"
            "<level count='15' description='%regen:s $EP regeneration'>"
            "<powerup life='-1'><affecter attribute='energy_regen' affect_type='scale' level='%regen'/></powerup>"
            "</level></talent>"+stock_node+"</Talents>");
        auto mixed_binary=xml1::compile_xmlb(mixed);
        auto mixed_tree=xml1::parse_xmlb(mixed_binary.data(),(unsigned)mixed_binary.size());
        auto stock_binary=xml1::compile_xmlb(stock_node);
        auto native=xml1::parse_xmlb(stock_binary.data(),(unsigned)stock_binary.size());
        check(xml1::write_xml_nodes({mixed_tree[0].children[0]})==xml1::write_xml_nodes(native)&&
              xml1::write_xml_nodes({mixed_tree[0].children[2]})==xml1::write_xml_nodes(native),
              "Mixed resource altered native talent attributes/order/text");
        const auto& shared_levels=mixed_tree[0].children[1].children;
        check(shared_levels.size()==16&&mixed_tree[0].children[1].name=="Talent",
              "Mixed resource did not expose every shared XML2 rank");
        check(std::stof(shared_levels[15].children[0].children[0].attrs[2].second)==2.98f,
              "Shared passive lost high-rank numeric value");
        check(shared_levels[15].children[0].name=="activepowerup",
              "Shared passive is invisible to native rank activation");
        const auto passive=adapt("<talents><talent name='passive' description='$EP'>"
            "<level><powerup life='-1' func_activate='original_callback'>"
            "<affecter attribute='move' affect_type='scale' level='1.2'/>"
            "<affecter attribute='defense_rating' affect_type='scale' level='1.4'/>"
            "</powerup></level></talent></talents>");
        check(passive.find("<activepowerup life=\"-1\" func_activate=\"original_callback\">")!=std::string::npos&&
              passive.find("attribute=\"move\"")!=std::string::npos&&
              passive.find("attribute=\"defense_rating\"")!=std::string::npos,
              "Non-counted passive lost its grouped affecters or callback");
        check(adapt(passive)==passive,"Passive adapter is not idempotent");
        check(adapt(mixed)==mixed,"Mixed runtime conversion is not idempotent");
        bool mixed_collision=false;
        try { adapt("<Talents><Talent name='Original'/><talent name='ORIGINAL'><level count='2'/></talent></Talents>"); }
        catch(const std::exception&) { mixed_collision=true; }
        check(mixed_collision,"Imported declaration could replace a stock shared talent");
        auto expanded=adapt("<talents><talent name='multi'><level description='a'/><metadata keep='yes'/>"
            "<level count='18' description='literal &amp; test' custom='one' custom='two'>"
            "<require cat='skill' item='original' level='1'/></level><level description='z'/></talent></talents>");
        auto expanded_bytes=xml1::compile_xmlb(expanded);
        auto expanded_tree=xml1::parse_xmlb(expanded_bytes.data(),(unsigned)expanded_bytes.size());
        check(expanded_tree[0].name=="Talents"&&expanded_tree[0].children[0].name=="Talent",
            "Imported talent schema does not match native case-sensitive lookup");
        const auto& children=expanded_tree[0].children[0].children;
        check(children.size()==21&&children[1].name=="metadata","Count expansion lost sibling order");
        check(children[2].attrs.size()==3&&children[2].attrs[0].second=="literal &amp; test"&&
            children[19].children[0].attrs[1].second=="original","Count expansion changed literal bytes/dependencies");
        check(adapt(expanded)==expanded,"Runtime level expansion is not idempotent");
        const auto resolved=adapt("<talents><talent name='imported'><talentvalues>"
            "<talentvalue name='damage' level='1' value='11 15'/><talentvalue name='damage' level='20' value='217 242'/>"
            "<talentvalue name='requirement' level='1' value='1'/><talentvalue name='requirement' level='20' value='58'/>"
            "<talentvalue name='fraction' level='1' value='0.45'/><talentvalue name='scale' level='1' value='1.25'/>"
            "<talentvalue name='reduction' level='1' value='0.75'/></talentvalues>"
            "<level count='20' description='%damage $DMG_ENERGY; %fraction:p; %scale:S; %reduction:s; 33% instant'>"
            "<require cat='level' level='%requirement'/><powerup><affecter level='%fraction'/></powerup>"
            "</level></talent></talents>");
        auto resolved_bytes=xml1::compile_xmlb(resolved);
        auto resolved_tree=xml1::parse_xmlb(resolved_bytes.data(),(unsigned)resolved_bytes.size());
        const auto& resolved_levels=resolved_tree[0].children[0].children;
        check(resolved_levels[1].attrs[0].second=="11-15 Energy Dmg; 45%; +25%; -25%; 33% instant",
            "Runtime description formatting/semantic token resolution failed");
        check(resolved_levels[20].attrs[0].second.find("217-242 Energy Dmg")==0,
            "High-rank description reused first rank");
        check(resolved_levels[1].children[0].attrs[1].second=="1"&&
            resolved_levels[20].children[0].attrs[1].second=="58",
            "Requirements were not materialized at the matching rank");
        check(std::stof(resolved_levels[1].children[1].children[0].attrs[0].second)==0.45f,
            "Passive declaration used presentation rounding");
        check(adapt(resolved)==resolved,"Resolved runtime document is not idempotent");
        bool unknown_value=false;
        try{adapt("<talents><talent name='bad'><level count='2' description='%unknown'/></talent></talents>");}
        catch(const std::exception&){unknown_value=true;}
        check(unknown_value,"Missing upgrade symbol silently became an unlocked or zero-valued power");
        check(defs[0].evaluate("sun_ignite_dmg",10,pair)&&fabsf(pair[0]-98.1578947f)<0.00002f,"Parsed range evaluated incorrectly");
        check(!defs[0].evaluate("missing",1,pair),"Missing symbol silently resolved");
        check(defs[0].source.children[1].attrs[1].second=="%sun_ignite_dmg &amp; fire","UI bytes changed");
        check(defs[0].source.children[1].children[0].attrs[1].second=="%sun_ignite_req","Requirement changed");
        auto b=xml1::compile_xmlb("<node value='one' value='two'/>");
        auto tree=xml1::parse_xmlb(b.data(),(unsigned)b.size());
        check(tree[0].attrs.size()==2&&tree[0].attrs[1].second=="two","Duplicate attributes lost");
        auto affecter_bytes=xml1::compile_xmlb("<affecter attribute='strength' level='%buff' "
            "affect_type='ScAlE' affect_type='add' share_filter='OWNER' "
            "scope_node='power1' scope_node='power2' custom='keep'><child/></affecter>");
        auto affecter_tree=xml1::parse_xmlb(affecter_bytes.data(),(unsigned)affecter_bytes.size());
        auto affecter=raven::read_xml2_affecter(affecter_tree[0]);
        check(affecter.attribute_id==2,"Attribute declaration did not resolve XML2 stat ID");
        check(raven::xml2_affecter_attribute("damage")==57&&
              raven::xml2_affecter_attribute("ATK_DAMAGE")==57,"Native damage alias or case folding lost");
        check(raven::xml2_affecter_attribute("def_absorb_damage")==52&&
              raven::xml2_affecter_attribute("power_cost")==68&&
              raven::xml2_affecter_attribute("powerup_scope")==91,"Imported power attribute IDs changed");
        check(raven::xml2_affecter_attribute("none")==0&&
              !raven::xml2_affecter_attribute("no_such_attribute"),"Unknown attribute confused with explicit none");
        check(affecter.mode==1&&affecter.share_filter==1&&affecter.level=="%buff"&&
              affecter.attribute=="strength","Affecter field order/case/native mode semantics changed");
        check(affecter.scopes.size()==2&&affecter.scopes[0].second=="power1"&&
              affecter.scopes[1].second=="power2","Affecter scope order or duplicates lost");
        check(affecter.unhandled.size()==1&&affecter.unhandled[0].second=="keep"&&
              affecter.source.children.size()==1,"Unconsumed affecter data discarded");
        auto changed=affecter_tree[0];
        changed.attrs.emplace_back("affect_type","MAX");
        changed.attrs.emplace_back("share_filter","SHARED");
        check(raven::read_xml2_affecter(changed).mode==2&&
              raven::read_xml2_affecter(changed).share_filter==2,"Max/shared decoding failed");
        changed.attrs.emplace_back("affect_type","min");
        changed.attrs.emplace_back("share_filter","other");
        check(raven::read_xml2_affecter(changed).mode==3&&
              raven::read_xml2_affecter(changed).share_filter==0,"Min/share reset decoding failed");
        auto defaults=raven::read_xml2_affecter(xml1::XmlNode{"affecter",{}, {}});
        check(raven::xml2_damage_scope_matches(defaults,0)==true,"Empty damage scope restricted query");
        auto scoped=defaults;
        scoped.scopes={{"scope_damage","dmg_fire"}};
        check(raven::xml2_damage_scope_matches(scoped,0x10000)==true&&
              raven::xml2_damage_scope_matches(scoped,0x8000)==false,"Fire boost leaks into energy damage");
        scoped.scopes.emplace_back("damageType","DMG_ENERGY");
        check(raven::xml2_damage_scope_matches(scoped,0x8000)==true&&
              raven::xml2_damage_scope_matches(scoped,0x10000)==true&&
              raven::xml2_damage_scope_matches(scoped,0x80)==false,"Repeated damage scopes did not OR");
        scoped.scopes={{"scope_damage","dmg_elemental"}};
        check(raven::xml2_damage_scope_matches(scoped,0x40000)==true,
              "Elemental scope incorrectly required every bit");
        scoped.scopes={{"scope_damage","unknown"}};
        check(raven::xml2_damage_scope_matches(scoped,0x80)==true&&
              raven::xml2_damage_scope_matches(scoped,0)==false,"Unknown native scope fallback changed");
        scoped.scopes.emplace_back("scope_node","power1");
        check(!raven::xml2_damage_scope_matches(scoped,0x80).has_value(),"Unsupported scope treated as accepted");
        for(unsigned enabled=0;enabled<2;++enabled)for(unsigned owner=0;owner<2;++owner) {
            check(raven::xml2_share_filter_matches(0,enabled,owner),"Default share filter rejected");
            check(raven::xml2_share_filter_matches(1,enabled,owner)==(!enabled||owner),"Owner filter failed");
            check(raven::xml2_share_filter_matches(2,enabled,owner)==(!enabled||!owner),"Shared filter failed");
        }
        check(defaults.mode==0&&defaults.share_filter==0&&defaults.level=="0",
              "Affecter reset defaults changed");
        check(raven::read_xml2_literal("2.5")==std::array<float,2>{2.5f,2.5f},"Literal scalar failed");
        check(raven::read_xml2_literal("  -2.5 7")==std::array<float,2>{-2.5f,7},"Literal range failed");
        check(raven::read_xml2_literal("2\t7")==std::array<float,2>{2,2},"Tab incorrectly selected range");
        check(raven::read_xml2_literal("2 ")==std::array<float,2>{2,0},"Missing second scan lost native zero");
        check(raven::read_xml2_literal("+2")==std::array<float,2>{0,0},"Leading plus bypassed native gate");
        check(raven::read_xml2_literal("-1e30 7")==std::array<float,2>{0,7},"Endpoints not independently sanitized");
        check(raven::read_xml2_literal("1e99 7")==std::array<float,2>{0,7},"Overflow prevented upper scan");
        check(raven::read_xml2_literal(" %buff")==std::array<float,2>{0,0},"Trimmed percent became reference");
        check(raven::read_xml2_literal("dmg2",&constants)==std::array<float,2>{4,6},"Literal named table failed");
        for(const auto& value:{"max","1 2 3","nan"}) {
            bool rejected=false;
            try {from_text(std::string("<talents><talent name='x'><talentvalues><talentvalue name='v' level='1' value='")+value+"'/></talentvalues></talent></talents>");}
            catch(const std::exception&) {rejected=true;}
            check(rejected,"Unsupported value silently accepted");
        }
        std::cout<<"PASS: XML2 talent ingestion, retained UI/requirements, range evaluation and explicit unsupported-data failures\n";
        return 0;
    } catch(const std::exception& e) {std::cerr<<e.what()<<'\n';return 1;}
}
