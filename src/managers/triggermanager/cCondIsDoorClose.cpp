// src/managers/triggermanager/cCondIsDoorClose.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsDoorClose.h"

extern unsigned char DAT_018aa480[];  // door manager (ECX of FUN_00c47c30)

namespace cCondIsDoorClose_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// Trigger::cCondition+0x08 / +0x0C: ? both set to -1 by the (inlined) base constructor
inline int &conditionField08(void *self) { return *(int *)((char *)self + 0x8); }
inline int &conditionField0C(void *self) { return *(int *)((char *)self + 0xC); }

// FUN_00e03ea0: hash of a name string (functions.h declares it void; the hash is in EAX)
inline int nameHash(char *name) { return ((int (*)(char *))FUN_00e03ea0)(name); }

// FUN_00c47c30 (__thiscall, ECX = DAT_018aa480): nonzero when the door with this name hash is closed
inline int isDoorClosed(int nameHash) { return ((int (__thiscall *)(void *, int))(void *)FUN_00c47c30)(DAT_018aa480, nameHash); }

} // namespace cCondIsDoorClose_p1

// 00C7AA10  Trigger::cCondIsDoorClose::cCondIsDoorClose  size=39  [class]
Trigger::cCondIsDoorClose::cCondIsDoorClose()
{
    using namespace cCondIsDoorClose_p1;

    conditionField0C(this) = -1;
    conditionField08(this) = -1;
    conditionRecord(this) = 0;
    // vftable = Trigger::cCondIsDoorClose::vftable (0x016A9194)
    ((int *)doorName())[0] = 0;
    ((int *)doorName())[1] = 0;
    ((int *)doorName())[2] = 0;
    ((int *)doorName())[3] = 0;
}

// 00C7AA50  Trigger::cCondIsDoorClose::vf10  size=1  [class]
void Trigger::cCondIsDoorClose::vf10()
{
}

// 00C7AA60  Trigger::cCondIsDoorClose::vf14  size=51  [class]
int Trigger::cCondIsDoorClose::vf14()
{
    using namespace cCondIsDoorClose_p1;

    int result = 0;
    char *name = doorName();
    if (name[0] != '\0') {   // raw: inlined strlen(name) != 0
        int hash = nameHash(name);
        result = isDoorClosed(hash);
    }
    return result;
}

// 00C7AAA0  Trigger::cCondIsDoorClose::vf1C  size=32  [class]
void Trigger::cCondIsDoorClose::vf1C(int *record)
{
    using namespace cCondIsDoorClose_p1;

    conditionRecord(this) = record;
    if (record != 0) {
        _strcpy_s(doorName(), 0x10, (char *)(record + 2));   // name string at record+0x08
    }
}

// 00C85850  Trigger::cCondIsDoorClose::vf00  size=31  [class]
Trigger::cCondIsDoorClose *Trigger::cCondIsDoorClose::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
