// src/managers/triggermanager/cActEnemyFirstRequestEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyFirstRequestEnd.h"

extern undefined DAT_01dbe1a0;           // cActEnemyFirstRequestEnd static descriptor returned by vf00
extern char DAT_016aa78c[];              // "Trigger::Act::ENM: <data is NULL>" (Shift-JIS)
extern undefined DAT_01dbe5d8;           // EnemySetReader instance (ECX of requestEnd_3)

namespace cActEnemyFirstRequestEnd_p1 {

// FUN_00dd5650: debug printf (functions.h declares it void(void); empty in release).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(format, args...);
}

} // namespace cActEnemyFirstRequestEnd_p1

// 00C7FFB0  Trigger::cActEnemyFirstRequestEnd::vf18  size=42  [class]
int Trigger::cActEnemyFirstRequestEnd::vf18()
{
    using namespace cActEnemyFirstRequestEnd_p1;
    // (machine code: `ret 4` -- one stack argument, unused; cAction.h declares vf18() without it)
    if (record() == 0) {
        debugPrint(DAT_016aa78c);
        return 0;
    }
    // 00CA5BD0 EnemySetReader::requestEnd_3 (__fastcall; class not declared in the headers);
    // raw: no argument shown; machine code: ECX = &DAT_01dbe5d8
    ((void (__fastcall *)(void *))0x00CA5BD0)(&DAT_01dbe5d8);
    return 1;
}

// 00C7FFE0  Trigger::cActEnemyFirstRequestEnd::vf24  size=4  [class]
int Trigger::cActEnemyFirstRequestEnd::vf24()
{
    return -1;
}

// 00C933F0  Trigger::cActEnemyFirstRequestEnd::vf00  size=6  [class]
void *Trigger::cActEnemyFirstRequestEnd::vf00()
{
    return &DAT_01dbe1a0;
}

// 00C93400  Trigger::cActEnemyFirstRequestEnd::vf04  size=31  [class]
Trigger::cActEnemyFirstRequestEnd *Trigger::cActEnemyFirstRequestEnd::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
