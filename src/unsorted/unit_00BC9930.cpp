// src/unsorted/unit_00BC9930.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BC9930..00BC9930, 1 functions

#include "mgrr.h"

// 00BC9930  FUN_00bc9930  size=828  [run]
byte __thiscall FUN_00bc9930(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte unaff_DI;
  byte bVar12;
  
  bVar3 = 0x98;
  cVar1 = (**(code **)(*param_2 + 0x10))("kLowerLimitOfWalk",0xb);
  if (cVar1 == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x14c);
    (**(code **)(*param_2 + 0x14))("kLowerLimitOfWalk",0xb);
  }
  bVar4 = 0x84;
  cVar1 = (**(code **)(*param_2 + 0x10))("kLimitOfRotation",0xb);
  if (cVar1 == '\0') {
    unaff_DI = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x150);
    (**(code **)(*param_2 + 0x14))("kLimitOfRotation",0xb);
  }
  bVar5 = 0x68;
  cVar1 = (**(code **)(*param_2 + 0x10))("kThresholdAngleOfRotation",0xb);
  if (cVar1 == '\0') {
    bVar3 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x154);
    (**(code **)(*param_2 + 0x14))("kThresholdAngleOfRotation",0xb);
  }
  bVar6 = 0x50;
  cVar1 = (**(code **)(*param_2 + 0x10))("kEaseInAngleOfRotation",0xb);
  if (cVar1 == '\0') {
    bVar4 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x158);
    (**(code **)(*param_2 + 0x14))("kEaseInAngleOfRotation",0xb);
  }
  bVar7 = 0x3c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxVelocityOfJump",0xb);
  if (cVar1 == '\0') {
    bVar5 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x15c);
    (**(code **)(*param_2 + 0x14))("kMaxVelocityOfJump",0xb);
  }
  bVar8 = 0x28;
  cVar1 = (**(code **)(*param_2 + 0x10))("kNeedHeightFreeFall",0xb);
  if (cVar1 == '\0') {
    bVar6 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x160);
    (**(code **)(*param_2 + 0x14))("kNeedHeightFreeFall",0xb);
  }
  bVar9 = 0x10;
  cVar1 = (**(code **)(*param_2 + 0x10))("kDeclineRateForFreeFall",0xb);
  if (cVar1 == '\0') {
    bVar7 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x164);
    (**(code **)(*param_2 + 0x14))("kDeclineRateForFreeFall",0xb);
  }
  bVar10 = 0xf0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kNinjaRunInterpolateTurnRate",0xb);
  if (cVar1 == '\0') {
    bVar8 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x168);
    (**(code **)(*param_2 + 0x14))("kNinjaRunInterpolateTurnRate",0xb);
  }
  bVar12 = 0xcc;
  cVar1 = (**(code **)(*param_2 + 0x10))("kNinjaRunInterpolateTurnMaxAngle",0xb);
  if (cVar1 == '\0') {
    bVar9 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x16c);
    (**(code **)(*param_2 + 0x14))("kNinjaRunInterpolateTurnMaxAngle",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("kParkourInterpolateTurnRate",0xb);
  if (cVar1 == '\0') {
    bVar10 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x170);
    (**(code **)(*param_2 + 0x14))("kParkourInterpolateTurnRate",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("kParkourInterpolateTurnMaxAngle",0xb);
  if (cVar1 == '\0') {
    bVar12 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x174);
    (**(code **)(*param_2 + 0x14))("kParkourInterpolateTurnMaxAngle",0xb);
  }
  bVar11 = FUN_00bbce40(param_2,"freerun",param_1);
  return bVar11 & bVar12 &
         bVar2 & 1 & unaff_DI & bVar3 & bVar4 & bVar5 & bVar6 & bVar7 & bVar8 & bVar9 & bVar10;
}

