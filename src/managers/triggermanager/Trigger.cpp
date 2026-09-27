// src/managers/triggermanager/Trigger.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aabb4;  // error message format string
extern undefined DAT_016b1924;  // error message format string
extern undefined DAT_016b1984;  // error message format string
extern undefined DAT_016b19b0;  // error message format string
extern unsigned int DAT_01bea060;  // game state flags
extern int DAT_01dbd1d0;

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger {
    int __fastcall Act(int action);
    int __fastcall AREA(int record);
    int __fastcall AREA_2(int record);
    int __fastcall AREA_3(int record);
    int __fastcall SCENARIO_AREA(int record);
}

namespace Trigger_p1 {

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

// lib::Array<Entity*> built on the stack over a record's inline storage
struct EntityArray {
    void        *vftable;   // +0x0  lib::Array<Entity*>::vftable
    int          data;      // +0x4  -> Entity* entries
    unsigned int count;     // +0x8
    undefined4   capacity;  // +0xC
};

// lib::Array<Entity*>::vftable
void *const kEntityArrayVftable = (void *)0x0163EEDC;

// 004BDDD0 lib::Array<Entity*>::vf08 (append). The raw decompilation shows only the pushed
// element pointer; in the machine code ECX is presumably the array.
inline void appendEntity(void *element) { ((void (*)(void *))0x004BDDD0)(element); }

// The FUN_00c18xxx/FUN_00c19xxx enemy-set queries are __thiscall in the binary; the raw
// decompilation shows only the stack arguments, which are what is passed here.
inline int groupExists(int group) { return ((int (*)(int))FUN_00c18cc0)(group); }
inline int subGroupExists(int group, int subGroup) { return ((int (*)(int, int))FUN_00c18c10)(group, subGroup); }
inline int collectGroup(undefined4 group, EntityArray *out) { return ((int (*)(undefined4, EntityArray *))FUN_00c19d30)(group, out); }
inline int collectSubGroup(undefined4 group, undefined4 subGroup, EntityArray *out)
{ return ((int (*)(undefined4, undefined4, EntityArray *))FUN_00c19d00)(group, subGroup, out); }
inline unsigned int findEntity(undefined4 group, undefined4 subGroup, int index)
{ return ((unsigned int (*)(undefined4, undefined4, int))FUN_00c19c00)(group, subGroup, index); }

// Tests area `areaNo` (short at record+0x10) with collision layer `layer` through the area
// manager's vf2C. The vftable is read before the area lookup, as in the machine code.
inline int testArea(int record, int layer)
{
    int vftable = *(int *)FUN_00a6e640();
    int area = ((int (*)(short, int))FUN_00a7c8b0)(*(short *)(record + 0x10), layer);
    return ((int (*)(int))*(int *)(vftable + 0x2C))(area);
}

}  // namespace Trigger_p1

// 00C7F450  Trigger::Act  size=76  [class]
int __fastcall Trigger::Act(int action)
{
    using namespace Trigger_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        const char *kind = "ROOM";
        if (*(int *)4 != 0x3E) {  // ? reads params->type through the null params pointer
            kind = "PHASE";
        }
        reportError(&DAT_016aabb4, kind);
        return 0;
    }
    FUN_00c1d810(at<undefined4>(params, 8), at<int>(params, 4) == 0x3E, 0, 0);
    return 1;
}

// 00C9C6C0  Trigger::AREA  size=433  [class]
// Finds the first enemy of group/subgroup/index (+0x14/+0x18/+0x1C) inside area layer 1 or 2
// and stores it at +0x20.
int __fastcall Trigger::AREA(int record)
{
    using namespace Trigger_p1;
    EntityArray list;
    list.data = at<int>(record, 0x24);
    int group = at<int>(record, 0x14);
    list.vftable = kEntityArrayVftable;
    list.count = 0;
    list.capacity = 0x10;
    if (group == -1) {
        goto badArgs;
    }
    if (at<int>(record, 0x18) == -1 && at<int>(record, 0x1C) == -1) {
        if (groupExists(group) == 0) {
            return 0;
        }
        if (collectGroup(at<undefined4>(record, 0x14), &list) == 0) {
            return 0;
        }
    }
    else {
        if (group == -1 || at<int>(record, 0x18) == -1) {
            goto badArgs;
        }
        if (subGroupExists(group, at<int>(record, 0x18)) == 0) {
            return 0;
        }
        if (at<int>(record, 0x1C) == -1) {
            if (collectSubGroup(at<undefined4>(record, 0x14), at<undefined4>(record, 0x18), &list) == 0) {
                return 0;
            }
        }
        else {
            unsigned int found[2];
            found[0] = findEntity(at<undefined4>(record, 0x14), at<undefined4>(record, 0x18), at<int>(record, 0x1C));
            if (found[0] == 0) {
                return 0;
            }
            appendEntity(found);
        }
    }
    for (unsigned int i = 0; i < list.count; i = i + 1) {
        if (at<int>(list.data, i * 4) != 0) {
            int inLayer1 = testArea(record, 1);
            int inLayer2 = testArea(record, 2);
            if (inLayer1 != 0 || inLayer2 != 0) {
                at<undefined4>(record, 0x20) = at<undefined4>(list.data, i * 4);
                return 1;
            }
        }
    }
    return 0;
badArgs:
    reportError(&DAT_016b1924, group, at<undefined4>(record, 0x18), at<undefined4>(record, 0x1C));
    return 0;
}

// 00C9C960  Trigger::AREA_2  size=433  [class]
// As AREA, but matches an enemy that is outside area layer 1 or outside layer 2.
int __fastcall Trigger::AREA_2(int record)
{
    using namespace Trigger_p1;
    EntityArray list;
    list.data = at<int>(record, 0x24);
    int group = at<int>(record, 0x14);
    list.vftable = kEntityArrayVftable;
    list.count = 0;
    list.capacity = 0x10;
    if (group == -1) {
        goto badArgs;
    }
    if (at<int>(record, 0x18) == -1 && at<int>(record, 0x1C) == -1) {
        if (groupExists(group) == 0) {
            return 0;
        }
        if (collectGroup(at<undefined4>(record, 0x14), &list) == 0) {
            return 0;
        }
    }
    else {
        if (group == -1 || at<int>(record, 0x18) == -1) {
            goto badArgs;
        }
        if (subGroupExists(group, at<int>(record, 0x18)) == 0) {
            return 0;
        }
        if (at<int>(record, 0x1C) == -1) {
            if (collectSubGroup(at<undefined4>(record, 0x14), at<undefined4>(record, 0x18), &list) == 0) {
                return 0;
            }
        }
        else {
            unsigned int found[2];
            found[0] = findEntity(at<undefined4>(record, 0x14), at<undefined4>(record, 0x18), at<int>(record, 0x1C));
            if (found[0] == 0) {
                return 0;
            }
            appendEntity(found);
        }
    }
    for (unsigned int i = 0; i < list.count; i = i + 1) {
        if (at<int>(list.data, i * 4) != 0) {
            int inLayer1 = testArea(record, 1);
            int inLayer2 = testArea(record, 2);
            if (inLayer1 == 0 || inLayer2 == 0) {
                at<undefined4>(record, 0x20) = at<undefined4>(list.data, i * 4);
                return 1;
            }
        }
    }
    return 0;
badArgs:
    reportError(&DAT_016b1924, group, at<undefined4>(record, 0x18), at<undefined4>(record, 0x1C));
    return 0;
}

// 00C9CD90  Trigger::AREA_3  size=355  [class]
// As AREA, testing area layer 2 only.
int __fastcall Trigger::AREA_3(int record)
{
    using namespace Trigger_p1;
    EntityArray list;
    list.data = at<int>(record, 0x24);
    int group = at<int>(record, 0x14);
    unsigned int i = 0;
    list.vftable = kEntityArrayVftable;
    list.count = 0;
    list.capacity = 0x10;
    if (group == -1) {
        goto badArgs;
    }
    if (at<int>(record, 0x18) == -1 && at<int>(record, 0x1C) == -1) {
        if (groupExists(group) == 0) {
            return 0;
        }
        if (collectGroup(at<undefined4>(record, 0x14), &list) == 0) {
            return 0;
        }
    }
    else {
        if (group == -1 || at<int>(record, 0x18) == -1) {
            goto badArgs;
        }
        if (subGroupExists(group, at<int>(record, 0x18)) == 0) {
            return 0;
        }
        if (at<int>(record, 0x1C) == -1) {
            if (collectSubGroup(at<undefined4>(record, 0x14), at<undefined4>(record, 0x18), &list) == 0) {
                return 0;
            }
        }
        else {
            int found = findEntity(at<undefined4>(record, 0x14), at<undefined4>(record, 0x18), at<int>(record, 0x1C));
            if (found == 0) {
                return 0;
            }
            appendEntity(&found);
        }
    }
    for (; i < list.count; i = i + 1) {
        if (at<int>(list.data, i * 4) != 0) {
            if (testArea(record, 2) != 0) {
                at<undefined4>(record, 0x20) = at<undefined4>(list.data, i * 4);
                return 1;
            }
        }
    }
    return 0;
badArgs:
    reportError(&DAT_016b1984, group, at<undefined4>(record, 0x18), at<undefined4>(record, 0x1C));
    return 0;
}

// 00C9CF00  Trigger::SCENARIO_AREA  size=399  [class]
// As AREA_3 but matches an enemy outside area layer 2; skipped in some game states.
int __fastcall Trigger::SCENARIO_AREA(int record)
{
    using namespace Trigger_p1;
    unsigned int i = 0;
    if (DAT_01dbd1d0 != 0 && (DAT_01bea060 & 8) == 0 && (DAT_01bea060 & 0x2000400) != 0) {
        return 0;
    }
    EntityArray list;
    list.data = at<int>(record, 0x24);
    int group = at<int>(record, 0x14);
    list.vftable = kEntityArrayVftable;
    list.count = 0;
    list.capacity = 0x10;
    if (group == -1) {
        goto badArgs;
    }
    if (at<int>(record, 0x18) == -1 && at<int>(record, 0x1C) == -1) {
        if (groupExists(group) == 0) {
            return 0;
        }
        if (collectGroup(at<undefined4>(record, 0x14), &list) == 0) {
            return 0;
        }
    }
    else {
        if (group == -1 || at<int>(record, 0x18) == -1) {
            goto badArgs;
        }
        if (subGroupExists(group, at<int>(record, 0x18)) == 0) {
            return 0;
        }
        if (at<int>(record, 0x1C) == -1) {
            if (collectSubGroup(at<undefined4>(record, 0x14), at<undefined4>(record, 0x18), &list) == 0) {
                return 0;
            }
        }
        else {
            int found = findEntity(at<undefined4>(record, 0x14), at<undefined4>(record, 0x18), at<int>(record, 0x1C));
            if (found == 0) {
                return 0;
            }
            appendEntity(&found);
        }
    }
    for (; i < list.count; i = i + 1) {
        if (at<int>(list.data, i * 4) != 0) {
            if (testArea(record, 2) == 0) {
                at<undefined4>(record, 0x20) = at<undefined4>(list.data, i * 4);
                return 1;
            }
        }
    }
    return 0;
badArgs:
    reportError(&DAT_016b19b0, group, at<undefined4>(record, 0x18), at<undefined4>(record, 0x1C));
    return 0;
}
