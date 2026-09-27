// src/managers/triggermanager/cCondSequence.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondSequence.h"

// 00C78EC0  Trigger::cCondSequence::cCondSequence  size=41  [class]
Trigger::cCondSequence::cCondSequence()
{
    satisfied() = -1;
    record() = 0;
    field08() = -1;
    // vftable = Trigger::cCondSequence::vftable (0x016A8AD0)
    current() = 0;
    childCount() = 0;
    completed() = 0;
}

// 00C78F30  Trigger::cCondSequence::vf04  size=48  [class]
void Trigger::cCondSequence::vf04()
{
    int i = 0;
    if (0 < childCount()) {
        cCondition **child = children();
        do {
            if (*child != 0) {
                (*child)->vf04();
            }
            i = i + 1;
            child = child + 1;
        } while (i < childCount());
    }
}

// 00C78F60  Trigger::cCondSequence::vf08  size=62  [class]
void Trigger::cCondSequence::vf08()
{
    int i = 0;
    if (0 < childCount()) {
        cCondition **child = children();
        do {
            if (*child != 0) {
                (*child)->vf08();
                if (*child != 0) {
                    (*child)->vf00(1);  // delete
                }
            }
            i = i + 1;
            child = child + 1;
        } while (i < childCount());
    }
}

// 00C79000  Trigger::cCondSequence::vf10  size=319  [class]
void Trigger::cCondSequence::vf10()
{
    if (field08() == 2) {
        int i = 0;
        current() = 0;
        if (0 < childCount()) {
            cCondition **child = children();
            do {
                if (*child != 0) {
                    (*child)->vf10();
                }
                i = i + 1;
                child = child + 1;
            } while (i < childCount());
        }
    }
    else {
        int index = current();
        if (index < 0) {
            return;
        }
        if (index < childCount() && children()[index] != 0) {
            children()[index]->vf10();
        }
    }
    if (current() < childCount()) {
        do {
            if (children()[current()] == 0) break;
            unsigned int met = children()[current()]->vf14();
            if (negate()[current()] == 1) {
                met = met ^ 1;
            }
            cCondition *child = children()[current()];
            if (met != 1) {
                child->satisfied() = 0;
                break;
            }
            child->satisfied() = 1;
            current() = current() + 1;
            int next = current();
            if (next < childCount() && children()[next] != 0) {
                children()[next]->vf0C();
                children()[current()]->vf10();
            }
        } while (current() < childCount());
    }
    if (current() < childCount()) {
        completed() = 0;
        return;
    }
    if (children()[0] != 0) {
        children()[0]->vf0C();
    }
    completed() = 1;
    current() = -1;
}

// 00C79140  Trigger::cCondSequence::vf14  size=7  [class]
int Trigger::cCondSequence::vf14()
{
    return completed();
}

// 00C79150  Trigger::cCondSequence::vf20  size=78  [class]
int Trigger::cCondSequence::vf20()
{
    int i = 0;
    int allRestarted = 1;
    if (0 < childCount()) {
        cCondition **child = children();
        do {
            if (*child != 0 && (*child)->vf20() == 0) {
                allRestarted = 0;
            }
            i = i + 1;
            child = child + 1;
        } while (i < childCount());
        if (allRestarted != 1) {
            return allRestarted;
        }
    }
    current() = 0;
    return 1;
}

// 00C84D10  Trigger::cCondSequence::vf00  size=31  [class]
Trigger::cCondSequence *Trigger::cCondSequence::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
