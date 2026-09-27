// src/managers/triggermanager/cCondAreaGroupOut.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondAreaGroupOut.h"

extern int *PTR_DAT_018ab998;  // trigger heap (ECX of FUN_00dd29b0)

namespace cCondAreaGroupOut_p1 {

// FUN_00dd29b0 (__thiscall, ECX = heap): aligned allocation (size, alignment, 0, 0); Ghidra dropped ECX
inline int heapAlloc(int *heap, int size, int alignment, int a, int b)
{
    return ((int (__thiscall *)(int *, int, int, int, int))FUN_00dd29b0)(heap, size, alignment, a, b);
}

} // namespace cCondAreaGroupOut_p1

// 00C79DE0  Trigger::cCondAreaGroupOut::vf04  size=30  [class]
void Trigger::cCondAreaGroupOut::vf04()
{
    using namespace cCondAreaGroupOut_p1;
    workBuffer() = heapAlloc(PTR_DAT_018ab998, 0x100, 0x20, 0, 0);
}

// 00C79E00  Trigger::cCondAreaGroupOut::vf08  size=15  [class]
void Trigger::cCondAreaGroupOut::vf08()
{
    FUN_00dd48d0(workBuffer(), 0);  // ? free
}

// 00C79E10  Trigger::cCondAreaGroupOut::vf10  size=8  [class]
void Trigger::cCondAreaGroupOut::vf10()
{
    result() = 0;
}

// 00C79E20  Trigger::cCondAreaGroupOut::vf1C  size=36  [class]
void Trigger::cCondAreaGroupOut::vf1C(int *record)
{
    *(int **)((char *)this + 0x4) /* cCondition+0x04: condition record */ = record;
    areaId() = *(unsigned short *)((char *)record + 8);
    param14() = record[3];
    param18() = record[4];
    param1C() = record[5];
}

// 00C79E50  Trigger::cCondAreaGroupOut::vf18  size=4  [class]
int Trigger::cCondAreaGroupOut::vf18()
{
    return result();
}

// 00C850C0  Trigger::cCondAreaGroupOut::vf00  size=31  [class]
Trigger::cCondAreaGroupOut *Trigger::cCondAreaGroupOut::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
