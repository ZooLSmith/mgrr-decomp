// src/unsorted/unit_00D4ADB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4ADB0..00D4B1B0, 7 functions

#include "types.h"

// 00D4ADB0  FUN_00d4adb0  size=73  [run]
undefined4 FUN_00d4adb0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_40 [15];
  
  iVar1 = FUN_00a7f600(0x40010);
  if (iVar1 != 0) {
    puVar2 = local_40;
    local_40[0] = 0xc;
    FUN_00a7c8a0(puVar2);
    FUN_00a9d720(puVar2);
    return 1;
  }
  return 0;
}

// 00D4AE00  FUN_00d4ae00  size=73  [run]
undefined4 FUN_00d4ae00(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_40 [15];
  
  iVar1 = FUN_00a7f600(0x40010);
  if (iVar1 != 0) {
    puVar2 = local_40;
    local_40[0] = 0xd;
    FUN_00a7c8a0(puVar2);
    FUN_00a9d720(puVar2);
    return 1;
  }
  return 0;
}

// 00D4AF00  FUN_00d4af00  size=63  [run]
undefined4 FUN_00d4af00(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_40 [15];
  
  iVar1 = FUN_00a7f600(0x20030);
  puVar2 = local_40;
  if (iVar1 != 0) {
    local_40[0] = 0xe;
    FUN_00a7c8a0(local_40);
    FUN_00a9d720(puVar2);
  }
  return 1;
}

// 00D4AF50  FUN_00d4af50  size=1  [run]
void FUN_00d4af50(void)

{
  return;
}

// 00D4AF60  FUN_00d4af60  size=350  [run]
void __fastcall FUN_00d4af60(int *param_1)

{
  char cVar1;
  int iVar2;
  float unaff_ESI;
  float unaff_EDI;
  float fVar3;
  float afStack_88 [2];
  undefined4 uStack_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    FUN_00a8d6c0(param_1 + 0x10);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    goto LAB_00d4af99;
  }
  param_1[0x187] = param_1[0x187] + 1;
LAB_00d4af99:
  FUN_00a8d790(&local_7c);
  if (param_1[0x202] != 0) {
    cVar1 = FUN_00c9db20(0);
    iVar2 = FUN_00a97e60(0x3fc00000,0);
    if ((iVar2 != 0) && (cVar1 != '\0')) {
      FUN_009fdde0();
      return;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  local_60 = local_7c;
  local_5c = local_78;
  local_58 = local_74;
  local_54 = 0x3f800000;
  FUN_00a8e880(&local_60);
  fVar3 = 0.0;
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35);
  uStack_80 = 0;
  local_7c = 0;
  local_78 = (float)param_1[0x37a] * 0.3;
  D3DXMatrixRotationY(&local_60,param_1[0x25]);
  D3DXVec3TransformNormal(afStack_88,afStack_88,auStack_68);
  param_1[0x14] = (int)((float)param_1[0x14] + fVar3);
  param_1[0x15] = (int)((float)param_1[0x15] + unaff_EDI);
  param_1[0x16] = (int)((float)param_1[0x16] + unaff_ESI);
  param_1[0x17] = (int)((float)param_1[0x17] + afStack_88[0]);
  return;
}

// 00D4B140  FUN_00d4b140  size=24  [run]
void __fastcall FUN_00d4b140(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  return;
}

// 00D4B1B0  FUN_00d4b1b0  size=7  [run]
float10 __fastcall FUN_00d4b1b0(int param_1)

{
  return (float10)*(float *)(param_1 + 0xb4);
}

