// src/managers/triggermanager/cCondIsDoorOpen.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsDoorOpen.h"

namespace cCondIsDoorOpen_p1 {

// FUN_00e03ea0: hash of a name string (functions.h declares it void; the hash is in EAX)
inline int hashName(const char *name)
{
    return ((int (*)(const char *))FUN_00e03ea0)(name);
}

// ECX of FUN_00c47c30 (the door manager object at 0x018AA480, PTR_vftable_018aa480)
const int kDoorManager = 0x018AA480;

}  // namespace cCondIsDoorOpen_p1

// 00C79B00  Trigger::cCondIsDoorOpen::cCondIsDoorOpen  size=39  [class]
Trigger::cCondIsDoorOpen::cCondIsDoorOpen()
{
    *(int *)((char *)this + 0x0C) = -1;  // cCondition+0x0C: last result
    *(int *)((char *)this + 0x08) = -1;  // cCondition+0x08: ?
    *(int **)((char *)this + 0x04) = 0;  // cCondition+0x04: condition record
    // vftable = Trigger::cCondIsDoorOpen::vftable (0x016A8D50)
    int *name = (int *)doorName();
    name[0] = 0;
    name[1] = 0;
    name[2] = 0;
    name[3] = 0;
}

// 00C79B40  Trigger::cCondIsDoorOpen::vf10  size=1  [class]
void Trigger::cCondIsDoorOpen::vf10()
{
}

// 00C79B50  Trigger::cCondIsDoorOpen::vf14  size=56  [class]
// 1 when the door named at +0x10 is not closed (FUN_00c47c30 returned 0); 0 for an empty name.
unsigned int Trigger::cCondIsDoorOpen::vf14()
{
    using namespace cCondIsDoorOpen_p1;
    unsigned int result = 0;
    const char *end = doorName();
    char c;
    do {
        c = *end;
        end = end + 1;
    } while (c != '\0');
    if (end != doorName() + 1) {
        int hash = hashName(doorName());
        unsigned int closed = FUN_00c47c30(kDoorManager, hash);
        result = ~closed & 1;
    }
    return result;
}

// 00C79B90  Trigger::cCondIsDoorOpen::vf1C  size=32  [class]
void Trigger::cCondIsDoorOpen::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    if (record != 0) {
        _strcpy_s(doorName(), 0x10, (char *)(record + 2));  // record+0x08: door name
    }
}

// 00C84DF0  Trigger::cCondIsDoorOpen::vf00  size=31  [class]
Trigger::cCondIsDoorOpen *Trigger::cCondIsDoorOpen::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
