// src/managers/triggermanager/cCondIsScrCollisionOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsScrCollisionOn.h"

namespace cCondIsScrCollisionOn_p1 {

// address stored in the vftable slot at byte offset `offset` of `object`
inline void *vslot(const void *object, int offset)
{
    return *(void **)(*(char **)object + offset);
}

}  // namespace cCondIsScrCollisionOn_p1

// 00C7CB90  Trigger::cCondIsScrCollisionOn::cCondIsScrCollisionOn  size=38  [class]
Trigger::cCondIsScrCollisionOn::cCondIsScrCollisionOn()
{
    *(int *)((char *)this + 0x0C) = -1;  // cCondition+0x0C: last result
    *(int **)((char *)this + 0x04) = 0;  // cCondition+0x04: condition record
    *(int *)((char *)this + 0x08) = -1;  // cCondition+0x08: ?
    // vftable = Trigger::cCondIsScrCollisionOn::vftable (0x016A9E88)
    searchKey() = 0;
    collisionParams()[0] = 0;
    collisionParams()[1] = 0;
    collisionParams()[2] = 0;
    collisionParams()[3] = 0;
}

// 00C7CBD0  Trigger::cCondIsScrCollisionOn::vf10  size=1  [class]
void Trigger::cCondIsScrCollisionOn::vf10()
{
}

// 00C7CBE0  Trigger::cCondIsScrCollisionOn::vf14  size=149  [class]
// Finds the objects matching searchKey (vftable slot 0x28 of FUN_00c14bb0's object fills the count),
// and returns 1 when some active object answers the collision query (+0x14) with state 1.
// The raw decompilation read the count and the result through unaff_ESI / unaff_EBX; the machine
// code keeps both in stack locals initialised to 0 (count via the slot 0x28 out-parameter).
int Trigger::cCondIsScrCollisionOn::vf14()
{
    using namespace cCondIsScrCollisionOn_p1;
    int found = 0;
    int count = 0;
    int *finder = (int *)FUN_00c14bb0();
    int **objects = ((int **(__thiscall *)(int *, int *, int))vslot(finder, 0x28))(finder, &count, searchKey());
    if (objects != 0 && 0 < count) {
        int i = 0;
        do {
            int *object = objects[i];
            if (object != 0) {
                int active = ((int (__thiscall *)(int *))vslot(object, 0x8))(object);
                if (active != 0) {
                    int state = 0;
                    int ok = ((int (__thiscall *)(int *, int *, int *, int))vslot(objects[i], 0xE8))(
                        objects[i], collisionParams(), &state, 1);
                    if (ok != 0 && state == 1) {
                        found = 1;
                    }
                }
            }
            i = i + 1;
        } while (i < count);
        return found;
    }
    return 0;
}

// 00C7CC80  Trigger::cCondIsScrCollisionOn::vf1C  size=40  [class]
void Trigger::cCondIsScrCollisionOn::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    searchKey() = record[2];                  // record+0x08
    collisionParams()[0] = record[3];         // record+0x0C
    collisionParams()[1] = record[4];         // record+0x10
    collisionParams()[2] = record[5];         // record+0x14
    collisionParams()[3] = record[6];         // record+0x18
}

// 00C865A0  Trigger::cCondIsScrCollisionOn::vf00  size=31  [class]
Trigger::cCondIsScrCollisionOn *Trigger::cCondIsScrCollisionOn::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
