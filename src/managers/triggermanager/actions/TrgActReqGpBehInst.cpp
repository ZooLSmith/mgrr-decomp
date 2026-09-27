// src/managers/triggermanager/actions/TrgActReqGpBehInst.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016b1b1c[];           // debug message: action has no parameter block
extern unsigned char DAT_01b7bd48[];  // default heap (second argument of FUN_00dd3500)

namespace Trigger { namespace Act {
int __fastcall REQ_GP_BEH_INST(int *action);
} }

namespace TrgActReqGpBehInst_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

// lib::AllocatedArray<Entity*> (0x18 bytes, constructed inline here)
struct EntityArray {
    void *vftable;   // +0x00
    int **data;      // +0x04
    int count;       // +0x08
    int unknown0C;   // +0x0C
    int unknown10;   // +0x10
    int unknown14;   // +0x14
};

}  // namespace TrgActReqGpBehInst_p1

// 00C9D540  Trigger::Act::REQ_GP_BEH_INST  size=206  [class]
// Collects the entities of group (params+0x8, params+0xC) into a new array and sends each a
// behaviour request whose first word is params+0x10. Returns 1 when the array is not empty.
int __fastcall Trigger::Act::REQ_GP_BEH_INST(int *action)
{
    using namespace TrgActReqGpBehInst_p1;
    undefined4 request[15];
    int *params = (int *)action[1];  // +0x4 parameter block
    int result = 0;
    if (params == 0) {
        debugPrint(DAT_016b1b1c);
        return 0;
    }
    EntityArray *block = call<EntityArray *(*)(int, unsigned char *)>(FUN_00dd3500)(0x18, DAT_01b7bd48);
    EntityArray *array = 0;
    if (block != 0) {
        block->data = 0;
        block->count = 0;
        block->unknown0C = 0;
        block->vftable = (void *)0x01663FE8;  // lib::AllocatedArray<Entity*>::vftable
        block->unknown10 = 0;
        block->unknown14 = 0;
        array = block;
    }
    unsigned char *heap = DAT_01b7bd48;
    call<void (*)(int, unsigned char **)>(FUN_00a81e00)(0x20, &heap); /* ECX: ? (the array) */
    int found = call<int (*)(int, int, EntityArray *)>(FUN_00c19d00)(params[2], params[3], array); /* ECX: ? */
    if (0 < found) {
        int **entry = array->data;
        int **end = entry + array->count;
        if (entry != end) {
            result = 1;
            do {
                FUN_00a7c8a0((int)*entry);  // machine code: ECX = *entry
                request[0] = params[4];  // +0x10
                call<void (*)(undefined4 *)>(FUN_00a9d720)(request); /* ECX: ? (object returned above) */
                entry = entry + 1;
            } while (entry != end);
        }
    }
    return result;
}
