// src/managers/triggermanager/cActCodecEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCodecEnd.h"

extern undefined DAT_01dbe21c;           // cActCodecEnd static descriptor returned by vf00

// 00C8DC70  Trigger::cActCodecEnd::vf08  size=1  [class]
void Trigger::cActCodecEnd::vf08()
{
}

// 00C8DC80  Trigger::cActCodecEnd::vf0C  size=1  [class]
void Trigger::cActCodecEnd::vf0C()
{
}

// 00C8DC90  Trigger::cActCodecEnd::vf10  size=1  [class]
void Trigger::cActCodecEnd::vf10()
{
}

// 00C8DCA0  Trigger::cActCodecEnd::vf14  size=1  [class]
void Trigger::cActCodecEnd::vf14()
{
}

// 00C93E30  Trigger::cActCodecEnd::vf00  size=6  [class]
void *Trigger::cActCodecEnd::vf00()
{
    return &DAT_01dbe21c;
}

// 00C93E40  Trigger::cActCodecEnd::vf04  size=31  [class]
Trigger::cActCodecEnd *Trigger::cActCodecEnd::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
