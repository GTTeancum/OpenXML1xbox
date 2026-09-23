/* Real generated XML1 definition routines; private mapped-memory fixture.
 * No game entry point, renderer, audio, host input or save I/O. */
#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_powerup_guest.h"
#include "raven_native_energy_guest.h"
#include "raven_native_energy.h"
#include "raven_harming_callbacks.h"
#include "raven_powerup_metadata.h"
#include "raven_rating.h"
#include "raven_bishop_guest.h"
#include "raven_victim_event_guest.h"
#include <stdio.h>
#include <string.h>
int raven_powerup_fixture(int stage,uint32_t source,uint32_t destination);
int raven_native_projectile_fire_parse(uint32_t event,const char *value);
uint8_t raven_native_projectile_fire_tag(uint32_t event);
int raven_physical_health_test(void);
int raven_harm_pulse_queue_fixture(uint32_t base);
int xml1_script_extensions_fixture(uint32_t pool);
int raven_startup_catalog_fixture(void);
int raven_harming_native_fixture(raven_guest_read read,uint32_t definition,
    uint32_t powerups,uint32_t talents,uint32_t actor,float expected,int valid);
static int fixture_read(void *context,uint32_t address,void *out,size_t size) {
    (void)context;
    if(address<0x10000u||(uint64_t)address+size>0x08000000ull)return 0;
    memcpy(out,(const void*)XBOX_PTR(address),size);return 1;
}

int xml1_powerup_definition_test(void) {
    uint32_t stack=g_esp,pool=stack-0x70000,source,destination;
    {
        const uint32_t event=pool+0x60000,attack=event+0x100,copy=attack+0x100;
        const uint32_t record=copy+0x100,record_copy=record+0x100,key=record_copy+0x100,value=key+64;
        memset((void*)XBOX_PTR(event),0x5A,0x700);
        g_ecx=attack;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000CEEE0u,sub_000CEEE0);
        if(g_esp!=stack||MEM8(attack+0x29))return 101;
        MEM32(event+0x14)=attack;MEM8(attack+0x27)=77;
        strcpy((char*)XBOX_PTR(key),"VictimEventTag2");strcpy((char*)XBOX_PTR(value),"201");
        g_ecx=event;PUSH32(g_esp,value);PUSH32(g_esp,key);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000CF6B0u,sub_000CF6B0);
        if(g_esp!=stack||!(g_eax&255)||MEM8(attack+0x29)!=201||MEM8(attack+0x27)!=77)return 102;
        g_ecx=copy;PUSH32(g_esp,attack);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000CFD00u,sub_000CFD00);
        if(g_esp!=stack||MEM8(copy+0x29)!=201||MEM8(copy+0x27)!=77)return 103;
        if(raven_xml1_guest_damage_record(record,0,1,0,0)!=RAVEN_FOUND||MEM8(record+0x56))return 104;
        MEM8(record+0x55)=77;MEM8(record+0x56)=201;
        g_ecx=record_copy;PUSH32(g_esp,record);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002B720u,sub_0002B720);
        if(g_esp!=stack||MEM8(record_copy+0x56)!=201||MEM8(record_copy+0x55)!=77)return 105;
        if(raven_xml1_guest_damage_record(record_copy,0,1,0,0)!=RAVEN_FOUND||MEM8(record_copy+0x56))return 106;
        puts("PASS secondary victim tag: native reset, parse, attack clone, hit-record clone and address reuse; primary tag preserved");
    }
    {
        const uint32_t projectile=pool+0x62000, other=projectile+0x400;
        const uint32_t seed=other+0x400, hit=seed+0x100;
        memset((void*)XBOX_PTR(projectile),0,0xA00);
        MEM32(projectile+0x1C)=0x201;MEM32(other+0x1C)=0x202;
        MEM32(seed)=0x203;MEM32(seed+0x4C)=0x123456;MEM32(seed+0x50)=0x112233;MEM8(seed+0x54)=9;
        MEM8(seed+0x55)=100;MEM8(seed+0x56)=101;MEM16(seed+8)=7;
        g_ecx=projectile;PUSH32(g_esp,seed);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00096810u,sub_00096810);
        if(g_esp!=stack||MEM16(projectile+0x336)!=7)return 107;
        MEM32(hit)=0x203;MEM16(hit+8)=9;
        raven_projectile_victim_restore(projectile,hit);
        if(MEM32(hit+0x4C)!=0x123456||MEM32(hit+0x50)!=0x112233||MEM8(hit+0x54)!=9||MEM8(hit+0x55)!=100||MEM8(hit+0x56)!=101||MEM16(hit+8)!=9)return 108;
        // A second projectile retains its own immutable move/tags after the
        // originating stack record is overwritten by another attack.
        MEM32(seed+0x4C)=0x654321;MEM8(seed+0x56)=201;
        raven_projectile_victim_store(other,seed);
        memset((void*)XBOX_PTR(seed),0,0x64);
        raven_projectile_victim_restore(projectile,hit);
        if(MEM32(hit+0x4C)!=0x123456||MEM32(hit+0x50)!=0x112233||MEM8(hit+0x54)!=9||MEM8(hit+0x56)!=101)return 109;
        raven_projectile_victim_restore(other,hit);
        if(MEM32(hit+0x4C)!=0x654321||MEM8(hit+0x56)!=201)return 110;
        memset((void*)XBOX_PTR(hit),0,0x64);MEM32(hit)=0x204;
        raven_projectile_victim_restore(other,hit);
        if(MEM8(hit+0x55)||MEM8(hit+0x56)||MEM32(hit+0x4C))return 111;
        MEM32(hit)=0x203;MEM32(projectile+0x1C)=0x401;
        raven_projectile_victim_restore(projectile,hit);
        if(MEM8(hit+0x55)||MEM8(hit+0x56))return 112;
        MEM32(projectile+0x1C)=0x201;
        raven_projectile_victim_retire(projectile);
        raven_projectile_victim_restore(projectile,hit);
        if(MEM8(hit+0x55)||MEM8(hit+0x56))return 113;
        raven_projectile_victim_store(other,seed); // Untagged reuse clears.
        raven_projectile_victim_restore(other,hit);
        if(MEM8(hit+0x55)||MEM8(hit+0x56))return 114;
        // Independent explosion context through the real native store.
        MEM32(projectile+0x1C)=0x201;
        MEM32(seed)=0x203;MEM32(seed+0x4C)=0xABCDEF;MEM32(seed+0x50)=0x123;
        MEM8(seed+0x54)=5;MEM8(seed+0x55)=42;MEM8(seed+0x56)=43;MEM16(seed+8)=13;
        raven_projectile_victim_store(projectile,seed);
        MEM32(seed+0x4C)=0xFEDCBA;MEM8(seed+0x55)=100;MEM8(seed+0x56)=101;
        raven_projectile_explosion_scope(seed);
        g_ecx=projectile;PUSH32(g_esp,seed);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00096910u,sub_00096910);
        raven_projectile_explosion_scope(0);
        if(g_esp!=stack||MEM16(projectile+0x338)!=13)return 181;
        memset((void*)XBOX_PTR(seed),0,0x64);
        memset((void*)XBOX_PTR(hit),0,0x64);MEM32(hit)=0x203;MEM16(hit+8)=17;MEM32(hit+0x44)=55;
        raven_projectile_explosion_victim_restore(projectile,hit);
        if(MEM32(hit+0x4C)!=0xFEDCBA||MEM8(hit+0x55)!=100||MEM8(hit+0x56)!=101||MEM16(hit+8)!=17||MEM32(hit+0x44)!=55)return 182;
        raven_projectile_victim_restore(projectile,hit);
        if(MEM32(hit+0x4C)!=0xABCDEF||MEM8(hit+0x55)!=42||MEM8(hit+0x56)!=43)return 183;
        memset((void*)XBOX_PTR(hit),0,0x64);MEM32(hit)=0x204;
        raven_projectile_explosion_victim_restore(projectile,hit);
        if(MEM8(hit+0x55)||MEM32(hit+0x4C))return 184;
        MEM32(hit)=0x203;MEM32(projectile+0x1C)=0x401;
        raven_projectile_explosion_victim_restore(projectile,hit);
        if(MEM8(hit+0x55))return 185;
        MEM32(projectile+0x1C)=0x201;
        raven_projectile_victim_retire(projectile);
        raven_projectile_explosion_victim_restore(projectile,hit);
        if(MEM8(hit+0x55))return 186;
        // Exercise the generated explosion export too. A null native owner
        // takes its normal projectile-source fallback without a world lookup.
        MEM32(seed)=0x201;MEM32(seed+0x4C)=0xFEDCBA;MEM8(seed+0x55)=100;
        MEM16(seed+8)=13;MEM32(seed+0x10)=0x80;
        raven_projectile_explosion_scope(seed);
        g_ecx=projectile;PUSH32(g_esp,seed);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00096910u,sub_00096910);
        raven_projectile_explosion_scope(0);
        MEM32(projectile+0x2C4)=0;MEM32(projectile+0x2F0)=200;
        memset((void*)XBOX_PTR(hit),0,0x64);
        g_ecx=projectile;PUSH32(g_esp,hit);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00096960u,sub_00096960);
        if(g_esp!=stack||MEM32(hit)!=0x201||MEM16(hit+8)!=13||MEM32(hit+0x10)!=0x80||MEM32(hit+0x44)!=201||MEM8(hit+0x55)!=100||MEM32(hit+0x4C)!=0xFEDCBA)return 187;
        raven_projectile_explosion_victim_store(projectile,seed+0x80); // Cleared untagged source.
        memset((void*)XBOX_PTR(hit),0,0x64);MEM32(hit)=0x201;
        raven_projectile_explosion_victim_restore(projectile,hit);
        if(MEM8(hit+0x55)||MEM32(hit+0x4C))return 188;
        puts("PASS explosion victim context: native store, separate direct tags, stack reuse, scalar preservation, source/generation guards and retirement");
        // A legacy spawn must not gain callbacks from its direct record.
        MEM8(seed+0x55)=100;raven_projectile_explosion_victim_store(projectile,seed);
        g_ecx=projectile;PUSH32(g_esp,seed);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00096910u,sub_00096910);
        memset((void*)XBOX_PTR(hit),0,0x64);MEM32(hit)=0x201;
        raven_projectile_explosion_victim_restore(projectile,hit);
        if(MEM8(hit+0x55)||MEM32(hit+0x4C))return 189;
        puts("PASS explosion scope: legacy XML1 direct tags do not become explosion callbacks");
        puts("PASS projectile victim context: native store, independent shots, stack reuse, source/generation guards, retirement and untagged reuse");
    }
    {
        const uint32_t spawned=pool+0x60000, owner=spawned+0x400,record=owner+0x400,table=record+0x100;
        const uint32_t old_id=MEM32(0x48B988),old_bits=MEM32(0x48B99C);
        memset((void*)XBOX_PTR(spawned),0,0xA00);
        // Use the real native type getter and record-copy routine. The
        // private fixture publishes only the relevant type bit, not a world.
        MEM32(0x48B988)=0;MEM32(0x48B99C)=2;
        MEM32(spawned)=table;MEM32(table)=0x46B20;
        MEM32(owner+4)=1u<<27;MEM32(record)=0x201;
        MEM32(record+0x4C)=0x123456;MEM32(record+0x50)=0xABCDEF;
        MEM8(record+0x55)=100;MEM8(record+0x56)=101;
        MEM8(spawned+0x330)=5;
        g_eax=0x1357;g_ecx=0x2468;g_edx=0xABCD;
        raven_spawn_harm_context(spawned,owner,record);
        if(g_esp!=stack||g_eax!=0x1357||g_ecx!=0x2468||g_edx!=0xABCD||
           MEM32(spawned+0x2CC)!=0x201||MEM32(spawned+0x318)!=0x123456||
           MEM32(spawned+0x31C)!=0xABCDEF||MEM8(spawned+0x321)!=100||
           MEM8(spawned+0x322)!=101||MEM8(spawned+0x330)!=5||!(MEM32(spawned+4)&(1u<<27)))return 118;
        MEM32(0x48B99C)=0;MEM32(record)=0x401;
        raven_spawn_harm_context(spawned,owner,record);
        if(MEM32(spawned+0x2CC)!=0x201)return 119;
        MEM32(0x48B988)=old_id;MEM32(0x48B99C)=old_bits;
        puts("PASS spawned harm context: native record copy, source team, both tags, preserved flags/registers and unrelated-type exclusion");
    }
    if(raven_harm_pulse_queue_fixture(pool+0x60000))return 120;
    if(raven_physical_health_test())return 36;
    if(xml1_script_extensions_fixture(pool+0x20000))return 37;
    {
        const int fp=g_fp_top;
        MEM32(0x49954C)=1;MEM32(0x498E88)=0x3CCD14;
        MEMF(0x498E88+0x39C)=25.0f;
        if(raven_xml1_guest_game_time()!=25.0f)return 23;
        MEMF(0x498E88+0x39C)=25.5f;
        if(raven_xml1_guest_game_time()!=25.5f)return 24;
        MEM32(0x50622C)=1;
        if(raven_xml1_guest_random_unit()!=16807.0/2147483648.0||MEM32(0x50622C)!=16807)return 25;
        if(raven_xml1_guest_random_unit()!=282475249.0/2147483648.0||MEM32(0x50622C)!=282475249)return 26;
        if(g_fp_top!=fp||g_esp!=stack)return 27;
        puts("PASS native XML1 game clock and RNG: current simulation time, one shared RNG step per call, balanced floating/guest stacks");
    }
    {
        const uint32_t manager=0x4DB2B8,entity=pool+0xA000,table=entity+0x100;
        /* Private process: publish the real native manager vtable with one
         * live entity slot. Type getter 2E6B0 returns this descriptor itself. */
        MEM32(0x4E7044)=1;MEM32(manager)=0x3D4B7C;
        MEM32(manager+0x185C)=511;MEM32(manager+0x105C+4)=0x201;
        MEM32(manager+0x1018)=2;MEM32(manager+8)=entity;
        memset((void*)XBOX_PTR(entity),0,0x200);
        MEM32(entity)=table;MEM32(table)=0x2E6B0;
        {
            // Real generated projectile import/export with a live native
            // source handle, then with that generation invalidated.
            const uint32_t projectile=pool+0x62000,seed=projectile+0x800,hit=seed+0x100;
            memset((void*)XBOX_PTR(seed),0,0x200);
            MEM32(projectile+0x1C)=0x202;MEM32(seed)=0x201;
            MEM32(seed+0x4C)=0x123456;MEM32(seed+0x50)=0x112233;MEM8(seed+0x54)=9;MEM8(seed+0x55)=100;MEM8(seed+0x56)=101;MEM16(seed+8)=7;
            g_ecx=projectile;PUSH32(g_esp,seed);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00096810u,sub_00096810);
            g_ecx=projectile;PUSH32(g_esp,hit);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00096870u,sub_00096870);
            if(g_esp!=stack||MEM32(hit)!=0x201||MEM16(hit+8)!=7||MEM32(hit+0x4C)!=0x123456||MEM32(hit+0x50)!=0x112233||MEM8(hit+0x54)!=9||MEM8(hit+0x55)!=100||MEM8(hit+0x56)!=101)return 115;
            MEM32(manager+0x105C+4)=0x401;
            memset((void*)XBOX_PTR(hit),0,0x64);
            g_ecx=projectile;PUSH32(g_esp,hit);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00096870u,sub_00096870);
            if(g_esp!=stack||MEM32(hit)!=0x202||MEM8(hit+0x55)||MEM8(hit+0x56)||MEM32(hit+0x4C))return 116;
            raven_projectile_victim_retire(projectile);
            MEM32(manager+0x105C+4)=0x201;
            puts("PASS native projectile export: original move/tags with live owner; expired owner fallback does not inherit callbacks");
        }

        MEM32(0x485878)=0;MEM32(entity+0x18)=2;
        {
            const uint32_t record=pool+0x62A00;
            memset((void*)XBOX_PTR(record),0,0x64);
            MEM32(record)=0x201;MEM8(record+0x56)=101;
            g_eax=0x1357;g_ecx=0x2468;g_edx=0xABCD;
            // A valid native source/recipient with a missing move exercises
            // both lookup calls:2E290 leaves two operands, ED6E0 consumes them.
            raven_secondary_victim_dispatch(record,0x201);
            if(g_esp!=stack||g_eax!=0x1357||g_ecx!=0x2468||g_edx!=0xABCD)return 117;
            puts("PASS secondary victim lookup ABI: valid native actors, absent move, balanced queued arguments and preserved registers");
        }

        {
            const uint32_t actor=pool+0x12000;
            memset((void*)XBOX_PTR(actor),0,0x600);
            MEMF(actor+0x3F0)=1;
            MEM32(actor+0x1C)=0x202;
            xml1_bishop_contact_record(actor,0x201,2);
            raven_bishop_contact_history recorded={0};
            if(!xml1_bishop_contact_snapshot(actor,&recorded)||recorded.handle!=0x201||recorded.time!=2)return 43;
            MEM32(actor+0x1C)=0x402;
            if(xml1_bishop_contact_snapshot(actor,&recorded))return 44;
            xml1_bishop_contact_record(actor,0x201,1);
            if(!xml1_bishop_contact_snapshot(actor,&recorded)||recorded.time!=1)return 45;
            xml1_bishop_contact_reset(actor);
            if(xml1_bishop_contact_snapshot(actor,&recorded))return 46;
            const uint32_t context=pool+0x14000;
            MEM32(context)=entity;MEM32(context+8)=actor;
            MEM32(entity+0x1C)=0x201;MEM32(actor+0x330)=0xffffffff;
            /* Execute the actual generated hit callback. Its ordinary
             * reaction branch exits for this source, but the contact precedes
             * that gate and must use the native simulation clock (25.5). */
            g_ecx=context;PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x00043F20u,sub_00043F20);
            if(!xml1_bishop_contact_snapshot(actor,&recorded)||recorded.handle!=0x201||recorded.time!=25.5f||g_esp!=stack)return 47;
            xml1_bishop_contact_reset(actor);
            MEM32(actor+0x324)=0xabcdef;
            xml1_bishop_trigger_contact(actor,0x201);
            if(!xml1_bishop_contact_snapshot(entity,&recorded)||recorded.handle!=0x402||recorded.time!=25.5f)return 48;
            xml1_bishop_contact_reset(entity);
            xml1_bishop_trigger_contact(actor,0x401);
            if(xml1_bishop_contact_snapshot(entity,&recorded))return 49;
            MEM32(entity+0x18)=0;
            xml1_bishop_trigger_contact(actor,0x201);
            if(xml1_bishop_contact_snapshot(entity,&recorded)||g_esp!=stack)return 50;
            MEM32(entity+0x18)=2;
            raven_bishop_contact_history history={0x201,2};
            /* Live actor contact, no current chain node: native 381F0 must
             * return no follow-up and clear the stale pending selection. */
            if(xml1_bishop_drain_decide(actor,&history)||MEM32(actor+0x324))return 38;
            MEM32(actor+0x324)=0xabcdef;
            history.handle=0x401;
            if(xml1_bishop_drain_decide(actor,&history)||MEM32(actor+0x324)!=0xabcdef)return 39;
            history.handle=0x201;history.time=1;
            if(xml1_bishop_drain_decide(actor,&history)||MEM32(actor+0x324)!=0xabcdef)return 40;
            history.time=2;
            MEM32(entity+0x18)=4;MEM32(0x4C0AE4)=1;MEM32(entity+0x2C4)=5;
            if(xml1_bishop_drain_decide(actor,&history)||MEM32(actor+0x324))return 41;
            MEM32(actor+0x324)=0xabcdef;MEM32(entity+0x2C4)=4;
            if(xml1_bishop_drain_decide(actor,&history)||MEM32(actor+0x324)!=0xabcdef||g_esp!=stack)return 42;
            MEM32(entity+0x18)=2;
            puts("PASS Bishop guest decision: native handle generation, actor/discharge classification, move timestamp, missing-chain fallback");
        }
        uint32_t found=0xabcdef01;
        if(!raven_xml1_guest_entity_valid(NULL,0x201)||
           raven_xml1_guest_entity_actor(NULL,0x201,&found)!=RAVEN_FOUND||found!=entity)return 11;
        MEM32(entity+0x2D8)=0;found=0xabcdef01;
        if(raven_xml1_guest_talent_actor(NULL,0x201,&found)!=RAVEN_MISSING||found!=0xabcdef01)return 16;
        MEM32(entity+0x2D8)=pool+0xB000;
        if(raven_xml1_guest_talent_actor(NULL,0x201,&found)!=RAVEN_FOUND||found!=entity)return 17;
        MEM32(entity+0x2D8)=0xfffffffc;found=0xabcdef01;
        if(raven_xml1_guest_talent_actor(NULL,0x201,&found)!=RAVEN_INVALID||found!=0xabcdef01)return 18;
        MEM32(entity+0x2D8)=pool+0xB000;
        MEM32(entity+0x18)=0;found=0xabcdef01;
        if(!raven_xml1_guest_entity_valid(NULL,0x201)||
           raven_xml1_guest_entity_actor(NULL,0x201,&found)!=RAVEN_MISSING||found!=0xabcdef01)return 12;
        MEM32(manager+0x105C+4)=0x401;MEM32(entity+0x18)=2;
        if(raven_xml1_guest_entity_valid(NULL,0x201)||
           raven_xml1_guest_entity_actor(NULL,0x201,&found)!=RAVEN_MISSING)return 13;
        if(!raven_xml1_guest_entity_valid(NULL,0x401)||
           raven_xml1_guest_entity_actor(NULL,0x401,&found)!=RAVEN_FOUND)return 14;
        MEM32(manager+0x1018)=0;
        if(raven_xml1_guest_entity_valid(NULL,0x401)||
           raven_xml1_guest_entity_actor(NULL,0x401,&found)!=RAVEN_MISSING||g_esp!=stack)return 15;
        puts("PASS native XML1 entity callbacks: actor/non-actor distinction, character component presence/bounds, stale/reused handles, occupied state and stack balance");
    }
    memset((void*)XBOX_PTR(pool),0,0x8000);
    MEM32(0x4C0B18)=pool;
    g_ecx=0x4C0B20;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00095210u,sub_00095210);
    g_ecx=pool;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00096690u,sub_00096690);
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00096740u,sub_00096740);source=g_eax;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00096740u,sub_00096740);destination=g_eax;
    if(!source||!destination||source==destination||g_esp!=stack)return 1;
    /* A true native parse result is not evidence that an XML2 handler was
     * selected. Preserve this characterization until an adapter explicitly
     * consumes these fields and installs the handler's behavior. */
    {
        const char *keys[]={"CLASS","DaMaGe","attacks_per_second"};
        const char *values[]={"harming","%sun_flmthrow_sdmg","3"};
        unsigned char before[192];
        uint32_t key_at=pool+0x9000,value_at=pool+0x9100;
        for(unsigned i=0;i<3;++i) {
            memcpy(before,(void*)XBOX_PTR(source),sizeof(before));
            strcpy((char*)XBOX_PTR(key_at),keys[i]);strcpy((char*)XBOX_PTR(value_at),values[i]);
            g_ecx=source;PUSH32(g_esp,value_at);PUSH32(g_esp,key_at);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x000955C0u,sub_000955C0);
            if(g_esp!=stack||(g_eax&255)!=1||memcmp(before,(void*)XBOX_PTR(source),sizeof(before)))return 7;
        }
        if(raven_powerup_fixture(4,source,destination))return 10;
        {
            /* XML1's original49480 name table supplies the damage enum.
               Use original parser output, not XML2 enum IDs or a host map. */
            const struct {const char *name;uint32_t type;} types[]={
                {"dmg_fire",4},{"dmg_radiation",7},{"dmg_energy",2},{"dmg_bleed",12}
            };
            strcpy((char*)XBOX_PTR(key_at),"damagetype");
            for(unsigned i=0;i<sizeof(types)/sizeof(types[0]);++i){
                strcpy((char*)XBOX_PTR(value_at),types[i].name);
                g_ecx=source;PUSH32(g_esp,value_at);PUSH32(g_esp,key_at);PUSH32(g_esp,0);
                RECOMP_ABI_CALL(0x000955C0u,sub_000955C0);
                if(g_esp!=stack||(g_eax&255)!=1||MEM32(source+0x34)!=types[i].type)return 55;
            }
            puts("PASS native powerup damage types: fire/radiation/energy/bleed resolved by original XML1 parser/table");
        }
        {
            /* Bishop's XML2 Energy Fury uses apply_ally="all". XML1 already
             * parses this through 959CD..95A5B into definition+6C bits 4..7;
             * retain that native selection policy instead of adding a second
             * host-side ally filter. This checks parsing, not party delivery. */
            const struct {const char *value;uint32_t bits;} allies[]={
                {"near",0x10},{"medium",0x20},{"all",0x30}
            };
            const uint32_t original=MEM32(source+0x6C);
            const int fp=g_fp_top;
            strcpy((char*)XBOX_PTR(key_at),"apply_ally");
            for(unsigned i=0;i<sizeof(allies)/sizeof(allies[0]);++i){
                /* Set every flag first to prove the parser replaces the
                 * whole ally nibble without touching unrelated policy. */
                MEM32(source+0x6C)=0xffffffffu;
                strcpy((char*)XBOX_PTR(value_at),allies[i].value);
                g_ecx=source;PUSH32(g_esp,value_at);PUSH32(g_esp,key_at);PUSH32(g_esp,0);
                RECOMP_ABI_CALL(0x000955C0u,sub_000955C0);
                if(g_esp!=stack||g_fp_top!=fp||(g_eax&255)!=1||
                   MEM32(source+0x6C)!=(0xffffff0fu|allies[i].bits))return 90;
            }
            MEM32(source+0x6C)=original;
            puts("PASS native ally policy parser: near/medium/all, replacement and unrelated flags preserved; party delivery not tested");
        }
        {
            const uint32_t actor=pool+0xA000,stats=pool+0xB004;
            const uint32_t talents=pool+0xC000,powerups=pool+0x10000;
            memset((void*)XBOX_PTR(stats),0,0x200);
            memset((void*)XBOX_PTR(talents),0,0x2000);
            memset((void*)XBOX_PTR(powerups),0,0x2440);
            MEM32(0x4DB2B8+0x1018)=2;
            MEM32(actor+0x2D8)=stats-4;MEM32(actor+0x18)=2;
            MEM32(stats+0x40)=MEM32(stats+0x44)=0x3fffffff;
            MEM8(stats+0x48)=107;MEM8(stats+0x198)=0xa1;
            MEM32(talents+0x14)=MEM32(talents+0x18)=0x3fffffff;
            strcpy((char*)XBOX_PTR(talents+0x1C),"sun_flmthrow");
            MEM8(talents+0x1C5C)=107;
            {
                const uint32_t event=pool+0x9300,key=pool+0x9400,value=pool+0x9500;
                const uint32_t previous=MEM32(0x4D7300);
                if(raven_startup_catalog_fixture())return 51;
                if(xml1_bishop_registration_fixture(pool+0x30000))return 51;
                MEM32(0x4D7300)=talents;
                strcpy((char*)XBOX_PTR(key),"powerusage");
                strcpy((char*)XBOX_PTR(value),"%sun_flmthrow_pwr");
                if(!xml1_raven_energy_parse(event,key,value)||xml1_raven_energy_cost(event,actor,999)!=6)return 52;
                MEM8(stats+0x198)=0xaf;
                if(xml1_raven_energy_query(event,actor,999)!=117)return 53;
                if(xml1_raven_energy_query(event+4,actor,7.25)!=7.25)return 54;
                {
                    /* Imported attack endpoints must use the current actor rank,
                       round positive hits, and survive action cloning independently
                       of the native descriptor and its energy binding. */
                    const uint32_t lo=pool+0x9600,hi=lo+4,copy=event+0x40;
                    strcpy((char*)XBOX_PTR(value),"%sun_flmthrow_sdmg");
                    strcpy((char*)XBOX_PTR(key),"damage");
                    MEM32(event+0x14)=pool+0x9700;
                    MEM16(pool+0x9700)=23;MEM16(pool+0x9702)=31;
                    g_ecx=event;PUSH32(g_esp,value);PUSH32(g_esp,key);PUSH32(g_esp,0);
                    RECOMP_ABI_CALL(0x000CF6B0u,sub_000CF6B0);
                    if(g_esp!=stack||(g_eax&255)!=1||MEM16(pool+0x9700)!=23||MEM16(pool+0x9702)!=31)return 60;
                    MEM8(stats+0x198)=0xa1;
                    xml1_raven_attack_range(event,actor,lo,hi);
                    if(MEM32(lo)!=6||MEM32(hi)!=10)return 61;
                    raven_native_energy_copy(copy,event);
                    MEM8(stats+0x198)=0xaf;
                    xml1_raven_attack_range(copy,actor,lo,hi);
                    if(MEM32(lo)!=117||MEM32(hi)!=133||xml1_raven_energy_query(copy,actor,999)!=117)return 62;
                    strcpy((char*)XBOX_PTR(value),"4 5");
                    if(xml1_raven_attack_parse(event,value))return 63;
                    MEM32(lo)=4;MEM32(hi)=5;
                    xml1_raven_attack_range(event,actor,lo,hi);
                    if(MEM32(lo)!=4||MEM32(hi)!=5)return 64;
                    raven_native_energy_lifetime(copy,2);
                    xml1_raven_attack_range(copy,actor,lo,hi);
                    if(MEM32(lo)!=4||MEM32(hi)!=5||xml1_raven_energy_query(copy,actor,7.25)!=7.25)return 65;
                    puts("PASS imported attack endpoints: current rank, rounded range, energy/damage clone, literal replacement and retirement");
                    strcpy((char*)XBOX_PTR(key),"maxrange");
                    strcpy((char*)XBOX_PTR(value),"%sun_flmthrow_ft");
                    MEM16(pool+0x9706)=73;
                    g_ecx=event;PUSH32(g_esp,value);PUSH32(g_esp,key);PUSH32(g_esp,0);
                    RECOMP_ABI_CALL(0x000CF6B0u,sub_000CF6B0);
                    if(g_esp!=stack||(g_eax&255)!=1||MEM16(pool+0x9706)!=73)return 66;
                    MEM8(stats+0x198)=0xa1;
                    if(xml1_raven_attack_maxrange(event,actor,73)!=120)return 67;
                    /* The beam's virtual copy inlines the base copy; calling
                       the generic host clone here would miss that boundary. */
                    MEM32(event)=MEM32(copy)=0x3D6A40;
                    MEM32(copy+0x14)=pool+0x9800;
                    g_ecx=copy;PUSH32(g_esp,event);PUSH32(g_esp,0);
                    RECOMP_ABI_CALL(0x000E41D0u,sub_000E41D0);
                    if(g_esp!=stack||MEM16(pool+0x9806)!=73)return 71;
                    MEM8(stats+0x198)=0xaf;
                    if(xml1_raven_attack_maxrange(copy,actor,73)!=240||MEM16(pool+0x9706)!=73)return 68;
                    strcpy((char*)XBOX_PTR(value),"200");
                    if(xml1_raven_attack_maxrange_parse(event,value)||xml1_raven_attack_maxrange(event,actor,200)!=200)return 69;
                    raven_native_energy_lifetime(copy,2);
                    if(xml1_raven_attack_maxrange(copy,actor,73)!=73)return 70;
                    puts("PASS symbolic beam range: native parser ABI, per-rank resolution, unchanged descriptor, clone, literal override and retirement");
                }
                {
                    const uint32_t node=pool+0x30000;
                    int16_t rate=-99;
                    strcpy((char*)XBOX_PTR(key),"energypersecond");
                    strcpy((char*)XBOX_PTR(value),"%sun_flmthrow_pwr");
                    g_ecx=node;PUSH32(g_esp,value);PUSH32(g_esp,key);PUSH32(g_esp,0);
                    RECOMP_ABI_CALL(0x000E2610u,sub_000E2610);
                    if(g_esp!=stack||(g_eax&255)!=1)return 72;
                    MEM8(stats+0x198)=0xa1;
                    if(!raven_native_held_rate(fixture_read,NULL,talents,node,actor,&rate)||rate!=6)return 73;
                    MEM8(stats+0x198)=0xaf;
                    if(!raven_native_held_rate(fixture_read,NULL,talents,node,actor,&rate)||rate!=117)return 74;
                    if(!raven_native_held_parse(node,"energypersecond","0")||
                       !raven_native_held_rate(fixture_read,NULL,talents,node,actor,&rate)||rate!=0)return 75;
                    raven_native_held_retire(node);rate=-99;
                    if(raven_native_held_rate(fixture_read,NULL,talents,node,actor,&rate)||rate!=-99)return 76;
                    puts("PASS native held-energy parser ABI: live rank changes, literal zero override and retirement");
                    /* Execute the real eligibility method with an empty event
                       list: this previously returned true without considering
                       held drain. Its own energy getter/comparison must run. */
                    MEM32(node)=0x3D8BDC;MEM32(node+0x104)=0;
                    const uint8_t old_flags=MEM8(actor+0x334),old_cheat=MEM8(0x485847);
                    const float old_energy=MEMF(actor+0x248);
                    MEM8(actor+0x334)=0;MEM8(0x485847)=0;
                    raven_native_held_parse(node,"energypersecond","14");
                    const float available[]={0.0f,3.49f,3.5f,4.0f};
                    const unsigned allowed[]={0,0,1,1};
                    const unsigned fp_before=g_fp_top;
                    for(unsigned i=0;i<4;++i) {
                        MEMF(actor+0x248)=available[i];g_ecx=node;
                        PUSH32(g_esp,actor);PUSH32(g_esp,0);
                        RECOMP_ABI_CALL(0x000E1A20u,sub_000E1A20);
                        if((g_eax&255)!=allowed[i]||g_esp!=stack||g_fp_top!=fp_before)return 85;
                    }
                    raven_native_held_parse(node,"energypersecond","1");
                    if(xml1_raven_held_requirement(node,actor)!=0.25f)return 86;
                    raven_native_held_retire(node);MEMF(actor+0x248)=0;
                    g_ecx=node;PUSH32(g_esp,actor);PUSH32(g_esp,0);
                    RECOMP_ABI_CALL(0x000E1A20u,sub_000E1A20);
                    if(!(g_eax&255)||g_esp!=stack||g_fp_top!=fp_before)return 87;
                    MEM8(actor+0x334)=old_flags;MEM8(0x485847)=old_cheat;MEMF(actor+0x248)=old_energy;
                    puts("PASS native held-energy eligibility: empty events, depletion/equality boundaries, no debit minimum, unbound behavior and x87/stack ABI");
                    /* ECDF0 receives tagged XML value objects. Exercise the
                       original 199EE0 text accessor and preserve guest ABI. */
                    const uint32_t action_ref=pool+0x30200,result_ref=pool+0x30210;
                    strcpy((char*)XBOX_PTR(key),"samepowerhold");
                    strcpy((char*)XBOX_PTR(value),"power2_loop");
                    MEM32(action_ref)=key;MEM32(action_ref+4)=0;MEM32(action_ref+8)=1;
                    MEM32(result_ref)=value;MEM32(result_ref+4)=0;MEM32(result_ref+8)=1;
                    g_eax=0x12345678;g_ecx=0xabcdef;
                    xml1_raven_held_chain_parse(node+0x10,action_ref,result_ref);
                    const char *chain=raven_native_held_chain(node);
                    if(g_esp!=stack||g_eax!=0x12345678||g_ecx!=0xabcdef||
                       !chain||strcmp(chain,"power2_loop")) {
                        printf("FAIL held chain ABI sp=%08X expected=%08X ax=%08X cx=%08X action=%08X result=%08X chain=%s\n",g_esp,stack,g_eax,g_ecx,MEM32(action_ref),MEM32(result_ref),chain?chain:"<missing>");return 78;
                    }
                    if(raven_native_held_chain_parse(node,"attack","ignored")||
                       strcmp(raven_native_held_chain(node),"power2_loop"))return 79;
                    if(!raven_native_held_chain_parse(node,"samepowerhold","power2_end")||
                       strcmp(raven_native_held_chain(node),"power2_end"))return 80;
                    raven_native_held_retire(node);
                    if(raven_native_held_chain(node))return 81;
                    puts("PASS held chain: native XML value accessor, preserved guest ABI, declared destination, ordinary action isolation, replacement and retirement");
                    const uint32_t input=pool+0x30300,component=pool+0x31000;
                    const uint32_t old_node=MEM32(actor+0x2F4),old_component=MEM32(actor+0x2D8);
                    MEM32(actor+0x2F4)=node;MEM32(actor+0x2D8)=component;
                    strcpy((char*)XBOX_PTR(component+0x20C),"sunfire");
                    raven_native_held_chain_parse(node,"samepowerhold","power2");
                    const unsigned button_bits[4]={4,5,8,6};
                    for(unsigned slot=0;slot<4;++slot) {
                        sprintf((char*)XBOX_PTR(value),"power%u",slot+1);
                        g_ecx=node+8;PUSH32(g_esp,value);PUSH32(g_esp,0);
                        RECOMP_ABI_CALL(0x00027EF0u,sub_00027EF0);
                        for(unsigned buttons=0;buttons<512;++buttons) {
                            MEM32(input)=buttons;MEM32(input+4)=~buttons;
                            int expected=(buttons&128)&&(buttons&(1u<<button_bits[slot]));
                            if(xml1_raven_held_input(actor,input)!=!!expected||g_esp!=stack)return 82;
                        }
                    }
                    strcpy((char*)XBOX_PTR(component+0x20C),"unbound_hero");MEM32(input)=511;
                    if(xml1_raven_held_input(actor,input))return 83;
                    strcpy((char*)XBOX_PTR(component+0x20C),"sunfire");
                    raven_native_held_retire(node);
                    if(xml1_raven_held_input(actor,input))return 84;
                    MEM32(actor+0x2F4)=old_node;MEM32(actor+0x2D8)=old_component;
                    puts("PASS held input: all 2048 slot/button combinations, held versus edge words, unbound actor and retired declaration");
                }
                MEM8(stats+0x198)=0xa1;MEM32(0x4D7300)=previous;
                puts("PASS normal startup energy integration: disk catalog -> guest parse -> current native actor rank -> energy cost; unbound fallback preserved");
            }
            MEM32(powerups+0x2438)=127;MEM32(powerups+0x2238)=128;
            MEM32(powerups+0x2224)=1;MEM32(powerups+4+0x18)=0x401;
            MEM32(powerups+4+0x1C)=0x401;MEM32(powerups+4+0x2C)=source;
            {
                uint32_t identity=0;float now=-123;
                MEMF(powerups+4+4)=2;MEMF(powerups+4+8)=25;
                MEMF(0x498E88+0x39C)=25;
                MEM32(powerups+4+0x34)=0xabcdef01;
                if(raven_xml1_harming_begin(powerups,powerups+4,&identity)!=RAVEN_FOUND||identity!=128)return 28;
                if(raven_xml1_harming_due(powerups,identity,&now)!=RAVEN_MISSING||now!=-123)return 29;
                int16_t hit=99;
                if(raven_xml1_harming_tick_amount(powerups,identity,1,2,&hit)!=RAVEN_MISSING||hit!=99)return 37;
                MEMF(0x498E88+0x39C)=25.25f;
                if(raven_xml1_harming_due(powerups,identity,&now)!=RAVEN_FOUND||now!=25.25f)return 30;
                if(raven_xml1_harming_tick_amount(powerups,identity,1,2,&hit)!=RAVEN_FOUND||hit!=1)return 38;
                if(raven_xml1_harming_tick_amount(powerups,identity,14,2,&hit)!=RAVEN_FOUND||hit!=4)return 39;
                {
                    const uint32_t record=powerups+0x2500;
                    MEM8(record-1)=0xA5;MEM8(record+100)=0x5A;
                    if(raven_xml1_guest_damage_record(record,0x401,hit,0xC,0x180000)!=RAVEN_FOUND)return 44;
                    if(MEM32(record)!=0x401||SMEM16(record+8)!=4||MEM32(record+0x10)!=0xC||
                       MEM32(record+0x18)!=0x180000||MEM16(record+0x14)!=10||
                       MEM32(record+4)||MEM16(record+0xA)||MEM32(record+0xC)||
                       MEM8(record-1)!=0xA5||MEM8(record+100)!=0x5A||g_esp!=stack)return 45;
                    for(unsigned offset=0x20;offset<0x44;offset+=4)if(MEM32(record+offset))return 46;
                    if(raven_xml1_guest_damage_record(0x07FFFFF0,0,1,0,0)!=RAVEN_INVALID)return 47;
                    puts("PASS native integer hit constructor: prepared tick amount, source/type/flags, vectors, bounds, canaries and stack balance");
                    /* Use the actual native damage method and its dead-target
                       rejection. This checks dispatch/ABI, not live damage. */
                    const uint32_t table=MEM32(actor);
                    MEM32(table+0xA8)=0x92220;MEMF(actor+0x240)=0;
                    if(raven_xml1_guest_harming_deliver(0x401,record)!=RAVEN_FOUND||
                       MEMF(actor+0x240)!=0||g_esp!=stack)return 48;
                    if(raven_xml1_guest_harming_deliver(0x201,record)!=RAVEN_MISSING)return 49;
                    puts("PASS native harming delivery ABI: real92220 dead-target rejection and stale-handle suppression; live damage not covered");
                    if(raven_xml1_harming_apply_tick(powerups,identity,14,2,0xC,0x180000,1,1)!=RAVEN_FOUND||
                       MEMF(powerups+4+0x24)!=25.75f||g_esp!=stack)return 50;
                    /* Restore due time for the following amount checks. */
                    MEMF(powerups+4+0x24)=25;
                    puts("PASS composed integer tick: due/amount -> native record -> native dispatch -> reschedule, private stack restored; target rejection only");
                    {
                        const uint32_t old_type=MEM32(0x4C0A60),old_bits=MEM32(actor+0x18);
                        const uint8_t old_flags=MEM8(source+0x70);
                        /* Separate actor bit33 from physical bit34. A plain
                           physical object must not pass the actor-only API. */
                        MEM32(0x4C0A60)=1;MEM32(actor+0x18)=4;
                        if(raven_xml1_guest_harming_deliver(0x401,record)!=RAVEN_MISSING)return 60;
                        MEM8(source+0x70)=old_flags|2;
                        if(raven_xml1_harming_apply_tick(powerups,identity,14,2,0xC,0,1,1)!=RAVEN_FOUND||
                           MEMF(powerups+4+0x24)!=25.75f||g_esp!=stack)return 61;
                        MEMF(powerups+4+0x24)=25;MEM32(actor+0x18)=0;
                        if(raven_xml1_harming_apply_tick(powerups,identity,14,2,0xC,0,1,1)!=RAVEN_MISSING||
                           MEMF(powerups+4+0x24)!=25||g_esp!=stack)return 62;
                        MEM32(actor+0x18)=old_bits;MEM32(0x4C0A60)=old_type;
                        MEM8(source+0x70)=old_flags;
                        puts("PASS harming non-actor delivery: declared physical objects dispatch native damage; actor-only and nonphysical targets rejected; dead-target ABI fixture");
                    }
                    MEM32(0x50622C)=1;
                    if(raven_xml1_harming_think(powerups,powerups+4,talents,0,1)!=RAVEN_FOUND||
                       MEM32(0x50622C)!=16807||MEMF(powerups+4+0x24)<=25.25f||g_esp!=stack)return 56;
                    if(raven_xml1_harming_think(powerups,powerups+4,talents,0,1)!=RAVEN_MISSING||
                       MEM32(0x50622C)!=16807)return 57;
                    MEMF(powerups+4+0x24)=25;
                    puts("PASS harming callback body: startup catalog, native context/rank/RNG, integer dispatch and scheduling; not-due consumes no RNG, dead-target only");
                    {
                        const uint32_t sp=g_esp,old_talents=MEM32(0x4D7300);
                        raven_harming_callback_test_storage(pool+0x9700);
                        {
                            /* Native resource tree with original attributes. String
                               mode1 uses a direct pointer; the list terminates
                               at its empty embedded sentinel. No parser stubs. */
                            const uint32_t node=powerups+0x3000,attribute=node+0x100;
                            memset((void*)XBOX_PTR(node),0,0x1000);
                            MEM32(node+8)=1;MEM32(node+0x54)=attribute;
                            const char *keys[]={"class","damage","attacks_per_second","damagetype"};
                            const char *values[]={"harming","%sun_flmthrow_sdmg","3","dmg_fire"};
                            for(unsigned i=0;i<4;++i){
                                const uint32_t at=attribute+0x40*i,key=node+0x400+0x80*i,value=key+0x40;
                                strcpy((char*)XBOX_PTR(key),keys[i]);strcpy((char*)XBOX_PTR(value),values[i]);
                                MEM32(at+4)=key;MEM32(at+0xC)=1;
                                MEM32(at+0x14)=value;MEM32(at+0x1C)=1;MEM32(at+0x20)=(uint32_t)strlen(values[i]);
                                MEM32(at+0x28)=i<3?at+0x40:node+0x2C;
                            }
                            g_ecx=source;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00096220u,sub_00096220);
                            g_ecx=source;PUSH32(g_esp,node);PUSH32(g_esp,0);
                            RECOMP_ABI_CALL(0x00096370u,sub_00096370);
                            if(g_esp!=sp||(g_eax&255)!=1||MEM32(source+0x34)!=4)return 62;
                            puts("PASS complete native definition parser: fresh reset, class/damage/APS/type attribute traversal and automatic callback installation");
                        }
                        if(!raven_harming_callback_is_code(MEM32(source+0x9C))||
                           !raven_harming_callback_is_code(MEM32(source+0xA8)))return 58;
                        memcpy((void*)XBOX_PTR(0x4833C0),(void*)XBOX_PTR(powerups),0x2440);
                        MEM32(0x4D7300)=talents;
                        {
                            const uint32_t seed=MEM32(0x50622C);
                            raven_xml1_powerup_metadata_attribute(source,"life","%sun_flmthrow_life");
                            MEMF(source+0x24)=0;MEMF(source+0x28)=0;
                            PUSH32(g_esp,0);PUSH32(g_esp,0x401);PUSH32(g_esp,0x401);PUSH32(g_esp,source);
                            g_ecx=0x4833C4;PUSH32(g_esp,0);
                            RECOMP_ABI_CALL(0x0002A7B0u,sub_0002A7B0);
                            if(MEMF(0x4833C4+4)!=3||MEM32(0x50622C)!=seed||g_esp!=sp)return 63;
                            MEM8(stats+0x198)=0xaf;
                            PUSH32(g_esp,0);PUSH32(g_esp,0x401);PUSH32(g_esp,0x401);PUSH32(g_esp,source);
                            g_ecx=0x4833C4;PUSH32(g_esp,0);
                            RECOMP_ABI_CALL(0x0002A7B0u,sub_0002A7B0);
                            if(MEMF(0x4833C4+4)!=7||MEM32(0x50622C)!=seed||g_esp!=sp)return 64;
                            raven_xml1_powerup_metadata_attribute(source,"life","2");
                            MEMF(0x4833C4+4)=2;MEM8(stats+0x198)=0xa1;
                            raven_xml1_harming_life(0x4833C4);
                            if(MEMF(0x4833C4+4)!=2)return 65;
                            puts("PASS native instance initialization/refresh with reference lifetime: live rank changes, lower endpoint, no RNG consumption, literal duration untouched");
                        }
                        PUSH32(g_esp,0x4833C4);PUSH32(g_esp,0);
                        RECOMP_ICALL_SAFE(MEM32(source+0x9C),sp);g_esp+=4;
                        if(g_esp!=sp||MEMF(0x4833C4+0x24)!=25.25f)return 59;
                        MEMF(0x498E88+0x39C)=25.5f;
                        PUSH32(g_esp,0x4833C4);PUSH32(g_esp,0);
                        RECOMP_ICALL_SAFE(MEM32(source+0xA8),sp);g_esp+=4;
                        if(g_esp!=sp||MEMF(0x4833C4+0x24)<=25.5f)return 60;
                        MEMF(0x498E88+0x39C)=25.25f;MEM32(0x4D7300)=old_talents;
                        puts("PASS registered harming activation/think thunks through native indirect dispatcher; self-hit suppression, cdecl stack and timer");
                    }
                }
                if(raven_xml1_harming_tick_amount(powerups,identity,0,2,&hit)!=RAVEN_FOUND||hit!=0)return 40;
                if(raven_xml1_harming_reschedule(powerups,identity,2)!=RAVEN_FOUND||MEMF(powerups+4+0x24)!=25.75f)return 31;
                MEMF(0x498E88+0x39C)=26.875f;
                if(raven_xml1_harming_tick_amount(powerups,identity,60,2,&hit)!=RAVEN_FOUND||hit!=4)return 41;
                if(raven_xml1_harming_reschedule(powerups,identity,2)!=RAVEN_FOUND||MEMF(powerups+4+0x24)!=27)return 32;
                MEMF(0x498E88+0x39C)=27;
                if(raven_xml1_harming_tick_amount(powerups,identity,60,2,&hit)!=RAVEN_MISSING||hit!=4)return 42;
                if(raven_xml1_harming_reschedule(powerups,identity,2)!=RAVEN_MISSING||MEMF(powerups+4+0x24)!=27)return 33;
                MEM32(powerups+0x2238)=256;MEMF(powerups+4+0x24)=99;
                if(raven_xml1_harming_reschedule(powerups,identity,2)!=RAVEN_MISSING||MEMF(powerups+4+0x24)!=99)return 34;
                if(raven_xml1_harming_tick_amount(powerups,identity,60,2,&hit)!=RAVEN_MISSING||hit!=4)return 43;
                if(MEM32(powerups+4+0x34)!=0xabcdef01||g_esp!=stack)return 35;
                MEM32(powerups+0x2238)=128;
                puts("PASS native harming timing: activation, strict due gate, interval/final-tick scheduling, expiry and recycled-slot protection; propagation field unchanged");
                puts("PASS native harming integer tick preparation: due gate, minimum1, nearest rounding, zero preservation, clipped final tick and retired/expired suppression");
            }
            if(raven_harming_native_fixture(fixture_read,source,powerups,talents,actor,7.125f,1))return 19;
            MEM8(stats+0x198)=0xaf;
            if(raven_harming_native_fixture(fixture_read,source,powerups,talents,actor,121.125f,1))return 20;
            MEM32(actor+0x2D8)=0;
            if(raven_harming_native_fixture(fixture_read,source,powerups,talents,actor,0,1))return 21;
            MEM32(actor+0x2D8)=stats-4;MEM32(powerups+0x2238)=256;
            if(raven_harming_native_fixture(fixture_read,source,powerups,talents,actor,0,0)||g_esp!=stack)return 22;
            puts("PASS harming composition: native definition parser -> active handle -> native entity/type/context -> live talent rank -> fractional damage operand; rank changes, absent context and retired instance");
        }
        strcpy((char*)XBOX_PTR(key_at),"powerup");strcpy((char*)XBOX_PTR(value_at),"health_regen");
        g_ecx=source;PUSH32(g_esp,value_at);PUSH32(g_esp,key_at);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000955C0u,sub_000955C0);
        if(g_esp!=stack||(g_eax&255)!=1||MEM8(source+0x1C)!=11)return 8;
    }
    if(raven_powerup_fixture(0,source,destination))return 2;
    g_ecx=destination;PUSH32(g_esp,source);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000953A0u,sub_000953A0);
    if(g_esp!=stack||raven_powerup_fixture(1,source,destination))return 3;
    if(MEM32(destination+0x9C)!=MEM32(source+0x9C)||
       MEM32(destination+0xA8)!=MEM32(source+0xA8)||
       !raven_harming_callback_is_code(MEM32(destination+0xA8)))return 61;
    MEM32(source)=2;
    PUSH32(g_esp,source);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000967B0u,sub_000967B0);g_esp+=4;
    if(MEM32(source)!=1||raven_powerup_fixture(1,source,destination))return 4;
    PUSH32(g_esp,source);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000967B0u,sub_000967B0);g_esp+=4;
    if(raven_powerup_fixture(2,source,destination))return 5;
    g_ecx=destination;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00096220u,sub_00096220);
    if(g_esp!=stack||raven_powerup_fixture(3,source,destination))return 6;
    /* No target: exercise the actual generated timed-damage callback's early
     * return and balanced transport lifetime. This does not deliver damage. */
    memset((void*)XBOX_PTR(pool+0x9200),0,64);
    /* 6BF80 calls BEF20 even for null references. Publish the initialized
     * singleton's real vtable; its native BDFD0 lookup rejects handle zero
     * before reading pool contents. Do not run the full game constructor. */
    MEM8(0x4E7044)|=1;
    MEM32(0x4DB2B8)=0x3D4B7C;
    PUSH32(g_esp,pool+0x9200);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0002CE70u,sub_0002CE70);g_esp+=4;
    if(g_esp!=stack)return 9;
    puts("PASS generated XML1 definition hooks: clone, non-final release, final destruction and reset");
    puts("PASS parser metadata and native selector; installed callback pointers survive native cloning; complete resource-load path not covered");
    {
        const uint32_t definition=pool+0x18000,record=pool+0x19000;
        const uint32_t actor=pool+0x1a000,table=pool+0x1b000;
        const uint32_t manager=0x4DB2B8,system=0x4833C0,instance=system+4;
        memset((void*)XBOX_PTR(definition),0,192);
        memset((void*)XBOX_PTR(record),0,100);
        memset((void*)XBOX_PTR(actor),0,0x300);
        MEM32(0x4E7044)=1;MEM32(manager)=0x3D4B7C;
        MEM32(manager+0x185C)=511;MEM32(manager+0x105C+4)=0x201;
        MEM32(manager+0x1018)=2;MEM32(manager+8)=actor;
        MEM32(actor)=table;MEM32(table)=0x2E6B0;
        MEM32(0x485878)=0;MEM32(actor+0x18)=2;
        MEM32(system+0x2438)=127;MEM32(system+0x2238)=128;MEM32(system+0x2224)=1;
        MEM32(instance+0x18)=0x201;MEM32(instance+0x1C)=0x201;
        MEM32(instance+0x2C)=definition;MEM32(definition+0x34)=2;
        raven_xml1_powerup_metadata_attribute(definition,"class","add_attack");
        raven_xml1_powerup_metadata_attribute(definition,"damagepercent","0.5");
        MEM16(record+8)=10;MEM32(record+0x10)=2;
        const int fp=g_fp_top;
        if(raven_xml1_add_attack(instance,0x201,record)!=RAVEN_FOUND||SMEM16(record+8)!=15)return 81;
        MEM8(record+0x60)=4;
        if(raven_xml1_add_attack(instance,0x201,record)!=RAVEN_MISSING||SMEM16(record+8)!=15)return 82;
        MEM8(record+0x60)=0;MEM32(system+0x2224)=0;
        if(raven_xml1_add_attack(instance,0x201,record)!=RAVEN_MISSING||SMEM16(record+8)!=15)return 83;
        if(g_esp!=stack||g_fp_top!=fp)return 84;
        MEM32(0x485800)=1;MEM32(system+0x2224)=1;MEM32(instance)=0xffffffff;
        MEM32(actor+0x1fc)=128;MEM8(definition+0x18)=2;
        raven_harming_install_callbacks(definition);
        if(!raven_harming_callback_is_code(MEM32(definition+0xB4)))return 85;
        MEM16(record+8)=10;
        g_ecx=actor;PUSH32(g_esp,0);PUSH32(g_esp,record);
        PUSH32(g_esp,0x201);PUSH32(g_esp,3);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00029DC0u,sub_00029DC0);
        if(SMEM16(record+8)!=15||g_esp!=stack||g_fp_top!=fp)return 86;
        puts("PASS installed add-attack callback through native owner traversal, selector and cdecl dispatcher");
        uint32_t rating_field=record+0x100;
        uint32_t affecter=raven_xml1_powerup_affecter_begin(definition);
        raven_xml1_powerup_affecter_attribute(definition,affecter,"attribute","attack_rating");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"affect_type","scale");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"level","1.25");
        MEMF(rating_field)=100;
        raven_xml1_combat_rating(actor,record,rating_field,0);
        if(MEMF(rating_field)!=125||g_esp!=stack||g_fp_top!=fp)return 87;
        MEMF(rating_field)=100;
        raven_xml1_combat_rating(actor,record,rating_field,1);
        if(MEMF(rating_field)!=100)return 88;
        MEM32(system+0x2224)=0;
        raven_xml1_combat_rating(actor,record,rating_field,0);
        if(MEMF(rating_field)!=100)return 89;
        puts("PASS native rating modifier: active owner, attribute isolation, retired owner and stack/FPU balance");
        MEM32(system+0x2224)=1;
        raven_xml1_powerup_affecter_attribute(definition,affecter,"attribute","defense_rating");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"level","1.4");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"share_filter","owner");
        MEMF(definition+0x4C)=120;MEMF(rating_field)=100;
        raven_xml1_combat_rating(actor,record,rating_field,1);
        if(fabsf(MEMF(rating_field)-140)>0.001f)return 90;
        raven_xml1_powerup_metadata_shared_copy(definition);
        MEMF(definition+0x4C)=0;MEMF(rating_field)=100;
        raven_xml1_combat_rating(actor,record,rating_field,1);
        if(MEMF(rating_field)!=100||g_esp!=stack||g_fp_top!=fp)return 91;
        puts("PASS native shared defense rating: owner gets 1.4 scale; recipient gets no bonus");
        raven_xml1_powerup_metadata_reset(definition);
        affecter=raven_xml1_powerup_affecter_begin(definition);
        raven_xml1_powerup_affecter_attribute(definition,affecter,"attribute","atk_attack_rating");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"affect_type","scale");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"level","1.2");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"scope_damage","dmg_fire");
        // Obtain the damage type through the title parser, never a guessed
        // enum. This exercises the actual native rating bridge and scope.
        memcpy((void*)XBOX_PTR(record+0x120),"dmg_fire",9);
        PUSH32(g_esp,record+0x120);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00049480u,sub_00049480);g_esp+=4;
        MEM32(record+0x10)=g_eax;MEMF(rating_field)=100;
        raven_xml1_combat_rating(actor,record,rating_field,0);
        if(fabsf(MEMF(rating_field)-120)>0.001f)return 92;
        memcpy((void*)XBOX_PTR(record+0x120),"dmg_physical",13);
        PUSH32(g_esp,record+0x120);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00049480u,sub_00049480);g_esp+=4;
        MEM32(record+0x10)=g_eax;MEMF(rating_field)=100;
        raven_xml1_combat_rating(actor,record,rating_field,0);
        if(MEMF(rating_field)!=100||g_esp!=stack||g_fp_top!=fp)return 93;
        puts("PASS native imported attack rating: fire gets 1.2 scale; physical unchanged");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"attribute","damage");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"level","1.05");
        MEMF(rating_field)=2;
        raven_xml1_combat_damage_scale(actor,record,rating_field);
        if(MEMF(rating_field)!=2)return 94;
        memcpy((void*)XBOX_PTR(record+0x120),"dmg_fire",9);
        PUSH32(g_esp,record+0x120);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00049480u,sub_00049480);g_esp+=4;
        MEM32(record+0x10)=g_eax;
        raven_xml1_combat_damage_scale(actor,record,rating_field);
        if(fabsf(MEMF(rating_field)-2.1f)>0.00001f||g_esp!=stack||g_fp_top!=fp)return 95;
        puts("PASS imported damage scale: native multiplier retained; fire-only 1.05 contribution");
        raven_xml1_powerup_metadata_reset(definition);
        affecter=raven_xml1_powerup_affecter_begin(definition);
        raven_xml1_powerup_affecter_attribute(definition,affecter,"attribute","atk_damage");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"affect_type","scale");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"level","2");
        MEMF(rating_field)=1;
        raven_xml1_combat_damage_scale(actor,record,rating_field);
        if(MEMF(rating_field)!=2||g_esp!=stack||g_fp_top!=fp)return 96;
        raven_xml1_powerup_metadata_reset(definition);
        MEMF(rating_field)=1;
        raven_xml1_combat_damage_scale(actor,record,rating_field);
        if(MEMF(rating_field)!=1)return 97;
        puts("PASS native atk_damage alias: double damage scale and retirement");
        affecter=raven_xml1_powerup_affecter_begin(definition);
        raven_xml1_powerup_affecter_attribute(definition,affecter,"attribute","def_damage");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"affect_type","scale");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"level","0");
        MEMF(rating_field)=0.75f;
        raven_xml1_combat_defense_damage_scale(actor,record,rating_field);
        if(MEMF(rating_field)!=0||g_esp!=stack||g_fp_top!=fp)return 98;
        MEMF(rating_field)=1;
        raven_xml1_combat_damage_scale(actor,record,rating_field);
        if(MEMF(rating_field)!=1)return 99;
        raven_xml1_powerup_metadata_reset(definition);
        MEMF(rating_field)=0.75f;
        raven_xml1_combat_defense_damage_scale(actor,record,rating_field);
        if(MEMF(rating_field)!=0.75f)return 100;
        puts("PASS native def_damage scale: zero incoming, outgoing unchanged, retirement restores native multiplier");
        affecter=raven_xml1_powerup_affecter_begin(definition);
        raven_xml1_powerup_affecter_attribute(definition,affecter,"attribute","def_absorb_damage");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"level","0.45");
        affecter=raven_xml1_powerup_affecter_begin(definition);
        raven_xml1_powerup_affecter_attribute(definition,affecter,"attribute","def_absorb_damage");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"level","0.2");
        float added=-1;
        raven_lookup query=raven_rating_add(fixture_read,raven_xml1_guest_entity_valid,
            raven_xml1_guest_talent_actor,0,definition,system,128,MEM32(0x4d7300),
            MEM32(0x498d90),"def_absorb_damage",record,0,&added);
        if(query!=RAVEN_FOUND||fabsf(added-0.65f)>0.00001f)return 220;
        added=-1;
        if(raven_rating_scale(fixture_read,raven_xml1_guest_entity_valid,
            raven_xml1_guest_talent_actor,0,definition,system,128,MEM32(0x4d7300),
            MEM32(0x498d90),"def_absorb_damage",record,0,&added)!=RAVEN_MISSING||added!=-1)return 221;
        raven_xml1_powerup_metadata_reset(definition);
        if(raven_rating_add(fixture_read,raven_xml1_guest_entity_valid,
            raven_xml1_guest_talent_actor,0,definition,system,128,MEM32(0x4d7300),
            MEM32(0x498d90),"def_absorb_damage",record,0,&added)!=RAVEN_MISSING)return 222;
        puts("PASS XML2 additive absorption query: mode zero, accumulated levels and retired definition");
        affecter=raven_xml1_powerup_affecter_begin(definition);
        raven_xml1_powerup_affecter_attribute(definition,affecter,"attribute","def_absorb_damage");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"level","0.45");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"scope_damage","dmg_energy");
        MEM16(actor+0x246)=100;MEMF(actor+0x240)=60;
        memcpy((void*)XBOX_PTR(record+0x120),"dmg_energy",11);
        PUSH32(g_esp,record+0x120);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00049480u,sub_00049480);g_esp+=4;
        MEM32(record+0x10)=g_eax;MEM16(record+8)=20;
        raven_xml1_combat_absorb_damage(actor,record);
        if(MEMF(actor+0x240)!=70||SMEM16(record+8)!=0||g_esp!=stack||g_fp_top!=fp)return 223;
        memcpy((void*)XBOX_PTR(record+0x120),"dmg_physical",13);
        PUSH32(g_esp,record+0x120);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00049480u,sub_00049480);g_esp+=4;
        MEM32(record+0x10)=g_eax;MEM16(record+8)=20;
        raven_xml1_combat_absorb_damage(actor,record);
        if(MEMF(actor+0x240)!=70||SMEM16(record+8)!=20)return 224;
        memcpy((void*)XBOX_PTR(record+0x120),"dmg_energy",11);
        PUSH32(g_esp,record+0x120);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00049480u,sub_00049480);g_esp+=4;
        MEM32(record+0x10)=g_eax;MEM16(record+8)=20;MEMF(actor+0x240)=100;
        raven_xml1_combat_absorb_damage(actor,record);
        if(MEMF(actor+0x240)!=100||SMEM16(record+8)!=0)return 225;
        raven_xml1_powerup_metadata_reset(definition);
        MEM16(record+8)=20;MEMF(actor+0x240)=60;
        raven_xml1_combat_absorb_damage(actor,record);
        if(MEMF(actor+0x240)!=60||SMEM16(record+8)!=20||g_esp!=stack||g_fp_top!=fp)return 226;
        puts("PASS XML2 absorption on native XML1 hit: energy heals 45%+1 and cancels damage; physical/retired bypass; full-health cap");
        affecter=raven_xml1_powerup_affecter_begin(definition);
        raven_xml1_powerup_affecter_attribute(definition,affecter,"attribute","resist_physical");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"level","0.1");
        memcpy((void*)XBOX_PTR(record+0x120),"dmg_physical",13);
        PUSH32(g_esp,record+0x120);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00049480u,sub_00049480);g_esp+=4;
        if(g_eax!=0)return 227; /* XML1's own damage-name table. */
        MEM32(record+0x10)=g_eax;MEM16(record+8)=20;
        raven_xml1_combat_resistance(actor,record);
        if(SMEM16(record+8)!=18||g_esp!=stack||g_fp_top!=fp)return 228;
        memcpy((void*)XBOX_PTR(record+0x120),"dmg_energy",11);
        PUSH32(g_esp,record+0x120);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00049480u,sub_00049480);g_esp+=4;
        MEM32(record+0x10)=g_eax;MEM16(record+8)=20;
        raven_xml1_combat_resistance(actor,record);
        if(SMEM16(record+8)!=20)return 229;
        affecter=raven_xml1_powerup_affecter_begin(definition);
        raven_xml1_powerup_affecter_attribute(definition,affecter,"attribute","resist_fire");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"level","0.25");
        memcpy((void*)XBOX_PTR(record+0x120),"dmg_fire",9);
        PUSH32(g_esp,record+0x120);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00049480u,sub_00049480);g_esp+=4;
        if(g_eax!=4)return 230;
        MEM32(record+0x10)=g_eax;MEM16(record+8)=20;
        raven_xml1_combat_resistance(actor,record);
        if(SMEM16(record+8)!=15)return 231;
        affecter=raven_xml1_powerup_affecter_begin(definition);
        raven_xml1_powerup_affecter_attribute(definition,affecter,"attribute","resist_radiation");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"level","0.1");
        memcpy((void*)XBOX_PTR(record+0x120),"dmg_radiation",14);
        PUSH32(g_esp,record+0x120);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00049480u,sub_00049480);g_esp+=4;
        if(g_eax!=7)return 232;
        MEM32(record+0x10)=g_eax;MEM16(record+8)=20;
        raven_xml1_combat_resistance(actor,record);
        if(SMEM16(record+8)!=18)return 233;
        raven_xml1_powerup_metadata_reset(definition);
        MEM16(record+8)=20;
        raven_xml1_combat_resistance(actor,record);
        if(SMEM16(record+8)!=20||g_esp!=stack||g_fp_top!=fp)return 234;
        puts("PASS XML2 resistance on native XML1 hit: physical/fire/radiation typed reduction, energy isolation, retirement");
        puts("PASS add-attack native same-type merge, secondary-hit recursion guard and inactive owner rejection");
    }
    // Operand lifetime tests run after the startup catalog fixture.
    {
        const uint32_t event=pool+0x60000,copy=event+0x100;
        int16_t damage=17;uint8_t primary=42,secondary=43;
        raven_native_energy_lifetime(event,0);raven_native_energy_lifetime(copy,0);
        if(raven_native_explosion_parse(event,"damage","9"))return 190;
        if(raven_native_explosion_resolve(fixture_read,0,event,0,&damage,&primary,&secondary)||damage!=17||primary!=42)return 191;
        if(!raven_native_explosion_parse(event,"ExplodeDamage","1")||
           !raven_native_explosion_parse(event,"ExplodeVictimEventTag","100"))return 192;
        raven_native_energy_copy(copy,event);
        raven_native_explosion_parse(event,"explodedamage","2");
        if(!raven_native_explosion_resolve(fixture_read,0,copy,0,&damage,&primary,&secondary)||damage!=1||primary!=100||secondary)return 193;
        raven_native_explosion_parse(copy,"explodevictimeventtag2","257");
        raven_native_explosion_parse(copy,"explodedamage","0.4");
        if(!raven_native_explosion_resolve(fixture_read,0,copy,0,&damage,&primary,&secondary)||damage!=1||secondary!=1)return 194;
        raven_native_energy_lifetime(copy,2);
        if(raven_native_explosion_resolve(fixture_read,0,copy,0,&damage,&primary,&secondary))return 195;
        raven_native_energy_lifetime(event,0);raven_native_energy_copy(copy,event);
        if(raven_native_explosion_resolve(fixture_read,0,copy,0,&damage,&primary,&secondary))return 196;
        puts("PASS original Bishop explosion fields: parse, independent clone, nonzero rounding, native byte tags, reset and retirement");
        if(!raven_native_projectile_fire_parse(event,"101"))return 197;
        raven_native_energy_copy(copy,event);
        if(raven_native_projectile_fire_tag(copy)!=101)return 198;
        raven_native_projectile_fire_parse(event,"257");
        if(raven_native_projectile_fire_tag(event)!=1||raven_native_projectile_fire_tag(copy)!=101)return 199;
        raven_native_energy_lifetime(copy,2);
        if(raven_native_projectile_fire_tag(copy))return 200;
        raven_native_energy_copy(copy,event);
        if(raven_native_projectile_fire_tag(copy)!=1)return 201;
        raven_native_energy_lifetime(event,3);
        if(raven_native_projectile_fire_tag(event))return 202;
        puts("PASS original projectile fire_event: byte conversion, independent inheritance and retirement");
    }
    return 0;
}
