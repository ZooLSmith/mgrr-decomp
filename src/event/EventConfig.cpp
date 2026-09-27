// src/event/EventConfig.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00931A40..00931A40, 1 functions

#include "types.h"

// 00931A40  EventConfig::getMoviePath  size=602  [class]
bool EventConfig::getMoviePath(char *param_1,rsize_t param_2,int *param_3,char *param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  if (*param_3 != 0) {
    return false;
  }
  piVar2 = (int *)FUN_00e678d0(0,0xc000,0xffffffff);
  if (((*param_3 == *piVar2) && (param_3[1] == piVar2[1])) && (param_3[2] == piVar2[2])) {
LAB_00931b38:
    if (param_4 != (char *)0x0) {
      iVar4 = FUN_009c57e0(6);
      if (iVar4 != 0) {
        pcVar5 = (char *)FUN_009c57e0(6);
        _strcpy_s(param_4,param_2,pcVar5);
        FUN_00dd5650("EventConfig::getMoviePath %s",param_4);
      }
    }
  }
  else {
    piVar2 = (int *)FUN_00e678d0(0,0xc020,0xffffffff);
    if (((*param_3 == *piVar2) && (param_3[1] == piVar2[1])) && (param_3[2] == piVar2[2]))
    goto LAB_00931b38;
    piVar2 = (int *)FUN_00e678d0(0,0xc030,0xffffffff);
    if (((*param_3 == *piVar2) && (param_3[1] == piVar2[1])) && (param_3[2] == piVar2[2]))
    goto LAB_00931b38;
    uVar3 = FUN_00e678d0(0,0xc040,0xffffffff);
    cVar1 = FUN_00559c70(uVar3);
    if (cVar1 != '\0') goto LAB_00931b38;
    uVar3 = FUN_00e678d0(0,0xc050,0xffffffff);
    cVar1 = FUN_00559c70(uVar3);
    if (cVar1 != '\0') goto LAB_00931b38;
    uVar3 = FUN_00e678d0(0,0xc060,0xffffffff);
    cVar1 = FUN_00559c70(uVar3);
    if (cVar1 != '\0') goto LAB_00931b38;
  }
  piVar2 = (int *)FUN_00e678d0(0,0xd010,0xffffffff);
  if (((*param_3 != *piVar2) || (param_3[1] != piVar2[1])) || (param_3[2] != piVar2[2])) {
    piVar2 = (int *)FUN_00e678d0(0,0xd000,0xffffffff);
    if (((*param_3 != *piVar2) || (param_3[1] != piVar2[1])) || (param_3[2] != piVar2[2])) {
      piVar2 = (int *)FUN_00e678d0(0,0xd020,0xffffffff);
      if (((*param_3 != *piVar2) || (param_3[1] != piVar2[1])) || (param_3[2] != piVar2[2])) {
        uVar3 = FUN_00e678d0(0,0xd030,0xffffffff);
        cVar1 = FUN_00559c70(uVar3);
        if (cVar1 == '\0') {
          uVar3 = FUN_00e678d0(0,0xd040,0xffffffff);
          cVar1 = FUN_00559c70(uVar3);
          if (cVar1 == '\0') {
            uVar3 = FUN_00e678d0(0,0xd050,0xffffffff);
            cVar1 = FUN_00559c70(uVar3);
            if (cVar1 == '\0') goto LAB_00931c70;
          }
        }
      }
    }
  }
  if (param_4 != (char *)0x0) {
    iVar4 = FUN_009c57e0(7);
    if (iVar4 != 0) {
      pcVar5 = (char *)FUN_009c57e0(7);
      _strcpy_s(param_4,param_2,pcVar5);
      FUN_00dd5650("EventConfig::getMoviePath %s",param_4);
    }
  }
LAB_00931c70:
  _sprintf_s(param_1,param_2,"movie/ev%04x.usm",param_3[1]);
  iVar4 = FUN_00dec390(param_1);
  return iVar4 != 0;
}

