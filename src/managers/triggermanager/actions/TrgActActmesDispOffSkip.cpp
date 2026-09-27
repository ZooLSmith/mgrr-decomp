// src/managers/triggermanager/actions/TrgActActmesDispOffSkip.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016ab8d4;  // error message format string
extern int DAT_01dc0744;  // action-message display-off skip

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall ACTMES_DISP_OFF_SKIP(int action);
} }

namespace TrgActActmesDispOffSkip_p1 {

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

}  // namespace TrgActActmesDispOffSkip_p1

// 00C80B50  Trigger::Act::ACTMES_DISP_OFF_SKIP  size=37  [class]
int __fastcall Trigger::Act::ACTMES_DISP_OFF_SKIP(int action)
{
    using namespace TrgActActmesDispOffSkip_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016ab8d4);
        return 0;
    }
    DAT_01dc0744 = 1;
    return 1;
}
