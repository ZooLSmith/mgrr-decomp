// src/managers/triggermanager/cCondArea.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondArea.h"

extern undefined4 DAT_01dbd1d0;  // ? nonzero enables the flag test below
extern uint DAT_01bea060;        // ? game state flags (bits 0x8 / 0x2000400 tested)
extern int DAT_01be8e58;         // ? stamp (frame/time counter) stored on success

namespace cCondArea_p1 {

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

} // namespace cCondArea_p1

// 00C78E20  Trigger::cCondArea::vf10  size=8  [class]
void Trigger::cCondArea::vf10()
{
    hitStamp() = 0;
}

// 00C78E30  Trigger::cCondArea::vf14  size=105  [class]
int Trigger::cCondArea::vf14()
{
    using namespace cCondArea_p1;
    if (DAT_01dbd1d0 == 0 || (DAT_01bea060 & 8) != 0 || (DAT_01bea060 & 0x2000400) == 0) {
        int *manager = areaManager();
        int hit1 = areaTest24(manager, areaId(), 1, 1);
        manager = areaManager();
        int hit2 = areaTest24(manager, areaId(), 1, 2);
        if (hit1 != 0 || hit2 != 0) {
            hitStamp() = DAT_01be8e58;
            return 1;
        }
    }
    return 0;
}

// 00C78EA0  Trigger::cCondArea::vf18  size=4  [class]
int Trigger::cCondArea::vf18()
{
    return hitStamp();
}

// 00C84CD0  Trigger::cCondArea::vf00  size=31  [class]
Trigger::cCondArea *Trigger::cCondArea::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C84CF0  Trigger::cCondArea::vf1C  size=18  [class]
void Trigger::cCondArea::vf1C(int *record)
{
    *(int **)((char *)this + 0x4) /* cCondition+0x04: condition record */ = record;
    areaId() = *(unsigned short *)((char *)record + 8);
}
