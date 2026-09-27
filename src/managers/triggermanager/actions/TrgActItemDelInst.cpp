// src/managers/triggermanager/actions/TrgActItemDelInst.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016abe88[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall ITEM_DEL_INST(int *action);
} }

namespace TrgActItemDelInst_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActItemDelInst_p1

// 00C814A0  Trigger::Act::ITEM_DEL_INST  size=45  [class]
// Deletes item instance params+0x8 (FUN_0094e9e0).
int __fastcall Trigger::Act::ITEM_DEL_INST(int *action)
{
    using namespace TrgActItemDelInst_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016abe88);
        return 0;
    }
    int *params = (int *)action[1];
    FUN_0094e9e0(params[2]);
    return 1;
}
