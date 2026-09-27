// src/managers/triggermanager/cCondAreaGroup.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondAreaGroup.h"

extern int *PTR_DAT_018ab998;  // trigger heap (ECX of FUN_00dd29b0)

namespace cCondAreaGroup_p1 {

// FUN_00dd29b0 (__thiscall, ECX = heap): aligned allocation (size, alignment, 0, 0); Ghidra dropped ECX
inline int heapAlloc(int *heap, int size, int alignment, int a, int b)
{
    return ((int (__thiscall *)(int *, int, int, int, int))FUN_00dd29b0)(heap, size, alignment, a, b);
}

} // namespace cCondAreaGroup_p1

// 00C798E0  Trigger::cCondAreaGroup::vf04  size=30  [class]
void Trigger::cCondAreaGroup::vf04()
{
    using namespace cCondAreaGroup_p1;
    workBuffer() = heapAlloc(PTR_DAT_018ab998, 0x100, 0x20, 0, 0);
}

// 00C79900  Trigger::cCondAreaGroup::vf08  size=15  [class]
void Trigger::cCondAreaGroup::vf08()
{
    FUN_00dd48d0(workBuffer(), 0);  // ? free
}

// 00C79910  Trigger::cCondAreaGroup::vf10  size=8  [class]
void Trigger::cCondAreaGroup::vf10()
{
    result() = 0;
}

// 00C79920  Trigger::cCondAreaGroup::vf1C  size=36  [class]
void Trigger::cCondAreaGroup::vf1C(int *record)
{
    *(int **)((char *)this + 0x4) /* cCondition+0x04: condition record */ = record;
    areaId() = *(unsigned short *)((char *)record + 8);
    param14() = record[3];
    param18() = record[4];
    param1C() = record[5];
}

// 00C79950  Trigger::cCondAreaGroup::vf18  size=4  [class]
int Trigger::cCondAreaGroup::vf18()
{
    return result();
}

// 00C84DB0  Trigger::cCondAreaGroup::vf00  size=31  [class]
Trigger::cCondAreaGroup *Trigger::cCondAreaGroup::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
