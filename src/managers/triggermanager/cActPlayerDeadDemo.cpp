// src/managers/triggermanager/cActPlayerDeadDemo.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPlayerDeadDemo.h"

extern undefined DAT_01dbe15c;  // cActPlayerDeadDemo static descriptor returned by vf00

// 00C8BE80  Trigger::cActPlayerDeadDemo::vf08  size=1  [class]
void Trigger::cActPlayerDeadDemo::vf08()
{
}

// 00C8BE90  Trigger::cActPlayerDeadDemo::vf0C  size=1  [class]
void Trigger::cActPlayerDeadDemo::vf0C()
{
}

// 00C8BEA0  Trigger::cActPlayerDeadDemo::vf10  size=1  [class]
void Trigger::cActPlayerDeadDemo::vf10()
{
}

// 00C8BEB0  Trigger::cActPlayerDeadDemo::vf14  size=1  [class]
void Trigger::cActPlayerDeadDemo::vf14()
{
}

// 00C92FB0  Trigger::cActPlayerDeadDemo::vf00  size=6  [class]
void *Trigger::cActPlayerDeadDemo::vf00()
{
    return &DAT_01dbe15c;
}

// 00C92FC0  Trigger::cActPlayerDeadDemo::vf04  size=31  [class]
Trigger::cActPlayerDeadDemo *Trigger::cActPlayerDeadDemo::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
