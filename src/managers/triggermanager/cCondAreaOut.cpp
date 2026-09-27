// src/managers/triggermanager/cCondAreaOut.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondAreaOut.h"

extern int DAT_01be8e58;  // ? stamp (frame/time counter) stored on success

namespace cCondAreaOut_p1 {

// FUN_00a6e640: returns the area manager object (has a vftable)
inline int *areaManager()
{
    return (int *)FUN_00a6e640();
}

// area manager virtual +0x24 (__thiscall): area test (areaId, 1, layer)
inline int areaTest24(int *manager, unsigned int areaId, int a, int layer)
{
    typedef int (__thiscall *Fn)(int *, unsigned int, int, int);
    return ((Fn)(*(int **)manager)[0x24 / 4])(manager, areaId, a, layer);
}

} // namespace cCondAreaOut_p1

// 00C79D20  Trigger::cCondAreaOut::vf10  size=8  [class]
void Trigger::cCondAreaOut::vf10()
{
    hitStamp() = 0;
}

// 00C79D30  Trigger::cCondAreaOut::vf14  size=49  [class]
int Trigger::cCondAreaOut::vf14()
{
    using namespace cCondAreaOut_p1;
    int *manager = areaManager();
    int hit = areaTest24(manager, areaId(), 1, 1);
    if (hit == 0) {
        hitStamp() = DAT_01be8e58;
        return 1;
    }
    return 0;
}

// 00C79D70  Trigger::cCondAreaOut::vf1C  size=18  [class]
void Trigger::cCondAreaOut::vf1C(int *record)
{
    *(int **)((char *)this + 0x4) /* cCondition+0x04: condition record */ = record;
    areaId() = *(unsigned short *)((char *)record + 8);
}

// 00C79D90  Trigger::cCondAreaOut::vf18  size=4  [class]
int Trigger::cCondAreaOut::vf18()
{
    return hitStamp();
}

// 00C850A0  Trigger::cCondAreaOut::vf00  size=31  [class]
Trigger::cCondAreaOut *Trigger::cCondAreaOut::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
