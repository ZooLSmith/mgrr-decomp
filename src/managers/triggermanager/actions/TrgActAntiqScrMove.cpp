// src/managers/triggermanager/actions/TrgActAntiqScrMove.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016ab93c;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    unsigned char __fastcall ANTIQ_SCR_MOVE(int action);
} }

namespace TrgActAntiqScrMove_p1 {

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

}  // namespace TrgActAntiqScrMove_p1

// 00C80BE0  Trigger::Act::ANTIQ_SCR_MOVE  size=44  [class]
unsigned char __fastcall Trigger::Act::ANTIQ_SCR_MOVE(int action)
{
    using namespace TrgActAntiqScrMove_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016ab93c);
        return 0;
    }
    return (unsigned char)FUN_00a5be00(0xFFFFFFFF, 1);
}
