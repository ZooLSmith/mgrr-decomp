// src/managers/triggermanager/cActEnemyRequestEndAll.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyRequestEndAll.h"

extern undefined DAT_01dbe17c;                 // cActEnemyRequestEndAll static descriptor returned by vf00
extern char DAT_016aa78c[];                // debug message: action record missing

namespace cActEnemyRequestEndAll_p1 {

// FUN_00dd5650: debug printf (empty in release); functions.h declares it void(void).
inline void debugPrint(const char *message)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(message);
}

// ECX values loaded by the machine code for the __thiscall callees below (the raw
// decompilation dropped them from the call sites).
inline void *enemyGroupManager() { return (void *)0x01C78CB0; }  // ? global object at 0x01C78CB0
inline void *enemySetReader() { return (void *)0x01DBE5D8; }     // ? EnemySetReader instance at 0x01DBE5D8

} // namespace cActEnemyRequestEndAll_p1

// 00C7FD90  Trigger::cActEnemyRequestEndAll::vf18  size=42  [class]
int Trigger::cActEnemyRequestEndAll::vf18()
{
    using namespace cActEnemyRequestEndAll_p1;
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    if (record() == 0) {
        debugPrint(DAT_016aa78c);
        return 0;
    }
    FUN_00ca5770((int)enemySetReader());  // __fastcall, ECX = 0x01DBE5D8
    return 1;
}

// 00C7FDC0  Trigger::cActEnemyRequestEndAll::vf24  size=4  [class]
int Trigger::cActEnemyRequestEndAll::vf24()
{
    return -1;
}

// 00C931B0  Trigger::cActEnemyRequestEndAll::vf00  size=6  [class]
void *Trigger::cActEnemyRequestEndAll::vf00()
{
    return &DAT_01dbe17c;
}

// 00C931C0  Trigger::cActEnemyRequestEndAll::vf04  size=31  [class]
Trigger::cActEnemyRequestEndAll *Trigger::cActEnemyRequestEndAll::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
