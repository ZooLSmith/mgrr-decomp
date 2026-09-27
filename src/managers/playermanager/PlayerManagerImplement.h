// REFINED
// PlayerManagerImplement -- the game's PlayerManager: keeps the handle(s) of the player object,
// the player state carried between phases (HP, fuel, points, item counts, a 5-dword setup record)
// and five texture slots (Hw::cTexture, 0x1C bytes each) loaded from the object ids at 0x018A9770.
#pragma once
#include "PlayerManager.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct PlayerManagerImplement : public PlayerManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 00C4CF00 slot 0x0  overrides PlayerManager (scalar deleting destructor)
    virtual void vf04();  // 00C238E0 slot 0x4  overrides PlayerManager (per frame: scale timers, copy player position)
    virtual void vf08();  // 00C41040 slot 0x8  overrides PlayerManager (phase start: spawn the player)
    virtual void vf0C();  // 00C410C0 slot 0xC  overrides PlayerManager (phase end: save state, release the player)
    virtual void vf10();  // 00C13520 slot 0x10  overrides PlayerManager (cPlayerPosInfo::setPlayerPos)
    virtual void vf14(undefined4 value);  // 00C4CE10 slot 0x14  overrides PlayerManager (sets value08)
    virtual undefined4 vf18();  // 00C4CE20 slot 0x18  overrides PlayerManager (returns value08)
    // slot 0x1C: the machine code takes 3 stack arguments; the PlayerManager auto prototype has none
    virtual void vf1C(float scale, int resetFrames, int applyFrames);  // 00C4CE30 slot 0x1C  overrides PlayerManager
    virtual int vf20();  // 00C4CDF0 slot 0x20  overrides PlayerManager (returns &playerPos)
    virtual undefined4 vf24(int index);  // 00C23B50 slot 0x24  overrides PlayerManager
    virtual undefined4 vf28(int index);  // 00C23B00 slot 0x28  overrides PlayerManager
    virtual int vf2C();  // 00C4CE00 slot 0x2C  overrides PlayerManager (returns &playerData)
    virtual void vf30();  // 00C23BA0 slot 0x30  overrides PlayerManager
    virtual void vf34();  // 00C239F0 slot 0x34  overrides PlayerManager (calls slot 0xFC of every player)
    virtual void vf38();  // 00C23A50 slot 0x38  overrides PlayerManager (calls slot 0x100 of every player)
    virtual void vf3C();  // 00C23AB0 slot 0x3C  overrides PlayerManager
    virtual void vf40();  // 00C41210 slot 0x40  overrides PlayerManager (spawns "Balkan")
    virtual void vf44();  // 00C13550 slot 0x44  overrides PlayerManager
    virtual void vf48();  // 00C13580 slot 0x48  overrides PlayerManager
    virtual void vf4C();  // 00C13590 slot 0x4C  overrides PlayerManager
    virtual void vf50();  // 00C135B0 slot 0x50  overrides PlayerManager
    virtual void vf54(undefined4 value);  // 00C135C0 slot 0x54  overrides PlayerManager (sets setup0)
    virtual undefined4 vf58();  // 00C135D0 slot 0x58  overrides PlayerManager (returns setup0)
    virtual undefined4 vf5C();  // 00C138E0 slot 0x5C  overrides PlayerManager
    virtual void vf60(undefined4 value);  // 00C135E0 slot 0x60  overrides PlayerManager (sets setup1)
    virtual void vf64(undefined4 value);  // 00C135F0 slot 0x64  overrides PlayerManager (sets setup2)
    virtual undefined4 vf68();  // 00C13600 slot 0x68  overrides PlayerManager (returns setup1)
    virtual undefined4 vf6C();  // 00C13610 slot 0x6C  overrides PlayerManager (returns setup2)
    virtual undefined4 vf70();  // 00C13900 slot 0x70  overrides PlayerManager
    virtual void vf74(undefined4 value);  // 00C13620 slot 0x74  overrides PlayerManager (sets setup3)
    virtual undefined4 vf78();  // 00C13630 slot 0x78  overrides PlayerManager (returns setup3)
    virtual void vf7C();  // 00C13690 slot 0x7C  overrides PlayerManager (publishes the state to globals)
    virtual void vf80();  // 00C13760 slot 0x80  overrides PlayerManager
    virtual void vf84();  // 00C13800 slot 0x84  overrides PlayerManager (sets skipRestore)
    virtual undefined4 vf88();  // 00C13810 slot 0x88  overrides PlayerManager (++countD4, max 10)
    virtual undefined4 vf8C();  // 00C13830 slot 0x8C  overrides PlayerManager (--countD4, min 0)
    virtual undefined4 vf90();  // 00C13850 slot 0x90  overrides PlayerManager (++countD8, max 5)
    virtual undefined4 vf94();  // 00C13870 slot 0x94  overrides PlayerManager (--countD8, min 0)
    virtual undefined4 vf98();  // 00C13890 slot 0x98  overrides PlayerManager (returns countD4)
    virtual undefined4 vf9C();  // 00C138A0 slot 0x9C  overrides PlayerManager (returns countD8)
    virtual bool vfA0();  // 00C23BF0 slot 0xA0  overrides PlayerManager (player HP > 0)
    virtual undefined * vfA4(int amount);  // 00C13780 slot 0xA4  overrides PlayerManager (atomic points += amount)
    virtual undefined4 vfA8();  // 00C137F0 slot 0xA8  overrides PlayerManager (returns points)
    virtual bool vfAC(uint mask);  // 00C138B0 slot 0xAC  overrides PlayerManager (setupFlags & mask)
    virtual void vfB0(uint mask);  // 00C138D0 slot 0xB0  overrides PlayerManager (setupFlags |= mask)
    // non-virtual members
    ~PlayerManagerImplement();  // 00C4CEB0

    // fields (absolute offsets)
    unsigned int &value08()      { return *(unsigned int *)((char *)this + 0x8); }   // +0x8   vf14 / vf18
    char         *textureSlot(int i) { return (char *)this + 0xC + i * 0x1C; }     // +0xC   Hw::cTexture[5], 0x1C each
    float        &scaleValue()   { return *(float *)((char *)this + 0x98); }        // +0x98  applied through FUN_00e03a70 (slots 0..2)
    int          &resetTimer()   { return *(int *)((char *)this + 0x9C); }          // +0x9C  frames until the scale returns to 1.0
    int          &applyTimer()   { return *(int *)((char *)this + 0xA0); }          // +0xA0  frames until scaleValue is applied
    unsigned int *playerPos()    { return (unsigned int *)((char *)this + 0xB0); }  // +0xB0  4 dwords copied from player+0x40
    char         *playerData()   { return (char *)this + 0xC0; }                    // +0xC0  getDataAtSet output (object 0x1000E)
    int          &savedHp()      { return *(int *)((char *)this + 0xCC); }          // +0xCC  player+0x870 (FUN_00b7c970)
    int          &savedD0()      { return *(int *)((char *)this + 0xD0); }          // +0xD0  FUN_00bda020 result, restored via FUN_00bc3100
    int          &countD4()      { return *(int *)((char *)this + 0xD4); }          // +0xD4  0..10
    int          &countD8()      { return *(int *)((char *)this + 0xD8); }          // +0xD8  0..5
    int          &points()       { return *(int *)((char *)this + 0xDC); }          // +0xDC  clamped 0..9999999
    int          *setupRecord()  { return (int *)((char *)this + 0xE0); }           // +0xE0  5 dwords (FUN_009c7e10 / FUN_009c69c0)
    unsigned int &setup0()       { return *(unsigned int *)((char *)this + 0xE0); } // +0xE0
    unsigned int &setup1()       { return *(unsigned int *)((char *)this + 0xE4); } // +0xE4
    unsigned int &setup2()       { return *(unsigned int *)((char *)this + 0xE8); } // +0xE8
    unsigned int &setup3()       { return *(unsigned int *)((char *)this + 0xEC); } // +0xEC
    unsigned int &setupFlags()   { return *(unsigned int *)((char *)this + 0xF0); } // +0xF0
    int          &skipRestore()  { return *(int *)((char *)this + 0xF4); }          // +0xF4  nonzero: do not restore HP/D0 on spawn
    int         *&handleArray()  { return *(int **)((char *)this + 0xF8); }         // +0xF8  [0] vftable, [1] data (handles), [2] count
};
