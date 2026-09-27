// src/managers/triggermanager/cCondEnemyGroupNotSetByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyGroupNotSetByName.h"

extern unsigned char DAT_01c78cb0[];  // enemy set manager (ECX of the FUN_00c18xxx / FUN_00c19xxx calls)

extern undefined DAT_016a9148;  // debug error message

namespace cCondEnemyGroupNotSetByName_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (__cdecl *)(const void *, ...))FUN_00dd5650)(format); }

// FUN_00c18c40: nonzero while the named enemy set of the group is placed (? see the NotSet conditions)
inline int enemyGroupSetByName(int groupNo, char *name) { return ((int (__thiscall *)(void *, int, char *))(void *)FUN_00c18c40)(DAT_01c78cb0, groupNo, name); }

} // namespace cCondEnemyGroupNotSetByName_p1

// 00C7BAA0  Trigger::cCondEnemyGroupNotSetByName::vf14  size=44  [class]
bool Trigger::cCondEnemyGroupNotSetByName::vf14()
{
    using namespace cCondEnemyGroupNotSetByName_p1;

    if (enemyName() == 0) {
        reportError(&DAT_016a9148);   // enemy set name not set
        return false;
    }
    return enemyGroupSetByName(groupNo(), enemyName()) == 0;
}

// 00C7BAD0  Trigger::cCondEnemyGroupNotSetByName::vf1C  size=22  [class]
void Trigger::cCondEnemyGroupNotSetByName::vf1C(int *record)
{
    using namespace cCondEnemyGroupNotSetByName_p1;

    conditionRecord(this) = record;
    groupNo() = record[2];
    enemyName() = (char *)(record + 3);   // name string at record+0x0C
}

// 00C86180  Trigger::cCondEnemyGroupNotSetByName::vf00  size=31  [class]
Trigger::cCondEnemyGroupNotSetByName *Trigger::cCondEnemyGroupNotSetByName::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
