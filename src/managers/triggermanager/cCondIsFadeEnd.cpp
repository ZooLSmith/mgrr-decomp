// src/managers/triggermanager/cCondIsFadeEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsFadeEnd.h"

extern int DAT_01dbd914;  // current fade object (0 = none)

namespace cCondIsFadeEnd_p1 {

// ECX of FUN_00eb4340 (object at 0x01EDC6C0)
const int kFadeManager = 0x01EDC6C0;

}  // namespace cCondIsFadeEnd_p1

// 00C7DE40  Trigger::cCondIsFadeEnd::vf10  size=1  [class]
void Trigger::cCondIsFadeEnd::vf10()
{
}

// 00C7DE50  Trigger::cCondIsFadeEnd::vf14  size=31  [class]
// The first call latches the current fade object and returns 0; later calls ask whether it finished.
int Trigger::cCondIsFadeEnd::vf14()
{
    using namespace cCondIsFadeEnd_p1;
    if (fadeObject() == 0) {
        fadeObject() = DAT_01dbd914;
        return 0;
    }
    return FUN_00eb4340(kFadeManager, fadeObject());
}

// 00C7DE70  Trigger::cCondIsFadeEnd::vf1C  size=10  [class]
void Trigger::cCondIsFadeEnd::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
}

// 00C86BA0  Trigger::cCondIsFadeEnd::vf00  size=31  [class]
Trigger::cCondIsFadeEnd *Trigger::cCondIsFadeEnd::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
