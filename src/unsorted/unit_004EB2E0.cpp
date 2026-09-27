// src/unsorted/unit_004EB2E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004EB2E0..004EB690, 2 functions

#include "mgrr.h"

// 004EB2E0  FUN_004eb2e0  size=906  [run]
void __fastcall FUN_004eb2e0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x80,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004cb9a0(0xb);
    FUN_00e020f0(param_1[0x13c]);
    FUN_00a963e0(local_160);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (param_1[0x1d9] != 0) {
        CharacterControl::setHeight(0x3f800000);
        CharacterControl::setRadius(0x3e19999a);
        uStack_170 = 0;
        uStack_16c = 0;
        uStack_168 = 0;
        FUN_008e0d30(&uStack_170);
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
        FUN_008e6d00();
      }
      if ((int *)param_1[0x1ec] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x1ec] + 0x108))(0x1f);
      }
      FUN_00901540(0x1f);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 3:
    FUN_00aa4080(0x81,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x481] = 0;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00907640(param_1 + 0x43b,0,param_1 + 0x37c);
    if (iVar2 != 0) {
      if ((float)param_1[0x380] - (float)param_1[0x11] < 0.001 !=
          ((float)param_1[0x380] - (float)param_1[0x11] == 0.001)) {
        param_1[0x481] = param_1[0x481] + 1;
      }
      param_1[0x380] = param_1[0x11];
      fVar1 = (float)param_1[0x37d] + 0.01 + 0.06;
      if (((float)param_1[0x11] < fVar1 != ((float)param_1[0x11] == fVar1)) ||
         (4 < (uint)param_1[0x481])) {
        param_1[0x187] = param_1[0x187] + 1;
        iVar2 = FUN_004e1460();
        if (iVar2 != 0) {
          iVar2 = FUN_004e1460();
          *(int *)(iVar2 + 0x61c) = *(int *)(iVar2 + 0x61c) + 1;
        }
      }
    }
    break;
  case 5:
    FUN_00aa4080(0x82,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 7:
    (**(code **)(*param_1 + 0x344))(8,param_1[0x372],param_1[0x371]);
    FUN_004cb9a0(3);
    FUN_00e020f0(param_1[0x13c]);
    FUN_00a963e0(&uStack_16c);
    (**(code **)(*param_1 + 0x20))();
    iVar2 = FUN_00e5e0c0("em0120_se_dmg_explosion",param_1,0xffffffff,0);
    param_1[0x4d5] = iVar2;
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_004eb644;
  case 8:
LAB_004eb644:
    iVar2 = thunk_FUN_00e58ed0(param_1[0x4d5]);
    if (iVar2 == 0) {
      FUN_009fdde0();
      return;
    }
  default:
    goto switchD_004eb306_default;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_004eb306_default:
  return;
}

// 004EB690  FUN_004eb690  size=494  [run]
void __fastcall FUN_004eb690(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  int *piVar7;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined1 auStack_84 [128];
  
  (**(code **)(*param_1 + 0x220))(0x41200000);
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa9280((short)param_1[0x2ad] + 0xe7);
    param_1[0x187] = param_1[0x187] + 1;
    iVar4 = FUN_004e1270();
    if (iVar4 != 0) {
      param_1[0x187] = 2;
    }
  case 1:
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_004ea320();
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_004ea320();
    pbVar3 = (byte *)FUN_00a95df0(0);
    pbVar5 = &DAT_0163f710;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_004eb760:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_004eb765;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_004eb760;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_004eb765:
    if ((iVar4 == 0) && (iVar4 = FUN_00a959f0(0), 100.0 <= (float)iVar4)) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00c5def0(param_1[0x13c]);
    param_1[0x25c] = iVar4;
    FUN_00405230();
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    FUN_00c151f0(1,param_1[0x13c],0,&uStack_94,0,0x41000000,0x3f800000,0,0);
    FUN_00c57830(auStack_84);
    param_1[0x1b1] = 0;
    param_1[0x1b4] = 0;
    param_1[0x1b5] = 0;
    param_1[0x1b6] = 0;
    param_1[0x1b7] = iStack_88;
    param_1[0x1bb] = 1;
    param_1[0x1ba] = 0x3fc00000;
    param_1[0x1b9] = -1;
    param_1[0x1b8] = 0;
    piVar7 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c54720(piVar7);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  return;
}

