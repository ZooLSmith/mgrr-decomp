// src/unsorted/unit_00A6C720.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6C720..00A6C950, 4 functions

#include "types.h"

// 00A6C720  FUN_00a6c720  size=108  [run]
byte __thiscall FUN_00a6c720(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  FUN_00a6c680(param_2,&DAT_01662d6c,param_1);
  bVar3 = 0xb;
  cVar1 = (**(code **)(*param_2 + 0x10))("radius");
  if (cVar1 != '\0') {
    bVar2 = (**(code **)(*param_2 + 0x1c))(param_1 + 0xd0);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
    return bVar2 & bVar3;
  }
  return 0;
}

// 00A6C790  FUN_00a6c790  size=210  [run]
byte __thiscall FUN_00a6c790(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte unaff_BL;
  byte bVar5;
  
  bVar1 = FUN_00a6c680(param_2,&DAT_01662d6c,param_1);
  bVar2 = FUN_00a6a060(param_2,"baseOffset",param_1 + 0x110);
  bVar3 = FUN_00a6a060(param_2,"baseRotation",param_1 + 0x120);
  cVar4 = (**(code **)(*param_2 + 0x10))("radius",0xb);
  if (cVar4 == '\0') {
    unaff_BL = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x130);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
  }
  bVar5 = 0xb;
  cVar4 = (**(code **)(*param_2 + 0x10))("height");
  if (cVar4 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x134);
    (**(code **)(*param_2 + 0x14))("height",0xb);
    return bVar5 & bVar1 & bVar2 & bVar3 & unaff_BL;
  }
  return 0;
}

// 00A6C870  FUN_00a6c870  size=210  [run]
byte __thiscall FUN_00a6c870(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte unaff_BL;
  byte bVar5;
  
  bVar1 = FUN_00a6c680(param_2,&DAT_01662d6c,param_1);
  bVar2 = FUN_00a6a060(param_2,"baseOffset",param_1 + 0x130);
  bVar3 = FUN_00a6a060(param_2,"baseRotation",param_1 + 0x140);
  cVar4 = (**(code **)(*param_2 + 0x10))("radius",0xb);
  if (cVar4 == '\0') {
    unaff_BL = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x150);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
  }
  bVar5 = 0xb;
  cVar4 = (**(code **)(*param_2 + 0x10))("height");
  if (cVar4 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x154);
    (**(code **)(*param_2 + 0x14))("height",0xb);
    return bVar5 & bVar1 & bVar2 & bVar3 & unaff_BL;
  }
  return 0;
}

// 00A6C950  FUN_00a6c950  size=52  [run]
byte __thiscall FUN_00a6c950(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_00a6c680(param_2,&DAT_01662d6c,param_1);
  bVar2 = FUN_00a6a060(param_2,"extent",param_1 + 0xd0);
  return bVar2 & bVar1;
}

