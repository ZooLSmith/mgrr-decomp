// src/managers/triggermanager/cActBgmSimple.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActBgmSimple.h"

extern undefined DAT_01dbe0fc;  // cActBgmSimple static descriptor returned by vf00
extern char DAT_016416fa[];  // "" (empty string)
extern char DAT_016af4c0[];  // debug message: action has no record
extern char DAT_016af494[];  // debug message: empty BGM name
extern char DAT_016af448[];  // debug message format: BGM request failed (%s = name)
extern int DAT_018b9174;  // current phase id

namespace cActBgmSimple_p1 {

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

} // namespace cActBgmSimple_p1

// 00C8AF50  Trigger::cActBgmSimple::vf08  size=1  [class]
void Trigger::cActBgmSimple::vf08()
{
}

// 00C8AF60  Trigger::cActBgmSimple::vf0C  size=1  [class]
void Trigger::cActBgmSimple::vf0C()
{
}

// 00C8AF70  Trigger::cActBgmSimple::vf10  size=1  [class]
void Trigger::cActBgmSimple::vf10()
{
}

// 00C8AF80  Trigger::cActBgmSimple::vf14  size=1  [class]
void Trigger::cActBgmSimple::vf14()
{
}

// 00C92620  Trigger::cActBgmSimple::vf00  size=6  [class]
void *Trigger::cActBgmSimple::vf00()
{
    return &DAT_01dbe0fc;
}

// 00C92630  Trigger::cActBgmSimple::vf04  size=31  [class]
Trigger::cActBgmSimple *Trigger::cActBgmSimple::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C92650  Trigger::cActBgmSimple::vf18  size=215  [class]
int Trigger::cActBgmSimple::vf18()
{
    using namespace cActBgmSimple_p1;
    char path[1024];

    if (record() == 0) {
        debugPrint(DAT_016af4c0);
        return 0;
    }
    char *name = (char *)record() + 8;
    if (compareStrings((unsigned char *)name, (unsigned char *)DAT_016416fa) == 0) {
        debugPrint(DAT_016af494);
        return 0;
    }
    char *bgm = formatString(path, "%s%03x_%s", "bgm_p", DAT_018b9174, name);
    if (playBgm(bgm) != 0) {
        return 1;
    }
    char *message = formatString(path, DAT_016af448, name);
    debugPrint(message);
    return 0;
}
