// src/managers/triggermanager/cActDoorCloseDelay.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActDoorCloseDelay.h"

extern undefined DAT_01dbe2d4;           // cActDoorCloseDelay static descriptor returned by vf00
extern char DAT_016aaa1c[];              // "Trigger::Act::DOOR_CLOSE: <data is NULL>" (Shift-JIS)
extern undefined DAT_018aa480;           // ECX of FUN_00c317b0 (door manager?)

namespace cActDoorCloseDelay_p1 {

// __thiscall call of a function whose functions.h prototype lacks the ECX argument or has the
// wrong convention; ECX (`self`) and the stack arguments are taken from the machine code.
template <class R, class F, class... A> inline R callThis(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// FUN_00dd5650: debug printf (functions.h declares it void(void); empty in release).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(format, args...);
}

// FUN_00e03ea0 (__cdecl): hash of a NUL-terminated name (functions.h declares it void).
inline unsigned int hashName(char *name)
{
    return ((unsigned int (*)(char *))FUN_00e03ea0)(name);
}

} // namespace cActDoorCloseDelay_p1

// 00C81800  Trigger::cActDoorCloseDelay::vf18  size=1  [class]
int Trigger::cActDoorCloseDelay::vf18()
{
    using namespace cActDoorCloseDelay_p1;
    // (machine code: `ret 4` -- one stack argument, unused; cAction.h declares vf18() without it)
    char *rec = (char *)record();
    if (rec == 0) {
        debugPrint(DAT_016aaa1c);  // "Trigger::Act::DOOR_CLOSE: data is NULL."
        return 0;
    }
    unsigned int doorNameHash = hashName(rec + 8);
    // raw: FUN_00c317b0(hash, rec+0x18); machine code: ECX = &DAT_018aa480, second argument is the
    // float at record+0x18 (fld/fstp)
    return callThis<int>(FUN_00c317b0, &DAT_018aa480, doorNameHash, *(float *)(rec + 0x18));
}

// 00C8F9D0  Trigger::cActDoorCloseDelay::vf08  size=1  [class]
void Trigger::cActDoorCloseDelay::vf08()
{
}

// 00C8F9E0  Trigger::cActDoorCloseDelay::vf0C  size=1  [class]
void Trigger::cActDoorCloseDelay::vf0C()
{
}

// 00C8F9F0  Trigger::cActDoorCloseDelay::vf10  size=1  [class]
void Trigger::cActDoorCloseDelay::vf10()
{
}

// 00C8FA00  Trigger::cActDoorCloseDelay::vf14  size=1  [class]
void Trigger::cActDoorCloseDelay::vf14()
{
}

// 00C94C00  Trigger::cActDoorCloseDelay::vf00  size=6  [class]
void *Trigger::cActDoorCloseDelay::vf00()
{
    return &DAT_01dbe2d4;
}

// 00C94C10  Trigger::cActDoorCloseDelay::vf04  size=31  [class]
Trigger::cActDoorCloseDelay *Trigger::cActDoorCloseDelay::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
