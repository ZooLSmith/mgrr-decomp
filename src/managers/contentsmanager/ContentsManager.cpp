// src/managers/contentsmanager/ContentsManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ContentsManager.h"

namespace ContentsManager_p1 {

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

} // namespace ContentsManager_p1

// 008DC750  ContentsManager::vf00  size=31  [class]
undefined4 *ContentsManager::vf00(byte flags)
{
    // vftable = ContentsManager::vftable
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 008DF780  ContentsManager::ContentsManager  size=113  [class]
void ContentsManager::dtor_008DF780()  // ContentsManagerImplement destructor
{
    using namespace ContentsManager_p1;
    int **contents = (int **)((char *)this + 0x2c);  /* ContentsManagerImplement+0x2C: contents */
    int *it;

    // vftable = ContentsManagerImplement::vftable
    it = *(int **)((int)*contents + 4);
    if (it != it + *(int *)((int)*contents + 8)) {
        do {
            if ((int *)*it != 0) {
                vcall<void>((int *)*it, 0x4, 1);  // content: scalar deleting destructor
            }
            it = it + 1;
        } while (it != (int *)(*(int *)((int)*contents + 4) + *(int *)((int)*contents + 8) * 4));
    }
    if (*contents != 0) {
        vcall<void>(*contents, 0x0, 1);  // array: scalar deleting destructor
        *contents = 0;
    }
    cdeclcall<void>(FUN_00dd7270); /* ECX: ? (likely the critical section at +0x8) */
    cdeclcall<void>(FUN_00dd7270); /* ECX: ? */
    // vftable = ContentsManager::vftable
}
