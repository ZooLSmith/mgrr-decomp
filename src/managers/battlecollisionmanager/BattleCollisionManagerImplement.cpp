// src/managers/battlecollisionmanager/BattleCollisionManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "BattleCollisionManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// kernel32 (the lock at BattleCollisionManagerImplement+0x18 is a CRITICAL_SECTION)
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);
// TLS slot index of the module (0x01F8EF48); fs:[0x2C] is the thread's TLS array
extern "C" unsigned int _tls_index;
extern "C" unsigned long __readfsdword(unsigned long offset);
#pragma intrinsic(__readfsdword)

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern int           DAT_01885d68;  // cHavok: 1 = world locking disabled
extern int           DAT_01885db8;  // cHavok: non-zero = inside the unlock period
extern int           DAT_01b35fac;  // cHavok: world exists
extern unsigned char DAT_01885d70[];  // cHavok world lock object (ECX of FUN_00dd7320)
extern int          *DAT_01dc52e0;  // BattleCollisionFilter instance (vf00(groupA, groupB) = may collide)
extern int          *DAT_01dc52e4;  // unique-id allocator ? (vf04 release id, vf08 pop released id, vf0C has released ids)
extern int          *DAT_01dc52ec;  // object whose vf28 is called by MainUpdateForPauseSlot::vf18
extern unsigned int  DAT_01bea094;  // global flags (0x10000000 = skip battle collision test)
extern unsigned char DAT_01dc526c[];  // type record of CollisionAttackData (returned by its vf00)
extern unsigned char DAT_01be9c24[];  // type record of BehaviorAppBase
extern unsigned char DAT_01b7b364[];  // cObjReadManager instance (ECX of FUN_009fe7d0)
// Shift-JIS debug messages (translated)
extern const char DAT_016c10b0[];  // "BattleCollisionManagerImplement::addOffense failed."
extern const char DAT_016c10ec[];  // "BattleCollisionManagerImplement::addDefense failed."
extern const char DAT_016c1244[];  // "collideWithinOenFrameArray, capacity over"
extern const char DAT_016c1270[];  // "historArray capacity over"
extern const char DAT_016c128c[];  // "historyArray capacity over"

// ---------------------------------------------------------------------------------------------
// Helpers.  Callees whose functions.h prototype does not match the machine code (hidden ECX,
// missing stack arguments) are called through a cast so the argument list is the binary's.
// Collision.h is not owned by this file: its fields go through the accessors below, which are
// tagged with their offsets.
// ---------------------------------------------------------------------------------------------
namespace BattleCollisionManagerImplement_p1 {

typedef BattleCollisionManagerImplement::CollisionArray CollisionArray;

// field at an absolute byte offset
template <class T> inline T &fld(const void *base, int offset)
{
    return *(T *)((char *)base + offset);
}

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// __thiscall call of a function (symbol or address) with ECX = self
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// __cdecl call of a function (symbol or address)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// FUN_00dd5650: debug printf
inline void DebugPrint(const char *message)
{
    cdeclcall<void>(FUN_00dd5650, message);
}

// FUN_00dd3500: allocate `size` bytes from `heap`
inline void *MemAlloc(unsigned int size, void *heap)
{
    return cdeclcall<void *>(FUN_00dd3500, size, heap);
}

// cHavok world lock.  FUN_004066f0 is the guard constructor (ECX = the empty guard object on the
// stack); the guard destructor is inlined at every use and is reproduced by havokUnlock().
inline void havokLock(char *guard)
{
    FUN_004066f0((undefined4)guard);
}
inline void havokUnlock()
{
    if (DAT_01885d68 != 1) {
        char **tlsArray = (char **)__readfsdword(0x2C);
        int *lockDepth = (int *)(tlsArray[_tls_index] + 4);
        *lockDepth = *lockDepth - 1;
        if (*lockDepth == 0 && DAT_01b35fac != 0 && DAT_01885db8 == 0) {
            FUN_00dd7320((int)DAT_01885d70);
        }
    }
}

// Entry of a collision's hit history (Collision+0x434), 0x160 bytes; built on the stack either
// field by field or by FUN_00d79790 / FUN_00d79810, then copied in by push_back.
struct HitEntry {
    int   collisionId;      // +0x00 Collision+0x354 of the other collision
    int   uniqueId;         // +0x04 Collision+0x358
    int   ownerPart;        // +0x08 Collision+0x374
    int   enabled;          // +0x0C 0 when either collision has flag bit 0
    int   attackDataId;     // +0x10 CollisionAttackData+0x8, 0 without attack data
    int   userData;         // +0x14 Collision+0x3F0 (object, flag byte at +0x28)
    char  pad18[8];         // +0x18
    float pos[4];           // +0x20 copy of the other collision's rigid body +0x80
    char  pad30[0x20];      // +0x30
    float value;            // +0x50 other->vf1C()
    int   zero54;           // +0x54
    char  pad58[8];         // +0x58
    char  sub60[0x100];     // +0x60 initialised by FUN_004105d0
};
typedef char HitEntrySizeCheck[sizeof(HitEntry) == 0x160 ? 1 : -1];

// lib::StaticArray<HitEntry,N> header; vftable slot 0x8 = push_back(const HitEntry *)
struct HitHistory {
    void        *vftable;
    HitEntry    *data;
    unsigned int count;
    unsigned int capacity;
};

// element / header of Collision+0x438 ("collideWithinOneFrameArray")
struct IdPair {
    int ownerId;
    int ownerPart;
};
struct IdPairArray {
    void        *vftable;
    IdPair      *data;
    unsigned int count;
    unsigned int capacity;
};

// Havok phantom attached to a collision (Collision+0x37C); built by FUN_00d7a3a0.
struct PhantomHolder {
    Collision *owner;            // +0x00
    char       phantomRef[0x10]; // +0x04 ECX of FUN_009003e0 / FUN_00900a90 / FUN_00900ca0 / FUN_00900bd0
    int        shape;            // +0x14 owner rigid body vf14()
    char       pad18[8];         // +0x18
    float      prevPos[4];       // +0x20
    float      pos[4];           // +0x30
    int        pending;          // +0x40 1 = owner had no rigid body, phantom not created
    union {
        unsigned int filterInfo; // +0x44 bits 0..4 layer, bits 16..31 group
        struct {
            unsigned short filterLow;
            unsigned short filterGroup;  // +0x46
        };
    };
    unsigned int flags;          // +0x48 bit1 -> 0x200, bit2 -> 0x400, bit3 -> FUN_008f9610(0x100)
    int        flag4C;           // +0x4C non-zero -> 0x1000
};

// Collision fields (Collision.h is not owned by this file)
inline int            &refCount(Collision *c)        { return fld<int>(c, 0x350); }            // Collision+0x350
inline int            &collisionId(Collision *c)     { return fld<int>(c, 0x354); }            // Collision+0x354
inline int            &uniqueId(Collision *c)        { return fld<int>(c, 0x358); }            // Collision+0x358
inline int            &isActive(Collision *c)        { return fld<int>(c, 0x35C); }            // Collision+0x35C
inline int            &state(Collision *c)           { return fld<int>(c, 0x360); }            // Collision+0x360 (1 = released)
inline int            &hasRigidBody(Collision *c)    { return fld<int>(c, 0x364); }            // Collision+0x364 ?
inline char          *&rigidBody(Collision *c)       { return fld<char *>(c, 0x368); }         // Collision+0x368 (position at +0x80)
inline int            &filterGroup(Collision *c)     { return fld<int>(c, 0x36C); }            // Collision+0x36C
inline int            &ownerId(Collision *c)         { return fld<int>(c, 0x370); }            // Collision+0x370
inline int            &ownerPart(Collision *c)       { return fld<int>(c, 0x374); }            // Collision+0x374
inline int           *&attackData(Collision *c)      { return fld<int *>(c, 0x378); }          // Collision+0x378
inline PhantomHolder *&phantom(Collision *c)         { return fld<PhantomHolder *>(c, 0x37C); } // Collision+0x37C
inline unsigned int   &flags(Collision *c)           { return fld<unsigned int>(c, 0x384); }   // Collision+0x384
inline int            &priority(Collision *c)        { return fld<int>(c, 0x388); }            // Collision+0x388
inline int            &userData(Collision *c)        { return fld<int>(c, 0x3F0); }            // Collision+0x3F0
inline int            &hitThisFrame(Collision *c)    { return fld<int>(c, 0x41C); }            // Collision+0x41C
inline int            &objDatId(Collision *c)        { return fld<int>(c, 0x428); }            // Collision+0x428
inline int            &objDatIndex(Collision *c)     { return fld<int>(c, 0x42C); }            // Collision+0x42C
inline int            &objDatData(Collision *c)      { return fld<int>(c, 0x430); }            // Collision+0x430
inline HitHistory    *&history(Collision *c)         { return fld<HitHistory *>(c, 0x434); }   // Collision+0x434
inline IdPairArray   *&collideWithinOneFrame(Collision *c) { return fld<IdPairArray *>(c, 0x438); } // Collision+0x438

// `enabled` of a new history entry: 0 when either collision has flag bit 0
inline int entryEnabled(Collision *other, Collision *self)
{
    int enabled;
    if ((flags(other) & 1) != 0 || (enabled = 1, (flags(self) & 1) != 0)) {
        enabled = 0;
    }
    return enabled;
}

// Sets `bits` in the phantom's entry flags (phantom+0xC) under the world lock.
inline void setPhantomEntryBits(int phantom, unsigned int bits)
{
    char guard;
    havokLock(&guard);
    unsigned int entry;
    if (phantom != 0 && (entry = *(unsigned int *)(phantom + 0xC), entry != 0)) {
        unsigned int *entryFlags = (unsigned int *)((0u - (unsigned int)(entry != 0)) & entry);
        entryFlags[0] = entryFlags[0] | 1;
        entryFlags[2] = entryFlags[2] | bits;
    }
    havokUnlock();
}

}  // namespace BattleCollisionManagerImplement_p1

// 00D77300  BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf10  size=1  [class]
void BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf10()
{
}

// 00D77310  BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf14  size=1  [class]
void BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf14()
{
}

// 00D77330  BattleCollisionManagerImplement::vf28  size=1  [class]
void BattleCollisionManagerImplement::vf28()
{
}

// 00D77340  BattleCollisionManagerImplement::vf2C  size=1  [class]
void BattleCollisionManagerImplement::vf2C()
{
}

// 00D77350  BattleCollisionManagerImplement::vf30  size=1  [class]
void BattleCollisionManagerImplement::vf30()
{
}

// 00D77EF0  FUN_00d77ef0  size=82  [callgraph]
// Collision: 1 if the hit history holds an entry without attack data for owner part `part`.
undefined4 FUN_00d77ef0(int self, int part)
{
    using namespace BattleCollisionManagerImplement_p1;
    HitHistory *hist = history((Collision *)self);
    if (hist != 0 && hist->data != hist->data + hist->count) {
        HitEntry *end = hist->data + hist->count;
        HitEntry *entry = hist->data;
        do {
            if (part != 0 && entry->ownerPart == part && entry->attackDataId == 0) {
                return 1;
            }
            entry = entry + 1;
        } while (entry != end);
    }
    return 0;
}

// 00D77F50  FUN_00d77f50  size=124  [callgraph]
// Collision: 1 if the hit history already holds `otherAddr` (same ids or same owner part),
// counting only entries without attack data.
undefined4 FUN_00d77f50(int self, int otherAddr)
{
    using namespace BattleCollisionManagerImplement_p1;
    Collision *other = (Collision *)otherAddr;
    HitHistory *hist = history((Collision *)self);
    if (hist == 0) {
        return 0;
    }
    HitEntry *entry = hist->data;
    if (entry != entry + hist->count) {
        HitEntry *end = entry + hist->count;
        do {
            if (entry->collisionId == collisionId(other) &&
                ((entry->uniqueId == uniqueId(other) && entry->attackDataId == 0) ||
                 (ownerPart(other) != 0 && entry->ownerPart == ownerPart(other) &&
                  entry->attackDataId == 0))) {
                return 1;
            }
            entry = entry + 1;
        } while (entry != end);
    }
    return 0;
}

// 00D77FD0  FUN_00d77fd0  size=67  [callgraph]
// Collision: number of hit-history entries without attack data.
int __fastcall FUN_00d77fd0(int self)
{
    using namespace BattleCollisionManagerImplement_p1;
    HitHistory *hist = history((Collision *)self);
    int count = 0;
    if (hist != 0 && hist->data != hist->data + hist->count) {
        HitEntry *end = hist->data + hist->count;
        HitEntry *entry = hist->data;
        do {
            if (entry->attackDataId == 0) {
                count = count + 1;
            }
            entry = entry + 1;
        } while (entry != end);
    }
    return count;
}

// 00D78020  FUN_00d78020  size=115  [callgraph]
// PhantomHolder: replace the collision layer (filter bits 0..4) and apply the filter.
void FUN_00d78020(int holderAddr, uint layer)
{
    using namespace BattleCollisionManagerImplement_p1;
    PhantomHolder *holder = (PhantomHolder *)holderAddr;
    char guard;
    havokLock(&guard);
    unsigned int filter = (unsigned int)holder->filterGroup << 0x10 | holder->filterInfo & 0x7FE0 |
                          layer & 0x1F;
    holder->filterInfo = filter;
    FUN_00900a90((int *)holder->phantomRef, filter);
    havokUnlock();
}

// 00D780A0  FUN_00d780a0  size=106  [callgraph]
// PhantomHolder: replace the collision group (filter bits 16..31) and apply the filter.
void FUN_00d780a0(int holderAddr, int group)
{
    using namespace BattleCollisionManagerImplement_p1;
    PhantomHolder *holder = (PhantomHolder *)holderAddr;
    char guard;
    havokLock(&guard);
    unsigned int filter = group << 0x10 | holder->filterInfo & 0x7FFF;
    holder->filterInfo = filter;
    FUN_00900a90((int *)holder->phantomRef, filter);
    havokUnlock();
}

// 00D78120  FUN_00d78120  size=94  [callgraph]
// PhantomHolder: remove the phantom from the world.
void __fastcall FUN_00d78120(int holderAddr)
{
    using namespace BattleCollisionManagerImplement_p1;
    PhantomHolder *holder = (PhantomHolder *)holderAddr;
    char guard;
    havokLock(&guard);
    FUN_00900ca0((int *)holder->phantomRef);
    holder->shape = 0;
    havokUnlock();
}

// 00D78180  BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf18  size=16  [class]
void BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf18()
{
    using namespace BattleCollisionManagerImplement_p1;
    vcall<void>(DAT_01dc52ec, 0x28);
}

// 00D78190  BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf00  size=31  [class]
// Scalar deleting destructor.
undefined4 *BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00D781B0  BattleCollisionManagerImplement::addOffense  size=86  [class]
void BattleCollisionManagerImplement::addOffense(int collision)
{
    using namespace BattleCollisionManagerImplement_p1;
    if (lockInitialized() != 0) {
        EnterCriticalSection(lock());
    }
    CollisionArray *list = offenseList();
    if (list->count < list->capacity) {
        vcall<void>(list, 0x8, &collision);  // push_back
        refCount((Collision *)collision) = refCount((Collision *)collision) + 1;
    }
    else {
        DebugPrint(DAT_016c10b0);
    }
    if (lockInitialized() != 0) {
        LeaveCriticalSection(lock());
    }
}

// 00D78210  BattleCollisionManagerImplement::addDefense  size=131  [class]
undefined4 BattleCollisionManagerImplement::addDefense(int *collisionAddr)
{
    using namespace BattleCollisionManagerImplement_p1;
    Collision *collision = (Collision *)collisionAddr;
    void *criticalSection = lock();
    if (lockInitialized() != 0) {
        EnterCriticalSection(criticalSection);
    }
    vcall<void>(collision, 0x20, 0x1C, ownerId(collision), 2);
    CollisionArray *list = defenseList();
    if (list->capacity <= list->count) {
        DebugPrint(DAT_016c10ec);
        if (lockInitialized() != 0) {
            LeaveCriticalSection(criticalSection);
        }
        return 0;
    }
    vcall<void>(list, 0x8, &collisionAddr);  // push_back
    refCount((Collision *)collisionAddr) = refCount((Collision *)collisionAddr) + 1;
    if (lockInitialized() != 0) {
        LeaveCriticalSection(criticalSection);
    }
    return 1;
}

// 00D782A0  BattleCollisionManagerImplement::vf18  size=61  [class]
// Offense collision whose Collision+0x354 equals `id`, or 0.
int BattleCollisionManagerImplement::vf18(int id)
{
    using namespace BattleCollisionManagerImplement_p1;
    CollisionArray *list = offenseList();
    Collision **it = list->data;
    if (it != it + list->count) {
        Collision **end = it + list->count;
        do {
            if (collisionId(*it) == id) {
                return (int)*it;
            }
            it = it + 1;
        } while (it != end);
    }
    return 0;
}

// 00D782E0  BattleCollisionManagerImplement::vf1C  size=61  [class]
// Defense collision whose Collision+0x354 equals `id`, or 0.
int BattleCollisionManagerImplement::vf1C(int id)
{
    using namespace BattleCollisionManagerImplement_p1;
    CollisionArray *list = defenseList();
    Collision **it = list->data;
    if (it != it + list->count) {
        Collision **end = it + list->count;
        do {
            if (collisionId(*it) == id) {
                return (int)*it;
            }
            it = it + 1;
        } while (it != end);
    }
    return 0;
}

// 00D78320  BattleCollisionManagerImplement::vf34  size=14  [class]
undefined4 BattleCollisionManagerImplement::vf34()
{
    if (offenseList() != 0) {
        return offenseList()->count;
    }
    return 0;
}

// 00D78330  BattleCollisionManagerImplement::vf38  size=14  [class]
undefined4 BattleCollisionManagerImplement::vf38()
{
    if (defenseList() != 0) {
        return defenseList()->count;
    }
    return 0;
}

// 00D78340  BattleCollisionManagerImplement::vf3C  size=25  [class]
undefined4 BattleCollisionManagerImplement::vf3C(int index)
{
    if (offenseList() != 0) {
        return (undefined4)offenseList()->data[index];
    }
    return 0;
}

// 00D78360  BattleCollisionManagerImplement::vf40  size=25  [class]
undefined4 BattleCollisionManagerImplement::vf40(int index)
{
    if (defenseList() != 0) {
        return (undefined4)defenseList()->data[index];
    }
    return 0;
}

// 00D79900  FUN_00d79900  size=102  [callgraph]
// Collision: remember (ownerId, ownerPart) in collideWithinOneFrameArray unless already hit.
void FUN_00d79900(int self, undefined4 ownerIdArg, undefined4 ownerPartArg)
{
    using namespace BattleCollisionManagerImplement_p1;
    Collision *collision = (Collision *)self;
    if (FUN_00d77bf0(self, ownerIdArg, ownerPartArg) == 0 && collideWithinOneFrame(collision) != 0) {
        IdPairArray *pairs = collideWithinOneFrame(collision);
        if (pairs->capacity <= pairs->count) {
            DebugPrint(DAT_016c1244);
            return;
        }
        IdPair pair;
        pair.ownerId = ownerIdArg;
        pair.ownerPart = ownerPartArg;
        vcall<void>(pairs, 0x8, &pair);  // push_back
    }
}

// 00D79990  FUN_00d79990  size=30  [callgraph]
// PhantomHolder scalar deleting destructor.
undefined4 FUN_00d79990(undefined4 holder, byte flags)
{
    FUN_00d78120(holder);
    if ((flags & 1) != 0) {
        FUN_00dd4920(holder);
    }
    return holder;
}

// 00D79B40  FUN_00d79b40  size=363  [callgraph]
// Collision: add `otherAddr` to the hit history (no attack data) unless it is already there.
void FUN_00d79b40(int self, int *otherAddr)
{
    using namespace BattleCollisionManagerImplement_p1;
    Collision *collision = (Collision *)self;
    Collision *other = (Collision *)otherAddr;
    HitHistory *hist = history(collision);
    if (hist != 0) {
        HitEntry *entry = hist->data;
        if (entry != entry + hist->count) {
            HitEntry *end = entry + hist->count;
            do {
                if (entry->collisionId == collisionId(other) && entry->uniqueId == uniqueId(other)) {
                    return;
                }
                entry = entry + 1;
            } while (entry != end);
        }
        if (history(collision)->count < history(collision)->capacity) {
            float *otherPos = (float *)(rigidBody(other) + 0x80);
            float pos0 = otherPos[0];
            float pos1 = otherPos[1];
            float pos2 = otherPos[2];
            float pos3 = otherPos[3];
            int enabled = entryEnabled(other, collision);
            int otherCollisionId = collisionId(other);
            int otherUserData = userData(other);
            int otherOwnerPart = ownerPart(other);
            int otherUniqueId = uniqueId(other);
            float value = vcall<float>(other, 0x1C);
            HitEntry newEntry;
            newEntry.enabled = enabled;
            newEntry.value = value;
            newEntry.attackDataId = 0;
            newEntry.zero54 = 0;
            newEntry.collisionId = otherCollisionId;
            newEntry.uniqueId = otherUniqueId;
            newEntry.ownerPart = otherOwnerPart;
            newEntry.userData = otherUserData;
            newEntry.pos[0] = pos0;
            newEntry.pos[1] = pos1;
            newEntry.pos[2] = pos2;
            newEntry.pos[3] = pos3;
            FUN_004105d0((undefined4 *)newEntry.sub60);
            vcall<void>(history(collision), 0x8, &newEntry);  // push_back
        }
    }
}

// 00D79CB0  FUN_00d79cb0  size=24  [callgraph]
// Collision: clear the hit history.
void __fastcall FUN_00d79cb0(int self)
{
    using namespace BattleCollisionManagerImplement_p1;
    HitHistory *hist = history((Collision *)self);
    if (hist != 0 && hist->data != 0) {
        hist->count = 0;
    }
}

// 00D79CD0  FUN_00d79cd0  size=598  [callgraph]
// Collision: add `otherAddr` to the hit history (with its attack data when it has one).
void FUN_00d79cd0(int self, int *otherAddr)
{
    using namespace BattleCollisionManagerImplement_p1;
    Collision *collision = (Collision *)self;
    Collision *other = (Collision *)otherAddr;
    HitHistory *hist = history(collision);
    if (hist != 0) {
        hitThisFrame(collision) = 1;
        HitEntry *entry = hist->data;
        if (entry != entry + hist->count) {
            do {
                if (entry->collisionId == collisionId(other) && entry->uniqueId == uniqueId(other)) {
                    return;
                }
                entry = entry + 1;
            } while (entry != hist->data + hist->count);
        }
        if (hist->capacity <= hist->count) {
            DebugPrint(DAT_016c1270);
            return;
        }
        float *otherPos = (float *)(rigidBody(other) + 0x80);
        float pos[4];
        int *attack = attackData(other);
        pos[0] = otherPos[0];
        pos[1] = otherPos[1];
        pos[2] = otherPos[2];
        pos[3] = otherPos[3];
        HitEntry newEntry;
        if (attack == 0) {
            int enabled = entryEnabled(other, collision);
            int otherOwnerPart = ownerPart(other);
            int otherUniqueId = uniqueId(other);
            int otherCollisionId = collisionId(other);
            int otherUserData = userData(other);
            float value = vcall<float>(other, 0x1C);
            newEntry.pos[0] = pos[0];
            newEntry.pos[1] = pos[1];
            newEntry.pos[2] = pos[2];
            newEntry.enabled = enabled;
            newEntry.pos[3] = pos[3];
            newEntry.value = value;
            newEntry.attackDataId = 0;
            newEntry.zero54 = 0;
            newEntry.collisionId = otherCollisionId;
            newEntry.uniqueId = otherUniqueId;
            newEntry.ownerPart = otherOwnerPart;
            newEntry.userData = otherUserData;
            FUN_004105d0((undefined4 *)newEntry.sub60);
            vcall<void>(history(collision), 0x8, &newEntry);  // push_back
        }
        else {
            // attack->vf00() returns the object's type record; FUN_00dd6d80 = is-kind-of
            if (FUN_00dd6d80((undefined4 *)vcall<void *>(attack, 0x0), (undefined4 *)DAT_01dc526c) != 0) {
                int enabled = entryEnabled(other, collision);
                int otherUserData = userData(other);
                int otherOwnerPart = ownerPart(other);
                int otherUniqueId = uniqueId(other);
                int otherCollisionId = collisionId(other);
                float value = vcall<float>(other, 0x1C);
                HitEntry *built = thiscall<HitEntry *>(FUN_00d79790, &newEntry, otherCollisionId,
                                                       otherUniqueId, otherOwnerPart, enabled,
                                                       otherUserData, attack[2], pos, value);
                vcall<void>(history(collision), 0x8, built);  // push_back
                return;
            }
        }
    }
}

// 00D79F30  FUN_00d79f30  size=528  [callgraph]
// Collision: as FUN_00d79cd0, with two extra arguments forwarded to the entry builder FUN_00d79810.
void FUN_00d79f30(int self, int *otherAddr, undefined4 extra1, undefined4 extra2)
{
    using namespace BattleCollisionManagerImplement_p1;
    Collision *collision = (Collision *)self;
    Collision *other = (Collision *)otherAddr;
    HitHistory *hist = history(collision);
    if (hist != 0) {
        hitThisFrame(collision) = 1;
        HitEntry *entry = hist->data;
        if (entry != entry + hist->count) {
            do {
                if (entry->collisionId == collisionId(other) && entry->uniqueId == uniqueId(other)) {
                    return;
                }
                entry = entry + 1;
            } while (entry != hist->data + hist->count);
        }
        if (hist->capacity <= hist->count) {
            DebugPrint(DAT_016c128c);
            return;
        }
        float *otherPos = (float *)(rigidBody(other) + 0x80);
        float pos[4];
        pos[0] = otherPos[0];
        int *attack = attackData(other);
        pos[1] = otherPos[1];
        pos[2] = otherPos[2];
        pos[3] = otherPos[3];
        int enabled;
        int otherUserData;
        int otherOwnerPart;
        int otherUniqueId;
        int otherCollisionId;
        HitHistory *target;
        float value;
        int attackDataId;
        if (attack == 0) {
            enabled = entryEnabled(other, collision);
            otherUserData = userData(other);
            otherOwnerPart = ownerPart(other);
            target = hist;
            otherUniqueId = uniqueId(other);
            otherCollisionId = collisionId(other);
            value = vcall<float>(other, 0x1C);
            attackDataId = 0;
        }
        else {
            // attack->vf00() returns the object's type record; FUN_00dd6d80 = is-kind-of
            if (FUN_00dd6d80((undefined4 *)vcall<void *>(attack, 0x0), (undefined4 *)DAT_01dc526c) == 0) {
                return;
            }
            enabled = entryEnabled(other, collision);
            otherUserData = userData(other);
            otherOwnerPart = ownerPart(other);
            otherUniqueId = uniqueId(other);
            otherCollisionId = collisionId(other);
            target = history(collision);
            value = vcall<float>(other, 0x1C);
            attackDataId = attack[2];
        }
        HitEntry newEntry;
        HitEntry *built = thiscall<HitEntry *>(FUN_00d79810, &newEntry, otherCollisionId,
                                               otherUniqueId, otherOwnerPart, enabled, otherUserData,
                                               attackDataId, pos, value, extra1, extra2);
        // the vftable is read from `target`, ECX is re-read from Collision+0x434
        typedef void (__thiscall *PushBack)(HitHistory *, HitEntry *);
        PushBack pushBack = *(PushBack *)(*(char **)target + 0x8);
        pushBack(history(collision), built);
    }
}

// 00D7A140  FUN_00d7a140  size=595  [callgraph]
// PhantomHolder: create the Havok phantom of the owner collision and add it to the world.
void __fastcall FUN_00d7a140(int *holderAddr)
{
    using namespace BattleCollisionManagerImplement_p1;
    PhantomHolder *holder = (PhantomHolder *)holderAddr;
    char guard;
    havokLock(&guard);
    int shape = vcall<int>(rigidBody(holder->owner), 0x14);
    unsigned int filter = holder->filterInfo;
    unsigned short group = holder->filterGroup;
    holder->shape = shape;
    int *world = (int *)FUN_00900480();
    int phantom = vcall<int>(world, 0x10, holder->shape, (int)(rigidBody(holder->owner) + 0x50),
                             filter & 0x1F, (unsigned int)group, 0);
    // 00903ED0 (FILEMAP: lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray)
    thiscall<void>(0x00903ED0, holder->phantomRef, phantom);
    thiscall<void>(FUN_01006780, (char *)phantom + 0x78, (char *)holder->owner + 0x394);  // Collision+0x394
    cdeclcall<void>(FUN_008f7f00, phantom, userData(holder->owner));
    FUN_008f9610(phantom, 4, 1);
    FUN_008f9610(phantom, 8, 1);
    if (holder->flag4C != 0) {
        setPhantomEntryBits(phantom, 0x1000);
    }
    if ((holder->flags & 2) != 0) {
        setPhantomEntryBits(phantom, 0x200);
    }
    if ((holder->flags & 4) != 0) {
        setPhantomEntryBits(phantom, 0x400);
    }
    if ((holder->flags & 8) != 0) {
        FUN_008f9610(phantom, 0x100, 1);
    }
    FUN_00900bd0((int *)holder->phantomRef);
    float *ownerPos = (float *)(rigidBody(holder->owner) + 0x80);
    holder->pos[0] = ownerPos[0];
    holder->pos[1] = ownerPos[1];
    holder->pos[2] = ownerPos[2];
    holder->pos[3] = ownerPos[3];
    holder->prevPos[0] = holder->pos[0];
    holder->prevPos[1] = holder->pos[1];
    holder->prevPos[2] = holder->pos[2];
    holder->prevPos[3] = holder->pos[3];
    havokUnlock();
}

// 00D7A3A0  FUN_00d7a3a0  size=88  [callgraph]
// PhantomHolder constructor; the phantom is created now if the owner has a rigid body.
int *FUN_00d7a3a0(int *holderAddr, int owner, uint layer, int group, int holderFlags)
{
    using namespace BattleCollisionManagerImplement_p1;
    PhantomHolder *holder = (PhantomHolder *)holderAddr;
    holder->owner = (Collision *)owner;
    FUN_009003e0((undefined4 *)holder->phantomRef);
    holder->flags = holderFlags;
    holder->shape = 0;
    holder->pending = 0;
    holder->filterInfo = layer & 0x1F | group << 0x10;
    if (hasRigidBody((Collision *)owner) != 0) {
        FUN_00d7a140(holderAddr);
        return holderAddr;
    }
    holder->pending = 1;
    return holderAddr;
}

// 00D7A400  BattleCollisionManagerImplement::vf20  size=130  [class]
// Appends every offense collision in state 0 to `out` (cleared first); returns `out`.
int *BattleCollisionManagerImplement::vf20(int *out)
{
    using namespace BattleCollisionManagerImplement_p1;
    CollisionArray *outList = (CollisionArray *)out;
    if (lockInitialized() != 0) {
        EnterCriticalSection(lock());
    }
    if (outList->data != 0) {
        outList->count = 0;
    }
    Collision **it = offenseList()->data;
    if (it != it + offenseList()->count) {
        do {
            int collisionState = state(*it);
            if (collisionState != 1 && collisionState < 4 && collisionState == 0) {
                vcall<void>(outList, 0x8, it);  // push_back
            }
            it = it + 1;
        } while (it != offenseList()->data + offenseList()->count);
    }
    if (lockInitialized() != 0) {
        LeaveCriticalSection(lock());
    }
    return out;
}

// 00D7A490  FUN_00d7a490  size=303  [callgraph]
// BattleCollisionManagerImplement: sort the defense list by Collision+0x388, highest first
// (selection into sortBuffer, then copied back).
void __fastcall FUN_00d7a490(int *self)
{
    using namespace BattleCollisionManagerImplement_p1;
    BattleCollisionManagerImplement *manager = (BattleCollisionManagerImplement *)self;
    Collision *picked;
    manager->vf04();
    if (manager->sortBuffer()->data != 0) {
        manager->sortBuffer()->count = 0;
    }
    CollisionArray *list;
    while (list = manager->defenseList(), list->data != 0 && list->count != 0) {
        Collision **best = list->data + list->count;
        int bestPriority = -1;
        Collision **it = list->data;
        if (it != list->data + list->count) {
            do {
                if (bestPriority < priority(*it)) {
                    best = it;
                    bestPriority = priority(*it);
                }
                it = it + 1;
            } while (it != list->data + list->count);
        }
        Collision **data = list->data;
        if (data + list->count != best) {
            picked = *best;
            unsigned int count = list->count;
            Collision **end = data + count;
            if (best != end && data != 0 && count != 0 && (unsigned int)(best - data) < count) {
                for (; best != end - 1; best = best + 1) {
                    *best = best[1];
                }
                list->count = list->count - 1;
            }
            CollisionArray *buffer = manager->sortBuffer();
            if (buffer->count < buffer->capacity) {
                vcall<void>(buffer, 0x8, &picked);  // push_back
            }
        }
    }
    CollisionArray *buffer = manager->sortBuffer();
    Collision **it = buffer->data;
    if (it != it + buffer->count) {
        do {
            if (buffer->capacity <= manager->defenseList()->count) break;
            vcall<void>(manager->defenseList(), 0x8, it);  // push_back
            buffer = manager->sortBuffer();
            it = it + 1;
        } while (it != buffer->data + buffer->count);
    }
    if (manager->sortBuffer()->data != 0) {
        manager->sortBuffer()->count = 0;
    }
}

// 00D7B080  FUN_00d7b080  size=107  [callgraph]
// Collision: free the phantom, drop the obj-dat reference and delete the collision (vf08(1)).
void __fastcall FUN_00d7b080(int *self)
{
    using namespace BattleCollisionManagerImplement_p1;
    Collision *collision = (Collision *)self;
    PhantomHolder *holder = phantom(collision);
    if (holder != 0) {
        FUN_00d78120((int)holder);
        FUN_00dd4920((int)holder);
        phantom(collision) = 0;
    }
    if (objDatId(collision) != -1) {
        thiscall<void>(FUN_009fe7d0, DAT_01b7b364, (uint)objDatId(collision),
                       (undefined4)objDatIndex(collision));
    }
    objDatId(collision) = -1;
    objDatIndex(collision) = -1;
    objDatData(collision) = 0;
    vcall<void>(collision, 0x8, 1);  // scalar deleting destructor
}

// 00D7B0F0  FUN_00d7b0f0  size=135  [callgraph]
// Collision: release one reference; returns the remaining count (state 1 when it reaches 0).
int __fastcall FUN_00d7b0f0(int self)
{
    using namespace BattleCollisionManagerImplement_p1;
    Collision *collision = (Collision *)self;
    refCount(collision) = refCount(collision) - 1;
    if (uniqueId(collision) != 0) {
        vcall<void>(DAT_01dc52e4, 0x4, uniqueId(collision));
        isActive(collision) = 0;
        hitThisFrame(collision) = 0;
        if (phantom(collision) != 0) {
            FUN_00900a90((int *)phantom(collision)->phantomRef, 0x1F);
        }
        uniqueId(collision) = 0;
    }
    int remaining = refCount(collision);
    if (remaining == 0) {
        PhantomHolder *holder = phantom(collision);
        if (holder != 0) {
            FUN_00d78120((int)holder);
            FUN_00dd4920((int)holder);
            phantom(collision) = 0;
        }
        state(collision) = 1;
    }
    return remaining;
}

// 00D7B180  FUN_00d7b180  size=97  [callgraph]
// Collision: erase every hit-history entry whose unique id is `releasedId`.
void FUN_00d7b180(int self, int releasedId)
{
    using namespace BattleCollisionManagerImplement_p1;
    Collision *collision = (Collision *)self;
    HitHistory *hist;
    HitEntry *entry;
    if (state(collision) < 4 && state(collision) != 1 && (hist = history(collision), hist != 0) &&
        (entry = hist->data, entry != entry + hist->count)) {
        do {
            if (entry->uniqueId == releasedId) {
                entry = (HitEntry *)FUN_00d7a850((int)history(collision), (int)entry);  // erase
            }
            else {
                entry = entry + 1;
            }
        } while (entry != history(collision)->data + history(collision)->count);
    }
}

// 00D7B1F0  FUN_00d7b1f0  size=197  [callgraph]
// Collision: erase hit-history entries whose user-data object has flag 0x2 at +0x28.
void __fastcall FUN_00d7b1f0(int self)
{
    using namespace BattleCollisionManagerImplement_p1;
    Collision *collision = (Collision *)self;
    HitHistory *hist = history(collision);
    HitEntry *entry;
    if (hist != 0 && (entry = hist->data, entry != hist->data + hist->count)) {
        HitEntry *next;
        do {
            if (entry->userData == 0 || (*(unsigned char *)(entry->userData + 0x28) & 2) == 0) {
                next = entry + 1;
            }
            else {
                unsigned int count = hist->count;
                HitEntry *data = hist->data;
                next = data + count;
                if (entry != next && data != 0 && count != 0 &&
                    (unsigned int)(entry - data) < count) {
                    HitEntry *dst = entry;
                    while (dst != next - 1) {
                        HitEntry *src = dst + 1;
                        FUN_00d790a0((undefined4 *)dst, (undefined4 *)src);  // *dst = *src
                        dst = src;
                    }
                    hist->count = hist->count - 1;
                    next = entry;
                }
            }
            hist = history(collision);
            entry = next;
        } while (next != hist->data + hist->count);
    }
}

// 00D7B2C0  BattleCollisionManagerImplement::MainUpdateForPauseSlot::MainUpdateForPauseSlot  size=323  [class]
// Really the BattleCollisionManagerImplement constructor (writes its vftable 0x016C1354).
BattleCollisionManagerImplement::BattleCollisionManagerImplement(void *heapArg)
{
    using namespace BattleCollisionManagerImplement_p1;
    // vftable = BattleCollisionManagerImplement::vftable (0x016C1354)
    heap() = heapArg;
    lockInitialized() = 0;
    FUN_00dd7240((undefined4)lock());

    CollisionArray *array = (CollisionArray *)MemAlloc(0x210, heap());
    if (array == 0) {
        array = 0;
    }
    else {
        array->data = (Collision **)(array + 1);
        array->count = 0;
        array->capacity = 0x80;
        array->vftable = (void *)0x016C1300;  // lib::StaticArray<Collision*,128>::vftable
    }
    offenseList() = array;

    array = (CollisionArray *)MemAlloc(0x210, heap());
    if (array == 0) {
        array = 0;
    }
    else {
        array->data = (Collision **)(array + 1);
        array->count = 0;
        array->capacity = 0x80;
        array->vftable = (void *)0x016C1300;  // lib::StaticArray<Collision*,128>::vftable
    }
    list0C() = array;

    array = (CollisionArray *)MemAlloc(0x1010, heap());
    if (array == 0) {
        array = 0;
    }
    else {
        array->data = (Collision **)(array + 1);
        array->count = 0;
        array->capacity = 0x400;
        array->vftable = (void *)0x016C131C;  // lib::StaticArray<Collision*,1024>::vftable
    }
    defenseList() = array;

    array = (CollisionArray *)MemAlloc(0x1010, heap());
    if (array == 0) {
        array = 0;
    }
    else {
        array->data = (Collision **)(array + 1);
        array->count = 0;
        array->capacity = 0x400;
        array->vftable = (void *)0x016C131C;  // lib::StaticArray<Collision*,1024>::vftable
    }
    sortBuffer() = array;

    if (offenseList()->data != 0) {
        offenseList()->count = 0;
    }
    if (list0C()->data != 0) {
        list0C()->count = 0;
    }
    if (defenseList()->data != 0) {
        defenseList()->count = 0;
    }
    if (sortBuffer()->data != 0) {
        sortBuffer()->count = 0;
    }

    MainUpdateForPauseSlot *slot = (MainUpdateForPauseSlot *)MemAlloc(4, heap());
    if (slot == 0) {
        slot = 0;
    }
    else {
        *(void **)slot = (void *)0x016C0FFC;  // BattleCollisionManagerImplement::MainUpdateForPauseSlot::vftable
    }
    pauseSlot() = slot;
    cdeclcall<void>(FUN_00d89ec0, 9, slot);
}

// 00D7B410  BattleCollisionManagerImplement::vf10  size=94  [class]
// Releases the offense collision with the same Collision+0x354 as `collisionAddr`.
void BattleCollisionManagerImplement::vf10(int collisionAddr)
{
    using namespace BattleCollisionManagerImplement_p1;
    if (lockInitialized() != 0) {
        EnterCriticalSection(lock());
    }
    CollisionArray *list = offenseList();
    Collision **it = list->data;
    if (it != it + list->count) {
        Collision **end = it + list->count;
        do {
            if (collisionId(*it) == collisionId((Collision *)collisionAddr)) {
                FUN_00d7b0f0((int)*it);
                break;
            }
            it = it + 1;
        } while (it != end);
    }
    if (lockInitialized() != 0) {
        LeaveCriticalSection(lock());
    }
}

// 00D7B470  BattleCollisionManagerImplement::vf14  size=94  [class]
// Releases the defense collision with the same Collision+0x354 as `collisionAddr`.
void BattleCollisionManagerImplement::vf14(int collisionAddr)
{
    using namespace BattleCollisionManagerImplement_p1;
    if (lockInitialized() != 0) {
        EnterCriticalSection(lock());
    }
    CollisionArray *list = defenseList();
    Collision **it = list->data;
    if (it != it + list->count) {
        Collision **end = it + list->count;
        do {
            if (collisionId(*it) == collisionId((Collision *)collisionAddr)) {
                FUN_00d7b0f0((int)*it);
                break;
            }
            it = it + 1;
        } while (it != end);
    }
    if (lockInitialized() != 0) {
        LeaveCriticalSection(lock());
    }
}

// 00D7B4D0  FUN_00d7b4d0  size=175  [callgraph]
// BattleCollisionManagerImplement: for every released unique id, purge it from the hit
// histories of all defense and offense collisions.
void __fastcall FUN_00d7b4d0(int self)
{
    using namespace BattleCollisionManagerImplement_p1;
    BattleCollisionManagerImplement *manager = (BattleCollisionManagerImplement *)self;
    int pending = vcall<int>(DAT_01dc52e4, 0xC);
    while (pending != 0) {
        int releasedId = vcall<int>(DAT_01dc52e4, 0x8);
        Collision **it = manager->defenseList()->data;
        if (it != it + manager->defenseList()->count) {
            do {
                FUN_00d7b180((int)*it, releasedId);
                FUN_00d7b1f0((int)*it);
                it = it + 1;
            } while (it != manager->defenseList()->data + manager->defenseList()->count);
        }
        it = manager->offenseList()->data;
        if (it != it + manager->offenseList()->count) {
            do {
                FUN_00d7b180((int)*it, releasedId);
                FUN_00d7b1f0((int)*it);
                it = it + 1;
            } while (it != manager->offenseList()->data + manager->offenseList()->count);
        }
        pending = vcall<int>(DAT_01dc52e4, 0xC);
    }
}

// 00D7BD00  BattleCollisionManagerImplement::vf24  size=30  [class]
// Scalar deleting destructor.
undefined4 *BattleCollisionManagerImplement::vf24(byte flags)
{
    using namespace BattleCollisionManagerImplement_p1;
    // 00D7B9C0: destructor body (FILEMAP: BattleCollisionManager::BattleCollisionManager)
    thiscall<void>(0x00D7B9C0, this);
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00D7BD20  BattleCollisionManagerImplement::vf04  size=233  [class]
// Removes from both lists every collision for which FUN_00d7b8e0 returns 0.
void BattleCollisionManagerImplement::vf04()
{
    using namespace BattleCollisionManagerImplement_p1;
    Collision **it = offenseList()->data;
    if (it != it + offenseList()->count) {
        Collision **next;
        do {
            if (FUN_00d7b8e0((int)*it) == 0) {
                CollisionArray *list = offenseList();
                unsigned int count = list->count;
                Collision **data = list->data;
                next = data + count;
                if (it != next && data != 0 && count != 0 && (unsigned int)(it - data) < count) {
                    for (Collision **p = it; p != next - 1; p = p + 1) {
                        *p = p[1];
                    }
                    list->count = list->count - 1;
                    next = it;
                }
            }
            else {
                next = it + 1;
            }
            it = next;
        } while (next != offenseList()->data + offenseList()->count);
    }
    it = defenseList()->data;
    if (it != it + defenseList()->count) {
        Collision **next;
        do {
            if (FUN_00d7b8e0((int)*it) == 0) {
                CollisionArray *list = defenseList();
                unsigned int count = list->count;
                Collision **data = list->data;
                next = data + count;
                if (it != next && data != 0 && count != 0 && (unsigned int)(it - data) < count) {
                    for (Collision **p = it; p != next - 1; p = p + 1) {
                        *p = p[1];
                    }
                    list->count = list->count - 1;
                    next = it;
                }
            }
            else {
                next = it + 1;
            }
            it = next;
        } while (next != defenseList()->data + defenseList()->count);
    }
}

// 00D7DC80  BattleCollisionManagerImplement::vf00  size=529  [class]
// Per-frame update: sort / purge the lists, then test every active offense collision against
// every active defense collision and record the hits.
void BattleCollisionManagerImplement::vf00()
{
    using namespace BattleCollisionManagerImplement_p1;
    if (lockInitialized() != 0) {
        EnterCriticalSection(lock());
    }
    FUN_00d7a490((int *)this);
    FUN_00d7b4d0((int)this);
    FUN_00d7d970((int *)this);
    Collision **offenseIt;
    if ((DAT_01bea094 & 0x10000000) == 0 &&
        (offenseIt = offenseList()->data, offenseIt != offenseIt + offenseList()->count)) {
        do {
            Collision *offense = *offenseIt;
            if (isActive(offense) != 0) {
                IdPairArray *pairs = collideWithinOneFrame(offense);
                if (pairs != 0 && pairs->data != 0) {
                    pairs->count = 0;
                }
                vcall<void>(offense, 0x10);  // detectionForPenetration
                Collision **defenseIt = defenseList()->data;
                if (defenseIt != defenseIt + defenseList()->count) {
                    do {
                        Collision *defense = *defenseIt;
                        if (isActive(defense) != 0) {
                            bool test = (flags(offense) & 1) != 0;
                            if (!test) {
                                unsigned int defenseFlags = flags(defense);
                                test = (defenseFlags & 1) != 0 ||
                                       FUN_00d77ef0((int)offense, ownerPart(defense)) == 0 ||
                                       ((defenseFlags & 2) != 0 &&
                                        FUN_00d77f50((int)defense, (int)offense) == 0);
                            }
                            if (test) {
                                int *owner = (int *)FUN_00a7c8a0(userData(defense));
                                if (owner != 0 &&
                                    FUN_00dd6d80((undefined4 *)vcall<void *>(owner, 0x4),
                                                 (undefined4 *)DAT_01be9c24) != 0 &&
                                    FUN_00a8ef10((int)owner) != 0) {
                                    goto next_defense;
                                }
                                if (vcall<int>(DAT_01dc52e0, 0x0, filterGroup(offense), filterGroup(defense)) != 0 &&
                                    (ownerId(offense) == 0 || ownerId(defense) == 0 ||
                                     ownerId(offense) != ownerId(defense)) &&
                                    (FUN_00d77bf0((int)offense, ownerId(defense), ownerPart(defense)) == 0 ||
                                     (flags(defense) & 2) != 0) &&
                                    vcall<int>(offense, 0xC, defense) != 0) {
                                    FUN_00d79b40((int)offense, (int *)defense);
                                    FUN_00d79900((int)offense, ownerId(defense), ownerPart(defense));
                                }
                            }
                        }
                    next_defense:
                        defenseIt = defenseIt + 1;
                    } while (defenseIt != defenseList()->data + defenseList()->count);
                }
            }
            offenseIt = offenseIt + 1;
        } while (offenseIt != offenseList()->data + offenseList()->count);
    }
    if (lockInitialized() != 0) {
        LeaveCriticalSection(lock());
    }
}
