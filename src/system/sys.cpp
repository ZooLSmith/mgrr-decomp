// src/system/sys.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

// Local declarations: nothing in include/ declares these yet.
namespace sys {
unsigned int String();
}

extern char DAT_01dda6a0;          // 0x01DDA6A0: set to 1 once the sys::String heap has been created
extern unsigned int DAT_01b7bcf0;  // 0x01B7BCF0: parent heap object passed to the create call (?)

// Hw::cHeapVariable::vf40 (0x00DD39D0) -- no class declaration exists for Hw::cHeapVariable, so it
// is called through its address. Arguments are exactly as the raw decompilation shows them
// (Ghidra lists it as __thiscall; the ECX/stack split of these three values is unverified). // ?
typedef int (*HeapVariableVf40Fn)(unsigned int size, void *parentHeap, const char *name);
#define Hw_cHeapVariable_vf40 ((HeapVariableVf40Fn)0x00DD39D0)

// 00E91360  sys::String  size=52  [class]
unsigned int sys::String()
{
  if (DAT_01dda6a0 == '\0') {
    int created = Hw_cHeapVariable_vf40(0x4cc20, &DAT_01b7bcf0, "sys::String");
    if (created != 0) {
      DAT_01dda6a0 = 1;
      return 1;
    }
  }
  return 0;
}
