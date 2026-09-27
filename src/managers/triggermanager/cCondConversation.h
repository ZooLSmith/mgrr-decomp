// REFINED
// Trigger::cCondConversation -- trigger condition: conversation (vf14 always returns 0).
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016A92AC) and the raw decompilation
// of src/managers/triggermanager/cCondConversation.cpp.
#pragma once

namespace Trigger {

// RTTI base: Trigger::cCondition. No refined cCondition header exists, so the base is not
// declared here; its fields (+0x04 record, +0x08, +0x0C) are accessed raw in the .cpp.
class cCondConversation /* : public cCondition */ {
public:
    // vftable (0x016A92AC), in slot order (slot = byte offset)
    virtual cCondConversation *vf00(unsigned char flags);  // +0x00  00C85AD0  scalar deleting destructor
    virtual void vf04();                                   // +0x04  00C77C20  inherited Trigger::cCondPhaseJump::vf04
    virtual void vf08();                                   // +0x08  00C77C30  inherited Trigger::cCondPhaseJump::vf08
    virtual int vf0C();                                    // +0x0C  00C7ADD0
    virtual void vf10();                                   // +0x10  00C77C50  inherited Trigger::cCondPhaseJump::vf10
    virtual int vf14();                                    // +0x14  00C7ADE0
    virtual int vf18();                                    // +0x18  00C77C60  inherited Trigger::cCondPhaseJump::vf18
    virtual void vf1C(int *record);                        // +0x1C  00C7ADF0
    virtual int vf20();                                    // +0x20  00C77C80  inherited Trigger::cCondition::vf20
};

} // namespace Trigger
