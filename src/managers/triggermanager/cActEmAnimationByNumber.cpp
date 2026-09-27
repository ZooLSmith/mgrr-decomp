// src/managers/triggermanager/cActEmAnimationByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEmAnimationByNumber.h"

extern undefined DAT_01dbe234;           // cActEmAnimationByNumber static descriptor returned by vf00
extern char DAT_016abaa4[];              // "Trigger::%s: <enemy not found> %d %d %d" (Shift-JIS)
extern char DAT_016aba0c[];              // "Trigger::%s: <failed to get the Behavior>" (Shift-JIS)
extern char DAT_016aba88[];              // "Trigger::%s: <unsupported type>" (Shift-JIS)
extern char DAT_016aba2c[];              // "Trigger::%s: <failed to get the mot file> %s" (Shift-JIS)
extern char DAT_016aba5c[];              // "Trigger::%s: <animation name format error> %s" (Shift-JIS)
extern undefined DAT_01c78cb0;           // enemy manager (ECX of FUN_00c19c00)
extern undefined DAT_018b92f0;           // file manager (ECX of FUN_00de4500)

namespace cActEmAnimationByNumber_p1 {

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

// zero a 32-byte file-name buffer (the compiler emitted eight dword stores)
inline void clearFileName(char *buffer)
{
    for (int i = 0; i < 0x20; i++) {
        buffer[i] = '\0';
    }
}

} // namespace cActEmAnimationByNumber_p1

// 00C80CC0  Trigger::cActEmAnimationByNumber::vf18  size=794  [class]
int Trigger::cActEmAnimationByNumber::vf18()
{
    using namespace cActEmAnimationByNumber_p1;
    // (machine code: `ret 4` -- one stack argument, unused; cAction.h declares vf18() without it)
    char *rec = (char *)record();
    int type = *(int *)(rec + 4);
    const char *typeName;
    // raw: gotos to a common label; same selection
    if (type == 0x95) {
        typeName = "EM_ANIM_PHASE_NUM";
    }
    else if (type == 0x32) {
        typeName = "EM_ANIM_LOOP_NUM";
    }
    else if (type == 0x96) {
        typeName = "EM_ANIM_PHASE_LOOP_NUM";
    }
    else {
        typeName = "EM_ANIM_NUM";   // 0x94 and anything else
    }
    // machine code: ECX = &DAT_01c78cb0 (enemy manager)
    int enemy = callThis<int>(FUN_00c19c00, &DAT_01c78cb0, *(undefined4 *)(rec + 8),
                              *(undefined4 *)(rec + 0xc), *(undefined4 *)(rec + 0x10));
    if (enemy == 0) {
        // "Trigger::%s: enemy not found %d %d %d"
        debugPrint(DAT_016abaa4, typeName, *(undefined4 *)(rec + 8), *(undefined4 *)(rec + 0xc),
                   *(undefined4 *)(rec + 0x10));
        return 0;
    }
    unsigned int result = 0;
    int behavior = (int)FUN_00a7c8a0(enemy);  // __fastcall, ECX = enemy (from the machine code)
    if (behavior == 0) {
        debugPrint(DAT_016aba0c, typeName);  // "Trigger::%s: failed to get the Behavior"
    }
    else {
        type = *(int *)(rec + 4);
        int motionResult;
        if (type == 0x94) {
            // 00AA4940 (not in functions.h): FUN_00a9f2f0 with flags | 0x8000000; ECX = behavior
            motionResult = callThis<int>(0x00AA4940u, (void *)behavior, rec + 0x14, 0,
                                         0.2f /* 0x3e4ccccd */, 1.0f, 0u, -1.0f, 1.0f);
        }
        else {
            if (type != 0x32) {
                if ((type != 0x95) && (type != 0x96)) {
                    debugPrint(DAT_016aba88, typeName);  // "Trigger::%s: unsupported type"
                    return 0;
                }
                char *motionName = rec + 0x14;
                char suffix[8];
                suffix[0] = '\0';
                suffix[1] = '\0';
                suffix[2] = '\0';
                suffix[3] = '\0';
                suffix[4] = 0;
                int pos = 0;
                char *cursor = motionName;
                do {
                    if (*cursor == '\0') break;
                    if (*cursor == '_') {
                        if (pos < 0x10) {
                            char fileName[32];
                            _strncpy_s(suffix, 5, cursor + 1, 4);
                            clearFileName(fileName);
                            _sprintf_s(fileName, 0x20, (char *)"%s.mot", motionName);
                            // machine code: ECX = &DAT_018b92f0 (file manager)
                            int motionFile = callThis<int>(FUN_00de4500, &DAT_018b92f0, fileName);
                            if (motionFile == 0) {
                                // "Trigger::%s: failed to get the mot file %s"
                                debugPrint(DAT_016aba2c, typeName, fileName);
                                return 0;
                            }
                            clearFileName(fileName);
                            _sprintf_s(fileName, 0x20, (char *)"%s_0_seq.bxm", motionName);
                            int sequenceFile = callThis<int>(FUN_00de4500, &DAT_018b92f0, fileName);
                            // FUN_00ac45d0: functions.h has no prototype; ECX = behavior
                            result = callThis<unsigned int>(FUN_00ac45d0, (void *)behavior, motionFile,
                                                            sequenceFile, 0, 0.0f, 1.0f, 0, -1.0f, 1.0f,
                                                            suffix);
                            if (result != 1) {
                                return (int)result;
                            }
                            callThis<void>(FUN_00a95f70, (void *)behavior, 12.0f /* 0x41400000 */);
                            if (*(int *)(rec + 4) != 0x95) {
                                return 1;
                            }
                            // raw: FUN_00a96070(0, 0x8000000, 1); machine code: ECX = behavior
                            callThis<void>(FUN_00a96070, (void *)behavior, 0, 0x8000000, 1);
                            return 1;
                        }
                        break;
                    }
                    pos = pos + 1;
                    cursor = cursor + 1;
                } while (pos < 0x10);
                // "Trigger::%s: animation name format error %s"
                debugPrint(DAT_016aba5c, typeName, motionName);
                return 0;
            }
            // FUN_00a9f2f0 (cleaned.h passes `self` first; machine code: ECX = behavior)
            motionResult = callThis<int>(FUN_00a9f2f0, (void *)behavior, rec + 0x14, 0,
                                         0.2f /* 0x3e4ccccd */, 1.0f, 0u, -1.0f, 1.0f);
        }
        result = (unsigned int)(motionResult != -1);
        if (result == 1) {
            callThis<void>(FUN_00a95f70, (void *)behavior, 12.0f /* 0x41400000 */);
            return 1;
        }
    }
    return (int)result;
}

// 00C8E030  Trigger::cActEmAnimationByNumber::vf08  size=1  [class]
void Trigger::cActEmAnimationByNumber::vf08()
{
}

// 00C8E040  Trigger::cActEmAnimationByNumber::vf0C  size=1  [class]
void Trigger::cActEmAnimationByNumber::vf0C()
{
}

// 00C8E050  Trigger::cActEmAnimationByNumber::vf10  size=1  [class]
void Trigger::cActEmAnimationByNumber::vf10()
{
}

// 00C8E060  Trigger::cActEmAnimationByNumber::vf14  size=1  [class]
void Trigger::cActEmAnimationByNumber::vf14()
{
}

// 00C941D0  Trigger::cActEmAnimationByNumber::vf00  size=6  [class]
void *Trigger::cActEmAnimationByNumber::vf00()
{
    return &DAT_01dbe234;
}

// 00C941E0  Trigger::cActEmAnimationByNumber::vf04  size=31  [class]
Trigger::cActEmAnimationByNumber *Trigger::cActEmAnimationByNumber::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
