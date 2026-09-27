// src/managers/battlecollisionmanager/BattleCollisionManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "BattleCollisionManager.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
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
extern unsigned char DAT_01885d70[];  // cHavok world lock object (ECX of FUN_00dd72e0 / FUN_00dd7320)
extern unsigned char DAT_01b7b364[];  // cObjReadManager instance (ECX of FUN_009fe7d0)
// "cHavok::lock: trying to write to the world during the unlock period" (Shift-JIS, translated)
extern const char DAT_0163b898[];

// ---------------------------------------------------------------------------------------------
// Helpers.  The destructor body works on BattleCollisionManagerImplement and Collision objects,
// whose headers this file does not include: their fields are read through fld<>() with the
// owning class and offset in a comment.
// ---------------------------------------------------------------------------------------------
namespace BattleCollisionManager_p1 {

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

// __thiscall call of a function with ECX = self
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// __cdecl call of a function
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// lib::StaticArray<Collision*,N> header; vftable slot 0x0 = scalar deleting destructor
struct CollisionArray {
    void         *vftable;  // +0x0
    Collision   **data;     // +0x4
    unsigned int  count;    // +0x8
    unsigned int  capacity; // +0xC
};

// BattleCollisionManagerImplement fields
inline CollisionArray *&offenseList(void *m) { return fld<CollisionArray *>(m, 0x8); }  // BattleCollisionManagerImplement+0x8
inline CollisionArray *&list0C(void *m)      { return fld<CollisionArray *>(m, 0xC); }  // BattleCollisionManagerImplement+0xC
inline CollisionArray *&defenseList(void *m) { return fld<CollisionArray *>(m, 0x10); } // BattleCollisionManagerImplement+0x10
inline CollisionArray *&sortBuffer(void *m)  { return fld<CollisionArray *>(m, 0x14); } // BattleCollisionManagerImplement+0x14
inline void            *lock(void *m)        { return (char *)m + 0x18; }                // BattleCollisionManagerImplement+0x18 CRITICAL_SECTION
inline int            *&pauseSlot(void *m)   { return fld<int *>(m, 0x38); }             // BattleCollisionManagerImplement+0x38

// Collision fields
inline int &phantom(Collision *c)     { return fld<int>(c, 0x37C); }  // Collision+0x37C PhantomHolder *
inline int &objDatId(Collision *c)    { return fld<int>(c, 0x428); }  // Collision+0x428
inline int &objDatIndex(Collision *c) { return fld<int>(c, 0x42C); }  // Collision+0x42C
inline int &objDatData(Collision *c)  { return fld<int>(c, 0x430); }  // Collision+0x430

// Per-thread lock depth of the cHavok world lock (TLS block +4).
inline int *havokLockDepth()
{
    char **tlsArray = (char **)__readfsdword(0x2C);
    return (int *)(tlsArray[_tls_index] + 4);
}

// Inlined cHavok world lock (guard constructor).
inline void havokLock()
{
    if (DAT_01885d68 != 1) {
        int *lockDepth = havokLockDepth();
        if (*lockDepth == 0 && DAT_01b35fac != 0) {
            if (DAT_01885db8 == 0) {
                FUN_00dd72e0((int)DAT_01885d70);
            }
            else {
                cdeclcall<void>(FUN_00dd5650, DAT_0163b898);
            }
        }
        *lockDepth = *lockDepth + 1;
    }
}

// Inlined cHavok world unlock (guard destructor).
inline void havokUnlock()
{
    if (DAT_01885d68 != 1) {
        int *lockDepth = havokLockDepth();
        *lockDepth = *lockDepth - 1;
        if (*lockDepth == 0 && DAT_01b35fac != 0 && DAT_01885db8 == 0) {
            FUN_00dd7320((int)DAT_01885d70);
        }
    }
}

// Removes the collision's phantom from the world, releases its object data and deletes it.
inline void destroyCollision(Collision *collision)
{
    int holder = phantom(collision);
    if (holder != 0) {
        havokLock();
        FUN_00900ca0((int *)(holder + 0x4));  /* PhantomHolder+0x4: phantom reference */
        fld<int>((void *)holder, 0x14) = 0;    /* PhantomHolder+0x14: shape */
        havokUnlock();
        FUN_00dd4920(holder);
        phantom(collision) = 0;
    }
    if (objDatId(collision) != -1) {
        thiscall<void>(FUN_009fe7d0, DAT_01b7b364, objDatId(collision), objDatIndex(collision));
    }
    objDatId(collision) = -1;
    objDatIndex(collision) = -1;
    objDatData(collision) = 0;
    vcall<void>(collision, 0x8, 1);  // scalar deleting destructor
}

// Empties an array (count = 0) when it has storage.
inline void clearArray(CollisionArray *list)
{
    if (list->data != 0) {
        list->count = 0;
    }
}

// Deletes an array object and clears the pointer.
inline void deleteArray(CollisionArray *&list)
{
    if (list != 0) {
        vcall<void>(list, 0x0, 1);  // scalar deleting destructor
        list = 0;
    }
}

}  // namespace BattleCollisionManager_p1

// 00D770A0  BattleCollisionManager::vf24  size=31  [class]
// Scalar deleting destructor.
undefined4 *BattleCollisionManager::vf24(byte flags)
{
    // vftable = BattleCollisionManager::vftable (0x016C0FB4)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00D7B9C0  BattleCollisionManager::BattleCollisionManager  size=818  [class]
// Destructor body of BattleCollisionManagerImplement: unregisters and deletes the pause slot,
// destroys every offense / defense collision, deletes the four lists and the lock.
void BattleCollisionManager::implementDestructor()
{
    using namespace BattleCollisionManager_p1;
    // vftable = BattleCollisionManagerImplement::vftable (0x016C1354)
    cdeclcall<void>(FUN_00d8a1d0, 9, pauseSlot(this));  // unregister slot id 9
    if (pauseSlot(this) != 0) {
        vcall<void>(pauseSlot(this), 0x0, 1);  // scalar deleting destructor
        pauseSlot(this) = 0;
    }
    clearArray(list0C(this));
    clearArray(sortBuffer(this));
    deleteArray(sortBuffer(this));
    deleteArray(list0C(this));

    Collision **it = offenseList(this)->data;
    if (it != it + offenseList(this)->count) {
        do {
            destroyCollision(*it);
            it = it + 1;
        } while (it != offenseList(this)->data + offenseList(this)->count);
    }
    clearArray(offenseList(this));

    it = defenseList(this)->data;
    if (it != it + defenseList(this)->count) {
        do {
            destroyCollision(*it);
            it = it + 1;
        } while (it != defenseList(this)->data + defenseList(this)->count);
    }
    clearArray(defenseList(this));

    deleteArray(offenseList(this));
    deleteArray(defenseList(this));
    FUN_00dd7270((undefined4)lock(this));
    FUN_00dd7270((undefined4)lock(this));
    // vftable = BattleCollisionManager::vftable (0x016C0FB4)
}
