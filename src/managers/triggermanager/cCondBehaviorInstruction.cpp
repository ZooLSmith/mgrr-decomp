// src/managers/triggermanager/cCondBehaviorInstruction.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondBehaviorInstruction.h"

namespace cCondBehaviorInstruction_p1 {

// __thiscall call of a function with an explicit ECX (`self`)
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// __thiscall call of virtual slot `slot` (byte offset) of `self`
template <class R, class... A> inline R vcall(void *self, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(void *, A...);
    return ((Fn)(*(void ***)self)[slot / 4])(self, args...);
}

} // namespace cCondBehaviorInstruction_p1

// 00C7AD10  Trigger::cCondBehaviorInstruction::vf0C  size=6  [class]
int Trigger::cCondBehaviorInstruction::vf0C()
{
    return 1;
}

// 00C7AD20  Trigger::cCondBehaviorInstruction::vf14  size=96  [class]
int Trigger::cCondBehaviorInstruction::vf14()
{
    using namespace cCondBehaviorInstruction_p1;
    int result = 0;
    if (targetId() == -1) {
        return 0;
    }
    int found = thiscall<int>(FUN_00a7f600, (void *)0x01BE9A98, targetId());  // ECX = global at 0x01BE9A98
    if (found != 0) {
        int *behavior = (int *)FUN_00a7c8a0(found);  // __fastcall: ECX = found
        int instruction = vcall<int>(behavior, 0x124);
        if (instruction != -1) {
            behavior = (int *)FUN_00a7c8a0(found);
            instruction = vcall<int>(behavior, 0x124);
            if (instruction == instructionId()) {
                result = 1;
            }
        }
    }
    return result;
}

// 00C7AD80  Trigger::cCondBehaviorInstruction::vf1C  size=22  [class]
void Trigger::cCondBehaviorInstruction::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = record;
    targetId() = record[2];       // record+0x08
    instructionId() = record[3];  // record+0x0C
}

// 00C85AB0  Trigger::cCondBehaviorInstruction::vf00  size=31  [class]
Trigger::cCondBehaviorInstruction *Trigger::cCondBehaviorInstruction::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
