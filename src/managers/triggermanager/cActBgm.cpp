// src/managers/triggermanager/cActBgm.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActBgm.h"

extern undefined DAT_01dbe0f8;  // cActBgm static descriptor returned by vf00
extern char DAT_016416fa[];  // "" (empty string)
extern char DAT_016af3f8[];  // debug message: action has no record
extern char DAT_016af3d0[];  // debug message: empty BGM name
extern char DAT_016af3a0[];  // debug message format: BGM request failed (%s = name)
extern char DAT_016575ac[];  // BGM path format (takes the name)

namespace cActBgm_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
typedef char *(*FormatStringFn)(char *buffer, const void *format, ...);
typedef int (*PlayBgmFn)(char *name);

// FUN_00dd5650: debug printf (empty in release).
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;
// FUN_00959930: sprintf into a buffer, returns the buffer.
const FormatStringFn formatString = (FormatStringFn)FUN_00959930;
// FUN_00e5e1b0: start a BGM by name; nonzero on success.
const PlayBgmFn playBgm = (PlayBgmFn)FUN_00e5e1b0;

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

} // namespace cActBgm_p1

// 00C8AEB0  Trigger::cActBgm::vf08  size=1  [class]
void Trigger::cActBgm::vf08()
{
}

// 00C8AEC0  Trigger::cActBgm::vf0C  size=1  [class]
void Trigger::cActBgm::vf0C()
{
}

// 00C8AED0  Trigger::cActBgm::vf10  size=1  [class]
void Trigger::cActBgm::vf10()
{
}

// 00C8AEE0  Trigger::cActBgm::vf14  size=1  [class]
void Trigger::cActBgm::vf14()
{
}

// 00C92510  Trigger::cActBgm::vf00  size=6  [class]
void *Trigger::cActBgm::vf00()
{
    return &DAT_01dbe0f8;
}

// 00C92520  Trigger::cActBgm::vf04  size=31  [class]
Trigger::cActBgm *Trigger::cActBgm::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C92540  Trigger::cActBgm::vf18  size=204  [class]
int Trigger::cActBgm::vf18()
{
    using namespace cActBgm_p1;
    char path[1024];

    if (record() == 0) {
        debugPrint(DAT_016af3f8);
        return 0;
    }
    char *name = (char *)record() + 8;
    if (compareStrings((unsigned char *)name, (unsigned char *)DAT_016416fa) == 0) {
        debugPrint(DAT_016af3d0);
        return 0;
    }
    char *bgm = formatString(path, DAT_016575ac, name);
    if (playBgm(bgm) != 0) {
        return 1;
    }
    char *message = formatString(path, DAT_016af3a0, name);
    debugPrint(message);
    return 0;
}
