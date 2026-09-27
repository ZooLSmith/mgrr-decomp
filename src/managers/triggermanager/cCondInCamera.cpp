// src/managers/triggermanager/cCondInCamera.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondInCamera.h"

extern unsigned char DAT_01bea1d0[];  // camera/view object (ECX of FUN_00d9fa80)

namespace cCondInCamera_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// FUN_00d9fa80: projects the world position `world` to screen coordinates (x, y, z, w) at `screen`
// (__thiscall, ECX = DAT_01bea1d0)
inline void projectToScreen(float *screen, float *world) { ((void (__thiscall *)(void *, float *, float *))(void *)FUN_00d9fa80)(DAT_01bea1d0, screen, world); }

} // namespace cCondInCamera_p1

// 00C7A320  Trigger::cCondInCamera::vf14  size=135  [class]
int Trigger::cCondInCamera::vf14()
{
    using namespace cCondInCamera_p1;

    if (active() == 0) {
        return 0;
    }
    int screenWidth = (int)FUN_00f98a90();
    int screenHeight = (int)FUN_00f98aa0();
    float *screen = &screenX();
    projectToScreen(screen, &worldX());
    if (0.0f < screenW() && 0.0f < *screen && *screen < (float)screenWidth &&
        0.0f < screenY() && screenY() < (float)screenHeight) {
        return 1;
    }
    return 0;
}

// 00C7A3B0  Trigger::cCondInCamera::vf1C  size=16  [class]
void Trigger::cCondInCamera::vf1C(int *record)
{
    using namespace cCondInCamera_p1;

    conditionRecord(this) = record;
    field10() = record[2];
}

// 00C85330  Trigger::cCondInCamera::vf00  size=31  [class]
Trigger::cCondInCamera *Trigger::cCondInCamera::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
