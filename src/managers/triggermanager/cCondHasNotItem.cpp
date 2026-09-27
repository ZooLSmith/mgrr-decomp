// src/managers/triggermanager/cCondHasNotItem.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondHasNotItem.h"

namespace cCondHasNotItem_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// FUN_00951bf0: nonzero when the player has the item
inline int hasItem(int itemId) { return ((int (*)(int))FUN_00951bf0)(itemId); }

} // namespace cCondHasNotItem_p1

// 00C7CD40  Trigger::cCondHasNotItem::vf10  size=1  [class]
void Trigger::cCondHasNotItem::vf10()
{
}

// 00C7CD50  Trigger::cCondHasNotItem::vf14  size=18  [class]
bool Trigger::cCondHasNotItem::vf14()
{
    using namespace cCondHasNotItem_p1;

    return hasItem(itemId()) == 0;
}

// 00C7CD70  Trigger::cCondHasNotItem::vf1C  size=16  [class]
void Trigger::cCondHasNotItem::vf1C(int *record)
{
    using namespace cCondHasNotItem_p1;

    conditionRecord(this) = record;
    itemId() = record[2];
}

// 00C865E0  Trigger::cCondHasNotItem::vf00  size=31  [class]
Trigger::cCondHasNotItem *Trigger::cCondHasNotItem::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
