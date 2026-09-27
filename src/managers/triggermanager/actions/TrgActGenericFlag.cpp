// src/managers/triggermanager/actions/TrgActGenericFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016abeec[];  // debug message: action has no parameter block (%s = on/off)
extern char DAT_0164ced4[];  // string used when the action id is 0xAD
extern char DAT_0164ced8[];  // string used otherwise

namespace Trigger { namespace Act {
int __fastcall GENERIC_FLAG_(int *action);
} }

namespace TrgActGenericFlag_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

const int ACT_GENERIC_FLAG_ON = 0xAD;  // action id that sets the flag (the other one clears it)

}  // namespace TrgActGenericFlag_p1

// 00C81500  Trigger::Act::GENERIC_FLAG_  size=99  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
// Sets or clears generic flag 1..32 (parameter block +0x4 = action id, +0x8 = flag number).
int __fastcall Trigger::Act::GENERIC_FLAG_(int *action)
{
    using namespace TrgActGenericFlag_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        // The action id is read through the null parameter block (address 0 + 0x4).
        char *onOff = DAT_0164ced4;
        if (*(int *)0x4 != ACT_GENERIC_FLAG_ON) {
            onOff = DAT_0164ced8;
        }
        debugPrint(DAT_016abeec, onOff);
    }
    else {
        int flagNo = params[2];  // +0x8
        if ((0 < flagNo) && (flagNo < 0x21)) {
            if (params[1] == ACT_GENERIC_FLAG_ON) {  // +0x4 action id
                call<void (*)(int)>(FUN_00c20790)(flagNo); /* ECX: ? */
                return 1;
            }
            call<void (*)(int)>(FUN_00c207b0)(flagNo); /* ECX: ? */
            return 1;
        }
    }
    return 0;
}
