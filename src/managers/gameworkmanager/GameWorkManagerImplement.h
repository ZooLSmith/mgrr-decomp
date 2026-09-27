// REFINED
// GameWorkManagerImplement -- the game's "work" (result / statistics) manager singleton
// (DAT_01bea184, 0x110 bytes). It gathers per-frame counters (hits, kills, points, ...) that the
// game bumps through the vf40..vf70 slots, and folds them once per frame (vf0C) into the global
// statistic blocks: total play record at 0x01B76140, current chapter record at 0x01B76200.
// The virtual slot names stay vfXX because they override the pure virtuals of GameWorkManager.
#pragma once
#include "GameWorkManager.h"
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct GameWorkManagerImplement : public GameWorkManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte param_2);  // 00C42B20 slot 0x0  overrides GameWorkManager (scalar deleting destructor)
    virtual void vf04();  // 00C42B40 slot 0x4  overrides GameWorkManager (reset all fields)
    virtual void vf08();  // 00C1B060 slot 0x8  overrides GameWorkManager
    virtual void vf0C(undefined4 param_2);  // 00C2C580 slot 0xC  overrides GameWorkManager (per-frame update, param = delta time as float bits)
    virtual void vf10(undefined4 param_2, int param_3);  // 00C2C6E0 slot 0x10  overrides GameWorkManager (begin chapter: name, force reset)
    virtual void vf14();  // 00C2C7D0 slot 0x14  overrides GameWorkManager (end chapter)
    virtual void vf18();  // 00C1B540 slot 0x18  overrides GameWorkManager
    virtual void vf1C();  // 00C1B550 slot 0x1C  overrides GameWorkManager
    virtual undefined4 vf20();  // 00C1B580 slot 0x20  overrides GameWorkManager
    virtual undefined4 vf24();  // 00C1B590 slot 0x24  overrides GameWorkManager
    virtual void vf28();  // 00C1B5A0 slot 0x28  overrides GameWorkManager
    virtual int vf2C();  // 00C1B5D0 slot 0x2C  overrides GameWorkManager
    virtual int vf30();  // 00C1B610 slot 0x30  overrides GameWorkManager
    virtual int vf34(int param_2);  // 00C1B650 slot 0x34  overrides GameWorkManager
    virtual int vf38();  // 00C1B6E0 slot 0x38  overrides GameWorkManager
    virtual undefined * vf3C(int param_2);  // 00C1B100 slot 0x3C  overrides GameWorkManager (add points, clamped)
    virtual void vf40();  // 00C1B8B0 slot 0x40  overrides GameWorkManager
    virtual int vf44(int param_2, int param_3);  // 00C1B7F0 slot 0x44  overrides GameWorkManager
    virtual void vf48();  // 00C1B730 slot 0x48  overrides GameWorkManager
    virtual void vf4C();  // 00C1B780 slot 0x4C  overrides GameWorkManager
    virtual void vf50();  // 00C1B740 slot 0x50  overrides GameWorkManager
    virtual void vf54();  // 00C1B750 slot 0x54  overrides GameWorkManager
    virtual void vf58();  // 00C1B760 slot 0x58  overrides GameWorkManager
    virtual void vf5C();  // 00C1B770 slot 0x5C  overrides GameWorkManager
    virtual void vf60(int param_2);  // 00C1B790 slot 0x60  overrides GameWorkManager
    virtual void vf64();  // 00C1B7B0 slot 0x64  overrides GameWorkManager
    virtual void vf68();  // 00C1B7C0 slot 0x68  overrides GameWorkManager
    virtual void vf6C();  // 00C1B7D0 slot 0x6C  overrides GameWorkManager
    virtual void vf70();  // 00C1B7E0 slot 0x70  overrides GameWorkManager
    virtual undefined4 vf74();  // 00C42A90 slot 0x74  overrides GameWorkManager
    virtual undefined4 vf78();  // 00C42AA0 slot 0x78  overrides GameWorkManager
    virtual undefined4 vf7C();  // 00C1B8C0 slot 0x7C  overrides GameWorkManager
    virtual undefined4 vf80();  // 00C42AB0 slot 0x80  overrides GameWorkManager
    virtual undefined4 vf84();  // 00C1B8D0 slot 0x84  overrides GameWorkManager
    virtual undefined4 vf88();  // 00C1B8E0 slot 0x88  overrides GameWorkManager
    virtual undefined4 vf8C();  // 00C1B8F0 slot 0x8C  overrides GameWorkManager
    virtual undefined4 vf90();  // 00C1B900 slot 0x90  overrides GameWorkManager
    virtual undefined4 vf94();  // 00C1B910 slot 0x94  overrides GameWorkManager
    virtual float10 vf98();  // 00C1B920 slot 0x98  overrides GameWorkManager (total play time)
    virtual void vf9C(undefined4 param_2);  // 00C42AD0 slot 0x9C  overrides GameWorkManager
    virtual undefined4 vfA0();  // 00C42AE0 slot 0xA0  overrides GameWorkManager
    virtual undefined4 vfA4();  // 00C42AF0 slot 0xA4  overrides GameWorkManager
    virtual undefined4 vfA8();  // 00C42B00 slot 0xA8  overrides GameWorkManager
    virtual int vfAC();  // 00C42B10 slot 0xAC  overrides GameWorkManager (address of chapterRecord)
    virtual void vfB0();  // 00C1B930 slot 0xB0  overrides GameWorkManager (clear chapterRecord)

    // non-virtual members
    // 00C50480 (was listed as ~GameWorkManagerImplement): allocates the 0x110-byte singleton from
    // `heap`, initialises it and stores it in DAT_01bea184. Returns true on success.
    static bool create(int *heap);       // 00C50480
    static bool createThunk(int *heap);  // 00C50500 (jmp 00C50480)

    // fields (absolute byte offsets from the object start)
    unsigned int &appliedFlag40()  { return *(unsigned int *)((char *)this + 0x04); }  // +0x04 last applied state of DAT_01bea090 bit 6
    int   &value08()          { return *(int *)((char *)this + 0x08); }            // +0x08 vf9C / vfA0
    int   &comboPending()     { return *(int *)((char *)this + 0x0C); }            // +0x0C set to 1 (atomically) by vf34/vf38/vf44
    int   &comboCount()       { return *(int *)((char *)this + 0x10); }            // +0x10 incremented by vf34, read by vf74
    int   &counter14()        { return *(int *)((char *)this + 0x14); }            // +0x14 incremented by vf38, read by vf78
    int   &lastComboKey()     { return *(int *)((char *)this + 0x18); }            // +0x18 last key passed to vf34
    int   &lastComboCount()   { return *(int *)((char *)this + 0x1C); }            // +0x1C comboCount when the combo ended
    int   &comboHitTotal()    { return *(int *)((char *)this + 0x20); }            // +0x20 sum of hitCount while the combo runs (vf7C)
    float &comboTimer()       { return *(float *)((char *)this + 0x24); }          // +0x24 combo window; vf80 = (timer > 0)
    int   &flag28()           { return *(int *)((char *)this + 0x28); }            // +0x28 set by vf2C
    int   &flag2C()           { return *(int *)((char *)this + 0x2C); }            // +0x2C set by vf30
    int   &flag30()           { return *(int *)((char *)this + 0x30); }            // +0x30 set by vf44 (category 0..2)
    int   &counter34()        { return *(int *)((char *)this + 0x34); }            // +0x34 vf64
    int   *categoryCounts()   { return (int *)((char *)this + 0x38); }             // +0x38 int[12], vf44 category
    int   &counter68()        { return *(int *)((char *)this + 0x68); }            // +0x68 vf68
    int   &counter6C()        { return *(int *)((char *)this + 0x6C); }            // +0x6C vf48
    int   &points()           { return *(int *)((char *)this + 0x70); }            // +0x70 vf3C (clamped 0..9999999)
    int   &kindCount74()      { return *(int *)((char *)this + 0x74); }            // +0x74 vf44 kind 0
    int   &kindCount78()      { return *(int *)((char *)this + 0x78); }            // +0x78 vf44 kind 1
    int   &kindCount7C()      { return *(int *)((char *)this + 0x7C); }            // +0x7C vf44 kind 2
    int   &kindCount80()      { return *(int *)((char *)this + 0x80); }            // +0x80 vf44 kind 3, vf5C
    int   &counter84()        { return *(int *)((char *)this + 0x84); }            // +0x84 vf4C
    int   &hitCount()         { return *(int *)((char *)this + 0x88); }            // +0x88 every vf44
    int   &counter8C()        { return *(int *)((char *)this + 0x8C); }            // +0x8C vf40
    int   &counter90()        { return *(int *)((char *)this + 0x90); }            // +0x90 vf50
    int   *indexedCounts()    { return (int *)((char *)this + 0x94); }             // +0x94 int[5], vf60
    int   &counterA8()        { return *(int *)((char *)this + 0xA8); }            // +0xA8 vf6C
    int   &counterAC()        { return *(int *)((char *)this + 0xAC); }            // +0xAC vf70
    int   &counterB0()        { return *(int *)((char *)this + 0xB0); }            // +0xB0 vf54
    int   &counterB4()        { return *(int *)((char *)this + 0xB4); }            // +0xB4 vf58, vf44 kind 4
    int   &streakB8()         { return *(int *)((char *)this + 0xB8); }            // +0xB8 counter8C sum inside the 60 s window
    float &streakTimer()      { return *(float *)((char *)this + 0xBC); }          // +0xBC 60 s window
    int   &chapterActiveC0()  { return *(int *)((char *)this + 0xC0); }            // +0xC0 copy of DAT_01b77de0
    unsigned int *chapterRecord() { return (unsigned int *)((char *)this + 0xD0); } // +0xD0 12 dwords, copy of DAT_01b76200..
    int   &chapterValue100()  { return *(int *)((char *)this + 0x100); }           // +0x100 vfA4 (copy of DAT_01b76430)
    int   &chapterValue104()  { return *(int *)((char *)this + 0x104); }           // +0x104 vfA8 (copy of DAT_01b7642c)
};
