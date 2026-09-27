// src/managers/triggermanager/cActDebugMessage.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActDebugMessage.h"

extern undefined DAT_01dbe0cc;           // cActDebugMessage static descriptor returned by vf00

// 00C7F120  Trigger::cActDebugMessage::vf18  size=5  [class]
int Trigger::cActDebugMessage::vf18()
{
    // (machine code: `ret 4` -- one stack argument, unused; cAction.h declares vf18() without it)
    return 0;
}

// 00C8A550  Trigger::cActDebugMessage::vf08  size=1  [class]
void Trigger::cActDebugMessage::vf08()
{
}

// 00C8A560  Trigger::cActDebugMessage::vf0C  size=1  [class]
void Trigger::cActDebugMessage::vf0C()
{
}

// 00C8A570  Trigger::cActDebugMessage::vf10  size=1  [class]
void Trigger::cActDebugMessage::vf10()
{
}

// 00C8A580  Trigger::cActDebugMessage::vf14  size=1  [class]
void Trigger::cActDebugMessage::vf14()
{
}

// 00C92180  Trigger::cActDebugMessage::vf00  size=6  [class]
void *Trigger::cActDebugMessage::vf00()
{
    return &DAT_01dbe0cc;
}

// 00C92190  Trigger::cActDebugMessage::vf04  size=31  [class]
Trigger::cActDebugMessage *Trigger::cActDebugMessage::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
