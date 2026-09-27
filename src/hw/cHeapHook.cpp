// src/hw/cHeapHook.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD3300..00DD5090, 6 functions

#include "types.h"

// 00DD3300  Hw::cHeapHook::vf04  size=3  [class]
void Hw::cHeapHook::vf04(void)

{
  return;
}

// 00DD3310  Hw::cHeapHook::vf08  size=3  [class]
void Hw::cHeapHook::vf08(void)

{
  return;
}

// 00DD3320  Hw::cHeapHook::vf0C  size=3  [class]
void Hw::cHeapHook::vf0C(void)

{
  return;
}

// 00DD3330  Hw::cHeapHook::vf10  size=3  [class]
void Hw::cHeapHook::vf10(void)

{
  return;
}

// 00DD3340  Hw::cHeapHook::vf14  size=3  [class]
void Hw::cHeapHook::vf14(void)

{
  return;
}

// 00DD5090  Hw::cHeapHook::vf00  size=35  [class]
undefined4 * __thiscall Hw::cHeapHook::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    (**(code **)(*(int *)param_1[-1] + 0x3c))(param_1,0);
  }
  return param_1;
}

