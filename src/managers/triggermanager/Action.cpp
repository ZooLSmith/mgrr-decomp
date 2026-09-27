// src/managers/triggermanager/Action.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

// Debug message "Trigger::Action::Array::<too many commands registered>" (Shift-JIS)
extern unsigned char DAT_016b19e4[];

// Ghidra named this function after its assert string.  It is the slot 0x1C virtual (set record)
// of Trigger::cActArray (vftable 0x016B01C0): it stores the record, then creates one child action
// per sub-record (at most 15).  It is __thiscall with one stack argument (ret 4), hence the
// member form.
namespace Trigger {
struct Action {
    void Array(int *record);
};
}  // namespace Trigger

namespace Action_p1 {

// FUN_00dd5650: debug printf (functions.h declares it without parameters)
inline void DebugPrint(const void *format)
{
    ((void (__cdecl *)(const void *))FUN_00dd5650)(format);
}

// 00C99A70 (Ghidra: Trigger::cActCamera::cActCamera, refined: cActCamera::createAction): action
// factory; allocates the action selected by the record's type and hands it the record.
inline int CreateAction(int *record)
{
    return ((int (__cdecl *)(int *))0x00C99A70)(record);
}

// cActArray fields
inline int *&Record(void *self)     { return *(int **)((char *)self + 0x4); }  // +0x04 action record
inline int *Children(void *self)    { return (int *)((char *)self + 0x8); }    // +0x08 child actions [15]
inline int &ChildCount(void *self)  { return *(int *)((char *)self + 0x44); }  // +0x44

}  // namespace Action_p1

// 00C9D090  Trigger::Action::Array  size=94  [class]
// Record layout: +0x8 child count, +0xC first child record; each child record starts with its
// own byte size.
void Trigger::Action::Array(int *record)
{
    using namespace Action_p1;
    Record(this) = record;
    int count = record[2];
    ChildCount(this) = count;
    if (count < 0x10) {
        int *child = record + 3;
        int *slot = Children(this);
        for (int i = 0; i < ChildCount(this); i++) {
            int size = *child;
            int action = CreateAction(child);
            child = (int *)((char *)child + size);
            *slot = action;
            slot++;
        }
        return;
    }
    DebugPrint(DAT_016b19e4);
}
