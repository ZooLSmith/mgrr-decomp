// src/misc/cAttentionDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBC230..00D31DF0, 5 functions

#include "types.h"

// 00CBC230  cAttentionDispParts::vf08  size=56  [class]
void __fastcall cAttentionDispParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x8e);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x90);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00CEFB50  cAttentionDispParts::vf00  size=63  [class]
undefined4 * __thiscall cAttentionDispParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CEFB90  cAttentionDispParts::vf14  size=225  [class]
void __fastcall cAttentionDispParts::vf14(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(1);
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    break;
  case 1:
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(2);
      }
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    break;
  case 2:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar1 = FUN_00cdf400(2), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x24) = 3;
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  iVar1 = FUN_00d9fa80(&local_20,param_1 + 0x30);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
    return;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = local_20;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = local_1c;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
  return;
}

// 00D31D80  cAttentionDispParts::cAttentionDispParts  size=97  [class]
undefined4 * cAttentionDispParts::cAttentionDispParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x50,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[3] = "cAttentionDispParts";
    puVar1[2] = 4;
    uVar2 = FUN_00d29960(3);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D31DF0  FUN_00d31df0  size=397  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d31df0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_4;
  
  puVar7 = &DAT_01dc4e68;
  iVar6 = 0;
  local_4 = 5;
  do {
    param_1 = param_1 + 1;
    if ((*(int *)((int)&DAT_01dc1260 + iVar6) == 0) || (*(int *)((int)&DAT_01dc1224 + iVar6) == 0))
    {
      if (*param_1 != 0) {
        *(undefined4 *)(*param_1 + 0x28) = 1;
        puVar1 = (undefined4 *)*param_1;
        if ((puVar1[10] == 0) || ((int)puVar1[9] < 2)) goto LAB_00d31e3b;
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
          *param_1 = 0;
        }
      }
    }
    else {
      puVar1 = (undefined4 *)*param_1;
      if (puVar1 == (undefined4 *)0x0) {
        iVar5 = cAttentionDispParts::cAttentionDispParts();
        *param_1 = iVar5;
      }
      else if ((puVar1[5] != 0) && (*(int *)(puVar1[5] + 0x18) != 0)) {
        if (*(int *)((int)&DAT_01dc1224 + iVar6) != *(int *)((int)&DAT_01dc1238 + iVar6)) {
          (**(code **)*puVar1)(1);
          *param_1 = 0;
          goto LAB_00d31e48;
        }
        puVar1[0xc] = puVar7[-2];
        puVar1[0xd] = puVar7[-1];
        puVar1[0xe] = *puVar7;
        puVar1[0xf] = puVar7[1];
        *(undefined4 *)(*param_1 + 0x40) = *(undefined4 *)((int)&DAT_01dc124c + iVar6);
      }
LAB_00d31e3b:
      if ((int *)*param_1 != (int *)0x0) {
        (**(code **)(*(int *)*param_1 + 4))();
      }
    }
LAB_00d31e48:
    uVar4 = DAT_01dc1234;
    uVar3 = DAT_01dc1230;
    uVar2 = DAT_01dc122c;
    puVar7 = puVar7 + 4;
    iVar6 = iVar6 + 4;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      DAT_01dc1238 = DAT_01dc1224;
      DAT_01dc123c = DAT_01dc1228;
      DAT_01dc1224 = 0;
      DAT_01dc124c = 0;
      DAT_01dc1260 = 0;
      DAT_01dc1228 = 0;
      DAT_01dc1250 = 0;
      DAT_01dc1264 = 0;
      DAT_01dc122c = 0;
      _DAT_01dc1254 = 0;
      _DAT_01dc1268 = 0;
      DAT_01dc1230 = 0;
      _DAT_01dc1258 = 0;
      _DAT_01dc126c = 0;
      DAT_01dc1234 = 0;
      _DAT_01dc125c = 0;
      _DAT_01dc1270 = 0;
      _DAT_01dc1240 = uVar2;
      _DAT_01dc1244 = uVar3;
      _DAT_01dc1248 = uVar4;
      return;
    }
  } while( true );
}

