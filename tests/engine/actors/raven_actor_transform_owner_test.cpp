#include "engine/actors/raven_actor_transform_owner.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#define CHECK(x) do {if(!(x)){std::fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);std::exit(1);}}while(0)
int main() {
    raven_actor_transform_snapshot snapshot{};
    CHECK(!raven_actor_transform_capture(0,1,12,"a"));
    CHECK(!raven_actor_transform_capture(1,0,12,"a"));
    CHECK(!raven_actor_transform_capture(1,1,12,""));
    std::string original="data/powerstyles/"+std::string(300,'x');
    uint64_t token=raven_actor_transform_capture(100,0x10001,12,original.c_str());CHECK(token);
    original[0]='!'; // A caller's later mutation cannot change the owned name.
    CHECK(raven_actor_transform_capture(100,0x10001,99,"replacement")==token);
    CHECK(raven_actor_transform_read(100,0x10001,&snapshot,nullptr,0));
    CHECK(snapshot.category==12&&!snapshot.active&&snapshot.name_bytes==original.size()+1);
    char small[4]={'a','b','c','d'};auto prior=snapshot;
    CHECK(!raven_actor_transform_read(100,0x10001,&snapshot,small,sizeof(small)));
    CHECK(!std::memcmp(small,"abcd",4)&&snapshot.revision==prior.revision);
    char full[400];CHECK(raven_actor_transform_read(100,0x10001,&snapshot,full,sizeof(full)));
    CHECK(full[0]=='d'&&std::strlen(full)==original.size());
    CHECK(!raven_actor_transform_read(100,0x20001,&snapshot,full,sizeof(full)));
    char character[]="temporary_form", identity[64];
    CHECK(!raven_actor_transform_character(100,0x10001,identity,sizeof(identity)));
    CHECK(!raven_actor_transform_activate(100,0x10001,token,nullptr));
    uint64_t active=raven_actor_transform_activate(100,0x10001,token,character);CHECK(active&&active!=token);
    character[0]='!';
    CHECK(raven_actor_transform_character(100,0x10001,identity,sizeof(identity))&&!std::strcmp(identity,"temporary_form"));
    CHECK(!raven_actor_transform_character(100,0x20001,identity,sizeof(identity)));
    std::strcpy(identity,"untouched");
    CHECK(!raven_actor_transform_character(100,0x10001,identity,3)&&!std::strcmp(identity,"untouched"));
    CHECK(!raven_actor_transform_forget(100,0x10001,token));
    CHECK(raven_actor_transform_read(100,0x10001,&snapshot,nullptr,0)&&snapshot.active);
    uint64_t restoring=raven_actor_transform_deactivate(100,0x10001,active);
    CHECK(restoring&&restoring!=active);
    CHECK(!raven_actor_transform_character(100,0x10001,identity,sizeof(identity)));
    CHECK(!raven_actor_transform_deactivate(100,0x10001,active));
    CHECK(raven_actor_transform_deactivate(100,0x10001,restoring)==restoring);
    CHECK(raven_actor_transform_read(100,0x10001,&snapshot,nullptr,0)&&!snapshot.active);
    uint64_t other=raven_actor_transform_capture(200,0x10002,3,"another");CHECK(other);
    uint64_t reused=raven_actor_transform_capture(100,0x20001,12,"new occupant");CHECK(reused);
    CHECK(!raven_actor_transform_activate(100,0x10001,active,"stale"));
    CHECK(!raven_actor_transform_forget(100,0x10001,active));
    CHECK(raven_actor_transform_read(100,0x20001,&snapshot,full,sizeof(full)));
    CHECK(!snapshot.active&&!std::strcmp(full,"new occupant"));
    CHECK(!raven_actor_transform_character(100,0x20001,identity,sizeof(identity)));
    raven_actor_transform_reset(100);
    CHECK(!raven_actor_transform_read(100,0x20001,&snapshot,nullptr,0));
    uint64_t recaptured=raven_actor_transform_capture(100,0x20001,12,"fresh");CHECK(recaptured!=reused);
    CHECK(!raven_actor_transform_forget(100,0x20001,reused));
    CHECK(raven_actor_transform_forget(100,0x20001,recaptured));
    CHECK(raven_actor_transform_read(200,0x10002,&snapshot,full,sizeof(full))&&!std::strcmp(full,"another"));
    CHECK(raven_actor_transform_forget(200,0x10002,other));
    char move[20]="untouched",authored[]="form_attack";
    CHECK(!raven_transform_definition_get(300,0,move)&&!std::strcmp(move,"untouched"));
    CHECK(raven_transform_definition_set(300,0,authored));authored[0]='!';
    CHECK(raven_transform_definition_get(300,0,move)&&!std::strcmp(move,"form_attack"));
    CHECK(raven_transform_definition_set(300,3,""));
    CHECK(raven_transform_definition_get(300,3,move)&&!*move);
    CHECK(!raven_transform_definition_get(300,1,move));
    CHECK(!raven_transform_definition_set(300,4,"invalid"));
    CHECK(!raven_transform_definition_set(300,0,"12345678901234567890"));
    CHECK(raven_transform_definition_get(300,0,move)&&!std::strcmp(move,"form_attack"));
    CHECK(raven_transform_definition_set(301,0,"other_form"));
    raven_transform_definition_reset(300);
    CHECK(!raven_transform_definition_get(300,0,move));
    CHECK(raven_transform_definition_get(301,0,move)&&!std::strcmp(move,"other_form"));
    CHECK(raven_transform_definition_set(300,1,"new_definition"));
    CHECK(!raven_transform_definition_get(300,0,move));
    raven_transform_definition_reset(300);raven_transform_definition_reset(301);
    std::puts("PASS transformation ownership: independent actors, copied long names, repeated enable, stale callbacks, generation/address reuse and retirement");
}
