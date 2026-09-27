// src/managers/triggermanager/cCondOutCamera.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondOutCamera.h"

namespace cCondOutCamera_p1 {

// ECX of FUN_00d9fa80 (camera object at 0x01BEA1D0; the raw decompilation dropped it)
const int kCamera = 0x01BEA1D0;

}  // namespace cCondOutCamera_p1

// 00C7A3F0  Trigger::cCondOutCamera::vf14  size=135  [class]
// Projects worldPos (+0x30) to screenPos (+0x20) and returns 0 while the point is in front of the
// camera (w > 0) and inside the FUN_00f98a90 x FUN_00f98aa0 screen; 1 otherwise.
int Trigger::cCondOutCamera::vf14()
{
    using namespace cCondOutCamera_p1;
    if (enabled() == 0) {
        return 0;
    }
    int screenWidth = FUN_00f98a90();
    int screenHeight = FUN_00f98aa0();
    float *pos = screenPos();
    FUN_00d9fa80(kCamera, (undefined4)pos, (undefined4)worldPos());
    if (0.0 < screenPos()[3] && 0.0 < pos[0] && pos[0] < (float)screenWidth &&
        0.0 < screenPos()[1] && screenPos()[1] < (float)screenHeight) {
        return 0;
    }
    return 1;
}

// 00C7A480  Trigger::cCondOutCamera::vf1C  size=16  [class]
void Trigger::cCondOutCamera::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    target() = record[2];                     // record+0x08
}

// 00C853D0  Trigger::cCondOutCamera::vf00  size=31  [class]
Trigger::cCondOutCamera *Trigger::cCondOutCamera::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
