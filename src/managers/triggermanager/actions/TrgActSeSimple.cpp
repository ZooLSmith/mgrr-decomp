// src/managers/triggermanager/actions/TrgActSeSimple.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016416fa[];  // "" (empty string)
extern char DAT_016af5b0[];  // debug message: action has no record
extern char DAT_016af580[];  // debug message: empty SE name
extern char DAT_016af54c[];  // debug message: point %d not found
extern char DAT_016af518[];  // debug message format: SE request failed (%s = name)
extern char DAT_0165864c[];  // SE name format (prefix, name)
extern char DAT_016af57c[];  // SE name prefix

// Trigger::Act::SE_SIMPLE is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall SE_SIMPLE(int *action);
} }

namespace TrgActSeSimple_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

typedef char *(*FormatStringFn)(char *buffer, const void *format, ...);
const FormatStringFn formatString = (FormatStringFn)FUN_00959930;  // sprintf, returns the buffer

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

// FUN_00e5e050: play a sound effect by name; nonzero on success.
inline int playSe(char *name, int unknown)
{
    return ((int (*)(char *, int))FUN_00e5e050)(name, unknown);
}
// 00E5E080: play a sound effect at a position; nonzero on success.
inline int playSeAt(char *name, unsigned int *position, int unknown2, unsigned int unknown3, int unknown4)
{
    return ((int (*)(char *, unsigned int *, int, unsigned int, int))0x00E5E080)(
        name, position, unknown2, unknown3, unknown4);
}
// FUN_00c84800: position of the point with the given index; nonzero when found.
inline int getPointPosition(int pointIndex, unsigned int *position)
{
    return ((int (*)(int, unsigned int *))FUN_00c84800)(pointIndex, position);
}

} // namespace TrgActSeSimple_p1

// 00C92770  Trigger::Act::SE_SIMPLE  size=319  [class]
int __fastcall Trigger::Act::SE_SIMPLE(int *action)
{
    using namespace TrgActSeSimple_p1;
    unsigned int point[3];
    unsigned int position[4];
    char buffer[1036];
    int result;

    int *record = (int *)action[1];
    if (record == 0) {
        debugPrint(DAT_016af5b0);
        return 0;
    }
    char *name = (char *)record + 8;
    if (compareStrings((unsigned char *)name, (unsigned char *)DAT_016416fa) == 0) {
        debugPrint(DAT_016af580);
        return 0;
    }
    char *seName = formatString(buffer, DAT_0165864c, DAT_016af57c, name);
    if (record[6] == -1) {  // +0x18: point index, -1 = no position
        result = playSe(seName, 0);
    }
    else {
        if (getPointPosition(record[6], point) == 0) {
            debugPrint(DAT_016af54c, record[6]);
            goto failed;
        }
        position[0] = point[0];
        position[1] = point[1];
        position[2] = point[2];
        position[3] = 0x3f800000;  // 1.0f
        result = playSeAt(seName, position, 0, 0xffffffff, 0);
    }
    if (result != 0) {
        return 1;
    }
failed:
    debugPrint(formatString(buffer, DAT_016af518, name));
    return 0;
}
