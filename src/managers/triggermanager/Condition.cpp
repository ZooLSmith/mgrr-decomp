// src/managers/triggermanager/Condition.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016b0d88;  // error message format string
extern undefined DAT_016b0dc8;  // error message format string
extern int DAT_01dbd1cc;  // scripted-mesh search result (+4 entries, +0xC count)

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Condition {
    int __fastcall IS_SCR_MESH_ON(int condition);
    int __fastcall IS_SCR_MESH_OFF(int condition);
} }

namespace Condition_p1 {

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

}  // namespace Condition_p1

// 00C962D0  Trigger::Condition::IS_SCR_MESH_ON  size=183  [class]
// True when every scripted mesh found for the condition has its mesh part (+0x24) switched on.
int __fastcall Trigger::Condition::IS_SCR_MESH_ON(int condition)
{
    using namespace Condition_p1;
    if (DAT_01dbd1cc == 0) {
        reportError(&DAT_016b0d88);
        return 0;
    }
    at<int>(DAT_01dbd1cc, 0xC) = 0;
    int results = DAT_01dbd1cc;
    int searchKey = at<int>(condition, 0x10);
    if (condition + 0x14 != 0) {
        int *finder = (int *)FUN_00c14bb0();
        ((void (*)(int, int, int))vslot(finder, 0x14))(results, condition + 0x14, searchKey);
        if (at<int>(results, 0xC) != 0) {
            int cursor = at<int>(DAT_01dbd1cc, 4);
            int allOn = 1;
            if (cursor != cursor + at<int>(DAT_01dbd1cc, 0xC) * 4) {
                do {
                    int object = ((int (*)(void))FUN_00a7c8a0)();
                    int partNo = at<int>(condition, 0x24);
                    if (-1 < partNo && partNo < at<short>(object, 0x324)) {
                        int part = partNo * 0x70 + at<int>(object, 800);
                        if (part != 0 && (at<unsigned char>(part, 0x38) & 1) == 0) {
                            allOn = 0;
                        }
                    }
                    cursor = cursor + 4;
                } while (cursor != at<int>(DAT_01dbd1cc, 4) + at<int>(DAT_01dbd1cc, 0xC) * 4);
            }
            return allOn;
        }
    }
    return 0;
}

// 00C96390  Trigger::Condition::IS_SCR_MESH_OFF  size=197  [class]
// True when at least one found mesh part is off and none is on.
int __fastcall Trigger::Condition::IS_SCR_MESH_OFF(int condition)
{
    using namespace Condition_p1;
    if (DAT_01dbd1cc == 0) {
        reportError(&DAT_016b0dc8);
        return 0;
    }
    at<int>(DAT_01dbd1cc, 0xC) = 0;
    int results = DAT_01dbd1cc;
    undefined4 searchKey = at<undefined4>(condition, 0x10);
    if (condition + 0x14 != 0) {
        int *finder = (int *)FUN_00c14bb0();
        ((void (*)(int, int, undefined4))vslot(finder, 0x14))(results, condition + 0x14, searchKey);
        if (at<int>(results, 0xC) != 0) {
            int cursor = at<int>(DAT_01dbd1cc, 4);
            int foundOff = 0;
            bool foundOn = false;
            if (cursor == cursor + at<int>(DAT_01dbd1cc, 0xC) * 4) {
                return 0;
            }
            do {
                int object = ((int (*)(void))FUN_00a7c8a0)();
                int partNo = at<int>(condition, 0x24);
                if (-1 < partNo && partNo < at<short>(object, 0x324)) {
                    int part = partNo * 0x70 + at<int>(object, 800);
                    if (part != 0) {
                        if ((at<unsigned char>(part, 0x38) & 1) == 0) {
                            foundOff = 1;
                        }
                        else {
                            foundOn = true;
                        }
                    }
                }
                cursor = cursor + 4;
            } while (cursor != at<int>(DAT_01dbd1cc, 4) + at<int>(DAT_01dbd1cc, 0xC) * 4);
            if (foundOff != 1) {
                return foundOff;
            }
            if (!foundOn) {
                return 1;
            }
        }
    }
    return 0;
}
