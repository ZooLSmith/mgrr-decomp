// REFINED
// Pl0010 -- no RTTI type of this name exists; the name comes from the debug string
// "Pl0010::GroundTest" passed by the one function of Pl0010.cpp.  The object is the player
// (RTTI: Pl0000), so Pl0010 is declared here as a view of Pl0000 that adds GroundTest and the
// ground-test fields it uses (absolute offsets from the object start).
#pragma once
#include "Pl0000.h"
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct Pl0010 : public Pl0000 {
    // non-virtual members
    // 00B95720: casts the ground shape (radius from +0x764 -> +0xFC) downwards, stores the ground
    // hit / distance and updates the ground support of both feet.
    void GroundTest();

    // fields (absolute offsets from object start)
    char  *groundQuery4160()   { return (char *)this + 0x4160; }               // +0x4160 query object of the 1st part (Behavior::updateGroundSupportForParts)
    char  *groundQuery4164()   { return (char *)this + 0x4164; }               // +0x4164 query object of the 2nd part
    float *groundPos()         { return (float *)((char *)this + 0x41C0); }    // +0x41C0 float[4] ground hit position (minus the cast offset)
    float *groundNormal()      { return (float *)((char *)this + 0x41D0); }    // +0x41D0 float[4] ground hit normal
    int   &groundHit()         { return *(int *)((char *)this + 0x41E0); }     // +0x41E0 1 = the cast hit the ground
    float &groundHitDistance() { return *(float *)((char *)this + 0x41E4); }   // +0x41E4 distance to the hit (0 when no hit)
    float &groundMissDistance(){ return *(float *)((char *)this + 0x41E8); }   // +0x41E8 signed distance to groundPos when no hit
    int   &field41EC()         { return *(int *)((char *)this + 0x41EC); }     // +0x41EC cleared before each cast
    char  *groundCollector()   { return (char *)this + 0x50A0; }               // +0x50A0 cast collector object (vftable; slot 0x8 = reset)
    char *&groundHits()        { return *(char **)((char *)this + 0x50B0); }   // +0x50B0 hit array (0x30-byte hits) = collector+0x10
    int   &groundHitCount()    { return *(int *)((char *)this + 0x50B4); }     // +0x50B4 hit count = collector+0x14
};
