// src/managers/triggermanager/cActScene.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActScene.h"

extern undefined DAT_01dbe0ec;  // cActScene static descriptor returned by vf00

// 00C8ACD0  Trigger::cActScene::vf08  size=1  [class]
void Trigger::cActScene::vf08()
{
}

// 00C8ACE0  Trigger::cActScene::vf0C  size=1  [class]
void Trigger::cActScene::vf0C()
{
}

// 00C8ACF0  Trigger::cActScene::vf10  size=1  [class]
void Trigger::cActScene::vf10()
{
}

// 00C8AD00  Trigger::cActScene::vf14  size=1  [class]
void Trigger::cActScene::vf14()
{
}

// 00C92450  Trigger::cActScene::vf00  size=6  [class]
void *Trigger::cActScene::vf00()
{
    return &DAT_01dbe0ec;
}

// 00C92460  Trigger::cActScene::vf04  size=31  [class]
Trigger::cActScene *Trigger::cActScene::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
