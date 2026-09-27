// src/managers/triggermanager/actions/TrgActEnmRet.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aa7e0;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall ENM_RET(int action);
    int __fastcall ENM_RET_2(int action);
} }

namespace TrgActEnmRet_p1 {

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

}  // namespace TrgActEnmRet_p1

// 00C7ED10  Trigger::Act::ENM_RET  size=92  [class]
int __fastcall Trigger::Act::ENM_RET(int action)
{
    using namespace TrgActEnmRet_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016aa7e0);
        return 0;
    }
    char *setName = (char *)(at<int>(action, 4) + 8);
    if (__stricmp((char *)"all", setName) == 0) {
        FUN_00c19210();
        return 1;
    }
    unsigned int setNo = ((unsigned int (*)(char *))FUN_00c18740)(setName);
    ((void (*)(unsigned int))FUN_00c192d0)(setNo);
    return 1;
}

// 00C7ED70  Trigger::Act::ENM_RET_2  size=47  [class]
int __fastcall Trigger::Act::ENM_RET_2(int action)
{
    using namespace TrgActEnmRet_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016aa7e0);
        return 0;
    }
    ((void (*)(undefined4))FUN_00c192d0)(at<undefined4>(at<int>(action, 4), 8));
    return 1;
}
