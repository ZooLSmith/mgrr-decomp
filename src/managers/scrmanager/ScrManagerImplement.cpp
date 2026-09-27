// src/managers/scrmanager/ScrManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ScrManagerImplement.h"

// "部屋管理ワークがあふれました" (Shift-JIS: "the room-management work slots overflowed")
extern unsigned char DAT_016a3450[];

namespace ScrManagerImplement_p1 {

typedef ScrManagerImplement::Slot Slot;

// Slot helpers at 0x00935xxx (unit_00935480.cpp / cXmlBinary.cpp).  They are __thiscall with
// ECX = the slot; functions.h declares them with `this` as an ordinary first parameter.
inline int FindEntityByNameHash(Slot *slot, undefined4 nameHash)  // FUN_00935700
{
    return ((int (__thiscall *)(Slot *, undefined4))FUN_00935700)(slot, nameHash);
}
inline int SlotFind20(Slot *slot, undefined4 key)  // FUN_009356b0
{
    return ((int (__thiscall *)(Slot *, undefined4))FUN_009356b0)(slot, key);
}
inline void SlotCall14(Slot *slot, undefined4 a, undefined4 b)  // FUN_00936360
{
    ((void (__thiscall *)(Slot *, undefined4, undefined4))FUN_00936360)(slot, a, b);
}
inline int EntityAt(Slot *slot, int index)  // FUN_00935750: slot->entities()[index]
{
    return ((int (__thiscall *)(Slot *, int))FUN_00935750)(slot, index);
}
inline int SlotFindAC0(Slot *slot, undefined4 key)  // FUN_00935ac0
{
    return ((int (__thiscall *)(Slot *, undefined4))FUN_00935ac0)(slot, key);
}
inline int SlotTestB10(Slot *slot, undefined4 key)  // FUN_00935b10
{
    return ((int (__thiscall *)(Slot *, undefined4))FUN_00935b10)(slot, key);
}
inline void SlotCall760(Slot *slot, undefined4 a)  // FUN_00935760
{
    ((void (__thiscall *)(Slot *, undefined4))FUN_00935760)(slot, a);
}
inline void SlotCall7C0(Slot *slot, undefined4 a, undefined4 b)  // FUN_009357c0
{
    ((void (__thiscall *)(Slot *, undefined4, undefined4))FUN_009357c0)(slot, a, b);
}
inline int SlotQuery8E0(Slot *slot, undefined4 key, undefined4 *out)  // FUN_009358e0
{
    return ((int (__thiscall *)(Slot *, undefined4, undefined4 *))FUN_009358e0)(slot, key, out);
}
inline void SlotCall880(Slot *slot, undefined4 a, undefined4 b)  // FUN_00935880
{
    ((void (__thiscall *)(Slot *, undefined4, undefined4))FUN_00935880)(slot, a, b);
}
inline void SlotCall5F0(Slot *slot, int index)  // FUN_009355f0
{
    ((void (__thiscall *)(Slot *, int))FUN_009355f0)(slot, index);
}
inline void SlotCall5B0(Slot *slot, undefined4 a)  // FUN_009355b0
{
    ((void (__thiscall *)(Slot *, undefined4))FUN_009355b0)(slot, a);
}
inline void SlotCallD10(Slot *slot, undefined4 a, undefined4 b)  // FUN_00935d10
{
    ((void (__thiscall *)(Slot *, undefined4, undefined4))FUN_00935d10)(slot, a, b);
}
inline void SlotCallD90(Slot *slot, undefined4 a, undefined4 b)  // FUN_00935d90
{
    ((void (__thiscall *)(Slot *, undefined4, undefined4))FUN_00935d90)(slot, a, b);
}
inline void SlotCallDE0(Slot *slot, undefined4 a, undefined4 b)  // FUN_00935de0
{
    ((void (__thiscall *)(Slot *, undefined4, undefined4))FUN_00935de0)(slot, a, b);
}
// FUN_00936100: load the slot from the "scr" files (dat, wtb, wta, wtp, _colLink.bxm)
inline void LoadSlot(Slot *slot, int dat, int wtb, int wta, int wtp, int colLink,
                     undefined4 *fileTable, undefined4 requestId)
{
    ((void (__thiscall *)(Slot *, int, int, int, int, int, undefined4 *, undefined4))FUN_00936100)(
        slot, dat, wtb, wta, wtp, colLink, fileTable, requestId);
}

// file table lookups (__thiscall, ECX = the file table)
inline int FindFile(undefined4 *fileTable, const char *name, undefined4 flags)  // FUN_00de4550
{
    return ((int (__thiscall *)(undefined4 *, const char *, undefined4))FUN_00de4550)(fileTable, name, flags);
}
inline int FindFile44B0(undefined4 *fileTable, const char *name, undefined4 flags)  // FUN_00de44b0
{
    return ((int (__thiscall *)(undefined4 *, const char *, undefined4))FUN_00de44b0)(fileTable, name, flags);
}

// FUN_00dd5650: debug printf (functions.h declares it without parameters)
inline void DebugPrint(const void *format)
{
    ((void (__cdecl *)(const void *))FUN_00dd5650)(format);
}

// 00F972E0 Hw::cTexture::~cTexture (__thiscall)
inline void DestroyTexture(void *texture)
{
    ((void (__thiscall *)(void *))0x00F972E0)(texture);
}

// x87 fabs
inline float Abs(float value)
{
    return value < 0.0f ? -value : value;
}

}  // namespace ScrManagerImplement_p1

// 00C14320  ScrManagerImplement::vf24  size=122  [class]
// Total number of entities in the loaded slots (unrolled over the 8 slots in the binary).
int ScrManagerImplement::vf24()
{
    int total = 0;
    for (int i = 0; i < kSlotCount; i++) {
        if (slot(i)->loaded() != 0) {
            total = total + slot(i)->entityCount();
        }
    }
    return total;
}

// 00C143A0  ScrManagerImplement::vf1C  size=71  [class]
// The first entity whose name hash is `nameHash` in the loaded slots of `scrId` (0: any).
int ScrManagerImplement::vf1C(undefined4 nameHash, int scrId)
{
    using namespace ScrManagerImplement_p1;
    int entity = 0;
    for (unsigned int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0 && (scrId == 0 || s->scrId() == scrId)) {
            entity = FindEntityByNameHash(s, nameHash);
            if (entity != 0) {
                return entity;
            }
        }
    }
    return entity;
}

// 00C143F0  ScrManagerImplement::vf20  size=71  [class]
int ScrManagerImplement::vf20(undefined4 param_2, int scrId)
{
    using namespace ScrManagerImplement_p1;
    int result = 0;
    for (unsigned int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0 && (scrId == 0 || s->scrId() == scrId)) {
            result = SlotFind20(s, param_2);
            if (result != 0) {
                return result;
            }
        }
    }
    return result;
}

// 00C14440  ScrManagerImplement::vf14  size=70  [class]
void ScrManagerImplement::vf14(undefined4 param_2, undefined4 param_3, int scrId)
{
    using namespace ScrManagerImplement_p1;
    for (int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0 && (scrId == 0 || s->scrId() == scrId)) {
            SlotCall14(s, param_2, param_3);
        }
    }
}

// 00C14490  ScrManagerImplement::vf18  size=102  [class]
// Entity by index: with scrId == -1 `index` runs over the loaded slots one after the other;
// otherwise it indexes each loaded slot of `scrId` until a non-zero entity is found.
int ScrManagerImplement::vf18(int index, int scrId)
{
    using namespace ScrManagerImplement_p1;
    int result = 0;
    int base = 0;
    for (unsigned int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        int next = base;
        if (s->loaded() != 0) {
            if (scrId == -1) {
                next = s->entityCount() + base;
                if (index < next) {
                    return EntityAt(s, index - base);
                }
            }
            else if (s->scrId() == scrId && (result = EntityAt(s, index)) != 0) {
                return result;
            }
        }
        base = next;
    }
    return result;
}

// 00C14500  ScrManagerImplement::vf28  size=71  [class]
// First loaded slot of `scrId` (0: any): *outInfo = its info, returns its +0x800 block;
// none: *outInfo = 0 and 0.
int *ScrManagerImplement::vf28(int *outInfo, int scrId)
{
    using namespace ScrManagerImplement_p1;
    for (unsigned int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0 && (scrId == 0 || s->scrId() == scrId)) {
            *outInfo = s->info();
            return s->extra();
        }
    }
    *outInfo = 0;
    return 0;
}

// 00C14550  ScrManagerImplement::vf30  size=63  [class]
// FUN_00935ac0 on the first loaded slot of `scrId` (no wildcard), 0 when there is none.
undefined4 ScrManagerImplement::vf30(undefined4 param_2, int scrId)
{
    using namespace ScrManagerImplement_p1;
    for (unsigned int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0 && s->scrId() == scrId) {
            return SlotFindAC0(s, param_2);
        }
    }
    return 0;
}

// 00C14590  ScrManagerImplement::vf2C  size=57  [class]
int ScrManagerImplement::vf2C(undefined4 param_2)
{
    using namespace ScrManagerImplement_p1;
    for (unsigned int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0) {
            int result = SlotFindAC0(s, param_2);
            if (result != 0) {
                return result;
            }
        }
    }
    return 0;
}

// 00C145D0  ScrManagerImplement::vf34  size=56  [class]
// Number of loaded slots for which FUN_00935b10 is non-zero.
int ScrManagerImplement::vf34(undefined4 param_2)
{
    using namespace ScrManagerImplement_p1;
    int count = 0;
    for (int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0) {
            if (SlotTestB10(s, param_2) != 0) {
                count = count + 1;
            }
        }
    }
    return count;
}

// 00C14610  ScrManagerImplement::vf48  size=48  [class]
void ScrManagerImplement::vf48(undefined4 param_2)
{
    using namespace ScrManagerImplement_p1;
    for (int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0) {
            SlotCall760(s, param_2);
        }
    }
}

// 00C14640  ScrManagerImplement::vf44  size=54  [class]
void ScrManagerImplement::vf44(undefined4 param_2, undefined4 param_3)
{
    using namespace ScrManagerImplement_p1;
    for (int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0) {
            SlotCall7C0(s, param_2, param_3);
        }
    }
}

// 00C14680  ScrManagerImplement::vf40  size=70  [class]
// vf44 restricted to the slots of `scrId` (0: any).
void ScrManagerImplement::vf40(undefined4 param_2, undefined4 param_3, int scrId)
{
    using namespace ScrManagerImplement_p1;
    for (int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0 && (scrId == 0 || s->scrId() == scrId)) {
            SlotCall7C0(s, param_2, param_3);
        }
    }
}

// 00C146D0  ScrManagerImplement::vf50  size=80  [class]
// The value FUN_009358e0 reports for `key` in the first loaded slot that
// knows it, 0 otherwise.  (The binary reuses the argument's stack slot as the out value.)
undefined4 ScrManagerImplement::vf50(undefined4 key)
{
    using namespace ScrManagerImplement_p1;
    for (unsigned int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0) {
            undefined4 value = 0;
            if (SlotQuery8E0(s, key, &value) != 0) {
                return value;
            }
        }
    }
    return 0;
}

// 00C14720  ScrManagerImplement::vf4C  size=91  [class]
// vf50 restricted to the slots of `scrId` (no wildcard).
undefined4 ScrManagerImplement::vf4C(undefined4 key, int scrId)
{
    using namespace ScrManagerImplement_p1;
    for (unsigned int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0 && s->scrId() == scrId) {
            undefined4 value = 0;
            if (SlotQuery8E0(s, key, &value) != 0) {
                return value;
            }
        }
    }
    return 0;
}

// 00C14780  ScrManagerImplement::vf54  size=54  [class]
void ScrManagerImplement::vf54(undefined4 param_2, undefined4 param_3)
{
    using namespace ScrManagerImplement_p1;
    for (int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0) {
            SlotCall880(s, param_2, param_3);
        }
    }
}

// 00C147C0  ScrManagerImplement::vf38  size=99  [class]
// `index` runs over the entities of the loaded slots one after the other; calls FUN_009355f0
// with the index inside the slot that holds it and returns 1 (0 when out of range).  The null
// checks of the slot pointers are in the binary.
undefined4 ScrManagerImplement::vf38(int index)
{
    using namespace ScrManagerImplement_p1;
    if (slot(0) == 0) {
        return 0;
    }
    int base = 0;
    for (unsigned int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        int next = base;
        if (s != 0 && s->loaded() != 0) {
            next = s->entityCount() + base;
            if (index < next) {
                SlotCall5F0(s, index - base);
                return 1;
            }
        }
        base = next;
    }
    return 0;
}

// 00C14830  ScrManagerImplement::vf3C  size=68  [class]
// Releases the loaded slots of `scrId` (through the thunk of FUN_00935620).
void ScrManagerImplement::vf3C(int scrId)
{
    if (slot(0) != 0) {
        for (int i = 0; i < kSlotCount; i++) {
            Slot *s = slot(i);
            if (s->loaded() != 0 && s->scrId() == scrId) {
                thunk_FUN_00935620((int)s);
            }
        }
    }
}

// 00C14880  ScrManagerImplement::vf58  size=61  [class]
void ScrManagerImplement::vf58(int scrId, undefined4 param_3)
{
    using namespace ScrManagerImplement_p1;
    for (int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0 && s->scrId() == scrId) {
            SlotCall5B0(s, param_3);
        }
    }
}

// 00C148C0  ScrManagerImplement::vf5C  size=54  [class]
void ScrManagerImplement::vf5C(undefined4 param_2, undefined4 param_3)
{
    using namespace ScrManagerImplement_p1;
    for (int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0) {
            SlotCallD10(s, param_2, param_3);
        }
    }
}

// 00C14900  ScrManagerImplement::vf60  size=66  [class]
void ScrManagerImplement::vf60(int scrId, undefined4 param_3, undefined4 param_4)
{
    using namespace ScrManagerImplement_p1;
    for (int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0 && s->scrId() == scrId) {
            SlotCallD90(s, param_3, param_4);
        }
    }
}

// 00C14950  ScrManagerImplement::vf64  size=66  [class]
void ScrManagerImplement::vf64(int scrId, undefined4 param_3, undefined4 param_4)
{
    using namespace ScrManagerImplement_p1;
    for (int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0 && s->scrId() == scrId) {
            SlotCallDE0(s, param_3, param_4);
        }
    }
}

// 00C149A0  ScrManagerImplement::vf10  size=158  [class]
// Loads "scr" (+ scr.wtb / scr.wta / scr.wtp / _colLink.bxm) from the request's file table
// (request + 2) into the first free slot; prints an overflow message when all 8 are in use.
void ScrManagerImplement::vf10(undefined4 *request)
{
    using namespace ScrManagerImplement_p1;
    unsigned int i = 0;
    do {
        if (slot(i)->loaded() == 0) {
            undefined4 *fileTable = request + 2;
            undefined4 requestId = request[0];
            int colLink = FindFile(fileTable, "_colLink.bxm", 0);
            int wtp = FindFile(fileTable, "scr.wtp", 0);
            int wta = FindFile(fileTable, "scr.wta", 0);
            int wtb = FindFile(fileTable, "scr.wtb", 0);
            int dat = FindFile44B0(fileTable, "scr", 0);  // DAT_016a3424 = "scr"
            LoadSlot(slot(i), dat, wtb, wta, wtp, colLink, fileTable, requestId);
            return;
        }
        i = i + 1;
    } while (i < kSlotCount);
    DebugPrint(DAT_016a3450);
}

// 00C14A40  ScrManagerImplement::vf0C  size=54  [class]
// Releases the loaded slots of `scrId`.
void ScrManagerImplement::vf0C(int scrId)
{
    for (int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0 && s->scrId() == scrId) {
            FUN_00935620((int)s);
        }
    }
}

// 00C14A80  ScrManagerImplement::vf08  size=76  [class]
// Starts the 0.5 s timer and runs FUN_00935a00 on every loaded slot.
void ScrManagerImplement::vf08()
{
    timer() = 0.5f;  // 0x3F000000
    timerActive() = 1;
    timerDone() = 0;
    for (int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0) {
            FUN_00935a00((int)s);
        }
    }
}

// 00C14AD0  ScrManagerImplement::vf04  size=6  [class]
undefined4 ScrManagerImplement::vf04()
{
    return 1;
}

// 00C14AE0  ScrManagerImplement::vf00  size=156  [class]
// Per frame (1/60 s): once the timer has run out, on every even frame count past it run
// FUN_00935a40 on the slots with an scr id until one returns non-zero; when none does the timer
// stops (timerActive = 0, timerDone = 1).
void ScrManagerImplement::vf00()
{
    using namespace ScrManagerImplement_p1;
    if (timerActive() != 0) {
        float remaining = timer() - 0.016666668f;
        timer() = remaining;
        if (!(0.0f < remaining)) {  // fcomp + jnp: NaN also passes
            // FUN_00fde300 (? floor) on a double; the cast to an integer is the _ftol2 call
            // (FUN_00fdbc60) of the binary, whose low 32 bits are used.
            int frames = (int)(long long)FUN_00fde300((double)(Abs(remaining) * 60.0f));
            if (frames % 2 == 0) {
                for (unsigned int i = 0; i < kSlotCount; i++) {
                    Slot *s = slot(i);
                    if (s->scrId() != -1 && FUN_00935a40((int)s) != 0) {
                        return;
                    }
                }
                timerActive() = 0;
                timerDone() = 1;
                return;
            }
        }
    }
}

// 00C14B80  ScrManagerImplement::vf68  size=3  [class]
void ScrManagerImplement::vf68(undefined4 param_2)
{
}

// 00C14B90  ScrManagerImplement::vf70  size=1  [class]
void ScrManagerImplement::vf70()
{
}

// 00C14BA0  ScrManagerImplement::vf6C  size=3  [class]
void ScrManagerImplement::vf6C(undefined4 param_2, undefined4 param_3)
{
}

// 00C24B60  ScrManagerImplement::ScrManagerImplement  size=84  [class]
ScrManagerImplement::ScrManagerImplement(undefined4 ownerValue)
{
    // vftable = ScrManagerImplement::vftable (0x016A3D3C)
    owner() = ownerValue;
    for (int i = 0; i < kSlotCount; i++) {  // the binary counts 7..0 while walking slot 0..7
        FUN_009354f0((undefined4 *)slot(i));
    }
    timerActive() = 0;
    timer() = 0.0f;
    timerDone() = 0;
    field4454() = 0;
}

// 00C24BC0  ScrManagerImplement::~ScrManagerImplement  size=91  [class]
// Releases the loaded slots, then destroys the two textures of each slot, last slot first.
ScrManagerImplement::~ScrManagerImplement()
{
    using namespace ScrManagerImplement_p1;
    // vftable = ScrManagerImplement::vftable (0x016A3D3C)
    for (int i = 0; i < kSlotCount; i++) {
        Slot *s = slot(i);
        if (s->loaded() != 0) {
            FUN_00935620((int)s);
        }
    }
    for (int i = kSlotCount - 1; i >= 0; i--) {
        DestroyTexture(slot(i)->texture1());
        DestroyTexture(slot(i)->texture0());
    }
    // vftable = ScrManager::vftable (0x016A3304)
}

// 00C24C30  ScrManagerImplement::vf74  size=30  [class]
// Scalar deleting destructor.
undefined4 *ScrManagerImplement::vf74(byte flags)
{
    this->~ScrManagerImplement();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}
