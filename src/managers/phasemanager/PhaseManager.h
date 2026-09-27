// REFINED
// PhaseManager -- no RTTI; reconstructed from its four named methods and the free functions of
// PhaseManager.cpp that take the same object in ECX. Owns the phase table (one entry per phase,
// each with its sub-phase list), the current / previous / requested phase slots, the per-sub-phase
// settings read from "p%x%02x_sub.bxm" (RoomNo, PlayerPos, CameraYaw, ...) and a queue of pending
// phase / sub-phase change requests.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "cXmlBinary.h"

struct PhaseManager {
    // A phase (or sub-phase) reference: phase id, hash of the sub-phase name (FUN_00e03ea0), name.
    // Filled by FUN_00d44f60 / FUN_00d44fb0, compared by FUN_00d45010. 0x2C bytes.
    struct PhaseSlot {
        unsigned int id;        // +0x00  0xFFFFFFFF = none; bits 0xF00 = phase group
        unsigned int hash;      // +0x04  FUN_00e03ea0(name), 0 when there is no name
        char         name[32];  // +0x08
        int          flag;      // +0x28
    };
    // One pending entry of the change queue (+0x1FC). 0x34 bytes.
    struct PhaseChangeRequest {
        PhaseSlot slot;         // +0x00
        int       isSubPhase;   // +0x2C  0 = requestPhaseChange, 1 = requestSubPhaseChange
        int       param;        // +0x30  forwarded to FUN_00d4e140 / FUN_00d4e1f0
    };
    // One sub-phase of a phase-table entry. 0x2C bytes.
    struct SubPhaseEntry {
        char         name[32];  // +0x00
        unsigned int hash;      // +0x20  FUN_00e03ea0(name)
        int          unk24;     // +0x24
        int          xmlNode;   // +0x28  its node in the sub-phase bxm (set by setDefaultData)
    };
    // One phase-table entry (array at +0x110, allocated by FUN_00d45130). 0x10 bytes.
    struct PhaseEntry {
        unsigned int   id;             // +0x00
        int            subPhaseCount;  // +0x04
        SubPhaseEntry *subPhases;      // +0x08  freed by FUN_00d45210
        int            unk0C;          // +0x0C
    };

    // non-virtual members
    // 00D45560: appends the rooms of readRoomList() (up to 10, stops at the first negative entry)
    // to `list`, then the base room of the group when none of them was one.
    void createReadRoomList(unsigned int *list, int maxCount, int *count);
    // 00D4E890: loads "p<phase>_sub.bxm" and reads the settings of the current sub-phase.
    void setDefaultData();
    // 00D58D70: selects the sub-phase `subPhaseName` (first one when null) of the current phase.
    undefined4 setSubPhaseData(char *subPhaseName);
    // 00D5ED60: selects the phase-table entry of requestPhase() and its requested sub-phase.
    undefined4 setPhaseData(undefined4 param);

    // fields (absolute offsets from object start)
    unsigned int &flags()             { return *(unsigned int *)((char *)this + 0x0); }    // +0x0  bit0: phase data set
    int &state()                      { return *(int *)((char *)this + 0x4); }             // +0x4  5, 9, 0x13, 0x14, 0x16 ...
    PhaseSlot &prevPhase()            { return *(PhaseSlot *)((char *)this + 0x8); }       // +0x8
    PhaseSlot &phase()                { return *(PhaseSlot *)((char *)this + 0x34); }      // +0x34 current phase / sub-phase name
    PhaseSlot &subPhase()             { return *(PhaseSlot *)((char *)this + 0x60); }      // +0x60 current sub-phase
    PhaseSlot &slot8C()               { return *(PhaseSlot *)((char *)this + 0x8C); }      // +0x8C ?
    PhaseSlot &requestPhase()         { return *(PhaseSlot *)((char *)this + 0xB8); }      // +0xB8 requested phase
    PhaseSlot &restartPhase()         { return *(PhaseSlot *)((char *)this + 0xE4); }      // +0xE4 copy of phase() at a restart point
    PhaseEntry *&phaseTable()         { return *(PhaseEntry **)((char *)this + 0x110); }   // +0x110
    int &phaseCount()                 { return *(int *)((char *)this + 0x114); }           // +0x114
    PhaseEntry *&currentPhaseEntry()  { return *(PhaseEntry **)((char *)this + 0x118); }   // +0x118
    SubPhaseEntry *&currentSubPhaseEntry() { return *(SubPhaseEntry **)((char *)this + 0x11C); } // +0x11C
    int &currentSubPhaseIndex()       { return *(int *)((char *)this + 0x120); }           // +0x120 -1 = none
    float *playerPos()                { return (float *)((char *)this + 0x130); }          // +0x130 float[4] "PlayerPos"
    float *playerRot()                { return (float *)((char *)this + 0x140); }          // +0x140 float[4] "PlayerRot"
    float *graPos()                   { return (float *)((char *)this + 0x150); }          // +0x150 float[4] "GraPos"
    int *readRoomList()               { return (int *)((char *)this + 0x160); }            // +0x160 int[10] from "RoomNo", -1 = end
    int &isRestartPoint()             { return *(int *)((char *)this + 0x188); }           // +0x188 "isRestartPoint" == "YES"
    int &saveRestartPos()             { return *(int *)((char *)this + 0x18C); }           // +0x18C "SaveRestartPos" == "YES"
    float *cameraYaw()                { return (float *)((char *)this + 0x190); }          // +0x190 float[4] "CameraYaw"
    int &cameraEnable()               { return *(int *)((char *)this + 0x1A0); }           // +0x1A0 "CameraEnable" == "ON"
    int &cameraXEnable()              { return *(int *)((char *)this + 0x1A4); }           // +0x1A4 "CameraXEnable" == "ON"
    int &cameraYEnable()              { return *(int *)((char *)this + 0x1A8); }           // +0x1A8 "CameraYEnable" == "ON"
    int &isPlWaitPayment()            { return *(int *)((char *)this + 0x1AC); }           // +0x1AC "isPlWaitPayment" != "YES" (1 when absent)
    void *fileLoader()                { return (char *)this + 0x1B0; }                     // +0x1B0 embedded; FUN_00de4550 / FUN_00de3540
    void *unk1B8()                    { return (char *)this + 0x1B8; }                     // +0x1B8 embedded; FUN_00e04180
    cXmlBinary *subPhaseXml()         { return (cXmlBinary *)((char *)this + 0x1D8); }     // +0x1D8 embedded sub-phase bxm
    int &flag1F8()                    { return *(int *)((char *)this + 0x1F8); }           // +0x1F8
    void *changeQueue()               { return (char *)this + 0x1FC; }                     // +0x1FC embedded queue object
    PhaseChangeRequest *&queueEntries() { return *(PhaseChangeRequest **)((char *)this + 0x200); } // +0x200
    int &queueCapacity()              { return *(int *)((char *)this + 0x204); }           // +0x204
    int &queueCount()                 { return *(int *)((char *)this + 0x208); }           // +0x208
    int &queueOwnsEntries()           { return *(int *)((char *)this + 0x20C); }           // +0x20C
};
