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
    virtual undefined4 vf14C();  // 00B8C900 slot 0x14C  overrides Behavior
    virtual void vf150();  // 00BF5690 slot 0x150  overrides Behavior
    virtual undefined4 vf158(int kind, int unused);  // 00B7E6F0 slot 0x158  overrides Behavior
    // slot 0x160: ret 4 -- one stack argument (object whose handle is stored in handle91C)
    virtual void vf160(int obj);  // 00B7E6C0 slot 0x160  overrides Behavior
    virtual undefined4 vf17C();  // 00AC0C50 slot 0x17C  overrides Behavior
    virtual undefined4 vf184();  // 00B8CBD0 slot 0x184  overrides Behavior
    virtual void vf188();  // 00B8CC70 slot 0x188  overrides Behavior
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
    virtual void vf248();  // 00B88960 slot 0x248  overrides Behavior
    virtual undefined4 vf270();  // 00AC0D60 slot 0x270  overrides Behavior
    virtual void vf27C(undefined4 * out);  // 00AC0C60 slot 0x27C  overrides Behavior (out = float[4])
    virtual undefined4 vf280();  // 00B8DAA0 slot 0x280  overrides Behavior
    virtual undefined4 vf284();  // 00BEA700 slot 0x284  overrides Behavior
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
    static undefined4 vf134_00BDA8A0();  // 00BDA8A0
    static void em0080Qte2SafeCheck(undefined4 * param_2);  // 00BF9730

    // fields (absolute byte offsets from object start; names ending in a hex offset are not yet understood)
    void         *espA00()           { return (void *)((char *)this + 0xA00); }           // +0xA00 embedded cEspControler (FUN_00b7c8a0 / FUN_00b7c900)
    int          &fieldAB0()         { return *(int *)((char *)this + 0xAB0); }           // +0xAB0 1 (FUN_00b7c8a0) / 2 (FUN_00b7c900)
    int          &fieldB70()         { return *(int *)((char *)this + 0xB70); }           // +0xB70 cleared by FUN_00b7c8a0 / FUN_00b7c900
    int          &fieldB74()         { return *(int *)((char *)this + 0xB74); }           // +0xB74 vf108: 0 for reason 1, 1 for reason 2
    int          &fieldB78()         { return *(int *)((char *)this + 0xB78); }           // +0xB78 1 unless FUN_00a8c760(0) (FUN_00b7d8b0 / FUN_00b7e950)
    int          &fieldB80()         { return *(int *)((char *)this + 0xB80); }           // +0xB80 returned by vf230
    int          &fieldB84()         { return *(int *)((char *)this + 0xB84); }           // +0xB84 returned by vf234
    int          &fieldB94()         { return *(int *)((char *)this + 0xB94); }           // +0xB94 selects the action-mask of actions 9 / 0x16 (FUN_00b79f30)
    unsigned int &handleB98()        { return *(unsigned int *)((char *)this + 0xB98); }  // +0xB98 object handle (resolved by FUN_00a81330; owner via FUN_004b5380)
    int          &fieldB9C()         { return *(int *)((char *)this + 0xB9C); }           // +0xB9C 4 after FUN_00b7d7a0
    int          &fieldBFC()         { return *(int *)((char *)this + 0xBFC); }           // +0xBFC set by FUN_00b7e090
    int          &lineLockOn()       { return *(int *)((char *)this + 0xC00); }           // +0xC00 non-zero: position is projected onto the line below (FUN_00b7ac20)
    float        *lineOrigin()       { return (float *)((char *)this + 0xC10); }          // +0xC10 float[4] point on the constraint line
    float        *lineDir()          { return (float *)((char *)this + 0xC20); }          // +0xC20 float[4] direction of the constraint line
    unsigned int &handleC30()        { return *(unsigned int *)((char *)this + 0xC30); }  // +0xC30 object handle (target found by FUN_00b7c5b0)
    unsigned int &inputHold()        { return *(unsigned int *)((char *)this + 0xCF8); }  // +0xCF8 ? pad buttons held (tested against the action masks)
    unsigned int &inputTrigger()     { return *(unsigned int *)((char *)this + 0xCFC); }  // +0xCFC ? pad buttons pressed this frame
    // action -> pad button masks, written by FUN_00b79e20 (swapped for DAT_01b77e30 == 2 / 3)
    unsigned int &maskE08()          { return *(unsigned int *)((char *)this + 0xE08); }  // +0xE08 (action 0xC)
    int          &fieldE0C()         { return *(int *)((char *)this + 0xE0C); }           // +0xE0C 1: FUN_00b7eba0, 0: FUN_00b7ec60
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
    int          &fieldF4C()         { return *(int *)((char *)this + 0xF4C); }           // +0xF4C non-zero: the hold-repeat logic of FUN_00b7a490.. is used
    int          &fieldF58()         { return *(int *)((char *)this + 0xF58); }           // +0xF58 (same role as fieldF4C)
    int          &holdFramesF5C()    { return *(int *)((char *)this + 0xF5C); }           // +0xF5C frames the maskE50 button has been held
    int          &holdFramesF60()    { return *(int *)((char *)this + 0xF60); }           // +0xF60 frames the maskE4C button has been held
    unsigned int &handleFE4()        { return *(unsigned int *)((char *)this + 0xFE4); }  // +0xFE4 object handle
    unsigned int &handleFE8()        { return *(unsigned int *)((char *)this + 0xFE8); }  // +0xFE8 object handle (owner via FUN_0085c1b0)
    unsigned int &handleFEC()        { return *(unsigned int *)((char *)this + 0xFEC); }  // +0xFEC object handle (vf10C id 0x11013)
    unsigned int &handleFF0()        { return *(unsigned int *)((char *)this + 0xFF0); }  // +0xFF0 object handle (FUN_00b7d050 / FUN_00b7d060)
    unsigned int &handleFF4()        { return *(unsigned int *)((char *)this + 0xFF4); }  // +0xFF4 object handle (FUN_00b7d0b0)
    unsigned int &handleFF8()        { return *(unsigned int *)((char *)this + 0xFF8); }  // +0xFF8 object handle (FUN_00b7d0c0 / FUN_00b7d0e0)
    unsigned int &handleFFC()        { return *(unsigned int *)((char *)this + 0xFFC); }  // +0xFFC object handle (FUN_00b7d110 / FUN_00b7d130)
    unsigned char &step1078()        { return *(unsigned char *)((char *)this + 0x1078); } // +0x1078 sequence step of FUN_00b7d1b0 (0, 1, 4, 5)
    float        &timer107C()        { return *(float *)((char *)this + 0x107C); }        // +0x107C count-down of FUN_00b7d1b0 steps 4 / 5 (30.0f)
    int          &field109C()        { return *(int *)((char *)this + 0x109C); }          // +0x109C cleared by FUN_00b7d1b0
    short        &motion10A0()       { return *(short *)((char *)this + 0x10A0); }        // +0x10A0 motion kept on layer 2 by FUN_00b7d1b0 (0x3B / 0x40, -1 = none)
    short        &field10A8()        { return *(short *)((char *)this + 0x10A8); }        // +0x10A8 id given to FUN_00b7df20 (-1 after FUN_00b7dbe0)
    int          &obj10C4()          { return *(int *)((char *)this + 0x10C4); }          // +0x10C4 object released with FUN_00ace4a0(0x6F, this) (FUN_00b7d690)
    unsigned int &handle1198()       { return *(unsigned int *)((char *)this + 0x1198); } // +0x1198 object handle
    unsigned int &handle119C()       { return *(unsigned int *)((char *)this + 0x119C); } // +0x119C object handle
    unsigned int &handle11A8()       { return *(unsigned int *)((char *)this + 0x11A8); } // +0x11A8 object handle
    unsigned int &handle11AC()       { return *(unsigned int *)((char *)this + 0x11AC); } // +0x11AC object handle (FUN_00b7e760)
    int          &field1290()        { return *(int *)((char *)this + 0x1290); }          // +0x1290 fallback returned by FUN_00b7b180
    int          &obj129C()          { return *(int *)((char *)this + 0x129C); }          // +0x129C object (handle-like: FUN_00a81330, +0x34 tested)
    int          &field12A4()        { return *(int *)((char *)this + 0x12A4); }          // +0x12A4 set to 1 by FUN_00b7eba0
    int          &obj12A8()          { return *(int *)((char *)this + 0x12A8); }          // +0x12A8 object found by FUN_00c4e710 (see FUN_00b7b380)
    float        &timer12AC()        { return *(float *)((char *)this + 0x12AC); }        // +0x12AC 480.0f when obj12A8 is set
    unsigned int &handle1370()       { return *(unsigned int *)((char *)this + 0x1370); } // +0x1370 object handle
    unsigned int &flagsReq13E0()     { return *(unsigned int *)((char *)this + 0x13E0); } // +0x13E0 requested bits 0..2 (FUN_00b7a090)
    unsigned int &flagsOn13E4()      { return *(unsigned int *)((char *)this + 0x13E4); } // +0x13E4 active bits 0..2
    float        *flagTimers13E8()   { return (float *)((char *)this + 0x13E8); }         // +0x13E8 float[3] count-down per bit (-1.0f when released)
    int          &field13F4()        { return *(int *)((char *)this + 0x13F4); }          // +0x13F4 -1 from FUN_00b7e210
    int          &field13FC()        { return *(int *)((char *)this + 0x13FC); }          // +0x13FC FUN_00b7d090: (argument == 0)
    int          &field1400()        { return *(int *)((char *)this + 0x1400); }          // +0x1400 FUN_00b7e210: 2 when enabled, else 0
    int          &field1410()        { return *(int *)((char *)this + 0x1410); }          // +0x1410
    int          &hpBonus1E40()      { return *(int *)((char *)this + 0x1E40); }          // +0x1E40 max HP per upgrade: maxHp() + FUN_00c13920()->vf98() * this
    int          &bone2320()         { return *(int *)((char *)this + 0x2320); }          // +0x2320 object with matrices at +0x1B0 / +0x1C0 / +0x1D0
    float        &groundY2324()      { return *(float *)((char *)this + 0x2324); }        // +0x2324 copy of +0x54 when landing (vf31C)
    int          &field25A8()        { return *(int *)((char *)this + 0x25A8); }          // +0x25A8 non-zero: FUN_00b7c5b0 runs without the button press
    int          &field2600()        { return *(int *)((char *)this + 0x2600); }          // +0x2600
    int          &field2644()        { return *(int *)((char *)this + 0x2644); }          // +0x2644
    unsigned int &field2668()        { return *(unsigned int *)((char *)this + 0x2668); } // +0x2668 returned by vf1FC
    int          &field26D4()        { return *(int *)((char *)this + 0x26D4); }          // +0x26D4 cleared by FUN_00b7e090
    int          &counter2844()      { return *(int *)((char *)this + 0x2844); }          // +0x2844 accumulated count (FUN_00b7a7e0)
    int          &timer2848()        { return *(int *)((char *)this + 0x2848); }          // +0x2848 frames until counter2844 resets (300)
    float        &field2BAC()        { return *(float *)((char *)this + 0x2BAC); }        // +0x2BAC -1.0f from vf3E4
    int          &field2BB4()        { return *(int *)((char *)this + 0x2BB4); }          // +0x2BB4 FUN_00b7d1b0 / vf394
    float        &field2BC0()        { return *(float *)((char *)this + 0x2BC0); }        // +0x2BC0 0.0f in FUN_00b7d1b0 step 0
    float        &field2BC4()        { return *(float *)((char *)this + 0x2BC4); }        // +0x2BC4 1.5f in FUN_00b7d1b0 step 0
    float        &field2BC8()        { return *(float *)((char *)this + 0x2BC8); }        // +0x2BC8 1.5f in FUN_00b7d1b0 step 0
    float        &field2BD0()        { return *(float *)((char *)this + 0x2BD0); }        // +0x2BD0 FUN_00b7d1b0
    float        &field2BFC()        { return *(float *)((char *)this + 0x2BFC); }        // +0x2BFC >= 0: FUN_00b7d1b0 keeps its motion running
    int          &field2C00()        { return *(int *)((char *)this + 0x2C00); }          // +0x2C00 1 when FUN_00b7d1b0 ends its sequence
    float        &field2C2C()        { return *(float *)((char *)this + 0x2C2C); }        // +0x2C2C 45.0f from FUN_00b7d600
    unsigned char &byte2C30()        { return *(unsigned char *)((char *)this + 0x2C30); } // +0x2C30 2 from FUN_00b7d600
    int          &field2C40()        { return *(int *)((char *)this + 0x2C40); }          // +0x2C40 FUN_00b7e2d0
    int          &field3184()        { return *(int *)((char *)this + 0x3184); }          // +0x3184 vf348 / FUN_00b7cda0
    float        &field3418()        { return *(float *)((char *)this + 0x3418); }        // +0x3418 FUN_00b7e2d0: > 0 counts as active
    float        &slowTimer341C()    { return *(float *)((char *)this + 0x341C); }        // +0x341C
    float        &field3420()        { return *(float *)((char *)this + 0x3420); }        // +0x3420 1.0f when the slow timer is reset (FUN_00b7dbe0)
    float        &field3424()        { return *(float *)((char *)this + 0x3424); }        // +0x3424 1.0f (FUN_00b7dbe0)
    float        &field3428()        { return *(float *)((char *)this + 0x3428); }        // +0x3428 1.0f (FUN_00b7dbe0)
    float        &field342C()        { return *(float *)((char *)this + 0x342C); }        // +0x342C 1.0f (FUN_00b7dbe0)
    int          &field3434()        { return *(int *)((char *)this + 0x3434); }          // +0x3434
    int          &slowSePlaying()    { return *(int *)((char *)this + 0x3438); }          // +0x3438 non-zero: "core_se_btl_slow_out" is played on reset
    float        &timer343C()        { return *(float *)((char *)this + 0x343C); }        // +0x343C
    float        &field3440()        { return *(float *)((char *)this + 0x3440); }        // +0x3440
    int          &flag3444()         { return *(int *)((char *)this + 0x3444); }          // +0x3444 set by vf224
    float        &param3448()        { return *(float *)((char *)this + 0x3448); }        // +0x3448 vf224 first argument
    float        &param344C()        { return *(float *)((char *)this + 0x344C); }        // +0x344C vf224 second argument
    float        &timer3454()        { return *(float *)((char *)this + 0x3454); }        // +0x3454
    int          &zanMode3458()      { return *(int *)((char *)this + 0x3458); }          // +0x3458 set with "core_se_btl_char_zan" (FUN_00b7aa00)
    void         *esp3520()          { return (void *)((char *)this + 0x3520); }          // +0x3520 embedded cEspControler
    void         *esp3730()          { return (void *)((char *)this + 0x3730); }          // +0x3730 embedded cEspControler (FUN_00b7d1b0)
    int          &fallStarted3808()  { return *(int *)((char *)this + 0x3808); }          // +0x3808 set to 1 by vf31C after the first gravity step
    int          &field380C()        { return *(int *)((char *)this + 0x380C); }          // +0x380C value stored with handle3810 (FUN_00b7e7d0)
    unsigned int &handle3810()       { return *(unsigned int *)((char *)this + 0x3810); } // +0x3810 object handle (FUN_00b7e7d0)
    int          &field3814()        { return *(int *)((char *)this + 0x3814); }          // +0x3814 cleared by FUN_00b7e820
    unsigned int &handle3818()       { return *(unsigned int *)((char *)this + 0x3818); } // +0x3818 object handle (FUN_00b7e820)
    float        &timer3838()        { return *(float *)((char *)this + 0x3838); }        // +0x3838 300.0f when the overheat starts (FUN_00b7ccc0)
    float        &field384C()        { return *(float *)((char *)this + 0x384C); }        // +0x384C 0.0f when the overheat starts
    int          &field3860()        { return *(int *)((char *)this + 0x3860); }          // +0x3860
    void         *esp3870()          { return (void *)((char *)this + 0x3870); }          // +0x3870 embedded cEspControler (overheat, FUN_00b7ccc0)
    unsigned int &field392C()        { return *(unsigned int *)((char *)this + 0x392C); } // +0x392C returned by vf270
    unsigned char &byte39E8()        { return *(unsigned char *)((char *)this + 0x39E8); } // +0x39E8 2: vf1E8, 0: vf1EC
    void         *esp39F0()          { return (void *)((char *)this + 0x39F0); }          // +0x39F0 embedded cEspControler (vf1E8 / vf1EC)
    int          &field3AA0()        { return *(int *)((char *)this + 0x3AA0); }          // +0x3AA0 FUN_00b7d600
    float        &saved3B60()        { return *(float *)((char *)this + 0x3B60); }        // +0x3B60 saved copy of controller(+0x764)+0xF4
    float        *vec3B70()          { return (float *)((char *)this + 0x3B70); }         // +0x3B70 float[4] copied in vf7C
    float        *vec3B80()          { return (float *)((char *)this + 0x3B80); }         // +0x3B80 float[4] copy of the position row (+0x40) in vf7C
    int          &flag3BBC()         { return *(int *)((char *)this + 0x3BBC); }          // +0x3BBC
    float        &timer3BC4()        { return *(float *)((char *)this + 0x3BC4); }        // +0x3BC4 reload value of timer3BC8
    float        &timer3BC8()        { return *(float *)((char *)this + 0x3BC8); }        // +0x3BC8 count-down used by the fall-speed damping in vf31C
    int          &flag3E24()         { return *(int *)((char *)this + 0x3E24); }          // +0x3E24 set with vec3E30 by FUN_00b7dab0
    float        *vec3E30()          { return (float *)((char *)this + 0x3E30); }         // +0x3E30 float[4] (FUN_00b7dab0)
    int          &flag3E40()         { return *(int *)((char *)this + 0x3E40); }          // +0x3E40 set with vec3E50 by FUN_00b7da60
    float        *vec3E50()          { return (float *)((char *)this + 0x3E50); }         // +0x3E50 float[4] (FUN_00b7da60)
    int          &field40BC()        { return *(int *)((char *)this + 0x40BC); }          // +0x40BC returned by FUN_00b7e5b0
    int          &field40C8()        { return *(int *)((char *)this + 0x40C8); }          // +0x40C8 argument of FUN_00b7e090
    int          &obj40D4()          { return *(int *)((char *)this + 0x40D4); }          // +0x40D4 object; float at +0x160 compared with field41E4
    unsigned int &handle4178()       { return *(unsigned int *)((char *)this + 0x4178); } // +0x4178 object handle (FUN_00b7e3c0)
    int          &field41E0()        { return *(int *)((char *)this + 0x41E0); }          // +0x41E0 FUN_00b7e410 .. FUN_00b7e530
    float        &field41E4()        { return *(float *)((char *)this + 0x41E4); }        // +0x41E4 FUN_00b7e4f0 / FUN_00b7e530
    int          &field5084()        { return *(int *)((char *)this + 0x5084); }          // +0x5084 returned by FUN_00b7e410
    int          &flag53EC()         { return *(int *)((char *)this + 0x53EC); }          // +0x53EC set by vf3F0
};
