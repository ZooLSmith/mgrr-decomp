// src/managers/triggermanager/cCondAnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondAnd.h"

namespace cCondAnd_p1 {

// layout-compatible view of any Trigger::cCondition (vftable layout of 0x016A8930)
struct Condition {
    virtual Condition *vf00(unsigned char flags);  // +0x00  scalar deleting destructor
    virtual void vf04();                           // +0x04
    virtual void vf08();                           // +0x08
    virtual int vf0C();                            // +0x0C
    virtual void vf10();                           // +0x10
    virtual unsigned int vf14();                   // +0x14  evaluate
    virtual int vf18();                            // +0x18
    virtual void vf1C(int *record);                // +0x1C
    virtual int vf20();                            // +0x20
};

inline Condition *asCondition(int *object) { return (Condition *)object; }

// Trigger::cCondition+0x0C of a child: last evaluation result written by cCondAnd::vf14
inline int &lastResult(int *condition) { return *(int *)((char *)condition + 0xC); }

} // namespace cCondAnd_p1

// 00C793F0  Trigger::cCondAnd::cCondAnd  size=31  [class]
Trigger::cCondAnd::cCondAnd()
{
    *(int *)((char *)this + 0xC) /* cCondition+0x0C: ? */ = -1;
    *(int *)((char *)this + 0x4) /* cCondition+0x04: condition record */ = 0;
    *(int *)((char *)this + 0x8) /* cCondition+0x08: ? */ = -1;
    // vftable = Trigger::cCondAnd::vftable (0x016A8BD8)
    childCount() = -1;
}

// 00C79420  Trigger::cCondAnd::vf04  size=48  [class]
void Trigger::cCondAnd::vf04()
{
    using namespace cCondAnd_p1;
    for (int i = 0; i < childCount(); i++) {
        if (children()[i] != 0) {
            asCondition(children()[i])->vf04();
        }
    }
}

// 00C79450  Trigger::cCondAnd::vf08  size=62  [class]
void Trigger::cCondAnd::vf08()
{
    using namespace cCondAnd_p1;
    for (int i = 0; i < childCount(); i++) {
        if (children()[i] != 0) {
            asCondition(children()[i])->vf08();
            if (children()[i] != 0) {
                asCondition(children()[i])->vf00(1);  // delete the child
            }
        }
    }
}

// 00C79500  Trigger::cCondAnd::vf10  size=43  [class]
void Trigger::cCondAnd::vf10()
{
    using namespace cCondAnd_p1;
    for (int i = 0; i < childCount(); i++) {
        asCondition(children()[i])->vf10();
    }
}

// 00C79530  Trigger::cCondAnd::vf14  size=93  [class]
int Trigger::cCondAnd::vf14()
{
    using namespace cCondAnd_p1;
    int allTrue = 1;
    for (int i = 0; i < childCount(); i++) {
        unsigned int result = asCondition(children()[i])->vf14();
        if (inverted()[i] == 1) {
            result = result ^ 1;
        }
        if (result == 0) {
            lastResult(children()[i]) = 0;
            allTrue = 0;
        }
        else {
            lastResult(children()[i]) = 1;
        }
    }
    return allTrue;
}

// 00C79590  Trigger::cCondAnd::vf20  size=63  [class]
int Trigger::cCondAnd::vf20()
{
    using namespace cCondAnd_p1;
    int result = 1;
    for (int i = 0; i < childCount(); i++) {
        if (children()[i] != 0 && asCondition(children()[i])->vf20() == 0) {
            result = 0;
        }
    }
    return result;
}

// 00C84D50  Trigger::cCondAnd::vf00  size=31  [class]
Trigger::cCondAnd *Trigger::cCondAnd::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
