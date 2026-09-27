// src/managers/cmodeldatamanager/cModelDataManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cModelDataManager.h"

// kernel32
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);

// Data referenced by this part
extern unsigned int DAT_01b7b398;     // root of the file-id -> entry tree
extern unsigned int DAT_01b7b394;     // most recently added entry (list tail)
extern int DAT_01b7b390;              // number of entries
extern int DAT_01b7b4e8;              // non-zero: the critical section below is initialised
extern unsigned char DAT_01b7b4d0[];  // CRITICAL_SECTION guarding the tree
extern unsigned int DAT_0189ef28;     // entry pool (0x1F0-byte slots)
extern int DAT_0189ef2c;              // number of pool slots
extern unsigned char DAT_01b7c1c0[];  // heap passed to FUN_00a163b0
extern unsigned char DAT_0165cad0[];  // debug message: no free model data slot
extern unsigned char DAT_0165ca88[];  // debug message: model data setup failed

namespace cModelDataManager_p1 {

// __cdecl call of a function (symbol or address); used for __thiscall / __fastcall callees whose
// ECX the decompiler did not show ("ECX: ?") and for mismatching prototypes.
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

const unsigned int kEntrySize = 0x1f0;

} // namespace cModelDataManager_p1

// 00A198D0  FUN_00a198d0  size=73  [callgraph]
// __thiscall: releases `entry` if it lies inside the pool of `self` (+0x18 base, +0x1C count).
undefined4 FUN_00a198d0(int self, uint entry)
{
    using namespace cModelDataManager_p1;
    unsigned int pool;

    pool = *(unsigned int *)(self + 0x18);
    if (pool == 0) {
        return 0;
    }
    if (pool <= entry && entry < *(int *)(self + 0x1c) * kEntrySize + pool) {
        cdeclcall<undefined4>(FUN_00a19870, 0); /* ECX: ? (likely entry; destructor without delete) */
        cdeclcall<void>(FUN_00a0cf50, entry); /* ECX: ? */
        return 1;
    }
    return 0;
}

// 00A19920  cModelDataManager::EntryModelData  size=348  [class]
int cModelDataManager::EntryModelData(unsigned int fileId, undefined4 arg)
{
    using namespace cModelDataManager_p1;
    int result;
    unsigned int entry;
    unsigned int slotIndex;

    entry = DAT_01b7b398;
    if (DAT_01b7b4e8 != 0) {
        EnterCriticalSection(DAT_01b7b4d0);
        entry = DAT_01b7b398;
    }
    // look the id up in the tree (+0x8 / +0xC children, key at +0x1C8)
    while (entry != 0) {
        if (*(unsigned int *)(entry + 0x1c8) == fileId) goto done;
        if (*(unsigned int *)(entry + 0x1c8) < fileId) {
            entry = *(unsigned int *)(entry + 8);
        }
        else {
            entry = *(unsigned int *)(entry + 0xc);
        }
    }
    if (DAT_0189ef28 == 0 || (result = cdeclcall<int>(FUN_00a0cfa0) /* ECX: ? */, result == 0) ||
        (entry = cdeclcall<unsigned int>(FUN_00a19620) /* ECX: ? */, entry == 0)) {
        cdeclcall<void>(FUN_00dd5650, DAT_0165cad0);
    }
    else {
        if (entry < DAT_0189ef28 || DAT_0189ef2c * kEntrySize + DAT_0189ef28 <= entry) {
            slotIndex = 0xffffffff;
        }
        else {
            slotIndex = (entry - DAT_0189ef28) / kEntrySize;
        }
        result = cdeclcall<int>(FUN_00a163b0, entry + 0x10, fileId, arg, slotIndex, DAT_01b7c1c0);
        if (result != 0) {
            *(unsigned int *)(entry + 0x1c8) = fileId;
            if (DAT_01b7b394 != 0) {
                *(unsigned int *)(DAT_01b7b394 + 0x1cc) = entry;
            }
            *(undefined4 *)(entry + 0x1cc) = 0;
            *(unsigned int *)(entry + 0x1d0) = DAT_01b7b394;
            DAT_01b7b390 = DAT_01b7b390 + 1;
            DAT_01b7b394 = entry;
            FUN_00a14200((int *)&DAT_01b7b398, (int *)entry, (code *)0x00A0C790 /* LAB_00a0c790 */);
done:
            if (DAT_01b7b4e8 != 0) {
                LeaveCriticalSection(DAT_01b7b4d0);
            }
            return entry + 0x10;
        }
        cdeclcall<void>(FUN_00dd5650, DAT_0165ca88);
        cdeclcall<undefined4>(FUN_00a198d0, entry); /* ECX: ? */
    }
    if (DAT_01b7b4e8 != 0) {
        LeaveCriticalSection(DAT_01b7b4d0);
    }
    return 0;
}
