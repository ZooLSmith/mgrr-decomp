// src/managers/csceneespmanager/cSceneEspManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cSceneEspManager.h"

// Data referenced by this part
extern unsigned char DAT_016dfad0[];  // assertion message format

namespace cSceneEspManager_p1 {

// __cdecl call of a function (symbol or address) with the argument list / return seen at the call site.
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

} // namespace cSceneEspManager_p1

// 00F41080  cSceneEspManager::getEventTimeRate  size=60  [class]
float cSceneEspManager::getEventTimeRate(int esp)
{
    using namespace cSceneEspManager_p1;
    if (esp == 0) {
        cdeclcall<void>(FUN_00dd5650, DAT_016dfad0, "[cSceneEspManager::getEventTimeRate] pEsp != NULL");
    }
    if (fixedTimeRate() != 0) {
        return 1.0f;
    }
    return cdeclcall<float>(FUN_009cde00, esp);
}
