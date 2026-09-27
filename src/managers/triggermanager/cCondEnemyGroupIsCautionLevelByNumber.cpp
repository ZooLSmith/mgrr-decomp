// src/managers/triggermanager/cCondEnemyGroupIsCautionLevelByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyGroupIsCautionLevelByNumber.h"

extern unsigned char DAT_01c78cb0[];  // enemy set manager (ECX of the FUN_00c18xxx / FUN_00c19xxx calls)

extern unsigned char DAT_01be9c78[];  // BehaviorEmBase

namespace cCondEnemyGroupIsCautionLevelByNumber_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// FUN_00c19d00: fills `entities` with the entities of the numbered enemy set of the group; returns their count
inline int collectEnemyGroupEntities(int groupNo, int enemyNo, void *entities) { return ((int (__thiscall *)(void *, int, int, void *))(void *)FUN_00c19d00)(DAT_01c78cb0, groupNo, enemyNo, entities); }

// lib::StaticArray<Entity*,64> on the stack
struct EntityArray64 {
    void *vftable;     // +0x0  lib::StaticArray<Entity*,64>::vftable
    int  *data;        // +0x4  -> storage
    int   count;       // +0x8
    int   capacity;    // +0xC  0x40
    int   storage[64]; // +0x10
};

// vftable of lib::StaticArray<Entity*,64>
static void *const kStaticArrayEntity64Vftable = (void *)0x0163F6EC;

// FUN_00a7c8a0 (__fastcall): returns [ECX + 0x48] -- the entity's behavior
inline int *entityBehavior(int entity) { return ((int *(__fastcall *)(int))(void *)FUN_00a7c8a0)(entity); }

// virtual call of slot +0x04 on the behavior (ECX = behavior, no stack argument): its type record
inline void *typeRecordOf(int *object) { return ((void *(__thiscall *)(int *))(*(void ***)object)[1])(object); }

// FUN_00dd6d80 (__thiscall, ECX = type record): walks the base chain looking for `type`
inline int isKindOf(void *record, void *type) { return ((int (__thiscall *)(void *, void *))(void *)FUN_00dd6d80)(record, type); }

// FUN_00a82e80 / FUN_00a82e70 / FUN_00a82e60 (__fastcall, ECX = behavior + 0xC10): alert-state tests
// selected by the caution level 0 / 1 / 2
inline int cautionTest0(void *sub) { return ((int (__fastcall *)(void *))(void *)FUN_00a82e80)(sub); }
inline int cautionTest1(void *sub) { return ((int (__fastcall *)(void *))(void *)FUN_00a82e70)(sub); }
inline int cautionTest2(void *sub) { return ((int (__fastcall *)(void *))(void *)FUN_00a82e60)(sub); }

} // namespace cCondEnemyGroupIsCautionLevelByNumber_p1

// 00C7DF90  Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf10  size=1  [class]
void Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf10()
{
}

// 00C7DFA0  Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf1C  size=28  [class]
void Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf1C(int *record)
{
    using namespace cCondEnemyGroupIsCautionLevelByNumber_p1;

    conditionRecord(this) = record;
    groupNo() = record[2];
    enemyNo() = record[3];
    cautionLevel() = record[4];
}

// 00C86C50  Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf00  size=31  [class]
Trigger::cCondEnemyGroupIsCautionLevelByNumber *Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C9CBA0  Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf14  size=246  [class]
int Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf14()
{
    using namespace cCondEnemyGroupIsCautionLevelByNumber_p1;

    EntityArray64 entities;
    entities.data = entities.storage;
    int result = 0;
    entities.count = 0;
    entities.capacity = 0x40;
    entities.vftable = kStaticArrayEntity64Vftable;
    if (collectEnemyGroupEntities(groupNo(), enemyNo(), &entities) < 1) {
        return 0;
    }
    int *entity = entities.data;
    if (entity == entities.data + entities.count) {
        return 0;
    }
    do {
        int *behavior;
        if (*entity != 0 && (behavior = entityBehavior(*entity)) != 0) {
            char *sub = (char *)behavior + 0xC10;   // BehaviorEmBase sub-object, ECX of the alert-state tests
            if (isKindOf(typeRecordOf(behavior), DAT_01be9c78) != 0 && behavior != (int *)0xfffff3f0) {   // sub != null
                int level = cautionLevel();
                if (level == 0) {
                    result = cautionTest0(sub);
                }
                else if (level == 1) {
                    result = cautionTest1(sub);
                }
                else if (level == 2) {
                    result = cautionTest2(sub);
                }
                else {
                    result = 0;   // raw: jumps straight to the next entity (the == 1 test cannot pass)
                }
                if (result == 1) {
                    return 1;
                }
            }
        }
        entity = entity + 1;
    } while (entity != entities.data + entities.count);
    return result;
}
