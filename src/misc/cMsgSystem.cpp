// src/misc/cMsgSystem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE4B00..00CE4B00, 1 functions

#include "mgrr.h"
#include "cMsgSystem.h"

// 00CE4B00  cMsgSystem::vf00  size=30  [class]
undefined4 __thiscall cMsgSystem::vf00(undefined4 param_1,byte param_2)

{
  cMsgCtrl::cMsgCtrl_4();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

