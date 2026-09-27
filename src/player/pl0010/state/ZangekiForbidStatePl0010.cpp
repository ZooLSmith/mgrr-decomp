// src/player/pl0010/state/ZangekiForbidStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiForbidStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern unsigned char DAT_01be9eac[];  // ZangekiForbidStatePl0010 type record (returned by vf00)

// 00B82FB0  ZangekiForbidStatePl0010::vf08  size=19  [class]
// Enter.
bool ZangekiForbidStatePl0010::vf08(undefined4 contextArg)
{
    return StateMachineNode::vf08(contextArg) != 0;
}

// 00B82FD0  ZangekiForbidStatePl0010::SafeCheck  size=5  [class]
// A tail jump to StateMachineNode::SafeCheck (the raw body shown by Ghidra is the base's).
void ZangekiForbidStatePl0010::SafeCheck(undefined4 *contextArg)
{
    StateMachineNode::SafeCheck(contextArg);
}

// 00B82FE0  ZangekiForbidStatePl0010::qteSafeCheck  size=5  [class]
// A tail jump to StateMachineNode::qteSafeCheck (the raw body shown by Ghidra is the base's).
void ZangekiForbidStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    StateMachineNode::qteSafeCheck(contextArg);
}

// 00B82FF0  ZangekiForbidStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void ZangekiForbidStatePl0010::vf14(undefined4 *contextArg)
{
    StateMachineNode::vf14(contextArg);
}

// 00B83000  ZangekiForbidStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 ZangekiForbidStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B83010  ZangekiForbidStatePl0010::vf20  size=19  [class]
// Leave.  (Declared as returning undefined4; the body returns the base result normalised to 0/1.)
undefined4 ZangekiForbidStatePl0010::vf20(undefined4 *contextArg)
{
    return StateMachineNode::vf20(contextArg) != 0;
}

// 00B83030  ZangekiForbidStatePl0010::vf24  size=19  [class]
bool ZangekiForbidStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B83070  ZangekiForbidStatePl0010::vf00  size=6  [class]
undefined *ZangekiForbidStatePl0010::vf00()
{
    return DAT_01be9eac;
}

// 00B91680  ZangekiForbidStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiForbidStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}
