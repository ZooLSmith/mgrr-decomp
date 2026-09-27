// src/managers/triggermanager/cCondScenarioAreaEm.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondScenarioAreaEm.h"

extern undefined DAT_01c78cb0;  // enemy manager (ECX of FUN_00c18c10 / FUN_00c19c00)

namespace cCondScenarioAreaEm_p1 {

// address stored in the vftable slot at byte offset `offset` of `object`
inline int vslot(int *object, int offset) { return *(int *)(*object + offset); }

// FUN_00c18c10 (__thiscall, ECX = &DAT_01c78cb0 enemy manager): nonzero when the set/group exists
inline int groupExists(int setNo, int groupNo)
{
    return ((int (__thiscall *)(void *, int, int))FUN_00c18c10)(&DAT_01c78cb0, setNo, groupNo);
}

// FUN_00c19c00 (__thiscall, ECX = &DAT_01c78cb0): the enemy (setNo, groupNo, enemyNo), or 0
inline int findEnemy(int setNo, int groupNo, int enemyNo)
{
    return ((int (__thiscall *)(void *, int, int, int))FUN_00c19c00)(&DAT_01c78cb0, setNo, groupNo, enemyNo);
}

// area manager virtual +0x2C (__thiscall, ECX = the manager): is `position` inside area `areaId`
inline int areaContains2C(int *manager, undefined4 *position, unsigned short areaId, int layer)
{
    return ((int (__thiscall *)(int *, undefined4 *, unsigned int, int))vslot(manager, 0x2C))(
        manager, position, areaId, layer);
}

}  // namespace cCondScenarioAreaEm_p1

// 00C7E180  Trigger::cCondScenarioAreaEm::vf10  size=8  [class]
void Trigger::cCondScenarioAreaEm::vf10()
{
    foundEnemy() = 0;
}

// 00C7E190  Trigger::cCondScenarioAreaEm::vf14  size=175  [class]
int Trigger::cCondScenarioAreaEm::vf14()
{
    using namespace cCondScenarioAreaEm_p1;
    int group = groupExists(setNo(), groupNo());
    if (group == 0) {
        return 0;
    }
    int i = 0;
    if (0 < enemyCount()) {
        int *enemyNo = enemyNos();
        do {
            int enemy = findEnemy(setNo(), groupNo(), *enemyNo);
            if (enemy != 0) {
                int *areaManager = (int *)FUN_00a6e640();
                // Ghidra misread this: FUN_00a7c8b0 is __fastcall (ECX = enemy) and the areaId / 2 pushed
                // before it are arguments of the vftable+0x2C call.
                undefined4 *position = FUN_00a7c8b0(enemy);  // enemy position
                int found = areaContains2C(areaManager, position, areaId(), 2);
                if (found != 0) {
                    foundEnemy() = enemy;
                    return 1;
                }
            }
            enemyNo = enemyNo + 1;
            i = i + 1;
        } while (i < enemyCount());
    }
    return 0;
}

// 00C7E240  Trigger::cCondScenarioAreaEm::vf1C  size=66  [class]
void Trigger::cCondScenarioAreaEm::vf1C(int *record)
{
    this->record() = record;
    areaId() = *(unsigned short *)&record[2];  // record+0x08
    setNo() = record[3];
    groupNo() = record[4];
    enemyCount() = record[5];
    enemyNos()[0] = record[6];
    enemyNos()[1] = record[7];
    enemyNos()[2] = record[8];
    enemyNos()[3] = record[9];
    enemyNos()[4] = record[10];
}

// 00C86CF0  Trigger::cCondScenarioAreaEm::vf00  size=31  [class]
Trigger::cCondScenarioAreaEm *Trigger::cCondScenarioAreaEm::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
