// src/misc/cItemPossessionWeaponGranade.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00949700..0094DA60, 22 functions

#include "types.h"

// 00949700  cItemPossessionWeaponGranade::vf48  size=3  [class]
undefined4 cItemPossessionWeaponGranade::vf48(void)

{
  return 0;
}

// 00949710  cItemPossessionWeaponGranade::vf4C  size=3  [class]
undefined4 cItemPossessionWeaponGranade::vf4C(void)

{
  return 0;
}

// 00949720  cItemPossessionWeaponGranade::vf50  size=3  [class]
undefined4 cItemPossessionWeaponGranade::vf50(void)

{
  return 0;
}

// 009497A0  cItemPossessionWeaponGranade::vf30  size=34  [class]
bool __fastcall cItemPossessionWeaponGranade::vf30(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x44))();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x24))();
  }
  return iVar1 == 0;
}

// 009497D0  cItemPossessionWeaponGranade::vf34  size=34  [class]
bool __fastcall cItemPossessionWeaponGranade::vf34(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x44))();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x24))();
  }
  return iVar1 == 0;
}

// 00949800  cItemPossessionWeaponGranade::vf38  size=34  [class]
bool __fastcall cItemPossessionWeaponGranade::vf38(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x44))();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x24))();
  }
  return iVar1 == 0;
}

// 00949830  cItemPossessionWeaponGranade::vf3C  size=3  [class]
undefined4 cItemPossessionWeaponGranade::vf3C(void)

{
  return 0;
}

// 00949840  cItemPossessionWeaponGranade::vf40  size=3  [class]
undefined4 cItemPossessionWeaponGranade::vf40(void)

{
  return 0;
}

// 00949850  cItemPossessionWeaponGranade::vf2C  size=22  [class]
bool __fastcall cItemPossessionWeaponGranade::vf2C(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x14))();
  return iVar1 <= param_1[0x15];
}

// 00949870  cItemPossessionWeaponGranade::vf44  size=17  [class]
bool __fastcall cItemPossessionWeaponGranade::vf44(int param_1)

{
  return (*(uint *)(param_1 + 4) & 0x10000) != 0;
}

// 009498B0  cItemPossessionWeaponGranade::vf54  size=38  [class]
void __thiscall cItemPossessionWeaponGranade::vf54(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x15] = param_1[0x15] + param_2;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (iVar1 < param_1[0x15]) {
    iVar1 = (**(code **)(*param_1 + 0x14))();
    param_1[0x15] = iVar1;
  }
  return;
}

// 00949B40  cItemPossessionWeaponGranade::vf00  size=6  [class]
char * cItemPossessionWeaponGranade::vf00(void)

{
  return "cItemPossessionWeaponGranade";
}

// 00949B50  cItemPossessionWeaponGranade::vf10  size=6  [class]
char * cItemPossessionWeaponGranade::vf10(void)

{
  return "cItemPossessionBase";
}

// 00949BA0  cItemPossessionWeaponGranade::vf08  size=19  [class]
void __thiscall cItemPossessionWeaponGranade::vf08(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x44);
  return;
}

// 00949BC0  cItemPossessionWeaponGranade::vf14  size=17  [class]
undefined4 __fastcall cItemPossessionWeaponGranade::vf14(int param_1)

{
  if (DAT_01bea024 == 0xb) {
    return *(undefined4 *)(param_1 + 0x5c);
  }
  return *(undefined4 *)(param_1 + 0x58);
}

// 0094C9D0  cItemPossessionWeaponGranade::cItemPossessionWeaponGranade  size=46  [class]
undefined4 * cItemPossessionWeaponGranade::cItemPossessionWeaponGranade(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x60,&DAT_01b7bd48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x14] = 0;
    puVar1[1] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *puVar1 = vftable;
    puVar1[0x17] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0094D820  cItemPossessionWeaponGranade::vf1C  size=78  [class]
void __fastcall cItemPossessionWeaponGranade::vf1C(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x14);
  param_1[0x15] = param_1[0x15] + 1;
  param_1[1] = param_1[1] & 0xfffeffff;
  iVar2 = (*pcVar1)();
  if (iVar2 < param_1[0x15]) {
    iVar2 = (**(code **)(*param_1 + 0x14))();
    param_1[0x15] = iVar2;
    return;
  }
  uVar3 = FUN_0094aa20(param_1[4],0);
  FUN_00cbac80(1,uVar3);
  FUN_00e5e050("core_se_sys_item_get",0);
  return;
}

// 0094D870  cItemPossessionWeaponGranade::vf18  size=88  [class]
void __thiscall cItemPossessionWeaponGranade::vf18(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x14);
  param_1[1] = param_1[1] & 0xfffeffff;
  param_1[0x15] = param_1[0x15] + param_2;
  iVar2 = (*pcVar1)();
  if (iVar2 < param_1[0x15]) {
    iVar2 = (**(code **)(*param_1 + 0x14))();
    param_1[0x15] = iVar2;
    return;
  }
  uVar3 = FUN_0094aa20(param_1[4],0);
  FUN_00cbac80(param_2,uVar3);
  FUN_00e5e050("core_se_sys_item_get",0);
  return;
}

// 0094D8D0  cItemPossessionWeaponGranade::vf24  size=25  [class]
void __fastcall cItemPossessionWeaponGranade::vf24(int param_1)

{
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  if (*(int *)(param_1 + 0x54) < 1) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

// 0094D8F0  cItemPossessionWeaponGranade::vf20  size=31  [class]
void __thiscall cItemPossessionWeaponGranade::vf20(int param_1,int param_2)

{
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - param_2;
  if (*(int *)(param_1 + 0x54) < 1) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

// 0094D910  cItemPossessionWeaponGranade::vf28  size=58  [class]
void __thiscall cItemPossessionWeaponGranade::vf28(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x15] = param_2;
  if (param_2 == 0) {
    param_1[1] = param_1[1] | 0x10000;
  }
  else {
    param_1[1] = param_1[1] & 0xfffeffff;
  }
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (iVar1 < param_1[0x15]) {
    iVar1 = (**(code **)(*param_1 + 0x14))();
    param_1[0x15] = iVar1;
  }
  return;
}

// 0094DA60  cItemPossessionWeaponGranade::vf04  size=75  [class]
undefined4 * __thiscall cItemPossessionWeaponGranade::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cItemBase::vftable;
  if (param_1[0x14] != 0) {
    FUN_00a805f0();
    param_1[0x14] = 0;
  }
  *param_1 = cItemBase::vftable;
  if (param_1[0x14] != 0) {
    FUN_00a805f0();
    param_1[0x14] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

