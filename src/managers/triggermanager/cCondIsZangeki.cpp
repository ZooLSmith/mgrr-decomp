// src/managers/triggermanager/cCondIsZangeki.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsZangeki.h"

extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned int DAT_01bea060;     // global flags

namespace cCondIsZangeki_p1 {

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

}  // namespace cCondIsZangeki_p1

// 00C7DD80  Trigger::cCondIsZangeki::vf10  size=1  [class]
void Trigger::cCondIsZangeki::vf10()
{
}

// 00C7DD90  Trigger::cCondIsZangeki::vf1C  size=10  [class]
void Trigger::cCondIsZangeki::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
}

// 00C86AF0  Trigger::cCondIsZangeki::vf00  size=31  [class]
Trigger::cCondIsZangeki *Trigger::cCondIsZangeki::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C86B10  Trigger::cCondIsZangeki::vf14  size=108  [class]
// 1 when the player (a Pl0000) reports state 1 through its vftable slot 0x32C, or global flag 0x400 is set.
int Trigger::cCondIsZangeki::vf14()
{
    using namespace cCondIsZangeki_p1;
    int *entity = entityFromManager(-1);
    if (entity == 0) {
        return 0;
    }
    int *player = (int *)FUN_00a7c8a0((int)entity);  // entity -> behavior
    if (player != 0) {
        if (isKindOf(player, DAT_01be9db8) != 0) {
            int state = ((int (__thiscall *)(int *))vslot(player, 0x32C))(player);
            if (state == 1 || (DAT_01bea060 & 0x400) != 0) {
                return 1;
            }
        }
    }
    return 0;
}
