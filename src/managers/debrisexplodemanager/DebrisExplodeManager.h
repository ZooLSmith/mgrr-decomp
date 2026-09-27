// REFINED
// DebrisExplodeManager -- no RTTI; reconstructed from addHandle (instance: DAT_01b36a60).
// Twelve keys at +0x0 and twelve groups of 0xB0 bytes at +0x40, each starting with a
// DebrisHandleList.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct DebrisExplodeManager {
    enum { kGroupCount = 12, kGroupSize = 0xB0 };

    undefined4 addHandle(int *handle, undefined4 param);  // 00942E00

    int &key(int i)                     { return *(int *)((char *)this + i * 4); }                           // +0x0  int[12]
    void *handleList(unsigned int g)    { return (char *)this + 0x40 + g * kGroupSize; }                     // +0x40 DebrisHandleList
    int *&groupList(unsigned int g)     { return *(int **)((char *)this + 0x50 + g * kGroupSize); }          // +0x50 (+4 / +8 tested for room)
    int &groupKey(unsigned int g)       { return *(int *)((char *)this + 0x54 + g * kGroupSize); }           // +0x54 owner key (+0x83C of the owner)
    int &groupBusy(unsigned int g)      { return *(int *)((char *)this + 0xA4 + g * kGroupSize); }           // +0xA4
    int &groupKeyMatched(unsigned int g){ return *(int *)((char *)this + 0xB8 + g * kGroupSize); }           // +0xB8 set when groupKey is one of key()
};
