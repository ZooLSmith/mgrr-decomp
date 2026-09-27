// src/misc/E3_EnemyBoardBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040AE60..00AB9470, 13 functions

#include "mgrr.h"
#include "E3_EnemyBoardBase.h"

// 0040AE60  E3_EnemyBoardBase::vf44  size=20  [class]
void __fastcall E3_EnemyBoardBase::vf44(int param_1)

{
  BehaviorBgBase::vf44();
  *(undefined4 *)(param_1 + 0xb40) = 0;
  return;
}

// 0040AE80  E3_EnemyBoardBase::vf4C  size=18  [class]
void __fastcall E3_EnemyBoardBase::vf4C(int *param_1)

{
  BehaviorBgBase::vf4C();
                    /* WARNING: Could not recover jumptable at 0x0040ae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 0040AEA0  E3_EnemyBoardBase::vf50  size=63  [class]
void __fastcall E3_EnemyBoardBase::vf50(int param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0xb98) == '\x01') &&
     (fVar1 = *(float *)(param_1 + 0xb94) + 1.0, *(float *)(param_1 + 0xb94) = fVar1, 15.0 <= fVar1)
     ) {
    *(undefined1 *)(param_1 + 0xb98) = 0;
  }
  FUN_00a93170();
  Bm0201::vf50();
  return;
}

// 0040AEE0  E3_EnemyBoardBase::vf1D0  size=64  [class]
void __thiscall E3_EnemyBoardBase::vf1D0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0xb98) != '\x01') {
    *(undefined4 *)(param_1 + 0xb4c) = *(undefined4 *)(param_2 + 0xec);
    puVar2 = (undefined4 *)(param_2 + 0xa0);
    puVar3 = (undefined4 *)(param_1 + 0xb50);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    Bm0201::vf1D0();
    return;
  }
  return;
}

// 0040AF60  E3_EnemyBoardBase::vf1B8  size=47  [class]
void __thiscall
E3_EnemyBoardBase::vf1B8(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  if (*(char *)(param_1 + 0xb98) != '\0') {
    if (0 < param_4) {
      do {
        *param_2 = 0x42118;
        param_2 = param_2 + 3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    return;
  }
  BehaviorBgBase::setCutCrerateInfo();
  return;
}

// 0040B6F0  E3_EnemyBoardBase::vf40  size=407  [class]
undefined4 __fastcall E3_EnemyBoardBase::vf40(int *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  bool bVar8;
  
  iVar3 = Bm6041::vf40();
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x2e4) = 0;
  param_1[0x2d3] = 0;
  param_1[0x2e2] = 0;
  param_1[0x2e1] = 0;
  param_1[0x2e0] = 0;
  param_1[0x2df] = 0;
  param_1[0x2dd] = 0;
  param_1[0x2dc] = 0;
  param_1[0x2db] = 0;
  param_1[0x2da] = 0;
  param_1[0x2d8] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2e3] = 0x3f800000;
  param_1[0x2de] = 0x3f800000;
  param_1[0x2d9] = 0x3f800000;
  param_1[0x2d4] = 0x3f800000;
  (**(code **)(*param_1 + 0x318))();
  if (param_1[0x162] != 0) {
    *(undefined4 *)(param_1[0x162] + 0x34) = 1;
    *(undefined4 *)(param_1[0x162] + 0x3c) = 1;
  }
  if (param_1[0x1ec] != 0) {
    FUN_008f03a0(8,1);
    FUN_008f03a0(0x20,1);
    FUN_008f03a0(0x40,1);
  }
  param_1[0x2e5] = 0;
  *(undefined1 *)(param_1 + 0x2e6) = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d1] = 1;
  if ((param_1[300] != 0xf008a) || (iVar3 = 0, (short)param_1[0xc9] < 1)) {
    return 1;
  }
  piVar7 = (int *)(param_1[200] + 0x60);
  do {
    pbVar6 = *(byte **)(*piVar7 + 0x40);
    if (pbVar6 != (byte *)0x0) {
      pbVar4 = &DAT_0163bd1c;
      do {
        bVar2 = *pbVar4;
        bVar8 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_0040b845:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0040b84a;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar8 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_0040b845;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_0040b84a:
      if (iVar5 == 0) {
        if (iVar3 == -1) {
          return 1;
        }
        iVar3 = iVar3 * 0x70 + param_1[200];
        if (iVar3 == 0) {
          return 1;
        }
        puVar1 = (uint *)(iVar3 + 0x38);
        *puVar1 = *puVar1 & 0xfffffffe;
        return 1;
      }
    }
    iVar3 = iVar3 + 1;
    piVar7 = piVar7 + 0x1c;
    if ((short)param_1[0xc9] <= iVar3) {
      return 1;
    }
  } while( true );
}

// 0040B890  E3_EnemyBoardBase::vf30  size=505  [class]
void __fastcall E3_EnemyBoardBase::vf30(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((char)param_1[0x2e6] != '\x01') {
    if ((((param_1[0x2d1] != 0) && (param_1[0x2d3] != 0)) && (param_1[0x2d0] != 0)) &&
       (((iVar2 = param_1[300], iVar2 == 0xf0086 || (iVar2 == 0xf0087)) || (iVar2 == 0xf0089)))) {
      uVar1 = FUN_00a7c8a0();
      iVar2 = FUN_0040b160(uVar1);
      if ((*(char *)(iVar2 + 0xe0f) == '\0') && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
        iVar2 = FUN_00c5f360(param_1[0x13c],param_1 + 0x2d4,0);
        if (iVar2 != 0) {
          param_1[0x2d1] = 0;
          iVar2 = FUN_00a12210(param_1[0x2d2]);
          if (iVar2 == 0) {
            puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
            local_20 = *puVar3;
            local_1c = puVar3[1];
            local_18 = puVar3[2];
            local_14 = puVar3[3];
          }
          else {
            local_20 = *(undefined4 *)(iVar2 + 0x40);
            local_1c = *(undefined4 *)(iVar2 + 0x44);
            local_18 = *(undefined4 *)(iVar2 + 0x48);
            local_14 = *(undefined4 *)(iVar2 + 0x4c);
          }
          if (param_1[0x2d0] != 0) {
            uVar1 = FUN_00a7c8a0();
            FUN_0040b160(uVar1);
            FUN_0040ab50(100,&local_20);
            FUN_0040ab10(1);
          }
        }
      }
    }
    if ((param_1[0x2d3] == 1) && (param_1[0x2d0] != 0)) {
      piVar4 = (int *)FUN_00a7c8a0();
      uVar5 = 0;
      if (piVar4 != (int *)0x0) {
        puVar6 = &DAT_01b34b4c;
        (**(code **)(*piVar4 + 4))(&DAT_01b34b4c);
        iVar2 = FUN_00dd6d80(puVar6);
        uVar5 = -(uint)(iVar2 != 0) & (uint)piVar4;
      }
      *(undefined1 *)(uVar5 + 0xe0c) = 1;
    }
    if (param_1[0x2d0] != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        puVar6 = &DAT_01b34b4c;
        (**(code **)(*piVar4 + 4))(&DAT_01b34b4c);
        iVar2 = FUN_00dd6d80(puVar6);
        uVar5 = -(uint)(iVar2 != 0) & (uint)piVar4;
      }
      if (((*(byte *)(uVar5 + 0xeb0) & 1) != 0) || ((*(byte *)(uVar5 + 0x4a8) & 1) != 0)) {
        *(undefined1 *)(uVar5 + 0xe0c) = 1;
      }
      iVar2 = FUN_00a8cab0();
      if (iVar2 != 2) {
        FUN_00a8caf0(2,0,0,0);
      }
    }
    Bh0056::vf30();
  }
  return;
}

// 0040BA90  E3_EnemyBoardBase::vf2C  size=565  [class]
void __fastcall E3_EnemyBoardBase::vf2C(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((((char)param_1[0x2e4] == '\x01') && (param_1[300] == 0xf008a)) && (param_1[0x2d3] == 1)) &&
     (*(char *)((int)param_1 + 0xb91) == '\0')) {
    if (param_1[0x2d0] != 0) {
      uVar1 = FUN_00a7c8a0();
      FUN_0040b160(uVar1);
      FUN_0040aad0(1);
    }
    *(undefined1 *)(param_1 + 0x2e6) = 1;
    *(undefined1 *)((int)param_1 + 0xb91) = 1;
    param_1[0x2d3] = 0;
  }
  if ((char)param_1[0x2e6] == '\x01') {
    (**(code **)(*param_1 + 0x20))();
    if (param_1[0x2d0] == 0) {
      return;
    }
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      return;
    }
    puVar7 = &DAT_01b34b4c;
    (**(code **)(*piVar2 + 4))(&DAT_01b34b4c);
    iVar3 = FUN_00dd6d80(puVar7);
    if (iVar3 == 0) {
      return;
    }
    FUN_0040b300();
    return;
  }
  if (((param_1[300] != 0xf0088) && (param_1[300] != 0xf008a)) || (param_1[0x2d0] == 0))
  goto LAB_0040bcb7;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  iVar3 = FUN_00a12210(0x10);
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
    local_20 = *puVar4;
    local_1c = puVar4[1];
    local_18 = puVar4[2];
    local_14 = puVar4[3];
  }
  else {
    local_20 = *(undefined4 *)(iVar3 + 0x40);
    local_1c = *(undefined4 *)(iVar3 + 0x44);
    local_18 = *(undefined4 *)(iVar3 + 0x48);
    local_14 = *(undefined4 *)(iVar3 + 0x4c);
  }
  if (param_1[0x2d0] != 0) {
    uVar1 = FUN_00a7c8a0();
    FUN_0040b160(uVar1);
    FUN_0040ab50(0xffffff9c,&local_20);
    FUN_0040ab10(1);
    FUN_0040aad0(1);
  }
  if (param_1[0x2d3] == 1) {
    FUN_00d89e60(0x2b);
  }
  if (param_1[0x2d0] != 0) {
    uVar1 = FUN_00a7c8a0();
    iVar3 = FUN_0040b160(uVar1);
    if (iVar3 != 0) {
      if (param_1[300] == 0xf0088) {
LAB_0040bc5f:
        if (*(char *)(iVar3 + 0xe0c) == '\x01') {
LAB_0040bc67:
          FUN_00cbc1e0(0xffffff9c,&local_20);
          piVar2 = (int *)FUN_00c1b9a0();
          (**(code **)(*piVar2 + 0x3c))(0xffffff9c);
        }
      }
      else if (param_1[300] == 0xf008a) {
        if (*(char *)((int)param_1 + 0xb91) != '\x01') goto LAB_0040bc5f;
        goto LAB_0040bc67;
      }
    }
  }
  FUN_00a7c8a0();
  iVar3 = FUN_00a8cab0();
  if (iVar3 != 2) {
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar1 = 2;
    FUN_00a7c8a0(2,0,0,0);
    FUN_00a8caf0(uVar1,uVar5,uVar6,uVar8);
  }
LAB_0040bcb7:
  Bh0056::vf2C();
  return;
}

// 0040BCD0  E3_EnemyBoardBase::vf318  size=641  [class]
void __fastcall E3_EnemyBoardBase::vf318(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float local_144;
  undefined4 local_140 [8];
  undefined4 local_120 [4];
  undefined1 local_110 [112];
  undefined1 local_a0 [156];
  
  iVar2 = *(int *)(param_1 + 0x4b0);
  if (iVar2 == 0xf0086) {
    local_144 = 5.0;
    iVar2 = FUN_00932720();
    if ((iVar2 == 0xf12) || (iVar2 = FUN_00932720(), iVar2 == 0xef1)) {
      fVar6 = (float10)FUN_00d4b1b0();
      local_144 = (float)fVar6;
    }
    local_140[0] = 0x10;
    local_140[1] = 0x11;
    local_140[2] = 0x12;
    local_140[3] = 0x13;
    local_140[4] = 0x14;
    local_140[5] = 0x15;
    sVar1 = FUN_00dde2d0(0,5);
    local_120[0] = 0;
    uVar3 = local_140[sVar1];
    puVar4 = local_120;
    puVar5 = local_140;
  }
  else {
    if (iVar2 == 0xf0087) {
      local_144 = 5.0;
      iVar2 = FUN_00932720();
      if ((iVar2 == 0xf12) || (iVar2 = FUN_00932720(), iVar2 == 0xef1)) {
        fVar6 = (float10)FUN_00d4b1b0();
        local_144 = (float)fVar6;
      }
      local_140[0] = 0x10;
      local_140[1] = 0x11;
      local_140[2] = 0x12;
      local_140[3] = 0x13;
      local_140[4] = 0x14;
      sVar1 = FUN_00dde2d0(0,4);
      uVar3 = local_140[sVar1];
    }
    else {
      if (iVar2 != 0xf0089) {
        return;
      }
      local_144 = 5.0;
      iVar2 = FUN_00932720();
      if ((iVar2 == 0xf12) || (iVar2 = FUN_00932720(), iVar2 == 0xef1)) {
        fVar6 = (float10)FUN_00d4b1b0();
        local_144 = (float)fVar6;
      }
      local_120[0] = 0x10;
      local_120[1] = 0x11;
      local_120[2] = 0x12;
      local_120[3] = 0x13;
      sVar1 = FUN_00dde2d0(0,3);
      uVar3 = local_120[sVar1];
    }
    puVar5 = local_120;
    puVar4 = local_140;
  }
  local_120[2] = 0;
  local_120[1] = 0;
  local_120[0] = 0;
  local_140[2] = 0;
  local_140[1] = 0;
  local_140[0] = 0;
  *(undefined4 *)(param_1 + 0xb48) = uVar3;
  FUN_00405140(*(undefined4 *)(param_1 + 0x4f0),1,uVar3,puVar5,puVar4,local_144,0x3f000000,
               0xbf800000);
  FUN_00c5abe0(local_a0);
  FUN_00405230();
  local_140[0] = 0;
  local_140[1] = 0;
  local_140[2] = 0;
  FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),*(undefined2 *)(param_1 + 0xb48),local_140,0,
               0x40400000,0x3f800000,1,8);
  uVar3 = FUN_00c57830(local_110);
  iVar2 = FUN_00c4d470(uVar3);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x4c) = 3;
  }
  return;
}

// 0040BF80  E3_EnemyBoardBase::vf2F4  size=395  [class]
void __fastcall E3_EnemyBoardBase::vf2F4(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((param_1[300] == 0xf0088) || (param_1[300] == 0xf008a)) {
    iVar1 = FUN_00a12210(0x10);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
      local_20 = *puVar2;
      local_1c = puVar2[1];
      local_18 = puVar2[2];
      local_14 = puVar2[3];
    }
    else {
      local_20 = *(undefined4 *)(iVar1 + 0x40);
      local_1c = *(undefined4 *)(iVar1 + 0x44);
      local_18 = *(undefined4 *)(iVar1 + 0x48);
      local_14 = *(undefined4 *)(iVar1 + 0x4c);
    }
    if (param_1[0x2d0] != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        puVar6 = &DAT_01b34b4c;
        (**(code **)(*piVar3 + 4))(&DAT_01b34b4c);
        iVar1 = FUN_00dd6d80(puVar6);
        uVar5 = -(uint)(iVar1 != 0) & (uint)piVar3;
      }
      FUN_0040ab50(0xffffff9c,&local_20);
      lpCriticalSection = (LPCRITICAL_SECTION)(uVar5 + 0xdc8);
      if (*(int *)(uVar5 + 0xde0) != 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      *(undefined1 *)(uVar5 + 0xe10) = 1;
      if (*(int *)(uVar5 + 0xde0) != 0) {
        LeaveCriticalSection(lpCriticalSection);
        if (*(int *)(uVar5 + 0xde0) != 0) {
          EnterCriticalSection(lpCriticalSection);
        }
      }
      *(undefined1 *)(uVar5 + 0xe0f) = 1;
      if (*(int *)(uVar5 + 0xde0) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  if (param_1[0x2d0] != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      puVar6 = &DAT_01b34b4c;
      (**(code **)(*piVar3 + 4))(&DAT_01b34b4c);
      iVar1 = FUN_00dd6d80(puVar6);
      piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
    }
    FUN_00a8caf0(2,0,0,0);
    FUN_00aa92c0(10);
    (**(code **)(*piVar3 + 0x20))();
    if (DAT_018b9174 == 0xd21) {
      uVar4 = (**(code **)(*piVar3 + 0x68))(0,0xffffffff,0);
      FUN_00e5e080("rd63_se_brk_targetboard",uVar4);
    }
  }
  return;
}

// 00AB0B60  E3_EnemyBoardBase::E3_EnemyBoardBase  size=18  [class]
undefined4 * __fastcall E3_EnemyBoardBase::E3_EnemyBoardBase(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB0B80  E3_EnemyBoardBase::vf04  size=6  [class]
undefined * E3_EnemyBoardBase::vf04(void)

{
  return &DAT_01b34b50;
}

// 00AB9470  E3_EnemyBoardBase::vf00  size=43  [class]
undefined4 __thiscall E3_EnemyBoardBase::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

