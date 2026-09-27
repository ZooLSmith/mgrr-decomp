// REFINED
// SceneBgManagerImplement -- the scene background (stage layout) manager.  It holds 8 background
// work slots (SceneBgWork, 0x22B8 bytes each, at +0x8); a slot whose id is -1 is free.  vf18 loads
// the layout "r%03x.ly2" of a room id into a free slot, most other virtuals forward to the slot
// that has a given id (or to every used slot).  vf74..vf90 enable / disable the hit of every rigid
// body of every layout object inside a box or an axis range (DisableHitByRange... predicates).
// Instance pointer: DAT_01bea180.  Created by the ctor at 00C625E0.
//
// Parameter lists follow SceneBgManager.h (the base declares every slot).  Where the machine code
// differs it is noted: vf24..vf30 pop 2 unused stack arguments (ret 8), vf98 pops 1 (ret 4), and
// vf94 takes 3 arguments (ret 0xC) although the base declares none -- vf94 is declared below
// without `virtual` so that it does not add a vftable slot.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "SceneBgManager.h"
#include "Slot.h"

struct SceneBgManagerImplement : public SceneBgManager {
    // One background work slot (0x22B8 bytes).  Not an RTTI class; only its layout-unit array
    // lib::StaticArray<SceneBgWork::LayoutUnit,128> is.  Its functions live at 00933720..00935420.
    // Offsets are relative to the start of the slot.
    struct SceneBgWork {
        int   &id()             { return *(int *)((char *)this + 0x0); }    // +0x00 room id, -1 = free
        int   &objectCount()    { return *(int *)((char *)this + 0x14); }   // +0x14 objects in this layout
        int   &field18()        { return *(int *)((char *)this + 0x18); }   // +0x18 ?
        int   &field1C()        { return *(int *)((char *)this + 0x1C); }   // +0x1C ?
        int   &field28()        { return *(int *)((char *)this + 0x28); }   // +0x28 ?
        int   &field2C()        { return *(int *)((char *)this + 0x2C); }   // +0x2C ?
        int   &field30()        { return *(int *)((char *)this + 0x30); }   // +0x30 ?
        int   &field34()        { return *(int *)((char *)this + 0x34); }   // +0x34 ?
        int   &field38()        { return *(int *)((char *)this + 0x38); }   // +0x38 ?
        int   &field3C()        { return *(int *)((char *)this + 0x3C); }   // +0x3C ?
        int   &field40()        { return *(int *)((char *)this + 0x40); }   // +0x40 ?
        int   &field44()        { return *(int *)((char *)this + 0x44); }   // +0x44 ?
        int   &flag48()         { return *(int *)((char *)this + 0x48); }   // +0x48 ? busy (vf1C/vf20)
        int   &flag4C()         { return *(int *)((char *)this + 0x4C); }   // +0x4C ?
        int   &flag50()         { return *(int *)((char *)this + 0x50); }   // +0x50 ?
        int   &flag54()         { return *(int *)((char *)this + 0x54); }   // +0x54 ?
        // lib::StaticArray<SceneBgWork::LayoutUnit,128> (element size 0x44, storage at +0x78)
        void *&layoutsVftable() { return *(void **)((char *)this + 0x68); } // +0x68
        void *&layoutsData()    { return *(void **)((char *)this + 0x6C); } // +0x6C
        int   &layoutsCount()   { return *(int *)((char *)this + 0x70); }   // +0x70
        int   &layoutsCapacity(){ return *(int *)((char *)this + 0x74); }   // +0x74
        void  *layoutsStorage() { return (char *)this + 0x78; }             // +0x78

        char raw[0x22B8];
    };

    // Predicate applied by FUN_00c2a000 to every rigid body of every layout object (vftable 0x016A3754).
    struct PredicateRigidBodyBase {
        virtual undefined4 *vf00(byte flags);    // 00C17C70 slot 0x0 (scalar deleting destructor)
        virtual void vf04(int *rigidBodyRef) = 0;  // slot 0x4: apply to one rigid body
    };
    // Box predicates: +0x4 / +0x8 point to the min / max corner (x, y, z).
    struct DisableHitByRange : public PredicateRigidBodyBase {  // vftable 0x016A3E2C
        virtual undefined4 *vf00(byte flags);    // 00C29F00 slot 0x0
        virtual void vf04(int *rigidBodyRef);    // 00C29AD0 slot 0x4
        float *&minPoint() { return *(float **)((char *)this + 0x4); }  // +0x4
        float *&maxPoint() { return *(float **)((char *)this + 0x8); }  // +0x8
        char storage04[8];  // +0x4..+0xB, read through the accessors
    };
    struct EnableHitByRange : public PredicateRigidBodyBase {  // vftable 0x016A3E38
        virtual undefined4 *vf00(byte flags);    // 00C29F20 slot 0x0
        virtual void vf04(int *rigidBodyRef);    // 00C29B80 slot 0x4
        float *&minPoint() { return *(float **)((char *)this + 0x4); }  // +0x4
        float *&maxPoint() { return *(float **)((char *)this + 0x8); }  // +0x8
        char storage04[8];
    };
    // Axis predicates: +0x4 / +0x8 hold the min / max coordinate.
    struct DisableHitByRangeX : public PredicateRigidBodyBase {  // vftable 0x016A3E44
        virtual undefined4 *vf00(byte flags);    // 00C29F40 slot 0x0
        virtual void vf04(int *rigidBodyRef);    // 00C29C30 slot 0x4
        float &minValue() { return *(float *)((char *)this + 0x4); }  // +0x4
        float &maxValue() { return *(float *)((char *)this + 0x8); }  // +0x8
        char storage04[8];
    };
    struct EnableHitByRangeX : public PredicateRigidBodyBase {  // vftable 0x016A3E50
        virtual undefined4 *vf00(byte flags);    // 00C29F60 slot 0x0
        virtual void vf04(int *rigidBodyRef);    // 00C29CA0 slot 0x4
        float &minValue() { return *(float *)((char *)this + 0x4); }
        float &maxValue() { return *(float *)((char *)this + 0x8); }
        char storage04[8];
    };
    struct DisableHitByRangeY : public PredicateRigidBodyBase {  // vftable 0x016A3E5C
        virtual undefined4 *vf00(byte flags);    // 00C29F80 slot 0x0
        virtual void vf04(int *rigidBodyRef);    // 00C29D10 slot 0x4
        float &minValue() { return *(float *)((char *)this + 0x4); }
        float &maxValue() { return *(float *)((char *)this + 0x8); }
        char storage04[8];
    };
    struct EnableHitByRangeY : public PredicateRigidBodyBase {  // vftable 0x016A3E68
        virtual undefined4 *vf00(byte flags);    // 00C29FA0 slot 0x0
        virtual void vf04(int *rigidBodyRef);    // 00C29D80 slot 0x4
        float &minValue() { return *(float *)((char *)this + 0x4); }
        float &maxValue() { return *(float *)((char *)this + 0x8); }
        char storage04[8];
    };
    struct DisableHitByRangeZ : public PredicateRigidBodyBase {  // vftable 0x016A3E74
        virtual undefined4 *vf00(byte flags);    // 00C29FC0 slot 0x0
        virtual void vf04(int *rigidBodyRef);    // 00C29DF0 slot 0x4
        float &minValue() { return *(float *)((char *)this + 0x4); }
        float &maxValue() { return *(float *)((char *)this + 0x8); }
        char storage04[8];
    };
    struct EnableHitByRangeZ : public PredicateRigidBodyBase {  // vftable 0x016A3E80
        virtual undefined4 *vf00(byte flags);    // 00C29FE0 slot 0x0
        virtual void vf04(int *rigidBodyRef);    // 00C29E60 slot 0x4
        float &minValue() { return *(float *)((char *)this + 0x4); }
        float &maxValue() { return *(float *)((char *)this + 0x8); }
        char storage04[8];
    };

    // Slot registered under id 0x3A by the ctor (FUN_00d89ec0(0x3a, slot)); vftable 0x016A3760.
    struct EntityDeletedSlot : public Slot {
        // Slot.h declares vf00() and vf18() with other prototypes; the binary's slot 0x0 is this
        // scalar deleting destructor and slot 0x18 takes 2 stack arguments (ret 8), so both are
        // declared here without `virtual`.
        undefined4 *vf00(byte flags);  // 00C2A350 slot 0x0
        virtual void vf10();  // 00C18320 slot 0x10  overrides Slot (empty)
        virtual void vf14();  // 00C18330 slot 0x14  overrides Slot (deletes itself)
        void vf18(undefined4 sender, int *entity);  // 00C29EB0 slot 0x18 (an entity was deleted)
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();  // 00C2A280 slot 0x0  overrides SceneBgManager (per-frame update)
    virtual void vf04();  // 00C181D0 slot 0x4  overrides SceneBgManager (start the 0.5 s wait)
    virtual void vf08(int * param_2);  // 00C2A0A0 slot 0x8  overrides SceneBgManager
    virtual void vf0C(int * param_2);  // 00C2A0E0 slot 0xC  overrides SceneBgManager
    virtual void vf10(int param_2);  // 00C2A110 slot 0x10  overrides SceneBgManager
    virtual undefined4 vf14(int * param_2);  // 00C2A1B0 slot 0x14  overrides SceneBgManager
    virtual void vf18(int * param_2);  // 00C2A140 slot 0x18  overrides SceneBgManager (load room layout)
    virtual undefined4 vf1C();  // 00C180C0 slot 0x1C  overrides SceneBgManager
    virtual undefined4 vf20();  // 00C180E0 slot 0x20  overrides SceneBgManager
    virtual void vf24();  // 00C18000 slot 0x24  overrides SceneBgManager (ret 8)
    virtual void vf28();  // 00C18030 slot 0x28  overrides SceneBgManager (ret 8)
    virtual void vf2C();  // 00C18060 slot 0x2C  overrides SceneBgManager (ret 8)
    virtual void vf30();  // 00C18090 slot 0x30  overrides SceneBgManager (ret 8)
    virtual void vf34();  // 00C17FD0 slot 0x34  overrides SceneBgManager
    virtual void vf38(int param_2);  // 00C2A220 slot 0x38  overrides SceneBgManager
    virtual void vf3C(int param_2);  // 00C2A250 slot 0x3C  overrides SceneBgManager
    virtual int vf40(undefined4 param_2);  // 00C17E40 slot 0x40  overrides SceneBgManager
    virtual void vf44(undefined4 param_2);  // 00C17E80 slot 0x44  overrides SceneBgManager
    virtual void vf48(undefined4 param_2);  // 00C17EB0 slot 0x48  overrides SceneBgManager
    virtual void vf4C(undefined4 param_2);  // 00C17EE0 slot 0x4C  overrides SceneBgManager
    virtual void vf50(undefined4 param_2);  // 00C17F10 slot 0x50  overrides SceneBgManager
    virtual void vf54(undefined4 param_2);  // 00C17F40 slot 0x54  overrides SceneBgManager
    virtual void vf58(undefined4 param_2);  // 00C17F70 slot 0x58  overrides SceneBgManager
    virtual void vf5C(int param_2);  // 00C17D60 slot 0x5C  overrides SceneBgManager
    virtual void vf60(int param_2);  // 00C17D90 slot 0x60  overrides SceneBgManager
    virtual void vf64(int param_2);  // 00C17E10 slot 0x64  overrides SceneBgManager
    virtual undefined4 vf68(int param_2);  // 00C17DC0 slot 0x68  overrides SceneBgManager
    virtual int vf6C();  // 00C18110 slot 0x6C  overrides SceneBgManager (total object count)
    virtual undefined4 vf70(int param_2);  // 00C18180 slot 0x70  overrides SceneBgManager (object by global index)
    virtual void vf74(undefined4 param_1, undefined4 param_2);  // 00C420F0 slot 0x74  (DisableHitByRange: float *min, float *max)
    virtual void vf78(undefined4 param_1, undefined4 param_2);  // 00C42120 slot 0x78  (DisableHitByRangeX: float min, float max)
    virtual void vf7C(undefined4 param_1, undefined4 param_2);  // 00C42150 slot 0x7C  (DisableHitByRangeY)
    virtual void vf80(undefined4 param_1, undefined4 param_2);  // 00C42180 slot 0x80  (DisableHitByRangeZ)
    virtual void vf84(undefined4 param_1, undefined4 param_2);  // 00C421B0 slot 0x84  (EnableHitByRange)
    virtual void vf88(undefined4 param_1, undefined4 param_2);  // 00C421E0 slot 0x88  (EnableHitByRangeX)
    virtual void vf8C(undefined4 param_1, undefined4 param_2);  // 00C42210 slot 0x8C  (EnableHitByRangeY)
    virtual void vf90(undefined4 param_1, undefined4 param_2);  // 00C42240 slot 0x90  (EnableHitByRangeZ)
    void vf94(int id, undefined4 arg1, undefined4 arg2);  // 00C17D20 slot 0x94 (base: undefined vf94(); ret 0xC)
    virtual void vf98();  // 00C181C0 slot 0x98  overrides SceneBgManager (empty, ret 4)
    virtual undefined4 * vf9C(byte param_2);  // 00C62910 slot 0x9C  overrides SceneBgManager (scalar deleting dtor)

    // non-virtual members
    SceneBgManagerImplement(void *heap);  // 00C625E0 (FILEMAP: EntityDeletedSlot::EntityDeletedSlot)

    // fields (absolute offsets from object start)
    void        *&heap()              { return *(void **)((char *)this + 0x4); }        // +0x04
    SceneBgWork  *works()             { return (SceneBgWork *)((char *)this + 0x8); }   // +0x08 SceneBgWork[8]
    int          &waitActive()        { return *(int *)((char *)this + 0x115C8); }      // +0x115C8 set by vf04
    int          &waitDone()          { return *(int *)((char *)this + 0x115CC); }      // +0x115CC set by vf00
    float        &waitTimer()         { return *(float *)((char *)this + 0x115D0); }    // +0x115D0 seconds
    EntityDeletedSlot *&entityDeletedSlot() { return *(EntityDeletedSlot **)((char *)this + 0x115D4); } // +0x115D4
};
