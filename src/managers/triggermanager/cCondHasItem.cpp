// src/managers/triggermanager/cCondHasItem.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondHasItem.h"

namespace cCondHasItem_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

} // namespace cCondHasItem_p1

// 00C7CCE0  Trigger::cCondHasItem::vf10  size=1  [class]
void Trigger::cCondHasItem::vf10()
{
}

// 00C7CCF0  Trigger::cCondHasItem::vf14  size=13  [class]
void Trigger::cCondHasItem::vf14()
{
    // ? decompiled as void: the result of FUN_00951bf0 (player has the item) is left in EAX for the caller
    FUN_00951bf0(itemId());
}

// 00C7CD00  Trigger::cCondHasItem::vf1C  size=16  [class]
void Trigger::cCondHasItem::vf1C(int *record)
{
    using namespace cCondHasItem_p1;

    conditionRecord(this) = record;
    itemId() = record[2];
}

// 00C865C0  Trigger::cCondHasItem::vf00  size=31  [class]
Trigger::cCondHasItem *Trigger::cCondHasItem::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
