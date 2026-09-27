// src/unsorted/unit_00F98920.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F98920..00F99B10, 68 functions

#include "mgrr.h"

// 00F98920  FUN_00f98920  size=6  [run]
undefined4 FUN_00f98920(void)

{
  return DAT_01f20708;
}

// 00F98930  FUN_00f98930  size=39  [run]
undefined4 FUN_00f98930(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01f20708 == 2) {
    uVar1 = 2;
  }
  else {
    if (DAT_01f20708 == 4) {
      return 4;
    }
    if (DAT_01f20708 == 8) {
      return 8;
    }
  }
  return uVar1;
}

// 00F98960  FUN_00f98960  size=134  [run]
undefined4 FUN_00f98960(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00df8520();
  puVar2 = &DAT_01f20620;
  if (iVar1 == 0) {
    puVar2 = &DAT_01f205e8;
  }
  if (DAT_01f205e4 != puVar2) {
    iVar1 = FUN_00df8520();
    DAT_01f205e4 = &DAT_01f20620;
    if (iVar1 == 0) {
      DAT_01f205e4 = &DAT_01f205e8;
    }
    if (DAT_01f206f4 == 0) {
      DAT_01f206f4 = 1;
      DAT_01f206f8 = 1;
      DAT_01f2070c = 0;
      return 1;
    }
  }
  iVar1 = FUN_00f98300();
  if (iVar1 != 0) {
    DAT_01f206f8 = 1;
    DAT_01f2070c = 0;
    return 1;
  }
  DAT_01f206f8 = 0;
  return 0;
}

// 00F989F0  FUN_00f989f0  size=6  [run]
undefined4 FUN_00f989f0(void)

{
  return DAT_01f20698;
}

// 00F98A10  FUN_00f98a10  size=11  [run]
void FUN_00f98a10(void)

{
  DAT_01f204dc = 1;
  return;
}

// 00F98A40  FUN_00f98a40  size=6  [run]
undefined4 FUN_00f98a40(void)

{
  return DAT_01f204dc;
}

// 00F98A50  FUN_00f98a50  size=20  [run]
void FUN_00f98a50(undefined4 param_1,undefined4 param_2)

{
  DAT_01f20584 = param_1;
  DAT_01f20580 = param_2;
  return;
}

// 00F98A70  FUN_00f98a70  size=6  [run]
undefined4 FUN_00f98a70(void)

{
  return DAT_01f20584;
}

// 00F98A80  FUN_00f98a80  size=6  [run]
undefined4 FUN_00f98a80(void)

{
  return DAT_01f20580;
}

// 00F98A90  FUN_00f98a90  size=6  [run]
undefined4 FUN_00f98a90(void)

{
  return DAT_01f206dc;
}

// 00F98AA0  FUN_00f98aa0  size=6  [run]
undefined4 FUN_00f98aa0(void)

{
  return DAT_01f206e0;
}

// 00F98AB0  FUN_00f98ab0  size=6  [run]
undefined4 FUN_00f98ab0(void)

{
  return DAT_01f206dc;
}

// 00F98AC0  FUN_00f98ac0  size=6  [run]
undefined4 FUN_00f98ac0(void)

{
  return DAT_01f206e0;
}

// 00F98AD0  FUN_00f98ad0  size=91  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f98ad0(int param_1)

{
  float fVar1;
  undefined4 local_8;
  
  if (param_1 == 1) {
    fVar1 = 0.033333335;
  }
  else {
    fVar1 = 0.016666668;
  }
  _DAT_01f206d0 = param_1;
  local_8 = (undefined4)(longlong)ROUND(fVar1 * 1000.0 * 3.0);
  DAT_01f206ec = local_8;
  return;
}

// 00F98B40  FUN_00f98b40  size=1  [run]
void FUN_00f98b40(void)

{
  return;
}

// 00F98B50  FUN_00f98b50  size=1  [run]
void FUN_00f98b50(void)

{
  return;
}

// 00F98B60  FUN_00f98b60  size=73  [run]
undefined4 FUN_00f98b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (DAT_01f206d4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0xac))(DAT_01f206d4,0,0,param_4,param_1,param_2,param_3);
    if (-1 < iVar1) {
      return 1;
    }
    FUN_00dd5650(&DAT_016eb948);
  }
  return 0;
}

// 00F98BF0  thunk_FUN_00f98510  size=5  [run]
void thunk_FUN_00f98510(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int *piStack_20;
  undefined1 *puStack_1c;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_018e8764 ^ (uint)&iStack_14;
  if (DAT_01f206d4 != (int *)0x0) {
    iStack_14 = param_1;
    iStack_c = param_1 + param_3;
    uStack_10 = param_2;
    iStack_8 = param_2 + param_4;
    piStack_20 = DAT_01f206d4;
    puStack_1c = (undefined1 *)&iStack_14;
    iVar1 = (**(code **)(*DAT_01f206d4 + 300))();
    if (-1 < iVar1) {
      puStack_1c = (undefined1 *)0xae;
      piStack_20 = DAT_01f206d4;
      (**(code **)(*DAT_01f206d4 + 0xe4))();
      __security_check_cookie(uStack_10 ^ (uint)&piStack_20);
      return;
    }
  }
  __security_check_cookie(uStack_4 ^ (uint)&iStack_14);
  return;
}

// 00F98C00  FUN_00f98c00  size=33  [run]
bool FUN_00f98c00(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xae,0);
  return -1 < iVar1;
}

// 00F98C30  FUN_00f98c30  size=6  [run]
undefined4 FUN_00f98c30(void)

{
  return 1;
}

// 00F98C40  FUN_00f98c40  size=6  [run]
undefined4 FUN_00f98c40(void)

{
  return 1;
}

// 00F98C50  FUN_00f98c50  size=64  [run]
int FUN_00f98c50(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x50;
  uVar2 = 0x10;
  if (param_3 != 2) {
    if (param_3 != 4) goto LAB_00f98c71;
    uVar1 = 0x28;
  }
  uVar2 = 8;
LAB_00f98c71:
  return (((uVar2 - 1) + param_2) / uVar2) * (((uVar1 - 1) + param_1) / uVar1);
}

// 00F98C90  FUN_00f98c90  size=64  [run]
int FUN_00f98c90(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x50;
  uVar2 = 0x10;
  if (param_3 != 2) {
    if (param_3 != 4) goto LAB_00f98cb1;
    uVar1 = 0x28;
  }
  uVar2 = 8;
LAB_00f98cb1:
  return (((uVar2 - 1) + param_2) / uVar2) * (((uVar1 - 1) + param_1) / uVar1);
}

// 00F98CD0  FUN_00f98cd0  size=6  [run]
undefined4 FUN_00f98cd0(void)

{
  return 1;
}

// 00F98CE0  FUN_00f98ce0  size=10  [run]
void FUN_00f98ce0(undefined4 param_1)

{
  DAT_01f20564 = param_1;
  return;
}

// 00F98CF0  FUN_00f98cf0  size=120  [run]
void FUN_00f98cf0(void)

{
  int *piStack_24;
  undefined1 *puStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  uint local_4;
  
  puStack_20 = (undefined1 *)&local_1c;
  local_4 = DAT_018e8764 ^ (uint)&local_1c;
  if (DAT_01f206d4 == (int *)0x0) {
    puStack_20 = (undefined1 *)0xf98d16;
    __security_check_cookie(local_4 ^ (uint)&local_1c);
    return;
  }
  local_c = 0;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0x3f800000;
  local_10 = DAT_01f206e0;
  local_14 = DAT_01f206dc;
  piStack_24 = DAT_01f206d4;
  (**(code **)(*DAT_01f206d4 + 0xbc))();
  __security_check_cookie(local_c ^ (uint)&piStack_24);
  return;
}

// 00F98D70  FUN_00f98d70  size=58  [run]
void FUN_00f98d70(undefined4 *param_1)

{
  *param_1 = DAT_01f20568;
  param_1[1] = DAT_01f2056c;
  param_1[2] = DAT_01f20570;
  param_1[3] = DAT_01f20574;
  param_1[4] = DAT_01f20578;
  param_1[5] = DAT_01f2057c;
  return;
}

// 00F98DB0  FUN_00f98db0  size=59  [run]
undefined4 FUN_00f98db0(int param_1,int param_2,int param_3)

{
  if (((DAT_018da660 != param_1) || (DAT_018da664 != param_2)) || (DAT_018da668 != param_3)) {
    DAT_018da660 = param_1;
    DAT_018da664 = param_2;
    DAT_018da668 = param_3;
  }
  return 1;
}

// 00F98DF0  FUN_00f98df0  size=38  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00f98df0(float param_1)

{
  if (param_1 == _DAT_018da698) {
    return 1;
  }
  _DAT_018da698 = param_1;
  return 1;
}

// 00F98E30  FUN_00f98e30  size=1  [run]
void FUN_00f98e30(void)

{
  return;
}

// 00F98E50  FUN_00f98e50  size=6  [run]
undefined4 FUN_00f98e50(void)

{
  return 1;
}

// 00F98E90  FUN_00f98e90  size=6  [run]
undefined4 FUN_00f98e90(void)

{
  return 1;
}

// 00F98ED0  FUN_00f98ed0  size=20  [run]
undefined4 FUN_00f98ed0(uint param_1)

{
  if (param_1 < 4) {
    return (&DAT_018da6d4)[param_1 * 2];
  }
  return 0;
}

// 00F98F20  FUN_00f98f20  size=1  [run]
void FUN_00f98f20(void)

{
  return;
}

// 00F98F30  FUN_00f98f30  size=56  [run]
uint FUN_00f98f30(undefined4 param_1,uint param_2)

{
  if (param_2 != 0) {
    switch(param_1) {
    case 1:
      return param_2;
    case 2:
      return param_2 >> 1;
    case 3:
      return param_2 - 1;
    case 4:
      return param_2 / 3;
    case 5:
    case 6:
      return param_2 - 2;
    }
  }
  return 0;
}

// 00F98F80  FUN_00f98f80  size=34  [run]
undefined4 FUN_00f98f80(int param_1)

{
  if (DAT_01f2059c == param_1) {
    return 1;
  }
  DAT_01f2059c = param_1;
  DAT_01f20598 = 1;
  return 1;
}

// 00F98FB0  FUN_00f98fb0  size=91  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f98fb0(void)

{
  int *piVar1;
  int iVar2;
  
  DAT_01f2059c = 0;
  DAT_01f20598 = 0;
  DAT_01f20594 = 0;
  _DAT_01f20588 = 0;
  iVar2 = 0;
  piVar1 = DAT_01f206d4;
  do {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 400))(piVar1,iVar2,0,0,0);
      piVar1 = DAT_01f206d4;
    }
    (&DAT_01f205a0)[iVar2] = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1a0))(piVar1,0);
  }
  return;
}

// 00F99010  FUN_00f99010  size=73  [run]
undefined4 FUN_00f99010(uint param_1,int param_2)

{
  int iVar1;
  
  if (0xf < param_1) {
    return 0;
  }
  if ((&DAT_01f205a0)[param_1] == param_2) {
    return 1;
  }
  iVar1 = FUN_00f98600(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  (&DAT_01f205a0)[param_1] = param_2;
  DAT_01f20598 = 1;
  return 1;
}

// 00F99090  FUN_00f99090  size=75  [run]
undefined4 FUN_00f99090(undefined4 *param_1)

{
  int iVar1;
  
  if (DAT_01f20594 == param_1) {
    return 1;
  }
  if (DAT_01f206d4 != (int *)0x0) {
    if (param_1 == (undefined4 *)0x0) {
      iVar1 = (**(code **)(*DAT_01f206d4 + 0x1a0))(DAT_01f206d4,0);
    }
    else {
      iVar1 = (**(code **)(*DAT_01f206d4 + 0x1a0))(DAT_01f206d4,*param_1);
    }
    if (-1 < iVar1) {
      DAT_01f20594 = param_1;
      return 1;
    }
  }
  return 0;
}

// 00F990E0  FUN_00f990e0  size=34  [run]
undefined4 FUN_00f990e0(int param_1)

{
  if (DAT_01f20590 == param_1) {
    return 1;
  }
  DAT_01f20590 = param_1;
  DAT_01f2058c = 1;
  return 1;
}

// 00F99150  FUN_00f99150  size=6  [run]
undefined4 FUN_00f99150(void)

{
  return DAT_01f20708;
}

// 00F99160  FUN_00f99160  size=6  [run]
undefined4 FUN_00f99160(void)

{
  return DAT_01f20698;
}

// 00F99170  FUN_00f99170  size=6  [run]
undefined4 FUN_00f99170(void)

{
  return DAT_01f206a4;
}

// 00F99180  thunk_FUN_00f98960  size=5  [run]
undefined4 thunk_FUN_00f98960(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00df8520();
  puVar2 = &DAT_01f20620;
  if (iVar1 == 0) {
    puVar2 = &DAT_01f205e8;
  }
  if (DAT_01f205e4 != puVar2) {
    iVar1 = FUN_00df8520();
    DAT_01f205e4 = &DAT_01f20620;
    if (iVar1 == 0) {
      DAT_01f205e4 = &DAT_01f205e8;
    }
    if (DAT_01f206f4 == 0) {
      DAT_01f206f4 = 1;
      DAT_01f206f8 = 1;
      DAT_01f2070c = 0;
      return 1;
    }
  }
  iVar1 = FUN_00f98300();
  if (iVar1 != 0) {
    DAT_01f206f8 = 1;
    DAT_01f2070c = 0;
    return 1;
  }
  DAT_01f206f8 = 0;
  return 0;
}

// 00F99190  FUN_00f99190  size=6  [run]
undefined4 FUN_00f99190(void)

{
  return DAT_01f206f4;
}

// 00F991A0  FUN_00f991a0  size=6  [run]
undefined4 FUN_00f991a0(void)

{
  return DAT_01f206f8;
}

// 00F991F0  FUN_00f991f0  size=101  [run]
undefined4 FUN_00f991f0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = Hw::cHeapVariable::vf40(0x30000,param_1,"TextureManager");
  if (iVar1 != 0) {
    iVar1 = FUN_00dd7240();
    if (iVar1 != 0) {
      uVar2 = 0;
      do {
        *(undefined4 *)((int)&DAT_01f144d4 + uVar2) = 0;
        *(undefined4 *)((int)&DAT_01f144d0 + uVar2) = 0;
        *(undefined4 *)((int)&DAT_01f144d8 + uVar2) = 0;
        *(undefined4 *)((int)&DAT_01f144dc + uVar2) = 0;
        *(undefined4 *)((int)&DAT_01f144e0 + uVar2) = 0;
        uVar2 = uVar2 + 0x18;
      } while (uVar2 < 0xc000);
      DAT_01f126c8 = 1;
      return 1;
    }
  }
  return 0;
}

// 00F99260  FUN_00f99260  size=11  [run]
void FUN_00f99260(void)

{
  DAT_01f126c8 = 0;
  return;
}

// 00F99270  FUN_00f99270  size=41  [run]
undefined4 * FUN_00f99270(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_01f144d0 + uVar1) == param_1) {
      return &DAT_01f144d0 + iVar2 * 6;
    }
    uVar1 = uVar1 + 0x18;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0xc000);
  return (undefined4 *)0x0;
}

// 00F99300  FUN_00f99300  size=1  [run]
void FUN_00f99300(void)

{
  return;
}

// 00F99310  FUN_00f99310  size=5  [run]
undefined4 FUN_00f99310(void)

{
  return 0;
}

// 00F993A0  FUN_00f993a0  size=84  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00f993a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_01f126c4 == param_1) {
    return 1;
  }
  if (DAT_01f206d4 != (int *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 4);
    }
    iVar2 = (**(code **)(*DAT_01f206d4 + 0x170))(DAT_01f206d4,uVar1);
    if (-1 < iVar2) {
      DAT_01f126c4 = param_1;
      _DAT_01f126bc = 1;
      _DAT_01f126b8 = 1;
      return 1;
    }
  }
  return 0;
}

// 00F99400  FUN_00f99400  size=84  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00f99400(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_01f126c0 == param_1) {
    return 1;
  }
  if (DAT_01f206d4 != (int *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 4);
    }
    iVar2 = (**(code **)(*DAT_01f206d4 + 0x1ac))(DAT_01f206d4,uVar1);
    if (-1 < iVar2) {
      DAT_01f126c0 = param_1;
      _DAT_01f126b4 = 1;
      _DAT_01f126b0 = 1;
      return 1;
    }
  }
  return 0;
}

// 00F994A0  FUN_00f994a0  size=147  [run]
bool FUN_00f994a0(int param_1,byte *param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = (byte *)(&DAT_01f134d0 + param_1 * 4);
  for (uVar3 = param_3 * 4; 3 < uVar3; uVar3 = uVar3 - 4) {
    if (*(int *)pbVar2 != *(int *)param_2) goto LAB_00f994d8;
    param_2 = param_2 + 4;
    pbVar2 = pbVar2 + 4;
  }
  if (uVar3 == 0) {
    return true;
  }
LAB_00f994d8:
  iVar1 = (uint)*pbVar2 - (uint)*param_2;
  if (iVar1 == 0) {
    if (uVar3 < 2) {
      return true;
    }
    iVar1 = (uint)pbVar2[1] - (uint)param_2[1];
    if (iVar1 == 0) {
      if (uVar3 < 3) {
        return true;
      }
      iVar1 = (uint)pbVar2[2] - (uint)param_2[2];
      if (iVar1 == 0) {
        if (uVar3 < 4) {
          return true;
        }
        iVar1 = (uint)pbVar2[3] - (uint)param_2[3];
      }
    }
  }
  return (iVar1 >> 0x1f | 1U) == 0;
}

// 00F99540  FUN_00f99540  size=147  [run]
bool FUN_00f99540(int param_1,byte *param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = (byte *)(&DAT_01f126d0 + param_1 * 4);
  for (uVar3 = param_3 * 4; 3 < uVar3; uVar3 = uVar3 - 4) {
    if (*(int *)pbVar2 != *(int *)param_2) goto LAB_00f99578;
    param_2 = param_2 + 4;
    pbVar2 = pbVar2 + 4;
  }
  if (uVar3 == 0) {
    return true;
  }
LAB_00f99578:
  iVar1 = (uint)*pbVar2 - (uint)*param_2;
  if (iVar1 == 0) {
    if (uVar3 < 2) {
      return true;
    }
    iVar1 = (uint)pbVar2[1] - (uint)param_2[1];
    if (iVar1 == 0) {
      if (uVar3 < 3) {
        return true;
      }
      iVar1 = (uint)pbVar2[2] - (uint)param_2[2];
      if (iVar1 == 0) {
        if (uVar3 < 4) {
          return true;
        }
        iVar1 = (uint)pbVar2[3] - (uint)param_2[3];
      }
    }
  }
  return (iVar1 >> 0x1f | 1U) == 0;
}

// 00F995E0  FUN_00f995e0  size=59  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00f995e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (DAT_01f206d4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0x178))(DAT_01f206d4,param_1,param_2,param_3 + 3U >> 2);
    if (-1 < iVar1) {
      _DAT_01f126bc = 1;
      return 1;
    }
  }
  return 0;
}

// 00F99620  FUN_00f99620  size=59  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00f99620(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (DAT_01f206d4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0x1b4))(DAT_01f206d4,param_1,param_2,param_3 + 3U >> 2);
    if (-1 < iVar1) {
      _DAT_01f126b4 = 1;
      return 1;
    }
  }
  return 0;
}

// 00F99700  FUN_00f99700  size=55  [run]
bool FUN_00f99700(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_01f206d4 == (int *)0x0) {
    return false;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  iVar2 = (**(code **)(*DAT_01f206d4 + 0x104))(DAT_01f206d4,param_1,uVar1);
  return -1 < iVar2;
}

// 00F99740  FUN_00f99740  size=125  [run]
bool FUN_00f99740(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 uVar3;
  
  piVar1 = DAT_01f206d4;
  if (DAT_01f206d4 == (int *)0x0) {
    return false;
  }
  if (param_2 == 3) {
    uVar3 = 5;
    iVar2 = (**(code **)(*DAT_01f206d4 + 0x114))(DAT_01f206d4,param_1,5,2);
  }
  else {
    uVar3 = 5;
    iVar2 = (**(code **)(*DAT_01f206d4 + 0x114))(DAT_01f206d4,param_1,5,param_2);
  }
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0x114))(piVar1,param_1,6,unaff_ESI);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*piVar1 + 0x114))(piVar1,param_1,7,uVar3);
      return -1 < iVar2;
    }
  }
  return false;
}

// 00F997C0  FUN_00f997c0  size=125  [run]
bool FUN_00f997c0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 uVar3;
  
  piVar1 = DAT_01f206d4;
  if (DAT_01f206d4 == (int *)0x0) {
    return false;
  }
  uVar3 = 1;
  iVar2 = (**(code **)(*DAT_01f206d4 + 0x114))(DAT_01f206d4,param_1,1,param_2);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0x114))(piVar1,param_1,2,unaff_ESI);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*piVar1 + 0x114))(piVar1,param_1,3,uVar3);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*piVar1 + 0x114))(piVar1,param_1,0xb,unaff_ESI);
        return -1 < iVar2;
      }
    }
  }
  return false;
}

// 00F998A0  FUN_00f998a0  size=29  [run]
undefined4 FUN_00f998a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_01f21b68;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1f21be8);
  return 1;
}

// 00F998D0  FUN_00f998d0  size=52  [run]
void FUN_00f998d0(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = DAT_01f206d4;
  do {
    (&DAT_01f21b68)[iVar2 * 2] = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x104))(piVar1,iVar2,0);
      piVar1 = DAT_01f206d4;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}

// 00F99920  FUN_00f99920  size=50  [run]
bool FUN_00f99920(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (DAT_01f206d4 == (int *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_01f206d4 + 0x114))(DAT_01f206d4,param_1,4,-(uint)(param_2 != 0));
  return -1 < iVar1;
}

// 00F999C0  FUN_00f999c0  size=122  [run]
uint __fastcall FUN_00f999c0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int **ppiVar4;
  int *local_4;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = param_1[3];
  if (uVar2 == 0) {
    iVar3 = param_1[4] * param_1[5];
    local_4 = param_1;
    if (param_1[2] != 0) {
      FUN_00dd5650(&DAT_016eb3b0);
      if (*(int *)(param_1[2] + 0x18) == 0) {
        param_1[3] = 0;
        return 0;
      }
      uVar2 = *(int *)(param_1[2] + 0x18) + iVar3;
      param_1[3] = uVar2;
      return uVar2;
    }
    ppiVar4 = &local_4;
    iVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1,iVar3,param_1[6] * param_1[5],ppiVar4,0);
    uVar2 = (iVar3 < 0) - 1 & (uint)ppiVar4;
    param_1[3] = uVar2;
  }
  return uVar2;
}

// 00F99A40  FUN_00f99a40  size=32  [run]
void __fastcall FUN_00f99a40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (param_1[2] == 0) {
      (**(code **)(*piVar1 + 0x30))(piVar1);
    }
    param_1[3] = 0;
  }
  return;
}

// 00F99A60  FUN_00f99a60  size=96  [run]
undefined4 __thiscall FUN_00f99a60(int *param_1,void *param_2,int param_3,int param_4)

{
  int *piVar1;
  void *_Dst;
  
  if ((param_1[5] == param_3) && (param_1[6] == param_4)) {
    _Dst = (void *)FUN_00f999c0();
    if (_Dst != (void *)0x0) {
      FID_conflict__memcpy(_Dst,param_2,param_3 * param_4);
      piVar1 = (int *)*param_1;
      if (piVar1 != (int *)0x0) {
        if (param_1[2] == 0) {
          (**(code **)(*piVar1 + 0x30))(piVar1);
        }
        param_1[3] = 0;
      }
      return 1;
    }
  }
  return 0;
}

// 00F99AC0  FUN_00f99ac0  size=66  [run]
void __fastcall FUN_00f99ac0(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_4;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    uVar1 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc);
    local_4 = param_1;
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))(*(int **)(param_1 + 4),0,uVar1,&local_4,0)
    ;
    *(uint *)(param_1 + 0x18) = (iVar2 < 0) - 1 & uVar1;
  }
  return;
}

// 00F99B10  FUN_00f99b10  size=35  [run]
void __fastcall FUN_00f99b10(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    (**(code **)(**(int **)(param_1 + 4) + 0x30))(*(int **)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

