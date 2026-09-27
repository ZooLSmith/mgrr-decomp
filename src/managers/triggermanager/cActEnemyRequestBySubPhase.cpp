// src/managers/triggermanager/cActEnemyRequestBySubPhase.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyRequestBySubPhase.h"

extern undefined DAT_01dbe188;                 // cActEnemyRequestBySubPhase static descriptor returned by vf00
extern char DAT_016aa78c[];                // debug message: action record missing
extern int DAT_01be9218;                   // compared with 1 / 0x100 before sub-phase requests
extern int DAT_018b9174;

namespace cActEnemyRequestBySubPhase_p1 {

// FUN_00dd5650: debug printf (empty in release); functions.h declares it void(void).
inline void debugPrint(const char *message)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(message);
}

// ECX values loaded by the machine code for the __thiscall callees below (the raw
// decompilation dropped them from the call sites).
inline void *enemyGroupManager() { return (void *)0x01C78CB0; }  // ? global object at 0x01C78CB0
inline void *enemySetReader() { return (void *)0x01DBE5D8; }     // ? EnemySetReader instance at 0x01DBE5D8

} // namespace cActEnemyRequestBySubPhase_p1

// 00C7FE70  Trigger::cActEnemyRequestBySubPhase::vf18  size=72  [class]
int Trigger::cActEnemyRequestBySubPhase::vf18()
{
    using namespace cActEnemyRequestBySubPhase_p1;
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    if (record() == 0) {
        debugPrint(DAT_016aa78c);
    }
    else if ((DAT_01be9218 == 1) || (DAT_01be9218 == 0x100)) {
        // FUN_00ca6a50 (__thiscall, this = 0x01DBE5D8)
        ((void (__thiscall *)(void *, int, char *))FUN_00ca6a50)(enemySetReader(), DAT_018b9174, (char *)record() + 8);
        return 1;
    }
    return 0;
}

// 00C7FEC0  Trigger::cActEnemyRequestBySubPhase::vf24  size=4  [class]
int Trigger::cActEnemyRequestBySubPhase::vf24()
{
    return -1;
}

// 00C93270  Trigger::cActEnemyRequestBySubPhase::vf00  size=6  [class]
void *Trigger::cActEnemyRequestBySubPhase::vf00()
{
    return &DAT_01dbe188;
}

// 00C93280  Trigger::cActEnemyRequestBySubPhase::vf04  size=31  [class]
Trigger::cActEnemyRequestBySubPhase *Trigger::cActEnemyRequestBySubPhase::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
