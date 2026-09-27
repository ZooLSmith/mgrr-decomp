// REFINED
// ScenarioManagerImplement -- runs the per-room scenario objects (up to 8 room slots created from the
// room-creator table at 0x018A1438) and the current phase object (created by onStartupRoom through the
// phase-object factory returned by FUN_00d44eb0). Owns the ScenarioRegionManagerImplement singleton
// (DAT_01be9a34). The ScenarioManager singleton pointer is DAT_01be9a30.
//
// Parameter lists of vf1C, vf7C, vf80 and vf84 are taken from the machine code; the Ghidra prototypes in
// ScenarioManager.h declare them without arguments.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "ScenarioManager.h"

struct ScenarioManagerImplement : public ScenarioManager {
    // One of the 8 room slots at +0x74.
    struct RoomSlot {
        int *room;   // room scenario object (+0x08 room number, +0x0C its creator-table entry)
        int active;  // set to 1 once the room object's start virtual has run
    };
    // One of the entries of the 0x138-byte record array at +0x28 (16 allocated by the constructor).
    struct Entry {
        int id;
        char unknown04[0x134];
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();  // 00A6F440 slot 0x0  per-frame update
    virtual void vf04(int * roomNo, undefined4 createArg);  // 00A6D6F0 slot 0x4  create + start room object
    virtual void vf08(int * roomNo);  // 00A6D810 slot 0x8  end + delete room object
    virtual void vf0C(int * roomNo);  // 00A6D7D0 slot 0xC
    virtual void onStartupRoom(undefined4 roomNo);  // 00A6D8A0 slot 0x10  create phase object
    virtual void vf14();  // 00A6D910 slot 0x14  start phase object
    virtual void vf18(int roomNo);  // 00A6D940 slot 0x18  end + delete phase object
    virtual void vf1C(int roomNo, undefined4 arg1, undefined4 arg2);  // 00A6D990 slot 0x1C
    virtual void vf20(int roomNo, undefined4 arg);  // 00A6D9C0 slot 0x20
    virtual void vf24();  // 00A6D9F0 slot 0x24
    virtual void vf28();  // 00A6DA10 slot 0x28
    virtual void vf2C();  // 00A6DA30 slot 0x2C
    virtual undefined4 vf30();  // 00A6DA60 slot 0x30  started phase object or 0
    virtual bool vf34();  // 00A6DA80 slot 0x34
    virtual void vf38(uint flags);  // 00A6DA90 slot 0x38  enter event mode
    virtual void vf3C(uint flags);  // 00A6DAF0 slot 0x3C
    virtual void vf40(uint flags);  // 00A6DB40 slot 0x40  leave event mode
    virtual void vf44(undefined4 value);  // 00A7BBA0 slot 0x44  sets flagBC()
    virtual void vf48();  // 00A71A80 slot 0x48
    virtual void vf4C();  // 00A6F4F0 slot 0x4C
    virtual void vf50();  // 00A6F500 slot 0x50  (called with 1 argument by vf3C / vf7C / vf80 / vf84)
    virtual void vf54();  // 00A71A90 slot 0x54
    virtual void vf58(int id);  // 00A71AA0 slot 0x58
    virtual void vf5C();  // 00A6F510 slot 0x5C
    virtual void vf60();  // 00A6F520 slot 0x60
    virtual void vf64();  // 00A6F530 slot 0x64
    virtual int * vf68(int id);  // 00A6F560 slot 0x68  find entry by id
    virtual int * vf6C();  // 00A6F5A0 slot 0x6C  find entry for the current id
    virtual void vf70();  // 00A6F4E0 slot 0x70
    virtual void vf74();  // 00A6F5E0 slot 0x74
    virtual void vf78(undefined4 unused, uint flags);  // 00A6DBE0 slot 0x78
    virtual void vf7C(undefined4 color, undefined4 frames, int flag);  // 00A6DC30 slot 0x7C  fade and wait
    virtual void vf80(undefined4 color, undefined4 frames, int flag);  // 00A6DC90 slot 0x80  fade and wait
    virtual void vf84(undefined4 color, undefined4 frames, int flag);  // 00A6DCF0 slot 0x84  fade and wait
    virtual void vf88();  // 00A6DD50 slot 0x88
    virtual undefined4 vf8C();  // 00A6DD60 slot 0x8C
    virtual undefined4 vf90();  // 00A6DD70 slot 0x90
    virtual undefined4 vf94();  // 00A7BBB0 slot 0x94  eventActive()
    virtual int vf98();  // 00A7BBC0 slot 0x98  address of this+0x30
    virtual int vf9C(int roomNo);  // 00A6DB80 slot 0x9C  room object for a room number, or 0
    virtual undefined4 vfA0(undefined4 roomNo, undefined4 arg, undefined4 name);  // 00A73280 slot 0xA0
    virtual undefined4 vfA4(undefined4 roomNo, undefined4 name);  // 00A71A30 slot 0xA4
    virtual undefined4 * vfA8(byte flags);  // 00A7BCB0 slot 0xA8  scalar deleting destructor

    // non-virtual members
    ScenarioManagerImplement(undefined4 arg);  // 00A7BAB0
    ~ScenarioManagerImplement();  // 00A7BBD0

    // fields (absolute byte offsets)
    undefined4   &arg04()        { return *(undefined4 *)((char *)this + 0x04); }   // +0x04 constructor argument
    unsigned int &entryCount()   { return *(unsigned int *)((char *)this + 0x08); } // +0x08
    Entry       *&entries()      { return *(Entry **)((char *)this + 0x28); }       // +0x28 Entry[entryCount()]
    int          &eventActive()  { return *(int *)((char *)this + 0x2C); }          // +0x2C set by vf38, cleared by vf40
    RoomSlot     *roomSlots()    { return (RoomSlot *)((char *)this + 0x74); }      // +0x74 RoomSlot[8]
    int         *&phase()        { return *(int **)((char *)this + 0xB4); }         // +0xB4 phase object
    int          &phaseStarted() { return *(int *)((char *)this + 0xB8); }          // +0xB8
    int          &flagBC()       { return *(int *)((char *)this + 0xBC); }          // +0xBC 0 -> vf00 calls FUN_00cad2a0
};
