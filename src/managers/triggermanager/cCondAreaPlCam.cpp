// src/managers/triggermanager/cCondAreaPlCam.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondAreaPlCam.h"

// ? 4-float position (player camera?) copied before the area test
extern float DAT_01bea380;
extern float DAT_01bea384;
extern float DAT_01bea388;
extern float DAT_01bea38c;

namespace cCondAreaPlCam_p1 {

// FUN_00a6e640: returns the area manager object (has a vftable)
inline int *areaManager()
{
    return (int *)FUN_00a6e640();
}

// area manager virtual +0x2C (__thiscall): is `position` inside area areaId on `layer`
inline int areaContains2C(int *manager, float *position, unsigned int areaId, int layer)
{
    typedef int (__thiscall *Fn)(int *, float *, unsigned int, int);
    return ((Fn)(*(int **)manager)[0x2C / 4])(manager, position, areaId, layer);
}

} // namespace cCondAreaPlCam_p1

// 00C7E570  Trigger::cCondAreaPlCam::vf10  size=1  [class]
void Trigger::cCondAreaPlCam::vf10()
{
}

// 00C7E580  Trigger::cCondAreaPlCam::vf14  size=132  [class]
int Trigger::cCondAreaPlCam::vf14()
{
    using namespace cCondAreaPlCam_p1;
    float position[4];
    position[0] = DAT_01bea380;
    position[1] = DAT_01bea384;
    position[2] = DAT_01bea388;
    position[3] = DAT_01bea38c;
    int *manager = areaManager();
    int hit1 = areaContains2C(manager, position, areaId(), 1);
    manager = areaManager();
    // Ghidra shows &stack0xffffffd4 here; the machine code passes the same local copy
    // (lea ecx,[esp+0x18] at the same stack depth as the first call)
    int hit2 = areaContains2C(manager, position, areaId(), 2);
    if (hit1 == 0 && hit2 == 0) {
        return 0;
    }
    return 1;
}

// 00C7E610  Trigger::cCondAreaPlCam::vf1C  size=18  [class]
void Trigger::cCondAreaPlCam::vf1C(int *record)
{
    *(int **)((char *)this + 0x4) /* cCondition+0x04: condition record */ = record;
    areaId() = *(unsigned short *)((char *)record + 8);
}

// 00C86D70  Trigger::cCondAreaPlCam::vf00  size=31  [class]
Trigger::cCondAreaPlCam *Trigger::cCondAreaPlCam::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
