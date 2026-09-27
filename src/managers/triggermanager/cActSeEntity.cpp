// src/managers/triggermanager/cActSeEntity.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSeEntity.h"

extern undefined DAT_01dbe10c;  // cActSeEntity static descriptor returned by vf00
extern char DAT_016416fa[];   // "" (empty string)
extern char DAT_016aeec8[];   // "Trigger::Act::SE: data is NULL"
extern char DAT_016aeea0[];   // "Trigger::Act::SE: no SE name\n"
extern char DAT_016b1378[];   // "Trigger::Act::SeEntity: no object name\n"
extern char DAT_016b134c[];   // "Trigger::Act::SE: object \"%s\" not found\n"
extern char DAT_016b1314[];   // "Trigger::Act::SE: pointer to object \"%s\" is NULL\n"
extern char DAT_016b12e4[];   // "Trigger::Act::SE: could not get the model of object \"%s\"\n"

namespace cActSeEntity_p1 {

// FUN_00dd5650: debug printf (empty in release).
inline void debugPrint(const char *format)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(format);
}
inline void debugPrint(const char *format, char *arg)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(format, arg);
}

// inlined strcmp: <0, 0 or >0 (the machine code yields -1 / 0 / 1)
inline int compareStrings(const char *a, const char *b)
{
    const unsigned char *p = (const unsigned char *)a;
    const unsigned char *q = (const unsigned char *)b;
    for (;;) {
        if (*p != *q) {
            return (*p < *q) ? -1 : 1;
        }
        if (*p == 0) {
            return 0;
        }
        p = p + 1;
        q = q + 1;
    }
}

// array with 16 inline slots, filled by FUN_00c77fc0 (layout from the stack frame)
struct ObjectList {
    int unk00;              // +0x00
    int *items;             // +0x04  -> inlineItems or heap
    int capacity;           // +0x08
    int count;              // +0x0C
    int heapAllocated;      // +0x10  nonzero: items must be freed with FUN_00dd48d0
    int inlineItems[16];    // +0x14
};

// FUN_00c77fc0: collect the objects named `name` into `list`; 0 = none found.
inline int findObjects(char *name, ObjectList *list)
{
    return ((int (*)(char *, ObjectList *))FUN_00c77fc0)(name, list);
}

// FUN_00e5e0c0 (functions.h declares it void): play sound `seName` on `model`; 0 = failure.
inline int playSe(char *seName, int model, int param, int flags)
{
    return ((int (*)(char *, int, int, int))FUN_00e5e0c0)(seName, model, param, flags);
}

} // namespace cActSeEntity_p1

// 00C8B1D0  Trigger::cActSeEntity::vf08  size=1  [class]
void Trigger::cActSeEntity::vf08()
{
}

// 00C8B1E0  Trigger::cActSeEntity::vf0C  size=1  [class]
void Trigger::cActSeEntity::vf0C()
{
}

// 00C8B1F0  Trigger::cActSeEntity::vf10  size=1  [class]
void Trigger::cActSeEntity::vf10()
{
}

// 00C8B200  Trigger::cActSeEntity::vf14  size=1  [class]
void Trigger::cActSeEntity::vf14()
{
}

// 00C92940  Trigger::cActSeEntity::vf00  size=6  [class]
void *Trigger::cActSeEntity::vf00()
{
    return &DAT_01dbe10c;
}

// 00C92950  Trigger::cActSeEntity::vf04  size=31  [class]
Trigger::cActSeEntity *Trigger::cActSeEntity::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C96F90  Trigger::cActSeEntity::vf18  size=426  [class]
int Trigger::cActSeEntity::vf18()  // machine code ends in `ret 4`: one stack argument, unused (cAction.h declares vf18() without it)
{
    using namespace cActSeEntity_p1;
    // record: +0x08 SE name, +0x18 object name, +0x28 SE parameter (-1 = default)
    char *data = (char *)record();
    if (data == 0) {
        debugPrint(DAT_016aeec8);
        return 0;
    }
    if (compareStrings(data + 8, DAT_016416fa) == 0) {
        debugPrint(DAT_016aeea0);
        return 0;
    }
    char *objectName = data + 0x18;
    if (compareStrings(objectName, DAT_016416fa) == 0) {
        debugPrint(DAT_016b1378);
        return 0;
    }
    ObjectList objects;
    objects.items = objects.inlineItems;
    objects.unk00 = 0;
    objects.capacity = 0x10;
    objects.count = 0;
    objects.heapAllocated = 0;
    if (findObjects(objectName, &objects) == 0) {
        debugPrint(DAT_016b134c, objectName);
        FUN_00948120((int)&objects);  // list destructor (raw showed no argument; ECX = &objects)
        return 0;
    }
    int result = 1;
    for (int i = 0; i < objects.count; i = i + 1) {
        if (objects.items[i] == 0) {
            debugPrint(DAT_016b1314, objectName);
            result = 0;
        }
        else {
            // raw showed FUN_00a7c800() without argument; the disassembly passes the item in ECX
            int model = FUN_00a7c800(objects.items[i]);
            if (model == 0) {
                debugPrint(DAT_016b12e4, objectName);
                result = 0;
            }
            // the raw code tests data+0x28 == -1 here, but both branches are identical
            else if (result != 0 && playSe(data + 8, model, *(int *)(data + 0x28), 0) != 0) {
                result = 1;
            }
            else {
                result = 0;
            }
        }
    }
    if (objects.items != 0) {
        objects.count = 0;
        if (objects.heapAllocated != 0) {
            FUN_00dd48d0((int)objects.items, 0);
        }
    }
    return result;
}
