// src/managers/triggermanager/actions/TrgActDel.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016b1168;  // error message format string
extern undefined DAT_016b1198;  // error message format string
extern undefined DAT_016b11c4;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall DEL(int action);
} }

namespace TrgActDel_p1 {

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

// small pointer list on the stack with 16 inline entries (filled by FUN_00c77fc0)
struct PointerList {
    undefined4 unk0;         // +0x00
    char      *data;         // +0x04  -> storage or heap block
    undefined4 capacity;     // +0x08
    int        count;        // +0x0C
    int        ownsBuffer;   // +0x10
    undefined1 storage[64];  // +0x14
};

// frees the list's heap block (inlined twice)
inline void releaseList(PointerList *list)
{
    if (list->data != 0 && (list->count = 0, list->ownsBuffer != 0)) {
        FUN_00dd48d0((int)list->data, 0);
    }
}

}  // namespace TrgActDel_p1

// 00C96CB0  Trigger::Act::DEL  size=255  [class]
// Deletes every object matched by the name in the action parameters.
int __fastcall Trigger::Act::DEL(int action)
{
    using namespace TrgActDel_p1;
    PointerList list;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016b11c4);
        return 0;
    }
    int name = at<int>(action, 4) + 8;
    if (name == 0) {
        reportError(&DAT_016b1198);
        return 0;
    }
    list.data = (char *)list.storage;
    list.unk0 = 0;
    list.capacity = 0x10;
    list.count = 0;
    list.ownsBuffer = 0;
    if (((int (*)(int, PointerList *))FUN_00c77fc0)(name, &list) == 0) {
        reportError(&DAT_016b1168);
        releaseList(&list);
        return 0;
    }
    int result = 1;
    for (int i = 0; i < list.count; i = i + 1) {
        if (*(int *)(list.data + i * 4) == 0) {
            reportError(&DAT_016b1168);
            result = 0;
        }
        else {
            ((void (*)(void))FUN_00a805f0)();
        }
    }
    releaseList(&list);
    return result;
}
