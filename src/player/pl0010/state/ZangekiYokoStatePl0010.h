// REFINED
// ZangekiYokoStatePl0010 -- Raiden's (Pl0010) horizontal blade-mode cut state ("zangeki yoko").
// Fields below 0x30 belong to StateMachineNode. The four nested Slot classes are the event
// slots this state registers (first hit, datsu target creation, kogekko ball, cut-target entry).
#pragma once
#include "StateMachineNode.h"
#include "Slot.h"
#include "../../../../include/ghidra_types.h"
#include "../../../../include/auto/fwd.h"

struct ZangekiYokoStatePl0010 : public StateMachineNode {
    // Event slots (vftable of each derives from Slot::vftable 0x0163B780).
    // vf18 of every slot takes two stack arguments (ret 8): (unused, sender object).
    struct SlashFirstHitSlot : public Slot {
        virtual undefined4 *vf00(byte flags);                    // 00B91BE0 slot 0x0  scalar deleting destructor
        virtual void vf10();                                     // 00B83AC0 slot 0x10
        virtual void vf14();                                     // 00B83AD0 slot 0x14
        virtual void vf18(undefined4 arg, undefined4 *sender);   // 00B91AD0 slot 0x18
    };
    struct DatsuTargetCreateSlot : public Slot {
        virtual undefined4 *vf00(byte flags);                    // 00B91C00 slot 0x0  scalar deleting destructor
        virtual void vf10();                                     // 00B83AF0 slot 0x10
        virtual void vf14();                                     // 00B83B00 slot 0x14
        virtual void vf18(undefined4 arg, undefined4 *sender);   // 00B91B20 slot 0x18
    };
    struct SlashKogekkoBallSlot : public Slot {
        virtual undefined4 *vf00(byte flags);                    // 00B91C20 slot 0x0  scalar deleting destructor
        virtual void vf10();                                     // 00B83B20 slot 0x10
        virtual void vf14();                                     // 00B83B30 slot 0x14
        virtual void vf18(undefined4 arg, undefined4 *sender);   // 00B91B70 slot 0x18
    };
    struct EntryCutTargetSlot : public Slot {
        virtual undefined4 *vf00(byte flags);                    // 00B91C40 slot 0x0  scalar deleting destructor
        virtual void vf10();                                     // 00B83B50 slot 0x10
        virtual void vf14();                                     // 00B83B60 slot 0x14
        virtual void vf18(undefined4 arg, undefined4 *sender);   // 00B83B70 slot 0x18
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B83C40 slot 0x0  overrides StateMachineNode (type descriptor)
    virtual undefined4 * vf04(byte param_2);  // 00B91C60 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BE5C40 slot 0x8  overrides StateMachineNode
    virtual void SafeCheck(undefined4 * param_2);  // 00B83BC0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE6000 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BB8850 slot 0x14  overrides StateMachineNode (leave)
    virtual undefined4 vf18(undefined4 param_2);  // 00B83BD0 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB88D0 slot 0x20  overrides StateMachineNode
    virtual bool vf24(undefined4 param_1);  // 00B83BE0 slot 0x24  overrides StateMachineNode
    // non-virtual members
    ZangekiYokoStatePl0010(undefined4 param_2);  // 00B83C00 (argument forwarded to StateMachineNode)

    // fields (absolute offsets from the object start)
    int        &motion30()      { return *(int *)((char *)this + 0x30); }          // +0x30 cut animation id (FUN_00bbc710); blended out on exit / checked on leave
    int        &motion34()      { return *(int *)((char *)this + 0x34); }          // +0x34 motion30 + 1, blended out on exit
    float      &frameA()        { return *(float *)((char *)this + 0x38); }        // +0x38 frame 11.0
    int        &frameAReached() { return *(int *)((char *)this + 0x3C); }          // +0x3C
    float      &frameB()        { return *(float *)((char *)this + 0x40); }        // +0x40 frame 45.0
    int        &frameBReached() { return *(int *)((char *)this + 0x44); }          // +0x44
    int        &latch80()       { return *(int *)((char *)this + 0x48); }          // +0x48 button 0x80 seen (Pl0000+0xCFC)
    int        &latch40()       { return *(int *)((char *)this + 0x4C); }          // +0x4C button 0x40 seen
    int        &latch20()       { return *(int *)((char *)this + 0x50); }          // +0x50 button 0x20 seen
    int        &field58()       { return *(int *)((char *)this + 0x58); }          // +0x58 cleared on enter
    float      *cutTarget()     { return (float *)((char *)this + 0x60); }         // +0x60 float[4] cut segment (FUN_00b92af0)
    float      &cutFrame()      { return *(float *)((char *)this + 0x70); }        // +0x70 frame 5.0 for FUN_00bd43f0
    int        &cutMode()       { return *(int *)((char *)this + 0x74); }          // +0x74 passed to FUN_00bd43f0
    int        &flag78()        { return *(int *)((char *)this + 0x78); }          // +0x78 enables FUN_00b8bd70 on exit
    int        &flag7C()        { return *(int *)((char *)this + 0x7C); }          // +0x7C
    int        &counter80()     { return *(int *)((char *)this + 0x80); }          // +0x80 countdown (clamped at 0)
    int        &flag84()        { return *(int *)((char *)this + 0x84); }          // +0x84
    int        &firstHit()      { return *(int *)((char *)this + 0x88); }          // +0x88 set from context+0x3E0
    float      &delayTimer()    { return *(float *)((char *)this + 0x8C); }        // +0x8C counts down by the frame delta
    int        &delayDone()     { return *(int *)((char *)this + 0x90); }          // +0x90
    undefined4 &handle94()      { return *(undefined4 *)((char *)this + 0x94); }   // +0x94 object handle (FUN_00a7c930 / FUN_00a81330)
    undefined4 &handle98()      { return *(undefined4 *)((char *)this + 0x98); }   // +0x98 object handle
    int        *&object9C()     { return *(int **)((char *)this + 0x9C); }         // +0x9C SlashFirstHitSlot (list 0x13)
    int        *&objectA0()     { return *(int **)((char *)this + 0xA0); }         // +0xA0 DatsuTargetCreateSlot (list 0x14)
    int        *&objectA4()     { return *(int **)((char *)this + 0xA4); }         // +0xA4 SlashKogekkoBallSlot (list 0x1D)
    int        *&objectA8()     { return *(int **)((char *)this + 0xA8); }         // +0xA8 EntryCutTargetSlot (list 0x12)
    int        &vf214Count()    { return *(int *)((char *)this + 0xB0); }          // +0xB0 number of player vf214 calls
    int        &vf214Pending()  { return *(int *)((char *)this + 0xB4); }          // +0xB4 raised by EntryCutTargetSlot flag
    int        &flagB8()        { return *(int *)((char *)this + 0xB8); }          // +0xB8
};
