// src/unsorted/unit_00586670.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00586670..00588340, 5 functions

#include "mgrr.h"

// 00586670  FUN_00586670  size=190  [run]
void __thiscall FUN_00586670(int *param_1,int param_2)

{
  int iVar1;
  float fStack_74;
  undefined1 auStack_68 [8];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 auStack_50 [76];
  
  local_60 = *(float *)(param_2 + 0x40) - (float)param_1[0x10];
  local_54 = *(float *)(param_2 + 0x4c) - (float)param_1[0x13];
  local_5c = (*(float *)(param_2 + 0x44) - (float)param_1[0x11]) - 1.0;
  local_58 = (*(float *)(param_2 + 0x48) - (float)param_1[0x12]) - 1.0;
  fStack_74 = 8.118374e-39;
  iVar1 = (**(code **)(*param_1 + 0x84))();
  fStack_74 = -*(float *)(iVar1 + 4);
  D3DXMatrixRotationY(auStack_50);
  D3DXVec3TransformNormal(auStack_68,auStack_68,&local_58);
  iVar1 = FUN_00c593a0(param_1[0x13c],0xffffffff,&fStack_74,0x41200000,0x41200000,0x23,9);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 + 0x44) = 0x3ecccccd;
  }
  return;
}

// 00586730  FUN_00586730  size=972  [run]
void __fastcall FUN_00586730(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
    }
    FUN_00aa4080(0xb7,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a8c760(10);
    if (iVar5 != 0) {
      piVar4 = (int *)FUN_00c14bb0();
      iVar5 = *piVar4;
      uVar8 = FUN_00e03ea0("r40f_heliporttable_heliporttable",0);
      (**(code **)(iVar5 + 0x5c))(uVar8);
      iVar5 = FUN_00a7f600(0xf5030);
      if ((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
        piVar4 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar4 + 0x20))();
      }
      FUN_00a80ad0(0xf5030);
      iVar5 = FUN_00a7f600(0xd5414);
      if ((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
        piVar4 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar4 + 0x1c))();
      }
    }
    iVar5 = FUN_00585400();
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      uVar8 = 0xb8;
LAB_00586893:
      FUN_00aa4080(uVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_005868ad:
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00585400();
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 == 0) break;
    uVar8 = 0xb9;
    goto LAB_00586893;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00585400();
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      uVar8 = 0xba;
      goto LAB_00586893;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00585400();
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      uVar8 = 0xbb;
      goto LAB_00586893;
    }
    break;
  case 5:
    iVar5 = FUN_00a8c760(10);
    if (iVar5 != 0) {
      FUN_00586670(param_1[0x2a1]);
      iVar5 = FUN_00ac8120();
      if (iVar5 != 0) {
        FUN_00b7ab80(0x40400000,0x3c23d70a);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00585400();
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 == 0) break;
    (**(code **)(*param_1 + 0x20))();
    goto LAB_005868ad;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_0058674f_default;
  }
  if ((iVar5 != 0) && (iVar6 = FUN_00a12210(0xf00), iVar6 != 0)) {
    fVar9 = *(float *)(iVar5 + 0x94);
    D3DXMatrixRotationY(auStack_50);
    D3DXVec3TransformNormal(&stack0xffffff98,iVar6 + 0x50,auStack_58);
    fVar7 = (float10)FUN_00ddba30(*(float *)(iVar6 + 0x94) + *(float *)(iVar5 + 0x94));
    fVar1 = *(float *)(iVar5 + 0x54);
    fVar2 = *(float *)(iVar5 + 0x58);
    fVar3 = *(float *)(iVar5 + 0x5c);
    param_1[0x14] = (int)(fVar9 + *(float *)(iVar5 + 0x50));
    param_1[0x15] = (int)(fVar1 + unaff_EDI);
    param_1[0x16] = (int)(fVar2 + unaff_ESI);
    param_1[0x17] = (int)(fVar3 + unaff_EBX);
    param_1[0x25] = (int)(float)fVar7;
    return;
  }
switchD_0058674f_default:
  return;
}

// 00586B20  FUN_00586b20  size=1032  [run]
void __fastcall FUN_00586b20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  iVar4 = FUN_00a81330();
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e6c60(0);
      FUN_008e0ae0(0);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 1:
    FUN_00aa4080(0xbc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00585400();
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      uVar8 = 0xbd;
LAB_00586c1b:
      FUN_00aa4080(uVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00585400();
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_005822b0();
      uVar8 = 0xbe;
      goto LAB_00586c1b;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00585400();
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      uVar8 = 0xbf;
      goto LAB_00586c1b;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00585400();
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(0xc0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x940) = 0;
      FUN_00ac8e10(0);
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
      }
      FUN_00ac8d40(1);
      *(undefined4 *)(param_1 + 0x19a4) = 1;
      FUN_00581dc0(0);
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        FUN_00a805f0();
      }
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a7c8a0();
    iVar6 = FUN_00a8e520();
    if ((iVar6 == 0) || (iVar6 = FUN_00ac82f0(), iVar6 == 0)) {
      if ((iVar4 == 0) || (*(int *)(param_1 + 0x940) == 0)) goto LAB_00586eb6;
    }
    else {
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
LAB_00586eb6:
      iVar4 = FUN_00a94ce0(0);
      if (iVar4 == 0) break;
    }
    uVar8 = 0xc1;
    goto LAB_00586c1b;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_00586b4c_default;
  }
  if (((iVar5 != 0) && (iVar4 = FUN_00ac82f0(), iVar4 == 0)) &&
     (iVar4 = FUN_00a12210(0xf00), iVar4 != 0)) {
    fVar9 = *(float *)(iVar5 + 0x94);
    D3DXMatrixRotationY(local_50);
    D3DXVec3TransformNormal(&stack0xffffff98,iVar4 + 0x50,auStack_58);
    fVar7 = (float10)FUN_00ddba30(*(float *)(iVar4 + 0x94) + *(float *)(iVar5 + 0x94));
    fVar1 = *(float *)(iVar5 + 0x54);
    fVar2 = *(float *)(iVar5 + 0x58);
    fVar3 = *(float *)(iVar5 + 0x5c);
    *(float *)(param_1 + 0x50) = fVar9 + *(float *)(iVar5 + 0x50);
    *(float *)(param_1 + 0x54) = fVar1 + unaff_EDI;
    *(float *)(param_1 + 0x58) = fVar2 + unaff_ESI;
    *(float *)(param_1 + 0x5c) = fVar3 + unaff_EBX;
    *(float *)(param_1 + 0x94) = (float)fVar7;
    return;
  }
switchD_00586b4c_default:
  return;
}

// 00588030  FUN_00588030  size=758  [run]
undefined4 __fastcall FUN_00588030(int *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uStack_18;
  
  FUN_00a8ee20(100);
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  iVar7 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar7 == 0) {
    return 0;
  }
  if (param_1[0x128] == 7) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
    uVar8 = FUN_00a8d2a0();
    puVar9 = (undefined4 *)FUN_009f8b60();
    iVar7 = CollisionCapsule::CollisionCapsule(2,*puVar9,0);
    if (iVar7 == 0) {
      return 0;
    }
    FUN_00d771d0(1);
    *(undefined4 *)(iVar7 + 0x380) = 0;
    FUN_00d77c50(param_1[0x13c],0);
    *(undefined4 *)(iVar7 + 0x594) = 0x40866666;
    *(undefined4 *)(iVar7 + 0x590) = 0x3f800000;
    *(undefined4 *)(iVar7 + 0x580) = 0;
    *(undefined4 *)(iVar7 + 0x584) = 0;
    *(undefined4 *)(iVar7 + 0x588) = 0x3fc90fdb;
    *(undefined4 *)(iVar7 + 0x58c) = uStack_18;
    FUN_00a93a00(iVar7,uVar8);
    FUN_00d7b0f0();
    FUN_00d7b890();
    (**(code **)(*param_1 + 0x358))(0,param_1 + 0x3bc);
    (**(code **)(*param_1 + 0x358))(0xc,param_1 + 0x3bc);
    iVar10 = FUN_00ac8120();
    iVar7 = param_1[0x14];
    fVar1 = (float)param_1[0x15];
    iVar2 = param_1[0x16];
    fVar3 = (float)param_1[0x17];
    iVar4 = param_1[0x24];
    fVar5 = (float)param_1[0x25];
    fVar6 = (float)param_1[0x27];
    if (((iVar10 != 0) && (iVar10 = FUN_00a81330(), iVar10 != 0)) &&
       (iVar10 = FUN_00a7c8a0(), iVar10 != 0)) {
      iVar7 = *(int *)(iVar10 + 0x50);
      fVar1 = *(float *)(iVar10 + 0x54) + 100.0;
      iVar2 = *(int *)(iVar10 + 0x58);
      fVar3 = *(float *)(iVar10 + 0x5c) + fVar6;
      fVar5 = -*(float *)(iVar10 + 0x94);
    }
    param_1[0x14] = iVar7;
    param_1[0x15] = (int)fVar1;
    param_1[0x16] = iVar2;
    param_1[0x17] = (int)fVar3;
    param_1[0x24] = iVar4;
    param_1[0x25] = (int)fVar5;
    param_1[0x26] = 0x40490fdb;
    param_1[0x27] = (int)fVar6;
    param_1[99] = 0x447a0000;
    param_1[0x4d7] = param_1[99];
    FUN_004dd770(0x80009,0,0,0,0);
  }
  else {
    (**(code **)(*param_1 + 0x358))(0x66,param_1 + 0x3bc);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    iVar7 = FUN_008ec700(param_1,0x3f800000,0x41700000,0x41a00000,0x78,6,0);
    param_1[0x1d9] = iVar7;
    FUN_008e6d00();
    puVar9 = (undefined4 *)FUN_009f8b60();
    FUN_008e26e0(*puVar9);
    iVar7 = param_1[0x1d9];
    if (*(int *)(iVar7 + 0x104) != 1) {
      *(undefined4 *)(iVar7 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar7 + 0xd0) + 4) = 0;
    }
    (**(code **)(*param_1 + 0x318))();
  }
  param_1[0x558] = 0;
  FUN_00a929d0();
  param_1[0x568] = 0;
  param_1[0x569] = 0;
  param_1[0x56a] = 0;
  param_1[0x56b] = 0;
  param_1[0x56c] = 0x3e99999a;
  return 1;
}

// 00588340  FUN_00588340  size=431  [run]
void __fastcall FUN_00588340(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined *puVar6;
  
  if (*(int *)(param_1 + 0x4a0) == 7) {
    if (((*(int *)(param_1 + 0x618) == 0x8000a) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
       (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01be9db8;
      (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar6);
      if ((iVar2 != 0) && (iVar2 = FUN_00a12210(0xf00), iVar2 != 0)) {
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x40);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x44);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x48);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar2 + 0x4c);
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        iVar4 = FUN_00a81330();
        if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
          fVar5 = (float10)FUN_00ddba30(*(float *)(iVar4 + 0x94) + *(float *)(iVar2 + 0x94));
          *(float *)(param_1 + 0x94) = (float)fVar5;
        }
        switchD_0080dbae::default();
        return;
      }
    }
    return;
  }
  if (*(int *)(param_1 + 0x618) == 0x80008) {
    fVar1 = *(float *)(param_1 + 0x15b4) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x15b4) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0x15b4) = 0x40800000;
      *(undefined4 *)(param_1 + 0x15a4) = 0;
      fVar5 = (float10)FUN_00dde300(0,0x3f800000);
      *(float *)(param_1 + 0x15a0) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x15b0));
      fVar5 = (float10)FUN_00dde300(0,0x3f800000);
      *(float *)(param_1 + 0x15a8) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x15b0));
      *(float *)(param_1 + 0x15b0) = -*(float *)(param_1 + 0x15b0);
    }
    if (*(int *)(param_1 + 0x61c) != 2) {
      *(undefined4 *)(param_1 + 0x15a0) = 0;
      *(undefined4 *)(param_1 + 0x15a4) = 0;
      *(undefined4 *)(param_1 + 0x15a8) = 0;
      *(undefined4 *)(param_1 + 0x15ac) = 0;
      switchD_0080dbae::default();
      return;
    }
  }
  switchD_0080dbae::default();
  return;
}

