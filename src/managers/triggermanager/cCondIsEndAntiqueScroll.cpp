// src/managers/triggermanager/cCondIsEndAntiqueScroll.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsEndAntiqueScroll.h"

namespace cCondIsEndAntiqueScroll_p1 {

// ECX of FUN_00a55810 (object at 0x01BE9980)
int *const kAntiqueScrollObject = (int *)0x01BE9980;

}  // namespace cCondIsEndAntiqueScroll_p1

// 00C7D710  Trigger::cCondIsEndAntiqueScroll::vf10  size=1  [class]
void Trigger::cCondIsEndAntiqueScroll::vf10()
{
}

// 00C7D720  Trigger::cCondIsEndAntiqueScroll::vf14  size=20  [class]
bool Trigger::cCondIsEndAntiqueScroll::vf14()
{
    using namespace cCondIsEndAntiqueScroll_p1;
    bool ended = FUN_00a55810(kAntiqueScrollObject);
    return ended != false;
}

// 00C7D740  Trigger::cCondIsEndAntiqueScroll::vf1C  size=10  [class]
void Trigger::cCondIsEndAntiqueScroll::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
}

// 00C86A10  Trigger::cCondIsEndAntiqueScroll::vf00  size=31  [class]
Trigger::cCondIsEndAntiqueScroll *Trigger::cCondIsEndAntiqueScroll::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
