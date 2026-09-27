// src/managers/triggermanager/cActPlKgkStop.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPlKgkStop.h"

extern undefined DAT_01dbe2c8;  // cActPlKgkStop static descriptor returned by vf00
extern unsigned int DAT_01bea094;   // global flags
extern undefined DAT_01b35420;      // type descriptor tested with FUN_00dd6d80

namespace cActPlKgkStop_p1 {

// FUN_00c13920 returns a manager object; its vftable slot 0x28 returns an entity (0 = none).
inline int getEntity(void *manager, int index)
{
    return (*(int (__thiscall **)(void *, int))(*(char **)manager + 0x28))(manager, index);
}

// owner vftable slot 0x04: the object's type descriptor.
inline void *typeOf(int *object)
{
    return (*(void *(__thiscall **)(int *))(*(char **)object + 0x4))(object);
}

// FUN_00dd6d80 (__thiscall, type in ECX): nonzero when `type` is / derives from `base`.
inline int isKindOf(void *type, void *base)
{
    return ((int (__thiscall *)(void *, void *))FUN_00dd6d80)(type, base);
}

} // namespace cActPlKgkStop_p1

// 00C88950  Trigger::cActPlKgkStop::vf18  size=102  [class]
int Trigger::cActPlKgkStop::vf18()  // machine code ends in `ret 4`: one stack argument, unused (cAction.h declares vf18() without it)
{
    using namespace cActPlKgkStop_p1;
    if ((DAT_01bea094 & 0x20000) != 0) {
        void *manager = (void *)FUN_00c13920();
        int entity = getEntity(manager, 1);
        if (entity != 0) {
            // raw showed FUN_00a7c8a0() without argument; the disassembly passes the entity in ECX
            int *owner = (int *)FUN_00a7c8a0(entity);
            if (owner != 0) {
                // raw: owner->vf04(&DAT_01b35420); FUN_00dd6d80(&DAT_01b35420). The disassembly calls
                // vf04 with no stack argument and passes its result in ECX to FUN_00dd6d80, whose only
                // stack argument is &DAT_01b35420.
                if (isKindOf(typeOf(owner), &DAT_01b35420) != 0) {
                    FUN_005f5060((int)owner);  // ECX = owner
                    return 1;
                }
            }
            return 0;
        }
    }
    return 0;
}

// 00C8F930  Trigger::cActPlKgkStop::vf08  size=1  [class]
void Trigger::cActPlKgkStop::vf08()
{
}

// 00C8F940  Trigger::cActPlKgkStop::vf0C  size=1  [class]
void Trigger::cActPlKgkStop::vf0C()
{
}

// 00C8F950  Trigger::cActPlKgkStop::vf10  size=1  [class]
void Trigger::cActPlKgkStop::vf10()
{
}

// 00C8F960  Trigger::cActPlKgkStop::vf14  size=1  [class]
void Trigger::cActPlKgkStop::vf14()
{
}

// 00C94B40  Trigger::cActPlKgkStop::vf00  size=6  [class]
void *Trigger::cActPlKgkStop::vf00()
{
    return &DAT_01dbe2c8;
}

// 00C94B50  Trigger::cActPlKgkStop::vf04  size=31  [class]
Trigger::cActPlKgkStop *Trigger::cActPlKgkStop::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
