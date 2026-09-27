// src/managers/ctouchmanager/cTouchManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cTouchManager.h"

namespace cTouchManager_p1 {

// __cdecl call of a function (symbol or address); used for __fastcall callees whose ECX the
// decompiler did not show ("ECX: ?").
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// Inlined in FUN_00983650 / FUN_009836d0: unlinks `node` from the active list of the manager at
// `self`, resets it (virtual slot 0, argument 0) and pushes it onto the free list. Returns the
// node that followed it.
inline undefined4 *recycleNode(int self, undefined4 *node)
{
    int prev;
    int freeHead;
    int freePrev;
    undefined4 *next;

    prev = node[0xf];
    next = (undefined4 *)node[0x10];
    if (prev != 0) {
        *(undefined4 **)(prev + 0x40) = next;
    }
    if (next != (undefined4 *)0x0) {
        next[0xf] = prev;
    }
    if (*(undefined4 **)(self + 0x18) == node) {
        *(undefined4 **)(self + 0x18) = next;
    }
    vcall<void>(node, 0x0, 0);
    *(int *)(self + 0x10) = *(int *)(self + 0x10) + -1;
    freeHead = *(int *)(self + 0x14);
    if (freeHead == 0) {
        freePrev = 0;
    }
    else {
        freePrev = *(int *)(freeHead + 0x3c);
    }
    node[0xf] = freePrev;
    node[0x10] = freeHead;
    if (freePrev != 0) {
        *(undefined4 **)(freePrev + 0x40) = node;
    }
    if (freeHead != 0) {
        *(undefined4 **)(freeHead + 0x3c) = node;
    }
    *(undefined4 **)(self + 0x14) = node;
    return next;
}

} // namespace cTouchManager_p1

// 009835F0  cTouchManager::cTouchManager  size=74  [class]
cTouchManager::cTouchManager()
{
    // vftable = cTouchManager::vftable
    field04() = 0;
    field08() = 0;
    freeList() = 0;
    activeList() = 0;
    activeEnd() = 0;
    field20() = 0;
    field24() = 0;
    field50() = 1;
    field28() = 0;
    field5C() = 0;
    field2C() = 0;
    field30() = 0;
    field34() = 0;
    field38() = 0;
    field3C() = 0;
    field40() = 0;
    field44() = 0;
    field48() = 0;
    field4C() = 0;
}

// 00983640  cTouchManager::~cTouchManager  size=14  [class]
cTouchManager::~cTouchManager()
{
    using namespace cTouchManager_p1;
    // vftable = cTouchManager::vftable
    cdeclcall<void>(FUN_009830a0); /* ECX: ? (likely this) */
}

// 00983650  FUN_00983650  size=122  [between]
// __thiscall on a cTouchManager: recycles every active node whose id (word at +0x6) is `id`.
void FUN_00983650(int self, uint id)
{
    using namespace cTouchManager_p1;
    undefined4 *node;
    undefined4 *next;

    node = *(undefined4 **)(self + 0x18);
    if (node != *(undefined4 **)(self + 0x1c)) {
        do {
            if (*(unsigned short *)((int)node + 6) == id) {
                next = recycleNode(self, node);
            }
            else {
                next = (undefined4 *)node[0x10];
            }
            node = next;
        } while (next != *(undefined4 **)(self + 0x1c));
    }
}

// 009836D0  FUN_009836d0  size=141  [between]
// __thiscall on a cTouchManager: recycles every active node whose key is (group << 16 | id).
void FUN_009836d0(int self, int group, uint id)
{
    using namespace cTouchManager_p1;
    undefined4 *node;
    undefined4 *next;

    if (*(undefined4 **)(self + 0x18) != *(undefined4 **)(self + 0x1c)) {
        node = *(undefined4 **)(self + 0x18);
        do {
            if (node[1] == (group << 0x10 | id & 0xffff)) {
                next = recycleNode(self, node);
            }
            else {
                next = (undefined4 *)node[0x10];
            }
            node = next;
        } while (next != *(undefined4 **)(self + 0x1c));
    }
}

// 00983780  cTouchManager::vf00  size=39  [class]
undefined4 *cTouchManager::vf00(byte flags)
{
    using namespace cTouchManager_p1;
    // vftable = cTouchManager::vftable
    cdeclcall<void>(FUN_009830a0); /* ECX: ? (likely this) */
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}
