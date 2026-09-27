// src/managers/triggermanager/actions/TrgActEffect.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016b0e54;  // error message format string
extern undefined DAT_016b0e90;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall EFFECT(int action);
} }

namespace TrgActEffect_p1 {

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

// small pointer list on the stack with 16 inline entries
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

}  // namespace TrgActEffect_p1

// 00C96670  Trigger::Act::EFFECT  size=319  [class]
// Collects the target objects (by name, by id, or by name + id) and starts effect +0x1C on each.
int __fastcall Trigger::Act::EFFECT(int action)
{
    using namespace TrgActEffect_p1;
    PointerList list;
    int params = at<int>(action, 4);
    int i = 0;
    if (params == 0) {
        reportError(&DAT_016b0e90);
        return 0;
    }
    list.data = (char *)list.storage;
    list.unk0 = 0;
    list.capacity = 0x10;
    list.count = 0;
    list.ownsBuffer = 0;
    int objectId = at<int>(params, 8);
    char *name = (char *)(params + 0xC);
    if (objectId == -1) {
        ((int (*)(char *, PointerList *))FUN_00c77fc0)(name, &list);
    }
    else if (name[0] == '\0') {  // inlined strlen(name) == 0
        ((void (*)(PointerList *, int))FUN_00a814d0)(&list, objectId);
    }
    else {
        ((int (*)(char *, int, PointerList *))FUN_00c959c0)(name, objectId, &list);
    }
    if (list.count == 0) {
        releaseList(&list);
        return 0;
    }
    int result = 1;
    for (; i < list.count; i = i + 1) {
        if (*(int *)(list.data + i * 4) == 0) {
            if (at<int>(params, 8) == -1) {
                reportError(&DAT_016b0e54, name);
            }
            result = 0;
        }
        else if (result == 0) {
            result = 0;
        }
        else {
            undefined4 effectId = at<undefined4>(params, 0x1C);
            FUN_00a7c8a0(effectId);
            result = ((int (*)(undefined4))FUN_00aa92c0)(effectId);
            if (result == 0) {
                result = 0;
            }
            else {
                result = 1;
            }
        }
    }
    releaseList(&list);
    return result;
}
