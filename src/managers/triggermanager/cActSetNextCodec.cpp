// src/managers/triggermanager/cActSetNextCodec.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSetNextCodec.h"

extern undefined DAT_01dbe1d8;  // cActSetNextCodec static descriptor returned by vf00
extern char DAT_016ab328[];  // "Trigger::Act::CODEC_START: data is NULL" (Shift-JIS)
extern char DAT_016ab548[];  // "Trigger::Act::NEXT_CODEC: that codec id is not in use now [%s]" (Shift-JIS)
extern void *PTR_vftable_018863f4;  // global object at 0x018863F4 (first dword = its vftable); ECX of FUN_00937830

namespace cActSetNextCodec_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

// FUN_00937830 (__thiscall, ECX = the global object at 0x018863F4; Ghidra dropped ECX):
// nonzero when codecId is in use
inline int isCodecIdUsed(int codecId)
{
    return ((int (__thiscall *)(void *, int))FUN_00937830)(&PTR_vftable_018863f4, codecId);
}

} // namespace cActSetNextCodec_p1

// 00C805F0  Trigger::cActSetNextCodec::vf18  size=77  [class]
int Trigger::cActSetNextCodec::vf18()
{
    using namespace cActSetNextCodec_p1;
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    int *data = record();
    if (data == 0) {
        debugPrint(DAT_016ab328);
        return 0;
    }
    if (isCodecIdUsed(data[2]) == 0) {
        debugPrint(DAT_016ab548, data[2]);
        return 0;
    }
    return 1;
}

// 00C8D000  Trigger::cActSetNextCodec::vf08  size=1  [class]
void Trigger::cActSetNextCodec::vf08()
{
}

// 00C8D010  Trigger::cActSetNextCodec::vf0C  size=1  [class]
void Trigger::cActSetNextCodec::vf0C()
{
}

// 00C8D020  Trigger::cActSetNextCodec::vf10  size=1  [class]
void Trigger::cActSetNextCodec::vf10()
{
}

// 00C8D030  Trigger::cActSetNextCodec::vf14  size=1  [class]
void Trigger::cActSetNextCodec::vf14()
{
}

// 00C93910  Trigger::cActSetNextCodec::vf00  size=6  [class]
void *Trigger::cActSetNextCodec::vf00()
{
    return &DAT_01dbe1d8;
}

// 00C93920  Trigger::cActSetNextCodec::vf04  size=31  [class]
Trigger::cActSetNextCodec *Trigger::cActSetNextCodec::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
