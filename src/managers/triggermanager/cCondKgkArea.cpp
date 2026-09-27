// src/managers/triggermanager/cCondKgkArea.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondKgkArea.h"

extern int DAT_01dbd1d0;
extern unsigned int DAT_01bea060;      // global flags
extern unsigned char DAT_01b35420[];   // type descriptor tested with FUN_00dd6d80
extern int DAT_01be8e58;               // player object

namespace cCondKgkArea_p1 {

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

// vftable slot 0x24 of the FUN_00a6e640 manager: area test (area, 1, kind)
inline int areaTest(int area, int kind)
{
    int *manager = (int *)FUN_00a6e640();
    return ((int (__thiscall *)(int *, int, int, int))vslot(manager, 0x24))(manager, area, 1, kind);
}

}  // namespace cCondKgkArea_p1

// 00C7E770  Trigger::cCondKgkArea::vf10  size=8  [class]
void Trigger::cCondKgkArea::vf10()
{
    hitPlayer() = 0;
}

// 00C7E780  Trigger::cCondKgkArea::vf18  size=4  [class]
int Trigger::cCondKgkArea::vf18()
{
    return hitPlayer();
}

// 00C86DB0  Trigger::cCondKgkArea::vf00  size=31  [class]
Trigger::cCondKgkArea *Trigger::cCondKgkArea::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C86DD0  Trigger::cCondKgkArea::vf14  size=177  [class]
// Skipped (0) while DAT_01dbd1d0 is set, flag 8 is clear and one of flags 0x2000400 is set.
// Otherwise tests area +0x10 (kinds 1 and 2) for entity 1 when it is of type DAT_01b35420 and
// FUN_00a8eea0 reports > 0; on a hit it latches the player object and returns 1.
int Trigger::cCondKgkArea::vf14()
{
    using namespace cCondKgkArea_p1;
    if (DAT_01dbd1d0 == 0 || (DAT_01bea060 & 8) != 0 || (DAT_01bea060 & 0x2000400) == 0) {
        int *entity = entityFromManager(1);
        if (entity != 0) {
            int *behavior = (int *)FUN_00a7c8a0((int)entity);  // entity -> behavior
            if (behavior != 0) {
                if (isKindOf(behavior, DAT_01b35420) != 0) {
                    int value = FUN_00a8eea0((int)behavior);
                    if (0 < value) {
                        int area = areaId();
                        int hitKind1 = areaTest(area, 1);
                        int hitKind2 = areaTest(area, 2);
                        if (hitKind1 != 0 || hitKind2 != 0) {
                            hitPlayer() = DAT_01be8e58;
                            return 1;
                        }
                    }
                }
            }
            return 0;
        }
    }
    return 0;
}

// 00C86E90  Trigger::cCondKgkArea::vf1C  size=16  [class]
void Trigger::cCondKgkArea::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    areaId() = record[2];                     // record+0x08
}
