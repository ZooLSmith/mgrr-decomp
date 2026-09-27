// src/managers/triggermanager/cCondition.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondition.h"
#include "cCondStartAnimation.h"

// 00C77C70  Trigger::cCondition::vf1C  size=10  [class]
void Trigger::cCondition::vf1C(int *record)
{
    this->record() = record;
}

// 00C77C80  Trigger::cCondition::vf20  size=6  [class]
int Trigger::cCondition::vf20()
{
    return 1;
}

// 00C77CC0  Trigger::cCondition::vf00  size=31  [class]
Trigger::cCondition *Trigger::cCondition::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C960B0  Trigger::cCondition::cCondition  size=55  [class]
void Trigger::cCondition::dtor_cCondStartAnimation()
{
    // vftable = Trigger::cCondStartAnimation::vftable (0x016B0D38)
    cCondStartAnimation *self = (cCondStartAnimation *)this;
    if (self->listData() != 0) {
        self->listCount() = 0;
        if (self->listOwned() != 0) {
            FUN_00dd48d0(self->listData(), 0);
            self->listOwned() = 0;
        }
        self->listData() = 0;
        self->listCapacity() = 0;
    }
    // vftable = Trigger::cCondition::vftable (0x016A8930)
}

// 00C961C0  Trigger::cCondition::cCondition_2  size=55  [class]
void Trigger::cCondition::dtor_cCondEndAnimation()
{
    // vftable = Trigger::cCondEndAnimation::vftable (0x016B0D60)
    if (*(int *)((char *)this + 0x1C) /* cCondEndAnimation+0x1C: list storage */ != 0) {
        *(int *)((char *)this + 0x24) /* cCondEndAnimation+0x24: list count */ = 0;
        if (*(int *)((char *)this + 0x28) /* cCondEndAnimation+0x28: storage owned */ != 0) {
            FUN_00dd48d0(*(int *)((char *)this + 0x1C), 0);
            *(int *)((char *)this + 0x28) = 0;
        }
        *(int *)((char *)this + 0x1C) = 0;
        *(int *)((char *)this + 0x20) /* cCondEndAnimation+0x20: ? */ = 0;
    }
    // vftable = Trigger::cCondition::vftable (0x016A8930)
}
