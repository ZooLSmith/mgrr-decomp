// REFINED
// cCkMsgDataManager -- loads the codec ("ckmsg") message data.  Six slots (Entry) each hold one
// message archive (.dat / .dtt pair, optional waveinfo .bxm files) read through the file loader
// at 0x01DDA840; FUN_00cf7e60 is the per-frame load state machine, FUN_00cf75a0 starts the reads
// of one slot and FUN_00cca3f0 sets the slot up once they are done.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cCkMsgDataManager {
    // One message slot (0xD4 bytes, array at +0xC).
    struct Entry {
        int  state;             // +0x00 -1 = idle, 0 = start reading (FUN_00cf75a0), 1 = reading
        int  field04;           // +0x04 non-zero forces a reload
        int  phase;             // +0x08 loaded phase (0xFFF = none)
        int  language;          // +0x0C loaded language (-1 = none)
        int  requestPhase;      // +0x10 phase to load (0xFFF = none)
        int  requestLanguage;   // +0x14 language to load (-1 = none)
        int  datHandle;         // +0x18 file loader request of the .dat
        int  datData;           // +0x1C
        int  dttHandle;         // +0x20 file loader request of the .dtt
        int  dttData;           // +0x24
        int  waveHandle;        // +0x28 file loader request of "waveinfo_*.bxm"
        int  waveData;          // +0x2C
        int  wave2Handle;       // +0x30 file loader request of the second waveinfo file (FUN_00cadd10)
        int  wave2Data;         // +0x34
        char msgCtrl[0x40];     // +0x38 cMsgCtrl (set up by FUN_00cb18b0)
        int  wtbData;           // +0x78 "ckmsg_p%03x.wtb"
        int  pageNoList;        // +0x7C "pageno_list_p%03x.bxm"
        int  codecRad;          // +0x80 "Codec_p%03x.rad"
        int  heapSlot;          // +0x84 index into the manager's heap table (+0xF14)
        int  kind;              // +0x88 1 = named by FUN_00ce1670, 2 = weapon messages, 3 = codec, else per phase
        int  kindParam;         // +0x8C argument of FUN_00ce1670 (kind 1)
        char readInfo[0x40];    // +0x90 cMsgCtrl (reset by setupReadInfoDLC)
        int  fieldD0;           // +0xD0
    };
    // Heap table entry (0xC bytes, array at +0xF14, indexed by Entry::heapSlot).
    struct HeapSlot {
        int datHeap;            // +0x0 heap of the .dat / waveinfo reads
        int dttHeap;            // +0x4 heap of the .dtt read
        int heap2;              // +0x8 second heap argument of every read
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 vf00(byte flags);  // 00CF7580 slot 0x0  scalar deleting destructor
    // non-virtual members
    // 00CCA390: resets the read-info message control of `entry` unless it is a special kind (1..3).
    // __thiscall (ECX = the manager, unused; 2 stack arguments, the second unused).
    static void setupReadInfoDLC(int entry, int reload);
    ~cCkMsgDataManager();  // 00CE14C0

    // fields (absolute offsets from object start)
    int      &field08()           { return *(int *)((char *)this + 0x8); }          // +0x008 cleared when loading completes
    Entry    *entries()           { return (Entry *)((char *)this + 0xC); }         // +0x00C Entry[6]
    int      &loadStage()         { return *(int *)((char *)this + 0x504); }        // +0x504 0 = release, 1 = load, 2 = done
    int      &loadIndex()         { return *(int *)((char *)this + 0x50C); }        // +0x50C entry being processed
    void     *heap520()           { return (char *)this + 0x520; }                  // +0x520 embedded Hw::cHeap
    void     *heap990()           { return (char *)this + 0x990; }                  // +0x990 embedded Hw::cHeap
    char     *weaponDatPath()     { return (char *)this + 0xE0C; }                  // +0xE0C char[0x80]
    char     *weaponDttPath()     { return (char *)this + 0xE8C; }                  // +0xE8C char[0x80]
    int      &weaponDatDlc()      { return *(int *)((char *)this + 0xF0C); }        // +0xF0C DLC number of the weapon .dat (0 = base)
    int      &weaponDttDlc()      { return *(int *)((char *)this + 0xF10); }        // +0xF10 DLC number of the weapon .dtt (0 = base)
    HeapSlot *heapSlots()         { return (HeapSlot *)((char *)this + 0xF14); }    // +0xF14 HeapSlot[]
};
