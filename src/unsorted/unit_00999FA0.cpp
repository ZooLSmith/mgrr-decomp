// src/unsorted/unit_00999FA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00999FA0..0099A460, 11 functions

#include "mgrr.h"

// 00999FA0  FUN_00999fa0  size=715  [run]
int __fastcall FUN_00999fa0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    if (*(char *)((int)puVar1 + 0xa1) == '\0') break;
    cVar2 = FUN_00d0d3e0(*(undefined4 *)(param_1 + 0xc),0);
    if (cVar2 == '\0') {
      cVar2 = FUN_00d0d3e0(*(undefined4 *)(param_1 + 0xc),1);
      if (cVar2 == '\0') {
        cVar2 = FUN_00cac640(1,0);
        if ((((cVar2 == '\0') && (cVar2 = FUN_00cac640(0x10000,0), cVar2 == '\0')) &&
            (cVar2 = FUN_00cac640(2,0), cVar2 == '\0')) &&
           (cVar2 = FUN_00cac640(0x20000,0), cVar2 == '\0')) {
          cVar2 = FUN_00ce12f0(0);
          if (cVar2 == '\0') {
            cVar2 = FUN_00ce1360(0);
            if ((cVar2 == '\0') && (cVar2 = FUN_00cac960(), cVar2 == '\0')) break;
            bVar3 = false;
            if (*(char *)(param_1 + 0xb) == '\0') {
              if (*(char *)(param_1 + 9) != '\0') {
                *(undefined1 *)(param_1 + 9) = 0;
                goto LAB_0099a168;
              }
              pcVar4 = (char *)(*(int *)(param_1 + 4) + 0xa0);
              *pcVar4 = *pcVar4 + '\x01';
              *(undefined1 *)(param_1 + 8) = 10;
              pcVar4 = "core_se_sys_cancel";
            }
            else {
              *(undefined1 *)(param_1 + 9) = 0xff;
              pcVar4 = (char *)(*(int *)(param_1 + 4) + 0xa0);
              *pcVar4 = *pcVar4 + '\x01';
              *(undefined1 *)(param_1 + 8) = 0xb;
              pcVar4 = "core_se_sys_cancel";
            }
          }
          else {
            pcVar4 = (char *)(*(int *)(param_1 + 4) + 0xa0);
            *pcVar4 = *pcVar4 + '\x01';
            *(undefined1 *)(param_1 + 8) = 10;
            if ((*(char *)(param_1 + 9) != '\0') || (*(char *)(param_1 + 0xb) != '\0'))
            goto LAB_0099a203;
            pcVar4 = "core_se_sys_decide_s";
          }
        }
        else {
          bVar3 = *(char *)(param_1 + 9) == '\0';
          *(bool *)(param_1 + 9) = bVar3;
LAB_0099a168:
          FUN_00999da0(bVar3);
          pcVar4 = "core_se_sys_cursor";
        }
      }
      else {
        if (*(char *)(param_1 + 9) != '\0') {
          *(undefined1 *)(param_1 + 9) = 0;
          FUN_00999da0(0);
          FUN_00e5e050("core_se_sys_cursor",0);
        }
        pcVar4 = (char *)(*(int *)(param_1 + 4) + 0xa0);
        *pcVar4 = *pcVar4 + '\x01';
        *(undefined1 *)(param_1 + 8) = 10;
        if ((*(char *)(param_1 + 9) != '\0') || (*(char *)(param_1 + 0xb) != '\0'))
        goto LAB_0099a203;
        pcVar4 = "core_se_sys_decide_s";
      }
    }
    else {
      if (*(char *)(param_1 + 9) != '\x01') {
        *(undefined1 *)(param_1 + 9) = 1;
        FUN_00999da0(1);
        FUN_00e5e050("core_se_sys_cursor",0);
      }
      pcVar4 = (char *)(*(int *)(param_1 + 4) + 0xa0);
      *pcVar4 = *pcVar4 + '\x01';
      *(undefined1 *)(param_1 + 8) = 10;
      if ((*(char *)(param_1 + 9) != '\0') || (*(char *)(param_1 + 0xb) != '\0')) goto LAB_0099a203;
      pcVar4 = "core_se_sys_decide_s";
    }
    goto LAB_0099a174;
  case 1:
    if ((*(char *)((int)puVar1 + 0xa1) == '\0') ||
       ((cVar2 = FUN_00ce12f0(0), cVar2 == '\0' &&
        (cVar2 = FUN_00d0d3e0(*(undefined4 *)(param_1 + 0xc),2), cVar2 == '\0')))) break;
    pcVar4 = (char *)(*(int *)(param_1 + 4) + 0xa0);
    *pcVar4 = *pcVar4 + '\x01';
    *(undefined1 *)(param_1 + 8) = 0xb;
LAB_0099a203:
    pcVar4 = "core_se_sys_decide_l";
LAB_0099a174:
    FUN_00e5e050(pcVar4,0);
    break;
  case 10:
    if (*(char *)((int)puVar1 + 0xa2) != '\0') {
      (**(code **)*puVar1)(1);
      *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + '\x01';
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      return *(char *)(param_1 + 9) + 1;
    }
    break;
  case 0xb:
    if (*(char *)((int)puVar1 + 0xa2) != '\0') {
      (**(code **)*puVar1)(1);
      *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + '\x01';
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      return (int)*(char *)(param_1 + 9);
    }
  }
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  return 0;
}

// 0099A290  FUN_0099a290  size=10  [run]
bool __fastcall FUN_0099a290(int param_1)

{
  return *(int *)(param_1 + 0x10) == 2;
}

// 0099A2A0  FUN_0099a2a0  size=50  [run]
undefined4 __fastcall FUN_0099a2a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00999fa0();
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  if ((*(int *)(param_1 + 0x10) != 2) && (*(int *)(param_1 + 0x10) != 1)) {
    return 0;
  }
  return 1;
}

// 0099A2E0  FUN_0099a2e0  size=12  [run]
bool FUN_0099a2e0(void)

{
  return DAT_01b3922c != 0;
}

// 0099A310  FUN_0099a310  size=11  [run]
void FUN_0099a310(void)

{
  DAT_01b3922c = 0;
  return;
}

// 0099A320  FUN_0099a320  size=41  [run]
void FUN_0099a320(void)

{
  DAT_01bea060 = DAT_01bea060 & 0xffffefff;
  DAT_01bea070 = DAT_01bea070 & 0x77dfffff;
  DAT_01bea084 = DAT_01bea084 & 0xffff8fff;
  DAT_01b3922c = 0;
  return;
}

// 0099A350  FUN_0099a350  size=26  [run]
void FUN_0099a350(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,0x18,param_2,&stack0x0000000c);
  return;
}

// 0099A390  FUN_0099a390  size=26  [run]
void FUN_0099a390(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,0x20,param_2,&stack0x0000000c);
  return;
}

// 0099A3D0  FUN_0099a3d0  size=42  [run]
uint FUN_0099a3d0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9f20;
  (**(code **)(*param_1 + 4))(&DAT_01be9f20);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0099A440  FUN_0099a440  size=29  [run]
void FUN_0099a440(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,0x80,param_2,&stack0x0000000c);
  return;
}

// 0099A460  FUN_0099a460  size=26  [run]
void FUN_0099a460(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,0x10,param_2,&stack0x0000000c);
  return;
}

