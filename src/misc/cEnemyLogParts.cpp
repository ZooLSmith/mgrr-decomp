// src/misc/cEnemyLogParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CEDFD0..00D3C200, 4 functions

#include "mgrr.h"
#include "cEnemyLogParts.h"

// 00CEDFD0  cEnemyLogParts::vf00  size=30  [class]
undefined4 __thiscall cEnemyLogParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_12();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CEDFF0  cEnemyLogParts::vf08  size=262  [class]
void __fastcall cEnemyLogParts::vf08(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x9c);
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x8a);
  }
  *(uint *)(param_1 + 0x24) = uVar1;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x9e);
  }
  *(uint *)(param_1 + 0x28) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x148);
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x14a);
  }
  *(uint *)(param_1 + 0x30) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x14c);
  }
  *(uint *)(param_1 + 0x34) = uVar3;
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x28) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x34) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x34) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0);
  }
  return;
}

// 00D2EE80  cEnemyLogParts::cEnemyLogParts  size=475  [class]
void __fastcall cEnemyLogParts::cEnemyLogParts(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_c;
  int local_4;
  
  puVar7 = &DAT_01dc4328;
  local_c = 0;
  local_4 = 0x20;
  do {
    if (*(int *)((int)&DAT_01dc0a50 + local_c) == 0) {
      if (*(int *)((int)&DAT_01dc0ad0 + local_c) != 0) {
        iVar1 = 0;
        piVar3 = param_1;
        do {
          piVar3 = piVar3 + 1;
          if (*piVar3 == 0) {
            puVar4 = (undefined4 *)FUN_00dd3500(0x90,&DAT_01b7be50);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              puVar4[1] = 0;
              puVar4[0x1e] = 0;
              puVar4[2] = 0;
              puVar4[3] = 0;
              puVar4[5] = 0;
              puVar4[6] = 0;
              *puVar4 = vftable;
              puVar4[0xf] = 0;
              puVar4[0x10] = 0;
              puVar4[0x11] = 0xffffffff;
              puVar4[0x1c] = 0;
              puVar4[0x1d] = 0;
              puVar4[0x1f] = 0;
              puVar4[0x20] = 0;
              puVar4[0x21] = 0;
              puVar4[4] = 1;
              puVar4[0xe] = 1;
              puVar4[0x14] = 0;
              puVar4[0x15] = 0;
              puVar4[0x16] = 0;
              puVar4[0x17] = 0x3f800000;
              puVar4[0x1b] = 0x3f800000;
              puVar4[0x18] = 0;
              puVar4[0x19] = 0;
              puVar4[0x1a] = 0;
              puVar4[3] = "cEnemyLogParts";
              puVar4[2] = 4;
              uVar5 = FUN_00d29960(0x1d);
              puVar4[5] = uVar5;
            }
            param_1[iVar1 + 1] = (int)puVar4;
            uVar5 = *(undefined4 *)((int)&DAT_01dc01a8 + local_c);
            puVar4[0x10] = 1;
            puVar4[0x11] = uVar5;
            puVar4[0x14] = puVar7[-2];
            puVar4[0x15] = puVar7[-1];
            puVar4[0x16] = *puVar7;
            puVar4[0x17] = puVar7[1];
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x20);
      }
    }
    else {
      iVar1 = FUN_00a7c8a0();
      iVar2 = FUN_00a12210(0xffffffff);
      *(undefined4 *)((int)&DAT_01dc01a8 + local_c) = *(undefined4 *)(iVar1 + 0x4b4);
      puVar7[-2] = *(undefined4 *)(iVar2 + 0x40);
      puVar7[-1] = *(undefined4 *)(iVar2 + 0x44);
      *puVar7 = *(undefined4 *)(iVar2 + 0x48);
      puVar7[1] = *(undefined4 *)(iVar2 + 0x4c);
    }
    local_c = local_c + 4;
    puVar7 = puVar7 + 4;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      uVar6 = 0;
      do {
        param_1 = param_1 + 1;
        if ((int *)*param_1 != (int *)0x0) {
          (**(code **)(*(int *)*param_1 + 4))();
          puVar7 = (undefined4 *)*param_1;
          if (((puVar7[0xe] == 0) && (4 < (int)puVar7[0xf])) && (puVar7 != (undefined4 *)0x0)) {
            (**(code **)*puVar7)(1);
            *param_1 = 0;
          }
        }
        *(undefined4 *)((int)&DAT_01dc0ad0 + uVar6) = *(undefined4 *)((int)&DAT_01dc0a50 + uVar6);
        *(undefined4 *)((int)&DAT_01dc0a50 + uVar6) = 0;
        uVar6 = uVar6 + 4;
      } while (uVar6 < 0x80);
      return;
    }
  } while( true );
}

// 00D3C200  cEnemyLogParts::vf14  size=716  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEnemyLogParts::vf14(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  undefined1 auStack_50 [76];
  
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 0:
    if (*(int *)(param_1 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0x3c;
      _DAT_00000024 = 1;
      iVar2 = *(int *)(param_1 + 0x7c);
      *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x68);
      *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(param_1 + 0x6c);
      iVar2 = *(int *)(param_1 + 0x7c);
      *(undefined4 *)(iVar2 + 0x40) = 0x3fc90fdb;
      *(undefined4 *)(iVar2 + 0x44) = 0;
      *(undefined4 *)(iVar2 + 0x48) = 0;
      *(undefined4 *)(iVar2 + 0x4c) = local_54;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
    break;
  case 1:
    uVar5 = 0xffffffff;
    uVar4 = 0;
    uVar1 = FUN_00ca92b0(*(undefined4 *)(param_1 + 0x44),0,1,0,0,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),uVar1,uVar4,uVar5);
    uVar5 = 0xffffffff;
    uVar4 = 0;
    uVar1 = FUN_00ca92b0(*(undefined4 *)(param_1 + 0x44),0,1,0,0,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x20),uVar1,uVar4,uVar5);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x20),1,3);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    break;
  case 2:
    uVar3 = *(uint *)(param_1 + 0x74) & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x34) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x34) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(uint *)(iVar2 + 0x3b0) = (uint)((int)uVar3 < 2);
    }
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    if (0xc < *(int *)(param_1 + 0x74)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
    break;
  case 3:
    if ((*(int *)(param_1 + 0x44) == -1) &&
       (*(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1, *(int *)(param_1 + 0x70) < 1)) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 4;
    }
    break;
  case 4:
    uVar3 = *(uint *)(param_1 + 0x74) & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x34) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x34) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(uint *)(iVar2 + 0x3b0) = (uint)(2 < (int)uVar3);
    }
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    if (0xc < *(int *)(param_1 + 0x74)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (*(undefined4 **)(param_1 + 0x7c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x7c))(1);
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  iVar2 = FUN_00d9fa80(&local_60,param_1 + 0x60);
  if (iVar2 != 0) {
    D3DXMatrixRotationZ(auStack_50,0x3f490fdb);
    D3DXVec3TransformNormal(&stack0xffffff88,&stack0xffffff88,auStack_58);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x34),local_60);
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x34),uStack_5c);
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x38);
    }
  }
  if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 4))();
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  return;
}

