// src/managers/triggermanager/actions/TrgActEmAnim.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aaec0;  // error message format string
extern undefined DAT_016aaf08;  // error message format string
extern undefined DAT_016aaf58;  // error message format string
extern undefined DAT_016aafa0;  // error message format string
extern undefined DAT_016aafcc;  // error message format string
extern undefined DAT_016aaffc;  // error message format string
extern undefined4 DAT_01d5bad4;

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    unsigned int __fastcall EM_ANIM(int action);
} }

namespace TrgActEmAnim_p1 {

// field at a byte offset of a record whose layout is not modelled
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }
template <class A, class B> inline void reportError(const void *format, A a, B b)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b); }
template <class A, class B, class C> inline void reportError(const void *format, A a, B b, C c)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b, c); }

// 00AA4940 (not declared in functions.h): plays motion `name` on the enemy
inline int playEnemyMotion(char *name, int a1, float a2, float a3, int a4, float a5, float a6)
{
    return ((int (*)(char *, int, float, float, int, float, float))0x00AA4940)(name, a1, a2, a3, a4, a5, a6);
}

inline void clearBuffer(char *buffer, int size)
{
    for (int i = 0; i < size; i = i + 1) {
        buffer[i] = '\0';
    }
}

}  // namespace TrgActEmAnim_p1

// 00C7F7A0  Trigger::Act::EM_ANIM  size=543  [class]
// Plays an enemy animation: type 0x50 loads "<anim>.mot" + "<anim>_0_seq.bxm", type 0x4F plays a motion.
unsigned int __fastcall Trigger::Act::EM_ANIM(int action)
{
    using namespace TrgActEmAnim_p1;
    char suffix[8];
    char fileName[32];
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016aaffc);
        return 0;
    }
    int setName = params + 0xC;
    if (setName == 0) {
        reportError(&DAT_016aafcc);
        return 0;
    }
    char *animName = (char *)(params + 0x1C);
    if (animName == 0) {
        reportError(&DAT_016aafa0);
        return 0;
    }
    if (((int (*)(undefined4, undefined4, int))FUN_00c19da0)(DAT_01d5bad4, at<undefined4>(params, 8), setName) == 0) {
        reportError(&DAT_016aaf58, at<undefined4>(params, 8), setName);
        return 0;
    }
    if (((int (*)(void))FUN_00a7c8a0)() != 0) {
        unsigned int result;
        if (at<int>(params, 4) == 0x50) {
            clearBuffer(suffix, 5);
            char *cursor = animName;
            while (*cursor != '_') {
                cursor = cursor + 1;
            }
            _strncpy_s(suffix, 5, cursor + 1, 4);
            clearBuffer(fileName, 0x20);
            _sprintf_s(fileName, 0x20, (char *)"%s.mot", animName);
            int motionHash = ((int (*)(char *))FUN_00de4500)(fileName);
            clearBuffer(fileName, 0x20);
            _sprintf_s(fileName, 0x20, (char *)"%s_0_seq.bxm", animName);
            int sequenceHash = ((int (*)(char *))FUN_00de4500)(fileName);
            result = ((unsigned int (*)(int, int, int, int, float, int, float, float, char *))FUN_00ac45d0)
                         (motionHash, sequenceHash, 0, 0, 1.0f, 0, -1.0f, 1.0f, suffix);
            ((void (*)(int, int, int))FUN_00a96070)(0, 0x8000000, 1);
        }
        else {
            if (at<int>(params, 4) != 0x4F) {
                reportError(&DAT_016aaec0);
                goto fail;
            }
            result = (unsigned int)(playEnemyMotion(animName, 0, 0.2f, 1.0f, 0, -1.0f, 1.0f) != -1);
        }
        if (result != 0) {
            return result;
        }
    }
fail:
    reportError(&DAT_016aaf08, at<undefined4>(params, 8), params + 0xC, animName);
    return 0;
}
