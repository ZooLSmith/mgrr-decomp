// src/managers/triggermanager/cCondPlayerDie.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondPlayerDie.h"

extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01be9c24[];  // type record of BehaviorAppBase

namespace cCondPlayerDie_p1 {

// address stored in the vftable slot at byte offset `offset` of `object`
inline void *vslot(const void *object, int offset)
{
    return *(void **)(*(char **)object + offset);
}

// FUN_00c13920 returns the entity manager; its vftable slot 0x28 returns an entity (0 = none).
inline int *entityFromManager(int which)
{
    int *manager = (int *)FUN_00c13920();
    return ((int *(__thiscall *)(int *, int))vslot(manager, 0x28))(manager, which);
}

// obj->vf04() returns the object's type record; FUN_00dd6d80(record, type) walks its parent chain.
// (The raw decompilation shows the pushed type as an argument of the virtual call.)
inline undefined4 isKindOf(int *object, unsigned char *type)
{
    undefined4 *record = ((undefined4 *(__thiscall *)(int *))vslot(object, 0x4))(object);
    return FUN_00dd6d80(record, (undefined4 *)type);
}
}  // namespace cCondPlayerDie_p1

// 00C7ABA0  Trigger::cCondPlayerDie::vf10  size=1  [class]
void Trigger::cCondPlayerDie::vf10()
{
}

// 00C7ABB0  Trigger::cCondPlayerDie::vf1C  size=16  [class]
void Trigger::cCondPlayerDie::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    mode() = record[2];                       // record+0x08
}

// 00C859B0  Trigger::cCondPlayerDie::vf00  size=31  [class]
Trigger::cCondPlayerDie *Trigger::cCondPlayerDie::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C859D0  Trigger::cCondPlayerDie::vf14  size=157  [class]
// Mode 1: 0 while FUN_00b7c970 of the Pl0000 behavior of entity 0 is > 0.
// Otherwise: 0 while FUN_00a8eea0 of its BehaviorAppBase is > 0 and its +0x4E4 is not 1.
// The raw decompilation dropped the ECX of FUN_00b7c970 / FUN_00a8eea0: it is the behavior when
// the is-kind-of test passed, otherwise 0 (neg/sbb/and in the machine code).
int Trigger::cCondPlayerDie::vf14()
{
    using namespace cCondPlayerDie_p1;
    int *entity = entityFromManager(0);
    if (mode() == 1) {
        int *behavior = (int *)FUN_00a7c8a0((int)entity);  // entity -> behavior
        int *player = behavior;
        if (behavior != 0) {
            undefined4 isPlayer = isKindOf(behavior, DAT_01be9db8);
            player = (int *)((0U - (unsigned int)(isPlayer != 0)) & (unsigned int)behavior);
        }
        int hp = FUN_00b7c970((int)player);
        if (0 < hp) {
            return 0;
        }
    }
    else {
        int *behavior = (int *)FUN_00a7c8a0((int)entity);  // entity -> behavior
        int *appBase;
        if (behavior == 0) {
            appBase = 0;
        }
        else {
            undefined4 isAppBase = isKindOf(behavior, DAT_01be9c24);
            appBase = (int *)((0U - (unsigned int)(isAppBase != 0)) & (unsigned int)behavior);
        }
        int value = FUN_00a8eea0((int)appBase);
        if (0 < value && *(int *)((char *)appBase + 0x4E4) != 1) {  // BehaviorAppBase+0x4E4: ?
            return 0;
        }
    }
    return 1;
}
