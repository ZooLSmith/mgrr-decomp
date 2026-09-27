// REFINED
// BattleCollisionManagerImplement -- owns the offense / defense collision lists and runs the
// per-frame offense-vs-defense hit test (vf00).  Instance is created by the ctor at 00D7B2C0.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "BattleCollisionManager.h"
#include "Slot.h"

struct BattleCollisionManagerImplement : public BattleCollisionManager {
    // lib::StaticArray<Collision*,N> header (element storage follows at +0x10).
    // vftable slot 0x8 = push_back(const T *element).
    struct CollisionArray {
        void         *vftable;   // +0x0
        Collision   **data;      // +0x4
        unsigned int  count;     // +0x8
        unsigned int  capacity;  // +0xC
    };

    // Slot registered under id 9 by the ctor (FUN_00d89ec0(9, slot)); vftable 0x016C0FFC.
    struct MainUpdateForPauseSlot : public Slot {
        // Slot.h declares vf00() with another prototype; the binary's slot 0x0 is this
        // scalar deleting destructor, so it is declared here without `virtual`.
        undefined4 *vf00(byte flags);  // 00D78190 slot 0x0
        virtual void vf10();  // 00D77300 slot 0x10  overrides Slot (empty)
        virtual void vf14();  // 00D77310 slot 0x14  overrides Slot (empty)
        virtual void vf18();  // 00D78180 slot 0x18  overrides Slot (the binary pops 2 unused stack args: ret 8)
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();  // 00D7DC80 slot 0x0  overrides BattleCollisionManager (per-frame update)
    virtual void vf04();  // 00D7BD20 slot 0x4  overrides BattleCollisionManager (drops collisions FUN_00d7b8e0 rejects)
    virtual void addOffense(int param_2);  // 00D781B0 slot 0x8  overrides BattleCollisionManager
    virtual undefined4 addDefense(int * param_2);  // 00D78210 slot 0xC  overrides BattleCollisionManager
    virtual void vf10(int param_2);  // 00D7B410 slot 0x10  overrides BattleCollisionManager (release offense by id)
    virtual void vf14(int param_2);  // 00D7B470 slot 0x14  overrides BattleCollisionManager (release defense by id)
    virtual int vf18(int param_2);  // 00D782A0 slot 0x18  overrides BattleCollisionManager (find offense by id)
    virtual int vf1C(int param_2);  // 00D782E0 slot 0x1C  overrides BattleCollisionManager (find defense by id)
    virtual int * vf20(int * param_2);  // 00D7A400 slot 0x20  overrides BattleCollisionManager (collect live offense)
    virtual undefined4 * vf24(byte param_2);  // 00D7BD00 slot 0x24  overrides BattleCollisionManager (scalar deleting dtor)
    virtual void vf28();  // 00D77330 slot 0x28  overrides BattleCollisionManager
    virtual void vf2C();  // 00D77340 slot 0x2C  overrides BattleCollisionManager
    virtual void vf30();  // 00D77350 slot 0x30  overrides BattleCollisionManager
    virtual undefined4 vf34();  // 00D78320 slot 0x34  overrides BattleCollisionManager (offense count)
    virtual undefined4 vf38();  // 00D78330 slot 0x38  overrides BattleCollisionManager (defense count)
    virtual undefined4 vf3C(int param_2);  // 00D78340 slot 0x3C  overrides BattleCollisionManager (offense[i])
    virtual undefined4 vf40(int param_2);  // 00D78360 slot 0x40  overrides BattleCollisionManager (defense[i])
    // non-virtual members
    BattleCollisionManagerImplement(void *heap);  // 00D7B2C0 (FILEMAP: MainUpdateForPauseSlot::MainUpdateForPauseSlot)

    // fields (absolute offsets from object start)
    void           *&heap()          { return *(void **)((char *)this + 0x4); }            // +0x04 heap passed to FUN_00dd3500
    CollisionArray *&offenseList()   { return *(CollisionArray **)((char *)this + 0x8); }  // +0x08 StaticArray<Collision*,128>
    CollisionArray *&list0C()        { return *(CollisionArray **)((char *)this + 0xC); }  // +0x0C StaticArray<Collision*,128> ?
    CollisionArray *&defenseList()   { return *(CollisionArray **)((char *)this + 0x10); } // +0x10 StaticArray<Collision*,1024>
    CollisionArray *&sortBuffer()    { return *(CollisionArray **)((char *)this + 0x14); } // +0x14 StaticArray<Collision*,1024>, scratch for FUN_00d7a490
    void           *lock()           { return (char *)this + 0x18; }                       // +0x18 CRITICAL_SECTION (0x18 bytes)
    int            &lockInitialized(){ return *(int *)((char *)this + 0x30); }             // +0x30 set by FUN_00dd7240
    MainUpdateForPauseSlot *&pauseSlot() { return *(MainUpdateForPauseSlot **)((char *)this + 0x38); } // +0x38
};
