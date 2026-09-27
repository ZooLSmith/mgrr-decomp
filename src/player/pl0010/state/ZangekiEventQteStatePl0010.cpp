// src/player/pl0010/state/ZangekiEventQteStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiEventQteStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// CRT (the compiler emitted the string compare inline)
extern "C" int __cdecl strcmp(const char *a, const char *b);

// ---------------------------------------------------------------------------------------------
// Data referenced by this file
// ---------------------------------------------------------------------------------------------
// type records (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9ea8[];  // ZangekiEventQteStatePl0010 (returned by vf00)
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01b35260[];  // Et0006
// global objects passed in ECX
extern char DAT_01bea1d0[];           // camera / view
extern char DAT_01bea750[];           // camera controller (ECX of FUN_00db3e80)
extern unsigned char DAT_01d61ab8[];  // global object handle of the QTE target
// strings
extern const char DAT_016a27e0[];     // "60c0"
// plain globals
extern unsigned int DAT_01bea060;     // global flags (0x8 / 0x400 set while this state runs)
extern float        DAT_01bea3b0;     // negated and passed to FUN_00b8bb40 when |angle| <= 30 deg
extern float        DAT_01bea3b4;     // base yaw (+ pi - 10 deg -> +0x378 of the object at player +0x7D0)
extern int          DAT_01bea9a0;     // set to 1 by the kind 3 / 4 SafeCheck handlers
extern int          DAT_01dc08d4;     // cleared on leave

namespace ZangekiEventQteStatePl0010_p1 {

// field at an absolute byte offset
template <class T> inline T &fld(const void *base, int offset)
{
    return *(T *)((char *)base + offset);
}

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// __thiscall call of a function (symbol or address) with ECX = self
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// __cdecl call of a function (symbol or address)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// Functions defined in other files as members of unrelated classes; they are __thiscall with
// ECX = this state and one stack argument (the context).
static void *const kQteEm0010DiveUpdateOnce   = (void *)0x00BB3B50;  // ZANGEKI_QTE_EM0010DIVE::updateOnce
static void *const kQteEm0010DiveUpdateOnce2  = (void *)0x00BB3CA0;  // ZANGEKI_QTE_EM0010DIVE::updateOnce_2
static void *const kQteEm0070DiveUpdateOnce   = (void *)0x00BB3E30;  // ZANGEKI_QTE_EM0070DIVE::updateOnce
static void *const kQteEm0070DiveUpdateOnce2  = (void *)0x00BB40F0;  // ZANGEKI_QTE_EM0070DIVE::updateOnce_2
static void *const kQteStealthUpdateOnce      = (void *)0x00BB3F80;  // ZANGEKI_QTE_STEALTH::updateOnce
static void *const kQteStealthUpdateOnce2     = (void *)0x00BB4240;  // ZANGEKI_QTE_STEALTH::updateOnce_2
static void *const kQteEm0100DiveUpdateOnce   = (void *)0x00BB4700;  // ZANGEKI_QTE_EM0100DIVE::updateOnce
static void *const kQteEm0100BackUpdateOnce   = (void *)0x00BB4850;  // ZANGEKI_QTE_EM0100BACK::updateOnce
// Pl0000::em0080Qte2SafeCheck (declared static in Pl0000.h; __thiscall with ECX = this state)
static void *const kPl0000Em0080Qte2SafeCheck = (void *)0x00BF9730;
// CharacterControl::setHeight (__thiscall, one float)
static void *const kCharacterControlSetHeight = (void *)0x008E49E0;

// obj when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline StateMachineContextPl0010 *asContextPl0010(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, 0x0), DAT_01be9ef4);
    return isKind != 0 ? (StateMachineContextPl0010 *)obj : 0;
}

// obj when it is a Pl0000 (type record from cObj::vf04, slot 4), else 0
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, 0x4), DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// --- StateMachineContextPl0010 fields (not owned here) -----------------------------------------
inline void *&ctxOwner(void *c)      { return fld<void *>(c, 0xC); }     // StateMachineContext+0xC: owner (the player)
inline int   &ctxFlagD8(void *c)     { return fld<int>(c, 0xD8); }       // StateMachineContextPl0010+0xD8: permission flag (1: no follow-up state)
inline int   &ctxFlagDC(void *c)     { return fld<int>(c, 0xDC); }       // +0xDC permission flag
inline int   &ctxFlagE0(void *c)     { return fld<int>(c, 0xE0); }       // +0xE0 permission flag
inline int   &ctxFlagE4(void *c)     { return fld<int>(c, 0xE4); }       // +0xE4 permission flag
inline int   &ctxFlagE8(void *c)     { return fld<int>(c, 0xE8); }       // +0xE8 permission flag
inline int   &ctxFlagEC(void *c)     { return fld<int>(c, 0xEC); }       // +0xEC permission flag
inline int   &ctxFlagF0(void *c)     { return fld<int>(c, 0xF0); }       // +0xF0 permission flag
inline int   &ctxFieldF4(void *c)    { return fld<int>(c, 0xF4); }       // +0xF4
inline int   &ctxFieldF8(void *c)    { return fld<int>(c, 0xF8); }       // +0xF8
inline int   &ctxFieldFC(void *c)    { return fld<int>(c, 0xFC); }       // +0xFC
inline int   &ctxField100(void *c)   { return fld<int>(c, 0x100); }      // +0x100
inline float &ctxValue10C(void *c)   { return fld<float>(c, 0x10C); }    // +0x10C passed to FUN_005edc60 when > 0
inline void  *ctxObj190(void *c)     { return (char *)c + 0x190; }       // +0x190 embedded object (vf08 takes 2 floats + int)
inline int   &ctxField2F4(void *c)   { return fld<int>(c, 0x2F4); }      // +0x2F4
inline int   &ctxField32C(void *c)   { return fld<int>(c, 0x32C); }      // +0x32C
inline int   &ctxQteKind(void *c)    { return fld<int>(c, 0x330); }      // +0x330 QTE kind (1..0x24, 0x25 = unknown, 0x26 = none)
inline int   &ctxField334(void *c)   { return fld<int>(c, 0x334); }      // +0x334
inline float &ctxAngle374(void *c)   { return fld<float>(c, 0x374); }    // +0x374 angle in radians
inline float &ctxYaw378(void *c)     { return fld<float>(c, 0x378); }    // +0x378
inline void  *&ctxObj38C(void *c)    { return fld<void *>(c, 0x38C); }   // +0x38C object (FUN_005edc60)
inline void  *&ctxObj390(void *c)    { return fld<void *>(c, 0x390); }   // +0x390 object (FUN_005edc60)
inline void  *ctxHandle4BC(void *c)  { return (char *)c + 0x4BC; }       // +0x4BC embedded object handle
inline int   &ctxBgmMode(void *c)    { return fld<int>(c, 0x4C4); }      // +0x4C4 0: "bgm_Zangeki_Enter", 1: "bgm_Zangeki_SP_Enter"
inline int   &ctxField500(void *c)   { return fld<int>(c, 0x500); }      // +0x500
inline void  *ctxHandle534(void *c)  { return (char *)c + 0x534; }       // +0x534 embedded object handle
inline float *ctxVec540(void *c)     { return (float *)((char *)c + 0x540); }  // +0x540 float[4]
inline int   &ctxField5DC(void *c)   { return fld<int>(c, 0x5DC); }      // +0x5DC

// --- Pl0000 fields (not owned here) --------------------------------------------------------
inline float *plPos(void *p)         { return (float *)((char *)p + 0x40); }  // cParts+0x40: position row float[4]
inline int   &plField4F0(void *p)    { return fld<int>(p, 0x4F0); }      // Behavior+0x4F0
inline void  *&plControl(void *p)    { return fld<void *>(p, 0x764); }   // Behavior+0x764: CharacterControl
inline void  *&plObj7D0(void *p)     { return fld<void *>(p, 0x7D0); }   // Behavior+0x7D0: object (a StateMachineContextPl0010 is expected)
inline void  *plHandle91C(void *p)   { return (char *)p + 0x91C; }       // BehaviorAppBase+0x91C: object handle
inline void  *plHandleFF0(void *p)   { return (char *)p + 0xFF0; }       // Pl0000+0xFF0: object handle
inline int   &plField10F4(void *p)   { return fld<int>(p, 0x10F4); }     // Pl0000+0x10F4
inline int   &plField26D4(void *p)   { return fld<int>(p, 0x26D4); }     // Pl0000+0x26D4
inline float &plSlowTimer(void *p)   { return fld<float>(p, 0x341C); }   // Pl0000::slowTimer341C
inline float &plField3428(void *p)   { return fld<float>(p, 0x3428); }   // Pl0000+0x3428
inline int   &plQteRequest(void *p)  { return fld<int>(p, 0x3DF0); }     // Pl0000+0x3DF0: requested QTE kind
inline int   &plField3E24(void *p)   { return fld<int>(p, 0x3E24); }     // Pl0000+0x3E24
inline float *plVec3E30(void *p)     { return (float *)((char *)p + 0x3E30); }  // Pl0000+0x3E30 float[4]
inline int   &plField3E40(void *p)   { return fld<int>(p, 0x3E40); }     // Pl0000+0x3E40
inline float *plVec3E50(void *p)     { return (float *)((char *)p + 0x3E50); }  // Pl0000+0x3E50 float[4]
inline float *plVec3E60(void *p)     { return (float *)((char *)p + 0x3E60); }  // Pl0000+0x3E60 float[4] saved position
inline float *plVec3E70(void *p)     { return (float *)((char *)p + 0x3E70); }  // Pl0000+0x3E70 float[4] saved position
inline void  *plHandle3EA0(void *p)  { return (char *)p + 0x3EA0; }      // Pl0000+0x3EA0: object handle
inline float &plValue4068(void *p)   { return fld<float>(p, 0x4068); }   // Pl0000+0x4068
inline float &plValue406C(void *p)   { return fld<float>(p, 0x406C); }   // Pl0000+0x406C
inline float &plValue4070(void *p)   { return fld<float>(p, 0x4070); }   // Pl0000+0x4070
inline float &plValue40A0(void *p)   { return fld<float>(p, 0x40A0); }   // Pl0000+0x40A0
inline int   &plField40C8(void *p)   { return fld<int>(p, 0x40C8); }     // Pl0000+0x40C8 (8 on enter, 0 on leave)

// FUN_00bbc0e0 with the constants every enter case uses
inline void setupDefault(undefined4 *context)
{
    cdeclcall<void>(FUN_00bbc0e0, context, 0.3f, 180.0f, 1.0f, 0.1f);
}

// player timer = 1, FUN_00b85350 with the +0x4070 / +0x40A0 values, then FUN_00bbc2a0
// (the shared part of enter cases 0x12 and 0x1E..0x20)
inline void setupFromPlayerValues(void *player, undefined4 *context)
{
    plSlowTimer(player) = 1.0f;
    thiscall<void>(FUN_00b85350, player, 180.0f, plValue4070(player), plValue40A0(player), 1, 0, 0.1f);
    plField3428(player) = 0.0f;
    FUN_00bbc2a0(context);
}

// Resolves `handle`; when the object's FUN_00860b50 result is non-zero, calls FUN_005ca330 on it
// with `value`.  Returns whether the call happened.
inline bool applyToHandleTarget(void *handle, float value)
{
    int object = FUN_00a81330((uint *)handle);
    if (object == 0) {
        return false;
    }
    object = FUN_00a7c8a0(object);
    if (object == 0) {
        return false;
    }
    int effect = (int)FUN_00860b50((int *)object);
    if (effect == 0) {
        return false;
    }
    thiscall<void>(FUN_005ca330, (void *)effect, value);
    return true;
}

// Switches the zangeki BGM when the context's mode differs (the context is re-cast first).
inline void switchBgm(undefined4 *context, int mode, const char *cueName)
{
    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    if (ctxBgmMode(ctx) != mode) {
        FUN_00b92d70(context);
        ctxBgmMode(ctx) = mode;
        FUN_00e5e1b0((undefined4)cueName);
    }
}

// Re-resolves target() from the global handle and hands its +0x4F0 key to the context's +0x534 handle.
inline void refreshTarget(ZangekiEventQteStatePl0010 *self, StateMachineContextPl0010 *ctx)
{
    int object = FUN_00a81330((uint *)DAT_01d61ab8);
    if (object != 0) {
        self->target() = (cObj *)FUN_00a7c8a0(object);
    }
    if (self->target() != 0) {
        int key = FUN_00a7c7f0(plField4F0(self->target()));
        thiscall<void>(FUN_00a7c960, ctxHandle534(ctx), key);
    }
}

}  // namespace ZangekiEventQteStatePl0010_p1

// 00B82F10  ZangekiEventQteStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void ZangekiEventQteStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);
}

// 00B82F20  ZangekiEventQteStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18.
undefined4 ZangekiEventQteStatePl0010::vf18(undefined4 arg)
{
    return StateMachineNode::vf18(arg);
}

// 00B82F30  ZangekiEventQteStatePl0010::vf24  size=19  [class]
bool ZangekiEventQteStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B82F50  ZangekiEventQteStatePl0010::ZangekiEventQteStatePl0010  size=55  [class]
ZangekiEventQteStatePl0010::ZangekiEventQteStatePl0010(undefined4 owner) : StateMachineNode(owner)
{
    // vftable = ZangekiEventQteStatePl0010::vftable (0x016A1D68)
    FUN_00a7c930((undefined4 *)handle38());
    FUN_00a831e0((int)objD0());
    FUN_00a7c930((undefined4 *)handle1D8());
}

// 00B82F90  ZangekiEventQteStatePl0010::vf00  size=6  [class]
undefined *ZangekiEventQteStatePl0010::vf00()
{
    return DAT_01be9ea8;
}

// 00B91610  ZangekiEventQteStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiEventQteStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BCDBC0  ZangekiEventQteStatePl0010::vf08  size=3366  [class]
// Enter: copies the player's requested QTE kind into the context, sets the context's permission
// flags per kind, picks the follow-up state and resets the rig.
bool ZangekiEventQteStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiEventQteStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    undefined4 *context = (undefined4 *)contextArg;
    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(ctxOwner(ctx));
    unsigned char message[348];  // built by FUN_004039a0, sent by FUN_00a8c8b0

    ctxFlagD8(ctx) = 0;
    ctxFlagDC(ctx) = 0;
    ctxFlagE0(ctx) = 0;
    ctxFlagE4(ctx) = 0;
    ctxFlagE8(ctx) = 0;
    ctxFlagEC(ctx) = 0;
    ctxFlagF0(ctx) = 0;
    ctxField334(ctx) = 0;
    plField40C8(player) = 8;
    ctxQteKind(ctx) = 0x26;

    if (FUN_00a8cab0((int)player) == 0x46) {
        qteMode() = -1;
        switch (plQteRequest(player)) {
        case 1:
            ctxQteKind(ctx) = 1;
            thiscall<void>(FUN_00546e40, (void *)FUN_00a92f90((int)player), 0, 0.0f);
            ctxFlagDC(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            break;
        default:
            ctxQteKind(ctx) = 0x25;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagDC(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            break;
        case 3:
            ctxQteKind(ctx) = 3;
            qteMode() = 3;
            FUN_00bbc2a0(context);
            thiscall<void>(FUN_00546e40, (void *)FUN_00a92f90((int)player), 0, 0.0f);
            ctxFlagE0(ctx) = 1;
            ctxFlagF0(ctx) = 1;
            break;
        case 4: {
            ctxQteKind(ctx) = 4;
            field1D4() = -1;
            qteMode() = 2;
            int object = FUN_00a81330((uint *)plHandle91C(player));
            if (object != 0 && (object = FUN_00a7c8a0(object)) != 0) {
                field1D4() = fld<int>((void *)object, 0x83C);
            }
            ctxFlagE0(ctx) = 1;
            ctxFlagF0(ctx) = 1;
            setupDefault(context);
            FUN_00bbc2a0(context);
            break;
        }
        case 5:
            ctxQteKind(ctx) = 5;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagE0(ctx) = 1;
            ctxFlagF0(ctx) = 1;
            break;
        case 6:
            ctxQteKind(ctx) = 6;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagE4(ctx) = 1;
            ctxFlagE8(ctx) = 1;
            break;
        case 7:
            ctxQteKind(ctx) = 7;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagE0(ctx) = 1;
            applyToHandleTarget(ctxHandle4BC(ctx), 2.0f);
            break;
        case 8:
            ctxQteKind(ctx) = 8;
            setupDefault(context);
            FUN_00bbc2a0(context);
            thiscall<void>(FUN_00546e40, (void *)FUN_00a92f90((int)player), 0, 1.0f);
            savedY1B0() = plPos(player)[1];
            thiscall<void>(FUN_00aa4080, player, 0x2AB, 6, 0.0f, 1.0f, 0x10, -1.0f, 1.0f);
            applyToHandleTarget(ctxHandle4BC(ctx), 0.65f);
            thiscall<void>(FUN_004039a0, message, 0xE, player, 0);
            thiscall<void>(FUN_00a8c8b0, player, 0x10010, message);
            ctxFlagDC(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            break;
        case 9:
            ctxQteKind(ctx) = 9;
            thiscall<void>(FUN_00b85350, player, 180.0f, plValue4068(player), plValue406C(player), 1, 0, 0.1f);
            FUN_00bbc2a0(context);
            ctxFlagDC(ctx) = 1;
            break;
        case 10:
            ctxQteKind(ctx) = 10;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            break;
        case 0xB:
            ctxQteKind(ctx) = 0xB;
            ctxFlagDC(ctx) = 1;
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            ctxFlagD8(ctx) = 1;
            break;
        case 0xC:
            ctxQteKind(ctx) = 0xC;
            ctxFlagF0(ctx) = 0;
            ctxFlagDC(ctx) = 1;
            ctxFlagE4(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            ctxFlagD8(ctx) = 1;
            ctxFlagE8(ctx) = 1;
            break;
        case 0xD:
            ctxQteKind(ctx) = 0xD;
            ctxFlagDC(ctx) = 1;
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            ctxFlagD8(ctx) = 1;
            break;
        case 0xE:
            ctxQteKind(ctx) = 0xE;
            ctxFlagDC(ctx) = 1;
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            ctxFlagD8(ctx) = 1;
            break;
        case 0xF:
            ctxQteKind(ctx) = 0xF;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            break;
        case 0x10:
            ctxQteKind(ctx) = 0x10;
            ctxFlagDC(ctx) = 1;
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            ctxFlagD8(ctx) = 1;
            break;
        case 0x11:
            ctxQteKind(ctx) = 0x11;
            ctxFlagF0(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagE4(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            ctxFlagD8(ctx) = 1;
            ctxFlagE8(ctx) = 1;
            break;
        case 0x12:
            ctxQteKind(ctx) = 0x12;
            setupFromPlayerValues(player, context);
            ctxFlagE4(ctx) = 1;
            ctxFlagE8(ctx) = 1;
            ctxFlagF0(ctx) = 1;
            break;
        case 0x13:
            ctxQteKind(ctx) = 0x13;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagE4(ctx) = 1;
            ctxFlagE8(ctx) = 1;
            break;
        case 0x14:
            ctxQteKind(ctx) = 0x14;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            break;
        case 0x15:
            ctxQteKind(ctx) = 0x15;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            break;
        case 0x16:
            ctxQteKind(ctx) = 0x16;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagF0(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            break;
        case 0x17:
            ctxQteKind(ctx) = 0x17;
            ctxFlagDC(ctx) = 1;
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            ctxFlagD8(ctx) = 1;
            break;
        case 0x18:
            ctxQteKind(ctx) = 0x18;
            ctxFlagDC(ctx) = 1;
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            ctxFlagD8(ctx) = 1;
            break;
        case 0x19:
            ctxQteKind(ctx) = 0x19;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            break;
        case 0x1A:
            ctxQteKind(ctx) = 0x1A;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            break;
        case 0x1B:
            ctxQteKind(ctx) = 0x1B;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            break;
        case 0x1C:
            ctxQteKind(ctx) = 0x1C;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagF0(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            break;
        case 0x1D:
            ctxQteKind(ctx) = 0x1D;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagF0(ctx) = 1;
            ctxFlagE4(ctx) = 1;
            ctxFlagE8(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            break;
        case 0x1E:
            ctxQteKind(ctx) = 0x1E;
            setupFromPlayerValues(player, context);
            ctxFlagF0(ctx) = 1;
            ctxFlagE4(ctx) = 1;
            ctxFlagE8(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            break;
        case 0x1F:
            ctxQteKind(ctx) = 0x1F;
            setupFromPlayerValues(player, context);
            ctxFlagF0(ctx) = 1;
            ctxFlagE4(ctx) = 1;
            ctxFlagE8(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            break;
        case 0x20:
            ctxQteKind(ctx) = 0x20;
            setupFromPlayerValues(player, context);
            ctxFlagE4(ctx) = 1;
            ctxFlagE8(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            break;
        case 0x21:
            ctxQteKind(ctx) = 0x21;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagF0(ctx) = 1;
            ctxFlagE4(ctx) = 1;
            ctxFlagE8(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            break;
        case 0x22:
            ctxQteKind(ctx) = 0x22;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagDC(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            break;
        case 0x23:
            ctxQteKind(ctx) = 0x23;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagDC(ctx) = 1;
            ctxFlagE0(ctx) = 1;
            break;
        case 0x24:
            ctxQteKind(ctx) = 0x24;
            setupDefault(context);
            FUN_00bbc2a0(context);
            ctxFlagF0(ctx) = 0;
            ctxFlagE0(ctx) = 1;
            ctxFlagDC(ctx) = 1;
            ctxFlagEC(ctx) = 1;
            break;
        }
    }

    // Face the target: +-30 degrees clamps through FUN_00ddba30, otherwise -DAT_01bea3b0.
    float angleDeg = ctxAngle374(ctx) * 57.29578f;
    float yaw;
    if (angleDeg <= 30.0f) {
        if (-30.0f <= angleDeg) {
            yaw = -DAT_01bea3b0;
        }
        else {
            yaw = cdeclcall<float>(FUN_00ddba30, -0.5235988f);
        }
    }
    else {
        yaw = cdeclcall<float>(FUN_00ddba30, 0.5235988f);
    }
    thiscall<void>(FUN_00b8bb40, player, yaw);

    float otherYaw = DAT_01bea3b4 + 3.1415927f - 0.17453292f;
    void *other = plObj7D0(player);
    if (other != 0 && asContextPl0010(other) != 0) {
        ctxYaw378(other) = otherYaw;
    }

    // Follow-up state, created by the state factory at context[1] (vftable slot 0).
    if (ctxFlagD8(ctx) == 0) {
        int kind = ctxQteKind(ctx);
        int stateId;
        if (kind == 5 || kind == 4) {
            stateId = 0x3D;
        }
        else if (kind == 0x1D) {
            stateId = 0x3C;
        }
        else if (ctxFlagF0(ctx) != 0 && kind != 10 && kind != 3) {
            stateId = 0x36;
        }
        else if (FUN_00b93090(context) == 0) {
            stateId = 0x43;
        }
        else {
            stateId = 0x3D;
        }
        void *nextState = vcall<void *>((void *)context[1], 0x0, stateId);
        thiscall<void>(FUN_00d82bf0, this, nextState, context);
    }

    target() = 0;
    FUN_00a7c950((undefined4 *)handle38());
    field3C() = -1;
    rot50()[0] = 0.0f;
    rot50()[1] = 0.0f;
    rot50()[2] = 0.0f;
    rot50()[3] = 1.0f;
    field60() = 0.0f;
    field64() = 0.0f;
    vec70()[0] = 0.0f;
    vec70()[1] = 0.0f;
    vec70()[2] = 0.0f;
    vec70()[3] = 1.0f;
    field40() = 0;
    fieldCC() = 0.0f;
    thiscall<void>(FUN_00a82610, objD0(), plField4F0(player), 0, -1);
    angle1A4() = 1.5707964f;
    field1A0() = 1.0f;
    float zero[3];
    zero[0] = 0.0f;
    zero[1] = 0.0f;
    zero[2] = 0.0f;
    thiscall<void>(FUN_00a83270, objD0(), zero, 0.0f, 0.5235988f);
    vec1C0()[0] = 0.0f;
    vec1C0()[1] = 0.0f;
    vec1C0()[2] = 0.0f;
    vec1C0()[3] = 1.0f;
    vec1F0()[3] = 1.0f;
    vec1F0()[0] = 0.0f;
    vec1F0()[1] = 0.0f;
    vec1F0()[2] = 0.0f;
    restored200() = 1;
    DAT_01bea060 = DAT_01bea060 | 0x400;
    field1D0() = 0.0f;
    field1E0() = 1;
    plVec3E70(player)[0] = plPos(player)[0];
    plVec3E70(player)[1] = plPos(player)[1];
    plVec3E70(player)[2] = plPos(player)[2];
    plVec3E70(player)[3] = plPos(player)[3];
    thiscall<void>(FUN_00a7c960, handle1D8(), ctxHandle4BC(ctx));
    return true;
}

// 00BCE980  ZangekiEventQteStatePl0010::vf20  size=987  [class]
// Leave: clears the context's flags, releases the target, restores the camera / controller and,
// unless already done, puts the player back at vec1F0 (player vf7C) and resets the character control.
undefined4 ZangekiEventQteStatePl0010::vf20(undefined4 *context)
{
    using namespace ZangekiEventQteStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(ctxOwner(ctx));
    ctxFlagD8(ctx) = 0;
    ctxFlagDC(ctx) = 0;
    ctxFlagE0(ctx) = 0;
    ctxFlagE4(ctx) = 0;
    ctxFlagEC(ctx) = 0;
    ctxFlagF0(ctx) = 0;
    ctxFlagE8(ctx) = 1;
    ctxFieldF4(ctx) = 0;
    ctxFieldF8(ctx) = 0;
    ctxFieldFC(ctx) = 0;
    ctxField100(ctx) = 0;
    plField40C8(player) = 0;
    ctxQteKind(ctx) = 0x26;

    // (the context is cast again; a null context gives the handle address 0x534)
    if (FUN_00a81330((uint *)ctxHandle534(asContextPl0010(context))) != 0 && target() != 0) {
        FUN_00a7c950((undefined4 *)ctxHandle534(ctx));
        FUN_009fdde0(target());  // E3_EnemyBoardDebrisSokushi::vf4C
    }
    DAT_01dc08d4 = 0;
    thiscall<void>(FUN_00a8ca50, player, 0xE, 1.0f, 0.0f);
    FUN_00bbc7f0(context, (int)this);
    FUN_00a83990((int)objD0());
    if (thiscall<int>(FUN_00a9f6b0, player, 6) != 0) {
        thiscall<void>(FUN_00a94bc0, player, 6, 0.0f);
    }
    thiscall<void>(FUN_00a94bc0, player, 2, 0.016666668f);
    ctxField500(asContextPl0010(context)) = 0;
    DAT_01bea060 = DAT_01bea060 & 0xFFFFFBFF;

    if (vec1C0()[0] != 0.0f || vec1C0()[1] != 0.0f || vec1C0()[2] != 0.0f) {
        vcall<void>(player, 0x88, vec1C0());  // Behavior::vf88
        FUN_00da0d70((int)DAT_01bea1d0);
    }
    if (FUN_00a81330((uint *)handle1D8()) != 0 && applyToHandleTarget(ctxHandle4BC(ctx), 1.0f)) {
        thiscall<void>(FUN_00b83ea0, ctx, 3.0f);
    }

    if (ctxField5DC(ctx) == 0 && restored200() == 0) {
        float *restorePos = vec1F0();
        void *restoreRot = vcall<void *>(player, 0x84);            // Behavior::vf84
        vcall<void>(player, 0x7C, restorePos, restoreRot);         // Pl0000::vf7C
        FUN_008e6d00((int)plControl(player));
        thiscall<void>(FUN_008e5c50, plControl(player), 6);
        thiscall<void>(kCharacterControlSetHeight, plControl(player), 1.9f);
        float point[4];
        point[0] = restorePos[0];
        point[1] = restorePos[1] + 0.1f;
        point[2] = restorePos[2];
        point[3] = restorePos[3] + point[3];  // ? reads the uninitialised w, as the original does
        thiscall<void>(FUN_008e4580, plControl(player), point, 1);
        thiscall<void>(FUN_008e5ac0, plControl(player), 0x20);
        ctxField32C(ctx) = 1;
        vcall<void>(player, 0x314);  // Pl0000::vf314
        void *control = plControl(player);
        if (fld<int>(control, 0x104) != 0) {
            fld<int>(control, 0x104) = 0;
        }
        applyToHandleTarget(ctxHandle4BC(ctx), 1.0f);
        thiscall<void>(FUN_00a8ca50, player, 0xE, 1.0f, 0.0f);
        vec1C0()[0] = 0.0f;
        vec1C0()[1] = 0.0f;
        vec1C0()[2] = 0.0f;
        vec1C0()[3] = 1.0f;
        restorePos[3] = 1.0f;
        restorePos[0] = 0.0f;
        restorePos[1] = 0.0f;
        restorePos[2] = 0.0f;
        restored200() = 1;
    }
    DAT_01bea060 = DAT_01bea060 & 0xFFFFFFF7;
    return 1;
}

// 00BCED60  FUN_00bced60  size=468  [callgraph]
// SafeCheck handler of QTE kind 3 (__thiscall, ECX = self): aims the rig at the player's bone 0 /
// the context position, sets the camera and switches to the SP BGM.
void FUN_00bced60(ZangekiEventQteStatePl0010 *self, undefined4 *context)
{
    using namespace ZangekiEventQteStatePl0010_p1;

    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(ctxOwner(ctx));
    int object = FUN_00a81330((uint *)DAT_01d61ab8);
    if (object != 0) {
        self->target() = (cObj *)FUN_00a7c8a0(object);
    }
    if (self->target() != 0) {
        float *vec70 = self->vec70();
        float *vec80 = self->vec80();
        int bone = thiscall<int>(FUN_00a12210, player, 0);
        if (bone != 0) {
            vec70[0] = fld<float>((void *)bone, 0x40);
            vec70[1] = fld<float>((void *)bone, 0x44);
            vec70[2] = fld<float>((void *)bone, 0x48);
            vec70[3] = fld<float>((void *)bone, 0x4C);
        }
        vec80[0] = vec70[0];
        vec80[1] = vec70[1];
        vec80[2] = vec70[2];
        vec80[3] = vec70[3];
        vec70[0] = ctxVec540(ctx)[0];
        vec70[1] = ctxVec540(ctx)[1];
        vec70[2] = ctxVec540(ctx)[2];
        vec70[3] = ctxVec540(ctx)[3];
        vec80[0] = vec70[0];
        vec80[1] = vec70[1];
        vec80[2] = vec70[2];
        vec80[3] = vec70[3];
        int key = FUN_00a7c7f0(plField4F0(self->target()));
        thiscall<void>(FUN_00a7c960, ctxHandle534(ctx), key);
    }
    DAT_01bea9a0 = 1;
    thiscall<void>(FUN_00da8810, DAT_01bea1d0, 8.0f);
    thiscall<void>(FUN_00db3e80, DAT_01bea750, 8.0f, 0, DAT_01bea1d0);
    FUN_008e6d00((int)plControl(player));
    thiscall<void>(FUN_008e5c50, plControl(player), 6);
    thiscall<void>(FUN_008e0b70, plControl(player), 0);
    switchBgm(context, 1, "bgm_Zangeki_SP_Enter");
}

// 00BCEF40  FUN_00bcef40  size=185  [callgraph]
// SafeCheck handler of QTE kind 4 (__thiscall, ECX = self).
void FUN_00bcef40(ZangekiEventQteStatePl0010 *self, undefined4 *context)
{
    using namespace ZangekiEventQteStatePl0010_p1;

    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    refreshTarget(self, ctx);
    DAT_01bea9a0 = 1;
    switchBgm(context, 1, "bgm_Zangeki_SP_Enter");
}

// 00BCF000  FUN_00bcf000  size=686  [callgraph]
// SafeCheck handler of QTE kind 8 (__thiscall, ECX = self): in area "60c0" the target is placed
// at the object behind player +0x3EA0; then the player's control is switched and the normal
// zangeki BGM starts.
void FUN_00bcf000(ZangekiEventQteStatePl0010 *self, undefined4 *context)
{
    using namespace ZangekiEventQteStatePl0010_p1;

    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(ctxOwner(ctx));
    refreshTarget(self, ctx);

    const char *areaName = (const char *)thiscall<int>(FUN_00a95df0, player, 0);
    if (strcmp(areaName, DAT_016a27e0) == 0) {
        int anchor = FUN_00a81330((uint *)plHandle3EA0(player));
        if (anchor != 0) {
            anchor = FUN_00a7c8a0(anchor);
            if (anchor != 0) {
                float x = fld<float>((void *)anchor, 0x40);
                float z = fld<float>((void *)anchor, 0x48);
                float *current = vcall<float *>(self->target(), 0x68);
                float position[4];  // w is left unset, as in the original
                position[0] = x;
                position[1] = current[1];
                position[2] = z;
                vcall<void>(self->target(), 0x6C, position);
                float offset[3];
                offset[0] = 0.0f;
                offset[1] = -0.5f;
                offset[2] = 0.0f;
                vcall<void>(self->target(), 0x70, offset);
            }
        }
    }
    int object = FUN_00a81330((uint *)ctxHandle4BC(ctx));
    if (object != 0) {
        void *slashTarget = (void *)FUN_00a7c8a0(object);
        if (slashTarget != 0 &&
            thiscall<int>(FUN_00dd6d80, vcall<void *>(slashTarget, 0x4), DAT_01b35260) != 0) {
            thiscall<void>(FUN_005ca330, slashTarget, 2.0f);
        }
    }
    vcall<void>(player, 0x318);  // Pl0000::vf318
    void *control = plControl(player);
    if (fld<int>(control, 0x104) != 1) {
        fld<int>(control, 0x104) = 1;
        fld<float>(fld<void *>(control, 0xD0), 4) = 0.0f;
    }
    thiscall<void>(FUN_008e59c0, plControl(player), 0x20);
    thiscall<void>(FUN_008e5c50, plControl(player), 0x1F);
    switchBgm(context, 0, "bgm_Zangeki_Enter");
    plVec3E60(player)[0] = plPos(player)[0];
    plVec3E60(player)[1] = plPos(player)[1];
    plVec3E60(player)[2] = plPos(player)[2];
    plVec3E60(player)[3] = plPos(player)[3];
    plField26D4(player) = 0;
    float *snapshot = vcall<float *>(player, 0x84);  // Behavior::vf84
    self->vec1C0()[0] = snapshot[0];
    self->vec1C0()[1] = snapshot[1];
    self->vec1C0()[2] = snapshot[2];
    self->vec1C0()[3] = snapshot[3];
    self->restored200() = 0;
    DAT_01bea060 = DAT_01bea060 | 8;
}

// 00BCF2B0  FUN_00bcf2b0  size=304  [callgraph]
// SafeCheck handler of QTE kind 0xF (__thiscall, ECX = self).
void FUN_00bcf2b0(ZangekiEventQteStatePl0010 *self, undefined4 *context)
{
    using namespace ZangekiEventQteStatePl0010_p1;

    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(ctxOwner(ctx));
    refreshTarget(self, ctx);
    FUN_008e3c10((int)plControl(player));
    thiscall<void>(FUN_008e5c50, plControl(player), 0x1F);
    thiscall<void>(FUN_008e0b70, plControl(player), 0);
    float *snapshot = vcall<float *>(player, 0x84);  // Behavior::vf84
    self->savedY1B4() = snapshot[1];
    switchBgm(context, 1, "bgm_Zangeki_SP_Enter");
    plField10F4(player) = 0;
}

// 00BE2090  ZangekiEventQteStatePl0010::SafeCheck  size=744  [class]
// Runs the per-kind SafeCheck handler once (StateMachineNode+0x20 == 0), then for kinds
// 0x1B..0x1D / 0x21 notifies the player with message 0x10010.
void ZangekiEventQteStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace ZangekiEventQteStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) /* StateMachineNode+0x20: ? */ == 0) {
        StateMachineContextPl0010 *ctx = asContextPl0010(context);
        Pl0000 *player = asPl0000(ctxOwner(ctx));
        unsigned char message[348];  // built by FUN_004039a0, sent by FUN_00a8c8b0

        thiscall<void>(FUN_00b8bb40, player, 0.0f);
        switch (ctxQteKind(ctx)) {
        case 1:
            thiscall<void>(FUN_00bb35c0, this, context);
            break;
        default:
            thiscall<void>(FUN_00bb55e0, this, context);
            break;
        case 3:
            FUN_00bced60(this, context);
            break;
        case 4:
            FUN_00bcef40(this, context);
            break;
        case 5:
            thiscall<void>(FUN_00bb3640, this, context);
            break;
        case 6:
            thiscall<void>(FUN_00bb37c0, this, context);
            break;
        case 7:
            thiscall<void>(FUN_00bb38d0, this, context);
            break;
        case 8:
            FUN_00bcf000(this, context);
            break;
        case 9:
            thiscall<void>(FUN_00bb39d0, this, context);
            break;
        case 10:
            thiscall<void>(FUN_00bb3a90, this, context);
            break;
        case 0xB:
            thiscall<void>(kQteEm0010DiveUpdateOnce, this, context);
            break;
        case 0xC:
            thiscall<void>(kQteEm0010DiveUpdateOnce2, this, context);
            break;
        case 0xD:
            thiscall<void>(kQteEm0070DiveUpdateOnce, this, context);
            break;
        case 0xE:
            thiscall<void>(kQteStealthUpdateOnce, this, context);
            break;
        case 0xF:
            FUN_00bcf2b0(this, context);
            break;
        case 0x10:
            thiscall<void>(kQteEm0070DiveUpdateOnce2, this, context);
            break;
        case 0x11:
            thiscall<void>(kQteStealthUpdateOnce2, this, context);
            break;
        case 0x12:
            thiscall<void>(FUN_00bb43b0, this, context);
            break;
        case 0x13:
            thiscall<void>(FUN_00bb4470, this, context);
            break;
        case 0x14:
            thiscall<void>(FUN_00bb4560, this, context);
            break;
        case 0x15:
            thiscall<void>(FUN_00bb4630, this, context);
            break;
        case 0x16:
            thiscall<void>(FUN_00bb5300, this, context);
            break;
        case 0x17:
            thiscall<void>(kQteEm0100DiveUpdateOnce, this, context);
            break;
        case 0x18:
            thiscall<void>(kQteEm0100BackUpdateOnce, this, context);
            break;
        case 0x19:
            thiscall<void>(FUN_00bb49c0, this, context);
            break;
        case 0x1A:
            thiscall<void>(FUN_00bb4ba0, this, context);
            break;
        case 0x1B:
        case 0x1C:
            thiscall<void>(FUN_00bb4c70, this, context);
            break;
        case 0x1D:
            thiscall<void>(FUN_00bb4d80, this, context);
            break;
        case 0x1E:
            thiscall<void>(FUN_00bb4f80, this, context);
            break;
        case 0x1F:
            thiscall<void>(FUN_00bb50e0, this, context);
            break;
        case 0x20:
            thiscall<void>(FUN_00bb5240, this, context);
            break;
        case 0x21:
            thiscall<void>(FUN_00bb53d0, this, context);
            break;
        case 0x22:
            thiscall<void>(FUN_00bb5510, this, context);
            break;
        case 0x23:
            thiscall<void>(FUN_00bb3700, this, context);
            break;
        case 0x24:
            thiscall<void>(FUN_00bb4a90, this, context);
            break;
        }
        int kind = ctxQteKind(ctx);
        if (kind == 0x1D || kind == 0x1C || kind == 0x1B || kind == 0x21) {
            void *obj190 = ctxObj190(ctx);
            vcall<void>(obj190, 0x8, 0.0f, 0.0f, 0);
            thiscall<void>(FUN_004039a0, message, 1, player, 0);
            thiscall<void>(FUN_00dffb30, message, obj190);
            thiscall<void>(FUN_00e03080, message, plField4F0(player), 0);
            int object = FUN_00a81330((uint *)plHandleFF0(player));
            if (object != 0) {
                thiscall<void>(FUN_00e03080, message, object, 1);
            }
            thiscall<void>(FUN_00a8c8b0, player, 0x10010, message);
        }
    }
    StateMachineNode::SafeCheck(context);
}

// 00C05F10  ZangekiEventQteStatePl0010::qteSafeCheck  size=1041  [class]
// Per-frame: resets the rig vectors, runs the per-kind handler, forwards context +0x10C and
// hands the target's bone 1 position / bone 0 -> bone 1 direction to the player.
void ZangekiEventQteStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace ZangekiEventQteStatePl0010_p1;

    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(ctxOwner(ctx));
    vecA0()[0] = 0.0f;
    vecA0()[1] = 0.0f;
    vecA0()[2] = 0.0f;
    vecA0()[3] = 1.0f;
    vecB0()[3] = 1.0f;
    vecB0()[0] = 0.0f;
    vecB0()[1] = 0.0f;
    vecB0()[2] = 0.0f;
    plField3E24(player) = 0;
    plVec3E30(player)[0] = 0.0f;
    plVec3E30(player)[1] = 0.0f;
    plVec3E30(player)[2] = 0.0f;
    plVec3E30(player)[3] = 1.0f;
    plField3E40(player) = 0;
    plVec3E50(player)[0] = 0.0f;
    plVec3E50(player)[1] = 0.0f;
    plVec3E50(player)[2] = 0.0f;
    plVec3E50(player)[3] = 1.0f;

    // (the context is cast again; a null context gives the handle address 0x534)
    if (FUN_00a81330((uint *)ctxHandle534(asContextPl0010(context))) != 0 && target() != 0 &&
        fld<int>(target(), 0x878) /* target +0x878: ? */ != 0) {
        ctxField500(asContextPl0010(context)) = 1;
    }

    switch (ctxQteKind(ctx)) {
    case 1:
        thiscall<void>(FUN_00bb56a0, this, context);
        break;
    default:
        thiscall<void>(FUN_00bff6b0, this, context);
        break;
    case 3:
        thiscall<void>(FUN_00bf8bd0, this, context);
        break;
    case 4:
        thiscall<void>(FUN_00bf8e60, this, context);
        break;
    case 5:
        thiscall<void>(FUN_00bf90c0, this, context);
        break;
    case 6:
        thiscall<void>(FUN_00bf9460, this, context);
        break;
    case 7:
        thiscall<void>(kPl0000Em0080Qte2SafeCheck, this, context);
        break;
    case 8:
        thiscall<void>(FUN_00bf9c40, this, context);
        break;
    case 9:
        thiscall<void>(FUN_00bfa4f0, this, context);
        break;
    case 10:
        thiscall<void>(FUN_00bfa7c0, this, context);
        break;
    case 0xB:
        thiscall<void>(FUN_00bfaac0, this, context);
        break;
    case 0xC:
        thiscall<void>(FUN_00bfae40, this, context);
        break;
    case 0xD:
        thiscall<void>(FUN_00bfb220, this, context);
        break;
    case 0xE:
        thiscall<void>(FUN_00bfb5a0, this, context);
        break;
    case 0xF:
        thiscall<void>(FUN_00bfb920, this, context);
        break;
    case 0x10:
        thiscall<void>(FUN_00bfbd60, this, context);
        break;
    case 0x11:
        thiscall<void>(FUN_00bfc0c0, this, context);
        break;
    case 0x12:
        thiscall<void>(FUN_00bfc480, this, context);
        break;
    case 0x13:
        thiscall<void>(FUN_00bfc7b0, this, context);
        break;
    case 0x14:
        thiscall<void>(FUN_00bfca80, this, context);
        break;
    case 0x15:
        thiscall<void>(FUN_00bfce20, this, context);
        break;
    case 0x16:
        thiscall<void>(FUN_00bff080, this, context);
        break;
    case 0x17:
        thiscall<void>(FUN_00bfd0e0, this, context);
        break;
    case 0x18:
        thiscall<void>(FUN_00bfd4b0, this, context);
        break;
    case 0x19:
        thiscall<void>(FUN_00bfd870, this, context);
        break;
    case 0x1A:
        thiscall<void>(FUN_00bfdf60, this, context);
        break;
    case 0x1B:
    case 0x1C:
        thiscall<void>(FUN_00bfe2d0, this, context);
        break;
    case 0x1D:
        thiscall<void>(FUN_00bf0c10, this, context);
        break;
    case 0x1E:
        thiscall<void>(FUN_00bfe5e0, this, context);
        break;
    case 0x1F:
        thiscall<void>(FUN_00bfe970, this, context);
        break;
    case 0x20:
        thiscall<void>(FUN_00bfed00, this, context);
        break;
    case 0x21:
        thiscall<void>(FUN_00bff3b0, this, context);
        break;
    case 0x24:
        thiscall<void>(FUN_00bfdbd0, this, context);
        break;
    }

    if (0.0f < ctxValue10C(ctx)) {
        float value = ctxValue10C(ctx);
        if (ctxObj38C(ctx) != 0) {
            thiscall<void>(FUN_005edc60, ctxObj38C(ctx), value);
        }
        if (ctxObj390(ctx) != 0) {
            thiscall<void>(FUN_005edc60, ctxObj390(ctx), value);
        }
    }

    if (ctxField2F4(ctx) == 0 && FUN_00a81330((uint *)ctxHandle534(ctx)) != 0) {
        int bone0 = thiscall<int>(FUN_00a12210, target(), 0);
        if (bone0 != 0) {
            int bone1 = thiscall<int>(FUN_00a12210, target(), 1);
            if (bone1 != 0) {
                float from[4];
                float to[4];
                float direction[4];
                from[0] = fld<float>((void *)bone0, 0x40);
                from[1] = fld<float>((void *)bone0, 0x44);
                from[2] = fld<float>((void *)bone0, 0x48);
                from[3] = fld<float>((void *)bone0, 0x4C);
                to[0] = fld<float>((void *)bone1, 0x40);
                to[1] = fld<float>((void *)bone1, 0x44);
                to[2] = fld<float>((void *)bone1, 0x48);
                to[3] = fld<float>((void *)bone1, 0x4C);
                thiscall<void>(FUN_00b7da60, player, to);
                direction[0] = to[0] - from[0];
                direction[1] = to[1] - from[1];
                direction[2] = to[2] - from[2];
                direction[3] = to[3] - from[3];
                thiscall<void>(FUN_00b7dab0, player, direction);
            }
        }
    }
    StateMachineNode::qteSafeCheck(context);
}
