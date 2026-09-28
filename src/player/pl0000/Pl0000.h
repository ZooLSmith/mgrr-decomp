// REFINED
// Pl0000 -- the player character (Raiden).  Refined from include/auto/classes/Pl0000.h (generated
// from RTTI + Ghidra).  Fields below 0xA00 belong to BehaviorAppBase / Behavior / cObj / cModel /
// cModelBase / cParts (see their headers); everything from 0xA00 up is Pl0000's own.
#pragma once
#include "BehaviorAppBase.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct Pl0000 : public BehaviorAppBase {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 destruct(byte flags);  // 00AC35D0 slot 0x0  overrides cParts
    virtual undefined * vf04();  // 00AC0A70 slot 0x4  overrides cObj
    virtual void vf1C();  // 00B866E0 slot 0x1C  overrides cObj
    virtual void vf20();  // 00B866C0 slot 0x20  overrides cObj
    virtual undefined4 startup();  // 00C02660 slot 0x40  overrides Behavior
    virtual void vf44();  // 00BBCEE0 slot 0x44  overrides Behavior
    virtual void vf48();  // 00BF2740 slot 0x48  overrides Behavior
    virtual void vf4C();  // 00C064C0 slot 0x4C  overrides Behavior
    virtual void vf50();  // 00BF2CC0 slot 0x50  overrides Behavior
    virtual void vf54();  // 00BBDEC0 slot 0x54  overrides Behavior
    virtual void vf5C();  // 00B7A080 slot 0x5C  overrides Behavior
    virtual void vf7C(undefined4 param_2, undefined4 param_3);  // 00B7A1F0 slot 0x7C  overrides Behavior
    virtual void vfFC();  // 00B94C10 slot 0xFC  overrides Behavior
    virtual void vf100();  // 00B94D20 slot 0x100  overrides Behavior
    virtual void vf104();  // 00C063C0 slot 0x104  overrides Behavior
    // slots 0x108 / 0x10C / 0x158: ret 8 -- two stack arguments; the Behavior auto prototypes have none
    virtual void vf108(undefined4 param_2, undefined4 reason);  // 00B7D840 slot 0x108  overrides Behavior
    virtual undefined4 vf10C(unsigned int id, int unused);  // 00B7D710 slot 0x10C  overrides Behavior (object linked to id)
    virtual void setSeqAtk();  // 00BBE290 slot 0x128  overrides Behavior
    virtual int getAttackInfo(ushort * param_2);  // 00BE6E90 slot 0x130  overrides Behavior
    virtual undefined4 vf134();  // 00BE9580 slot 0x134  overrides Behavior
    // slots 0x14C / 0x184 / 0x188 / 0x280: stack arguments (ret 8 / 0xC / 8 / 0x10); the Behavior auto prototypes have none
    virtual undefined4 vf14C(int kind, int obj);  // 00B8C900 slot 0x14C  overrides Behavior (1: interaction `kind` with obj allowed)
    // slot 0x150: ret 8 -- two stack arguments (link kind, partner object); the Behavior auto prototype has none
    virtual void vf150(int kind, int obj);  // 00BF5690 slot 0x150  overrides Behavior (starts the linked action `kind` with obj)
    virtual undefined4 vf158(int kind, int unused);  // 00B7E6F0 slot 0x158  overrides Behavior
    // slot 0x160: ret 4 -- one stack argument (object whose handle is stored in handle91C)
    virtual void vf160(int obj);  // 00B7E6C0 slot 0x160  overrides Behavior
    virtual undefined4 vf17C();  // 00AC0C50 slot 0x17C  overrides Behavior
    virtual int vf184(int kind, int obj, int hitInfo);  // 00B8CBD0 slot 0x184  overrides Behavior
    virtual void vf188(int kind, int obj);  // 00B8CC70 slot 0x188  overrides Behavior
    virtual void vf19C(int param_2, undefined4 param_3);  // 00B94DA0 slot 0x19C  overrides Behavior
    virtual void vf1A4(undefined4 param_2, uint param_3);  // 00BDA310 slot 0x1A4  overrides Behavior
    virtual void vf1AC();  // 00B94D60 slot 0x1AC  overrides Behavior
    virtual void vf1E8();  // 00B7D9E0 slot 0x1E8  overrides Behavior
    virtual void vf1EC();  // 00B7DA00 slot 0x1EC  overrides Behavior
    virtual undefined4 vf1FC();  // 00AC0AA0 slot 0x1FC  overrides Behavior
    virtual void vf214(undefined4 param_2, undefined4 param_3, int param_4);  // 00B87120 slot 0x214  overrides Behavior
    virtual void vf218();  // 00B87260 slot 0x218  overrides Behavior
    // slot 0x224: the machine code takes 2 float stack arguments (ret 8); the Behavior auto prototype has none
    virtual void vf224(float a, float b);  // 00AC0D20 slot 0x224  overrides Behavior
    virtual undefined4 vf228();  // 00B87070 slot 0x228  overrides Behavior
    virtual undefined4 vf22C();  // 00B870C0 slot 0x22C  overrides Behavior
    virtual undefined4 vf230();  // 00B7C750 slot 0x230  overrides Behavior
    virtual undefined4 vf234();  // 00B7C780 slot 0x234  overrides Behavior
    // slot 0x248: ret 0xC -- three stack arguments (the first a model list); the Behavior auto prototype has none
    virtual void vf248(int list, int unused1, int unused2);  // 00B88960 slot 0x248  overrides Behavior
    virtual undefined4 vf270();  // 00AC0D60 slot 0x270  overrides Behavior
    virtual void vf27C(undefined4 * out);  // 00AC0C60 slot 0x27C  overrides Behavior (out = float[4])
    virtual undefined4 vf280(float *hitPos, float *from, float *to, int ignore);  // 00B8DAA0 slot 0x280  overrides Behavior ("Pl0000 ViewRay"; this unused)
    // slot 0x284: ret 0x10 -- four stack arguments; the Behavior auto prototype has none
    virtual undefined4 vf284(undefined4 arg1, undefined4 arg2, undefined4 arg3, int ignore);  // 00BEA700 slot 0x284  overrides Behavior ("Pl0000 ViewRay" sphere cast)
    virtual undefined4 vf288();  // 00B7EC70 slot 0x288  overrides Behavior (ret 0x10: four unused stack arguments)
    virtual void vf2F8();  // 00BF26F0 slot 0x2F8  overrides Behavior
    virtual void vf30C(int param_2, int param_3);  // 00B94640 slot 0x30C  overrides BehaviorAppBase
    virtual void vf314();  // 00AC0C90 slot 0x314  overrides BehaviorAppBase
    virtual void vf318();  // 00AC0CC0 slot 0x318  overrides BehaviorAppBase
    virtual void vf31C();  // 00B7ADE0 slot 0x31C  overrides BehaviorAppBase
    virtual undefined4 vf320(float param_2);  // 00B86EA0 slot 0x320  overrides BehaviorAppBase
    virtual undefined4 vf324();  // 00B7AD80 slot 0x324  overrides BehaviorAppBase
    virtual void vf328(float dt);  // 00B7A9E0 slot 0x328  overrides BehaviorAppBase (argument unused)
    virtual bool vf32C();  // 00B95330 slot 0x32C
    virtual bool vf330();  // 00B7E1F0 slot 0x330
    virtual bool vf334();  // 00B7E200 slot 0x334
    virtual undefined4 vf338();  // 00AC0A80 slot 0x338
    virtual bool vf33C();  // 00B7AD90 slot 0x33C
    virtual bool vf340();  // 00B7C730 slot 0x340
    virtual bool vf344();  // 00BC3370 slot 0x344
    virtual bool vf348();  // 00B7CDB0 slot 0x348
    virtual uint vf34C();  // 00B7E5C0 slot 0x34C
    virtual undefined4 vf350();  // 00AC0AB0 slot 0x350
    virtual bool vf354();  // 00AC0AD0 slot 0x354
    virtual undefined4 vf358();  // 00AC0AE0 slot 0x358
    virtual undefined4 vf35C();  // 00AC0B00 slot 0x35C
    virtual undefined4 vf360();  // 00AC0B30 slot 0x360
    virtual undefined4 vf364();  // 00AC0B80 slot 0x364
    virtual undefined4 vf368();  // 00B7C830 slot 0x368
    virtual undefined4 vf36C();  // 00AC0B90 slot 0x36C
    virtual undefined4 vf370();  // 00AC0BB0 slot 0x370
    virtual undefined4 vf374();  // 00AC0BE0 slot 0x374
    virtual undefined4 vf378();  // 00AC0C10 slot 0x378
    virtual bool vf37C();  // 00AC0C40 slot 0x37C
    virtual bool vf380();  // 00B89630 slot 0x380
    virtual void vf384();  // 00B896B0 slot 0x384
    // slot 0x388: ret 4 -- one stack argument (callers push 0); the auto prototype had none
    virtual void vf388(int arg);  // 00B87BD0 slot 0x388
    virtual void vf38C();  // 00B7CE20 slot 0x38C
    virtual void vf390();  // 00BC8DE0 slot 0x390
    virtual void vf394();  // 00B7D560 slot 0x394
    virtual bool vf398();  // 00B7D5B0 slot 0x398
    virtual void vf39C();  // 00B88710 slot 0x39C
    virtual float10 vf3A0();  // 00B8DBB0 slot 0x3A0
    virtual float10 vf3A4();  // 00B8DC40 slot 0x3A4
    virtual float10 vf3A8();  // 00B8DCC0 slot 0x3A8
    virtual float10 vf3AC();  // 00B8DD50 slot 0x3AC
    virtual float10 vf3B0();  // 00BC4C20 slot 0x3B0
    virtual float10 vf3B4();  // 00B7F4E0 slot 0x3B4
    virtual float10 vf3B8();  // 00B8DDD0 slot 0x3B8
    virtual undefined1 vf3BC();  // 00B8DE40 slot 0x3BC
    virtual void vf3C0();  // 00B93790 slot 0x3C0
    virtual void vf3C4();  // 00C104B0 slot 0x3C4
    virtual void vf3C8();  // 00C05000 slot 0x3C8
    virtual undefined4 vf3CC();  // 00C04430 slot 0x3CC
    virtual undefined4 vf3D0();  // 00BC4200 slot 0x3D0
    virtual undefined4 vf3D4();  // 00BC44D0 slot 0x3D4
    virtual void vf3D8();  // 00B948D0 slot 0x3D8
    virtual void vf3DC(undefined4 param_2, undefined4 param_3);  // 00BC33F0 slot 0x3DC
    virtual void vf3E0(undefined4 param_2, undefined4 param_3);  // 00BC3470 slot 0x3E0
    virtual void vf3E4();  // 00AC0D00 slot 0x3E4
    virtual undefined4 vf3E8();  // 00AC0D70 slot 0x3E8
    virtual bool vf3EC();  // 00B8A4C0 slot 0x3EC
    virtual void vf3F0();  // 00AC0D80 slot 0x3F0
    virtual void vf3F4();  // 00B7D760 slot 0x3F4
    // non-virtual members
    Pl0000();  // 00AC0310
    static void qteZangekiSafeCheckForward();  // 00B89A20
    undefined4 vf134_00BDA8A0();  // 00BDA8A0 (not static: uses this)
    undefined4 xcomboLowCheck();  // 00BF4E00 (FILEMAP: hkpAllCdPointCollector::hkpAllCdPointCollector_17; "Xcombo Low Check")
    // __thiscall with ECX = the ZangekiEventQteStatePl0010 state (not a Pl0000) and one stack argument (its context): qte kind 7
    static void em0080Qte2SafeCheck(void *state, undefined4 *context);  // 00BF9730

    // fields (absolute byte offsets from object start; names ending in a hex offset are not yet understood)
    void         *espA00()           { return (void *)((char *)this + 0xA00); }           // +0xA00 embedded cEspControler (FUN_00b7c8a0 / FUN_00b7c900)
    int          &fieldAB0()         { return *(int *)((char *)this + 0xAB0); }           // +0xAB0 1 (FUN_00b7c8a0) / 2 (FUN_00b7c900)
    int          &fieldB70()         { return *(int *)((char *)this + 0xB70); }           // +0xB70 cleared by FUN_00b7c8a0 / FUN_00b7c900
    int          &fieldB74()         { return *(int *)((char *)this + 0xB74); }           // +0xB74 vf108: 0 for reason 1, 1 for reason 2
    int          &fieldB78()         { return *(int *)((char *)this + 0xB78); }           // +0xB78 1 unless FUN_00a8c760(0) (FUN_00b7d8b0 / FUN_00b7e950)
    int          &fieldB80()         { return *(int *)((char *)this + 0xB80); }           // +0xB80 returned by vf230
    int          &fieldB84()         { return *(int *)((char *)this + 0xB84); }           // +0xB84 returned by vf234
    int &fieldB88()                { return *(int *)((char *)this + 0xB88); }  // +0xB88 1 when vf3CC ends with action 0xCB after the kill hit (FUN_00416d50(0x3C)); 0 at startup
    int          &fieldB8C()         { return *(int *)((char *)this + 0xB8C); }  // +0xB8C 1 when the HP ran out with DAT_01bea094 bit 3 (vf30C)
    int          &fieldB90()          { return *(int *)((char *)this + 0xB90); }           // +0xB90 0x5A (90) when FUN_00b8cd60 turns to its target
    int          &fieldB94()         { return *(int *)((char *)this + 0xB94); }           // +0xB94 selects the action-mask of actions 9 / 0x16 (FUN_00b79f30)
    unsigned int &handleB98()        { return *(unsigned int *)((char *)this + 0xB98); }  // +0xB98 object handle (resolved by FUN_00a81330; owner via FUN_004b5380)
    int          &fieldB9C()         { return *(int *)((char *)this + 0xB9C); }           // +0xB9C 4 after FUN_00b7d7a0
    int          &keyBA0()            { return *(int *)((char *)this + 0xBA0); }  // +0xBA0 motion key 1..8 of FUN_00a8c760(0x30 .. 0x37) (FUN_00b88e20)
    int          &keyBA4()            { return *(int *)((char *)this + 0xBA4); }  // +0xBA4 key read in step 3 of FUN_00b88e20
    float        &timerBA8()          { return *(float *)((char *)this + 0xBA8); }  // +0xBA8 10.0f count-down of the key motion (FUN_00b88e20)
    int          &fieldBAC()          { return *(int *)((char *)this + 0xBAC); }  // +0xBAC idle-motion step 0..3 of FUN_00b88e20
    float        &timerBB0()          { return *(float *)((char *)this + 0xBB0); }  // +0xBB0 random delay (60..120 or 3) of the idle motion (FUN_00b88e20)
    float        &fieldBB4()          { return *(float *)((char *)this + 0xBB4); }  // +0xBB4 3.0f while the lock marker object obj12B4 is valid (vf390)
    float        &fieldBB8()         { return *(float *)((char *)this + 0xBB8); }         // +0xBB8 180.0f by FUN_00b85420, 1.0f by FUN_00b854e0
    int          &fieldBBC()         { return *(int *)((char *)this + 0xBBC); }           // +0xBBC 2 by FUN_00b85420 / FUN_00b854e0
    void         *lockBC0()           { return (void *)((char *)this + 0xBC0); }           // +0xBC0 embedded CRITICAL_SECTION (0x18 bytes), taken by FUN_00b8c170
    int          &lockEnabledBD8()    { return *(int *)((char *)this + 0xBD8); }           // +0xBD8 non-zero: lockBC0 is used
    float *      vecBE0()            { return (float *)((char *)this + 0xBE0); }  // +0xBE0 float[4] step (0, 0, field27B4) turned by the orientation matrix (FUN_00bc6760)
    int          &flagBF0()      { return *(int *)((char *)this + 0xBF0); }  // +0xBF0 1: vf50 snaps the position to the ground (FUN_008eaf70); cleared every vf50
    int          &turnBF8()      { return *(int *)((char *)this + 0xBF8); }  // +0xBF8 turn of action 0x61 chosen by xcomboLowCheck (0: pi, 1: +pi/2, 2: -pi/2)
    int          &fieldBFC()         { return *(int *)((char *)this + 0xBFC); }           // +0xBFC set by FUN_00b7e090
    int          &lineLockOn()       { return *(int *)((char *)this + 0xC00); }           // +0xC00 non-zero: position is projected onto the line below (FUN_00b7ac20)
    float        *lineOrigin()       { return (float *)((char *)this + 0xC10); }          // +0xC10 float[4] point on the constraint line
    float        *lineDir()          { return (float *)((char *)this + 0xC20); }          // +0xC20 float[4] direction of the constraint line
    unsigned int &handleC30()        { return *(unsigned int *)((char *)this + 0xC30); }  // +0xC30 object handle (target found by FUN_00b7c5b0)
    int &fieldCF0()                { return *(int *)((char *)this + 0xCF0); }  // +0xCF0 0 at startup
    unsigned int &inputHold()        { return *(unsigned int *)((char *)this + 0xCF8); }  // +0xCF8 ? pad buttons held (tested against the action masks)
    unsigned int &inputTrigger()     { return *(unsigned int *)((char *)this + 0xCFC); }  // +0xCFC ? pad buttons pressed this frame
    unsigned int &inputD04()         { return *(unsigned int *)((char *)this + 0xD04); }  // +0xD04 ? third pad button mask of the input block (masked with inputHold / inputTrigger in vf3C0)
    float        &fieldD08()          { return *(float *)((char *)this + 0xD08); }         // +0xD08 ? stick x (with fieldD0C: inputSqD28 = D08^2 + D0C^2, FUN_00b8af00)
    float        &fieldD0C()         { return *(float *)((char *)this + 0xD0C); }         // +0xD0C clamped to >= -1000 and compared with 300 / 400 (FUN_00b7fcb0 / FUN_00b7fd70)
    float        &fieldD10()          { return *(float *)((char *)this + 0xD10); }         // +0xD10 ? stick axis, compared with +-190 / +-200 (FUN_00b8c660 / FUN_00b8c800)
    float        &fieldD14()         { return *(float *)((char *)this + 0xD14); }  // +0xD14 ? second stick axis (with fieldD10; copied to stick3BD4 in vf3C0)
    float        &inputSqD28()       { return *(float *)((char *)this + 0xD28); }         // +0xD28 ? squared stick length (90000 = 300^2 / 640000 = 800^2 thresholds)
    float        &angleD2C()         { return *(float *)((char *)this + 0xD2C); }         // +0xD2C ? stick angle in [-pi, pi] (FUN_00b84e50 direction sectors)
    float        &inputYawD30()      { return *(float *)((char *)this + 0xD30); }         // +0xD30 ? yaw of the stick direction (used when inputSqD28 > 90000)
    float        &yawD34()           { return *(float *)((char *)this + 0xD34); }         // +0xD34 yaw given to the auto-target search (FUN_00b85d20)
    float        *matD40()            { return (float *)((char *)this + 0xD40); }          // +0xD40 float[16] built by FUN_00db6410 (FUN_00b8a370) / FUN_00da0640 (FUN_00b8af00)
    float *      matD80()             { return (float *)((char *)this + 0xD80); }  // +0xD80 float[16] copy of the orientation matrix +0xB0 (FUN_00b893e0)
    float *      matDC0()             { return (float *)((char *)this + 0xDC0); }  // +0xDC0 float[16] copy of its inverse +0xF0 (FUN_00b893e0)
    // action -> pad button masks, written by FUN_00b79e20 (swapped for DAT_01b77e30 == 2 / 3)
    float &fieldE00()              { return *(float *)((char *)this + 0xE00); }  // +0xE00 1.0f at startup
    float &fieldE04()              { return *(float *)((char *)this + 0xE04); }  // +0xE04 1.0f at startup
    unsigned int &maskE08()          { return *(unsigned int *)((char *)this + 0xE08); }  // +0xE08 (action 0xC)
    int          &fieldE0C()         { return *(int *)((char *)this + 0xE0C); }           // +0xE0C 1: FUN_00b7eba0, 0: FUN_00b7ec60
    int          &fieldE10()         { return *(int *)((char *)this + 0xE10); }           // +0xE10 non-zero: FUN_00b856e0 takes obj12A8 / field1290 as lock-on
    unsigned int &maskE14()          { return *(unsigned int *)((char *)this + 0xE14); }  // +0xE14
    unsigned int &maskE18()          { return *(unsigned int *)((char *)this + 0xE18); }  // +0xE18 (action 5)
    unsigned int &maskE1C()          { return *(unsigned int *)((char *)this + 0xE1C); }  // +0xE1C
    unsigned int &maskE20()          { return *(unsigned int *)((char *)this + 0xE20); }  // +0xE20 (action 6)
    unsigned int &maskE24()          { return *(unsigned int *)((char *)this + 0xE24); }  // +0xE24 (action 7)
    unsigned int &maskE28()          { return *(unsigned int *)((char *)this + 0xE28); }  // +0xE28
    unsigned int &maskE2C()          { return *(unsigned int *)((char *)this + 0xE2C); }  // +0xE2C
    unsigned int &maskE30()          { return *(unsigned int *)((char *)this + 0xE30); }  // +0xE30
    unsigned int &maskE34()          { return *(unsigned int *)((char *)this + 0xE34); }  // +0xE34
    unsigned int &maskE38()          { return *(unsigned int *)((char *)this + 0xE38); }  // +0xE38 (action 0xA)
    unsigned int &maskE3C()          { return *(unsigned int *)((char *)this + 0xE3C); }  // +0xE3C (action 0xD)
    unsigned int &maskE40()          { return *(unsigned int *)((char *)this + 0xE40); }  // +0xE40 (action 0x16 when fieldB94 != 0)
    unsigned int &maskE44()          { return *(unsigned int *)((char *)this + 0xE44); }  // +0xE44
    unsigned int &maskE48()          { return *(unsigned int *)((char *)this + 0xE48); }  // +0xE48 (action 9 when fieldB94 == 0)
    unsigned int &maskE4C()          { return *(unsigned int *)((char *)this + 0xE4C); }  // +0xE4C (FUN_00b7a570 / FUN_00b7a600)
    unsigned int &maskE50()          { return *(unsigned int *)((char *)this + 0xE50); }  // +0xE50 (action 8; FUN_00b7a490 / FUN_00b7a500)
    unsigned int &maskE54()          { return *(unsigned int *)((char *)this + 0xE54); }  // +0xE54
    unsigned int &maskE58()          { return *(unsigned int *)((char *)this + 0xE58); }  // +0xE58 (action 0xE)
    unsigned int &maskE5C()          { return *(unsigned int *)((char *)this + 0xE5C); }  // +0xE5C
    unsigned int &maskE60()          { return *(unsigned int *)((char *)this + 0xE60); }  // +0xE60
    unsigned int &maskE64()          { return *(unsigned int *)((char *)this + 0xE64); }  // +0xE64
    unsigned int &maskE68()          { return *(unsigned int *)((char *)this + 0xE68); }  // +0xE68
    int          &timerE70()         { return *(int *)((char *)this + 0xE70); }  // +0xE70 frame count-down; 0xC when maskE64 / maskE68 are held together (vf3C0)
    int          &timerE74()         { return *(int *)((char *)this + 0xE74); }  // +0xE74 frame count-down; 0xC when maskE5C / maskE60 are held together (vf3C0)
    int          &timerE78()         { return *(int *)((char *)this + 0xE78); }  // +0xE78 frame count-down; 0xF when maskE60 is pressed (vf3C0)
    int          &timerE7C()         { return *(int *)((char *)this + 0xE7C); }  // +0xE7C frame count-down; 0xF when maskE5C is pressed (vf3C0)
    float        &holdTimeE80()      { return *(float *)((char *)this + 0xE80); }  // +0xE80 time the maskE24 button has been held (vf3C0)
    float        &holdTimeE84()      { return *(float *)((char *)this + 0xE84); }  // +0xE84 time the maskE20 button has been held (vf3C0)
    void *       espE90()            { return (void *)((char *)this + 0xE90); }  // +0xE90 embedded cEspControler? (FUN_00eaa6e0(5.0f, 0) in FUN_00be86f0 / FUN_00be8aa0)
    float &fieldF44()              { return *(float *)((char *)this + 0xF44); }  // +0xF44 500.0f at startup
    int          &fieldF4C()         { return *(int *)((char *)this + 0xF4C); }           // +0xF4C non-zero: the hold-repeat logic of FUN_00b7a490.. is used
    int          &fieldF50()          { return *(int *)((char *)this + 0xF50); }           // +0xF50 cleared by FUN_00b8d3b0
    int          &fieldF54()          { return *(int *)((char *)this + 0xF54); }  // +0xF54 non-zero: target kinds 4 / 5 request the slow motion (FUN_00bc8c50)
    int          &fieldF58()         { return *(int *)((char *)this + 0xF58); }           // +0xF58 (same role as fieldF4C)
    int          &holdFramesF5C()    { return *(int *)((char *)this + 0xF5C); }           // +0xF5C frames the maskE50 button has been held
    int          &holdFramesF60()    { return *(int *)((char *)this + 0xF60); }           // +0xF60 frames the maskE4C button has been held
    int          &dataF68()          { return *(int *)((char *)this + 0xF68); }  // +0xF68 growable array: data (+4 capacity, +8 count, +0xC owned; released by vf44)
    void *       objF78()            { return (void *)((char *)this + 0xF78); }  // +0xF78 embedded object released with FUN_00a5dc60 (vf44)
    float        &holdTimeFDC()       { return *(float *)((char *)this + 0xFDC); }         // +0xFDC time the maskE24 button has been held (FUN_00b8ef50 / FUN_00b8f060)
    unsigned int &handleFE0()        { return *(unsigned int *)((char *)this + 0xFE0); }  // +0xFE0 object handle (reset by FUN_00bf75d0)
    unsigned int &handleFE4()        { return *(unsigned int *)((char *)this + 0xFE4); }  // +0xFE4 object handle
    unsigned int &handleFE8()        { return *(unsigned int *)((char *)this + 0xFE8); }  // +0xFE8 object handle (owner via FUN_0085c1b0)
    unsigned int &handleFEC()        { return *(unsigned int *)((char *)this + 0xFEC); }  // +0xFEC object handle (vf10C id 0x11013)
    unsigned int &handleFF0()        { return *(unsigned int *)((char *)this + 0xFF0); }  // +0xFF0 object handle (FUN_00b7d050 / FUN_00b7d060)
    unsigned int &handleFF4()        { return *(unsigned int *)((char *)this + 0xFF4); }  // +0xFF4 object handle (FUN_00b7d0b0)
    unsigned int &handleFF8()        { return *(unsigned int *)((char *)this + 0xFF8); }  // +0xFF8 object handle (FUN_00b7d0c0 / FUN_00b7d0e0)
    unsigned int &handleFFC()        { return *(unsigned int *)((char *)this + 0xFFC); }  // +0xFFC object handle (FUN_00b7d110 / FUN_00b7d130)
    unsigned int &handle100C()        { return *(unsigned int *)((char *)this + 0x100C); } // +0x100C object handle (vf14C kind 8)
    unsigned int &handle1010()     { return *(unsigned int *)((char *)this + 0x1010); }  // +0x1010 object handle (reset with FUN_00a7c950 at startup)
    float        *push1020()          { return (float *)((char *)this + 0x1020); }         // +0x1020 float[4] push-out vector from the handle1370 target (FUN_00b8ced0 / FUN_00b8d800)
    float        &field1034()        { return *(float *)((char *)this + 0x1034); }  // +0x1034 <= -0.5 (with field624 == 0): field94C = 0xF (FUN_00bc0630)
    void *list1040()               { return (void *)((char *)this + 0x1040); }  // +0x1040 embedded growable array (FUN_008609b0(0x40, heap) at startup; data1044 at +4)
    int          &data1044()         { return *(int *)((char *)this + 0x1044); }  // +0x1044 growable array: data (+4 capacity, +8 count = field104C, +0xC owned; vf44)
    int          &field104C()        { return *(int *)((char *)this + 0x104C); }  // +0x104C cleared with field2570 = 10 (vf3C0)
    int          &field1054()        { return *(int *)((char *)this + 0x1054); }  // +0x1054 copied to field1064 / field1068 / field106C when buffer1058 is released (vf44)
    int          &buffer1058()       { return *(int *)((char *)this + 0x1058); }  // +0x1058 heap block freed with FUN_00dd48d0 (vf44)
    int          &field105C()        { return *(int *)((char *)this + 0x105C); }  // +0x105C cleared with buffer1058
    int          &field1060()        { return *(int *)((char *)this + 0x1060); }  // +0x1060 cleared with buffer1058
    int          &field1064()        { return *(int *)((char *)this + 0x1064); }  // +0x1064 = field1054 when buffer1058 is released
    int          &field1068()        { return *(int *)((char *)this + 0x1068); }  // +0x1068 = field1054 when buffer1058 is released
    int          &field106C()        { return *(int *)((char *)this + 0x106C); }  // +0x106C = field1054 when buffer1058 is released
    float        &yaw1070()           { return *(float *)((char *)this + 0x1070); }        // +0x1070 yaw given to FUN_00b87df0 (FUN_00b8cd60)
    unsigned char &step1078()        { return *(unsigned char *)((char *)this + 0x1078); } // +0x1078 sequence step of FUN_00b7d1b0 (0, 1, 4, 5)
    float        &timer107C()        { return *(float *)((char *)this + 0x107C); }        // +0x107C count-down of FUN_00b7d1b0 steps 4 / 5 (30.0f)
    int          &field109C()        { return *(int *)((char *)this + 0x109C); }          // +0x109C cleared by FUN_00b7d1b0
    short        &motion10A0()       { return *(short *)((char *)this + 0x10A0); }        // +0x10A0 motion kept on layer 2 by FUN_00b7d1b0 (0x3B / 0x40, -1 = none)
    int          &field10A4()        { return *(int *)((char *)this + 0x10A4); }  // +0x10A4 set to 1 by FUN_00be86f0 / FUN_00be8aa0
    short        &field10A8()        { return *(short *)((char *)this + 0x10A8); }        // +0x10A8 id given to FUN_00b7df20 (-1 after FUN_00b7dbe0)
    int          &obj10C4()          { return *(int *)((char *)this + 0x10C4); }          // +0x10C4 object released with FUN_00ace4a0(0x6F, this) (FUN_00b7d690)
    int          &field10C8()         { return *(int *)((char *)this + 0x10C8); }  // +0x10C8 1: create obj10C4 ("gut"), 2: count timer10CC down (FUN_00b88b90)
    float        &timer10CC()         { return *(float *)((char *)this + 0x10CC); }  // +0x10CC 52.5f when obj10C4 is created
    float        &field10D4()         { return *(float *)((char *)this + 0x10D4); }        // +0x10D4 8.0f from vf188
    float        &timer10D8()     { return *(float *)((char *)this + 0x10D8); }  // +0x10D8 count-down (dt subtracted while >= 0, vf48)
    int          &field10E0()        { return *(int *)((char *)this + 0x10E0); }  // +0x10E0 cleared by vf150 (kind 0)
    void *       sub10E4()           { return (void *)((char *)this + 0x10E4); }  // +0x10E4 embedded object reset with FUN_00900ca0 (vf44)
    int          &field10F4()     { return *(int *)((char *)this + 0x10F4); }  // +0x10F4 (inside sub10E4) non-zero: the phantom push-out of vf50 is applied
    void *       sub10F8()           { return (void *)((char *)this + 0x10F8); }  // +0x10F8 embedded object reset with FUN_00900ca0 (vf44)
    float        *mtx1140()          { return (float *)((char *)this + 0x1140); }         // +0x1140 float[16] matrix (translation row +0x1170) used by em0080Qte2SafeCheck
    int          &flag1180()         { return *(int *)((char *)this + 0x1180); }          // +0x1180 non-zero: mtx1140 is valid (em0080Qte2SafeCheck)
    int          &entry1188()        { return *(int *)((char *)this + 0x1188); }          // +0x1188 target entry given to TargetManager vf58 (FUN_00b856e0)
    int          &field118C()         { return *(int *)((char *)this + 0x118C); }  // +0x118C model scaled by FUN_00b87970
    int          &blade1190()         { return *(int *)((char *)this + 0x1190); }  // +0x1190 "Pl0010_Blade" object (FUN_00b88590)
    int          &sheath1194()       { return *(int *)((char *)this + 0x1194); }  // +0x1194 "Pl0010_Sheath" object (FUN_00bbd320)
    unsigned int &handle1198()       { return *(unsigned int *)((char *)this + 0x1198); } // +0x1198 object handle
    unsigned int &handle119C()       { return *(unsigned int *)((char *)this + 0x119C); } // +0x119C object handle
    int          &field11A0()        { return *(int *)((char *)this + 0x11A0); }          // +0x11A0 FUN_00c4d9a0 / FUN_00c26000 result (FUN_00b85d20)
    int          &field11A4()        { return *(int *)((char *)this + 0x11A4); }          // +0x11A4 argument of FUN_00b794f0, cleared by FUN_00b85d20
    unsigned int &handle11A8()       { return *(unsigned int *)((char *)this + 0x11A8); } // +0x11A8 object handle
    unsigned int &handle11AC()       { return *(unsigned int *)((char *)this + 0x11AC); } // +0x11AC object handle (FUN_00b7e760)
    void         *target11B0()       { return (void *)((char *)this + 0x11B0); }          // +0x11B0 embedded target slot (FUN_00c14f90 reset / FUN_008a4f80 copy; FUN_00b85ae0)
    void *       target1220()         { return (void *)((char *)this + 0x1220); }  // +0x1220 embedded target slot used instead of target11B0 when field266C != 0 (FUN_00b88a30)
    int          &field1290()        { return *(int *)((char *)this + 0x1290); }          // +0x1290 fallback returned by FUN_00b7b180
    float        &timer1294()        { return *(float *)((char *)this + 0x1294); }        // +0x1294 30.0f when field1290 is set
    int &field1298()               { return *(int *)((char *)this + 0x1298); }  // +0x1298 0 at startup (with timer1294 / field1290)
    int          &obj129C()          { return *(int *)((char *)this + 0x129C); }          // +0x129C object (handle-like: FUN_00a81330, +0x34 tested)
    float        &timer12A0()        { return *(float *)((char *)this + 0x12A0); }        // +0x12A0 count-down of obj129C (FUN_00b85d20)
    int          &field12A4()        { return *(int *)((char *)this + 0x12A4); }          // +0x12A4 set to 1 by FUN_00b7eba0
    int          &obj12A8()          { return *(int *)((char *)this + 0x12A8); }          // +0x12A8 object found by FUN_00c4e710 (see FUN_00b7b380)
    float        &timer12AC()        { return *(float *)((char *)this + 0x12AC); }        // +0x12AC 480.0f when obj12A8 is set
    int          &flags12B0()        { return *(int *)((char *)this + 0x12B0); }          // +0x12B0 bit 0: timer12AC frozen
    int          &obj12B4()          { return *(int *)((char *)this + 0x12B4); }          // +0x12B4 target slot object (same layout as obj129C)
    float        &timer12B8()        { return *(float *)((char *)this + 0x12B8); }        // +0x12B8 count-down of obj12B4
    int          &flags12BC()        { return *(int *)((char *)this + 0x12BC); }          // +0x12BC bit 0: timer12B8 frozen
    void *       esp12C0()           { return (void *)((char *)this + 0x12C0); }  // +0x12C0 embedded cEspControler (lock marker of obj12B4, vf390)
    unsigned int &handle1370()       { return *(unsigned int *)((char *)this + 0x1370); } // +0x1370 object handle
    float        &radius1380()       { return *(float *)((char *)this + 0x1380); }        // +0x1380 radius of the target in the slot at +0x1370 (FUN_00b864a0)
    float        &field1384()         { return *(float *)((char *)this + 0x1384); }        // +0x1384 added to radius1380 in the push-out range (FUN_00b8ced0)
    unsigned int &flagsReq13E0()     { return *(unsigned int *)((char *)this + 0x13E0); } // +0x13E0 requested bits 0..2 (FUN_00b7a090)
    unsigned int &flagsOn13E4()      { return *(unsigned int *)((char *)this + 0x13E4); } // +0x13E4 active bits 0..2
    float        *flagTimers13E8()   { return (float *)((char *)this + 0x13E8); }         // +0x13E8 float[3] count-down per bit (-1.0f when released)
    int          &field13F4()        { return *(int *)((char *)this + 0x13F4); }          // +0x13F4 -1 from FUN_00b7e210
    int          &field13F8()        { return *(int *)((char *)this + 0x13F8); }  // +0x13F8 0: FUN_00b954d0 only sets it to 1
    int          &field13FC()        { return *(int *)((char *)this + 0x13FC); }          // +0x13FC FUN_00b7d090: (argument == 0)
    int          &field1400()        { return *(int *)((char *)this + 0x1400); }          // +0x1400 FUN_00b7e210: 2 when enabled, else 0
    int          &field1404()         { return *(int *)((char *)this + 0x1404); }  // +0x1404 set to 1 by FUN_00b884c0
    int          &field1408()        { return *(int *)((char *)this + 0x1408); }  // +0x1408 0x701 when the gun stance starts (FUN_00bc4f40 / FUN_00bc5200)
    int          &field140C()        { return *(int *)((char *)this + 0x140C); }  // +0x140C last field1408 given to FUN_00a8c5f0(6, ...) (FUN_00be9130)
    int          &field1410()        { return *(int *)((char *)this + 0x1410); }          // +0x1410
    float        &timer1414()        { return *(float *)((char *)this + 0x1414); }  // +0x1414 time the maskE3C button has been held in the gun stance (15.0f: action 0x7C / 0x82)
    int          &field1418()        { return *(int *)((char *)this + 0x1418); }  // +0x1418 selects the FUN_00ba4410 arguments of FUN_00bc4cd0
    float        &field141C()        { return *(float *)((char *)this + 0x141C); }  // +0x141C 0..1 fade of the handleFFC weapon parts (+0.125 / -0.2 per frame, FUN_00be9130)
    int          &field1420()        { return *(int *)((char *)this + 0x1420); }  // +0x1420 0x701 from FUN_00b949b0
    int          &motion1424()        { return *(int *)((char *)this + 0x1424); }          // +0x1424 0x701 / 0x730 / 0x50C / 0x703 by game mode (FUN_00b8aae0)
    float        &field1428()        { return *(float *)((char *)this + 0x1428); }  // +0x1428 0.0f from FUN_00b949b0
    float        *paramTable142C()   { return (float *)((char *)this + 0x142C); }         // +0x142C float table of 0x14-byte entries (5 floats) loaded by FUN_00b7ef20
    int          &hpBonus1E40()      { return *(int *)((char *)this + 0x1E40); }          // +0x1E40 max HP per upgrade: maxHp() + FUN_00c13920()->vf98() * this
    int          &bone2320()         { return *(int *)((char *)this + 0x2320); }          // +0x2320 object with matrices at +0x1B0 / +0x1C0 / +0x1D0
    float        &groundY2324()      { return *(float *)((char *)this + 0x2324); }        // +0x2324 copy of +0x54 when landing (vf31C)
    int &field2328()               { return *(int *)((char *)this + 0x2328); }  // +0x2328 500 at startup
    float *      bonePos2330()        { return (float *)((char *)this + 0x2330); }  // +0x2330 float[4] saved position of bone 0x91 (FUN_00b87f20)
    float *      bonePos2340()        { return (float *)((char *)this + 0x2340); }  // +0x2340 float[4] saved position of bone 0xD1
    float *      bonePos2350()        { return (float *)((char *)this + 0x2350); }  // +0x2350 float[4] saved position of bone 0x12
    float *      bonePos2360()        { return (float *)((char *)this + 0x2360); }  // +0x2360 float[4] saved position of bone 0x16
    int          &boneFlag2370()      { return *(int *)((char *)this + 0x2370); }  // +0x2370 apply the offset of bone 0x91 (FUN_00b87ff0)
    int          &boneFlag2374()      { return *(int *)((char *)this + 0x2374); }  // +0x2374 apply the offset of bone 0xD1
    int          &boneFlag2378()      { return *(int *)((char *)this + 0x2378); }  // +0x2378 apply the offset of bone 0x12
    int          &boneFlag237C()      { return *(int *)((char *)this + 0x237C); }  // +0x237C apply the offset of bone 0x16
    int          &field2380()        { return *(int *)((char *)this + 0x2380); }  // +0x2380 cleared by FUN_00b93700 once timer2384 has run out
    float        &timer2384()        { return *(float *)((char *)this + 0x2384); }  // +0x2384 count-down of FUN_00b93700
    int          &field2388()        { return *(int *)((char *)this + 0x2388); }  // +0x2388 cleared by FUN_00b93700 once timer238C has run out
    float        &timer238C()        { return *(float *)((char *)this + 0x238C); }  // +0x238C count-down of FUN_00b93700
    int &field2390()               { return *(int *)((char *)this + 0x2390); }  // +0x2390 0 at startup
    int &field2394()               { return *(int *)((char *)this + 0x2394); }  // +0x2394 0 at startup
    void *sub2398()                { return (void *)((char *)this + 0x2398); }  // +0x2398 embedded object set up by FUN_00a84d60(heap, this, 7) at startup
    int          &padIndex2564()     { return *(int *)((char *)this + 0x2564); }  // +0x2564 0 / 1: input block DAT_01b7b910 / DAT_01b7b940 copied to +0xCF8 (vf3C0)
    int          &request2568()       { return *(int *)((char *)this + 0x2568); }  // +0x2568 pending maskE20 action (FUN_00b86b00)
    int          &request256C()       { return *(int *)((char *)this + 0x256C); }  // +0x256C pending maskE24 action (FUN_00b86b00 / FUN_00b88a80)
    int          &field2570()         { return *(int *)((char *)this + 0x2570); }          // +0x2570 0..2; 2 while timer343C > 0 (FUN_00b8cd60)
    int          &timer2574()        { return *(int *)((char *)this + 0x2574); }  // +0x2574 frame count-down (vf3C0)
    int          &timer2578()        { return *(int *)((char *)this + 0x2578); }  // +0x2578 frame count-down; 8 when maskE28 is pressed (vf3C0)
    int          &counter257C()      { return *(int *)((char *)this + 0x257C); }  // +0x257C frames the stick has been pushed past 300 (vf3C0)
    int          &timer2580()        { return *(int *)((char *)this + 0x2580); }  // +0x2580 frame count-down; 10 when maskE30 is pressed (vf3C0)
    int          &timer2584()        { return *(int *)((char *)this + 0x2584); }  // +0x2584 frame count-down (vf3C0)
    int          &timer2588()        { return *(int *)((char *)this + 0x2588); }  // +0x2588 frame count-down (vf3C0)
    float        &yaw258C()          { return *(float *)((char *)this + 0x258C); }  // +0x258C inputYawD30 when timer2580 is started (vf3C0)
    int          &timer2590()        { return *(int *)((char *)this + 0x2590); }  // +0x2590 frame count-down; 0xF when maskE68 is pressed (vf3C0)
    int          &timer2594()        { return *(int *)((char *)this + 0x2594); }  // +0x2594 frame count-down; 0xF when maskE64 is pressed (vf3C0)
    int          &timer2598()        { return *(int *)((char *)this + 0x2598); }  // +0x2598 frame count-down (vf3C0)
    int          &field25A4()         { return *(int *)((char *)this + 0x25A4); }          // +0x25A4 cleared by vf188
    int          &field25A8()        { return *(int *)((char *)this + 0x25A8); }          // +0x25A8 non-zero: FUN_00b7c5b0 runs without the button press
    int          &timer25AC()        { return *(int *)((char *)this + 0x25AC); }  // +0x25AC frame count-down; 10 when maskE3C is pressed (vf3C0)
    int          &timer25B0()        { return *(int *)((char *)this + 0x25B0); }  // +0x25B0 frame count-down; 10 when maskE14 is pressed (vf3C0)
    int          &timer25B4()        { return *(int *)((char *)this + 0x25B4); }  // +0x25B4 frame count-down; reloaded from reload25C0 (vf3C0), blocks the maskE18 action (FUN_00b94500)
    int          &field25B8()         { return *(int *)((char *)this + 0x25B8); }          // +0x25B8 non-zero: vf3EC false
    int          &timer25BC()        { return *(int *)((char *)this + 0x25BC); }  // +0x25BC frame count-down (vf3C0)
    int          &reload25C0()       { return *(int *)((char *)this + 0x25C0); }  // +0x25C0 reload value of timer25B4 (0xF)
    int &field25C4()               { return *(int *)((char *)this + 0x25C4); }  // +0x25C4 0xF at startup (with reload25C0)
    int          *dirCounters25C8()  { return (int *)((char *)this + 0x25C8); }           // +0x25C8 int[8] per-direction frame counters (FUN_00b84e50)
    int          &spin25E8()         { return *(int *)((char *)this + 0x25E8); }          // +0x25E8 1 when more than 5 direction counters are active
    int          &timer25EC()        { return *(int *)((char *)this + 0x25EC); }          // +0x25EC
    float        &yaw25F0()          { return *(float *)((char *)this + 0x25F0); }        // +0x25F0 copy of inputYawD30
    int          &timer25F4()        { return *(int *)((char *)this + 0x25F4); }          // +0x25F4 10 when the stick flicked backwards
    int          &timer25F8()        { return *(int *)((char *)this + 0x25F8); }          // +0x25F8 10 when the stick flicked forwards
    float        &yaw25FC()          { return *(float *)((char *)this + 0x25FC); }        // +0x25FC copy of inputYawD30
    int          &field2600()        { return *(int *)((char *)this + 0x2600); }          // +0x2600
    int          &flag2604()         { return *(int *)((char *)this + 0x2604); }          // +0x2604 stick pushed past 800 last frame
    int          &timer2608()        { return *(int *)((char *)this + 0x2608); }          // +0x2608 5 when the stick was just pushed
    int          &timer2610()        { return *(int *)((char *)this + 0x2610); }          // +0x2610
    float        &yaw2614()          { return *(float *)((char *)this + 0x2614); }        // +0x2614 copy of inputYawD30
    int          &flag2618()         { return *(int *)((char *)this + 0x2618); }          // +0x2618 stick not pushed last frame
    int          &counter261C()      { return *(int *)((char *)this + 0x261C); }  // +0x261C incremented when action 4 starts (FUN_00b94500)
    int          &field2620()         { return *(int *)((char *)this + 0x2620); }  // +0x2620 cleared when an attack action starts (FUN_00b86b00)
    int &field2624()               { return *(int *)((char *)this + 0x2624); }  // +0x2624 0 at startup
    int          &field2628()         { return *(int *)((char *)this + 0x2628); }          // +0x2628 cleared by FUN_00b8a510
    int          &field262C()        { return *(int *)((char *)this + 0x262C); }  // +0x262C cleared by vf150 (kinds 0 .. 4)
    int          &obj2640()          { return *(int *)((char *)this + 0x2640); }          // +0x2640 object handle pointer (FUN_00b85d20)
    int          &field2644()        { return *(int *)((char *)this + 0x2644); }          // +0x2644
    unsigned int &flags2654()         { return *(unsigned int *)((char *)this + 0x2654); }  // +0x2654 bits 0..3 select the maskE24 actions of FUN_00b86b00
    int          &field2658()        { return *(int *)((char *)this + 0x2658); }  // +0x2658 cleared by FUN_00b93700
    int          &field265C()        { return *(int *)((char *)this + 0x265C); }  // +0x265C cleared by FUN_00b93700
    int          &field2660()        { return *(int *)((char *)this + 0x2660); }  // +0x2660 cleared by FUN_00b93700
    int          &field2664()        { return *(int *)((char *)this + 0x2664); }  // +0x2664 cleared by FUN_00b93700
    unsigned int &field2668()        { return *(unsigned int *)((char *)this + 0x2668); } // +0x2668 returned by vf1FC
    int          &field266C()        { return *(int *)((char *)this + 0x266C); }          // +0x266C copy of (fieldE0C != 0) in FUN_00b856e0
    int &field2670()               { return *(int *)((char *)this + 0x2670); }  // +0x2670 0 at startup
    float &field2674()             { return *(float *)((char *)this + 0x2674); }  // +0x2674 -1.0f at startup
    int &field2678()               { return *(int *)((char *)this + 0x2678); }  // +0x2678 0 at startup
    float &field267C()             { return *(float *)((char *)this + 0x267C); }  // +0x267C -1.0f at startup
    int &field2680()               { return *(int *)((char *)this + 0x2680); }  // +0x2680 0 at startup
    unsigned int &handle2684()        { return *(unsigned int *)((char *)this + 0x2684); } // +0x2684 object handle: target of the turn in FUN_00b8cd60
    int          &field2688()         { return *(int *)((char *)this + 0x2688); }          // +0x2688 cleared by FUN_00b8a510
    int          &field268C()         { return *(int *)((char *)this + 0x268C); }  // +0x268C non-zero: no maskE20 action (FUN_00b86b00)
    int          &field2690()        { return *(int *)((char *)this + 0x2690); }  // +0x2690 1 when action 3 follows the landing (FUN_00bc0630)
    int          &field2694()        { return *(int *)((char *)this + 0x2694); }  // +0x2694 non-zero: action 0xCF with yaw2698 + pi (FUN_00b94140)
    float        &yaw2698()          { return *(float *)((char *)this + 0x2698); }  // +0x2698 yaw turned by pi for action 0xCF (FUN_00b94140)
    int          &obj26A4()          { return *(int *)((char *)this + 0x26A4); }  // +0x26A4 object receiving the "vrWallCheck" effect (FUN_00b93330)
    int          &cast26A8()         { return *(int *)((char *)this + 0x26A8); }  // +0x26A8 result slot of the "vrWallCheck" sphere cast (FUN_0090fb00 / FUN_00907640)
    float *      vec26B0()           { return (float *)((char *)this + 0x26B0); }  // +0x26B0 float[4] 10 x the facing with y = 0: cast delta of FUN_00b93330
    float        &dist26C0()         { return *(float *)((char *)this + 0x26C0); }  // +0x26C0 horizontal distance to the "vrWallCheck" hit (0 when none)
    float        &push26C4()          { return *(float *)((char *)this + 0x26C4); }        // +0x26C4 scale of the reach and of the push-out (FUN_00b8ced0)
    float        &push26C8()          { return *(float *)((char *)this + 0x26C8); }        // +0x26C8 scale of the vertical push and of its limit (FUN_00b8ced0)
    float        &push26CC()          { return *(float *)((char *)this + 0x26CC); }        // +0x26CC lowest height difference (plus radius1380) pushed (FUN_00b8ced0)
    float        &push26D0()          { return *(float *)((char *)this + 0x26D0); }        // +0x26D0 highest height difference (minus radius1380) pushed (FUN_00b8ced0)
    int          &field26D4()        { return *(int *)((char *)this + 0x26D4); }          // +0x26D4 cleared by FUN_00b7e090
    int          &field26D8()        { return *(int *)((char *)this + 0x26D8); }          // +0x26D8 set to 1 by FUN_00b7f640 / FUN_00b7f6f0
    float        &field26DC()        { return *(float *)((char *)this + 0x26DC); }  // +0x26DC -1.0f from FUN_00b949b0
    int          &field26E0()         { return *(int *)((char *)this + 0x26E0); }  // +0x26E0 cleared by vf388
    void *       target26F0()        { return (void *)((char *)this + 0x26F0); }  // +0x26F0 embedded target slot (0x70 bytes; FUN_00c14f90 reset, FUN_008a4f80 copy, byte +8 bit 0) (FUN_00bc54c0)
    float        *rayEnd2760()        { return (float *)((char *)this + 0x2760); }         // +0x2760 float[4] end / hit point of the "Sito" ray (FUN_00b8e340)
    short &field2778()             { return *(short *)((char *)this + 0x2778); }  // +0x2778 -1 at startup
    short &field277A()             { return *(short *)((char *)this + 0x277A); }  // +0x277A -1 at startup
    short &field277C()             { return *(short *)((char *)this + 0x277C); }  // +0x277C -1 at startup
    float        &angle278C()        { return *(float *)((char *)this + 0x278C); }  // +0x278C aim angle (radians; times 30/pi as motion frame) (FUN_00bc4cd0 / FUN_00bc4f40)
    int          &field2794()         { return *(int *)((char *)this + 0x2794); }          // +0x2794 non-zero: actions 0x90..0x93 blocked (FUN_00b8eae0 / FUN_00b8ec80)
    float &field279C()             { return *(float *)((char *)this + 0x279C); }  // +0x279C param 0x195 x 60 (600.0f without the parameter table) (startup)
    float        &field27A0()        { return *(float *)((char *)this + 0x27A0); }        // +0x27A0 factor of vf3B4 when FUN_00a8c760(0x3B)
    float        &timer27A4()         { return *(float *)((char *)this + 0x27A4); }        // +0x27A4 count-down; while >= 0 the "wo1001_" meshes are hidden (FUN_00b8f340)
    int          &wingState27A8()     { return *(int *)((char *)this + 0x27A8); }          // +0x27A8 1 while the "wing" object (0x31002) exists (FUN_00b8f340)
    unsigned int &handle27AC()        { return *(unsigned int *)((char *)this + 0x27AC); } // +0x27AC object handle of the "wing" object
    float        &field27B0()        { return *(float *)((char *)this + 0x27B0); }  // +0x27B0 growth rate of field27B4, eased towards field3408 (FUN_00bdb200)
    float        &field27B4()        { return *(float *)((char *)this + 0x27B4); }  // +0x27B4 copy of field340C: length of the vecBE0 step (FUN_00bc6760)
    float &field27B8()             { return *(float *)((char *)this + 0x27B8); }  // +0x27B8 square of param 0x192 (49.0f without the parameter table) (startup)
    float        &range27BC()         { return *(float *)((char *)this + 0x27BC); }  // +0x27BC squared distance to the target below which action 0xA1 follows (FUN_00b86b00)
    int          &field27C0()         { return *(int *)((char *)this + 0x27C0); }          // +0x27C0 non-zero: move890()[1] = 0.3f (FUN_00b8d2f0 / FUN_00b8eea0)
    int          &field27C4()        { return *(int *)((char *)this + 0x27C4); }  // +0x27C4 cleared by FUN_00bc6760
    int          &field27C8()        { return *(int *)((char *)this + 0x27C8); }  // +0x27C8 cleared by FUN_00bc6760
    int          &field27CC()        { return *(int *)((char *)this + 0x27CC); }  // +0x27CC cleared by FUN_00bc5880 / FUN_00bc61c0
    unsigned int &flags27D0()        { return *(unsigned int *)((char *)this + 0x27D0); }  // +0x27D0 flags of the last vf1A4 hit (cleared by FUN_00bda970)
    int          &field27D4()        { return *(int *)((char *)this + 0x27D4); }  // +0x27D4 1 on a vf1A4 hit with flag 8
    int          &field27D8()        { return *(int *)((char *)this + 0x27D8); }  // +0x27D8 1 on a vf1A4 hit with flag 8
    unsigned int &handle27DC()       { return *(unsigned int *)((char *)this + 0x27DC); }  // +0x27DC object handle of the vf1A4 hit object (flag 8)
    int          &field27E0()         { return *(int *)((char *)this + 0x27E0); }          // +0x27E0 non-zero: action 0xC6 allows the turn of FUN_00b8cd60
    float        &field27E4()        { return *(float *)((char *)this + 0x27E4); }  // +0x27E4 0.0f from FUN_00b94ed0
    int          &field27E8()        { return *(int *)((char *)this + 0x27E8); }  // +0x27E8 1 when vf1A4 starts action 0xC1 / 0xC2 / 0xC3
    float        &angle27EC()     { return *(float *)((char *)this + 0x27EC); }  // +0x27EC yaw; vec90[1] = wrap(angle27EC + pi) when turning around (FUN_00bf39d0 / FUN_00bf54e0)
    int          &hitKind27F0()      { return *(int *)((char *)this + 0x27F0); }  // +0x27F0 kind (first word) of the last vf1A4 hit
    float        *vec2800()       { return (float *)((char *)this + 0x2800); }  // +0x2800 float[4] push direction (FUN_00bf4280 / FUN_00bf46d0; cleared by FUN_00bf4070)
    int &hitCount2814()            { return *(int *)((char *)this + 0x2814); }  // +0x2814 light hits (reaction 0) counted by vf3CC; at 10 the next hit reacts with at least 1
    int &hitCount2818()            { return *(int *)((char *)this + 0x2818); }  // +0x2818 reaction-1 hits counted by vf3CC; at 6 the next hit reacts with at least 2
    int          &field281C()        { return *(int *)((char *)this + 0x281C); }  // +0x281C cleared when the jump starts (FUN_00bbf670)
    int          &field2820()        { return *(int *)((char *)this + 0x2820); }  // +0x2820 cleared when the jump starts (FUN_00bbf670)
    int          &field2810()        { return *(int *)((char *)this + 0x2810); }  // +0x2810 cleared by FUN_00be86f0 / FUN_00be8aa0
    int          &field2824()        { return *(int *)((char *)this + 0x2824); }  // +0x2824 1 when a hit with flag 0x400000 was taken (FUN_00be9590)
    float *      vec2830()           { return (float *)((char *)this + 0x2830); }  // +0x2830 float[5] copied from that hit (+0x130 .. +0x140); target of FUN_00a8e880 (FUN_00be9be0)
    int          &counter2844()      { return *(int *)((char *)this + 0x2844); }          // +0x2844 accumulated count (FUN_00b7a7e0)
    int          &timer2848()        { return *(int *)((char *)this + 0x2848); }          // +0x2848 frames until counter2844 resets (300)
    void *       list284C()           { return (void *)((char *)this + 0x284C); }  // +0x284C embedded container (FUN_00b84230 in FUN_00b88c50)
    int          &data2850()         { return *(int *)((char *)this + 0x2850); }  // +0x2850 list284C: element array (0x120-byte records)
    int          &field2854()        { return *(int *)((char *)this + 0x2854); }  // +0x2854 list284C: ? capacity
    int          &field2858()         { return *(int *)((char *)this + 0x2858); }  // +0x2858 cleared by FUN_00b88c80
    int          &owned285C()        { return *(int *)((char *)this + 0x285C); }  // +0x285C list284C: non-zero: data2850 is freed with FUN_00dd48d0
    float        &timer2860()        { return *(float *)((char *)this + 0x2860); }  // +0x2860 count-down to the next list284C entry (FUN_00b94b00)
    float        &reload2864()       { return *(float *)((char *)this + 0x2864); }  // +0x2864 reload value of timer2860
    void *       record2870()         { return (void *)((char *)this + 0x2870); }  // +0x2870 embedded record copied by FUN_00b88d00 (FUN_0043e160)
    int          &field2970()         { return *(int *)((char *)this + 0x2970); }  // +0x2970 cleared by FUN_00b88c50 / FUN_00b88c80
    int          &field2974()         { return *(int *)((char *)this + 0x2974); }  // +0x2974 non-zero: record2870 is valid (FUN_00b88d00)
    void *       list2978()           { return (void *)((char *)this + 0x2978); }  // +0x2978 embedded container (FUN_00b842f0 in FUN_00b88d30)
    int          &data297C()         { return *(int *)((char *)this + 0x297C); }  // +0x297C list2978: element array
    int          &field2980()        { return *(int *)((char *)this + 0x2980); }  // +0x2980 list2978: ? capacity
    int          &count2984()        { return *(int *)((char *)this + 0x2984); }  // +0x2984 list2978: element count
    int          &owned2988()        { return *(int *)((char *)this + 0x2988); }  // +0x2988 list2978: non-zero: data297C is freed with FUN_00dd48d0
    void *       esp2990()            { return (void *)((char *)this + 0x2990); }  // +0x2990 embedded cEspControler? (FUN_00eaa6e0; message 0x55 of the kind-0 zones, FUN_00bc3690)
    void *       esp2A40()            { return (void *)((char *)this + 0x2A40); }  // +0x2A40 embedded cEspControler? (FUN_00eaa6e0; message 0x58 of the kind-1 zones, FUN_00bc3690)
    void *       esp2AF0()            { return (void *)((char *)this + 0x2AF0); }  // +0x2AF0 embedded cEspControler? (FUN_00eaa6e0 when field2BAC runs out, FUN_00bc3690)
    int          &field2BA0()         { return *(int *)((char *)this + 0x2BA0); }  // +0x2BA0 cleared by FUN_00b88d30
    int          &field2BA4()         { return *(int *)((char *)this + 0x2BA4); }  // +0x2BA4 cleared by FUN_00b88d30
    int          &field2BA8()         { return *(int *)((char *)this + 0x2BA8); }  // +0x2BA8 cleared by FUN_00b88d30
    float        &field2BAC()        { return *(float *)((char *)this + 0x2BAC); }        // +0x2BAC -1.0f from vf3E4
    float        &timer2BB0()        { return *(float *)((char *)this + 0x2BB0); }  // +0x2BB0 count-down (faster with input); at < 0: vf30C(1, 0), reloaded with 6.0f (FUN_00bc3690)
    int          &field2BB4()        { return *(int *)((char *)this + 0x2BB4); }          // +0x2BB4 FUN_00b7d1b0 / vf394
    int          &field2BB8()        { return *(int *)((char *)this + 0x2BB8); }  // +0x2BB8 non-zero: request2568 cleared (vf3C0)
    int          &field2BBC()        { return *(int *)((char *)this + 0x2BBC); }  // +0x2BBC cleared by vf3D0
    float        &field2BC0()        { return *(float *)((char *)this + 0x2BC0); }        // +0x2BC0 0.0f in FUN_00b7d1b0 step 0
    float        &field2BC4()        { return *(float *)((char *)this + 0x2BC4); }        // +0x2BC4 1.5f in FUN_00b7d1b0 step 0
    float        &field2BC8()        { return *(float *)((char *)this + 0x2BC8); }        // +0x2BC8 1.5f in FUN_00b7d1b0 step 0
    float        &field2BD0()        { return *(float *)((char *)this + 0x2BD0); }        // +0x2BD0 FUN_00b7d1b0
    float        &field2BD4()        { return *(float *)((char *)this + 0x2BD4); }  // +0x2BD4 yaw of the last vf3D0 hit relative to the facing (FUN_00ddba30-wrapped)
    float        &field2BD8()        { return *(float *)((char *)this + 0x2BD8); }  // +0x2BD8 >= 0: request2568 cleared (vf3C0)
    void *       hits2BDC()          { return (void *)((char *)this + 0x2BDC); }  // +0x2BDC embedded collision hit array (0x150-byte entries: data2BE0, count2BE8) filled by 0x00ABAEC0
    int          &data2BE0()         { return *(int *)((char *)this + 0x2BE0); }  // +0x2BE0 growable array: data (+4 capacity, +8 count, +0xC owned; vf44)
    int          &count2BE8()        { return *(int *)((char *)this + 0x2BE8); }  // +0x2BE8 hit count of hits2BDC (cleared before each query)
    float        &timer2BF0()     { return *(float *)((char *)this + 0x2BF0); }  // +0x2BF0 count-down (dt subtracted while >= 0, vf48)
    float        &timer2BF4()     { return *(float *)((char *)this + 0x2BF4); }  // +0x2BF4 count-down (dt subtracted while >= 0, vf48)
    float        &timer2BF8()        { return *(float *)((char *)this + 0x2BF8); }  // +0x2BF8 5.0f on a vf3D0 hit when run out; -1.0f while DAT_01bea060 bit 25
    float        &field2BFC()        { return *(float *)((char *)this + 0x2BFC); }        // +0x2BFC >= 0: FUN_00b7d1b0 keeps its motion running
    int          &field2C00()        { return *(int *)((char *)this + 0x2C00); }          // +0x2C00 1 when FUN_00b7d1b0 ends its sequence
    float        &timer2C04()        { return *(float *)((char *)this + 0x2C04); }  // +0x2C04 >= 0: collision group 3 enabled (vf3D4), counted down
    int          &flag2C08()         { return *(int *)((char *)this + 0x2C08); }  // +0x2C08 collision group 3 enabled (vf3D4)
    int          &flag2C0C()         { return *(int *)((char *)this + 0x2C0C); }  // +0x2C0C collision group 1 enabled while vf330 (vf3D0)
    float        &timer2C10()     { return *(float *)((char *)this + 0x2C10); }  // +0x2C10 count-down (dt subtracted while >= 0, vf48)
    float        &timer2C14()        { return *(float *)((char *)this + 0x2C14); }  // +0x2C14 count-down; hits are ignored while > 0 (FUN_00be9590)
    unsigned char &byte2C18()       { return *(unsigned char *)((char *)this + 0x2C18); }  // +0x2C18 1 when the hit strength byte (+0x11) is > 5 (FUN_00be9590)
    unsigned int &handle2C1C()       { return *(unsigned int *)((char *)this + 0x2C1C); }  // +0x2C1C object handle of the attacker (FUN_00be9590)
    float &field2C20()             { return *(float *)((char *)this + 0x2C20); }  // +0x2C20 0.0f at startup
    float &field2C24()             { return *(float *)((char *)this + 0x2C24); }  // +0x2C24 0.0f at startup
    int          &field2C28()         { return *(int *)((char *)this + 0x2C28); }  // +0x2C28 cleared by FUN_00b88d70
    float        &field2C2C()        { return *(float *)((char *)this + 0x2C2C); }        // +0x2C2C 45.0f from FUN_00b7d600
    unsigned char &byte2C30()        { return *(unsigned char *)((char *)this + 0x2C30); } // +0x2C30 2 from FUN_00b7d600
    int          &field2C38()        { return *(int *)((char *)this + 0x2C38); }  // +0x2C38 cleared by vf134_00BDA8A0
    float        &timer2C3C()     { return *(float *)((char *)this + 0x2C3C); }  // +0x2C3C count-down (dt subtracted while >= 0, vf48)
    int          &field2C40()        { return *(int *)((char *)this + 0x2C40); }          // +0x2C40 FUN_00b7e2d0
    int &field2C44()               { return *(int *)((char *)this + 0x2C44); }  // +0x2C44 0 at startup
    void *list2C48()               { return (void *)((char *)this + 0x2C48); }  // +0x2C48 embedded growable array (FUN_00410540(0x40, heap) at startup; data2C4C at +4)
    int          &data2C4C()         { return *(int *)((char *)this + 0x2C4C); }  // +0x2C4C growable array: data (+4 capacity, +8 count, +0xC owned; vf44)
    float        &field2C5C()         { return *(float *)((char *)this + 0x2C5C); }        // +0x2C5C 20.0f with action 4 (FUN_00b8ef50 / FUN_00b8f060)
    float        &landY2C60()         { return *(float *)((char *)this + 0x2C60); }  // +0x2C60 y of the move step when landing (vf320)
    unsigned int &flags2C70()      { return *(unsigned int *)((char *)this + 0x2C70); }  // +0x2C70 first word of limits2C70 (bit 1 set at startup)
    void *limits2C70()             { return (void *)((char *)this + 0x2C70); }  // +0x2C70 embedded limits object: FUN_00a82790(model, 7, 0), FUN_00a82840 (+-pi/2 ..) / FUN_00a82870 (+-pi ..) at startup
    unsigned int &flags2E10()      { return *(unsigned int *)((char *)this + 0x2E10); }  // +0x2E10 first word of limits2E10 (bit 5 set at startup)
    void *limits2E10()             { return (void *)((char *)this + 0x2E10); }  // +0x2E10 embedded limits object: FUN_00a82790(model, 5, 0), FUN_00a82840 (+-20 deg ..) / FUN_00a82870 (+-60 deg ..) at startup
    int          &field3184()        { return *(int *)((char *)this + 0x3184); }          // +0x3184 vf348 / FUN_00b7cda0
    float        &field3188()        { return *(float *)((char *)this + 0x3188); }  // +0x3188 180.0f from FUN_00b95270
    float &field318C()             { return *(float *)((char *)this + 0x318C); }  // +0x318C 0.0f at startup
    float &field3190()             { return *(float *)((char *)this + 0x3190); }  // +0x3190 180.0f at startup
    int          &field3194()        { return *(int *)((char *)this + 0x3194); }  // +0x3194 cleared when Ripper mode ends (FUN_00bd9590)
    float        &field3198()        { return *(float *)((char *)this + 0x3198); }  // +0x3198 damage factor when FUN_0085c0e0() == 2 (getAttackInfo)
    float &field319C()             { return *(float *)((char *)this + 0x319C); }  // +0x319C param 0x190 (1.0f without the parameter table)
    float        &field31A0()        { return *(float *)((char *)this + 0x31A0); }        // +0x31A0 0.0f when Ripper mode starts (FUN_00b85190)
    float        &field31A4()        { return *(float *)((char *)this + 0x31A4); }        // +0x31A4 20.0f when Ripper mode starts
    float        &field31A8()        { return *(float *)((char *)this + 0x31A8); }  // +0x31A8 180.0f when damage is taken (vf30C)
    float        &timer31AC()     { return *(float *)((char *)this + 0x31AC); }  // +0x31AC 2.0f reload; FUN_00b877b0(1, 1) when it runs out while field31A8 < 0 (vf48)
    void *       key31B0()           { return (void *)((char *)this + 0x31B0); }  // +0x31B0 key looked up with FUN_00c4fe60 on DAT_01c78c68 (FUN_00bd9b50)
    int &field3350()               { return *(int *)((char *)this + 0x3350); }  // +0x3350 0 at startup
    unsigned int *handles3354()       { return (unsigned int *)((char *)this + 0x3354); }  // +0x3354 unsigned int[8] object handles (FUN_00b8f230)
    float &param3374()             { return *(float *)((char *)this + 0x3374); }  // +0x3374 param 0xD6 (FUN_00b7edd0); 90.0f without the parameter table
    float &param3378()             { return *(float *)((char *)this + 0x3378); }  // +0x3378 param 0xD7 (FUN_00b7edd0); 20.0f without the parameter table
    float &param337C()             { return *(float *)((char *)this + 0x337C); }  // +0x337C param 0xD8 (FUN_00b7edd0); 0.25f without the parameter table
    float &param3380()             { return *(float *)((char *)this + 0x3380); }  // +0x3380 param 0xD9 (FUN_00b7edd0); 1.0f without the parameter table
    float &param3384()             { return *(float *)((char *)this + 0x3384); }  // +0x3384 param 0xDA (FUN_00b7edd0); 3.0f without the parameter table
    float        &field3388()        { return *(float *)((char *)this + 0x3388); }  // +0x3388 factor of the cell charge (FUN_00bda1b0)
    float &param338C()             { return *(float *)((char *)this + 0x338C); }  // +0x338C param 0xDC (FUN_00b7edd0); 0.24f without the parameter table
    float &param3390()             { return *(float *)((char *)this + 0x3390); }  // +0x3390 param 0xDD (FUN_00b7edd0); 0.25f without the parameter table
    float &param3394()             { return *(float *)((char *)this + 0x3394); }  // +0x3394 param 0xDF (FUN_00b7edd0); 100.0f without the parameter table
    float        &field3398()        { return *(float *)((char *)this + 0x3398); }  // +0x3398 copied to field383C when the cells are drained (FUN_00bc3000)
    float        &field339C()        { return *(float *)((char *)this + 0x339C); }  // +0x339C amount charged into the cells each time timer3840 runs out (FUN_00be8330)
    float        &field33A0()        { return *(float *)((char *)this + 0x33A0); }  // +0x33A0 field3440 on a vf1A4 hit (flag 0x80)
    float        &field33A4()        { return *(float *)((char *)this + 0x33A4); }  // +0x33A4 timer343C on a vf1A4 hit (flag 0x80)
    float        &field33A8()        { return *(float *)((char *)this + 0x33A8); }  // +0x33A8 field3440 on a vf1A4 hit by object 0x20040 (flag 0x80)
    float &param33A8()             { return *(float *)((char *)this + 0x33A8); }  // +0x33A8 param 0xE4 (FUN_00b7edd0)
    float        &field33AC()        { return *(float *)((char *)this + 0x33AC); }  // +0x33AC timer343C on a vf1A4 hit by object 0x20040 (flag 0x80)
    float &param33AC()             { return *(float *)((char *)this + 0x33AC); }  // +0x33AC param 0xE5 (FUN_00b7edd0)
    float        &field33B0()        { return *(float *)((char *)this + 0x33B0); }  // +0x33B0 factorA of the FUN_00b85350 slow motion (FUN_00bc8c50)
    float        &field33B4()        { return *(float *)((char *)this + 0x33B4); }  // +0x33B4 factorB of the FUN_00b85350 slow motion (FUN_00bc8c50)
    float        &field33B8()        { return *(float *)((char *)this + 0x33B8); }  // +0x33B8 level of the FUN_00b85350 slow motion for target kind 4 (FUN_00bc8c50)
    float &param33BC()             { return *(float *)((char *)this + 0x33BC); }  // +0x33BC param 0xEB (FUN_00b7edd0); 0.01f without the parameter table
    float &param33C0()             { return *(float *)((char *)this + 0x33C0); }  // +0x33C0 param 0xEC (FUN_00b7edd0); 120.0f without the parameter table
    float        &field33C4()        { return *(float *)((char *)this + 0x33C4); }  // +0x33C4 factorA / factorB of the FUN_00b85350 slow motion of vf1A4 (flag 0x40)
    float        &field33C8()        { return *(float *)((char *)this + 0x33C8); }  // +0x33C8 level of the FUN_00b85350 slow motion of vf1A4 (flag 0x40)
    float &param33CC()             { return *(float *)((char *)this + 0x33CC); }  // +0x33CC param 0xED (FUN_00b7edd0)
    float &param33D0()             { return *(float *)((char *)this + 0x33D0); }  // +0x33D0 param 0xEE (FUN_00b7edd0)
    float        &field33D4()        { return *(float *)((char *)this + 0x33D4); }  // +0x33D4 amount / capacity of the cells added by FUN_00bc2ce0
    float        &field33D8()        { return *(float *)((char *)this + 0x33D8); }  // +0x33D8 amount / capacity of the first cell (FUN_00be8060)
    float        &field33DC()        { return *(float *)((char *)this + 0x33DC); }  // +0x33DC cell charge of a vf1A4 hit of kind 0x4F
    float        &field33E0()        { return *(float *)((char *)this + 0x33E0); }  // +0x33E0 published to DAT_01dc088c (FUN_00bc2bd0)
    float        &field33E4()        { return *(float *)((char *)this + 0x33E4); }  // +0x33E4 max HP with DAT_01bea090 bit 31 (FUN_00be8060)
    float        &field33E8()        { return *(float *)((char *)this + 0x33E8); }  // +0x33E8 forward offset / 1st float of FUN_00ba62f0 (FUN_00bc5880 ..)
    float        &field33EC()        { return *(float *)((char *)this + 0x33EC); }  // +0x33EC 3rd float of FUN_00ba62f0
    float        &field33F0()        { return *(float *)((char *)this + 0x33F0); }  // +0x33F0 2nd float of FUN_00ba62f0
    float &param33F4()             { return *(float *)((char *)this + 0x33F4); }  // +0x33F4 param 0xCF (table vf34) in radians; 0.4 deg without the table
    float &param33F8()             { return *(float *)((char *)this + 0x33F8); }  // +0x33F8 param 0xCF (table vf3C) in radians; 0.4 deg without the table
    float        &field33FC()        { return *(float *)((char *)this + 0x33FC); }  // +0x33FC 2nd argument of FUN_00ba4410 (FUN_00bc4cd0 / FUN_00bc4f40)
    float &param3400()             { return *(float *)((char *)this + 0x3400); }  // +0x3400 param 0xF7 (table vf34); 0.05f without the table
    float &param3404()             { return *(float *)((char *)this + 0x3404); }  // +0x3404 param 0xF7 (table vf3C) in radians; 1 deg without the table
    float        &field3408()        { return *(float *)((char *)this + 0x3408); }  // +0x3408 target of field27B0 (FUN_00bdb200)
    float        &field340C()        { return *(float *)((char *)this + 0x340C); }  // +0x340C copied to field27B4 (FUN_00bc6760)
    float        &field3410()        { return *(float *)((char *)this + 0x3410); }  // +0x3410 factor of vf3B0 unless the first cell is full
    float        &field3414()        { return *(float *)((char *)this + 0x3414); }  // +0x3414 factor of the cell charge unless the first cell is full (FUN_00bda1b0)
    float        &field3418()        { return *(float *)((char *)this + 0x3418); }        // +0x3418 FUN_00b7e2d0: > 0 counts as active
    float        &slowTimer341C()    { return *(float *)((char *)this + 0x341C); }        // +0x341C
    float        &field3420()        { return *(float *)((char *)this + 0x3420); }        // +0x3420 1.0f when the slow timer is reset (FUN_00b7dbe0)
    float        &field3424()        { return *(float *)((char *)this + 0x3424); }        // +0x3424 1.0f (FUN_00b7dbe0)
    float        &field3428()        { return *(float *)((char *)this + 0x3428); }        // +0x3428 1.0f (FUN_00b7dbe0)
    float        &field342C()        { return *(float *)((char *)this + 0x342C); }        // +0x342C 1.0f (FUN_00b7dbe0)
    float        &field3430()        { return *(float *)((char *)this + 0x3430); }        // +0x3430 last argument of FUN_00b85350
    int          &field3434()        { return *(int *)((char *)this + 0x3434); }          // +0x3434
    int          &slowSePlaying()    { return *(int *)((char *)this + 0x3438); }          // +0x3438 non-zero: "core_se_btl_slow_out" is played on reset
    float        &timer343C()        { return *(float *)((char *)this + 0x343C); }        // +0x343C
    float        &field3440()        { return *(float *)((char *)this + 0x3440); }        // +0x3440
    int          &flag3444()         { return *(int *)((char *)this + 0x3444); }          // +0x3444 set by vf224
    float        &param3448()        { return *(float *)((char *)this + 0x3448); }        // +0x3448 vf224 first argument
    float        &param344C()        { return *(float *)((char *)this + 0x344C); }        // +0x344C vf224 second argument
    int          &field3450()        { return *(int *)((char *)this + 0x3450); }          // +0x3450 4th argument of FUN_00b85350
    float        &timer3454()        { return *(float *)((char *)this + 0x3454); }        // +0x3454
    int          &zanMode3458()      { return *(int *)((char *)this + 0x3458); }          // +0x3458 set with "core_se_btl_char_zan" (FUN_00b7aa00)
    unsigned char &byte3460()      { return *(unsigned char *)((char *)this + 0x3460); }  // +0x3460 0 at startup
    void         *esp3470()          { return (void *)((char *)this + 0x3470); }          // +0x3470 embedded cEspControler (Ripper mode, FUN_00b85190)
    void         *esp3520()          { return (void *)((char *)this + 0x3520); }          // +0x3520 embedded cEspControler
    void         *esp3730()          { return (void *)((char *)this + 0x3730); }          // +0x3730 embedded cEspControler (FUN_00b7d1b0)
    float &field37E0()             { return *(float *)((char *)this + 0x37E0); }  // +0x37E0 0.0f at startup
    float &field37E4()             { return *(float *)((char *)this + 0x37E4); }  // +0x37E4 300.0f at startup
    int          &field37E8()         { return *(int *)((char *)this + 0x37E8); }  // +0x37E8 set by FUN_00b87ee0 on a large turn
    int &field37EC()               { return *(int *)((char *)this + 0x37EC); }  // +0x37EC 0 at startup
    int          &fallStarted3808()  { return *(int *)((char *)this + 0x3808); }          // +0x3808 set to 1 by vf31C after the first gravity step
    int          &field380C()        { return *(int *)((char *)this + 0x380C); }          // +0x380C value stored with handle3810 (FUN_00b7e7d0)
    unsigned int &handle3810()       { return *(unsigned int *)((char *)this + 0x3810); } // +0x3810 object handle (FUN_00b7e7d0)
    int          &field3814()        { return *(int *)((char *)this + 0x3814); }          // +0x3814 cleared by FUN_00b7e820
    unsigned int &handle3818()       { return *(unsigned int *)((char *)this + 0x3818); } // +0x3818 object handle (FUN_00b7e820)
    void *       array381C()          { return (void *)((char *)this + 0x381C); }  // +0x381C embedded array (FUN_00b84490); entries3820 / count3828
    int          &entries3820()       { return *(int *)((char *)this + 0x3820); }  // +0x3820 0x18-byte entries (floats at +4 / +0xC; FUN_00b878b0 / FUN_00b87910)
    int          &field3824()        { return *(int *)((char *)this + 0x3824); }  // +0x3824 array381C: ? capacity
    int          &count3828()         { return *(int *)((char *)this + 0x3828); }  // +0x3828 entry count; 0 disables the HP changes of FUN_00b877b0 / FUN_00b87840
    int          &owned382C()        { return *(int *)((char *)this + 0x382C); }  // +0x382C array381C: non-zero: entries3820 is freed with FUN_00dd48d0
    float        &field3830()        { return *(float *)((char *)this + 0x3830); }  // +0x3830 amount used instead of the entries when DAT_01bea090 bit 31 is set (capacity field3834)
    float        &field3834()         { return *(float *)((char *)this + 0x3834); }  // +0x3834 tested instead of the entries when DAT_01bea090 bit 31 is set
    float        &timer3838()        { return *(float *)((char *)this + 0x3838); }        // +0x3838 300.0f when the overheat starts (FUN_00b7ccc0); 600.0f after a drain (FUN_00bc3000)
    float        &field383C()        { return *(float *)((char *)this + 0x383C); }  // +0x383C copy of field3398 (FUN_00bc3000)
    float        &timer3840()        { return *(float *)((char *)this + 0x3840); }  // +0x3840 count-down of the idle cell charge (1.0f; FUN_00be8330)
    int          &field3844()        { return *(int *)((char *)this + 0x3844); }  // +0x3844 0 / -1 by FUN_00b87910(0) (FUN_00be8330)
    float        &field384C()        { return *(float *)((char *)this + 0x384C); }        // +0x384C 0.0f when the overheat starts
    float        &field3850()        { return *(float *)((char *)this + 0x3850); }  // +0x3850 total amount of the unlocked cells (FUN_00be8060 / FUN_00be8330)
    float        &field3854()        { return *(float *)((char *)this + 0x3854); }  // +0x3854 > 0: FUN_00bc31d0 does not drain
    int          &field3858()        { return *(int *)((char *)this + 0x3858); }  // +0x3858 cleared by FUN_00b94fc0
    int &field385C()               { return *(int *)((char *)this + 0x385C); }  // +0x385C 1 when the vf3CC hit has flag 0x20000 (FUN_00416d50(0) false, field3860 == 0); cleared by each vf3CC
    int          &field3860()        { return *(int *)((char *)this + 0x3860); }          // +0x3860
    void         *esp3870()          { return (void *)((char *)this + 0x3870); }          // +0x3870 embedded cEspControler (overheat, FUN_00b7ccc0)
    int          &field3920()        { return *(int *)((char *)this + 0x3920); }  // +0x3920 -1 after the equipment objects are attached (FUN_00bbd320)
    int &field3924()               { return *(int *)((char *)this + 0x3924); }  // +0x3924 1 while FUN_00b7cc20 holds after a vf3CC hit (FUN_00b7ab80 / FUN_00da0f50 started once)
    float &field3928()             { return *(float *)((char *)this + 0x3928); }  // +0x3928 0.0f at startup
    unsigned int &field392C()        { return *(unsigned int *)((char *)this + 0x392C); } // +0x392C returned by vf270
    int &field39E0()               { return *(int *)((char *)this + 0x39E0); }  // +0x39E0 0 at startup
    float        &timer39E4()     { return *(float *)((char *)this + 0x39E4); }  // +0x39E4 count-down (dt subtracted while >= 0, vf48)
    unsigned char &byte39E8()        { return *(unsigned char *)((char *)this + 0x39E8); } // +0x39E8 2: vf1E8, 0: vf1EC
    float        &radius39EC()        { return *(float *)((char *)this + 0x39EC); }  // +0x39EC range of FUN_00b89380 (half of it)
    void         *esp39F0()          { return (void *)((char *)this + 0x39F0); }          // +0x39F0 embedded cEspControler (vf1E8 / vf1EC)
    int          &field3AA0()        { return *(int *)((char *)this + 0x3AA0); }          // +0x3AA0 FUN_00b7d600
    float        &saved3B60()        { return *(float *)((char *)this + 0x3B60); }        // +0x3B60 saved copy of controller(+0x764)+0xF4
    int          &field3B68()         { return *(int *)((char *)this + 0x3B68); }          // +0x3B68 set to 1 by FUN_00b8a370
    float        *vec3B70()          { return (float *)((char *)this + 0x3B70); }         // +0x3B70 float[4] copied in vf7C
    float        *vec3B80()          { return (float *)((char *)this + 0x3B80); }         // +0x3B80 float[4] copy of the position row (+0x40) in vf7C
    int          &ray3B90()          { return *(int *)((char *)this + 0x3B90); }  // +0x3B90 RayCastManager work handle (released by vf44)
    float        &timer3B94()        { return *(float *)((char *)this + 0x3B94); }        // +0x3B94 count-down; the wall check of FUN_00b84bf0 runs while < 0
    int          &field3B98()        { return *(int *)((char *)this + 0x3B98); }  // +0x3B98 non-zero: FUN_00bc2bd0 publishes the cells
    int          &field3B9C()        { return *(int *)((char *)this + 0x3B9C); }  // +0x3B9C non-zero: attack collisions refreshed in game modes 4 / 8 (setSeqAtk)
    int          &field3BA0()         { return *(int *)((char *)this + 0x3BA0); }          // +0x3BA0 set to 1 by FUN_00b8a370
    int          &flag3BA4()      { return *(int *)((char *)this + 0x3BA4); }  // +0x3BA4 1: the controller height is eased towards height3BB0 (vf48)
    int          &flag3BA8()      { return *(int *)((char *)this + 0x3BA8); }  // +0x3BA8 0 when vf32C(); set to 1 at the end of vf48
    float        &height3BAC()    { return *(float *)((char *)this + 0x3BAC); }  // +0x3BAC controller height (controller +0xF8) read by vf48
    float        &height3BB0()    { return *(float *)((char *)this + 0x3BB0); }  // +0x3BB0 target controller height (vf48 steps 0.05 towards it)
    float        &field3BB4()        { return *(float *)((char *)this + 0x3BB4); }  // +0x3BB4 damage factor with DAT_01bea090 bit 31 (getAttackInfo)
    int          &field3BB8()        { return *(int *)((char *)this + 0x3BB8); }  // +0x3BB8 1 when the area query FUN_00c3d9d0 reports flag 0x400000 (FUN_00b93680)
    int          &flag3BBC()         { return *(int *)((char *)this + 0x3BBC); }          // +0x3BBC
    int          &flag3BC0()      { return *(int *)((char *)this + 0x3BC0); }  // +0x3BC0 non-zero: FUN_00bf4070 uses the larger jump values; cleared there
    float        &timer3BC4()        { return *(float *)((char *)this + 0x3BC4); }        // +0x3BC4 reload value of timer3BC8
    float        &timer3BC8()        { return *(float *)((char *)this + 0x3BC8); }        // +0x3BC8 count-down used by the fall-speed damping in vf31C
    int          &field3BCC()         { return *(int *)((char *)this + 0x3BCC); }          // +0x3BCC non-zero: FUN_00b89f80 true; cleared when the qte link ends (FUN_00b8a040)
    float *      stick3BD4()         { return (float *)((char *)this + 0x3BD4); }  // +0x3BD4 float[4] copy of the sticks fieldD08..fieldD14 (vf3C0)
    float        &timer3BE4()        { return *(float *)((char *)this + 0x3BE4); }  // +0x3BE4 120.0f after a vf1A4 hit
    void *       sub3BF0()           { return (void *)((char *)this + 0x3BF0); }  // +0x3BF0 embedded object: FUN_00e25500(0.0f) when the kind 0x11 qte starts (FUN_00bfc0c0)
    int *ids3CE0()                 { return (int *)((char *)this + 0x3CE0); }  // +0x3CE0 int[3] 0xB, 0xC, 0xD given to FUN_00e35ab0 with sub3BF0 (startup)
    void *sub3CF0()                { return (void *)((char *)this + 0x3CF0); }  // +0x3CF0 embedded object like sub3BF0 (FUN_00e35ab0 / FUN_00e25400 / FUN_00e25500 at startup)
    int *ids3DE0()                 { return (int *)((char *)this + 0x3DE0); }  // +0x3DE0 int[3] 7, 8, 9 given to FUN_00e35ab0 with sub3CF0 (startup)
    int &field3DEC()               { return *(int *)((char *)this + 0x3DEC); }  // +0x3DEC 0 at startup
    int          &field3DF0()         { return *(int *)((char *)this + 0x3DF0); }  // +0x3DF0 4: FUN_00aa4520(0x35) / 7: no model call (FUN_00b896f0)
    undefined4   &field3DF4()         { return *(undefined4 *)((char *)this + 0x3DF4); }   // +0x3DF4 1st argument of FUN_00b89c20 (also qte object +0xF4)
    undefined4   &field3DF8()         { return *(undefined4 *)((char *)this + 0x3DF8); }   // +0x3DF8 2nd argument of FUN_00b89c20 (also qte object +0xF8)
    unsigned int &handle3DFC()        { return *(unsigned int *)((char *)this + 0x3DFC); }  // +0x3DFC object handle (FUN_00b896f0)
    float        &field3E00()         { return *(float *)((char *)this + 0x3E00); }  // +0x3E00 copied to field7D0+0x328 (100.0f when 0) (FUN_00b896f0)
    int          &field3E04()         { return *(int *)((char *)this + 0x3E04); }          // +0x3E04 cleared by FUN_00b89c20
    float        *vec3E08()           { return (float *)((char *)this + 0x3E08); }         // +0x3E08 float[4] zeroed by FUN_00b89c20
    int          &flag3E24()         { return *(int *)((char *)this + 0x3E24); }          // +0x3E24 set with vec3E30 by FUN_00b7dab0
    float        *vec3E30()          { return (float *)((char *)this + 0x3E30); }         // +0x3E30 float[4] (FUN_00b7dab0)
    int          &flag3E40()         { return *(int *)((char *)this + 0x3E40); }          // +0x3E40 set with vec3E50 by FUN_00b7da60
    float        *vec3E50()          { return (float *)((char *)this + 0x3E50); }         // +0x3E50 float[4] (FUN_00b7da60)
    float        *qteTarget3E60()     { return (float *)((char *)this + 0x3E60); }         // +0x3E60 float[4] pending point of FUN_00b89850 (qteSafeCheckForward), reset to (0,0,0,1)
    float        *qteTarget3E70()     { return (float *)((char *)this + 0x3E70); }         // +0x3E70 float[4] pending point of qteZangekiSafeCheckForward
    unsigned int &handle3EA0()       { return *(unsigned int *)((char *)this + 0x3EA0); }  // +0x3EA0 object handle of the vf1A4 hit object (flag 0x20000)
    float *      vec3EC0()           { return (float *)((char *)this + 0x3EC0); }  // +0x3EC0 float[4] slide ground normal ("player sliding" ray, FUN_00b8f840)
    float        *vec3ED0()          { return (float *)((char *)this + 0x3ED0); }         // +0x3ED0 float[3] (0, 1, 0) from FUN_00b7fc20
    int          &field3EE0()        { return *(int *)((char *)this + 0x3EE0); }          // +0x3EE0 1 from FUN_00b7fc20
    int          &field3EE4()        { return *(int *)((char *)this + 0x3EE4); }          // +0x3EE4 0 from FUN_00b7fc20
    unsigned int &handle3EE8()    { return *(unsigned int *)((char *)this + 0x3EE8); }  // +0x3EE8 object handle (FUN_00a8cb50(0x14) on its owner in FUN_00bebd30)
    unsigned int &handle3EEC()       { return *(unsigned int *)((char *)this + 0x3EEC); }  // +0x3EEC object handle (copy of handle3EE8, FUN_00bf6b80; its owner's position is followed by FUN_00bf6fb0)
    unsigned int &handle3EF0()       { return *(unsigned int *)((char *)this + 0x3EF0); }  // +0x3EF0 object handle (FUN_00b8fc60)
    unsigned int &handle3EF4()       { return *(unsigned int *)((char *)this + 0x3EF4); } // +0x3EF4 object handle (FUN_00b7fc20)
    int          &field3EF8()        { return *(int *)((char *)this + 0x3EF8); }  // +0x3EF8 1 from FUN_00bf6fb0 step 0
    int          &field3F00()        { return *(int *)((char *)this + 0x3F00); }  // +0x3F00 counter incremented by FUN_00bf6fb0 step 0 (limit 4 in phase 0xA15, else 2)
    int          &field3F04()        { return *(int *)((char *)this + 0x3F04); }  // +0x3F04 cleared by FUN_00b8fba0
    void *       curve3F20()         { return (void *)((char *)this + 0x3F20); }  // +0x3F20 embedded movement curve (point array; FUN_00bbfd70 / FUN_00bc4660 / FUN_00bc5c90 build it, FUN_00a581b0 samples it)
    int          &field3F80()        { return *(int *)((char *)this + 0x3F80); }          // +0x3F80 0 from FUN_00b7fc20
    unsigned int &handle3F84()       { return *(unsigned int *)((char *)this + 0x3F84); }  // +0x3F84 object handle (target of FUN_00bdba00)
    unsigned int &handle3F88()       { return *(unsigned int *)((char *)this + 0x3F88); }  // +0x3F88 object handle picked from the list DAT_01c78cb0 (FUN_00b8fe40)
    int          &count3F90()        { return *(int *)((char *)this + 0x3F90); }  // +0x3F90 selects the "pl0010_%s" motion of FUN_00bdba00, incremented each time
    int          &field3F94()        { return *(int *)((char *)this + 0x3F94); }  // +0x3F94 index of the entry picked by FUN_00b8fe40
    int          &field3F98()        { return *(int *)((char *)this + 0x3F98); }  // +0x3F98 1 from FUN_00bdba00
    int &field3F9C()               { return *(int *)((char *)this + 0x3F9C); }  // +0x3F9C non-zero: vf3CC starts action 0xEA instead of the hit reaction
    float        &field405C()         { return *(float *)((char *)this + 0x405C); }        // +0x405C > 0: FUN_00b89e20 false
    float &param4060()             { return *(float *)((char *)this + 0x4060); }  // +0x4060 param 0xFB (table vf34) (startup)
    float &param4064()             { return *(float *)((char *)this + 0x4064); }  // +0x4064 param 0xFC (table vf34) (startup)
    float &param4068()             { return *(float *)((char *)this + 0x4068); }  // +0x4068 param 0xFB (table vf3C) (startup)
    float &param406C()             { return *(float *)((char *)this + 0x406C); }  // +0x406C param 0xFC (table vf3C) (startup)
    float &param4070()             { return *(float *)((char *)this + 0x4070); }  // +0x4070 param 0xFB (table vf44) (startup)
    float &param4074()             { return *(float *)((char *)this + 0x4074); }  // +0x4074 param 0xFC (table vf44) (startup)
    float &param4078()             { return *(float *)((char *)this + 0x4078); }  // +0x4078 param 0xFD (table vf34) (startup)
    float &param407C()             { return *(float *)((char *)this + 0x407C); }  // +0x407C param 0xFE (table vf34) (startup)
    float &param4080()             { return *(float *)((char *)this + 0x4080); }  // +0x4080 param 0xFE (table vf3C) (startup)
    float &param4084()             { return *(float *)((char *)this + 0x4084); }  // +0x4084 param 0xFF (table vf34) (startup)
    float &param4088()             { return *(float *)((char *)this + 0x4088); }  // +0x4088 param 0xFF (table vf3C) (startup)
    int &param408C()               { return *(int *)((char *)this + 0x408C); }  // +0x408C param 0x100 (table vf24) (startup)
    int &param4090()               { return *(int *)((char *)this + 0x4090); }  // +0x4090 param 0x100 (table vf2C) (startup)
    float &param4094()             { return *(float *)((char *)this + 0x4094); }  // +0x4094 param 0x100 (table vf34) (startup)
    float &param4098()             { return *(float *)((char *)this + 0x4098); }  // +0x4098 param 0x100 (table vf3C) (startup)
    float &param409C()             { return *(float *)((char *)this + 0x409C); }  // +0x409C param 0x100 (table vf44) (startup)
    float        &field40A0()         { return *(float *)((char *)this + 0x40A0); }        // +0x40A0 slow factors of FUN_00b89db0
    float &param40A8()             { return *(float *)((char *)this + 0x40A8); }  // +0x40A8 param 0x104 (table vf3C) (startup)
    float &param40AC()             { return *(float *)((char *)this + 0x40AC); }  // +0x40AC param 0x104 (table vf44) (startup)
    float &param40B0()             { return *(float *)((char *)this + 0x40B0); }  // +0x40B0 param 0x104 (table vf4C) (startup)
    float &param40B4()             { return *(float *)((char *)this + 0x40B4); }  // +0x40B4 param 0x101 (table vf34) (startup)
    int          &field40B8()         { return *(int *)((char *)this + 0x40B8); }          // +0x40B8 non-zero: FUN_00b89e20 false
    int          &field40BC()        { return *(int *)((char *)this + 0x40BC); }          // +0x40BC returned by FUN_00b7e5b0
    float &field40C0()             { return *(float *)((char *)this + 0x40C0); }  // +0x40C0 60.0f at startup
    float &field40C4()             { return *(float *)((char *)this + 0x40C4); }  // +0x40C4 60.0f at startup
    int          &field40C8()        { return *(int *)((char *)this + 0x40C8); }          // +0x40C8 argument of FUN_00b7e090
    int          &field40CC()         { return *(int *)((char *)this + 0x40CC); }          // +0x40CC non-zero: vf3EC true
    int          &obj40D4()          { return *(int *)((char *)this + 0x40D4); }          // +0x40D4 object; float at +0x160 compared with field41E4
    float        *vec40E0()       { return (float *)((char *)this + 0x40E0); }  // +0x40E0 float[4] previous vec40F0 (vf50)
    float        *vec40F0()           { return (float *)((char *)this + 0x40F0); }         // +0x40F0 float[4] direction tested by FUN_00b8afd0
    float        *vec4100()       { return (float *)((char *)this + 0x4100); }  // +0x4100 float[4] previous vec4110 (vf50)
    float        *vec4110()           { return (float *)((char *)this + 0x4110); }         // +0x4110 float[4] direction tested by FUN_00b8afd0
    float        *vec4120()       { return (float *)((char *)this + 0x4120); }  // +0x4120 float[4] previous vec4130 (vf50)
    float        *vec4130()       { return (float *)((char *)this + 0x4130); }  // +0x4130 float[4] FUN_00860f40(this, 0xD) (vf50)
    float        *vec4140()       { return (float *)((char *)this + 0x4140); }  // +0x4140 float[4] previous vec4150 (vf50)
    float        *vec4150()       { return (float *)((char *)this + 0x4150); }  // +0x4150 float[4] FUN_00860f40(this, 9) (vf50)
    int          &ray4160()          { return *(int *)((char *)this + 0x4160); }  // +0x4160 RayCastManager work handle (released by vf44)
    int          &ray4164()          { return *(int *)((char *)this + 0x4164); }  // +0x4164 RayCastManager work handle (released by vf44)
    int          &ray4168()          { return *(int *)((char *)this + 0x4168); }  // +0x4168 RayCastManager work handle (released by vf44)
    int          &field416C()         { return *(int *)((char *)this + 0x416C); }          // +0x416C non-zero: no vf308 turn in FUN_00b8a370
    int &field4170()               { return *(int *)((char *)this + 0x4170); }  // +0x4170 0 at startup
    float &field4174()             { return *(float *)((char *)this + 0x4174); }  // +0x4174 0.0f at startup
    unsigned int &handle4178()       { return *(unsigned int *)((char *)this + 0x4178); } // +0x4178 object handle (FUN_00b7e3c0)
    float        &field417C()         { return *(float *)((char *)this + 0x417C); }        // +0x417C 3rd argument of vf308 (FUN_00b8a370)
    float        &field4180()         { return *(float *)((char *)this + 0x4180); }        // +0x4180 1st argument of vf308
    float        &field4184()         { return *(float *)((char *)this + 0x4184); }        // +0x4184 2nd argument of vf308
    float &field4188()             { return *(float *)((char *)this + 0x4188); }  // +0x4188 copy of field417C at startup
    float &field418C()             { return *(float *)((char *)this + 0x418C); }  // +0x418C copy of field4180 at startup
    float &field4190()             { return *(float *)((char *)this + 0x4190); }  // +0x4190 copy of field4184 at startup
    float        &field4194()        { return *(float *)((char *)this + 0x4194); }  // +0x4194 <= 0 (with FUN_00b95e80() == 5): FUN_00b8a510 (FUN_00bbf3b0)
    float &field4198()             { return *(float *)((char *)this + 0x4198); }  // +0x4198 0.0f at startup
    int          &obj41A0()          { return *(int *)((char *)this + 0x41A0); }  // +0x41A0 polymorphic object deleted by vf44 (after FUN_00d8a1d0(0x11 / 0xE, it))
    int          &field41A4()        { return *(int *)((char *)this + 0x41A4); }  // +0x41A4 given to FUN_00d8a1d0(0xE, ...) by vf44
    float &field41A8()             { return *(float *)((char *)this + 0x41A8); }  // +0x41A8 0.0f at startup
    float        *vec41B0()           { return (float *)((char *)this + 0x41B0); }         // +0x41B0 float[4] target rotation outside the dead zone; [1] = FUN_00a8ec30 (FUN_00b8af00)
    float *vec41C0()               { return (float *)((char *)this + 0x41C0); }  // +0x41C0 float[4] zeroed at startup
    float *vec41D0()               { return (float *)((char *)this + 0x41D0); }  // +0x41D0 float[3] (0, 1, 0) at startup
    int          &field41E0()        { return *(int *)((char *)this + 0x41E0); }          // +0x41E0 FUN_00b7e410 .. FUN_00b7e530
    float        &field41E4()        { return *(float *)((char *)this + 0x41E4); }        // +0x41E4 FUN_00b7e4f0 / FUN_00b7e530
    float &field41E8()             { return *(float *)((char *)this + 0x41E8); }  // +0x41E8 0.0f at startup
    int &field41EC()               { return *(int *)((char *)this + 0x41EC); }  // +0x41EC 0 at startup
    float        *vec4210()           { return (float *)((char *)this + 0x4210); }         // +0x4210 float[4] FUN_00a925a0 copy (FUN_00b8a510)
    float        *vec4230()           { return (float *)((char *)this + 0x4230); }         // +0x4230 float[4] FUN_00a925a0 copy (FUN_00b8a510)
    float &field4248()             { return *(float *)((char *)this + 0x4248); }  // +0x4248 -1.0f at startup
    int          &obj4268()           { return *(int *)((char *)this + 0x4268); }          // +0x4268 object of flags / values read by FUN_00b8b610 .. FUN_00b8b9c0
    int          &buffer5070()       { return *(int *)((char *)this + 0x5070); }  // +0x5070 heap block freed with FUN_00dd4920 (vf44)
    int          &field5074()         { return *(int *)((char *)this + 0x5074); }          // +0x5074 1: FUN_00b8a370 stops after the target rotation copy
    int &field5078()               { return *(int *)((char *)this + 0x5078); }  // +0x5078 0 at startup
    int          &field507C()         { return *(int *)((char *)this + 0x507C); }          // +0x507C non-zero: FUN_00b8b840 returns 0
    int          &field5080()         { return *(int *)((char *)this + 0x5080); }          // +0x5080 1 by FUN_00b8a620, 0 by FUN_00b8a510; vf3EC
    int          &field5084()        { return *(int *)((char *)this + 0x5084); }          // +0x5084 returned by FUN_00b7e410
    int &field5088()               { return *(int *)((char *)this + 0x5088); }  // +0x5088 0 at startup
    int &field508C()               { return *(int *)((char *)this + 0x508C); }  // +0x508C 0 at startup
    int          &obj5090()          { return *(int *)((char *)this + 0x5090); }  // +0x5090 polymorphic object deleted by vf44
    float        &rate53E0()      { return *(float *)((char *)this + 0x53E0); }  // +0x53E0 debug "ninjaRunSpeedRate" (vf48, pad bits 4 / 8 of inputD04)
    float        &rate53E4()      { return *(float *)((char *)this + 0x53E4); }  // +0x53E4 debug "wallRunSpeedRate" (vf48, pad bits 1 / 2 of inputD04)
    int          &flag53E8()         { return *(int *)((char *)this + 0x53E8); }  // +0x53E8 toggled by pad button 8 / FUN_00416d50(0x19) (vf3C0)
    int          &flag53EC()         { return *(int *)((char *)this + 0x53EC); }          // +0x53EC set by vf3F0
    unsigned int *bits53F0()         { return (unsigned int *)((char *)this + 0x53F0); }  // +0x53F0 bit array, MSB first (FUN_00b7f550; filled by FUN_00c3dac0)
};
