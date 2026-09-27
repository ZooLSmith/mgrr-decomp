// src/managers/triggermanager/cCondHostageSaved.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondHostageSaved.h"

extern unsigned char DAT_018a0b40[];  // hostage manager (ECX of FUN_00a5f6d0)

namespace cCondHostageSaved_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// FUN_00a5f6d0 (__thiscall, ECX = DAT_018a0b40): hostage-saved test
inline void hostageSaved(int a, int b, int c) { ((void (__thiscall *)(void *, int, int, int))(void *)FUN_00a5f6d0)(DAT_018a0b40, a, b, c); }

} // namespace cCondHostageSaved_p1

// 00C7CE90  Trigger::cCondHostageSaved::vf14  size=23  [class]
void Trigger::cCondHostageSaved::vf14()
{
    using namespace cCondHostageSaved_p1;

    // ? decompiled as void: the result of FUN_00a5f6d0 is left in EAX for the caller
    hostageSaved(param10(), param14(), param18());
}

// 00C7CEB0  Trigger::cCondHostageSaved::vf1C  size=28  [class]
void Trigger::cCondHostageSaved::vf1C(int *record)
{
    using namespace cCondHostageSaved_p1;

    conditionRecord(this) = record;
    param10() = record[2];
    param14() = record[3];
    param18() = record[4];
}

// 00C86640  Trigger::cCondHostageSaved::vf00  size=31  [class]
Trigger::cCondHostageSaved *Trigger::cCondHostageSaved::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
