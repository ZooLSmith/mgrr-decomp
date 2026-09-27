// src/managers/triggermanager/cActObjMeshTrans.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActObjMeshTrans.h"

extern undefined DAT_01dbe1b4;                 // cActObjMeshTrans static descriptor returned by vf00

// 00C8C9C0  Trigger::cActObjMeshTrans::vf08  size=1  [class]
void Trigger::cActObjMeshTrans::vf08()
{
}

// 00C8C9D0  Trigger::cActObjMeshTrans::vf0C  size=1  [class]
void Trigger::cActObjMeshTrans::vf0C()
{
}

// 00C8C9E0  Trigger::cActObjMeshTrans::vf10  size=1  [class]
void Trigger::cActObjMeshTrans::vf10()
{
}

// 00C8C9F0  Trigger::cActObjMeshTrans::vf14  size=1  [class]
void Trigger::cActObjMeshTrans::vf14()
{
}

// 00C93630  Trigger::cActObjMeshTrans::vf00  size=6  [class]
void *Trigger::cActObjMeshTrans::vf00()
{
    return &DAT_01dbe1b4;
}

// 00C93640  Trigger::cActObjMeshTrans::vf04  size=31  [class]
Trigger::cActObjMeshTrans *Trigger::cActObjMeshTrans::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
