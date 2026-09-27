// src/managers/triggermanager/actions/TrgActResultSetDisp.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016b1434[];  // debug message: action has no parameter block
extern int DAT_01dc1308;     // result display flag
extern int DAT_01dc1310;     // result display flag

namespace Trigger { namespace Act {
int __fastcall RESULTSETDISP(int *action);
} }

namespace TrgActResultSetDisp_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

}  // namespace TrgActResultSetDisp_p1

// 00C97190  Trigger::Act::RESULTSETDISP  size=139  [__FILE__]
// Copies the display time (params+0xC) and mode (params+0x8) into the action (+0xC / +0x8) and
// registers the task at 0x00C92D70 when the mode is 1 or the time is positive.
int __fastcall Trigger::Act::RESULTSETDISP(int *action)
{
    using namespace TrgActResultSetDisp_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params != 0) {
        float time = *(float *)(params + 3);  // params+0xC
        *(float *)(action + 3) = time;        // action+0xC
        if (time == 0.0f) {
            DAT_01dc1308 = 1;
            DAT_01dc1310 = 0;
        }
        int mode = params[2];  // params+0x8
        action[2] = mode;      // action+0x8
        if ((mode == 1) || (0.0f < *(float *)(action + 3))) {
            // 0x00C92D70 (LAB_00c92d70): code label of the task body, not a declared function
            call<void (*)(void *, int, int, const char *, int)>(FUN_00c950a0)(
                (void *)0x00C92D70, 0, 0,
                "d:\\project\\prj_020\\p1\\common\\src\\managers\\triggermanager\\actions/TrgActResultSetDisp.cpp",
                0x22);
        }
        if (params[2] == 0) {
            DAT_01dc1310 = 1;
        }
        return 1;
    }
    debugPrint(DAT_016b1434);
    return 0;
}
