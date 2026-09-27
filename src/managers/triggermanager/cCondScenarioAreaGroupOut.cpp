// src/managers/triggermanager/cCondScenarioAreaGroupOut.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondScenarioAreaGroupOut.h"

extern int *PTR_DAT_018ab998;  // trigger heap (ECX of FUN_00dd29b0)

// 00C7E370  Trigger::cCondScenarioAreaGroupOut::vf04  size=30  [class]
void Trigger::cCondScenarioAreaGroupOut::vf04()
{
    // FUN_00dd29b0 is __thiscall with ECX = PTR_DAT_018ab998 (trigger heap); Ghidra dropped ECX
    workBuffer() = ((int (__thiscall *)(int *, int, int, int, int))FUN_00dd29b0)(PTR_DAT_018ab998, 0x100, 0x20, 0, 0);  // size, alignment
}

// 00C7E390  Trigger::cCondScenarioAreaGroupOut::vf08  size=15  [class]
void Trigger::cCondScenarioAreaGroupOut::vf08()
{
    FUN_00dd48d0(workBuffer(), 0);
}

// 00C7E3A0  Trigger::cCondScenarioAreaGroupOut::vf10  size=8  [class]
void Trigger::cCondScenarioAreaGroupOut::vf10()
{
    field20() = 0;
}

// 00C7E3B0  Trigger::cCondScenarioAreaGroupOut::vf1C  size=36  [class]
void Trigger::cCondScenarioAreaGroupOut::vf1C(int *record)
{
    this->record() = record;
    areaId() = *(unsigned short *)&record[2];  // record+0x08
    field14() = record[3];
    field18() = record[4];
    field1C() = record[5];
}

// 00C86D30  Trigger::cCondScenarioAreaGroupOut::vf00  size=31  [class]
Trigger::cCondScenarioAreaGroupOut *Trigger::cCondScenarioAreaGroupOut::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
