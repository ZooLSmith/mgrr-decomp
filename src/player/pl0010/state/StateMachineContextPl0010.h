// REFINED
// StateMachineContextPl0010 -- the context object shared by all Raiden (Pl0010) state-machine
// nodes.  Nodes receive it as their context argument and reach the player through owner()
// (+0xC).  It owns the free-run activity table (activities(), +0xC0: an
// lib::AllocatedArray<FreeRunActivity::Info> of 30 entries, 0x70 bytes each), two cEspControler
// objects, several object handles (two "Pl001c" objects, the zangeki effect-disk and camera
// dummies) and five heap buffers.  Fields below 0xC (+4, +8) belong to StateMachineContext.
#pragma once
#include "StateMachineContext.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct StateMachineContextPl0010 : public StateMachineContext {
    // Heap buffer header used at +0x348, +0x4AC, +0x594, +0x5A8 and +0x5BC: allocated by the
    // constructor from the allocator DAT_01b7bd48 (FUN_00dd29b0), freed with FUN_00dd48d0.
    struct Buffer {
        int data;      // +0x0 allocated block (0 = none)
        int capacity;  // +0x4 element count of the block
        int count;     // +0x8 elements in use
        int owned;     // +0xC 1 = data is freed by the destructor
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00BD3610 slot 0x0  overrides StateMachineContext (returns the type record DAT_01be9ef4)
    virtual undefined4 * vf04(byte flags);  // 00BE6600 slot 0x4  overrides StateMachineContext (scalar deleting destructor)
    // non-virtual members
    ~StateMachineContextPl0010();  // 00BD3340
    StateMachineContextPl0010(undefined4 baseArg, undefined4 owner);  // 00BF1BA0

    // fields (absolute byte offsets from the start of the object)
    void  *&owner()          { return *(void **)((char *)this + 0xC); }      // +0xC the player (checked against Pl0000 by the nodes)
    float &field10()         { return *(float *)((char *)this + 0x10); }     // +0x10
    int   &field14()         { return *(int *)((char *)this + 0x14); }       // +0x14
    float *vec20()           { return (float *)((char *)this + 0x20); }      // +0x20 float[4]
    int   &field34()         { return *(int *)((char *)this + 0x34); }       // +0x34
    float &savedGearCharge()   { return *(float *)((char *)this + 0x38); }   // +0x38 DashStatePl0010 gear charge, kept between dashes
    float &savedGearCooldown() { return *(float *)((char *)this + 0x3C); }   // +0x3C DashStatePl0010 gear cooldown
    int   &savedGearLevel()    { return *(int *)((char *)this + 0x40); }     // +0x40 DashStatePl0010 gear level (2 = reset by RunStatePl0010)
    float *vec50()           { return (float *)((char *)this + 0x50); }      // +0x50 float[4]
    float *vec60()           { return (float *)((char *)this + 0x60); }      // +0x60 float[4]
    float &field70()         { return *(float *)((char *)this + 0x70); }     // +0x70 cleared with the saved dash gear
    float &field74()         { return *(float *)((char *)this + 0x74); }     // +0x74
    int   &upperMotionsStarted() { return *(int *)((char *)this + 0x78); }   // +0x78 DashStatePl0010 upper-body motions started
    int   &field7C()         { return *(int *)((char *)this + 0x7C); }       // +0x7C non-zero: ShortCliffOverJump does not chain into a second cliff jump
    int   &field80()         { return *(int *)((char *)this + 0x80); }       // +0x80
    float &field8C()         { return *(float *)((char *)this + 0x8C); }     // +0x8C
    char  *object90()        { return (char *)this + 0x90; }                 // +0x90 embedded object (constructed by FUN_00a7f290(0))
    int   &activities()      { return *(int *)((char *)this + 0xC0); }       // +0xC0 lib::AllocatedArray<FreeRunActivity::Info> * (data pointer at +4, entries 0x70 bytes)
    int   &fieldC4()         { return *(int *)((char *)this + 0xC4); }       // +0xC4
    int   &fieldC8()         { return *(int *)((char *)this + 0xC8); }       // +0xC8
    int   &fieldCC()         { return *(int *)((char *)this + 0xCC); }       // +0xCC
    float &fieldD0()         { return *(float *)((char *)this + 0xD0); }     // +0xD0
    int   &fieldD8()         { return *(int *)((char *)this + 0xD8); }       // +0xD8
    int   &fieldDC()         { return *(int *)((char *)this + 0xDC); }       // +0xDC
    int   &fieldE0()         { return *(int *)((char *)this + 0xE0); }       // +0xE0
    int   &fieldE4()         { return *(int *)((char *)this + 0xE4); }       // +0xE4
    int   &fieldE8()         { return *(int *)((char *)this + 0xE8); }       // +0xE8
    int   &fieldEC()         { return *(int *)((char *)this + 0xEC); }       // +0xEC
    int   &fieldF0()         { return *(int *)((char *)this + 0xF0); }       // +0xF0
    int   &fieldF4()         { return *(int *)((char *)this + 0xF4); }       // +0xF4
    int   &fieldF8()         { return *(int *)((char *)this + 0xF8); }       // +0xF8
    int   &fieldFC()         { return *(int *)((char *)this + 0xFC); }       // +0xFC
    int   &field100()        { return *(int *)((char *)this + 0x100); }      // +0x100
    int   &field110()        { return *(int *)((char *)this + 0x110); }      // +0x110
    float &field180()        { return *(float *)((char *)this + 0x180); }    // +0x180 0.0 at construction
    float &field184()        { return *(float *)((char *)this + 0x184); }    // +0x184 180.0 at construction
    int   &field188()        { return *(int *)((char *)this + 0x188); }      // +0x188
    float &field18C()        { return *(float *)((char *)this + 0x18C); }    // +0x18C 4.0 at construction
    cEspControler *espControler190() { return (cEspControler *)((char *)this + 0x190); }  // +0x190 embedded cEspControler
    cEspControler *espControler240() { return (cEspControler *)((char *)this + 0x240); }  // +0x240 embedded cEspControler
    int   &field2F0()        { return *(int *)((char *)this + 0x2F0); }      // +0x2F0
    int   &field2F4()        { return *(int *)((char *)this + 0x2F4); }      // +0x2F4
    int   &field2F8()        { return *(int *)((char *)this + 0x2F8); }      // +0x2F8
    int   &field2FC()        { return *(int *)((char *)this + 0x2FC); }      // +0x2FC
    int   &field304()        { return *(int *)((char *)this + 0x304); }      // +0x304
    int   &field308()        { return *(int *)((char *)this + 0x308); }      // +0x308
    int   &field310()        { return *(int *)((char *)this + 0x310); }      // +0x310
    int   &field318()        { return *(int *)((char *)this + 0x318); }      // +0x318
    int   &field31C()        { return *(int *)((char *)this + 0x31C); }      // +0x31C
    undefined4 *handle320()  { return (undefined4 *)((char *)this + 0x320); } // +0x320 object handle (FUN_00a7c930 / FUN_00a7c950)
    float &field324()        { return *(float *)((char *)this + 0x324); }    // +0x324
    float &field328()        { return *(float *)((char *)this + 0x328); }    // +0x328
    int   &field32C()        { return *(int *)((char *)this + 0x32C); }      // +0x32C 1 at construction
    int   &field334()        { return *(int *)((char *)this + 0x334); }      // +0x334
    undefined4 *handle338()  { return (undefined4 *)((char *)this + 0x338); } // +0x338 object handle
    float &field33C()        { return *(float *)((char *)this + 0x33C); }    // +0x33C 36.0 at construction
    float &field340()        { return *(float *)((char *)this + 0x340); }    // +0x340 185.0 at construction
    int   &field344()        { return *(int *)((char *)this + 0x344); }      // +0x344
    Buffer &buffer348()      { return *(Buffer *)((char *)this + 0x348); }   // +0x348 buffer: 8 x 4 bytes
    float *vec360()          { return (float *)((char *)this + 0x360); }     // +0x360 float[4] (0,0,0,1) at construction
    int   &field370()        { return *(int *)((char *)this + 0x370); }      // +0x370
    float &field374()        { return *(float *)((char *)this + 0x374); }    // +0x374
    float &field378()        { return *(float *)((char *)this + 0x378); }    // +0x378
    float &field37C()        { return *(float *)((char *)this + 0x37C); }    // +0x37C
    float &field380()        { return *(float *)((char *)this + 0x380); }    // +0x380
    undefined4 *pl001cHandles() { return (undefined4 *)((char *)this + 0x384); } // +0x384 object handle[2] of the two "Pl001c" objects
    int   &pl001cObject0()   { return *(int *)((char *)this + 0x38C); }      // +0x38C object of pl001cHandles()[0] (type record DAT_01b353e0) or 0
    int   &pl001cObject1()   { return *(int *)((char *)this + 0x390); }      // +0x390 object of pl001cHandles()[1] or 0
    float *vec3A0()          { return (float *)((char *)this + 0x3A0); }     // +0x3A0 float[4] (0,0,0,1) at construction
    float *vec3B0()          { return (float *)((char *)this + 0x3B0); }     // +0x3B0 float[4] (0,0,0,1) at construction
    float &field3C0()        { return *(float *)((char *)this + 0x3C0); }    // +0x3C0
    int   &field3C8()        { return *(int *)((char *)this + 0x3C8); }      // +0x3C8
    float &field3CC()        { return *(float *)((char *)this + 0x3CC); }    // +0x3CC
    float *vec3D0()          { return (float *)((char *)this + 0x3D0); }     // +0x3D0 float[4] (1,1,1,1) at construction
    int   &field3E0()        { return *(int *)((char *)this + 0x3E0); }      // +0x3E0
    int   &field3E4()        { return *(int *)((char *)this + 0x3E4); }      // +0x3E4
    int   &field3E8()        { return *(int *)((char *)this + 0x3E8); }      // +0x3E8
    int   &field3EC()        { return *(int *)((char *)this + 0x3EC); }      // +0x3EC
    int   &field3F0()        { return *(int *)((char *)this + 0x3F0); }      // +0x3F0
    int   &field3F4()        { return *(int *)((char *)this + 0x3F4); }      // +0x3F4
    float &field3F8()        { return *(float *)((char *)this + 0x3F8); }    // +0x3F8
    int   &field3FC()        { return *(int *)((char *)this + 0x3FC); }      // +0x3FC
    float &field400()        { return *(float *)((char *)this + 0x400); }    // +0x400
    undefined4 *handle404()  { return (undefined4 *)((char *)this + 0x404); } // +0x404 object handle
    int   &field408()        { return *(int *)((char *)this + 0x408); }      // +0x408 -1 at construction
    int   &field40C()        { return *(int *)((char *)this + 0x40C); }      // +0x40C -1 at construction
    float *vec410()          { return (float *)((char *)this + 0x410); }     // +0x410 float[4] (0,0,0,1) at construction
    float *vec420()          { return (float *)((char *)this + 0x420); }     // +0x420 float[4] (0,0,0,1) at construction
    float *vec430()          { return (float *)((char *)this + 0x430); }     // +0x430 float[4] (0,0,0,1) at construction
    float &field470()        { return *(float *)((char *)this + 0x470); }    // +0x470 0.5235988 (30 degrees) at construction
    float &field474()        { return *(float *)((char *)this + 0x474); }    // +0x474 0.5235988 (30 degrees) at construction
    int   &field478()        { return *(int *)((char *)this + 0x478); }      // +0x478 1 at construction
    int   &field47C()        { return *(int *)((char *)this + 0x47C); }      // +0x47C
    int   &field480()        { return *(int *)((char *)this + 0x480); }      // +0x480
    int   &field484()        { return *(int *)((char *)this + 0x484); }      // +0x484
    float *vec490()          { return (float *)((char *)this + 0x490); }     // +0x490 float[4] (0,0,0,1) at construction
    int   &field4A0()        { return *(int *)((char *)this + 0x4A0); }      // +0x4A0
    int   &field4A8()        { return *(int *)((char *)this + 0x4A8); }      // +0x4A8
    Buffer &buffer4AC()      { return *(Buffer *)((char *)this + 0x4AC); }   // +0x4AC buffer (not allocated by the constructor)
    undefined4 *effectDiskDummyHandle() { return (undefined4 *)((char *)this + 0x4BC); } // +0x4BC handle of the "zangekiEffectDiskDummy" object
    undefined4 *cameraDummyHandle()     { return (undefined4 *)((char *)this + 0x4C0); } // +0x4C0 handle of the "zangekiCameraDummy" object
    float *vec4E0()          { return (float *)((char *)this + 0x4E0); }     // +0x4E0 float[4] (0,0,0,1) at construction
    float *vec4F0()          { return (float *)((char *)this + 0x4F0); }     // +0x4F0 float[4] (0,0,0,1) at construction
    int   &field500()        { return *(int *)((char *)this + 0x500); }      // +0x500
    float *vec510()          { return (float *)((char *)this + 0x510); }     // +0x510 float[4] (0,0,0,1) at construction
    int   &field520()        { return *(int *)((char *)this + 0x520); }      // +0x520
    int   &field528()        { return *(int *)((char *)this + 0x528); }      // +0x528
    int   &field52C()        { return *(int *)((char *)this + 0x52C); }      // +0x52C
    undefined4 *handle534()  { return (undefined4 *)((char *)this + 0x534); } // +0x534 object handle
    float &field560()        { return *(float *)((char *)this + 0x560); }    // +0x560 1.6 at construction
    float &field574()        { return *(float *)((char *)this + 0x574); }    // +0x574 2.6 at construction
    float *vec580()          { return (float *)((char *)this + 0x580); }     // +0x580 float[4] (0,0,0,1) at construction
    int   &field590()        { return *(int *)((char *)this + 0x590); }      // +0x590
    Buffer &buffer594()      { return *(Buffer *)((char *)this + 0x594); }   // +0x594 buffer: 0x20 x 0x70 bytes
    int   &field5A4()        { return *(int *)((char *)this + 0x5A4); }      // +0x5A4
    Buffer &buffer5A8()      { return *(Buffer *)((char *)this + 0x5A8); }   // +0x5A8 buffer: 0x20 x 0x70 bytes
    int   &field5B8()        { return *(int *)((char *)this + 0x5B8); }      // +0x5B8
    Buffer &buffer5BC()      { return *(Buffer *)((char *)this + 0x5BC); }   // +0x5BC buffer: 8 x 0x70 bytes
    float &field5CC()        { return *(float *)((char *)this + 0x5CC); }    // +0x5CC -1.0 at construction
    float &field5D0()        { return *(float *)((char *)this + 0x5D0); }    // +0x5D0 0.3 at construction
    int   &field5D4()        { return *(int *)((char *)this + 0x5D4); }      // +0x5D4
    float &field5D8()        { return *(float *)((char *)this + 0x5D8); }    // +0x5D8
    int   &field5DC()        { return *(int *)((char *)this + 0x5DC); }      // +0x5DC
};
