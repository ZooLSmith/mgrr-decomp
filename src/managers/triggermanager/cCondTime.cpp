// src/managers/triggermanager/cCondTime.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondTime.h"

extern unsigned int DAT_01bea060;  // game state flags

namespace cCondTime_p1 {

// FUN_00e049b0 (__fastcall, ECX = 0x01BE939C, the game timer object): current frame time
// (x87 result; the raw decompilation dropped ECX)
inline double frameTime() { return (double)FUN_00e049b0((int *)0x01BE939C); }

}  // namespace cCondTime_p1

// 00C78CC0  Trigger::cCondTime::cCondTime  size=37  [class]
Trigger::cCondTime::cCondTime()
{
    *(unsigned int *)&duration() = 0xBF800000;   // -1.0f
    *(unsigned int *)&remaining() = 0xBF800000;  // -1.0f
    satisfied() = -1;
    record() = 0;
    field08() = -1;
    // vftable = Trigger::cCondTime::vftable (0x016A8A80)
}

// 00C78D30  Trigger::cCondTime::vf0C  size=39  [class]
int Trigger::cCondTime::vf0C()
{
    if (duration() != -1.0) {
        remaining() = (float)(duration() + 1.0);
        return 1;
    }
    return 0;
}

// 00C78D60  Trigger::cCondTime::vf10  size=45  [class]
void Trigger::cCondTime::vf10()
{
    using namespace cCondTime_p1;
    if (0.0 < remaining() && (DAT_01bea060 & 0x2000400) == 0) {
        double elapsed = frameTime();
        remaining() = (float)(remaining() - elapsed);
    }
}

// 00C78D90  Trigger::cCondTime::vf14  size=21  [class]
int Trigger::cCondTime::vf14()
{
    if (remaining() <= 0.0) {
        return 1;
    }
    return 0;
}

// 00C78DC0  Trigger::cCondTime::vf20  size=36  [class]
int Trigger::cCondTime::vf20()
{
    if (duration() != -1.0) {
        remaining() = (float)(duration() + 1.0);
    }
    return 1;
}

// 00C84CA0  Trigger::cCondTime::vf00  size=31  [class]
Trigger::cCondTime *Trigger::cCondTime::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C84CC0  Trigger::cCondTime::vf1C  size=16  [class]
void Trigger::cCondTime::vf1C(int *record)
{
    this->record() = record;
    *(int *)&duration() = record[2];  // record+0x08 (float bits)
}
