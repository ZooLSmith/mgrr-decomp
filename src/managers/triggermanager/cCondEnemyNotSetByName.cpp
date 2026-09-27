// src/managers/triggermanager/cCondEnemyNotSetByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyNotSetByName.h"

extern unsigned char DAT_01c78cb0[];  // enemy set manager (ECX of the FUN_00c18xxx / FUN_00c19xxx calls)

extern undefined DAT_016a9148;  // debug error message

namespace cCondEnemyNotSetByName_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (__cdecl *)(const void *, ...))FUN_00dd5650)(format); }

// FUN_00c18c70: nonzero while the named enemy set is placed (? see cCondEnemyNotSetByName)
inline int enemySetByName(char *name) { return ((int (__thiscall *)(void *, char *))(void *)FUN_00c18c70)(DAT_01c78cb0, name); }

} // namespace cCondEnemyNotSetByName_p1

// 00C7A990  Trigger::cCondEnemyNotSetByName::vf14  size=40  [class]
bool Trigger::cCondEnemyNotSetByName::vf14()
{
    using namespace cCondEnemyNotSetByName_p1;

    if (enemyName() == 0) {
        reportError(&DAT_016a9148);   // enemy set name not set
        return false;
    }
    return enemySetByName(enemyName()) == 0;
}

// 00C7A9C0  Trigger::cCondEnemyNotSetByName::vf1C  size=16  [class]
void Trigger::cCondEnemyNotSetByName::vf1C(int *record)
{
    using namespace cCondEnemyNotSetByName_p1;

    conditionRecord(this) = record;
    enemyName() = (char *)(record + 2);   // name string at record+0x08
}

// 00C857E0  Trigger::cCondEnemyNotSetByName::vf00  size=31  [class]
Trigger::cCondEnemyNotSetByName *Trigger::cCondEnemyNotSetByName::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
