// src/managers/triggermanager/cCondLineInfraredHit.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondLineInfraredHit.h"

namespace cCondLineInfraredHit_p1 {

// ECX of FUN_00c2d7f0 (object at 0x018A9F48, PTR_vftable_018a9f48; the raw decompilation dropped it)
const int kInfraredManager = 0x018A9F48;

}  // namespace cCondLineInfraredHit_p1

// 00C7CF00  Trigger::cCondLineInfraredHit::vf10  size=1  [class]
void Trigger::cCondLineInfraredHit::vf10()
{
}

// 00C7CF10  Trigger::cCondLineInfraredHit::vf14  size=15  [class]
// The raw decompilation typed this void; the machine code returns FUN_00c2d7f0's EAX unchanged.
int Trigger::cCondLineInfraredHit::vf14()
{
    using namespace cCondLineInfraredHit_p1;
    return FUN_00c2d7f0(kInfraredManager, lineId());
}

// 00C7CF20  Trigger::cCondLineInfraredHit::vf1C  size=16  [class]
void Trigger::cCondLineInfraredHit::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    lineId() = record[2];                     // record+0x08
}

// 00C86660  Trigger::cCondLineInfraredHit::vf00  size=31  [class]
Trigger::cCondLineInfraredHit *Trigger::cCondLineInfraredHit::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
