// src/managers/triggermanager/actions/TrgActFunction.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aa838;  // error message format string
extern undefined DAT_016aa864;  // error message format string
extern undefined DAT_016aa89c;  // error message format string
extern undefined DAT_016aa8d8;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int FUNCTION(int action, undefined4 argument);
} }

namespace TrgActFunction_p1 {

// field at a byte offset of a record whose layout is not modelled
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// address stored in the vftable slot at byte offset `offset` of `object`
inline int vslot(int *object, int offset) { return *(int *)(*object + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }
template <class A, class B> inline void reportError(const void *format, A a, B b)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b); }
template <class A, class B, class C> inline void reportError(const void *format, A a, B b, C c)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b, c); }

}  // namespace TrgActFunction_p1

// 00C7EE60  Trigger::Act::FUNCTION  size=158  [class]
// __thiscall in the binary (ECX = action). Resolves the named script function once (cached at
// action+8 when +0xC is set) and calls it with `argument`.
int Trigger::Act::FUNCTION(int action, undefined4 argument)
{
    using namespace TrgActFunction_p1;
    if (at<int>(action, 0xC) != 0) {
        int params = at<int>(action, 4);
        if (params == 0) {
            reportError(&DAT_016aa8d8);
            return 0;
        }
        int *manager = (int *)FUN_00a6dd90();
        int *registry = (int *)((int (*)(void))vslot(manager, 0x30))();
        if (registry == 0) {
            reportError(&DAT_016aa89c);
            return 0;
        }
        int functionName = params + 8;
        int function = ((int (*)(int))vslot(registry, 0x30))(functionName);
        at<int>(action, 8) = function;
        if (function == 0) {
            reportError(&DAT_016aa864, functionName);
            return 0;
        }
    }
    if (at<int>(action, 8) == 0) {
        reportError(&DAT_016aa838);
        return 0;
    }
    return ((int (*)(undefined4))at<int>(action, 8))(argument);
}
