#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/world/raven_campaign_menu_guest.h"
#include "engine/world/raven_campaign_state_guest.h"
#include "engine/world/raven_progress_guest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void menu_abi(uint32_t expected) {
    if(g_esp!=expected) {
        fprintf(stderr,"[CAMPAIGN MENU ERROR] Native popup ABI\n");_Exit(4);
    }
}

/* Use native copies and native selection. XML1's fourth choice argument means
 * autohide, NOT enabled (185B50 -> 1877C5). A locked row has no action and does
 * not close. No stock popup flag meanings or rendering are changed. */
static void difficulty_rows(uint32_t popup,int unlocked,int32_t selected) {
    static const char *labels[]={"Easy","Normal","Hard"};
    uint32_t entry=g_esp;
    g_esp-=256;
    uint32_t label=g_esp,action=label+128;
    for(unsigned i=0;i<3;++i) {
        int allowed=i!=2 || unlocked;
        strcpy((char*)XBOX_PTR(label),allowed?labels[i]:"Hard (Locked)");
        if(allowed)snprintf((char*)XBOX_PTR(action),128,"setDifficultyLevel(%u)",i);
        else MEM8(action)=0;
        g_ecx=popup;
        PUSH32(g_esp,0); /* hidehud */
        PUSH32(g_esp,allowed); /* autohide after a valid choice */
        PUSH32(g_esp,0); /* alternate action */
        PUSH32(g_esp,action);PUSH32(g_esp,label);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00185C30u,sub_00185C30);
        menu_abi(label);
    }
    if(selected<0 || selected>2 || (selected==2 && !unlocked))selected=1;
    g_ecx=popup;PUSH32(g_esp,(uint32_t)selected);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00185DF0u,sub_00185DF0);
    menu_abi(label);
    g_esp=entry;
}

static void statistics_rows(uint32_t popup) {
    static const char *labels[]={"Use default statistics","Use saved game statistics"};
    static const char *actions[]={"useDefaultStats()","useSavedStats()"};
    uint32_t entry=g_esp;
    g_esp-=256;uint32_t label=g_esp,action=label+128;
    for(unsigned i=0;i<2;++i) {
        strcpy((char*)XBOX_PTR(label),labels[i]);
        strcpy((char*)XBOX_PTR(action),actions[i]);
        g_ecx=popup;PUSH32(g_esp,0);PUSH32(g_esp,1);PUSH32(g_esp,0);
        PUSH32(g_esp,action);PUSH32(g_esp,label);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00185C30u,sub_00185C30);menu_abi(label);
    }
    /* Native186CB0 copies the cancel script into page+11CD. The existing
     * popup dispatch adds runscript, just as for ordinary choice actions. */
    strcpy((char*)XBOX_PTR(action),"startGameDiffDialog()");
    g_ecx=popup;PUSH32(g_esp,action);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00186CB0u,sub_00186CB0);menu_abi(label);
    g_ecx=popup;PUSH32(g_esp,0);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00185DF0u,sub_00185DF0);menu_abi(label);
    g_esp=entry;
}

static void choose_popup(int statistics) {
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int unlocked=statistics?0:xml1_progress_hard_unlocked();
    int32_t selected=statistics?0:xml1_campaign_difficulty();
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00187AF0u,sub_00187AF0);
    menu_abi(saved[7]);
    uint32_t popup=g_eax;
    /* Page1 is the additional startup dialog, as in XML2's chooser. The
     * existing manager owns/copies its text; it retains no host pointers. */
    g_ecx=popup;PUSH32(g_esp,1);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00185E40u,sub_00185E40);menu_abi(saved[7]);
    g_esp-=128;
    uint32_t title=g_esp;
    /* XML1 has no XML2 string IDs2150..2157. Do not pass those IDs to its
     * unrelated localization table or overwrite user-authored strings. */
    strcpy((char*)XBOX_PTR(title),statistics?
        "Choose saved character statistics or use the default character statistics.":
        "Choose a difficulty level:");
    g_ecx=popup;PUSH32(g_esp,title);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00186BC0u,sub_00186BC0);menu_abi(title);
    if(statistics)statistics_rows(popup);
    else difficulty_rows(popup,unlocked,selected);
    menu_abi(title);
    g_ecx=popup;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x001872E0u,sub_001872E0);menu_abi(title);
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
}

void xml1_campaign_choose_difficulty(void) {choose_popup(0);}
void xml1_campaign_choose_statistics(void) {choose_popup(1);}

static int select_difficulty(int32_t value,int (*unlocked)(void),
                             void (*statistics)(void),int (*start)(void)) {
    /* XML2 B0553 sets the campaign value before B0596 queries progress.
     * B059C branches on completion/unlock, not on the selected difficulty:
     * an unlocked campaign offers saved stats even for Easy or Normal.
     * Keep native integer storage; the chooser itself limits visible choices.
     * The continuation callbacks isolate presentation in programmatic tests. */
    xml1_campaign_set_difficulty(value);
    if(unlocked()) {statistics();return 1;}
    return start();
}
int xml1_campaign_select_difficulty(int32_t value) {
    return select_difficulty(value,xml1_progress_hard_unlocked,
                             xml1_campaign_choose_statistics,xml1_campaign_start_selected);
}

static unsigned selection_statistics_calls,selection_start_calls,selection_query_calls;
static int selection_start_result,selection_failed,selection_unlocked;
static int32_t selection_expected;
static int selection_unlock_terminal(void) {
    ++selection_query_calls;
    if(xml1_campaign_difficulty()!=selection_expected)selection_failed=1;
    return selection_unlocked;
}
static void selection_statistics_terminal(void) {
    ++selection_statistics_calls;
    if(xml1_campaign_difficulty()!=selection_expected)selection_failed=1;
}
static int selection_start_terminal(void) {
    ++selection_start_calls;
    if(xml1_campaign_difficulty()!=selection_expected)selection_failed=1;
    return selection_start_result;
}
static int selection_fixture(void) {
    /* Avoid constructing or changing a live campaign. Only the adjunct live
     * difficulty is exercised and restored; native records are untouched. */
    uint32_t initialized=MEM32(0x49954c),sp=g_esp;
    MEM32(0x49954c)=initialized|1;
    int32_t previous=xml1_campaign_difficulty();
    const int32_t values[]={0,1,2,-1,99};
    selection_failed=0;
    for(unsigned i=0;i<sizeof(values)/sizeof(values[0]);++i)
    for(int unlocked=0;unlocked<2;++unlocked)
    for(int succeeds=0;succeeds<2;++succeeds) {
        selection_expected=values[i];selection_start_result=succeeds;selection_unlocked=unlocked;
        selection_statistics_calls=selection_start_calls=selection_query_calls=0;
        int result=select_difficulty(values[i],selection_unlock_terminal,
                                    selection_statistics_terminal,selection_start_terminal);
        if(result!=(unlocked?1:succeeds) || g_esp!=sp || selection_query_calls!=1 ||
           selection_statistics_calls!=(unsigned)unlocked ||
           selection_start_calls!=(unsigned)!unlocked)selection_failed=1;
    }
    xml1_campaign_set_difficulty(previous);MEM32(0x49954c)=initialized;
    fprintf(stderr,"[DIFFICULTY SELECTION] %s state-before-continuation, unlock routing and startup failure propagation; UI terminals substituted\n",
            selection_failed?"FAIL":"PASS");
    return selection_failed;
}

int xml1_campaign_menu_fixture(uint32_t pool) {
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int failed=selection_fixture();
    for(unsigned unlocked=0;unlocked<2;++unlocked)for(int selected=-1;selected<=3;++selected) {
        /* Scratch owner, not the live popup singleton. Exercise the actual
         * native option writer/string copier/selection/flag queries without
         * initializing renderer resources or presenting a window. */
        memset((void*)XBOX_PTR(pool),0xa5,0x3a38);
        MEM32(pool+0x3a1c)=1;
        uint32_t page=pool+4+0x135c;
        MEM8(page+0x1354)=0;MEM8(page+0x1357)=0xff;
        MEM8(page+0x1359)=4; /* native initializer's autohide */
        MEM32(page+0x1104)=0xffffffffu;MEM32(page+0x1108)=0;
        difficulty_rows(pool,(int)unlocked,selected);
        int expected=selected<0 || selected>2 || (selected==2&&!unlocked)?1:selected;
        if(g_esp!=saved[7] || MEM8(page+0x1354)!=3 || MEM8(page+0x1357)!=expected ||
           MEM32(pool+4)!=0xa5a5a5a5u || MEM32(pool+4+2*0x135c)!=0xa5a5a5a5u)failed=1;
        for(unsigned i=0;i<3;++i) {
            int allowed=i!=2 || unlocked;
            char action[128];snprintf(action,sizeof(action),"setDifficultyLevel(%u)",i);
            const char *label=i==0?"Easy":i==1?"Normal":allowed?"Hard":"Hard (Locked)";
            if(strcmp((const char*)XBOX_PTR(page+0x200+i*0x80),label) ||
               strcmp((const char*)XBOX_PTR(page+0x701+i*0x80),allowed?action:"") ||
               MEM8(page+0xc02+i*0x80))failed=1;
            g_ecx=pool;PUSH32(g_esp,i);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x00185B50u,sub_00185B50);
            if(g_esp!=saved[7] || (g_eax&0xff)!=(unsigned)allowed)failed=1;
            g_ecx=pool;PUSH32(g_esp,i);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x00185BC0u,sub_00185BC0);
            if(g_esp!=saved[7] || (g_eax&0xff))failed=1;
        }
    }
    {
        uint32_t page=pool+4+0x135c;
        MEM8(page+0x1354)=0;MEM8(page+0x1357)=0xff;
        statistics_rows(pool);
        if(g_esp!=saved[7] || MEM8(page+0x1354)!=2 || MEM8(page+0x1357)!=0 ||
           strcmp((const char*)XBOX_PTR(page+0x200),"Use default statistics") ||
           strcmp((const char*)XBOX_PTR(page+0x280),"Use saved game statistics") ||
           strcmp((const char*)XBOX_PTR(page+0x701),"useDefaultStats()") ||
           strcmp((const char*)XBOX_PTR(page+0x781),"useSavedStats()") ||
           strcmp((const char*)XBOX_PTR(page+0x11cd),"startGameDiffDialog()") ||
           (MEM32(page+0x1104)&3)!=3 || (MEM32(page+0x1108)&3))failed=1;
    }
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
    fprintf(stderr,"[CAMPAIGN MENU] %s native choice copies, lock actions, selection and ABI; presentation untested\n",failed?"FAIL":"PASS");
    return failed;
}
