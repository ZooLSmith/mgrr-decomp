// src/unsorted/unit_009E84B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E84B0..009E86B0, 6 functions

#include "types.h"

// 009E84B0  FUN_009e84b0  size=20  [run]
undefined4 * __thiscall FUN_009e84b0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  FUN_009df6d0();
  return param_1;
}

// 009E8540  FUN_009e8540  size=32  [run]
bool FUN_009e8540(void)

{
  int iVar1;
  
  iVar1 = FUN_009d21f0();
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = cEspShaderShimmer_DAF::vf08();
  return iVar1 != 0;
}

// 009E8560  FUN_009e8560  size=101  [run]
void __thiscall FUN_009e8560(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_009df6d0();
  for (iVar1 = *(int *)(param_1 + 0x98); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if ((((param_3 != 0) || (*(uint **)(iVar1 + 0x24) == (uint *)0x0)) ||
        ((**(uint **)(iVar1 + 0x24) & 0x8000) == 0)) && (*(short *)(iVar1 + 0x4c) != 0x65)) {
      FUN_00edbe30(0,param_2);
    }
  }
  FUN_009df740();
  return;
}

// 009E85D0  FUN_009e85d0  size=99  [run]
void __thiscall FUN_009e85d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_009df6d0();
  for (iVar1 = *(int *)(param_1 + 0x98); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if ((((*(uint *)(iVar1 + 0x30) & 0xc0000000) == 0) && (*(short *)(iVar1 + 0x4c) != 0x65)) &&
       ((*(uint **)(iVar1 + 0x24) == (uint *)0x0 || ((**(uint **)(iVar1 + 0x24) & 0x8000) == 0)))) {
      FUN_00edbe30(0,param_3);
    }
  }
  FUN_009df740();
  return;
}

// 009E8640  FUN_009e8640  size=1134  [run]
void FUN_009e8640(int *param_1)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  short sVar10;
  float10 fVar11;
  
  switch(*(undefined1 *)(*param_1 + 0x11)) {
  case 0x7a:
    iVar5 = *param_1;
    fVar2 = *(float *)(*(int *)(param_1[2] + 4) + 0x28);
    *(float *)(iVar5 + 0x90) = fVar2;
    if (fVar2 != 0.0) {
      *(float *)(iVar5 + 0x94) = 1.0 / *(float *)(iVar5 + 0x90);
    }
    return;
  case 0x7b:
  case 0x7c:
    break;
  case 0x7d:
    iVar5 = param_1[1];
    iVar6 = *param_1;
    iVar3 = param_1[2];
    *(float *)(iVar6 + 0x90) = ABS(*(float *)(iVar5 + 0x470)) * 0.5;
    *(undefined4 *)(iVar6 + 0x94) = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x54);
    *(undefined4 *)(*param_1 + 0x98) = *(undefined4 *)(*(int *)(param_1[2] + 4) + 0x30);
    fVar2 = *(float *)(*(int *)(param_1[2] + 4) + 0x34) -
            *(float *)(*(int *)(param_1[2] + 4) + 0x30);
    if (fVar2 == 0.0) {
      fVar2 = 3.4028235e+38;
    }
    else {
      fVar2 = 1.0 / fVar2;
    }
    *(float *)(*param_1 + 0x9c) = fVar2;
    iVar6 = *param_1;
    *(undefined4 *)(iVar6 + 0xa0) = *(undefined4 *)(iVar5 + 0x460);
    *(undefined4 *)(iVar6 + 0xa4) = *(undefined4 *)(iVar5 + 0x464);
    *(undefined4 *)(*param_1 + 0xa8) = *(undefined4 *)(iVar5 + 0x468);
    *(undefined4 *)(*param_1 + 0xac) = *(undefined4 *)(*(int *)(param_1[2] + 4) + 0x28);
    iVar5 = param_1[2];
    iVar6 = *param_1;
    *(undefined4 *)(iVar6 + 0xb0) = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x40);
    *(undefined4 *)(iVar6 + 0xb4) = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x44);
    *(undefined4 *)(*param_1 + 0xb8) = *(undefined4 *)(*(int *)(param_1[2] + 4) + 0x48);
    *(float *)(*param_1 + 0xbc) =
         *(float *)(*(int *)(param_1[2] + 4) + 0x4c) * *(float *)(*param_1 + 0x8c);
    *(ushort *)(*param_1 + 0xc) = *(ushort *)(*param_1 + 0xc) | 0x8000;
    *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) | 0x800;
    return;
  case 0x7e:
  case 0x7f:
    uVar4 = *(uint *)(param_1[1] + 0x30);
    if ((char)uVar4 < '\0') {
      *(undefined1 *)(*param_1 + 0x15) = 3;
    }
    else if ((uVar4 & 0x1000) == 0) {
      if ((*(uint *)(param_1[1] + 0x34) & 0x20000000) == 0) {
        puVar1 = (uint *)(*param_1 + 8);
        *puVar1 = *puVar1 | 1;
        *(undefined1 *)(*param_1 + 0x15) = 0;
      }
      else {
        *(undefined1 *)(*param_1 + 0x15) = 2;
      }
    }
    else {
      *(undefined1 *)(*param_1 + 0x15) = 1;
    }
    iVar5 = param_1[2];
    iVar6 = *param_1;
    *(float *)(iVar6 + 0x90) = *(float *)(*(int *)(iVar5 + 4) + 0x28) * -0.1;
    *(float *)(iVar6 + 0x94) = *(float *)(*(int *)(iVar5 + 4) + 0x28) * 0.1;
    if ((*(uint *)(param_1[1] + 0x38) & 0x100) == 0) {
      uVar9 = 0xbf000000;
    }
    else {
      uVar9 = 0;
    }
    *(undefined4 *)(*param_1 + 0x98) = uVar9;
    *(undefined4 *)(*param_1 + 0x9c) = uVar9;
    *(ushort *)(*param_1 + 0xc) = *(ushort *)(*param_1 + 0xc) | 0x2000;
    return;
  case 0x80:
    uVar4 = *(uint *)(param_1[1] + 0x30);
    if ((char)uVar4 < '\0') {
      *(undefined1 *)(*param_1 + 0x15) = 3;
    }
    else if ((uVar4 & 0x1000) == 0) {
      if ((*(uint *)(param_1[1] + 0x34) & 0x20000000) == 0) {
        puVar1 = (uint *)(*param_1 + 8);
        *puVar1 = *puVar1 | 1;
        *(undefined1 *)(*param_1 + 0x15) = 0;
      }
      else {
        *(undefined1 *)(*param_1 + 0x15) = 2;
      }
    }
    else {
      *(undefined1 *)(*param_1 + 0x15) = 1;
    }
    iVar5 = param_1[2];
    iVar6 = *param_1;
    *(float *)(iVar6 + 0x90) = *(float *)(*(int *)(iVar5 + 4) + 0x28) * -0.1;
    *(float *)(iVar6 + 0x94) = *(float *)(*(int *)(iVar5 + 4) + 0x28) * 0.1;
    if ((*(uint *)(param_1[1] + 0x38) & 0x100) == 0) {
      uVar9 = 0xbf000000;
    }
    else {
      uVar9 = 0;
    }
    *(undefined4 *)(*param_1 + 0x98) = uVar9;
    *(undefined4 *)(*param_1 + 0x9c) = uVar9;
    *(ushort *)(*param_1 + 0xc) = *(ushort *)(*param_1 + 0xc) | 0x2000;
    return;
  default:
    return;
  }
  *(undefined4 *)(*param_1 + 0x90) = *(undefined4 *)(*(int *)(param_1[2] + 4) + 0x28);
  *(undefined4 *)(*param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1[2] + 4) + 0x30);
  *(undefined4 *)(*param_1 + 0x98) = *(undefined4 *)(*(int *)(param_1[2] + 4) + 0x34);
  sVar10 = 0;
  if ((*(int *)(param_1[1] + 0x58) != 0) &&
     (puVar8 = (undefined4 *)(*(int *)(param_1[1] + 0x58) + 0x80), puVar8 != (undefined4 *)0x0)) {
    psVar7 = (short *)*puVar8;
    if ((short *)((int)psVar7 + 0xfU & 0xfffffff0) != psVar7) {
      uVar9 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar9);
    }
    if (psVar7 != (short *)0x0) {
      sVar10 = *psVar7;
    }
  }
  if ((*(int *)(param_1[1] + 0x58) != 0) &&
     (puVar8 = (undefined4 *)(*(int *)(param_1[1] + 0x58) + 0x70), puVar8 != (undefined4 *)0x0)) {
    puVar8 = (undefined4 *)*puVar8;
    if ((undefined4 *)((int)puVar8 + 0xfU & 0xfffffff0) != puVar8) {
      uVar9 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar9);
    }
    if (puVar8 != (undefined4 *)0x0) {
      *(undefined4 *)(*param_1 + 0xa0) = *puVar8;
      *(undefined4 *)(*param_1 + 0xa4) = puVar8[1];
      *(undefined4 *)(*param_1 + 0xa8) = puVar8[2];
      *(undefined4 *)(*param_1 + 0xac) = puVar8[3];
      if (sVar10 != 0) {
        iVar5 = *param_1;
        *(float *)(iVar5 + 0xac) = *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0xac);
      }
      iVar5 = param_1[4];
      if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x68) & 8) != 0)) {
        *(float *)(*param_1 + 0xa0) = *(float *)(iVar5 + 0x30) * *(float *)(*param_1 + 0xa0);
        *(float *)(*param_1 + 0xa4) = *(float *)(iVar5 + 0x34) * *(float *)(*param_1 + 0xa4);
        *(float *)(*param_1 + 0xa8) = *(float *)(iVar5 + 0x38) * *(float *)(*param_1 + 0xa8);
        *(float *)(*param_1 + 0xac) = *(float *)(iVar5 + 0x3c) * *(float *)(*param_1 + 0xac);
      }
      fVar11 = (float10)FUN_00edc040(param_1[3] + 0x40,param_1[1] + 400,puVar8[4],puVar8[5]);
      *(float *)(*param_1 + 0xac) = (float)(fVar11 * (float10)*(float *)(*param_1 + 0xac));
      *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) | 0x800;
      return;
    }
  }
  *(undefined4 *)(*param_1 + 0xa0) = 0;
  *(undefined4 *)(*param_1 + 0xa4) = 0;
  *(undefined4 *)(*param_1 + 0xa8) = 0;
  *(undefined4 *)(*param_1 + 0xac) = 0;
  *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) | 0x800;
  return;
}

// 009E86B0  FUN_009e86b0  size=119  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009e86b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = DAT_01b7a874;
  puVar3 = DAT_01b7a874;
  if (DAT_01b7a874 != DAT_01b7a874 + DAT_01b7a87c) {
    do {
      puVar1 = (undefined4 *)*puVar3;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[2] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        FUN_00dd4920(puVar1);
        *puVar3 = 0;
        puVar2 = DAT_01b7a874;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2 + DAT_01b7a87c);
  }
  if (puVar2 != (undefined4 *)0x0) {
    DAT_01b7a87c = 0;
    if (DAT_01b7a880 != 0) {
      FUN_00dd48d0(puVar2,0);
      DAT_01b7a880 = 0;
    }
    DAT_01b7a874 = (undefined4 *)0x0;
    _DAT_01b7a878 = 0;
  }
  return;
}

