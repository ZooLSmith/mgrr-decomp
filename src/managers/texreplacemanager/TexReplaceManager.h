// REFINED
// TexReplaceManager -- texture replacement table (no RTTI / no vftable).
// Layout (0xBD4 bytes):
//   +0x000  64 replacement entries, 0x24 bytes each: key, Hw::cTexture (0x1C bytes), extra value
//   +0x900   8 group entries, 0x20 bytes each: group key, Hw::cTexture (0x1C bytes)
//   +0xA00  13 fixed slots, 0x24 bytes each (indexed by the low byte of the key): key, Hw::cTexture, extra
// Unused entries hold the key 0xFFFFFFFF.
#pragma once
#include "ghidra_types.h"
#include "auto/fwd.h"

struct TexReplaceManager {
    // --- replacement entries (index 0..63), stride 0x24 ---
    unsigned int &entryKey(int i)     { return *(unsigned int *)((char *)this + i * 0x24); }         // +0x0
    char         *entryTexture(int i) { return (char *)this + 0x4 + i * 0x24; }                      // +0x4   Hw::cTexture
    unsigned int &entryExtra(int i)   { return *(unsigned int *)((char *)this + 0x20 + i * 0x24); }  // +0x20

    // --- group entries (index 0..7), stride 0x20 ---
    unsigned int &groupKey(int i)     { return *(unsigned int *)((char *)this + 0x900 + i * 0x20); } // +0x900
    char         *groupTexture(int i) { return (char *)this + 0x904 + i * 0x20; }                    // +0x904 Hw::cTexture

    // --- fixed slots (index 0..12), stride 0x24; slot 11 is the default returned by get() ---
    unsigned int &slotKey(int i)      { return *(unsigned int *)((char *)this + 0xA00 + i * 0x24); } // +0xA00
    char         *slotTexture(int i)  { return (char *)this + 0xA04 + i * 0x24; }                    // +0xA04  Hw::cTexture
    unsigned int &slotExtra(int i)    { return *(unsigned int *)((char *)this + 0xA20 + i * 0x24); } // +0xA20

    // Looks up the texture for *key; stores its address in *outTexture and rewrites *key
    // (to the entry's extra value or to the low byte of the key). Returns 0 when a group key is unknown.
    unsigned int get(void **outTexture, unsigned int *key);  // 00FCC340
    // Stores (key, texture data, extra) into the first free or matching replacement entry.
    void set(unsigned int key, const char *texture, unsigned int extra);  // 00FCDD20
    // Frees the replacement entry holding key.
    void reset(unsigned int key);  // 00FCDDE0
};
