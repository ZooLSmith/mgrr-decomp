// src/managers/triggermanager/cActPlayerEffectOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPlayerEffectOff.h"

extern undefined DAT_01dbe464;  // cActPlayerEffectOff static descriptor returned by vf00
extern char DAT_016ab388[];   // "Trigger::Act::PLY_EFF_ON: data is NULL"
extern char DAT_016ab358[];   // "Trigger::Act::GAME_FLAG_ON: unregistered flag"
extern int DAT_01dc08bc;      // player effect flag (also set by FUN_0085c270)
extern int DAT_01dc08c8;      // player effect flag
extern int DAT_01dc08d4;      // player effect flag

namespace cActPlayerEffectOff_p1 {

// FUN_00dd5650: debug printf (empty in release).
inline void debugPrint(const char *format)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(format);
}

// FUN_00c13920 returns a manager object; its vftable slot 0x28 returns an entity (0 = none).
inline int getEntity(void *manager, int index)
{
    return (*(int (__thiscall **)(void *, int))(*(char **)manager + 0x28))(manager, index);
}

} // namespace cActPlayerEffectOff_p1

// 00C80350  Trigger::cActPlayerEffectOff::vf08  size=1  [class]
void Trigger::cActPlayerEffectOff::vf08()
{
}

// 00C87FD0  Trigger::cActPlayerEffectOff::vf18  size=157  [class]
int Trigger::cActPlayerEffectOff::vf18()  // machine code ends in `ret 4`: one stack argument, unused (cAction.h declares vf18() without it)
{
    using namespace cActPlayerEffectOff_p1;
    int *data = record();
    if (data == 0) {
        debugPrint(DAT_016ab388);
    }
    else {
        void *manager = (void *)FUN_00c13920();
        int entity = getEntity(manager, -1);
        if (entity != 0) {
            FUN_00a7c8a0(entity);  // result unused (raw showed no argument; ECX = entity)
            switch ((unsigned int)data[2]) {
            case 0:
            case 1:
                DAT_01dc08d4 = 0;
                return 1;
            case 2:
            case 3:
                DAT_01dc08bc = 0;
                return 1;
            case 4:
            case 5:
                DAT_01dc08c8 = 0;
                return 1;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 0xb:
                return 1;
            case 0xc:
                DAT_01dc08bc = 0;
                DAT_01dc08c8 = 0;
                DAT_01dc08d4 = 0;
                return 1;
            default:
                debugPrint(DAT_016ab358);
                return 0;
            }
        }
    }
    return 0;
}

// 00C8CAF0  Trigger::cActPlayerEffectOff::vf00  size=6  [class]
void *Trigger::cActPlayerEffectOff::vf00()
{
    return &DAT_01dbe464;
}

// 00C8CB10  Trigger::cActPlayerEffectOff::vf0C  size=1  [class]
void Trigger::cActPlayerEffectOff::vf0C()
{
}

// 00C8CB20  Trigger::cActPlayerEffectOff::vf10  size=1  [class]
void Trigger::cActPlayerEffectOff::vf10()
{
}

// 00C8CB30  Trigger::cActPlayerEffectOff::vf14  size=1  [class]
void Trigger::cActPlayerEffectOff::vf14()
{
}

// 00C936A0  Trigger::cActPlayerEffectOff::vf04  size=31  [class]
Trigger::cActPlayerEffectOff *Trigger::cActPlayerEffectOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
