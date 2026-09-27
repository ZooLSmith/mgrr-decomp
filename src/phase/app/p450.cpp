// src/phase/app/p450.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D49330..00D6D140, 7 functions

#include "types.h"

// 00D49330  cP450::vf14  size=3  [class]
void cP450::vf14(void)

{
  return;
}

// 00D49340  cP450::vf1C  size=3  [class]
void cP450::vf1C(void)

{
  return;
}

// 00D49350  cP450::vf18  size=1  [class]
void cP450::vf18(void)

{
  return;
}

// 00D49360  cP450::vf08  size=1  [class]
void cP450::vf08(void)

{
  return;
}

// 00D49370  cP450::vf0C  size=1  [class]
void cP450::vf0C(void)

{
  return;
}

// 00D49380  cP450::vf10  size=1  [class]
void cP450::vf10(void)

{
  return;
}

// 00D6D140  cP450::vf00  size=54  [class]
undefined4 * __thiscall cP450::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

