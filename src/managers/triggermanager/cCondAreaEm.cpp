// src/managers/triggermanager/cCondAreaEm.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondAreaEm.h"

extern undefined DAT_01c78cb0;  // ? enemy manager object (ECX of FUN_00c18c10 / FUN_00c19c00)

namespace cCondAreaEm_p1 {

// FUN_00c18c10 (__thiscall, ECX = DAT_01c78cb0): nonzero when the enemy group/sub-group exists
inline int subGroupExists(int group, int subGroup)
{
    return ((int (__thiscall *)(void *, int, int))FUN_00c18c10)(&DAT_01c78cb0, group, subGroup);
}

// FUN_00c19c00 (__thiscall, ECX = DAT_01c78cb0): the enemy for (group, subGroup, entry), or 0
inline int findEnemy(int group, int subGroup, int entry)
{
    return ((int (__thiscall *)(void *, int, int, int))FUN_00c19c00)(&DAT_01c78cb0, group, subGroup, entry);
}

// FUN_00a6e640: returns the area manager object (has a vftable)
inline int *areaManager()
{
    return (int *)FUN_00a6e640();
}

// FUN_00a7c8b0 (__fastcall, ECX = enemy): the enemy's position
inline float *enemyPosition(int enemy)
{
    return (float *)FUN_00a7c8b0(enemy);
}

// area manager virtual +0x2C (__thiscall): is `position` inside area areaId on `layer`
inline int areaContains2C(int *manager, float *position, unsigned int areaId, int layer)
{
    typedef int (__thiscall *Fn)(int *, float *, unsigned int, int);
    return ((Fn)(*(int **)manager)[0x2C / 4])(manager, position, areaId, layer);
}

} // namespace cCondAreaEm_p1

// 00C799A0  Trigger::cCondAreaEm::vf10  size=8  [class]
void Trigger::cCondAreaEm::vf10()
{
    foundEnemy() = 0;
}

// 00C799B0  Trigger::cCondAreaEm::vf14  size=217  [class]
int Trigger::cCondAreaEm::vf14()
{
    using namespace cCondAreaEm_p1;
    if (subGroupExists(group(), subGroup()) == 0) {
        return 0;
    }
    // Ghidra mis-read this loop: FUN_00a7c8b0 is __fastcall (ECX = enemy) and the areaId / layer
    // pushed before it are arguments of the vftable+0x2C call; the first test's result is kept
    // on the stack (Ghidra's iStack_4). The test is (hit1 != 0 || hit2 != 0).
    for (int i = 0; i < entryCount(); i++) {
        int enemy = findEnemy(group(), subGroup(), entries()[i]);
        if (enemy != 0) {
            int *manager = areaManager();
            int hit1 = areaContains2C(manager, enemyPosition(enemy), areaId(), 1);
            manager = areaManager();
            int hit2 = areaContains2C(manager, enemyPosition(enemy), areaId(), 2);
            if (hit1 != 0 || hit2 != 0) {
                foundEnemy() = enemy;
                return 1;
            }
        }
    }
    return 0;
}

// 00C79A90  Trigger::cCondAreaEm::vf1C  size=66  [class]
void Trigger::cCondAreaEm::vf1C(int *record)
{
    *(int **)((char *)this + 0x4) /* cCondition+0x04: condition record */ = record;
    areaId() = *(unsigned short *)((char *)record + 8);
    group() = record[3];
    subGroup() = record[4];
    entryCount() = record[5];
    entries()[0] = record[6];
    entries()[1] = record[7];
    entries()[2] = record[8];
    entries()[3] = record[9];
    entries()[4] = record[10];
}

// 00C79AE0  Trigger::cCondAreaEm::vf18  size=4  [class]
int Trigger::cCondAreaEm::vf18()
{
    return foundEnemy();
}

// 00C84DD0  Trigger::cCondAreaEm::vf00  size=31  [class]
Trigger::cCondAreaEm *Trigger::cCondAreaEm::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
