// src/managers/triggermanager/cCondIsFade.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsFade.h"

extern int DAT_01dbd914;  // current fade object (0 = none)

namespace cCondIsFade_p1 {

// ECX of FUN_00eb4340 (object at 0x01EDC6C0)
const int kFadeManager = 0x01EDC6C0;

}  // namespace cCondIsFade_p1

// 00C7DDD0  Trigger::cCondIsFade::vf10  size=1  [class]
void Trigger::cCondIsFade::vf10()
{
}

// 00C7DDE0  Trigger::cCondIsFade::vf14  size=25  [class]
unsigned int Trigger::cCondIsFade::vf14()
{
    using namespace cCondIsFade_p1;
    if (DAT_01dbd914 == 0) {
        return 0;
    }
    unsigned int finished = FUN_00eb4340(kFadeManager, DAT_01dbd914);
    return finished ^ 1;
}

// 00C7DE00  Trigger::cCondIsFade::vf1C  size=10  [class]
void Trigger::cCondIsFade::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
}

// 00C86B80  Trigger::cCondIsFade::vf00  size=31  [class]
Trigger::cCondIsFade *Trigger::cCondIsFade::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
