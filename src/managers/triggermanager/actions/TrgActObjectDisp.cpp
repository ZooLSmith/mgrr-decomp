// src/managers/triggermanager/actions/TrgActObjectDisp.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016a9fec[];  // debug message format: object %s: %s
extern char DAT_016b0e0c[];  // message format for FUN_00959930 (object not found)
extern char DAT_016b15a0[];  // debug message: action has no parameter block
extern char DAT_016b1568[];  // message text: object not found
extern char DAT_016b1584[];  // message format for FUN_00959930: %s (parts name)

namespace Trigger { namespace Act {
unsigned int __fastcall OBJECT_DISP(int *action);
int __fastcall OBJECT_DISP_2(int *action);
} }

namespace TrgActObjectDisp_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

// __thiscall call of the virtual function at byte offset `slot` of obj's vftable
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// Growable entity list filled by the object lookups (header of a lib array with an inline
// buffer of 16 entries on the caller's stack).
struct EntityList {
    undefined4 unk00;      // +0x00
    int       *items;      // +0x04
    int        capacity;   // +0x08
    int        count;      // +0x0C
    int        heapOwned;  // +0x10 nonzero: items was allocated and must be freed
};

// Inlined list destructor.
inline void releaseList(EntityList &list)
{
    if (list.items != 0) {
        list.count = 0;
        if (list.heapOwned != 0) {
            FUN_00dd48d0((int)list.items, 0);
        }
    }
}

// Inlined strcmp: -1 / 0 / 1.
inline int compareNames(const unsigned char *a, const unsigned char *b)
{
    for (;;) {
        if (*a != *b) {
            return *a < *b ? -1 : 1;
        }
        if (*a == 0) {
            return 0;
        }
        a++;
        b++;
    }
}

// OBJECT_DISP keeps its parameter block at action+0x10 and re-reads it after every call.
inline int *checkParams(int *action) { return (int *)action[4]; }

}  // namespace TrgActObjectDisp_p1

// 00C96460  Trigger::Act::OBJECT_DISP  size=450  [class]
// Check variant (parameter block at action+0x10): 1 when every matching object is displayed.
// Parameter block: +0x8 object id (-1 = by name), +0xC object name, +0x1C parts name.
// The object's +0x94 flags: bit 0 = active, bit 1 = displayed.
unsigned int __fastcall Trigger::Act::OBJECT_DISP(int *action)
{
    using namespace TrgActObjectDisp_p1;
    int inlineItems[16];
    char message[1024];
    EntityList list;
    list.items = inlineItems;
    int *params = checkParams(action);
    list.unk00 = 0;
    list.capacity = 0x10;
    list.count = 0;
    list.heapOwned = 0;
    char *objectName = (char *)(params + 3);  // +0xC
    if (params[2] == -1) {                     // +0x8 object id
        call<undefined4 (*)(char *, EntityList *)>(FUN_00c77fc0)(objectName, &list);
    }
    else if (objectName[0] == '\0') {  // inlined strlen == 0
        call<void (*)(EntityList *, int)>(FUN_00a814d0)(&list, params[2]); /* ECX: ? */
    }
    else {
        call<int (*)(char *, int, EntityList *)>(FUN_00c959c0)((char *)(checkParams(action) + 3),
                                                              checkParams(action)[2], &list);
    }
    if (list.count == 0) {
        releaseList(list);
        return 0;
    }
    unsigned int result = 1;
    int behavior;
    int object;
    char *text;
    char *partsName;
    int i = 0;
    if (0 < list.count) {
        do {
            if ((list.items[i] == 0) || (behavior = FUN_00a7c8a0(list.items[i]), behavior == 0)) {  // machine code: ECX = list entry
                result = 0;
                text = call<char *(*)(char *, char *, char *)>(FUN_00959930)(message, DAT_016b0e0c,
                                                                          (char *)(checkParams(action) + 3));
                if (checkParams(action)[2] == -1) {
                    debugPrint(DAT_016a9fec, (char *)(checkParams(action) + 3), text);
                }
            }
            else {
                object = FUN_00a92f90(behavior);  // machine code: ECX = behavior
                if ((object == 0) || ((*(unsigned int *)(object + 0x94) & 1) == 0)) {
fail:
                    result = 0;
                }
                else {
                    partsName = (char *)(checkParams(action) + 7);  // +0x1C
                    if (partsName[0] == '\0') {  // inlined strlen == 0
                        result = result & *(unsigned int *)(object + 0x94) >> 1 & 1;
                    }
                    else {
                        object = call<int (*)(char *)>(FUN_00e33270)(partsName); /* ECX: ? */
                        if (object == -1) goto fail;
                        object = FUN_00a92f90(behavior);  // machine code: ECX = behavior
                        result = result & *(unsigned int *)(object + 0x94) >> 1 & 1;
                    }
                }
            }
            i = i + 1;
        } while (i < list.count);
    }
    releaseList(list);
    return result;
}

// 00C974B0  Trigger::Act::OBJECT_DISP_2  size=603  [class]
// Parameter block: +0x8 object id (-1 = by name), +0xC object name, +0x1C parts name
// (empty = whole object), +0x2C 1 = show. Whole objects use cObj::vf1C (show) / vf20 (hide);
// a named parts toggles bit 0 of its +0x38 flags.
int __fastcall Trigger::Act::OBJECT_DISP_2(int *action)
{
    using namespace TrgActObjectDisp_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016b15a0);
        return 0;
    }
    int inlineItems[16];
    char message[1024];
    EntityList list;
    list.items = inlineItems;
    list.unk00 = 0;
    list.capacity = 0x10;
    list.count = 0;
    list.heapOwned = 0;
    int objectId = params[2];                // +0x8
    char *objectName = (char *)(params + 3);  // +0xC
    if (objectId == -1) {
        call<undefined4 (*)(char *, EntityList *)>(FUN_00c77fc0)(objectName, &list);
    }
    else if (objectName[0] == '\0') {  // inlined strlen == 0
        call<void (*)(EntityList *, int)>(FUN_00a814d0)(&list, objectId); /* ECX: ? */
    }
    else {
        call<int (*)(char *, int, EntityList *)>(FUN_00c959c0)((char *)(params + 3), objectId, &list);
    }
    if (list.count == 0) {
        releaseList(list);
        return 0;
    }
    int result = 1;
    int i = 0;
    int *model;
    int parts;
    int partsIndex;
    int *partsEntry;
    int cmp;
    int part;
    unsigned char *partsName;
    unsigned char *entryName;
    char *text;
    if (0 < list.count) {
        do {
            if ((list.items[i] == 0) || (model = (int *)FUN_00a7c800(list.items[i]), model == 0)) {  // machine code: ECX = list entry
                if (params[2] == -1) {
                    debugPrint(DAT_016a9fec, (char *)(params + 3), DAT_016b1568);
                }
fail:
                result = 0;
            }
            else {
                partsName = (unsigned char *)(params + 7);  // +0x1C
                if (partsName[0] != 0) {  // inlined strlen != 0
                    partsIndex = 0;
                    if (0 < (short)model[0xc9]) {  // +0x324 parts count
                        // parts array at model+0x320, 0x70 bytes each; entry+0x60 -> info, info+0x40 = name
                        parts = model[200];
                        partsEntry = (int *)(parts + 0x60);
                        do {
                            entryName = *(unsigned char **)(*partsEntry + 0x40);
                            if (entryName != 0) {
                                cmp = compareNames(partsName, entryName);
                                if (cmp == 0) {
                                    if ((partsIndex != -1) && (part = partsIndex * 0x70 + parts, part != 0)) {
                                        if (params[11] == 1) {  // +0x2C
                                            *(unsigned int *)(part + 0x38) = *(unsigned int *)(part + 0x38) | 1;
                                        }
                                        else {
                                            *(unsigned int *)(part + 0x38) = *(unsigned int *)(part + 0x38) & 0xfffffffe;
                                        }
                                        goto next;
                                    }
                                    break;
                                }
                            }
                            partsIndex = partsIndex + 1;
                            partsEntry = partsEntry + 0x1c;
                        } while (partsIndex < (short)model[0xc9]);
                    }
                    text = call<char *(*)(char *, char *, unsigned char *)>(FUN_00959930)(message, DAT_016b1584, partsName);
                    if (params[2] == -1) {
                        debugPrint(DAT_016a9fec, (char *)(params + 3), text);
                    }
                    goto fail;
                }
                if (params[11] == 1) {  // +0x2C
                    vcall<void>(model, 0x1c);  // cObj::vf1C: sets objFlags bit 0
                }
                else {
                    vcall<void>(model, 0x20);  // cObj::vf20: clears objFlags bit 0
                }
next:
                if (result == 0) goto fail;
                result = 1;
            }
            i = i + 1;
        } while (i < list.count);
    }
    releaseList(list);
    return result;
}
