// src/managers/triggermanager/cActStage.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActStage.h"

extern undefined DAT_01dbe0d0;  // cActStage static descriptor returned by vf00

// 00C7F130  Trigger::cActStage::vf18  size=5  [class]
int Trigger::cActStage::vf18()
{
    // machine code: `xor eax,eax; ret 4` (one unused stack argument)
    return 0;
}

// 00C8A5F0  Trigger::cActStage::vf08  size=1  [class]
void Trigger::cActStage::vf08()
{
}

// 00C8A600  Trigger::cActStage::vf0C  size=1  [class]
void Trigger::cActStage::vf0C()
{
}

// 00C8A610  Trigger::cActStage::vf10  size=1  [class]
void Trigger::cActStage::vf10()
{
}

// 00C8A620  Trigger::cActStage::vf14  size=1  [class]
void Trigger::cActStage::vf14()
{
}

// 00C921C0  Trigger::cActStage::vf00  size=6  [class]
void *Trigger::cActStage::vf00()
{
    return &DAT_01dbe0d0;
}

// 00C921D0  Trigger::cActStage::vf04  size=31  [class]
Trigger::cActStage *Trigger::cActStage::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
