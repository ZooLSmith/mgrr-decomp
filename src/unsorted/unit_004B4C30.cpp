// src/unsorted/unit_004B4C30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004B4C30..004B4C60, 2 functions

#include "types.h"

// 004B4C30  FUN_004b4c30  size=40  [run]
void FUN_004b4c30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 != 0) {
    Animation::Motion::Node::setLocalPlaybackRate(param_1,param_2);
  }
  return;
}

// 004B4C60  FUN_004b4c60  size=40  [run]
void FUN_004b4c60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 != 0) {
    Animation::Motion::Unit::setCurrentTimeSlide(param_1,param_2);
  }
  return;
}

