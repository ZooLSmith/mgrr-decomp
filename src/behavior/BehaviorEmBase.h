// REFINED
// BehaviorEmBase -- common base of the enemy behaviours (Em*): startup/update of enemy state,
// the "enemy body" link (+0xA4C handle, see FUN_00ac89d0), player tracking (+0xA84..+0xAA0)
// and the mesh/motion helpers that forward to the body when there is one.
// Refined from include/auto/classes/BehaviorEmBase.h (generated from RTTI + Ghidra).
// Fields below 0xA00 belong to BehaviorAppBase / Behavior / cObj / cModel* / cParts.
#pragma once
#include "BehaviorAppBase.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct BehaviorEmBase : public BehaviorAppBase {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 destruct(byte flags);  // 004ED920 slot 0x0  overrides cParts
    virtual undefined * vf04();  // 004ED820 slot 0x4  overrides cObj (returns &DAT_01be9c78, the BehaviorEmBase type record)
    virtual void vf1C();  // 00ACE700 slot 0x1C  overrides cObj
    virtual void vf20();  // 00ACE6C0 slot 0x20  overrides cObj
    virtual void vf30();  // 00AC4140 slot 0x30  overrides cObj
    virtual undefined4 startup();  // 00AC7C10 slot 0x40  overrides Behavior
    virtual void vf44();  // 00ACEC90 slot 0x44  overrides Behavior
    virtual void vf48();  // 00AC7E90 slot 0x48  overrides Behavior
    virtual void vf4C();  // 00ACED80 slot 0x4C  overrides Behavior
    virtual void vf50();  // 00AC4190 slot 0x50  overrides Behavior
    virtual void vf54();  // 00ACEE90 slot 0x54  overrides Behavior
    virtual void vf108();  // 004ED860 slot 0x108  overrides Behavior (ret 8: two unused stack args)
    virtual void setSeqAtk();  // 00AC8050 slot 0x128  overrides Behavior
    virtual void vf18C();  // 004ED890 slot 0x18C  overrides Behavior (the binary also returns 1/0 in EAX)
    virtual undefined4 vf190();  // 004ED8C0 slot 0x190  overrides Behavior
    virtual undefined4 vf194();  // 004ED8D0 slot 0x194  overrides Behavior
    virtual void vf1A8(int arg1, uint arg2, undefined4 target);  // 00ACF190 slot 0x1A8  overrides Behavior (target = linked body when there is one)
    virtual void vf1AC();  // 00ACF150 slot 0x1AC  overrides Behavior (ret 0x14: five stack args, 5th replaced by the linked body)
    virtual void setCutCrerateInfo(undefined4 * out, undefined4 ids, int count);  // 00ACF1D0 slot 0x1B8  overrides Behavior (out: count x int[3], ids: int[count])
    virtual void vf1C0();  // 00ACE740 slot 0x1C0  overrides Behavior (ret 8: (source, body) stack args, both BehaviorEmBody or 0)
    virtual undefined4 vf228();  // 00AC4B90 slot 0x228  overrides Behavior
    virtual undefined4 vf238();  // 004ED8E0 slot 0x238  overrides Behavior
    virtual undefined4 vf23C();  // 004ED8F0 slot 0x23C  overrides Behavior
    virtual undefined4 vf244();  // 004ED830 slot 0x244  overrides Behavior
    virtual void vf248();  // 00AC4B50 slot 0x248  overrides Behavior (ret 0xC: forwards its first stack arg to vf360)
    virtual undefined4 vf274();  // 004ED850 slot 0x274  overrides Behavior
    virtual void vf2F8();  // 00AC9900 slot 0x2F8  overrides Behavior ("forced death requested" debug print)
    virtual void vf31C();  // 00AC41B0 slot 0x31C  overrides BehaviorAppBase (vertical movement / gravity step)
    virtual undefined4 vf32C();  // 00AC4180 slot 0x32C
    virtual undefined4 vf330();  // 004ED840 slot 0x330
    virtual void vf334(Behavior *body, Behavior *source);  // 00ACEB90 slot 0x334 (ret 8) link to the enemy body; copy state from source's owner
    virtual void vf338(unsigned int unused1, unsigned int unused2, unsigned int unused3);  // 0043F8F0 slot 0x338 (ret 0xC)
    virtual void vf33C(unsigned int unused, unsigned int *desc);  // 00AC4BA0 slot 0x33C
    virtual void vf340();  // 00AC4BB0 slot 0x340
    virtual void vf344(unsigned int arg, unsigned int mode, int notify);  // 00AC8710 slot 0x344
    virtual undefined4 vf348(float limit);  // 00AC87B0 slot 0x348
    virtual void vf34C();  // 004ED900 slot 0x34C  default setWait: prints "Em%04x setWait is not set"
    virtual void vf350();  // 004ED870 slot 0x350  (jmp vf34C)
    virtual void vf354(undefined4 arg, float *vec, int extra);  // 00AD3A80 slot 0x354 (ret 0xC)
    virtual void vf358(undefined4 arg, int extra);  // 00AD3A20 slot 0x358
    virtual void vf35C(undefined4 arg, int extra);  // 00AD3B00 slot 0x35C
    virtual void vf360(int target);  // 00AC8930 slot 0x360 (ret 4)
    virtual void vf364(undefined4 motion);  // 00ACF6E0 slot 0x364
    virtual undefined4 vf368();  // 004ED880 slot 0x368
    virtual void vf36C(unsigned int arg);  // 00AC4C20 slot 0x36C

    // non-virtual members: __thiscall helpers that sit between the virtuals in the binary
    // (ECX = this, callee-cleaned stack arguments); functions.h still lists them as free functions.
    void FUN_00ac4490();  // 00AC4490 refresh player distance / yaw data (+0xA8C..+0xAA0)
    bool FUN_00ac45d0(unsigned int a1, unsigned int a2, unsigned int a3, float a4, float a5,
                      unsigned int a6, float a7, float a8, unsigned int a9);  // 00AC45D0
    void FUN_00ac4640(unsigned int soundId);  // 00AC4640
    void FUN_00ac4670(unsigned int a, unsigned int b);  // 00AC4670
    undefined4 FUN_00ac4690();  // 00AC4690
    void FUN_00ac46b0(unsigned int a, unsigned int b);  // 00AC46B0
    unsigned int FUN_00ac46d0();  // 00AC46D0 bit 31 of +0x4A8
    unsigned int FUN_00ac46e0();  // 00AC46E0 bit 30 of +0x4A8
    unsigned int FUN_00ac46f0();  // 00AC46F0 bit 29 of +0x4A8
    undefined4 FUN_00ac4700();  // 00AC4700 returns +0xBA4
    undefined4 FUN_00ac4710(int id);  // 00AC4710
    float FUN_00ac4790(unsigned int arg);  // 00AC4790
    float FUN_00ac4820(unsigned int arg);  // 00AC4820
    undefined4 FUN_00ac48f0(int partsNo);  // 00AC48F0 1 if the parts position is on screen
    void FUN_00ac4a90(int amount);  // 00AC4A90
    void FUN_00ac4bd0();  // 00AC4BD0
    undefined4 FUN_00ac8000();  // 00AC8000
    void FUN_00ac80a0(float scale, float rate);  // 00AC80A0
    unsigned char FUN_00ac8170(Behavior *other);  // 00AC8170 (ECX unused, ret 4)
    void FUN_00ac81f0(float *pos, undefined4 *outA, undefined4 *outB);  // 00AC81F0 (ECX unused, ret 0xC)
    void FUN_00ac8270(float *pos, undefined4 *outA, undefined4 *outB);  // 00AC8270 (ECX unused, ret 0xC)
    int FUN_00ac84d0(unsigned int arg);  // 00AC84D0
    int FUN_00ac8520(unsigned int arg);  // 00AC8520
    float FUN_00ac8570(unsigned int arg);  // 00AC8570
    float FUN_00ac85c0(int which, unsigned int arg);  // 00AC85C0
    int FUN_00ac8660(int which, unsigned int arg);  // 00AC8660
    void FUN_00ac8980();  // 00AC8980
    Behavior *FUN_00ac89d0();  // 00AC89D0 the linked enemy body (a BehaviorEmBody), or 0
    undefined4 FUN_00ac8a30();  // 00AC8A30
    undefined4 FUN_00ac8a50();  // 00AC8A50
    void FUN_00ac8a80(int arg);  // 00AC8A80
    void FUN_00ac8ab0();  // 00AC8AB0
    void FUN_00ac8ad0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4,
                      unsigned int a5, unsigned int a6);  // 00AC8AD0
    void FUN_00ac8b20(unsigned int arg);  // 00AC8B20
    void FUN_00ac8b50(unsigned int arg);  // 00AC8B50
    void FUN_00ac8b80(unsigned int arg);  // 00AC8B80
    undefined4 FUN_00ac8bb0(int arg);  // 00AC8BB0 (returns FUN_00a94480)
    void FUN_00ac8be0(unsigned int a, unsigned int b);  // 00AC8BE0
    int FUN_00ac8c10(unsigned int arg);  // 00AC8C10 (returns FUN_00a94380)
    int *FUN_00ac8c40(int arg);  // 00AC8C40 (returns FUN_00a943e0)
    unsigned int FUN_00ac8c70(unsigned int arg);  // 00AC8C70 (returns FUN_00a9e160)
    undefined4 FUN_00ac8ca0(int arg);  // 00AC8CA0 (returns FUN_00a98220)
    undefined4 FUN_00ac8cd0(int arg);  // 00AC8CD0 (returns FUN_00a9f890)
    void FUN_00ac8d00(unsigned int a, int b, unsigned int c);  // 00AC8D00
    undefined4 FUN_00ac8d40(unsigned int arg);  // 00AC8D40
    undefined4 FUN_00ac8d80(int index, unsigned int value);  // 00AC8D80
    undefined4 FUN_00ac8dd0(unsigned int a, unsigned int b);  // 00AC8DD0
    void FUN_00ac8e10(int value);  // 00AC8E10
    undefined4 FUN_00ac8e80();  // 00AC8E80
    void FUN_00ac8eb0(unsigned int a, unsigned int b);  // 00AC8EB0
    void FUN_00ac8f10(undefined4 *outA, undefined4 *outB);  // 00AC8F10
    float FUN_00ac8f80();  // 00AC8F80 mesh alpha (message "cModelBase::getMeshAlpha")
    void FUN_00ac8fd0(float alpha);  // 00AC8FD0 set the alpha of every mesh
    void FUN_00ac9040();  // 00AC9040 set bit 0 of every mesh's flags
    void FUN_00ac90b0();  // 00AC90B0 clear bit 0 of every mesh's flags
    void FUN_00ac9120(int mesh);  // 00AC9120
    void FUN_00ac9180(int mesh);  // 00AC9180
    void FUN_00ac9210(const char *name);  // 00AC9210 meshes whose name equals `name`
    void FUN_00ac9300(const char *name);  // 00AC9300
    void FUN_00ac9420(const char *part);  // 00AC9420 meshes whose name contains `part`
    void FUN_00ac94e0(const char *part);  // 00AC94E0
    void FUN_00ac95a0(const char *part, int set);  // 00AC95A0
    void FUN_00ac95d0();  // 00AC95D0
    void FUN_00ac9650(unsigned int unused);  // 00AC9650
    void FUN_00ac96c0(unsigned int arg, int motion);  // 00AC96C0
    void FUN_00ac9720(unsigned int setData0, int setData1);  // 00AC9720
    undefined4 FUN_00ac9790();  // 00AC9790
    unsigned char FUN_00acf0b0(int handle);  // 00ACF0B0 (ECX unused, ret 4) bit 4 of the handle target's objFlags
    unsigned int FUN_00acf0e0();  // 00ACF0E0
    void FUN_00acf110(unsigned int a, unsigned int b, float c);  // 00ACF110 FUN_00a8e680 on the body, else on this
    Behavior *FUN_00acf600(unsigned int a, unsigned int b);  // 00ACF600 creates and links the enemy body

    // fields (absolute byte offsets from the object start)
    char         *embeddedA00()        { return (char *)this + 0xA00; }                        // +0xA00 embedded object (FUN_00dd7240 in startup)
    int          &hoverPending()       { return *(int *)((char *)this + 0xA20); }             // +0xA20 re-arms hoverTimer when falling starts
    float        &hoverDuration()      { return *(float *)((char *)this + 0xA24); }           // +0xA24 value loaded into hoverTimer
    float        &hoverTimer()         { return *(float *)((char *)this + 0xA28); }           // +0xA28 while >= 0 gravity is scaled by 0.05 (startup: -1.0f)
    int          &fieldA2C()           { return *(int *)((char *)this + 0xA2C); }             // +0xA2C
    int          *idsA30()             { return (int *)((char *)this + 0xA30); }              // +0xA30 int[4], startup: -1
    int          &fieldA40()           { return *(int *)((char *)this + 0xA40); }             // +0xA40
    unsigned char *bytesA40()          { return (unsigned char *)this + 0xA40; }              // +0xA40 same storage, written bytewise by setCutCrerateInfo
    unsigned char &byteA44()           { return *(unsigned char *)((char *)this + 0xA44); }   // +0xA44
    int          &flagA48()            { return *(int *)((char *)this + 0xA48); }             // +0xA48 returned by vf274, cleared by vf340
    unsigned int &emBodyHandle()       { return *(unsigned int *)((char *)this + 0xA4C); }    // +0xA4C handle of the linked BehaviorEmBody
    int          &fieldA50()           { return *(int *)((char *)this + 0xA50); }             // +0xA50
    int          &fieldA54()           { return *(int *)((char *)this + 0xA54); }             // +0xA54
    int          &fieldA58()           { return *(int *)((char *)this + 0xA58); }             // +0xA58
    int          &groundSupportA5C()   { return *(int *)((char *)this + 0xA5C); }             // +0xA5C updateGroundSupportForParts state (1st)
    int          &groundSupportA60()   { return *(int *)((char *)this + 0xA60); }             // +0xA60 updateGroundSupportForParts state (2nd)
    unsigned int &fileA64()            { return *(unsigned int *)((char *)this + 0xA64); }    // +0xA64 copy of filePair0
    unsigned int &fileA68()            { return *(unsigned int *)((char *)this + 0xA68); }    // +0xA68 copy of filePair1
    char         *setDataA6C()         { return (char *)this + 0xA6C; }                        // +0xA6C getDataAtSet output
    char         *setDataA74()         { return (char *)this + 0xA74; }                        // +0xA74 getDataAtSet output
    int          &setDataA6CValid()    { return *(int *)((char *)this + 0xA7C); }             // +0xA7C
    int          &setDataA74Valid()    { return *(int *)((char *)this + 0xA80); }             // +0xA80
    BehaviorAppBase *&player()         { return *(BehaviorAppBase **)((char *)this + 0xA84); } // +0xA84 player behaviour (vf48)
    int          &playerEntity()       { return *(int *)((char *)this + 0xA88); }             // +0xA88 player entity from the manager at DAT_01bea100
    float        &playerDistSq()       { return *(float *)((char *)this + 0xA8C); }           // +0xA8C squared distance to the player
    float        &playerDistSqXZ()     { return *(float *)((char *)this + 0xA90); }           // +0xA90 squared horizontal distance
    float        &playerDy()           { return *(float *)((char *)this + 0xA94); }           // +0xA94 player.y - this.y
    float        &playerAbsDy()        { return *(float *)((char *)this + 0xA98); }           // +0xA98 |playerDy|
    float        &playerYawDiff()      { return *(float *)((char *)this + 0xA9C); }           // +0xA9C normalised yaw to the player
    float        &playerAbsYawDiff()   { return *(float *)((char *)this + 0xAA0); }           // +0xAA0 |playerYawDiff|
    short        &shortAB2()           { return *(short *)((char *)this + 0xAB2); }           // +0xAB2
    short        &shortAB4()           { return *(short *)((char *)this + 0xAB4); }           // +0xAB4
    char         *subAB0()             { return (char *)this + 0xAB0; }                        // +0xAB0 embedded struct (copied with FUN_0040ac60)
    int          &fieldAB8()           { return *(int *)((char *)this + 0xAB8); }             // +0xAB8 copied to (+0x588)->+0xB0 in vf30
    int          &fieldB08()           { return *(int *)((char *)this + 0xB08); }             // +0xB08 last id passed to FUN_00ac4710
    int          &soundGroupB9C()      { return *(int *)((char *)this + 0xB9C); }             // +0xB9C passed to the manager at DAT_01c78cb0
    int          &fieldBA4()           { return *(int *)((char *)this + 0xBA4); }             // +0xBA4
    char         &byteBA8()            { return *(char *)((char *)this + 0xBA8); }            // +0xBA8 passed with fieldBA4 to FUN_00957bd0
    float        &offscreenTime()      { return *(float *)((char *)this + 0xBD0); }           // +0xBD0 accumulated while off screen (vf348)
    unsigned int &hpFlags()            { return *(unsigned int *)((char *)this + 0xBD4); }    // +0xBD4 bits 2/4/8 set by FUN_00ac4a90
    int          &hpBD8()              { return *(int *)((char *)this + 0xBD8); }             // +0xBD8 reduced by FUN_00ac4a90
    int          &hpThresholdBDC()     { return *(int *)((char *)this + 0xBDC); }             // +0xBDC
    int          &hpThresholdBE0()     { return *(int *)((char *)this + 0xBE0); }             // +0xBE0
    int          &fieldBE8()           { return *(int *)((char *)this + 0xBE8); }             // +0xBE8
    char        *&objBEC()             { return *(char **)((char *)this + 0xBEC); }           // +0xBEC object (int at +0x98), released by FUN_00ac8980
    char        *&objBF0()             { return *(char **)((char *)this + 0xBF0); }           // +0xBF0 object (+0x44 set in vf48)
    float        &counterBF4()         { return *(float *)((char *)this + 0xBF4); }           // +0xBF4
    int          &flagBF8()            { return *(int *)((char *)this + 0xBF8); }             // +0xBF8
    int          &fieldBFC()           { return *(int *)((char *)this + 0xBFC); }             // +0xBFC
    int          &fieldC00()           { return *(int *)((char *)this + 0xC00); }             // +0xC00
    int          &fieldC04()           { return *(int *)((char *)this + 0xC04); }             // +0xC04
    char         *subC10()             { return (char *)this + 0xC10; }                        // +0xC10 embedded object (FUN_00a82d50 / FUN_00a88b50)
    unsigned int &flagsD44()           { return *(unsigned int *)((char *)this + 0xD44); }    // +0xD44 bit 31 checked in vf1C0
    int          &fieldD80()           { return *(int *)((char *)this + 0xD80); }             // +0xD80
    int          &flagD84()            { return *(int *)((char *)this + 0xD84); }             // +0xD84 returned by vf190, set by vf18C
    int          &fieldD88()           { return *(int *)((char *)this + 0xD88); }             // +0xD88
    float        &fieldD8C()           { return *(float *)((char *)this + 0xD8C); }           // +0xD8C
    float        &fieldD90()           { return *(float *)((char *)this + 0xD90); }           // +0xD90
    unsigned int *dataD94()            { return (unsigned int *)((char *)this + 0xD94); }     // +0xD94 passed to FUN_00c3dac0 each vf48
    int          &fieldDA8()           { return *(int *)((char *)this + 0xDA8); }             // +0xDA8 startup: -1
    short        &shortDAC()           { return *(short *)((char *)this + 0xDAC); }           // +0xDAC
    int          &fieldDB0()           { return *(int *)((char *)this + 0xDB0); }             // +0xDB0 startup: -1
    unsigned char &byteDB4()           { return *(unsigned char *)((char *)this + 0xDB4); }   // +0xDB4
};
