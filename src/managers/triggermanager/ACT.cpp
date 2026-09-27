// src/managers/triggermanager/ACT.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

// Debug message "Trigger::ACT::ENM_MOVE: <data is NULL>" (Shift-JIS)
extern unsigned char DAT_016aabf0[];

// Ghidra named this function after its assert string.  It is the slot 0x18 virtual of
// Trigger::cActEnemyMove (vftable 0x016AF6D0): it validates the action record that vf1C stored at
// +0x4.  It is __thiscall and pops one unused stack argument (ret 4), hence the member form.
namespace Trigger {
struct ACT {
    int ENM_MOVE(int unused);
};
}  // namespace Trigger

namespace ACT_p1 {

// FUN_00dd5650: debug printf (functions.h declares it without parameters)
inline void DebugPrint(const void *format)
{
    ((void (__cdecl *)(const void *))FUN_00dd5650)(format);
}

}  // namespace ACT_p1

// 00C7F4A0  Trigger::ACT::ENM_MOVE  size=32  [class]
// Returns 1 when the action has a record (+0x4), otherwise prints an error and returns 0.
int Trigger::ACT::ENM_MOVE(int unused)
{
    if (*(int *)((char *)this + 0x4) /* cAction+0x4: record */ == 0) {
        ACT_p1::DebugPrint(DAT_016aabf0);
        return 0;
    }
    return 1;
}
