// src/managers/cgimanager/cGIManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
// The raw file includes no class header (none was generated for cGIManager); the refined
// header written for this file declares the class.
#include "cGIManager.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern const char DAT_016eb200[];  // debug message printed when every slot is in use

namespace cGIManager_p1 {

// __cdecl call of a function (FUN_00dd5650 is a debug printf; functions.h declares it (void))
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

}  // namespace cGIManager_p1

// 00F956A0  cGIManager::setData  size=289  [class]
void cGIManager::setData(uint id, float *source, float *offset)
{
    using namespace cGIManager_p1;
    SetDataSource *desc = (SetDataSource *)source;
    updateCount() = updateCount() + 1;
    float *entry = desc->entries;
    uint written = 0;
    uint slotIndex = 0;
    uint *state = (uint *)slotStates();         // flags, id pairs
    float *slot = slotData() + 3;               // points at float 3 of the current slot
    float *entryWide = entry;                   // entries of 0x21 floats (type > 1)
    float *entryNarrow = entry;                 // entries of 0x1F floats (type <= 1)
    do {
        if ((state[0] & SLOT_USED) == 0) {
            state[0] = state[0] | SLOT_USED;
            state[1] = id;
            if (1 < desc->type) {
                entry = entryWide;
            }
            slot[-3] = entry[0];
            slot[-2] = entry[1];
            slot[-1] = entry[2];
            slot[0] = entry[3];
            float *src = entry + 4;
            float *dst = slot;
            for (int n = 0x1b; dst = dst + 1, n != 0; n = n - 1) {
                *dst = *src;
                src = src + 1;
            }
            slot[0x1c] = entry[0x1f];
            slot[0x1d] = entry[0x20];
            if (offset != 0) {
                slot[-2] = slot[-2] + offset[0];
                slot[-1] = offset[1] + slot[-1];
                slot[0] = offset[2] + slot[0];
            }
            if (desc->type < 2) {
                state[0] = state[0] & 0xbfffffff;  // ~SLOT_EXTENDED
                slot[0x1c] = 0.0f;
                slot[0x1d] = 0.0f;
            }
            else {
                state[0] = state[0] | SLOT_EXTENDED;
            }
            entryWide = entryWide + 0x21;
            entry = entryNarrow + 0x1f;
            written = written + 1;
            entryNarrow = entry;
            if (desc->count <= written) {
                return;
            }
        }
        slotIndex = slotIndex + 1;
        state = state + 2;
        slot = slot + 0x21;
        if (0x3ff < slotIndex) {
            cdeclcall<void>(FUN_00dd5650, DAT_016eb200);
            return;
        }
    } while (true);
}
