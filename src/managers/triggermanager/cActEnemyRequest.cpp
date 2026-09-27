// src/managers/triggermanager/cActEnemyRequest.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyRequest.h"

extern undefined DAT_01dbe180;                 // cActEnemyRequest static descriptor returned by vf00
extern char DAT_016aa78c[];                // debug message: action record missing

namespace cActEnemyRequest_p1 {

// FUN_00dd5650: debug printf (empty in release); functions.h declares it void(void).
inline void debugPrint(const char *message)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(message);
}

// ECX values loaded by the machine code for the __thiscall callees below (the raw
// decompilation dropped them from the call sites).
inline void *enemyGroupManager() { return (void *)0x01C78CB0; }  // ? global object at 0x01C78CB0
inline void *enemySetReader() { return (void *)0x01DBE5D8; }     // ? EnemySetReader instance at 0x01DBE5D8

} // namespace cActEnemyRequest_p1

// 00C7FDD0  Trigger::cActEnemyRequest::vf18  size=51  [class]
int Trigger::cActEnemyRequest::vf18()
{
    using namespace cActEnemyRequest_p1;
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    int *rec = record();
    if (rec == 0) {
        debugPrint(DAT_016aa78c);
        return 0;
    }
    int setId = rec[2];
    if (-1 < setId) {
        // 00CA6820 EnemySetReader::requestStart (__thiscall, this = 0x01DBE5D8)
        ((void (__thiscall *)(void *, int))0x00CA6820)(enemySetReader(), setId);
    }
    return 1;
}

// 00C7FE10  Trigger::cActEnemyRequest::vf24  size=15  [class]
int Trigger::cActEnemyRequest::vf24()
{
    if (record() == 0) {
        return -1;
    }
    return record()[2];
}

// 00C931F0  Trigger::cActEnemyRequest::vf00  size=6  [class]
void *Trigger::cActEnemyRequest::vf00()
{
    return &DAT_01dbe180;
}

// 00C93200  Trigger::cActEnemyRequest::vf04  size=31  [class]
Trigger::cActEnemyRequest *Trigger::cActEnemyRequest::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
