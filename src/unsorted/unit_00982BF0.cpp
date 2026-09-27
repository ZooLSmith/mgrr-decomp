// src/unsorted/unit_00982BF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00982BF0..009832C0, 14 functions

#include "types.h"

// 00982BF0  FUN_00982bf0  size=182  [run]
void __thiscall FUN_00982bf0(int param_1,float param_2,float param_3,int param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  
  if (param_5 != (int *)0x0) {
    if ((((byte)DAT_01b7b79c & 1) != 0) || (((byte)DAT_01b7b798 & 1) == 0)) {
      *param_5 = 0;
      return;
    }
    fVar1 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x28);
    fVar2 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x2c);
    if (*param_5 == 0) {
      if ((param_4 == 0) || (param_4 == 1)) {
        if (param_2 < fVar1) {
          *param_5 = 3;
          return;
        }
        if (fVar1 < -param_2) {
          *param_5 = 4;
          return;
        }
      }
      if ((param_4 == 0) || (param_4 == 2)) {
        if (param_3 < fVar2) {
          *param_5 = 1;
          return;
        }
        if (fVar2 < -param_3) {
          *param_5 = 2;
          return;
        }
      }
    }
  }
  return;
}

// 00982CF0  FUN_00982cf0  size=87  [run]
void __fastcall FUN_00982cf0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0x3c);
    do {
      *piVar1 = (int)(piVar1 + -0x20);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x11;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0x44) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00982DF0  FUN_00982df0  size=48  [run]
undefined4 __thiscall FUN_00982df0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (iVar1 == *(int *)(param_1 + 0x1c)) {
      return 0;
    }
    if (*(int *)(iVar1 + 4) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x40);
  }
  *(undefined4 *)(iVar1 + 0x38) = param_3;
  return 1;
}

// 00982E20  FUN_00982e20  size=131  [run]
undefined4 __thiscall FUN_00982e20(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (iVar1 == *(int *)(param_1 + 0x1c)) {
      return 0;
    }
    if (*(int *)(iVar1 + 4) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x40);
  }
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
  return 1;
}

// 00982F00  FUN_00982f00  size=39  [run]
undefined4 __thiscall FUN_00982f00(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (iVar1 == *(int *)(param_1 + 0x1c)) {
      return 0;
    }
    if (*(int *)(iVar1 + 4) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x40);
  }
  return *(undefined4 *)(iVar1 + 0x10);
}

// 00982F30  FUN_00982f30  size=52  [run]
undefined4 __thiscall FUN_00982f30(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = 0;
  if (iVar2 != *(int *)(param_1 + 0x1c)) {
    while (*(int *)(iVar2 + 4) != param_2) {
      iVar2 = *(int *)(iVar2 + 0x40);
      if (iVar2 == *(int *)(param_1 + 0x1c)) {
        return uVar1;
      }
    }
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x34) = param_3;
    uVar1 = 1;
  }
  return uVar1;
}

// 00982F70  FUN_00982f70  size=37  [run]
void __thiscall FUN_00982f70(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != *(int *)(param_1 + 0x1c)) {
    do {
      *(undefined4 *)(iVar1 + 0x34) = param_2;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      iVar1 = *(int *)(iVar1 + 0x40);
    } while (iVar1 != *(int *)(param_1 + 0x1c));
  }
  return;
}

// 00982FD0  FUN_00982fd0  size=55  [run]
undefined4 __thiscall FUN_00982fd0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (iVar1 == *(int *)(param_1 + 0x1c)) {
      return 0;
    }
    if (*(int *)(iVar1 + 4) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x40);
  }
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return 1;
}

// 00983030  FUN_00983030  size=97  [run]
undefined4 __thiscall FUN_00983030(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x44 + 0x44,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0x44 + iVar1;
  FUN_00982cf0();
  return 1;
}

// 009830A0  FUN_009830a0  size=96  [run]
void __fastcall FUN_009830a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1[1] != 0) {
    puVar1 = (undefined4 *)param_1[6];
    for (puVar2 = (undefined4 *)param_1[5]; puVar2 != puVar1; puVar2 = (undefined4 *)puVar2[0x10]) {
      (**(code **)*puVar2)(0);
    }
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 009831F0  FUN_009831f0  size=25  [run]
undefined4 FUN_009831f0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 1) {
    return 0;
  }
  uVar1 = FUN_00983030();
  return uVar1;
}

// 00983210  FUN_00983210  size=58  [run]
void __fastcall FUN_00983210(int param_1)

{
  FUN_009830a0();
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

// 00983250  FUN_00983250  size=97  [run]
void __fastcall FUN_00983250(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x1c);
    for (puVar2 = *(undefined4 **)(param_1 + 0x18); puVar2 != puVar1;
        puVar2 = (undefined4 *)puVar2[0x10]) {
      (**(code **)*puVar2)(0);
    }
    FUN_00982cf0();
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

// 009832C0  FUN_009832c0  size=491  [run]
void __thiscall FUN_009832c0(int param_1,int param_2)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  pfVar1 = (float *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x40);
  *(float *)(param_1 + 0x38) = *pfVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  *pfVar1 = *(float *)(param_1 + 0x28);
  fVar9 = (float10)FUN_00cad4f0();
  *(float *)(param_1 + 0x28) = (float)fVar9;
  fVar9 = (float10)FUN_00cad560();
  *(float *)(param_1 + 0x2c) = (float)fVar9;
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != *(int *)(param_1 + 0x1c)) {
    do {
      uVar6 = FUN_00982ab0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),pfVar1,4)
      ;
      switch(uVar6) {
      case 1:
      case 3:
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
      case 2:
      case 4:
        iVar3 = *(int *)(iVar8 + 4);
        if (iVar3 != -1) {
          if (*(int *)(iVar8 + 0x10) != 1) {
            fVar4 = 0.0;
            uVar7 = *(uint *)(iVar8 + 8) & 1;
            if (uVar7 != 0) {
              fVar4 = ABS(*(float *)(iVar8 + 0x20) - *(float *)(iVar8 + 0x18));
            }
            fVar5 = 0.0;
            fVar4 = fVar4 * 0.05;
            if (uVar7 != 0) {
              fVar5 = ABS(*(float *)(iVar8 + 0x24) - *(float *)(iVar8 + 0x1c));
            }
            fVar5 = fVar5 * 0.05;
            if (fVar4 < 2.0) {
              fVar4 = 2.0;
            }
            if (fVar5 < 2.0) {
              fVar5 = 2.0;
            }
            FUN_00982bf0(fVar4,fVar5,*(undefined4 *)(iVar8 + 0x38),param_1 + 0x5c);
          }
          if (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 8)) {
            piVar2 = (int *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc) * 4);
            if (piVar2 != (int *)0x0) {
              *piVar2 = iVar3;
            }
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
          }
        }
      }
      iVar8 = *(int *)(iVar8 + 0x40);
    } while (iVar8 != *(int *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x10) < 1) {
    piVar2 = (int *)(param_1 + 0x58);
    if (piVar2 != (int *)0x0) {
      if ((((byte)DAT_01b7b79c & 1) == 0) && (((byte)DAT_01b7b798 & 1) != 0)) {
        fVar4 = *pfVar1 - *(float *)(param_1 + 0x28);
        fVar5 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x2c);
        if (*piVar2 == 0) {
          if (fVar4 <= 50.0) {
            if (fVar4 < -50.0) {
              *piVar2 = 4;
            }
            else if (fVar5 <= 50.0) {
              if (fVar5 < -50.0) {
                *piVar2 = 2;
              }
            }
            else {
              *piVar2 = 1;
            }
          }
          else {
            *piVar2 = 3;
          }
        }
      }
      else {
        *piVar2 = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

