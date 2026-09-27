// REFINED
// Trigger::cCondPhaseJump -- trigger condition "phase jump" (condition type 10). Its file also
// holds the condition factory (00C980D0) that builds any Trigger::cCondition from a trigger record.
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016A8958) and the raw decompilation
// of src/managers/triggermanager/cCondPhaseJump.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). The base header is not included here to
// keep this header self-contained; the only base field used is at +0x04 (the condition record).
class cCondPhaseJump /* : public cCondition */ {
public:
    // vftable, in slot order (slot = byte offset)
    virtual cCondPhaseJump *vf00(unsigned char flags);  // +0x00  scalar deleting destructor
    virtual void vf04();                                 // +0x04
    virtual void vf08();                                 // +0x08
    virtual int vf0C();                                  // +0x0C  always 1
    virtual void vf10();                                 // +0x10
    virtual unsigned int vf14();                         // +0x14  bit 8 of DAT_018b9140
    virtual int vf18();                                  // +0x18  always 0
    virtual void vf1C(int *record);                      // +0x1C  stores the condition record (+0x04)
    virtual int vf20();                                  // +0x20  inherited Trigger::cCondition::vf20 (00C77C80)

    // 00C980D0: allocates and initialises the condition class selected by record[1]
    // (the condition type), hands it the record via vf1C and returns it (NULL for unknown types).
    static int *createFromRecord(int *record);
};

} // namespace Trigger
