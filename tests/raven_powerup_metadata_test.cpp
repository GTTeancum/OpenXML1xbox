#include "raven_powerup_metadata.h"
#include <iostream>
#include <stdexcept>

static void check(bool value,const char *why){if(!value)throw std::runtime_error(why);}
int main(){try {
    const uint32_t source=0x1000000,copy=source+192;
    raven::PowerupFields imported={{"class","harming"},{"damage","%sun_flmthrow_sdmg"},
        {"attacks_per_second","3"},{"life","1"}};
    for(unsigned i=0;i<1000;++i) {
        raven_xml1_powerup_metadata_reset(source);
        check(!raven::xml1_powerup_metadata_snapshot(source),"Reused definition retained metadata");
        raven::xml1_powerup_metadata_bind(source,imported);
        raven_xml1_powerup_metadata_clone(copy,source);
        auto snapshot=raven::xml1_powerup_metadata_snapshot(copy);
        check(snapshot&&*snapshot==imported,"Native clone lost imported operand text");
        raven_xml1_powerup_metadata_retire(source);
        check(!raven::xml1_powerup_metadata_snapshot(source),"Destroyed definition retained metadata");
        check(raven::xml1_powerup_metadata_snapshot(copy)==snapshot,"Destroying source invalidated clone");
        raven_xml1_powerup_metadata_reset(copy);
        check(snapshot&&*snapshot==imported,"Caller snapshot invalidated by native reset");
        raven::xml1_powerup_metadata_bind(copy,imported);
        raven_xml1_powerup_metadata_clone(copy,source);
        check(!raven::xml1_powerup_metadata_snapshot(copy),"Unbound native clone retained old imported data");
    }
    raven::xml1_powerup_metadata_bind(source,imported);
    raven_xml1_powerup_metadata_clone(source,source);
    check(raven::xml1_powerup_metadata_snapshot(source)==imported,"Self clone lost metadata");
    auto changed=imported;changed["damage"]="%sun_fireblast_sdmg";
    raven::xml1_powerup_metadata_bind(source,changed);
    check(raven::xml1_powerup_metadata_snapshot(source)==changed,"Rebinding retained stale operand");
    raven::xml1_powerup_metadata_bind(source,{});
    check(!raven::xml1_powerup_metadata_snapshot(source),"Empty bind retained metadata");
    bool rejected=false;
    try{raven::xml1_powerup_metadata_bind(0,imported);}catch(const std::invalid_argument&){rejected=true;}
    check(rejected,"Null definition accepted");
    raven_xml1_powerup_metadata_attribute(source,"damage","%sun_flmthrow_sdmg");
    raven_xml1_powerup_metadata_attribute(source,"class","harming");
    raven_xml1_powerup_metadata_attribute(source,"attacks_per_second","3");
    raven_xml1_powerup_metadata_attribute(source,"life","1");
    raven_xml1_powerup_metadata_attribute(source,"unknown","ignored");
    check(raven::xml1_powerup_metadata_snapshot(source)==imported,"Parser capture lost unordered operands or retained unknown field");
    raven_xml1_powerup_metadata_attribute(source,"damage","%sun_fireblast_sdmg");
    check(raven::xml1_powerup_metadata_snapshot(source)==changed,"Repeated attribute retained stale operand");
    raven_xml1_powerup_metadata_clone(copy,source);
    check(raven::xml1_powerup_metadata_snapshot(copy)==changed,"Captured operands lost on clone");
    raven_xml1_powerup_metadata_attribute(source,"DAMAGE","%CaseSensitive_Symbol");
    raven_xml1_powerup_metadata_attribute(source,"damageType","dmg_fire");
    raven_xml1_powerup_metadata_attribute(source,"USE_TINT","True");
    raven_xml1_powerup_metadata_attribute(source,"use_trait_scale","false");
    raven_xml1_powerup_metadata_attribute(source,"allow_non_actors","true");
    changed["damage"]="%CaseSensitive_Symbol";changed["damagetype"]="dmg_fire";
    changed["use_tint"]="True";changed["use_trait_scale"]="false";
    changed["allow_non_actors"]="true";
    check(raven::xml1_powerup_metadata_snapshot(source)==changed,"Case-insensitive field capture altered values or lost harming flags");
    raven_xml1_powerup_metadata_attribute(source,"SHARE_ENEMIES","True");
    raven_xml1_powerup_metadata_attribute(source,"share_life","1");
    raven_xml1_powerup_metadata_attribute(source,"life","%sun_ionshield_life");
    check(raven_xml1_powerup_share_enemies(source),"Enemy sharing declaration dropped");
    raven_xml1_powerup_metadata_clone(copy,source);
    check(raven_xml1_powerup_share_enemies(copy),"Enemy sharing lost on native copy");
    raven_xml1_powerup_metadata_shared_copy(copy);
    check(raven::xml1_powerup_metadata_snapshot(copy)->at("life")=="1","Shared recipient retained owner's duration");
    check(raven::xml1_powerup_metadata_snapshot(source)->at("life")=="%sun_ionshield_life","Shared lifetime mutated original owner");
    raven_xml1_powerup_metadata_retire(copy);
    check(!raven_xml1_powerup_share_enemies(copy),"Retired sharing policy survived");
    raven_xml1_powerup_metadata_attribute(source,"share_enemies","false");
    check(!raven_xml1_powerup_share_enemies(source),"False sharing enabled");
    raven::xml1_powerup_metadata_bind(copy,{{"class","harming"},{"life","%sun_ionshield_life"}});
    raven_xml1_powerup_metadata_shared_copy(copy);
    check(!raven::xml1_powerup_metadata_snapshot(copy)->count("life"),"Absent share_life retained owner duration override");
    const raven::PowerupEffects flames={
        {{"effect","char/sun/p2_power"},{"bolt","Bip01 R Forearm"},{"fxlevel","1"},{"how_used","primary"}},
        {{"effect","char/sun/p2_power"},{"bolt","Bip01 L Forearm"},{"fxlevel","1"},{"how_used","primary"}}};
    raven::xml1_powerup_effects_bind(source,flames);
    raven_xml1_powerup_metadata_clone(copy,source);
    check(raven::xml1_powerup_effects_snapshot(copy)==flames,"Clone collapsed the two forearm declarations");
    auto retained=raven::xml1_powerup_effects_snapshot(copy);
    retained[0]["bolt"]="Bip01 Head";
    check(raven::xml1_powerup_effects_snapshot(copy)==flames,"Snapshot mutation changed live definitions");
    raven_xml1_powerup_metadata_retire(source);
    check(raven::xml1_powerup_effects_snapshot(source).empty(),"Retired definition retained effects");
    check(raven::xml1_powerup_effects_snapshot(copy)==flames,"Source retirement invalidated cloned effects");
    raven_xml1_powerup_metadata_clone(copy,copy);
    check(raven::xml1_powerup_effects_snapshot(copy)==flames,"Self clone lost effects");
    raven_xml1_powerup_metadata_clone(copy,source);
    check(raven::xml1_powerup_effects_snapshot(copy).empty(),"Unbound clone retained stale effects");
    raven::xml1_powerup_effects_bind(source,flames);
    raven_xml1_powerup_metadata_reset(source);
    check(raven::xml1_powerup_effects_snapshot(source).empty(),"Reused definition retained effects");
    for(const auto& effect:flames) {
        auto index=raven_xml1_powerup_effect_begin(source);
        for(const auto& field:effect)
            raven_xml1_powerup_effect_attribute(source,index,field.first.c_str(),field.second.c_str());
    }
    check(raven::xml1_powerup_effects_snapshot(source)==flames,"Guest parser bridge lost effect attributes");
    raven_xml1_powerup_effect_attribute(source,0,"FXLEVEL","2");
    auto updated=flames;updated[0]["fxlevel"]="2";
    check(raven::xml1_powerup_effects_snapshot(source)==updated,"Guest parser bridge failed case-insensitive field replacement");
    uint32_t scope=99;
    raven_xml1_powerup_effect_scope(source,8);
    raven_xml1_powerup_metadata_clone(copy,source);
    check(raven_xml1_powerup_effect_scope_get(copy,&scope)&&scope==8,"Clone lost owning package scope");
    raven_xml1_powerup_metadata_retire(source);
    check(!raven_xml1_powerup_effect_scope_get(source,&scope),"Retired definition retained scope");
    check(raven_xml1_powerup_effect_scope_get(copy,&scope)&&scope==8,"Retirement invalidated cloned scope");
    raven_xml1_powerup_metadata_clone(copy,source);
    check(!raven_xml1_powerup_effect_scope_get(copy,&scope),"Unbound clone retained scope");
    raven::xml1_powerup_effects_bind(source,flames);
    raven_xml1_powerup_effect_scope(source,8);
    raven_xml1_powerup_metadata_reset(source);
    check(!raven_xml1_powerup_effect_scope_get(source,&scope),"Reused definition retained scope");
    raven::xml1_powerup_effects_bind(source,flames);
    raven_xml1_powerup_effect_scope(source,8);
    raven_xml1_powerup_effects_clear(source);
    check(!raven_xml1_powerup_effect_scope_get(source,&scope),"Cleared effects retained package scope");
    check(raven::xml1_powerup_effects_snapshot(source).empty(),"Effect clear retained stale declarations");
    raven::xml1_powerup_effects_bind(source,flames);
    struct Visit {uint32_t definition;unsigned count;};
    Visit visit{source,0};
    raven_xml1_powerup_effects_visit(source,[](void *opaque,const char *effect,
        const char *bolt,const char *level,const char *usage) {
        auto& v=*static_cast<Visit*>(opaque);
        check(effect&&bolt&&level&&usage,"Visitor lost required fields");
        ++v.count;
        // Native callbacks may retire the definition during the first launch.
        // Remaining visits must use the owned snapshot without a lock held.
        raven_xml1_powerup_metadata_reset(v.definition);
    },&visit);
    check(visit.count==2,"Retirement during visitor lost duplicate effect declarations");
    raven::xml1_powerup_effects_bind(source,{{{"effect","base/test"},{"bolt","Bip01 Spine2"}},
        {{"effect","base/test"},{"fxlevel","2"},{"how_used","deactivation"}}});
    unsigned defaults=0;
    raven_xml1_powerup_effects_visit(source,[](void* opaque,const char*,const char*,const char* level,const char* usage){
        auto& index=*static_cast<unsigned*>(opaque);
        check(std::string(level)==(index?"2":"0"),"Missing or explicit FX level changed");
        check(std::string(usage)==(index?"deactivation":"primary"),"Missing or explicit FX usage changed");
        ++index;
    },&defaults);
    check(defaults==2,"Default FX visit count");
    raven_xml1_powerup_metadata_attribute(source,"REMOVE_ON_NODE_END","True");
    check(raven_xml1_powerup_remove_on_node_end(source),"Node-end declaration missing");
    raven_xml1_powerup_metadata_clone(copy,source);
    raven_xml1_powerup_metadata_reset(source);
    check(!raven_xml1_powerup_remove_on_node_end(source),"Reused definition kept node-end policy");
    check(raven_xml1_powerup_remove_on_node_end(copy),"Clone lost node-end policy");
    raven_xml1_powerup_metadata_attribute(copy,"remove_on_node_end","false");
    check(!raven_xml1_powerup_remove_on_node_end(copy),"False node-end declaration enabled");
    raven_xml1_powerup_metadata_reset(source);
    raven_xml1_powerup_metadata_attribute(source,"damagePercent","%bish_fury_dmg");
    raven_xml1_powerup_metadata_attribute(source,"damageSum","%FlatBonus");
    raven_xml1_powerup_metadata_attribute(source,"mirror","true");
    raven_xml1_powerup_metadata_attribute(source,"class","add_attack");
    raven::PowerupFields attack={{"damagepercent","%bish_fury_dmg"},
        {"damagesum","%FlatBonus"},{"mirror","true"},{"class","add_attack"}};
    check(raven::xml1_powerup_metadata_snapshot(source)==attack,"Add-attack parser lost symbols or attribute ordering");
    raven_xml1_powerup_metadata_clone(copy,source);
    raven_xml1_powerup_metadata_retire(source);
    check(raven::xml1_powerup_metadata_snapshot(copy)==attack,"Add-attack clone depends on retired source");
    raven_xml1_powerup_metadata_reset(copy);
    check(!raven::xml1_powerup_metadata_snapshot(copy),"Reused definition retained add-attack operands");
    auto af=raven_xml1_powerup_affecter_begin(source);
    raven_xml1_powerup_affecter_attribute(source,af,"ATTRIBUTE","attack_rating");
    raven_xml1_powerup_affecter_attribute(source,af,"level","%bish_fury_ar");
    raven_xml1_powerup_metadata_clone(copy,source);
    auto owned=raven::xml1_powerup_affecters_snapshot(copy);
    raven_xml1_powerup_metadata_retire(source);
    check(owned.size()==1&&owned[0].at("level")=="%bish_fury_ar","Rating operand lost");
    check(raven::xml1_powerup_affecters_snapshot(copy)==owned,"Rating clone depends on retired source");
    check(raven::xml1_powerup_affecters_snapshot(source).empty(),"Retired rating retained");
    raven_xml1_powerup_metadata_clone(copy,source);
    check(raven::xml1_powerup_affecters_snapshot(copy).empty(),"Unbound clone retained stale rating");
    check(owned[0].at("attribute")=="attack_rating","Snapshot invalidated or key case lost");
    raven_xml1_powerup_metadata_reset(source);
    raven_xml1_powerup_metadata_reset(copy);
    raven_xml1_powerup_metadata_attribute(source,"class","harming");
    auto scope_index=raven_xml1_powerup_affecter_begin(source);
    raven_xml1_powerup_affecter_attribute(source,scope_index,"attribute","powerup_scope");
    raven_xml1_powerup_affecter_attribute(source,scope_index,"share_filter","shared");
    check(!raven_xml1_powerup_class_share_matches(source,120),"Shared class ran on owner");
    check(raven_xml1_powerup_class_share_matches(source,0),"Non-sharing powerup filtered");
    raven_xml1_powerup_metadata_clone(copy,source);
    raven_xml1_powerup_metadata_shared_copy(copy);
    check(raven_xml1_powerup_class_share_matches(copy,0),"Shared class rejected recipient");
    const raven::PowerupFields owner_filter={{"share_filter","owner"}};
    check(raven::xml1_powerup_share_matches(owner_filter,source,120),"Owner affecter rejected owner");
    check(!raven::xml1_powerup_share_matches(owner_filter,copy,0),"Owner affecter reached recipient");
    raven::xml1_powerup_effects_bind(source,{{{"effect","owner_fx"},{"share_filter","owner"}},
        {{"effect","shared_fx"},{"share_filter","shared"}}});
    raven_xml1_powerup_metadata_clone(copy,source);
    raven_xml1_powerup_metadata_shared_copy(copy);
    std::string selected;
    auto collect=[](void* p,const char* effect,const char*,const char*,const char*){*static_cast<std::string*>(p)+=effect;};
    raven_xml1_powerup_effects_visit_shared(source,120,collect,&selected);
    check(selected=="owner_fx","Owner received recipient FX");selected.clear();
    raven_xml1_powerup_effects_visit_shared(copy,0,collect,&selected);
    check(selected=="shared_fx","Recipient received owner FX");
    raven_xml1_powerup_metadata_reset(copy);
    check(raven::xml1_powerup_share_matches(owner_filter,copy,0),"Reused definition kept recipient role");
    std::cout<<"PASS imported definition metadata: clone, final retirement, address reuse, snapshot ownership and unbound replacement\n";
    return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
