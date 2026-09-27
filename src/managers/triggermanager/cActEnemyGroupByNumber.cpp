// src/managers/triggermanager/cActEnemyGroupByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyGroupByNumber.h"

extern undefined DAT_01dbe1c0;                 // cActEnemyGroupByNumber static descriptor returned by vf00
extern char DAT_016aa78c[];                // debug message: action record missing

namespace cActEnemyGroupByNumber_p1 {

// FUN_00dd5650: debug printf (empty in release); functions.h declares it void(void).
inline void debugPrint(const char *message)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(message);
}

// ECX values loaded by the machine code for the __thiscall callees below (the raw
// decompilation dropped them from the call sites).
inline void *enemyGroupManager() { return (void *)0x01C78CB0; }  // ? global object at 0x01C78CB0
inline void *enemySetReader() { return (void *)0x01DBE5D8; }     // ? EnemySetReader instance at 0x01DBE5D8

} // namespace cActEnemyGroupByNumber_p1

// 00C80410  Trigger::cActEnemyGroupByNumber::vf18  size=46  [class]
int Trigger::cActEnemyGroupByNumber::vf18()
{
    using namespace cActEnemyGroupByNumber_p1;
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    int *rec = record();
    if (rec == 0) {
        debugPrint(DAT_016aa78c);
        return 0;
    }
    // FUN_00c18610 (__thiscall): this = 0x01C78CB0, group index rec[2], number rec[3]
    return ((int (__thiscall *)(void *, int, int))FUN_00c18610)(enemyGroupManager(), rec[2], rec[3]);
}

// 00C80440  Trigger::cActEnemyGroupByNumber::vf24  size=15  [class]
int Trigger::cActEnemyGroupByNumber::vf24()
{
    if (record() == 0) {
        return -1;
    }
    return record()[3];
}

// 00C93750  Trigger::cActEnemyGroupByNumber::vf00  size=6  [class]
void *Trigger::cActEnemyGroupByNumber::vf00()
{
    return &DAT_01dbe1c0;
}

// 00C93760  Trigger::cActEnemyGroupByNumber::vf04  size=31  [class]
Trigger::cActEnemyGroupByNumber *Trigger::cActEnemyGroupByNumber::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
