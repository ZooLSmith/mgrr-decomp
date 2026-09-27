// src/unsorted/unit_00F27F10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F27F10..00F280B0, 2 functions

#include "types.h"

// 00F27F10  FUN_00f27f10  size=408  [run]
undefined4 __thiscall FUN_00f27f10(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iStack_20;
  
  iStack_20 = param_4;
  iVar3 = (*(code *)(&PTR_cEspDrawWork09_P_2_018d6b50)[*(int *)(param_1 + 0x47c)])(param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  fVar2 = 1.0;
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  if ((*(byte *)(param_1 + 0x30) & 0x10) != 0) {
    fVar2 = 0.0;
    if (*(float *)(param_1 + 0x90) != 0.0) {
      fVar2 = *(float *)(param_1 + 0x9c) / *(float *)(param_1 + 0x90);
    }
  }
  iVar1 = param_1 + 0x3c8;
  *(float *)(param_1 + 0x124) = fVar2;
  FUN_00edfcd0(iVar1);
  FUN_00f26b40(iVar3);
  FUN_00f20370(iVar3 + 0x40,iVar1,*(undefined4 *)(param_1 + 0x28));
  FUN_00f45d50();
  iStack_20 = iVar3;
  FUN_00f49500(&iStack_20);
  if (*(int *)(param_1 + 0x474) != 0) {
    if (*(int *)(param_1 + 0x478) == 0) {
      *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 1;
    }
    else {
      uVar7 = (uint)*(ushort *)(param_1 + 0x432);
      if (DAT_01eddb74 == -0x38) {
        if (*(uint *)(*(int *)(param_1 + 0x420) + 0x14) <= uVar7) {
          FUN_00dd5650(&DAT_016da0c8,0xfe,uVar7);
          *(undefined4 *)(iVar3 + 0x18) = 0;
          goto LAB_00f2804f;
        }
      }
      else {
        uVar7 = 0;
      }
      iVar4 = FUN_00fa0740(uVar7);
      *(int *)(iVar3 + 0x18) = iVar4;
      if (iVar4 == 0) {
        FUN_00dd5650(&DAT_016575ac,&DAT_016594f0);
      }
    }
  }
LAB_00f2804f:
  FUN_00edfcd0(iVar1);
  uVar5 = FUN_00e9fe70();
  uVar6 = FUN_00e9fe60(uVar5);
  FUN_00edc9e0(iVar3,iVar3,iVar1,uVar6,uVar5);
  return 1;
}

// 00F280B0  FUN_00f280b0  size=1047  [run]
undefined4 __thiscall
FUN_00f280b0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,void *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((DAT_01edd490 == 0) || (iVar2 = cPrimHeap::allocBuffer(0x170,0x20), iVar2 == 0)) ||
     (iVar2 = cEspDrawWork13::cEspDrawWork13(), iVar2 == 0)) {
    FUN_009cca90(param_1,&DAT_016db640);
    return 0;
  }
  if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
    iVar3 = FUN_00dd7ad0();
    if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
      uVar8 = -(int)*(short *)(param_1 + 0x4e) - 4;
    }
    else {
      FUN_00dd5650(&DAT_01659438);
      uVar8 = 0;
    }
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar9 = uVar8 >> 5;
    uVar8 = 0x80000000 >> ((byte)uVar8 & 0x1f);
    (&DAT_01eddb60)[uVar9 + iVar3] = (&DAT_01eddb60)[uVar9 + iVar3] | uVar8;
    if ((uVar1 >> 0x16 & 1) == 0) {
      (&DAT_01eddb4c)[uVar9 + iVar3] = (&DAT_01eddb4c)[uVar9 + iVar3] & ~uVar8;
    }
    else {
      (&DAT_01eddb4c)[uVar9 + iVar3] = (&DAT_01eddb4c)[uVar9 + iVar3] | uVar8;
    }
    if ((uVar1 >> 7 & 1) == 0) {
      (&DAT_01eddb38)[uVar9 + iVar3] = (&DAT_01eddb38)[uVar9 + iVar3] & ~uVar8;
    }
    else {
      (&DAT_01eddb38)[uVar9 + iVar3] = (&DAT_01eddb38)[uVar9 + iVar3] | uVar8;
    }
  }
  FID_conflict__memcpy((void *)(iVar2 + 0x40),param_6,0x40);
  FUN_00f26b40(iVar2);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  uVar7 = *(undefined4 *)(param_1 + 0x84);
  FUN_00f45d50();
  local_c = param_1 + 0x3c8;
  local_14 = iVar2;
  local_10 = param_1;
  local_8 = uVar6;
  local_4 = uVar7;
  FUN_00f49500(&local_14);
  iVar3 = FUN_00f51070(iVar2 + 0xd0,0xc,4);
  if (iVar3 != 0) {
    iVar3 = FUN_00f51070(iVar2 + 0xf8,8,4);
    if (iVar3 == 0) {
      FUN_009cca90(param_1,&DAT_016db684);
      return 0;
    }
    puVar4 = (undefined4 *)FUN_00f99ca0();
    puVar5 = (undefined4 *)FUN_00f99ca0();
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    puVar4[2] = param_2[2];
    puVar4[3] = param_2[3];
    puVar4[4] = param_2[4];
    puVar4[5] = param_2[5];
    puVar4[6] = param_2[6];
    puVar4[7] = param_2[7];
    puVar4[8] = param_2[8];
    puVar4[9] = param_2[9];
    puVar4[10] = param_2[10];
    puVar4[0xb] = param_2[0xb];
    *puVar5 = *param_3;
    puVar5[1] = param_3[1];
    puVar5[2] = param_3[2];
    puVar5[3] = param_3[3];
    puVar5[4] = param_3[4];
    puVar5[5] = param_3[5];
    puVar5[6] = param_3[6];
    puVar5[7] = param_3[7];
    FUN_00f99d30();
    FUN_00f99d30();
    if (*(int *)(param_1 + 0x4bc) != 0) {
      iVar3 = FUN_00f51070(iVar2 + 0x120,8,4);
      if (iVar3 == 0) {
        FUN_009cca90(param_1,&DAT_016db6a0);
        return 0;
      }
      if ((*(short *)(param_1 + 0x428) == 5) && ((*(uint *)(param_1 + 0x38) & 0x8000000) == 0)) {
        param_4 = param_3;
      }
      puVar4 = (undefined4 *)FUN_00f99ca0();
      *puVar4 = *param_4;
      puVar4[1] = param_4[1];
      puVar4[2] = param_4[2];
      puVar4[3] = param_4[3];
      puVar4[4] = param_4[4];
      puVar4[5] = param_4[5];
      puVar4[6] = param_4[6];
      puVar4[7] = param_4[7];
      FUN_00f99d30();
    }
    if (*(int *)(param_1 + 0x4b8) != 0) {
      iVar3 = FUN_00f51070(iVar2 + 0x148,0x10,4);
      if (iVar3 == 0) {
        FUN_009cca90(param_1,&DAT_016db6bc);
        return 0;
      }
      puVar4 = (undefined4 *)FUN_00f99ca0();
      *puVar4 = *param_5;
      puVar4[1] = param_5[1];
      puVar4[2] = param_5[2];
      puVar4[3] = param_5[3];
      puVar4[4] = param_5[4];
      puVar4[5] = param_5[5];
      puVar4[6] = param_5[6];
      puVar4[7] = param_5[7];
      puVar4[8] = param_5[8];
      puVar4[9] = param_5[9];
      puVar4[10] = param_5[10];
      puVar4[0xb] = param_5[0xb];
      puVar4[0xc] = param_5[0xc];
      puVar4[0xd] = param_5[0xd];
      puVar4[0xe] = param_5[0xe];
      puVar4[0xf] = param_5[0xf];
      FUN_00f99d30();
    }
    uVar6 = FUN_00e9fe70();
    uVar7 = FUN_00e9fe60(uVar6);
    FUN_00edc9e0(iVar2,iVar2,param_1 + 0x3c8,uVar7,uVar6);
    if (*(short *)(param_1 + 0x428) == 0x68) {
      if ((*(byte *)(param_1 + 0x468) & 1) == 0) {
        local_1c = 0x3f800000;
        local_18 = 0x3f800000;
      }
      else {
        local_1c = *(undefined4 *)(param_1 + 0x450);
        local_18 = *(undefined4 *)(param_1 + 0x454);
      }
      *(undefined4 *)(iVar2 + 0xa0) = local_1c;
      *(undefined4 *)(iVar2 + 0xa4) = local_18;
      *(undefined4 *)(iVar2 + 0xa8) = *(undefined4 *)(param_1 + 0x460);
      *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(param_1 + 0x464);
    }
    return 1;
  }
  FUN_009cca90(param_1,&DAT_016db668);
  return 0;
}

