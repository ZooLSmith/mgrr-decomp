// src/managers/cotmanager/cOtManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cOtManager.h"

// Data referenced by this part
extern unsigned char DAT_01b7bcf0[];  // heap passed to FUN_00f97b10
extern unsigned int DAT_01bea084;     // render feature flags (bit 15 set by FUN_00a21070)
extern int DAT_01edd278;
extern int DAT_0189f774;

namespace cOtManager_p1 {

// __cdecl call of a function (symbol or address); used for __thiscall callees whose ECX the
// decompiler did not show ("ECX: ?") and for mismatching prototypes.
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// __thiscall call of a function (symbol or address) with ECX = self
template <class R, class F, class S, class... A> inline R thiscall(F fn, S self, A... args)
{
    typedef R (__thiscall *Fn)(S, A...);
    return ((Fn)fn)(self, args...);
}

// Hw classes without a header, called by address.
const unsigned int kOtManagerBaseCtor = 0x00F979A0;     // Hw::cOtManagerBase::cOtManagerBase
const unsigned int kOtManagerBaseDtor = 0x00F979B0;     // Hw::cOtManagerBase::~cOtManagerBase
const unsigned int kRenderTargetInfoCtor = 0x00F9A130;  // Hw::cRenderTargetInfo::cRenderTargetInfo
const unsigned int kRenderTargetInfoDtor = 0x00F97540;  // Hw::cRenderTargetInfo::~cRenderTargetInfo

// Ordering-table description passed to FUN_00f97b10.
struct OtDesc {
    undefined4 field00;      // local_18
    undefined4 size;         // local_14
    undefined4 field08;      // local_10
    undefined4 field0C;      // local_c
    undefined4 field10;      // local_8
    unsigned short field14;  // local_4
    unsigned char field16;   // local_2
};

} // namespace cOtManager_p1

// 00A21000  cOtManager::cOtManager  size=29  [class]
cOtManager::cOtManager()
{
    using namespace cOtManager_p1;
    thiscall<void>(kOtManagerBaseCtor, this);  // base constructor (ECX = this)
    // vftable = cOtManager::vftable
    cdeclcall<void>(kRenderTargetInfoCtor); /* ECX: ? (embedded cRenderTargetInfo) */
}

// 00A21020  FUN_00a21020  size=22  [between]
void FUN_00a21020(void)
{
    using namespace cOtManager_p1;
    cdeclcall<void>(kRenderTargetInfoDtor); /* ECX: ? */
    cdeclcall<void>(kOtManagerBaseDtor); /* ECX: ? */
}

// 00A21040  cOtManager::vf00  size=43  [class]
undefined4 *cOtManager::vf00(byte flags)
{
    using namespace cOtManager_p1;
    cdeclcall<void>(kRenderTargetInfoDtor); /* ECX: ? (embedded cRenderTargetInfo) */
    thiscall<void>(kOtManagerBaseDtor, this);  // base destructor (ECX = this)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00A21070  FUN_00a21070  size=132  [between]
undefined4 __fastcall FUN_00a21070(int self)
{
    using namespace cOtManager_p1;
    char ok;
    OtDesc desc;

    desc.field10 = 0;
    *(undefined4 *)(self + 0x68) = 0;
    *(undefined4 *)(self + 0xac) = 0;
    desc.field00 = 1;
    desc.size = 0x14000;
    desc.field08 = 2;
    desc.field0C = 0x6c;
    desc.field14 = 0x4e6a;
    desc.field16 = 1;
    ok = cdeclcall<char>(FUN_00f97b10, &desc, DAT_01b7bcf0); /* ECX: ? */
    if (ok == '\0') {
        return 0;
    }
    DAT_01bea084 = DAT_01bea084 | 0x8000;
    return 1;
}

// 00A21100  thunk_FUN_00f97a10  size=5  [between]
// (a jmp to FUN_00f97a10; the body shown is that of the target)
void __fastcall thunk_FUN_00f97a10(int self)
{
    int offset;
    int block;
    int remaining;
    int *slot;

    slot = (int *)(self + 0xc);
    remaining = 2;
    do {
        if (slot[-2] != 0) {
            FUN_00dd4940(slot[-2]);
        }
        if (*slot != 0) {
            FUN_00dd4940(*slot);
        }
        if (slot[2] != 0) {
            FUN_00dd4940(slot[2]);
        }
        slot = slot + 5;
        remaining = remaining + -1;
    } while (remaining != 0);
    if (*(int *)(self + 0x2c) != 0) {
        offset = 0;
        do {
            block = *(int *)(offset + 8 + *(int *)(self + 0x2c));
            if (block != 0) {
                FUN_00dd4940(block);
            }
            offset = offset + 0xc;
        } while (offset < 0x48);
        FUN_00dd4940(*(int *)(self + 0x2c));
    }
    if (*(int *)(self + 0x34) != 0) {
        FUN_00dd4940(*(int *)(self + 0x34));
    }
    if (*(int *)(self + 0x30) != 0) {
        FUN_00dd4940(*(int *)(self + 0x30));
    }
    if (*(int *)(self + 0x38) != 0) {
        FUN_00dd4940(*(int *)(self + 0x38));
    }
    *(undefined4 *)(self + 4) = 0;
    *(undefined4 *)(self + 8) = 0;
    *(undefined4 *)(self + 0xc) = 0;
    *(undefined4 *)(self + 0x10) = 0;
    *(undefined4 *)(self + 0x14) = 0;
    *(undefined4 *)(self + 0x18) = 0;
    *(undefined4 *)(self + 0x1c) = 0;
    *(undefined4 *)(self + 0x20) = 0;
    *(undefined4 *)(self + 0x24) = 0;
    *(undefined4 *)(self + 0x28) = 0;
    *(undefined4 *)(self + 0x5c) = 0;
    *(undefined4 *)(self + 0x2c) = 0;
    *(undefined4 *)(self + 0x34) = 0;
    *(undefined4 *)(self + 0x30) = 0;
    *(undefined4 *)(self + 0x44) = 0;
    *(undefined4 *)(self + 0x54) = 0;
    *(undefined4 *)(self + 0x48) = 0;
    *(undefined4 *)(self + 0x4c) = 0;
    *(undefined4 *)(self + 0x58) = 0;
    *(undefined4 *)(self + 0x60) = 0;
    *(undefined4 *)(self + 100) = 0;
    *(undefined4 *)(self + 0x3c) = 0;
    *(undefined4 *)(self + 0x38) = 0;
}

// 00A21110  cOtManager::vf04  size=200  [class]
bool cOtManager::vf04(undefined4 param, char otKind)
{
    using namespace cOtManager_p1;
    bool result;
    bool isZero;

    result = false;
    if (disableRange08() == 0 && (unsigned char)(otKind - 8U) < 0x57) {
        result = true;
    }
    if (disableRange01() == 0 && (unsigned char)(otKind - 1U) < 6) {
        result = true;
    }
    if (disableRange47() == 0 && (unsigned char)(otKind + 0xb9U) < 4) {
        result = true;
    }
    if (disableRange1F() == 0 && (unsigned char)(otKind - 0x1fU) < 0x18) {
        result = true;
    }
    switch (otKind) {
    case 0x14:
        isZero = DAT_01edd278 == 0;
        break;
    case 0x15:
        isZero = FUN_00f99150() == 0;
        break;
    default:
        return result;
    case 0x1b:
        return cdeclcall<int>(FUN_009cd310, 0x2c) == 0;
    case 0x20:  // ' '
    case 0x26:  // '&'
    case 0x2c:  // ','
    case 0x32:  // '2'
    case 0x38:  // '8'
        isZero = DAT_0189f774 == 0;
        break;
    case 0x41:  // 'A'
    case 0x43:  // 'C'
    case 0x52:  // 'R' .. 'Z'
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
        result = true;
        return result;
    case 0x48:  // 'H'
        if (disableKind48() == 0) {
            return true;
        }
        if (disableRange08() == 0) {
            return true;
        }
        return false;
    }
    if (isZero) {
        result = true;
    }
    return result;
}
