// src/managers/triggermanager/cActSound.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSound.h"

extern undefined DAT_01dbe104;  // cActSound static descriptor returned by vf00
extern char DAT_016416fa[];  // "" (empty string)
extern char DAT_016aab54[];  // "Trigger::Act::SOUND: data is NULL" (Shift-JIS)
extern char DAT_016aab28[];  // "Trgger::Act::SOUND: no SOUND name" (Shift-JIS)

namespace cActSound_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

// FUN_00e467b0 (cdecl): play a sound by name; the second argument is a float (fld/fstp in the caller)
inline void playSound(char *name, float value)
{
    ((void (__cdecl *)(char *, float))FUN_00e467b0)(name, value);
}

// inlined strcmp: -1 / 0 / 1
inline int compareStrings(const unsigned char *a, const unsigned char *b)
{
    for (;;) {
        unsigned char c = a[0];
        if (c != b[0]) {
            return c < b[0] ? -1 : 1;
        }
        if (c == 0) {
            return 0;
        }
        c = a[1];
        if (c != b[1]) {
            return c < b[1] ? -1 : 1;
        }
        a += 2;
        b += 2;
        if (c == 0) {
            return 0;
        }
    }
}

} // namespace cActSound_p1

// 00C7F390  Trigger::cActSound::vf18  size=125  [class]
int Trigger::cActSound::vf18()
{
    using namespace cActSound_p1;
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    int *data = record();
    if (data == 0) {
        debugPrint(DAT_016aab54);
        return 0;
    }
    char *name = (char *)data + 8;
    if (compareStrings((unsigned char *)name, (unsigned char *)DAT_016416fa) == 0) {
        debugPrint(DAT_016aab28);
        return 0;
    }
    playSound(name, *(float *)((char *)data + 0x18));
    return 1;
}

// 00C8B090  Trigger::cActSound::vf08  size=1  [class]
void Trigger::cActSound::vf08()
{
}

// 00C8B0A0  Trigger::cActSound::vf0C  size=1  [class]
void Trigger::cActSound::vf0C()
{
}

// 00C8B0B0  Trigger::cActSound::vf10  size=1  [class]
void Trigger::cActSound::vf10()
{
}

// 00C8B0C0  Trigger::cActSound::vf14  size=1  [class]
void Trigger::cActSound::vf14()
{
}

// 00C928C0  Trigger::cActSound::vf00  size=6  [class]
void *Trigger::cActSound::vf00()
{
    return &DAT_01dbe104;
}

// 00C928D0  Trigger::cActSound::vf04  size=31  [class]
Trigger::cActSound *Trigger::cActSound::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
