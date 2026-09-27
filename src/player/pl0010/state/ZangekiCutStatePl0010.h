// REFINED
// ZangekiCutStatePl0010 -- Raiden's (Pl0010) blade-mode "zangeki cut" state (factory case 0x31,
// object size 0x220). Fields below 0x30 belong to StateMachineNode. The four nested Slot classes
// are the event slots this state registers on enter (vf08) and removes on leave (vf20).
#pragma once
#include "StateMachineNode.h"
#include "Slot.h"
#include "../../../../include/ghidra_types.h"
#include "../../../../include/auto/fwd.h"

struct ZangekiCutStatePl0010 : public StateMachineNode {
    // Event slots (each vftable derives from Slot::vftable 0x0163B780).
    // vf18 of every slot takes two stack arguments (ret 8): (unused, sender object).
    struct SlashFirstHitSlot : public Slot {                     // vftable 0x016A1C90
        virtual undefined4 *vf00(byte flags);                    // 00B914E0 slot 0x0  scalar deleting destructor
        virtual void vf10();                                     // 00B82C90 slot 0x10
        virtual void vf14();                                     // 00B82CA0 slot 0x14
        virtual void vf18(undefined4 arg, undefined4 *sender);   // 00B913D0 slot 0x18
    };
    struct DatsuTargetCreateSlot : public Slot {                 // vftable 0x016A1CB0
        virtual undefined4 *vf00(byte flags);                    // 00B91500 slot 0x0  scalar deleting destructor
        virtual void vf10();                                     // 00B82CC0 slot 0x10
        virtual void vf14();                                     // 00B82CD0 slot 0x14
        virtual void vf18(undefined4 arg, undefined4 *sender);   // 00B91420 slot 0x18
    };
    struct SlashKogekkoBallSlot : public Slot {                  // vftable 0x016A1CD0
        virtual undefined4 *vf00(byte flags);                    // 00B91520 slot 0x0  scalar deleting destructor
        virtual void vf10();                                     // 00B82CF0 slot 0x10
        virtual void vf14();                                     // 00B82D00 slot 0x14
        virtual void vf18(undefined4 arg, undefined4 *sender);   // 00B91470 slot 0x18
    };
    struct EntryCutTargetSlot : public Slot {                    // vftable 0x016A1CF0
        virtual undefined4 *vf00(byte flags);                    // 00B91540 slot 0x0  scalar deleting destructor
        virtual void vf10();                                     // 00B82D20 slot 0x10
        virtual void vf14();                                     // 00B82D30 slot 0x14
        virtual void vf18(undefined4 arg, undefined4 *sender);   // 00B82D40 slot 0x18
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B91590 slot 0x0  overrides StateMachineNode (type descriptor)
    virtual undefined4 * vf04(byte param_2);  // 00B915B0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BE1500 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00B82D90 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE18E0 slot 0x10  overrides StateMachineNode (update)
    virtual void vf14(undefined4 * param_2);  // 00BB2B40 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B82DC0 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB2BC0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B82DD0 slot 0x24  overrides StateMachineNode
    // non-virtual members
    ZangekiCutStatePl0010(undefined4 param_2);  // 00B91560 (argument forwarded to StateMachineNode)

    // fields (absolute offsets from the object start)
    int        &motionId()      { return *(int *)((char *)this + 0x34); }          // +0x34 cut animation id (FUN_00bbc710)
    int        &motionId2()     { return *(int *)((char *)this + 0x38); }          // +0x38 motionId + 1
    float      &frameA()        { return *(float *)((char *)this + 0x3C); }        // +0x3C frame 11.0
    int        &frameAReached() { return *(int *)((char *)this + 0x40); }          // +0x40
    float      &frameB()        { return *(float *)((char *)this + 0x44); }        // +0x44 frame 35.0
    int        &frameBReached() { return *(int *)((char *)this + 0x48); }          // +0x48
    float      &frameC()        { return *(float *)((char *)this + 0x4C); }        // +0x4C frame 45.0
    int        &frameCReached() { return *(int *)((char *)this + 0x50); }          // +0x50
    int        &followUp()      { return *(int *)((char *)this + 0x54); }          // +0x54 follow-up choice (-1 = none, 0..3)
    float      *cutTarget()     { return (float *)((char *)this + 0x60); }         // +0x60 float[4] target position
    float      &cutFrame()      { return *(float *)((char *)this + 0x70); }        // +0x70 frame 5.0 for FUN_00bd43f0
    int        &cutMode()       { return *(int *)((char *)this + 0x74); }          // +0x74 passed to FUN_00bd43f0
    int        &field78()       { return *(int *)((char *)this + 0x78); }          // +0x78
    int        &flag7C()        { return *(int *)((char *)this + 0x7C); }          // +0x7C
    int        &flag80()        { return *(int *)((char *)this + 0x80); }          // +0x80
    undefined4 *object90()      { return (undefined4 *)((char *)this + 0x90); }    // +0x90 sub-object built by FUN_00410710
    int        &counter1D4()    { return *(int *)((char *)this + 0x1D4); }         // +0x1D4 countdown (clamped at 0)
    int        &flag1D8()       { return *(int *)((char *)this + 0x1D8); }         // +0x1D8
    int        &firstHit()      { return *(int *)((char *)this + 0x1DC); }         // +0x1DC set from context+0x3E0
    float      &rangeStart()    { return *(float *)((char *)this + 0x1E0); }       // +0x1E0 frame range start
    float      &rangeEnd()      { return *(float *)((char *)this + 0x1E4); }       // +0x1E4 frame range end
    float      &delayTimer()    { return *(float *)((char *)this + 0x1EC); }       // +0x1EC counts down by the frame delta
    int        &delayDone()     { return *(int *)((char *)this + 0x1F0); }         // +0x1F0
    void       *&slotFirstHit() { return *(void **)((char *)this + 0x1F4); }       // +0x1F4 SlashFirstHitSlot (list 0x13)
    void       *&slotDatsu()    { return *(void **)((char *)this + 0x1F8); }       // +0x1F8 DatsuTargetCreateSlot (list 0x14)
    void       *&slotKogekko()  { return *(void **)((char *)this + 0x1FC); }       // +0x1FC SlashKogekkoBallSlot (list 0x1D)
    void       *&slotEntryCut() { return *(void **)((char *)this + 0x200); }       // +0x200 EntryCutTargetSlot (list 0x12)
    int        &vf214Count()    { return *(int *)((char *)this + 0x208); }         // +0x208 number of player vf214 calls
    int        &vf214Pending()  { return *(int *)((char *)this + 0x20C); }         // +0x20C
    int        &flag210()       { return *(int *)((char *)this + 0x210); }         // +0x210
};
