// src/managers/triggermanager/cCondGenericFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondGenericFlag.h"

extern unsigned char DAT_01d64328[];  // generic flag holder (ECX of FUN_00c207d0)

namespace cCondGenericFlag_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// FUN_00c207d0 (__thiscall, ECX = DAT_01d64328): state of generic flag `flagNo`
inline unsigned int genericFlag(int flagNo) { return ((unsigned int (__thiscall *)(void *, int))(void *)FUN_00c207d0)(DAT_01d64328, flagNo); }

} // namespace cCondGenericFlag_p1

// 00C7DF00  Trigger::cCondGenericFlag::vf14  size=48  [class]
unsigned int Trigger::cCondGenericFlag::vf14()
{
    using namespace cCondGenericFlag_p1;

    int flag = flagNo();
    if (0 < flag && flag < 0x21) {
        if (conditionRecord(this)[1] == 0x73) {   // condition type 0x73: flag set
            return genericFlag(flag);
        }
        int state = (int)genericFlag(flag);
        return (unsigned int)(state == 0);
    }
    return 0;
}

// 00C7DF30  Trigger::cCondGenericFlag::vf1C  size=19  [class]
void Trigger::cCondGenericFlag::vf1C(int *record)
{
    using namespace cCondGenericFlag_p1;

    conditionRecord(this) = record;
    recordCopy() = record;
    flagNo() = record[2];
}

// 00C86C30  Trigger::cCondGenericFlag::vf00  size=31  [class]
Trigger::cCondGenericFlag *Trigger::cCondGenericFlag::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
