// src/managers/charactercontrolmanager/CharacterControlManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "CharacterControlManager.h"

namespace CharacterControlManager_p1 {

// __cdecl call of a function (symbol or address); used for __fastcall callees whose ECX the
// decompiler did not show ("ECX: ?").
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

} // namespace CharacterControlManager_p1

// 008E08D0  CharacterControlManager::vf00  size=31  [class]
undefined4 *CharacterControlManager::vf00(byte flags)
{
    // vftable = CharacterControlManager::vftable
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 008EA2B0  CharacterControlManager::CharacterControlManager  size=57  [class]
void CharacterControlManager::dtor_008EA2B0()  // CharacterControlManagerImplement destructor
{
    using namespace CharacterControlManager_p1;
    int **controls = (int **)((char *)this + 4);  /* CharacterControlManagerImplement+0x4: controls */

    // vftable = CharacterControlManagerImplement::vftable
    cdeclcall<void>(FUN_00dd7270); /* ECX: ? (likely the critical section at +0x8) */
    if (*controls != 0) {
        vcall<void>(*controls, 0x0, 1);  // scalar deleting destructor
        *controls = 0;
    }
    cdeclcall<void>(FUN_00dd7270); /* ECX: ? */
    // vftable = CharacterControlManager::vftable
}
