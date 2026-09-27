// src/managers/triggermanager/cActFollowPath.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActFollowPath.h"

extern undefined DAT_01dbe0a8;                 // cActFollowPath static descriptor returned by vf00

// 00C7EFB0  Trigger::cActFollowPath::vf18  size=5  [class]
int Trigger::cActFollowPath::vf18()
{
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    return 0;
}

// 00C89FB0  Trigger::cActFollowPath::vf08  size=1  [class]
void Trigger::cActFollowPath::vf08()
{
}

// 00C89FC0  Trigger::cActFollowPath::vf0C  size=1  [class]
void Trigger::cActFollowPath::vf0C()
{
}

// 00C89FD0  Trigger::cActFollowPath::vf10  size=1  [class]
void Trigger::cActFollowPath::vf10()
{
}

// 00C89FE0  Trigger::cActFollowPath::vf14  size=1  [class]
void Trigger::cActFollowPath::vf14()
{
}

// 00C91F40  Trigger::cActFollowPath::vf00  size=6  [class]
void *Trigger::cActFollowPath::vf00()
{
    return &DAT_01dbe0a8;
}

// 00C91F50  Trigger::cActFollowPath::vf04  size=31  [class]
Trigger::cActFollowPath *Trigger::cActFollowPath::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
