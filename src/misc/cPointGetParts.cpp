// src/misc/cPointGetParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBBF90..00D31CD0, 5 functions

#include "mgrr.h"
#include "cPointGetParts.h"

// 00CBBF90  cPointGetParts::vf08  size=56  [class]
void __fastcall cPointGetParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x8a);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00CE3B80  cPointGetParts::vf00  size=63  [class]
undefined4 * __thiscall cPointGetParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CEF9D0  cPointGetParts::create  size=370  [class]
void __fastcall cPointGetParts::create(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 local_30;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined4 local_27;
  undefined2 local_23;
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    local_2f = 0;
    local_2b = 0;
    local_27 = 0;
    local_23 = 0;
    local_21 = 0;
    local_30 = 0;
    FUN_00ca84a0(*(undefined4 *)(param_1 + 0x30),&local_30,0x10);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x1c),&local_30);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x20),&local_30);
    FUN_00cce0e0(*(undefined4 *)(param_1 + 0x1c),1,3);
    FUN_00cce0e0(*(undefined4 *)(param_1 + 0x20),1,3);
    if (*(int *)(param_1 + 0x30) < 1) {
      pcVar2 = "core_se_sys_score_miss";
    }
    else {
      pcVar2 = "core_se_sys_score";
    }
    FUN_00e5e050(pcVar2,0);
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(1);
    }
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  else {
    if (iVar1 != 1) {
      if (((iVar1 == 2) && (*(int *)(param_1 + 0x18) != 0)) && (iVar1 = FUN_00cdf400(2), iVar1 != 0)
         ) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x24) = 3;
      }
      goto LAB_00cefade;
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if (*(int *)(param_1 + 0x2c) < 0x3d) goto LAB_00cefade;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(2);
    }
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
LAB_00cefade:
  iVar1 = FUN_00d9fa80(&local_20,param_1 + 0x40);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x18) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = local_20;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = local_1c;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = local_18;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x28);
      return;
    }
  }
  return;
}

// 00D31C60  cPointGetParts::cPointGetParts  size=111  [class]
undefined4 * cPointGetParts::cPointGetParts(void)

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
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[3] = "cPointGetParts";
    puVar1[2] = 5;
    uVar2 = FUN_00d29960(0x33);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D31CD0  FUN_00d31cd0  size=165  [callgraph]
void __fastcall FUN_00d31cd0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = &DAT_01dc4dc8;
  iVar4 = 0;
  do {
    param_1 = param_1 + 1;
    if (*(int *)((int)&DAT_01dbf9b4 + iVar4) == 0) {
LAB_00d31d1a:
      piVar3 = (int *)*param_1;
      if (piVar3 != (int *)0x0) goto LAB_00d31d20;
    }
    else {
      piVar3 = (int *)*param_1;
      if (piVar3 == (int *)0x0) {
        iVar2 = cPointGetParts::cPointGetParts();
        *param_1 = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)((int)&DAT_01dbf98c + iVar4);
          *(undefined4 *)(iVar2 + 0x40) = puVar5[-2];
          *(undefined4 *)(iVar2 + 0x44) = puVar5[-1];
          *(undefined4 *)(iVar2 + 0x48) = *puVar5;
          *(undefined4 *)(iVar2 + 0x4c) = puVar5[1];
        }
        goto LAB_00d31d1a;
      }
LAB_00d31d20:
      (**(code **)(*piVar3 + 4))();
      puVar1 = (undefined4 *)*param_1;
      if (2 < (int)puVar1[9]) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
          *param_1 = 0;
        }
        puVar5[-2] = 0;
        *(undefined4 *)((int)&DAT_01dbf9b4 + iVar4) = 0;
        puVar5[-1] = 0;
        *(undefined4 *)((int)&DAT_01dbf98c + iVar4) = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
      }
    }
    puVar5 = puVar5 + 4;
    iVar4 = iVar4 + 4;
    if (0x1dc4e67 < (int)puVar5) {
      return;
    }
  } while( true );
}

