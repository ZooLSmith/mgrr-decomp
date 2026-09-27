// REFINED
// cMapInfoManager -- no RTTI; reconstructed from its one named method. Keeps map path data grouped
// into per-kind tables of 0x130-byte path entries (block +0x28 / count +0x2C, stride 0x20).
#pragma once
#include "ghidra_types.h"
#include "auto/fwd.h"

struct cMapInfoManager {
    // non-virtual members
    // 0096D700: regroups the entries of `pathArray` (data, count, capacity) by their id (+0xF8)
    // into table `index`, then frees the array.
    void sortPathData(int index, int *pathArray);

    // fields (absolute offsets from object start)
    int &pathTableData(int index)  { return *(int *)((char *)this + 0x28 + index * 0x20); }  // +0x28 + index*0x20
    unsigned int &pathTableCount(int index) { return *(unsigned int *)((char *)this + 0x2C + index * 0x20); }  // +0x2C + index*0x20
    undefined4 &heap()             { return *(undefined4 *)((char *)this + 0x324); }  // +0x324 heap for the tables
};
