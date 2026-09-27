// REFINED
// TutorialManager -- holds the name hashes of the 200 tutorial entries "tutr_b_0000".."tutr_b_0199"
// (vftable 0x016A3860).
// Refined from RTTI (no bases) and the raw decompilation of
// src/managers/tutorialmanager/TutorialManager.cpp.
#pragma once

struct TutorialManager {
    // vftable (0x016A3860), in slot order (slot = byte offset)
    virtual TutorialManager *vf00(unsigned char flags);  // +0x00  00C2DB10  scalar deleting destructor

    TutorialManager();                                   // 00C1C450
    // 015EE900: atexit destructor of the global TutorialManager instance at 0x01D61380
    // (only restores its vftable).
    static void destroyGlobalInstance();

    // fields (absolute byte offsets)
    int &field04()          { return *(int *)((char *)this + 0x04); }  // +0x04  ? (-1 at construction)
    int &field08()          { return *(int *)((char *)this + 0x08); }  // +0x08  ? (1 at construction)
    int &field0C()          { return *(int *)((char *)this + 0x0C); }  // +0x0C  ?
    int &field10()          { return *(int *)((char *)this + 0x10); }  // +0x10  ?
    int &field14()          { return *(int *)((char *)this + 0x14); }  // +0x14  ?
    int &field18()          { return *(int *)((char *)this + 0x18); }  // +0x18  ?
    int &field1C()          { return *(int *)((char *)this + 0x1C); }  // +0x1C  ?
    int *tutorialHashes()   { return (int *)((char *)this + 0x20); }   // +0x20  int[200], hash of "tutr_b_%04d"
};
