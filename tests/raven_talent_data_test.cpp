#include "raven_talent_data.h"
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
                auto definitions=raven::load_talents(bytes.data(),(unsigned)bytes.size());
                talents+=(unsigned)definitions.size();
                for(const auto& d:definitions) for(const auto& symbol:d.values) {
                    ++symbols;
                    for(unsigned rank=1;rank<=45;++rank) {
                        float pair[2];check(d.evaluate(symbol.first,rank,pair),"Named value evaluation failed");
                        check(std::isfinite(pair[0])&&std::isfinite(pair[1]),"Nonfinite evaluation");++evaluations;
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
