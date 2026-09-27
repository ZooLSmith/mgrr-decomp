// src/managers/cobjcutmanager/cObjCutManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cObjCutManager.h"

// Data referenced by this part
extern unsigned char DAT_01b7bd48[];  // default heap
extern int DAT_01b6efd0;              // argument of FUN_00d8aaf0
extern unsigned char DAT_016c2830[];  // debug message: startup failed

namespace cObjCutManager_p1 {

// __cdecl call of a function (symbol or address); used for __thiscall callees whose ECX the
// decompiler did not show ("ECX: ?").
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

} // namespace cObjCutManager_p1

// 00D8CF50  cObjCutManager::startup  size=186  [class]
undefined4 cObjCutManager::startup()
{
    using namespace cObjCutManager_p1;
    int ok;

    ok = cdeclcall<int>(FUN_00d8c640, 0x10, DAT_01b7bd48); /* ECX: ? */
    if (ok != 0) {
        field130() = 0;
        field134() = 0;
        field128() = 0;
        field12C() = 0;
        field138() = 0;
        ok = cdeclcall<int>(FUN_00d8c720, 0x800, DAT_01b7bd48); /* ECX: ? */
        if (ok != 0) {
            field178() = 0;
            field17C() = 0;
            field190() = 0;
            field180() = 100;
            field184() = 0;
            field188() = 100;
            field18C() = 0;
            field198() = 0;
            field194() = 0;
            cdeclcall<void>(FUN_00d8aaf0, DAT_01b6efd0); /* ECX: ? */
            return 1;
        }
    }
    cdeclcall<void>(FUN_00dd5650, DAT_016c2830);
    return 0;
}
