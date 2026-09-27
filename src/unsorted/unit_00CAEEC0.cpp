// src/unsorted/unit_00CAEEC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CAEEC0..00CAFF00, 14 functions

#include "types.h"

// 00CAEEC0  FUN_00caeec0  size=24  [run]
void __thiscall FUN_00caeec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  *(undefined4 *)(param_1 + 0x74) = param_3;
  *(undefined4 *)(param_1 + 0x6c) = param_4;
  return;
}

// 00CAEF00  FUN_00caef00  size=129  [run]
undefined4 __thiscall FUN_00caef00(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00f9cae0(0x30,param_3,*(undefined4 *)(param_2 + 4));
  if (iVar1 != 0) {
    iVar1 = FUN_00f9c7d0(param_4,*(undefined4 *)(param_2 + 8));
    if (iVar1 != 0) {
      uVar2 = FUN_00f99ca0();
      *(undefined4 *)(param_1 + 4) = uVar2;
      iVar1 = FUN_00f999c0();
      *(int *)(param_1 + 8) = iVar1;
      *(undefined4 *)(param_1 + 0xe4) = 1;
      if ((*(int *)(param_1 + 4) != 0) && (iVar1 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

// 00CAEF90  FUN_00caef90  size=49  [run]
void __fastcall FUN_00caef90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00f99d30();
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00f99a40();
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}

// 00CAEFD0  FUN_00caefd0  size=140  [run]
undefined4 __thiscall
FUN_00caefd0(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = FUN_00caef00(param_2,param_3 * 4,param_3 * 6);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_4 != 0) {
    if (*param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = cPrimHeap::allocBuffer(param_3 << 6,0x20);
    }
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    *(int *)(param_1 + 100) = param_4;
  }
  *(int *)(param_1 + 0x134) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  *(undefined4 *)(param_1 + 0x130) = 0;
  return 1;
}

// 00CAF060  FUN_00caf060  size=1102  [run]
undefined4 __thiscall FUN_00caf060(int param_1,float *param_2)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  ushort uVar15;
  float *pfVar16;
  
  fVar13 = (float)(int)param_2[0x16];
  iVar14 = *(int *)(param_1 + 0x130);
  if (((*(int *)(param_1 + 0x134) <= iVar14) || (*(int *)(param_1 + 4) == 0)) ||
     (*(int *)(param_1 + 8) == 0)) {
    return 0;
  }
  fVar2 = param_2[0xc];
  fVar3 = param_2[0xd];
  fVar4 = param_2[0xe];
  uVar15 = (short)iVar14 * 4;
  fVar5 = param_2[0xf];
  fVar6 = param_2[0x10];
  fVar7 = param_2[0x11];
  fVar8 = param_2[0x12];
  fVar9 = param_2[0x13];
  pfVar16 = (float *)((uint)uVar15 * 0x30 + *(int *)(param_1 + 4));
  fVar10 = param_2[1];
  puVar1 = (ushort *)(*(int *)(param_1 + 8) + iVar14 * 0xc);
  fVar11 = param_2[2];
  *pfVar16 = *param_2;
  pfVar16[1] = fVar10;
  pfVar16[2] = fVar11;
  pfVar16[3] = fVar13;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  pfVar16[0xc] = param_2[4] + *param_2;
  pfVar16[0xd] = fVar10;
  pfVar16[0xe] = fVar11;
  pfVar16[0xf] = fVar13;
  fVar10 = param_2[5];
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  pfVar16[0x18] = *param_2;
  pfVar16[0x19] = fVar10 + fVar11;
  pfVar16[0x1a] = fVar12;
  pfVar16[0x1b] = fVar13;
  fVar10 = param_2[5];
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  pfVar16[0x24] = param_2[4] + *param_2;
  pfVar16[0x25] = fVar10 + fVar11;
  pfVar16[0x26] = fVar12;
  pfVar16[0x27] = fVar13;
  if (param_2[0x15] == 0.0) {
    fVar13 = param_2[9];
    pfVar16[4] = param_2[8];
    pfVar16[5] = fVar13;
    pfVar16[6] = 0.0;
    pfVar16[7] = 0.0;
    fVar13 = param_2[9];
    pfVar16[0x10] = param_2[10];
    pfVar16[0x11] = fVar13;
    pfVar16[0x12] = 0.0;
    pfVar16[0x13] = 0.0;
    fVar13 = param_2[0xb];
    pfVar16[0x1c] = param_2[8];
    pfVar16[0x1d] = fVar13;
    pfVar16[0x1e] = 0.0;
    pfVar16[0x1f] = 0.0;
    fVar13 = param_2[0xb];
  }
  else {
    fVar13 = param_2[0xb];
    pfVar16[4] = param_2[8];
    pfVar16[5] = fVar13;
    pfVar16[6] = 0.0;
    pfVar16[7] = 0.0;
    fVar13 = param_2[9];
    pfVar16[0x10] = param_2[8];
    pfVar16[0x11] = fVar13;
    pfVar16[0x12] = 0.0;
    pfVar16[0x13] = 0.0;
    fVar13 = param_2[0xb];
    pfVar16[0x1c] = param_2[10];
    pfVar16[0x1d] = fVar13;
    pfVar16[0x1e] = 0.0;
    pfVar16[0x1f] = 0.0;
    fVar13 = param_2[9];
  }
  pfVar16[0x28] = param_2[10];
  pfVar16[0x29] = fVar13;
  pfVar16[0x2a] = 0.0;
  pfVar16[0x2b] = 0.0;
  switch(param_2[0x14]) {
  case 1.4013e-45:
    pfVar16[8] = fVar2;
    pfVar16[9] = fVar3;
    pfVar16[10] = fVar4;
    pfVar16[0xb] = fVar5;
    pfVar16[0x14] = fVar2;
    pfVar16[0x15] = fVar3;
    pfVar16[0x16] = fVar4;
    pfVar16[0x17] = fVar5;
    pfVar16[0x20] = fVar6;
    pfVar16[0x21] = fVar7;
    pfVar16[0x22] = fVar8;
    pfVar16[0x23] = fVar9;
    pfVar16[0x2f] = fVar9;
    pfVar16[0x2c] = fVar6;
    pfVar16[0x2d] = fVar7;
    pfVar16[0x2e] = fVar8;
    goto LAB_00caf47a;
  case 2.8026e-45:
    pfVar16[8] = fVar6;
    pfVar16[9] = fVar7;
    pfVar16[10] = fVar8;
    pfVar16[0xb] = fVar9;
    pfVar16[0x14] = fVar6;
    pfVar16[0x15] = fVar7;
    pfVar16[0x16] = fVar8;
    pfVar16[0x17] = fVar9;
    pfVar16[0x20] = fVar2;
    pfVar16[0x21] = fVar3;
    pfVar16[0x22] = fVar4;
    pfVar16[0x23] = fVar5;
    pfVar16[0x2c] = fVar2;
    pfVar16[0x2d] = fVar3;
    goto LAB_00caf46e;
  case 4.2039e-45:
    pfVar16[8] = fVar2;
    pfVar16[9] = fVar3;
    pfVar16[10] = fVar4;
    pfVar16[0xb] = fVar5;
    pfVar16[0x14] = fVar6;
    pfVar16[0x15] = fVar7;
    pfVar16[0x16] = fVar8;
    pfVar16[0x17] = fVar9;
    pfVar16[0x20] = fVar2;
    pfVar16[0x21] = fVar3;
    pfVar16[0x22] = fVar4;
    pfVar16[0x23] = fVar5;
    pfVar16[0x2c] = fVar6;
    pfVar16[0x2d] = fVar7;
    pfVar16[0x2e] = fVar8;
    goto LAB_00caf474;
  case 5.60519e-45:
    pfVar16[8] = fVar6;
    pfVar16[9] = fVar7;
    pfVar16[10] = fVar8;
    pfVar16[0xb] = fVar9;
    pfVar16[0x14] = fVar2;
    pfVar16[0x15] = fVar3;
    pfVar16[0x16] = fVar4;
    pfVar16[0x17] = fVar5;
    pfVar16[0x20] = fVar6;
    pfVar16[0x21] = fVar7;
    pfVar16[0x22] = fVar8;
    pfVar16[0x23] = fVar9;
    pfVar16[0x2c] = fVar2;
    break;
  default:
    pfVar16[8] = fVar2;
    pfVar16[9] = fVar3;
    pfVar16[10] = fVar4;
    pfVar16[0xb] = fVar5;
    pfVar16[0x14] = fVar2;
    pfVar16[0x15] = fVar3;
    pfVar16[0x16] = fVar4;
    pfVar16[0x17] = fVar5;
    pfVar16[0x20] = fVar2;
    pfVar16[0x21] = fVar3;
    pfVar16[0x22] = fVar4;
    pfVar16[0x23] = fVar5;
    pfVar16[0x2c] = fVar2;
  }
  pfVar16[0x2d] = fVar3;
LAB_00caf46e:
  pfVar16[0x2e] = fVar4;
  fVar9 = fVar5;
LAB_00caf474:
  pfVar16[0x2f] = fVar9;
LAB_00caf47a:
  *puVar1 = uVar15;
  puVar1[4] = uVar15 + 3;
  puVar1[1] = uVar15 + 1;
  puVar1[3] = uVar15 + 1;
  puVar1[2] = uVar15 + 2;
  puVar1[5] = uVar15 + 2;
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
  return 1;
}

// 00CAF4C0  FUN_00caf4c0  size=918  [run]
undefined4 __thiscall FUN_00caf4c0(int param_1,undefined4 *param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ushort uVar11;
  undefined4 *puVar12;
  
  iVar10 = *(int *)(param_1 + 0x130);
  if (((*(int *)(param_1 + 0x134) <= iVar10) || (*(int *)(param_1 + 4) == 0)) ||
     (*(int *)(param_1 + 8) == 0)) {
    return 0;
  }
  uVar11 = (short)iVar10 * 4;
  puVar1 = (ushort *)(*(int *)(param_1 + 8) + iVar10 * 0xc);
  uVar2 = param_2[0x20];
  uVar3 = param_2[0x21];
  puVar12 = (undefined4 *)((uint)uVar11 * 0x30 + *(int *)(param_1 + 4));
  uVar4 = param_2[0x22];
  uVar5 = param_2[0x23];
  uVar6 = param_2[0x24];
  uVar7 = param_2[0x25];
  uVar8 = param_2[0x26];
  uVar9 = param_2[0x27];
  *puVar12 = *param_2;
  puVar12[1] = param_2[1];
  puVar12[2] = param_2[2];
  puVar12[3] = param_2[3];
  puVar12[0xc] = param_2[4];
  puVar12[0xd] = param_2[5];
  puVar12[0xe] = param_2[6];
  puVar12[0xf] = param_2[7];
  puVar12[0x18] = param_2[8];
  puVar12[0x19] = param_2[9];
  puVar12[0x1a] = param_2[10];
  puVar12[0x1b] = param_2[0xb];
  puVar12[0x24] = param_2[0xc];
  puVar12[0x25] = param_2[0xd];
  puVar12[0x26] = param_2[0xe];
  puVar12[0x27] = param_2[0xf];
  puVar12[4] = param_2[0x10];
  puVar12[5] = param_2[0x11];
  puVar12[6] = param_2[0x12];
  puVar12[7] = param_2[0x13];
  puVar12[0x10] = param_2[0x14];
  puVar12[0x11] = param_2[0x15];
  puVar12[0x12] = param_2[0x16];
  puVar12[0x13] = param_2[0x17];
  puVar12[0x1c] = param_2[0x18];
  puVar12[0x1d] = param_2[0x19];
  puVar12[0x1e] = param_2[0x1a];
  puVar12[0x1f] = param_2[0x1b];
  puVar12[0x28] = param_2[0x1c];
  puVar12[0x29] = param_2[0x1d];
  puVar12[0x2a] = param_2[0x1e];
  puVar12[0x2b] = param_2[0x1f];
  switch(param_2[0x28]) {
  case 1:
    puVar12[8] = uVar2;
    puVar12[9] = uVar3;
    puVar12[10] = uVar4;
    puVar12[0xb] = uVar5;
    puVar12[0x14] = uVar2;
    puVar12[0x15] = uVar3;
    puVar12[0x16] = uVar4;
    puVar12[0x17] = uVar5;
    puVar12[0x20] = uVar6;
    puVar12[0x21] = uVar7;
    puVar12[0x22] = uVar8;
    puVar12[0x23] = uVar9;
    puVar12[0x2f] = uVar9;
    puVar12[0x2c] = uVar6;
    puVar12[0x2d] = uVar7;
    puVar12[0x2e] = uVar8;
    goto LAB_00caf822;
  case 2:
    puVar12[8] = uVar6;
    puVar12[9] = uVar7;
    puVar12[10] = uVar8;
    puVar12[0xb] = uVar9;
    puVar12[0x14] = uVar6;
    puVar12[0x15] = uVar7;
    puVar12[0x16] = uVar8;
    puVar12[0x17] = uVar9;
    puVar12[0x20] = uVar2;
    puVar12[0x21] = uVar3;
    puVar12[0x22] = uVar4;
    puVar12[0x23] = uVar5;
    puVar12[0x2c] = uVar2;
    puVar12[0x2d] = uVar3;
    goto LAB_00caf816;
  case 3:
    puVar12[8] = uVar2;
    puVar12[9] = uVar3;
    puVar12[10] = uVar4;
    puVar12[0xb] = uVar5;
    puVar12[0x14] = uVar6;
    puVar12[0x15] = uVar7;
    puVar12[0x16] = uVar8;
    puVar12[0x17] = uVar9;
    puVar12[0x20] = uVar2;
    puVar12[0x21] = uVar3;
    puVar12[0x22] = uVar4;
    puVar12[0x23] = uVar5;
    puVar12[0x2c] = uVar6;
    puVar12[0x2d] = uVar7;
    puVar12[0x2e] = uVar8;
    goto LAB_00caf81c;
  case 4:
    puVar12[8] = uVar6;
    puVar12[9] = uVar7;
    puVar12[10] = uVar8;
    puVar12[0xb] = uVar9;
    puVar12[0x14] = uVar2;
    puVar12[0x15] = uVar3;
    puVar12[0x16] = uVar4;
    puVar12[0x17] = uVar5;
    puVar12[0x20] = uVar6;
    puVar12[0x21] = uVar7;
    puVar12[0x22] = uVar8;
    puVar12[0x23] = uVar9;
    puVar12[0x2c] = uVar2;
    break;
  default:
    puVar12[8] = uVar2;
    puVar12[9] = uVar3;
    puVar12[10] = uVar4;
    puVar12[0xb] = uVar5;
    puVar12[0x14] = uVar2;
    puVar12[0x15] = uVar3;
    puVar12[0x16] = uVar4;
    puVar12[0x17] = uVar5;
    puVar12[0x20] = uVar2;
    puVar12[0x21] = uVar3;
    puVar12[0x22] = uVar4;
    puVar12[0x23] = uVar5;
    puVar12[0x2c] = uVar2;
  }
  puVar12[0x2d] = uVar3;
LAB_00caf816:
  puVar12[0x2e] = uVar4;
  uVar9 = uVar5;
LAB_00caf81c:
  puVar12[0x2f] = uVar9;
LAB_00caf822:
  *puVar1 = uVar11;
  puVar1[4] = uVar11 + 3;
  puVar1[1] = uVar11 + 1;
  puVar1[3] = uVar11 + 1;
  puVar1[2] = uVar11 + 2;
  puVar1[5] = uVar11 + 2;
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
  return 1;
}

// 00CAF910  FUN_00caf910  size=68  [run]
undefined4 __thiscall FUN_00caf910(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = FUN_00caef00(param_2,param_3,param_3);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x134) = param_3;
      *(undefined4 *)(param_1 + 0xc) = param_4;
      *(undefined4 *)(param_1 + 0x130) = 0;
      return 1;
    }
  }
  return 0;
}

// 00CAF960  FUN_00caf960  size=130  [run]
undefined4 __thiscall FUN_00caf960(int param_1,void *param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x130) + param_3 <= *(uint *)(param_1 + 0x134)) &&
      (*(int *)(param_1 + 4) != 0)) && (*(int *)(param_1 + 8) != 0)) {
    FID_conflict__memcpy
              ((void *)(*(int *)(param_1 + 0x130) * 0x30 + *(int *)(param_1 + 4)),param_2,
               param_3 * 0x30);
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        sVar1 = (short)uVar2;
        iVar3 = *(int *)(param_1 + 0x130) + uVar2;
        uVar2 = uVar2 + 1;
        *(short *)(*(int *)(param_1 + 8) + iVar3 * 2) = *(short *)(param_1 + 0x130) + sVar1;
      } while (uVar2 < param_3);
    }
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + param_3;
    return 1;
  }
  return 0;
}

// 00CAFA00  FUN_00cafa00  size=20  [run]
undefined4 __fastcall FUN_00cafa00(undefined4 param_1)

{
  FUN_00f9c880();
  FUN_00f9c7b0();
  return param_1;
}

// 00CAFA20  FUN_00cafa20  size=19  [run]
void FUN_00cafa20(void)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  return;
}

// 00CAFA40  FUN_00cafa40  size=230  [run]
undefined4 __thiscall FUN_00cafa40(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  while( true ) {
    iVar5 = uVar4 * 0x50 + param_1;
    iVar1 = FUN_00f9cae0(0x30,param_3 * 4,*(undefined4 *)(param_2 + 4));
    if ((iVar1 == 0) || (iVar1 = FUN_00f9c7d0(param_3 * 6,*(undefined4 *)(param_2 + 8)), iVar1 == 0)
       ) break;
    uVar2 = FUN_00f99ca0();
    *(undefined4 *)(iVar5 + 0x98) = uVar2;
    uVar2 = FUN_00f999c0();
    bVar3 = (char)uVar4 + 1;
    uVar4 = (uint)bVar3;
    *(undefined4 *)(iVar5 + 0x9c) = uVar2;
    if (1 < bVar3) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
      *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) - 1.0;
      *(int *)(param_1 + 0xf8) = param_3;
      *(undefined4 *)(param_1 + 0xf4) = 0;
      return 1;
    }
  }
  return 0;
}

// 00CAFB60  FUN_00cafb60  size=688  [run]
undefined4 __thiscall
FUN_00cafb60(int param_1,float *param_2,float *param_3,float *param_4,int param_5,float *param_6)

{
  ushort *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  ushort uVar11;
  float *pfVar12;
  byte local_1;
  
  if (*(uint *)(param_1 + 0xf8) <= *(uint *)(param_1 + 0xf4)) {
    return 0;
  }
  local_1 = 0;
  do {
    iVar2 = (uint)local_1 * 5 + 5;
    iVar10 = *(int *)(param_1 + 0x48 + iVar2 * 0x10);
    if ((iVar10 == 0) || (iVar2 = *(int *)(param_1 + 0x4c + iVar2 * 0x10), iVar2 == 0)) {
      return 0;
    }
    uVar11 = *(short *)(param_1 + 0xf4) * 4;
    pfVar12 = (float *)((uint)uVar11 * 0x30 + iVar10);
    puVar1 = (ushort *)(iVar2 + *(int *)(param_1 + 0xf4) * 0xc);
    fVar3 = *param_6;
    fVar4 = param_6[1];
    fVar5 = param_6[2];
    fVar6 = param_6[3];
    fVar7 = param_2[1];
    fVar8 = param_2[2];
    *pfVar12 = *param_2;
    pfVar12[1] = fVar7;
    pfVar12[2] = fVar8;
    pfVar12[3] = 1.0;
    fVar7 = param_2[1];
    fVar8 = param_2[2];
    pfVar12[0xc] = *param_2 + *param_3;
    pfVar12[0xd] = fVar7;
    pfVar12[0xe] = fVar8;
    pfVar12[0xf] = 1.0;
    fVar7 = param_2[1];
    fVar8 = param_3[1];
    fVar9 = param_2[2];
    pfVar12[0x18] = *param_2;
    pfVar12[0x19] = fVar7 + fVar8;
    pfVar12[0x1a] = fVar9;
    pfVar12[0x1b] = 1.0;
    fVar7 = param_2[1];
    fVar8 = param_3[1];
    fVar9 = param_2[2];
    pfVar12[0x24] = *param_2 + *param_3;
    pfVar12[0x25] = fVar7 + fVar8;
    pfVar12[0x26] = fVar9;
    pfVar12[0x27] = 1.0;
    fVar7 = param_4[1];
    pfVar12[4] = *param_4;
    pfVar12[5] = fVar7;
    pfVar12[6] = 0.0;
    pfVar12[7] = 0.0;
    fVar7 = param_4[1];
    pfVar12[0x10] = param_4[2];
    pfVar12[0x11] = fVar7;
    pfVar12[0x12] = 0.0;
    pfVar12[0x13] = 0.0;
    fVar7 = param_4[3];
    pfVar12[0x1c] = *param_4;
    pfVar12[0x1d] = fVar7;
    pfVar12[0x1e] = 0.0;
    pfVar12[0x1f] = 0.0;
    fVar7 = param_4[3];
    pfVar12[0x28] = param_4[2];
    pfVar12[0x29] = fVar7;
    pfVar12[0x2a] = 0.0;
    pfVar12[0x2b] = 0.0;
    pfVar12[8] = fVar3;
    pfVar12[9] = fVar4;
    pfVar12[10] = fVar5;
    pfVar12[0xb] = fVar6;
    pfVar12[0x14] = fVar3;
    pfVar12[0x15] = fVar4;
    pfVar12[0x16] = fVar5;
    pfVar12[0x17] = fVar6;
    pfVar12[0x20] = fVar3;
    pfVar12[0x21] = fVar4;
    pfVar12[0x22] = fVar5;
    pfVar12[0x23] = fVar6;
    pfVar12[0x2c] = fVar3;
    pfVar12[0x2d] = fVar4;
    pfVar12[0x2e] = fVar5;
    pfVar12[0x2f] = fVar6;
    puVar1[1] = uVar11 + 1;
    puVar1[2] = uVar11 + 2;
    *puVar1 = uVar11;
    puVar1[4] = uVar11 + 3;
    puVar1[3] = uVar11 + 1;
    puVar1[5] = uVar11 + 2;
    if (local_1 == 0) {
      pfVar12[1] = pfVar12[1] - 16.0;
      pfVar12[0xd] = pfVar12[0xd] - 16.0;
      pfVar12[0x19] = pfVar12[0x19] + 16.0;
      pfVar12[0x25] = pfVar12[0x25] + 16.0;
      pfVar12[5] = pfVar12[5] - *(float *)(param_5 + 4) * 16.0;
      pfVar12[0x11] = pfVar12[0x11] - *(float *)(param_5 + 4) * 16.0;
      pfVar12[0x1d] = *(float *)(param_5 + 4) * 16.0 + pfVar12[0x1d];
      pfVar12[0x29] = *(float *)(param_5 + 4) * 16.0 + pfVar12[0x29];
    }
    local_1 = local_1 + 1;
  } while (local_1 < 2);
  *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
  return 1;
}

// 00CAFE10  FUN_00cafe10  size=85  [run]
void FUN_00cafe10(undefined4 param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  float *pfVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  pfVar1 = param_3 + 4;
  local_20 = *param_3 * *pfVar1;
  local_18 = (param_3[2] + *param_3) * *pfVar1;
  local_1c = param_3[1] * param_3[5];
  local_14 = (param_3[3] + param_3[1]) * param_3[5];
  FUN_00cafb60(param_1,param_2,&local_20,pfVar1,param_4);
  return;
}

// 00CAFF00  FUN_00caff00  size=133  [run]
undefined4 __thiscall FUN_00caff00(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    iVar1 = FUN_00f9cae0(0x30,param_3 * 4,*(undefined4 *)(param_2 + 4));
    if (iVar1 != 0) {
      iVar1 = FUN_00f9c7d0(param_3 * 6,*(undefined4 *)(param_2 + 8));
      if (iVar1 != 0) {
        uVar2 = FUN_00f99ca0();
        *(undefined4 *)(param_1 + 0x2c) = uVar2;
        iVar1 = FUN_00f999c0();
        *(int *)(param_1 + 0x50) = iVar1;
        if ((*(int *)(param_1 + 0x2c) != 0) && (iVar1 != 0)) {
          *(int *)(param_1 + 0x58) = param_3;
          *(undefined4 *)(param_1 + 0x54) = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}

