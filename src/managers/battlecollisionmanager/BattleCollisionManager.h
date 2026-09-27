// REFINED
// BattleCollisionManager -- abstract interface of the battle collision manager (offense / defense
// collision lists); implemented by BattleCollisionManagerImplement.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct BattleCollisionManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00() = 0;  // 00FDB68B slot 0x0  (Implement: per-frame update)
    virtual void vf04() = 0;  // 00FDB68B slot 0x4
    virtual void addOffense(int param_2) = 0;  // 00FDB68B slot 0x8
    virtual undefined4 addDefense(int * param_2) = 0;  // 00FDB68B slot 0xC
    virtual void vf10(int param_2) = 0;  // 00FDB68B slot 0x10
    virtual void vf14(int param_2) = 0;  // 00FDB68B slot 0x14
    virtual int vf18(int param_2) = 0;  // 00FDB68B slot 0x18
    virtual int vf1C(int param_2) = 0;  // 00FDB68B slot 0x1C
    virtual int * vf20(int * param_2) = 0;  // 00FDB68B slot 0x20
    virtual undefined4 * vf24(byte flags);  // 00D770A0 slot 0x24  scalar deleting destructor
    virtual void vf28() = 0;  // 00FDB68B slot 0x28
    virtual void vf2C() = 0;  // 00FDB68B slot 0x2C
    virtual void vf30() = 0;  // 00FDB68B slot 0x30
    virtual undefined4 vf34() = 0;  // 00FDB68B slot 0x34
    virtual undefined4 vf38() = 0;  // 00FDB68B slot 0x38
    virtual undefined4 vf3C(int param_2) = 0;  // 00FDB68B slot 0x3C
    virtual undefined4 vf40(int param_2) = 0;  // 00FDB68B slot 0x40
    // non-virtual members
    // 00D7B9C0 (FILEMAP: BattleCollisionManager::BattleCollisionManager): the body of
    // ~BattleCollisionManagerImplement (called by BattleCollisionManagerImplement::vf24).
    void implementDestructor();
};
