// REFINED
// BehaviorAppBase -- common base of the game-side actor behaviours (players, enemies, parts,
// gimmicks).  Refined from include/auto/classes/BehaviorAppBase.h (generated from RTTI + Ghidra).
#pragma once
#include "Behavior.h"
#include "ghidra_types.h"
#include "auto/fwd.h"
#include "cEspControler.h"              // sub-objects constructed by the derived-class constructors
#include "cEnemyCautionStateManager.h"
#include "stKogekkoCamParamBase.h"
#include <math.h>

struct BehaviorAppBase : public Behavior {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 destruct(byte flags);  // 004EC3F0 slot 0x0  overrides cParts
    virtual undefined * vf04();  // 004EC390 slot 0x4  overrides cObj
    virtual void vf30();  // 00A982F0 slot 0x30  overrides cObj
    virtual undefined4 startup();  // 00A98340 slot 0x40  overrides Behavior
    virtual void vf48();  // 00AA0C90 slot 0x48  overrides Behavior
    virtual void vf50();  // 00AA0CB0 slot 0x50  overrides Behavior
    virtual void vf64();  // 00AA4AC0 slot 0x64  overrides Behavior (jmp Behavior::vf64)
    virtual undefined4 vfDC();  // 00A8E7B0 slot 0xDC  overrides Behavior
    virtual undefined4 vfE0();  // 00A8E7D0 slot 0xE0  overrides Behavior
    virtual undefined4 vfE4();  // 00A8E7F0 slot 0xE4  overrides Behavior
    virtual undefined4 vfE8();  // 00A8E810 slot 0xE8  overrides Behavior
    virtual undefined4 vfEC();  // 00A8E820 slot 0xEC  overrides Behavior
    // slot 0xF4: the machine code takes 3 stack arguments (ret 0xC); the Behavior auto prototype has none
    virtual void vfF4(int which, unsigned int *outA, unsigned int *outB);  // 00AA0C30 slot 0xF4  overrides Behavior
    virtual void vfFC();  // 00A8E790 slot 0xFC  overrides Behavior (jmp Behavior::vfFC)
    virtual void vf100();  // 00A8E7A0 slot 0x100  overrides Behavior (jmp Behavior::vf100)
    // slot 0x114: takes 1 stack argument and tail-calls slot 0x118; the Behavior auto prototype has none
    virtual bool vf114(int arg);  // 00A8E830 slot 0x114  overrides Behavior
    // slot 0x15C: ret 8 -- two (unused) stack arguments; the Behavior auto prototype has none
    virtual void vf15C(unsigned int unused1, unsigned int unused2);  // 00A8F030 slot 0x15C  overrides Behavior
    virtual void vf19C(int msg, undefined4 arg);  // 00AA0DE0 slot 0x19C  overrides Behavior
    virtual void vf1D0(undefined4 unused);  // 00A8E850 slot 0x1D0  overrides Behavior
    virtual undefined4 vf200();  // 00A98630 slot 0x200  overrides Behavior
    // slot 0x220: takes 1 float stack argument; the Behavior auto prototype has none
    virtual void vf220(float timer);  // 00A8EED0 slot 0x220  overrides Behavior
    virtual void vf300();  // 00A8E860 slot 0x300
    virtual void vf304();  // 00A8E870 slot 0x304
    virtual void vf308(float rate, float deadZone, float maxStep, float yawOffset);  // 00A984B0 slot 0x308
    virtual void vf30C(int damage, int keepAlive);  // 00A8EE30 slot 0x30C
    virtual void vf310(int amount);  // 00A8EE70 slot 0x310
    virtual void vf314();  // 004EC3A0 slot 0x314
    virtual void vf318();  // 004EC3B0 slot 0x318
    virtual void vf31C();  // 004EC3C0 slot 0x31C
    virtual undefined4 vf320(float dt);  // 00A8EF30 slot 0x320
    virtual undefined4 vf324();  // 004EC3D0 slot 0x324
    virtual void vf328(float dt);  // 00A8EEE0 slot 0x328

    // non-virtual members
    BehaviorAppBase();  // 004EC370
    // Constructors of derived classes into which the BehaviorAppBase constructor was inlined
    // (they call Behavior::Behavior directly); the derived class is named on each definition.
    BehaviorAppBase *ctor_004ED790();  // 004ED790  BehaviorEmBase
    BehaviorAppBase *ctor_00AAB480();  // 00AAB480  PlWig
    BehaviorAppBase *ctor_00AAB520();  // 00AAB520  Pl0013
    BehaviorAppBase *ctor_00AAB650();  // 00AAB650  Pl2040
    BehaviorAppBase *ctor_00AAB8A0();  // 00AAB8A0  BehaviorTest
    BehaviorAppBase *ctor_00AABDC0();  // 00AABDC0  EmAfterImage
    BehaviorAppBase *ctor_00AAC100();  // 00AAC100  Es0305
    BehaviorAppBase *ctor_00AAC4F0();  // 00AAC4F0  Em0600Gun
    BehaviorAppBase *ctor_00AAD090();  // 00AAD090  Em0090
    BehaviorAppBase *ctor_00AAD570();  // 00AAD570  Em0312
    BehaviorAppBase *ctor_00AAE2C0();  // 00AAE2C0  BehaviorPartsModel
    BehaviorAppBase *ctor_00AAE370();  // 00AAE370  cRayLeftHand
    BehaviorAppBase *ctor_00AAE900();  // 00AAE900  PowGaObj
    BehaviorAppBase *ctor_00AAEA30();  // 00AAEA30  ExcelObj
    BehaviorAppBase *ctor_00AAEB10();  // 00AAEB10  ExcelPartsObj
    BehaviorAppBase *ctor_00AAECC0();  // 00AAECC0  MonQteObj
    BehaviorAppBase *ctor_00AAEDA0();  // 00AAEDA0  cRayBattery
    BehaviorAppBase *ctor_00AAEE90();  // 00AAEE90  cGeckoBattery
    BehaviorAppBase *ctor_00AAEFA0();  // 00AAEFA0  Em0030Wire
    BehaviorAppBase *ctor_00AAF040();  // 00AAF040  Em0060Battery
    BehaviorAppBase *ctor_00AAF110();  // 00AAF110  cEm0010Magazine
    BehaviorAppBase *ctor_00AAF350();  // 00AAF350  BehaviorCamera
    BehaviorAppBase *ctor_00AAF850();  // 00AAF850  Et002f
    BehaviorAppBase *ctor_00AB0680();  // 00AB0680  Em0091
    BehaviorAppBase *ctor_00AB0CA0();  // 00AB0CA0  Ba0041
    BehaviorAppBase *ctor_00AB0F90();  // 00AB0F90  BaContainerParts
    BehaviorAppBase *ctor_00AB19C0();  // 00AB19C0  DlcCatBehavior
    BehaviorAppBase *ctor_00AB1B60();  // 00AB1B60  KamaitatiObj
    BehaviorAppBase *ctor_00AB2390();  // 00AB2390  Emc030Wire
    BehaviorAppBase *ctor_00AB3B60();  // 00AB3B60  cRayBatteryDLC
    BehaviorAppBase *ctor_00AB3E50();  // 00AB3E50  PowGaObjDLC
    BehaviorAppBase *ctor_00AB3F20();  // 00AB3F20  ArmThrowObj
    BehaviorAppBase *ctor_00AB40F0();  // 00AB40F0  EmC010Magazine
    BehaviorAppBase *ctor_00AB4A10();  // 00AB4A10  Em8030Wire
    BehaviorAppBase *ctor_00AB5F00();  // 00AB5F00  Em8010Magazine
    BehaviorAppBase *ctor_00AB6BA0();  // 00AB6BA0  cRayArmor
    BehaviorAppBase *ctor_00AC0E90();  // 00AC0E90  cRayDamageCutArmor
    BehaviorAppBase *ctor_00AC0F40();  // 00AC0F40  Em01a0Parts
    BehaviorAppBase *ctor_00AC1070();  // 00AC1070  cRayRightHand
    void thunk_vf64();  // 00B7CDF0  (jmp BehaviorAppBase::vf64)

    // typed calls of inherited Behavior slots whose auto-generated prototype lacks the parameters
    void callVf88(float *rotation) {  // slot 0x88
        (*(void (__thiscall **)(BehaviorAppBase *, float *))(*(char **)this + 0x88))(this, rotation);
    }
    void callVf1AC(unsigned int a, int msg, unsigned int b, void *hitInfo, void *owner) {  // slot 0x1AC
        (*(void (__thiscall **)(BehaviorAppBase *, unsigned int, int, unsigned int, void *, void *))
            (*(char **)this + 0x1AC))(this, a, msg, b, hitInfo, owner);
    }

    // fields (absolute byte offsets from the object start)
    int          &hp()          { return *(int *)((char *)this + 0x870); }           // +0x870 current HP (vf30C subtracts, vf310 adds)
    int          &maxHp()       { return *(int *)((char *)this + 0x874); }           // +0x874 HP cap used by vf310
    int          &field878()    { return *(int *)((char *)this + 0x878); }           // +0x878 ?
    int          &field87C()    { return *(int *)((char *)this + 0x87C); }           // +0x87C ? (startup: 0x16)
    int          &field880()    { return *(int *)((char *)this + 0x880); }           // +0x880 ? (startup: 0x12)
    int          &flag884()     { return *(int *)((char *)this + 0x884); }           // +0x884 set by vf318, cleared by vf314
    float        *move890()     { return (float *)((char *)this + 0x890); }          // +0x890 float[4], scaled by dt*60 in vf320
    unsigned int &field8A0()    { return *(unsigned int *)((char *)this + 0x8A0); }  // +0x8A0 returned by vf324
    int          &frames8B4()   { return *(int *)((char *)this + 0x8B4); }           // +0x8B4 (anim time * 60) in vf50
    unsigned int *fill8B8()     { return (unsigned int *)((char *)this + 0x8B8); }   // +0x8B8 uint[8], startup: 0xFEFEFEFE
    float        &timer8D8()    { return *(float *)((char *)this + 0x8D8); }         // +0x8D8 count-down timer (vf220/vf328)
    float        *targetPos()   { return (float *)((char *)this + 0x8E0); }          // +0x8E0 float[4] target position
    float        *targetRot()   { return (float *)((char *)this + 0x8F0); }          // +0x8F0 float[3?] target rotation
    float        &targetYaw()   { return *(float *)((char *)this + 0x8F4); }         // +0x8F4 targetRot()[1]
    unsigned int &handle91C()   { return *(unsigned int *)((char *)this + 0x91C); }  // +0x91C handle (FUN_00a7c930 zeroes it)
    float        *matrix990()   { return (float *)((char *)this + 0x990); }          // +0x990 float[16], startup: identity
    int          &field9D0()    { return *(int *)((char *)this + 0x9D0); }           // +0x9D0 ?
    float        *vec9E0()      { return (float *)((char *)this + 0x9E0); }          // +0x9E0 float[4]
    float        &yawDelta()    { return *(float *)((char *)this + 0x9F0); }         // +0x9F0 last turn delta (vf308)
};
