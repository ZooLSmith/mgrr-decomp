// src/player/pl0010/state/LandingStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "LandingStatePl0010.h"

// type records returned by vf00 / cObj::vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e24[];  // LandingStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
// animation name tested with FUN_00a9f710
extern const char DAT_016a27b0[];     // "6022"

namespace LandingStatePl0010_p1 {

// field at an absolute byte offset
template <class T> inline T &at(const void *base, int offset)
{
    return *(T *)((char *)base + offset);
}

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// __thiscall call of a function with ECX = self (used where functions.h has the wrong prototype)
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// __fastcall call returning the full EAX (functions.h types these as bool)
template <class F> inline int fastcallInt(F fn, const void *self)
{
    typedef int (__fastcall *Fn)(const void *);
    return ((Fn)fn)(self);
}

// obj when its type record (from the vftable slot at `typeSlot`) derives from `type`, else 0
inline char *downcast(const void *obj, unsigned int typeSlot, const void *type)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, typeSlot), type);
    return isKind != 0 ? (char *)obj : 0;
}

inline char *asContext(const void *obj) { return downcast(obj, 0x0, DAT_01be9ef4); }  // StateMachineContextPl0010
inline char *asPl0000(const void *obj)  { return downcast(obj, 0x4, DAT_01be9db8); }  // Pl0000

// The player of a state-machine context (StateMachineContext+0xC: owner).
inline char *playerOf(const char *context)
{
    return asPl0000(at<void *>(context, 0xC));
}

// Pl0000+0x764: motion helper object (FUN_008e2740 / FUN_008e0b70 / FUN_008e0ba0 run on it)
inline char *motionHelper(const char *player)
{
    return at<char *>(player, 0x764);
}

// Pl0000+0x40D4 -> +0x14C: stick threshold parameter (compared squared with Pl0000+0xD28)
inline float stickThreshold(const char *player)
{
    return at<float>(at<char *>(player, 0x40D4), 0x14C);
}

// Pl0000+0xCF8 & Pl0000+0xE48: input flags
inline unsigned int inputFlags(const char *player)
{
    return at<unsigned int>(player, 0xCF8) & at<unsigned int>(player, 0xE48);
}

// Stick past the threshold and a move input held (the raw "threshold^2 < +0xD28 ? flags : 0").
inline bool moveInputHeld(const char *player)
{
    float threshold = stickThreshold(player);
    if (threshold * threshold < at<float>(player, 0xD28)) {
        return (at<unsigned int>(player, 0xE48) & at<unsigned int>(player, 0xCF8)) != 0;
    }
    return false;
}

// Pl0000+0x4254 set and the motion time (helper +0xFC) has reached Pl0000+0x4250.
inline bool cancelTimeReached(const char *player)
{
    return at<int>(player, 0x4254) != 0 &&
           at<float>(player, 0x4250) <= at<float>(motionHelper(player), 0xFC);
}

// Searches the action list at Pl0000+0x75C (entries of 0x3C bytes, id first) for `action`.
inline bool actionListed(const char *player, int action)
{
    int *header = *at<int **>(player, 0x75C);
    int count = header[2];
    int *entry = (int *)header[1];
    int *end = entry + count * 0xF;
    for (; entry != end; entry = entry + 0xF) {
        if (*entry == action) {
            return true;
        }
    }
    return false;
}

// Pl0000+0x4180/+0x417C/+0x4184 saved into +0x418C/+0x4188/+0x4190 on entry
inline void saveSteering(char *player)
{
    at<float>(player, 0x418C) = at<float>(player, 0x4180);
    at<float>(player, 0x4188) = at<float>(player, 0x417C);
    at<float>(player, 0x4190) = at<float>(player, 0x4184);
}

inline void restoreSteering(char *player)
{
    at<float>(player, 0x4180) = at<float>(player, 0x418C);
    at<float>(player, 0x417C) = at<float>(player, 0x4188);
    at<float>(player, 0x4184) = at<float>(player, 0x4190);
}

// Action (FUN_00a95ce0) -> landing motion overrides in SafeCheck, tested in this order.
struct ActionMotion {
    int action;
    int motion;
};
static const ActionMotion kActionMotions[] = {
    {0xA6, 100}, {0x33, 100}, {0x34, 100}, {199, 0x70}, {0x74, 0x70}, {0xB0, 0x6A},
    {0xA2, 0x6C}, {0xA0, 100}, {0xA1, 100}, {0xAB, 100}, {0xAC, 100},
};

}  // namespace LandingStatePl0010_p1

// 00B817C0  LandingStatePl0010::vf08  size=44  [class]
// Enter.
bool LandingStatePl0010::vf08(undefined4 contextArg)
{
    if (StateMachineNode::vf08(contextArg) == 0) {
        return 0;
    }
    field34() = 0;
    motionId() = -1;
    return 1;
}

// 00B817F0  LandingStatePl0010::vf24  size=19  [class]
bool LandingStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B81830  LandingStatePl0010::vf00  size=6  [class]
undefined *LandingStatePl0010::vf00()
{
    return (undefined *)DAT_01be9e24;  // type record
}

// 00B91000  LandingStatePl0010::vf04  size=31  [class]
undefined4 *LandingStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BABD30  LandingStatePl0010::SafeCheck  size=1204  [class]
// Entry: chooses the landing motion and the landing effect.
void LandingStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace LandingStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        char *context = asContext(contextArg);
        char *player = playerOf(context);
        at<int>(player, 0x507C) = 0;  /* Pl0000+0x507C */
        saveSteering(player);
        at<float>(player, 0x894) = 0.0f;  /* Pl0000+0x894 */

        motionId() = 0x67;
        if (moveInputHeld(player)) {
            motionId() = 100;
        }
        else {
            if (FUN_00a95ce0((int)player, 0x73) != 0) {
                motionId() = 0x65;
            }
            if (FUN_00a95ce0((int)player, 0x5E) != 0) {
                motionId() = 0x65;
            }
        }
        int prevState = at<int>(this, 0x2C);  /* StateMachineNode+0x2C: previous state */
        if (prevState == 0x14) {
            motionId() = 0x69;
        }
        if (prevState == 0x2F) {
            motionId() = 100;
        }
        if (prevState == 0x10) {
            motionId() = 100;
        }
        if (at<float>(player, 0x41E8) < -1.5f) {  /* Pl0000+0x41E8: vertical speed? */
            motionId() = 0x6E;
        }
        if (prevState == 0xD) {
            motionId() = 0x6E;
        }
        for (int i = 0; i < (int)(sizeof(kActionMotions) / sizeof(kActionMotions[0])); i++) {
            if (FUN_00a95ce0((int)player, kActionMotions[i].action) != 0) {
                motionId() = kActionMotions[i].motion;
            }
        }
        if (at<int>(context, 0x30) != 0) {  /* StateMachineContextPl0010+0x30 */
            motionId() = 0x6B;
        }
        if (motionId() == 0x6E) {
            char *ground = at<char *>(player, 0x4268);  /* Pl0000+0x4268 */
            if (at<int>(ground, 0x544) != 0 && at<float>(ground, 0x548) <= 3.5f) {
                motionId() = 0x6F;
            }
            if (at<int>(player, 0x4254) != 0 && at<float>(player, 0x4250) <= 3.5f) {
                motionId() = 0x6F;
            }
            float threshold = stickThreshold(player);
            if (at<float>(player, 0xD28) <= threshold * threshold) {
                motionId() = 0x65;
            }
        }

        if (at<int *>(player, 0x75C) != 0) {  /* Pl0000+0x75C: action list */
            int action = FUN_00a95ca0((int)player, 0);
            if (actionListed(player, action)) {
                if (FUN_008d7f90(at<int *>(player, 0x75C), action) == 0) {
                    motionId() = action;
                }
                else {
                    if (motionId() == 100) {
                        if (fastcallInt(FUN_00b8b5d0, player) != 1) {
                            motionId() = 0x6D;
                        }
                        if (cancelTimeReached(player)) {
                            motionId() = 0x6D;
                        }
                    }
                    FUN_00aa9280((int)player, motionId());
                }
            }
            else {
                motionId() = 0x6D;
            }

            // landing effect
            if (motionId() == 0x6A) {
                FUN_00aa92c0((undefined4)player, 7);
            }
            if (motionId() == 0x6C) {
                FUN_00aa92c0((undefined4)player, 7);
            }
            if (motionId() == 0x6F) {
                FUN_00aa92c0((undefined4)player, 5);
            }
            if (motionId() == 0x66) {
                FUN_00aa92c0((undefined4)player, 7);
            }
            if (motionId() == 0x70) {
                FUN_00aa92c0((undefined4)player, 7);
            }
            if (motionId() == 0x67) {
                FUN_00aa92c0((undefined4)player, 0xF);
            }
            if (motionId() == 0x6D) {
                FUN_00aa92c0((undefined4)player, 6);
            }
            if (motionId() == 0x6B) {
                FUN_00aa92c0((undefined4)player, 6);
            }
            if (motionId() == 100) {
                FUN_00aa92c0((undefined4)player, 7);
            }
            if (motionId() == 0x65) {
                FUN_00aa92c0((undefined4)player, 7);
            }
            if (motionId() == 0x6E) {
                int effect;
                if ((at<unsigned int>(player, 0xCF8) & at<unsigned int>(player, 0xE48)) == 0 ||
                    FUN_00b95e30((int)player) == 0) {
                    effect = 8;
                }
                else {
                    effect = 9;
                }
                FUN_00aa92c0((undefined4)player, effect);
            }
        }

        if (at<int>(motionHelper(player), 0x104) != 0) {
            at<int>(motionHelper(player), 0x104) = 0;
        }
        if (cancelTimeReached(player)) {
            int action = FUN_00a95ca0((int)player, 0);
            int *actionList = at<int *>(player, 0x75C);
            if (FUN_008d7d10(actionList, action) != 0 && FUN_008d7f90(actionList, action) != 0) {
                thiscall<void>(FUN_00a96070, player, 0, 0x80, 1);
            }
        }
        at<float>(context, 0x10) = 0.0f;  /* StateMachineContextPl0010+0x10 */
        at<int>(context, 0x30) = 0;       /* StateMachineContextPl0010+0x30 */
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BAC1F0  LandingStatePl0010::vf18  size=158  [class]
undefined4 LandingStatePl0010::vf18(undefined4 contextArg)
{
    using namespace LandingStatePl0010_p1;
    char *player = playerOf(asContext((void *)contextArg));
    if (fastcallInt(FUN_008e2740, motionHelper(player)) == 0 &&
        (at<int>(player, 0x41E0) == 0 ||  /* Pl0000+0x41E0 / +0x41E4: ground distance? */
         at<float>(at<char *>(player, 0x40D4), 0x160) <= at<float>(player, 0x41E4))) {
        FUN_00d82510((int)this, 0xE, 0x4B);
    }
    return StateMachineNode::vf18(contextArg);
}

// 00BAC290  LandingStatePl0010::vf20  size=136  [class]
// Leave: restores the steering values saved by SafeCheck.
undefined4 LandingStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace LandingStatePl0010_p1;
    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *player = playerOf(asContext(contextArg));
    restoreSteering(player);
    return 1;
}

// 00BCAA10  LandingStatePl0010::vf14  size=595  [class]
// Per frame: leaves the landing once the motion ended, was cancelled or another motion runs.
void LandingStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace LandingStatePl0010_p1;
    bool changeState = false;
    char *player = playerOf(asContext(contextArg));
    bool pastCancel = cancelTimeReached(player);
    bool requestIdle = false;
    bool motionEnded = false;
    if (FUN_00a94db0((int)player, motionId()) != 0 || motionId() == -1) {
        requestIdle = true;
        changeState = true;
        motionEnded = true;
    }
    int motion = motionId();
    if ((motion == 0x66 || motion == 100) && pastCancel) {
        changeState = true;
        requestIdle = true;
    }
    if (motion != 100 && motion != 0x66 && motion != 0x68 && motion != 0x69 && motion != 0x6E) {
        changeState = true;
        requestIdle = true;
    }
    if (FUN_00a9f7d0((int)player, 100) != 0 || FUN_00a9f7d0((int)player, 0x6B) != 0 ||
        FUN_00a9f7d0((int)player, 0x6A) != 0 || FUN_00a9f7d0((int)player, 0x6C) != 0 ||
        FUN_00a9f7d0((int)player, 0x6F) != 0 || FUN_00a9f7d0((int)player, 0x68) != 0 ||
        FUN_00a9f7d0((int)player, 0x69) != 0 || FUN_00a9f7d0((int)player, 0x6E) != 0) {
        requestIdle = true;
    }
    motion = motionId();
    if (motion == 0x6F || motion == 0x6B || motion == 0x6A || motion == 0x6C || motion == 0x70) {
        if (FUN_00a9f7d0((int)player, motion) != 0) {
            changeState = true;
            requestIdle = true;
        }
    }
    if (FUN_00a9f710((int)player, (undefined4)DAT_016a27b0) != 0) {
        if ((at<int>(player, 0x41E0) != 0 && !(0.36f < at<float>(player, 0x41E4))) ||
            fastcallInt(FUN_008e2740, motionHelper(player)) != 0) {
            FUN_00aa9280((int)player, motionId());
        }
    }
    if (requestIdle) {
        FUN_00bb8ae0(contextArg, (undefined4)this, 100);
    }
    if (changeState) {
        if (moveInputHeld(player)) {
            FUN_00d82510((int)this, 10, 0x32);
        }
        else if (motionEnded || pastCancel) {
            FUN_00d82510((int)this, 0x11, 0x32);
        }
    }
    StateMachineNode::vf14(contextArg);
}

// 00BDF1A0  LandingStatePl0010::qteSafeCheck  size=491  [class]
void LandingStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace LandingStatePl0010_p1;
    char *player = playerOf(asContext(contextArg));
    FUN_00b8af00((int)player);
    FUN_008e0b70((int)motionHelper(player), 0);
    FUN_008e0ba0((int)motionHelper(player), 0);
    if (motionId() == 100) {
        float threshold = stickThreshold(player);
        if (at<float>(player, 0xD28) <= threshold * threshold || inputFlags(player) == 0) {
            FUN_00d82510((int)this, 0x11, 0x32);
        }
    }
    if (motionId() == 0x66) {
        float threshold = stickThreshold(player);
        if (at<float>(player, 0xD28) <= threshold * threshold || inputFlags(player) == 0) {
            FUN_00d82510((int)this, 0x11, 0x32);
        }
        threshold = stickThreshold(player);
        if (threshold * threshold < at<float>(player, 0xD28) && inputFlags(player) != 0) {
            FUN_00d82510((int)this, 10, 0x32);
        }
    }
    if (cancelTimeReached(player)) {
        int action = FUN_00a95ca0((int)player, 0);
        if (actionListed(player, action)) {
            if (FUN_008d7f90(at<int *>(player, 0x75C), action) != 0) {
                thiscall<void>(FUN_00a96070, player, 0, 0x80, 1);
            }
        }
    }
    if (inputFlags(player) != 0) {
        FUN_00bd3730(contextArg, (undefined4)this, 0xD, 0xC);
        FUN_00bd37f0(contextArg, (undefined4)this, 0xD);
        FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
        FUN_00bd39d0(contextArg, (undefined4)this, 10);
    }
    StateMachineNode::qteSafeCheck(contextArg);
}
