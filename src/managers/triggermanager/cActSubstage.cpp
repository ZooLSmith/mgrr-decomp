// src/managers/triggermanager/cActSubstage.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSubstage.h"

extern undefined DAT_01dbe0d4;  // cActSubstage static descriptor returned by vf00

// 00C7F140  Trigger::cActSubstage::vf18  size=5  [class]
int Trigger::cActSubstage::vf18()
{
    // machine code: `xor eax,eax; ret 4` (one unused stack argument)
    return 0;
}

// 00C8A690  Trigger::cActSubstage::vf08  size=1  [class]
void Trigger::cActSubstage::vf08()
{
}

// 00C8A6A0  Trigger::cActSubstage::vf0C  size=1  [class]
void Trigger::cActSubstage::vf0C()
{
}

// 00C8A6B0  Trigger::cActSubstage::vf10  size=1  [class]
void Trigger::cActSubstage::vf10()
{
}

// 00C8A6C0  Trigger::cActSubstage::vf14  size=1  [class]
void Trigger::cActSubstage::vf14()
{
}

// 00C92200  Trigger::cActSubstage::vf00  size=6  [class]
void *Trigger::cActSubstage::vf00()
{
    return &DAT_01dbe0d4;
}

// 00C92210  Trigger::cActSubstage::vf04  size=31  [class]
Trigger::cActSubstage *Trigger::cActSubstage::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
