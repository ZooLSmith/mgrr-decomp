// src/managers/triggermanager/cCondScenarioArea.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondScenarioArea.h"

extern int DAT_01dbd1d0;
extern unsigned int DAT_01bea060;  // game state flags
extern int DAT_01be8e58;           // player object

namespace cCondScenarioArea_p1 {

// address stored in the vftable slot at byte offset `offset` of `object`
inline int vslot(int *object, int offset) { return *(int *)(*object + offset); }

// area manager virtual +0x24 (__thiscall, ECX = the manager): is the player inside area `areaId`
inline int areaContains24(int *manager, unsigned short areaId, int a, int b)
{
    return ((int (__thiscall *)(int *, unsigned int, int, int))vslot(manager, 0x24))(manager, areaId, a, b);
}

}  // namespace cCondScenarioArea_p1

// 00C7E050  Trigger::cCondScenarioArea::vf10  size=8  [class]
void Trigger::cCondScenarioArea::vf10()
{
    hitObject() = 0;
}

// 00C7E060  Trigger::cCondScenarioArea::vf14  size=74  [class]
int Trigger::cCondScenarioArea::vf14()
{
    using namespace cCondScenarioArea_p1;
    if (DAT_01dbd1d0 == 0 || (DAT_01bea060 & 8) != 0 || (DAT_01bea060 & 0x2000400) == 0) {
        int *areaManager = (int *)FUN_00a6e640();
        int inside = areaContains24(areaManager, areaId(), 1, 2);  // movzx: areaId zero-extended
        if (inside != 0) {
            hitObject() = DAT_01be8e58;
            return 1;
        }
    }
    return 0;
}

// 00C86C90  Trigger::cCondScenarioArea::vf00  size=31  [class]
Trigger::cCondScenarioArea *Trigger::cCondScenarioArea::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C86CB0  Trigger::cCondScenarioArea::vf1C  size=18  [class]
void Trigger::cCondScenarioArea::vf1C(int *record)
{
    this->record() = record;
    areaId() = *(unsigned short *)&record[2];  // record+0x08
}
