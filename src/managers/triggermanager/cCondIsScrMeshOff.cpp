// src/managers/triggermanager/cCondIsScrMeshOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsScrMeshOff.h"

// 00C7C830  Trigger::cCondIsScrMeshOff::cCondIsScrMeshOff  size=41  [class]
Trigger::cCondIsScrMeshOff::cCondIsScrMeshOff()
{
    *(int *)((char *)this + 0x0C) = -1;  // cCondition+0x0C: last result
    *(int **)((char *)this + 0x04) = 0;  // cCondition+0x04: condition record
    *(int *)((char *)this + 0x08) = -1;  // cCondition+0x08: ?
    // vftable = Trigger::cCondIsScrMeshOff::vftable (0x016A9D38)
    searchKey() = 0;
    partNo() = -1;
    meshName()[0] = 0;
    meshName()[1] = 0;
    meshName()[2] = 0;
    meshName()[3] = 0;
}

// 00C7C870  Trigger::cCondIsScrMeshOff::vf10  size=1  [class]
void Trigger::cCondIsScrMeshOff::vf10()
{
}

// 00C7C880  Trigger::cCondIsScrMeshOff::vf1C  size=46  [class]
void Trigger::cCondIsScrMeshOff::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    searchKey() = record[2];                  // record+0x08
    meshName()[0] = record[3];                // record+0x0C
    meshName()[1] = record[4];                // record+0x10
    meshName()[2] = record[5];                // record+0x14
    meshName()[3] = record[6];                // record+0x18
    partNo() = record[7];                     // record+0x1C
}

// 00C86500  Trigger::cCondIsScrMeshOff::vf00  size=31  [class]
Trigger::cCondIsScrMeshOff *Trigger::cCondIsScrMeshOff::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
