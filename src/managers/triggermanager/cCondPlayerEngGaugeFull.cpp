// src/managers/triggermanager/cCondPlayerEngGaugeFull.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondPlayerEngGaugeFull.h"

extern unsigned char DAT_01be9db8[];  // Pl0000

namespace cCondPlayerEngGaugeFull_p1 {

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
}  // namespace cCondPlayerEngGaugeFull_p1

// 00C79C40  Trigger::cCondPlayerEngGaugeFull::vf10  size=1  [class]
void Trigger::cCondPlayerEngGaugeFull::vf10()
{
}

// 00C79C50  Trigger::cCondPlayerEngGaugeFull::vf1C  size=10  [class]
void Trigger::cCondPlayerEngGaugeFull::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
}

// 00C84E30  Trigger::cCondPlayerEngGaugeFull::vf00  size=31  [class]
Trigger::cCondPlayerEngGaugeFull *Trigger::cCondPlayerEngGaugeFull::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C84E50  Trigger::cCondPlayerEngGaugeFull::vf14  size=114  [class]
// 1 when the player's FUN_00bc2f00(1) value (stored as float) equals FUN_00bda020 (ECX = player).
int Trigger::cCondPlayerEngGaugeFull::vf14()
{
    using namespace cCondPlayerEngGaugeFull_p1;
    int *entity = entityFromManager(-1);
    if (entity == 0) {
        return 0;
    }
    int *player = (int *)FUN_00a7c8a0((int)entity);  // entity -> behavior
    if (player != 0) {
        if (isKindOf(player, DAT_01be9db8) != 0) {
            float maxEnergy = (float)FUN_00bc2f00((int)player, 1);  // ? maximum
            float10 energy = FUN_00bda020((int)player);             // ? current
            if ((float10)maxEnergy == energy) {
                return 1;
            }
        }
    }
    return 0;
}
