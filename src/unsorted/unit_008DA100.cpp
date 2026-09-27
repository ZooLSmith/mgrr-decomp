// src/unsorted/unit_008DA100.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DA100..008DA100, 1 functions

#include "mgrr.h"

// 008DA100  FUN_008da100  size=679  [run]
undefined4 __thiscall FUN_008da100(int param_1,int *param_2)

{
  char cVar1;
  char *_Src;
  int unaff_ESI;
  
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_0164a424,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1);
    (**(code **)(*param_2 + 0x14))(&DAT_0164a424,7);
  }
  FUN_008da080(param_2,"name4",&stack0xfffffff4);
  if (unaff_ESI == 0) {
    _Src = "";
  }
  else {
    _Src = *(char **)(unaff_ESI + 0x14);
  }
  _strcpy_s((char *)(param_1 + 8),5,_Src);
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_0164a414,7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x10);
    (**(code **)(*param_2 + 0x14))(&DAT_0164a414,7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("interpolate",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x14);
    (**(code **)(*param_2 + 0x14))("interpolate",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("startFrame",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x18);
    (**(code **)(*param_2 + 0x14))("startFrame",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("cancelStartFrame",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x1c);
    (**(code **)(*param_2 + 0x14))("cancelStartFrame",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("cancelValidFrame",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x20);
    (**(code **)(*param_2 + 0x14))("cancelValidFrame",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("cancelToFreeFall",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x24);
    (**(code **)(*param_2 + 0x14))("cancelToFreeFall",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("cancelToLanding",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x28);
    (**(code **)(*param_2 + 0x14))("cancelToLanding",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("YTranslateEaseOff",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x2c);
    (**(code **)(*param_2 + 0x14))("YTranslateEaseOff",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("ZTranslateEaseOff",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x30);
    (**(code **)(*param_2 + 0x14))("ZTranslateEaseOff",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("mirror",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x34);
    (**(code **)(*param_2 + 0x14))("mirror",7);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("other",8);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x28))(param_1 + 0x38);
    (**(code **)(*param_2 + 0x14))("other",8);
  }
  if (unaff_ESI != 0) {
    FUN_008d98a0(unaff_ESI);
  }
  return 1;
}

