// src/managers/usermanager/UserManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "UserManager.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern int           DAT_01b5d1d8;    // non-zero: sign-in not allowed now (error path)
extern const char    DAT_01658838[];  // debug message printed on that error path
extern int           DAT_01b5d1d4;    // non-zero: a pad is currently signed in
extern unsigned int  DAT_01b7b914[];  // pad states, 4 pads * 0x30 bytes (button word first)
extern unsigned char DAT_01b7b7c0[];  // input object (ECX of FUN_00dd9520)
extern unsigned char DAT_01dc1404[];  // ECX of FUN_00cac950
extern unsigned char DAT_01886ea0[];  // ECX of FUN_0094a8e0
extern unsigned char DAT_01b5d1e0[];  // save data object (0x8EE0 bytes; ECX of the save-data calls)
extern unsigned char DAT_01b660c0[];  // working save data (0x8EE0 bytes) = DAT_01b5d1e0 + 0x8EE0
extern unsigned char DAT_01b6a940[];  // working save data +0x4880
extern unsigned char DAT_01b6caa0[];  // working save data +0x69E0
extern int           DAT_01b6c98c[];  // working save data +0x68CC: int[0x30], see below
extern int           DAT_01b6ca64;
extern int           DAT_01b6ca68;
extern int           DAT_01b6ca80;
extern int           DAT_01b6ca84;
extern int           DAT_01b6ca88;
extern int           DAT_01b6ca8c;
extern int           DAT_01b6ca90;
extern unsigned char DAT_01b6d550[];  // working save data +0x7490 (0x19C0 bytes)
extern unsigned int  DAT_01bea098;    // bit 0x20000000 checked below
extern char          DAT_01b6eefd;
extern int           DAT_01b6edb0;
extern unsigned char DAT_01b6ef10[];  // passed to FUN_009c66e0
extern unsigned char DAT_01b6efe0[];  // second save data copy (0x8EE0 bytes)
extern char          DAT_01b6601d;    // DAT_01b5d1e0 + 0x8E3D
extern char          DAT_01b77e1d;    // DAT_01b6efe0 + 0x8E3D

namespace UserManager_p1 {

// __thiscall call of a function (symbol or address) with ECX = self
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// __fastcall call of a function with ECX = self
template <class R, class F> inline R fastcall(F fn, const void *self)
{
    typedef R (__fastcall *Fn)(const void *);
    return ((Fn)fn)(self);
}

// __cdecl call of a function (symbol or address)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

}  // namespace UserManager_p1

// 009C8720  UserManager::SetSigninPad  size=617  [class]
// Picks the pad that signs in (the first pad whose button word has the confirm bit), resets the
// working save data for it and returns 1; 0 when nothing was pressed or sign-in is not allowed.
undefined4 UserManager::SetSigninPad()
{
    using namespace UserManager_p1;

    if (DAT_01b5d1d8 != 0) {
        cdeclcall<void>(FUN_00dd5650, DAT_01658838);  // debug print
        return 0;
    }
    int layout = (int)FUN_00df7fc0();  // ? button layout; 1 selects mask 0x20, anything else 0x10
    if (DAT_01b5d1d4 != 0) {
        FUN_00dfd560();
    }
    DAT_01b5d1d4 = 0;

    int padIndex = 0;
    unsigned int *padState = DAT_01b7b914;
    do {
        if ((*padState & ((layout != 1 ? 0x10u : 0x20u) | 0x100)) != 0) {
            _memset(DAT_01b660c0, 0, 0x4880);
            thiscall<void>(FUN_009c4120, DAT_01b5d1e0, DAT_01b6a940, 0);
            thiscall<void>(FUN_009c3e30, DAT_01b5d1e0, DAT_01b6caa0, 0);
            thiscall<void>(FUN_009c4120, DAT_01b5d1e0, DAT_01b6a940, 1);
            thiscall<void>(FUN_009c3e30, DAT_01b5d1e0, DAT_01b6caa0, 1);
            int count = thiscall<int>(FUN_0094a8e0, DAT_01886ea0, 9);
            DAT_01b6ca64 = 0;
            DAT_01b6ca68 = 0;
            DAT_01b6ca80 = 0;
            DAT_01b6ca84 = 0;
            DAT_01b6ca88 = 0xb;
            DAT_01b6ca8c = 0x10;
            DAT_01b6ca90 = -1;
            if (count < 0x20) {
                int *entry = &DAT_01b6c98c[count];
                for (int left = 0x20 - count; left != 0; left--) {
                    *entry = -1;
                    entry++;
                }
            }
            // DAT_01b6ca0c .. DAT_01b6ca48 (the 16 ints following the 0x20 entries above)
            for (int i = 0x20; i < 0x30; i++) {
                DAT_01b6c98c[i] = -1;
            }
            thiscall<void>(FUN_009c3e30, DAT_01b5d1e0, DAT_01b6caa0, 2);
            thiscall<void>(FUN_009c4020, DAT_01b5d1e0, DAT_01b6caa0);
            _memset(DAT_01b6d550, 0, 0x19c0);
            if ((DAT_01bea098 & 0x20000000) != 0) {
                DAT_01b6eefd = 1;
            }
            DAT_01b6edb0 = -1;
            thiscall<void>(FUN_009c66e0, DAT_01b5d1e0, DAT_01b6ef10);
            FID_conflict__memcpy(DAT_01b5d1e0, DAT_01b660c0, 0x8ee0);
            FID_conflict__memcpy(DAT_01b6efe0, DAT_01b660c0, 0x8ee0);
            if ((DAT_01bea098 & 0x20000000) != 0) {
                DAT_01b6601d = 1;
                DAT_01b77e1d = 1;
            }
            thiscall<void>(FUN_009c7c20, DAT_01b5d1e0);
            thiscall<void>(FUN_009c6770, DAT_01b5d1e0);
            FUN_00dfd570(padIndex);
            return 1;
        }
        padState += 0xc;  // 0x30 bytes per pad
        padIndex++;
    } while ((int)padState < 0x1b7b9d4);

    // no pad pressed the confirm button
    if (FUN_00dd9520((int)DAT_01b7b7c0) == 0) {
        if (!fastcall<bool>(FUN_00cac950, DAT_01dc1404)) {
            return 0;
        }
    }
    FUN_009c8280(DAT_01b5d1e0);  // resets the save data (no pad)
    FUN_00dfd570(0);
    return 1;
}
