// src/managers/triggermanager/cCondEnemyNotSetByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyNotSetByNumber.h"

extern unsigned char DAT_01c78cb0[];  // enemy set manager (ECX of the FUN_00c18xxx / FUN_00c19xxx calls)

namespace cCondEnemyNotSetByNumber_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// FUN_00c18cc0: nonzero while the numbered enemy set is placed (? see cCondEnemyNotSetByNumber)
inline int enemySetByNumber(int number) { return ((int (__thiscall *)(void *, int))(void *)FUN_00c18cc0)(DAT_01c78cb0, number); }

} // namespace cCondEnemyNotSetByNumber_p1

// 00C7A930  Trigger::cCondEnemyNotSetByNumber::vf14  size=20  [class]
bool Trigger::cCondEnemyNotSetByNumber::vf14()
{
    using namespace cCondEnemyNotSetByNumber_p1;

    return enemySetByNumber(enemyNo()) == 0;
}

// 00C7A950  Trigger::cCondEnemyNotSetByNumber::vf1C  size=16  [class]
void Trigger::cCondEnemyNotSetByNumber::vf1C(int *record)
{
    using namespace cCondEnemyNotSetByNumber_p1;

    conditionRecord(this) = record;
    enemyNo() = record[2];
}

// 00C857C0  Trigger::cCondEnemyNotSetByNumber::vf00  size=31  [class]
Trigger::cCondEnemyNotSetByNumber *Trigger::cCondEnemyNotSetByNumber::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
