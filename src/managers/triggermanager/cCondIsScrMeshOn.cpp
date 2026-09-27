// src/managers/triggermanager/cCondIsScrMeshOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsScrMeshOn.h"

// 00C7C7B0  Trigger::cCondIsScrMeshOn::cCondIsScrMeshOn  size=41  [class]
Trigger::cCondIsScrMeshOn::cCondIsScrMeshOn()
{
    *(int *)((char *)this + 0x0C) = -1;  // cCondition+0x0C: last result
    *(int **)((char *)this + 0x04) = 0;  // cCondition+0x04: condition record
    *(int *)((char *)this + 0x08) = -1;  // cCondition+0x08: ?
    // vftable = Trigger::cCondIsScrMeshOn::vftable (0x016A9D10)
    searchKey() = 0;
    partNo() = -1;
    meshName()[0] = 0;
    meshName()[1] = 0;
    meshName()[2] = 0;
    meshName()[3] = 0;
}

// 00C7C7F0  Trigger::cCondIsScrMeshOn::vf10  size=1  [class]
void Trigger::cCondIsScrMeshOn::vf10()
{
}

// 00C7C800  Trigger::cCondIsScrMeshOn::vf1C  size=46  [class]
void Trigger::cCondIsScrMeshOn::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    searchKey() = record[2];                  // record+0x08
    meshName()[0] = record[3];                // record+0x0C
    meshName()[1] = record[4];                // record+0x10
    meshName()[2] = record[5];                // record+0x14
    meshName()[3] = record[6];                // record+0x18
    partNo() = record[7];                     // record+0x1C
}

// 00C864E0  Trigger::cCondIsScrMeshOn::vf00  size=31  [class]
Trigger::cCondIsScrMeshOn *Trigger::cCondIsScrMeshOn::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
