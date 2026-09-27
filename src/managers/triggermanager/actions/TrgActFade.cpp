// src/managers/triggermanager/actions/TrgActFade.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016b16b4;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    bool __fastcall FADE(int action);
} }

namespace TrgActFade_p1 {

// field at a byte offset of a record whose layout is not modelled
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }
template <class A, class B> inline void reportError(const void *format, A a, B b)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b); }
template <class A, class B, class C> inline void reportError(const void *format, A a, B b, C c)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b, c); }

// 00EC1AB0 cFade::set -- the raw decompilation shows these seven stack arguments only
inline int setFade(int a0, undefined4 a1, undefined4 a2, undefined4 a3, int a4, int a5, int a6)
{
    return ((int (*)(int, undefined4, undefined4, undefined4, int, int, int))0x00EC1AB0)(a0, a1, a2, a3, a4, a5, a6);
}

// block handed to FUN_00c95710 (words not written here stay uninitialised)
struct FadeWait {
    undefined4 unk0;       // -0x24
    int        params;     // -0x20
    undefined4 unk8[3];    // -0x1C .. -0x14
    int        fade;       // -0x10
};

}  // namespace TrgActFade_p1

// 00C97E10  Trigger::Act::FADE  size=114  [class]
bool __fastcall Trigger::Act::FADE(int action)
{
    using namespace TrgActFade_p1;
    FadeWait wait;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016b16b4);
        return false;
    }
    int fade = setFade(0, at<undefined4>(params, 8), at<undefined4>(params, 0xC), at<undefined4>(params, 0x10), 1, 0, 0x68);
    if (fade != 0) {
        wait.unk0 = 0;
        wait.params = params;
        wait.fade = fade;
        FUN_00c95710((undefined4 *)&wait);
    }
    return fade != 0;
}
