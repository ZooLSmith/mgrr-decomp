// src/managers/triggermanager/cActArray.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActArray.h"

// 00C80A10  Trigger::cActArray::vf08  size=43  [class]
void Trigger::cActArray::vf08()
{
    for (int i = 0; i < childCount(); i++) {
        int *child = children()[i];
        if (child != 0) {
            (*(void (__thiscall **)(int *))((char *)child[0] + 0x8))(child);
        }
    }
}

// 00C80A40  Trigger::cActArray::vf0C  size=43  [class]
void Trigger::cActArray::vf0C()
{
    for (int i = 0; i < childCount(); i++) {
        int *child = children()[i];
        if (child != 0) {
            (*(void (__thiscall **)(int *))((char *)child[0] + 0xC))(child);
        }
    }
}

// 00C80A70  Trigger::cActArray::vf10  size=43  [class]
void Trigger::cActArray::vf10()
{
    for (int i = 0; i < childCount(); i++) {
        int *child = children()[i];
        if (child != 0) {
            (*(void (__thiscall **)(int *))((char *)child[0] + 0x10))(child);
        }
    }
}

// 00C80AA0  Trigger::cActArray::vf18  size=78  [class]
int Trigger::cActArray::vf18(int context)
{
    int allSucceeded = 1;
    for (int i = 0; i < childCount(); i++) {
        int *child = children()[i];
        if (child != 0) {
            int result = (*(int (__thiscall **)(int *, int))((char *)child[0] + 0x18))(child, context);
            childResults()[i] = result;
            if (result == 0) {
                allSucceeded = 0;
            }
        }
    }
    return allSucceeded;
}

// 00C93CC0  Trigger::cActArray::cActArray  size=56  [class]
Trigger::cActArray::cActArray()
{
    record() = 0;
    // vftable = Trigger::cActArray::vftable (0x016B01C0)
    childCount() = -1;
    _memset(children(), 0, 0x3c);
    _memset(childResults(), -1, 0x3c);
}

// 00C93D00  Trigger::cActArray::vf04  size=31  [class]
Trigger::cActArray *Trigger::cActArray::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
