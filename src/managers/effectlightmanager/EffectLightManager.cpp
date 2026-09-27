// src/managers/effectlightmanager/EffectLightManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "EffectLightManager.h"

// Imports / intrinsics
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile *addend);
extern "C" long __cdecl _InterlockedCompareExchange(long volatile *destination, long exchange, long comparand);
#pragma intrinsic(_InterlockedCompareExchange)

// Debug message formats passed to the (empty) debug print FUN_00dd5650.
extern char DAT_016d8c60[];  // "EffectLightManager::setEffectLight effect light work exceeded its limit."
extern char DAT_016d8cb0[];  // (same text)
extern char DAT_016d8d00[];  // (same text)
extern char DAT_016d8d50[];  // (same text)
extern undefined4 DAT_01be8e40;  // global object passed in ECX to FUN_00a4d630
// Per-type light apply functions, indexed by light+0x2C (cLightApplyScale ...).
extern void (*PTR_cLightApplyScale_7_016d6e94[])(int light);

namespace EffectLightManager_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
typedef void (*DebugPrintFn)(const char *format, ...);

const unsigned int kOne = 0x3F800000;  // 1.0f

}  // namespace EffectLightManager_p1

// 00EC6FA0  FUN_00ec6fa0  size=80  [callgraph]
// Resets an effect light: dwords 0..0x11 = 0, dwords 0x12..0x17 = 1.0f.
void __fastcall FUN_00ec6fa0(undefined4 *light)
{
    using EffectLightManager_p1::kOne;
    light[0] = 0;
    light[1] = 0;
    light[2] = 0;
    light[3] = 0;
    light[4] = 0;
    light[5] = 0;
    light[6] = 0;
    light[7] = 0;
    light[8] = 0;
    light[9] = 0;
    light[10] = 0;
    light[0xC] = 0;
    light[0xB] = 0;
    light[0xD] = 0;
    light[0xF] = 0;
    light[0xE] = 0;
    light[0x10] = 0;
    light[0x11] = 0;
    light[0x12] = kOne;
    light[0x13] = kOne;
    light[0x14] = kOne;
    light[0x15] = kOne;
    light[0x16] = kOne;
    light[0x17] = kOne;
}

// 00EC6FF0  FUN_00ec6ff0  size=57  [callgraph]
// Applies every registered light through the function table indexed by its type (+0x2C).
void __fastcall FUN_00ec6ff0(int self)
{
    if (FUN_00a4d630((int)&DAT_01be8e40) != 0) {
        int count = *(int *)(self + 0x3000);
        if (0 < count) {
            int light = self;
            do {
                PTR_cLightApplyScale_7_016d6e94[*(int *)(light + 0x2C)](light);
                light = light + 0x60;
                count--;
            } while (count != 0);
        }
    }
}

// 00EC7030  FUN_00ec7030  size=56  [callgraph]
// Atomically takes the light count, leaving 0; returns the old count.
int __fastcall FUN_00ec7030(int self)
{
    long volatile *count = (long volatile *)(self + 0x3000);
    long old;
    bool exchanged;
    do {
        old = *count;
        exchanged = _InterlockedCompareExchange(count, 0, old) == old;
    } while (!exchanged);
    return old;
}

// 00EC7070  EffectLightManager::setEffectLight  size=109  [class]
undefined4 EffectLightManager::setEffectLight(void *source)
{
    typedef EffectLightManager_p1::DebugPrintFn DebugPrintFn;

    if (0x7F < lightCount()) {
        ((DebugPrintFn)FUN_00dd5650)(DAT_016d8c60);
        return 0;
    }
    long index = InterlockedIncrement(&lightCount()) - 1;
    if (0x7F < index) {
        ((DebugPrintFn)FUN_00dd5650)(DAT_016d8cb0);
        return 0;
    }
    FID_conflict__memcpy(light(index), source, 0x60);
    return 1;
}

// 00EC70E0  EffectLightManager::setEffectLight_2  size=89  [class]
// Reserves a light slot, resets it and returns it (0 when the work is full).
undefined4 EffectLightManager::setEffectLight_2()
{
    typedef EffectLightManager_p1::DebugPrintFn DebugPrintFn;

    if (0x7F < lightCount()) {
        ((DebugPrintFn)FUN_00dd5650)(DAT_016d8d00);
        return 0;
    }
    long index = InterlockedIncrement(&lightCount()) - 1;
    if (0x7F < index) {
        ((DebugPrintFn)FUN_00dd5650)(DAT_016d8d50);
        return 0;
    }
    undefined4 *slot = (undefined4 *)light(index);
    FUN_00ec6fa0(slot);
    return (undefined4)slot;  // ECX survives FUN_00ec6fa0
}
