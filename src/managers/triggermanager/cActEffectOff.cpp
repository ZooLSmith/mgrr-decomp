// src/managers/triggermanager/cActEffectOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEffectOff.h"

extern undefined DAT_01dbe260;           // cActEffectOff static descriptor returned by vf00
extern char DAT_016b1604[];              // "Trigger::Act::EFF_VANISH: <data is NULL>" (Shift-JIS)
extern char DAT_016b0e54[];              // "Trigger::Act::EFFECT: <pointer to object> \"%s\" <is NULL>\n" (Shift-JIS)
extern undefined DAT_01be9a98;           // ECX of FUN_00a814d0 (object lookup by number)

namespace cActEffectOff_p1 {

// __thiscall call of a function whose functions.h prototype lacks the ECX argument or has the
// wrong convention; ECX (`self`) and the stack arguments are taken from the machine code.
template <class R, class F, class... A> inline R callThis(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// FUN_00dd5650: debug printf (functions.h declares it void(void); empty in release).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(format, args...);
}

// lib::Array-style list with 16 inline slots, filled by the object lookups (stack object)
struct ObjectList {
    int field0;               // +0x00  ? (0)
    int *items;               // +0x04  -> inlineItems or heap
    int capacity;             // +0x08  0x10
    int count;                // +0x0C
    int ownsHeap;             // +0x10  items were heap-allocated (freed with FUN_00dd48d0)
    int inlineItems[16];      // +0x14
};

} // namespace cActEffectOff_p1

// 00C8E710  Trigger::cActEffectOff::vf08  size=1  [class]
void Trigger::cActEffectOff::vf08()
{
}

// 00C8E720  Trigger::cActEffectOff::vf0C  size=1  [class]
void Trigger::cActEffectOff::vf0C()
{
}

// 00C8E730  Trigger::cActEffectOff::vf10  size=1  [class]
void Trigger::cActEffectOff::vf10()
{
}

// 00C8E740  Trigger::cActEffectOff::vf14  size=1  [class]
void Trigger::cActEffectOff::vf14()
{
}

// 00C94490  Trigger::cActEffectOff::vf00  size=6  [class]
void *Trigger::cActEffectOff::vf00()
{
    return &DAT_01dbe260;
}

// 00C944A0  Trigger::cActEffectOff::vf04  size=31  [class]
Trigger::cActEffectOff *Trigger::cActEffectOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C979C0  Trigger::cActEffectOff::vf18  size=328  [class]
int Trigger::cActEffectOff::vf18()
{
    using namespace cActEffectOff_p1;
    // (machine code: `ret 4` -- one stack argument, unused; cAction.h declares vf18() without it)
    char *rec = (char *)record();
    if (rec == 0) {
        debugPrint(DAT_016b1604);  // "Trigger::Act::EFF_VANISH: data is NULL."
        return 0;
    }
    ObjectList list;
    list.items = list.inlineItems;
    list.field0 = 0;
    list.capacity = 0x10;
    list.count = 0;
    list.ownsHeap = 0;
    int number = *(int *)(rec + 8);
    char *name = rec + 0xc;
    if (number == -1) {
        FUN_00c77fc0(name, (undefined4)&list);
    }
    else if (name[0] == '\0') {  // raw: strlen loop, "end == name + 1"
        // raw: FUN_00a814d0(&list, number); machine code: ECX = &DAT_01be9a98
        callThis<void>(FUN_00a814d0, &DAT_01be9a98, &list, number);
    }
    else {
        FUN_00c959c0((int)name, number, (int)&list);
    }
    if (list.count == 0) {
        if (list.items != 0) {
            list.count = 0;
            if (list.ownsHeap != 0) {
                FUN_00dd48d0((int)list.items, 0);
            }
        }
        return 0;
    }
    int i = 0;
    int result = 1;
    if (0 < list.count) {
        result = 1;
        do {
            if (list.items[i] == 0) {
                if (*(int *)(rec + 8) == -1) {
                    debugPrint(DAT_016b0e54, name);  // "Trigger::Act::EFFECT: pointer to object \"%s\" is NULL"
                }
                result = 0;
            }
            else {
                // raw: FUN_00a7c8a0(r1C, r20, r24); FUN_00a8ca50(r1C, r20, r24);
                // machine code: FUN_00a7c8a0 is __fastcall with ECX = the object and returns the ECX
                // of FUN_00a8ca50, which takes (record+0x1C, float record+0x20, float record+0x24)
                int arg1C = *(int *)(rec + 0x1c);
                float arg20 = *(float *)(rec + 0x20);
                float arg24 = *(float *)(rec + 0x24);
                int controller = (int)FUN_00a7c8a0(list.items[i]);
                callThis<void>(FUN_00a8ca50, (void *)controller, arg1C, arg20, arg24);
            }
            i = i + 1;
        } while (i < list.count);
    }
    if (list.items != 0) {
        list.count = 0;
        if (list.ownsHeap != 0) {
            FUN_00dd48d0((int)list.items, 0);
        }
    }
    return result;
}
