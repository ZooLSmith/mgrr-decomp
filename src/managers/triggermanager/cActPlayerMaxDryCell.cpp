// src/managers/triggermanager/cActPlayerMaxDryCell.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPlayerMaxDryCell.h"

extern undefined DAT_01dbe2a4;  // cActPlayerMaxDryCell static descriptor returned by vf00

// 00C8F250  Trigger::cActPlayerMaxDryCell::vf08  size=1  [class]
void Trigger::cActPlayerMaxDryCell::vf08()
{
}

// 00C8F260  Trigger::cActPlayerMaxDryCell::vf0C  size=1  [class]
void Trigger::cActPlayerMaxDryCell::vf0C()
{
}

// 00C8F270  Trigger::cActPlayerMaxDryCell::vf10  size=1  [class]
void Trigger::cActPlayerMaxDryCell::vf10()
{
}

// 00C8F280  Trigger::cActPlayerMaxDryCell::vf14  size=1  [class]
void Trigger::cActPlayerMaxDryCell::vf14()
{
}

// 00C94900  Trigger::cActPlayerMaxDryCell::vf00  size=6  [class]
void *Trigger::cActPlayerMaxDryCell::vf00()
{
    return &DAT_01dbe2a4;
}

// 00C94910  Trigger::cActPlayerMaxDryCell::vf04  size=31  [class]
Trigger::cActPlayerMaxDryCell *Trigger::cActPlayerMaxDryCell::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
