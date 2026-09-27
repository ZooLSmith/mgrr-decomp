// src/managers/cslowratemanager/cSlowRateManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cSlowRateManager.h"

// kernel32
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile *addend);

// Data referenced by this part
extern int DAT_01dd9160;              // the cSlowRateManager instance (0 before startup)
extern unsigned char DAT_016cc2d0[];  // debug message: unit allocation failed
extern unsigned char DAT_016cc124[];  // debug message: manager not created
extern unsigned char DAT_016cc398[];  // debug message: unit still referenced at cleanup

namespace cSlowRateManager_p1 {

// __cdecl call of a function (symbol or address); used for __thiscall / __fastcall callees whose
// ECX the decompiler did not show ("ECX: ?") and for mismatching prototypes.
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// Slow-rate unit (0x34 bytes).
struct SlowRateUnit {
    undefined4 field00;  // +0x00
    undefined4 type;     // +0x04 (3 on allocation; set by FUN_00e08640)
    long refCount;       // +0x08
    undefined4 rate0C;   // +0x0C 1.0f
    undefined4 rate10;   // +0x10 1.0f
    undefined4 rate14;   // +0x14 1.0f
    undefined4 rate18;   // +0x18 1.0f
    undefined4 field1C;  // +0x1C
    undefined4 field20;  // +0x20
    undefined4 field24;  // +0x24
    undefined4 prev;     // +0x28
    undefined4 next;     // +0x2C
    undefined4 field30;  // +0x30
};

const unsigned int kUnitSize = 0x34;
const unsigned int kAllocUnit = 0x00E06230;  // cSlowRateManager::allocUnit

} // namespace cSlowRateManager_p1

// 00E06230  cSlowRateManager::allocUnit  size=116  [class]
undefined4 *cSlowRateManager::allocUnit()
{
    using namespace cSlowRateManager_p1;
    SlowRateUnit *unit;

    if (pool() != 0) {
        unit = cdeclcall<SlowRateUnit *>(FUN_00e14fb0); /* ECX: ? (likely the pool) */
        if (unit != 0) {
            unit->field00 = 0;
            unit->prev = 0;
            unit->next = 0;
            unit->rate0C = 0x3f800000;
            unit->rate18 = 0x3f800000;
            unit->rate10 = 0x3f800000;
            unit->type = 3;
            unit->rate14 = 0x3f800000;
            unit->field20 = 0;
            unit->field24 = 0;
            unit->field1C = 0;
            unit->refCount = 0;
            InterlockedIncrement(&unit->refCount);
            unit->prev = 0;
            unit->next = 0;
            cdeclcall<void>(FUN_00e14350, unit); /* ECX: ? (links the unit) */
            return (undefined4 *)unit;
        }
    }
    cdeclcall<void>(FUN_00dd5650, DAT_016cc2d0);
    return (undefined4 *)0x0;
}

// 00E08640  FUN_00e08640  size=81  [callgraph]
// __thiscall: sets the type of the unit held in `*unitSlot`, allocating the unit first if needed.
undefined4 FUN_00e08640(int *unitSlot, undefined4 type)
{
    using namespace cSlowRateManager_p1;
    int unit;

    if (DAT_01dd9160 == 0) {
        cdeclcall<void>(FUN_00dd5650, DAT_016cc124);
    }
    else {
        if (*unitSlot != 0) {
            *(undefined4 *)(*unitSlot + 4) = type;
            return 1;
        }
        unit = cdeclcall<int>(kAllocUnit); /* ECX: ? (probably DAT_01dd9160) */
        *unitSlot = unit;
        if (unit != 0) {
            *(undefined4 *)(unit + 4) = type;
            return 1;
        }
    }
    return 0;
}

// 00E086A0  FUN_00e086a0  size=145  [callgraph]
// __thiscall on the cSlowRateManager: creates the unit pool and resets the rates.
undefined4 FUN_00e086a0(int self, undefined4 heap, float frameRate)
{
    using namespace cSlowRateManager_p1;
    int ok;

    ok = cdeclcall<int>(FUN_00e198a0, 0x400, heap); /* ECX: ? */
    if (ok == 0) {
        return 0;
    }
    *(undefined4 *)(self + 0x7c) = 0x3f800000;
    *(undefined4 *)(self + 0x90) = 0;
    *(undefined4 *)(self + 0x38) = 0;
    *(undefined4 *)(self + 0x80) = 0;
    *(undefined4 *)(self + 0x84) = 0;
    *(undefined4 *)(self + 0x8c) = 0;
    *(float *)(self + 0x88) = 1.0 / ((1.0 / frameRate) * 1000.0);
    *(undefined4 *)(self + 0x3c) = 0x3f800000;
    *(undefined4 *)(self + 0x44) = 0x3f800000;
    *(undefined4 *)(self + 0x40) = 0x3f800000;
    *(undefined4 *)(self + 0x48) = 0x3f800000;
    *(undefined4 *)(self + 0x4c) = 0x3f800000;
    *(undefined4 *)(self + 0x54) = 0x3f800000;
    *(undefined4 *)(self + 0x50) = 0x3f800000;
    *(undefined4 *)(self + 0x58) = 0x3f800000;
    *(undefined4 *)(self + 0x5c) = 0x3f800000;
    *(undefined4 *)(self + 100) = 0x3f800000;
    *(undefined4 *)(self + 0x60) = 0x3f800000;
    *(undefined4 *)(self + 0x68) = 0x3f800000;
    *(undefined4 *)(self + 0x6c) = 0x3f800000;
    *(undefined4 *)(self + 0x74) = 0x3f800000;
    *(undefined4 *)(self + 0x70) = 0x3f800000;
    *(undefined4 *)(self + 0x78) = 0x3f800000;
    return 1;
}

// 00E08740  cSlowRateManager::cleanup  size=163  [class]
void cSlowRateManager::cleanup()
{
    using namespace cSlowRateManager_p1;
    unsigned int *nextLink;
    unsigned int next;
    unsigned int base;
    unsigned int unit;

    next = unitList();
    while (unit = next, unit != 0) {
        nextLink = (unsigned int *)(unit + 0x2c);
        next = *nextLink;
        if (0 < *(int *)(unit + 8)) {
            cdeclcall<void>(FUN_00dd5650, DAT_016cc398);
        }
        // unlink
        if (*(int *)(unit + 0x28) == 0) {
            unitList() = *nextLink;
        }
        else {
            *(unsigned int *)(*(int *)(unit + 0x28) + 0x2c) = *nextLink;
        }
        if (*nextLink != 0) {
            *(undefined4 *)(*nextLink + 0x28) = *(undefined4 *)(unit + 0x28);
        }
        *(undefined4 *)(unit + 0x28) = 0;
        *nextLink = 0;
        // return it to the pool
        base = pool();
        if (base != 0 && base <= unit && unit < poolCount() * kUnitSize + base) {
            cdeclcall<void>(FUN_00e14f60, unit); /* ECX: ? */
        }
    }
    if (pool() != 0 && poolOwned() != 0) {
        cdeclcall<void>(FUN_00dd3d90, pool(), 0); /* ECX: ? */
    }
    field08() = 0;
    field0C() = 0;
    field10() = 0;
    poolOwned() = 0;
    pool() = 0;
    poolCount() = 0;
}
