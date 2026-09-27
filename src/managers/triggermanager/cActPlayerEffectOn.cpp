// src/managers/triggermanager/cActPlayerEffectOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPlayerEffectOn.h"

extern undefined DAT_01dbe468;  // cActPlayerEffectOn static descriptor returned by vf00
extern char DAT_016ab388[];   // "Trigger::Act::PLY_EFF_ON: data is NULL"
extern char DAT_016ab358[];   // "Trigger::Act::GAME_FLAG_ON: unregistered flag"
extern int DAT_01dc08c8;      // player effect flag
extern int DAT_01dc08cc;      // player effect flag
extern int DAT_01dc08d8;      // player effect flag

namespace cActPlayerEffectOn_p1 {

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

} // namespace cActPlayerEffectOn_p1

// 00C80250  Trigger::cActPlayerEffectOn::vf08  size=1  [class]
void Trigger::cActPlayerEffectOn::vf08()
{
}

// 00C80260  Trigger::cActPlayerEffectOn::vf18  size=185  [class]
int Trigger::cActPlayerEffectOn::vf18()  // machine code ends in `ret 4`: one stack argument, unused (cAction.h declares vf18() without it)
{
    using namespace cActPlayerEffectOn_p1;
    int *data = record();
    int result = 1;
    if (data == 0) {
        debugPrint(DAT_016ab388);
    }
    else {
        void *manager = (void *)FUN_00c13920();
        int entity = getEntity(manager, -1);
        if (entity != 0) {
            // raw showed FUN_00a7c8a0() and FUN_00b797d0() without arguments; the disassembly passes
            // the entity, then FUN_00a7c8a0's result, in ECX
            undefined4 owner = FUN_00a7c8a0(entity);
            switch ((unsigned int)data[2]) {
            case 0:
                FUN_00b797d0(owner);
                return 1;
            case 1:
                DAT_01dc08d8 = 1;
                return 1;
            case 2:
                FUN_0085c270();  // plays "core_se_btl_char_datsu_in"
                return 1;
            case 3:
                FUN_0085c2a0();  // plays "core_se_btl_char_datsu_out"
                return 1;
            case 4:
                DAT_01dc08c8 = 1;
                DAT_01dc08cc = 0;
                return 1;
            case 5:
                DAT_01dc08cc = 1;
                return 1;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 0xb:
                break;
            default:
                debugPrint(DAT_016ab358);
                result = 0;
            }
            return result;
        }
    }
    return 0;
}

// 00C8CA50  Trigger::cActPlayerEffectOn::vf00  size=6  [class]
void *Trigger::cActPlayerEffectOn::vf00()
{
    return &DAT_01dbe468;
}

// 00C8CA70  Trigger::cActPlayerEffectOn::vf0C  size=1  [class]
void Trigger::cActPlayerEffectOn::vf0C()
{
}

// 00C8CA80  Trigger::cActPlayerEffectOn::vf10  size=1  [class]
void Trigger::cActPlayerEffectOn::vf10()
{
}

// 00C8CA90  Trigger::cActPlayerEffectOn::vf14  size=1  [class]
void Trigger::cActPlayerEffectOn::vf14()
{
}

// 00C93670  Trigger::cActPlayerEffectOn::vf04  size=31  [class]
Trigger::cActPlayerEffectOn *Trigger::cActPlayerEffectOn::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
