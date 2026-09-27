// src/managers/triggermanager/actions/TrgActObjectCollision.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016abb44[];  // debug message format: object %s: %s
extern char DAT_016b15d0[];  // debug message: action has no parameter block
extern char DAT_016b1568[];  // message text: object not found
extern char DAT_016b1584[];  // message format for FUN_00959930: %s (parts name / behavior)

namespace Trigger { namespace Act {
void OBJECT_COLLISION(int *params, char *message);
int __fastcall OBJECT_COLLISION_2(int *action);
} }

namespace TrgActObjectCollision_p1 {

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

}  // namespace TrgActObjectCollision_p1

// 00C81060  Trigger::Act::OBJECT_COLLISION  size=35  [class]
// Error report helper: prints `message` for the object named at params+0xC when params+0x8 is -1.
void Trigger::Act::OBJECT_COLLISION(int *params, char *message)
{
    using namespace TrgActObjectCollision_p1;
    if (params[2] == -1) {  // +0x8
        debugPrint(DAT_016abb44, (char *)(params + 3), message);
    }
    return;
}

// 00C97720  Trigger::Act::OBJECT_COLLISION_2  size=657  [class]
// Parameter block: +0x8 object id (-1 = look up by name), +0xC object name, +0x1C parts name
// (empty = whole object), +0x2C collision setting. For every matching entity calls behavior
// vf0xC8(setting) or, for a named parts, vf0xCC(setting, partsIndex).
int __fastcall Trigger::Act::OBJECT_COLLISION_2(int *action)
{
    using namespace TrgActObjectCollision_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016b15d0);
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
    int model;
    int *behavior;
    int partsIndex;
    int *partsEntry;
    int cmp;
    unsigned char *partsName;
    unsigned char *entryName;
    char *text;
    if (0 < list.count) {
        do {
            if ((list.items[i] == 0) || (model = FUN_00a7c800(list.items[i]), model == 0)) {  // machine code: ECX = list entry
                if (params[2] == -1) {
                    debugPrint(DAT_016abb44, (char *)(params + 3), DAT_016b1568);
                }
fail:
                result = 0;
            }
            else {
                behavior = (int *)FUN_00a7c8a0(list.items[i]);  // machine code: ECX = list entry
                if (behavior == 0) {
                    text = call<char *(*)(char *, char *, char *)>(FUN_00959930)(message, DAT_016b1584, (char *)(params + 7));
                    if (params[2] == -1) {
                        debugPrint(DAT_016abb44, (char *)(params + 3), text);
                    }
                }
                else {
                    partsName = (unsigned char *)(params + 7);  // +0x1C
                    if (partsName[0] != 0) {  // inlined strlen != 0
                        partsIndex = 0;
                        if (0 < *(short *)(model + 0x324)) {  // parts count
                            // parts array at model+0x320, 0x70 bytes each; entry+0x60 -> info, info+0x40 = name
                            partsEntry = (int *)(*(int *)(model + 0x320) + 0x60);
                            do {
                                entryName = *(unsigned char **)(*partsEntry + 0x40);
                                if (entryName != 0) {
                                    cmp = compareNames(partsName, entryName);
                                    if (cmp == 0) {
                                        if (partsIndex != -1) {
                                            vcall<void>(behavior, 0xcc, params[11], partsIndex);  // params+0x2C
                                            goto next;
                                        }
                                        break;
                                    }
                                }
                                partsIndex = partsIndex + 1;
                                partsEntry = partsEntry + 0x1c;
                            } while (partsIndex < *(short *)(model + 0x324));
                        }
                        text = call<char *(*)(char *, char *, unsigned char *)>(FUN_00959930)(message, DAT_016b1584, partsName);
                        OBJECT_COLLISION(params, text);
                        goto fail;
                    }
                    vcall<void>(behavior, 200, params[11]);  // params+0x2C
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
