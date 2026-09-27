// src/enemy/em0060/Em0060Battery.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004424B0..00AB79E0, 8 functions

#include "mgrr.h"
#include "Em0060Battery.h"

// 004424B0  Em0060Battery::vf50  size=16  [class]
void Em0060Battery::vf50(void)

{
  FUN_00a93170();
  BehaviorAppBase::vf50();
  return;
}

// 00450540  Em0060Battery::vf40  size=331  [class]
undefined4 __fastcall Em0060Battery::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = BehaviorAppBase::vf40();
  if (iVar1 != 0) {
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      uVar2 = 2;
      FUN_00a92fb0(2);
      FUN_00e08640(uVar2);
      *(undefined4 *)(param_1 + 0xaf4) = 0;
      *(undefined4 *)(param_1 + 0xaf0) = 0;
      *(undefined4 *)(param_1 + 0xaec) = 1;
      *(undefined2 *)(param_1 + 0xb14) = 0x800;
      FUN_00a7c970(0);
      iVar1 = *(int *)(param_1 + 0x4a0);
      if (iVar1 == 0) {
        FUN_00448ce0();
      }
      else if (iVar1 == 1) {
        FUN_00448da0();
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0xaf8) = 2;
        *(undefined4 *)(param_1 + 0xb04) = 0x42f00000;
        *(undefined4 *)(param_1 + 0xafc) = 2;
      }
      FUN_00a8caf0(0,0,0,0);
      local_18 = 0x3f666666;
      local_14 = 0x3f99999a;
      local_10 = 0x3f8ccccd;
      local_c = 0x3e4ccccd;
      local_8 = 0x40400000;
      local_4 = 0x40000000;
      FUN_00a8e4d0(&local_c,&local_18);
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
      *(undefined4 *)(param_1 + 0xb34) = 0;
      *(undefined4 *)(param_1 + 0xb38) = 0xbf800000;
      *(undefined4 *)(param_1 + 0xb44) = 0;
      *(undefined4 *)(param_1 + 0xb48) = 0;
      *(undefined4 *)(param_1 + 0xb4c) = 0;
      *(undefined4 *)(param_1 + 0xb3c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xb40) = 1;
      return 1;
    }
  }
  return 0;
}

// 00450690  Em0060Battery::vf44  size=81  [class]
void __fastcall Em0060Battery::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  FUN_00a944d0();
  FUN_00a9d8a0();
  Behavior::vf44();
  return;
}

// 00457E40  Em0060Battery::vf54  size=368  [class]
void __fastcall Em0060Battery::vf54(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined1 local_90 [64];
  undefined4 local_50 [19];
  
  if ((param_1[0x2cd] != 0) && (param_1[0x280] != 0)) {
    FUN_004066f0();
    iVar2 = FUN_00a12210(0);
    if (iVar2 != 0) {
      *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 4;
      FUN_0091df60(local_90);
      FUN_01005140(local_50);
      puVar5 = local_50;
      puVar6 = (undefined4 *)(iVar2 + 0x10);
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) & 0xfffb;
    }
    if (0.0 < (float)param_1[0x2ce]) {
      iVar2 = FUN_00a8e520();
      if (iVar2 == 0) {
        iVar2 = FUN_00a8cbe0(0x50018);
        if (iVar2 == 0) {
          fVar7 = (float10)FUN_00e049b0();
          fVar1 = (float)param_1[0x2ce];
          param_1[0x2ce] = (int)(float)((float10)fVar1 - fVar7);
          if ((float10)fVar1 - fVar7 <= (float10)0) {
            FUN_00448c20();
            if (param_1[0x280] != 0) {
              piVar3 = (int *)FUN_00910da0();
              (**(code **)(*piVar3 + 0x2c))(param_1 + 0x280);
            }
            (**(code **)(*param_1 + 0x20))();
            FUN_004038d0();
            FUN_00a944d0();
            FUN_00a9d8a0();
          }
        }
      }
    }
    if (DAT_01885d68 != 1) {
      piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar3 = *piVar3 + -1;
      if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  Behavior::vf54();
  return;
}

// 00462BA0  Em0060Battery::vf48  size=16  [class]
void Em0060Battery::vf48(void)

{
  BehaviorAppBase::vf48();
  FUN_004610f0();
  return;
}

// 00462BB0  Em0060Battery::vf4C  size=172  [class]
void __fastcall Em0060Battery::vf4C(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  param_1[0x2ba] = 0;
  iVar1 = FUN_00a81330();
  param_1[0x2b9] = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    param_1[0x2ba] = iVar1;
  }
  if (param_1[0x2ba] == 0) {
    FUN_009fdde0();
    return;
  }
  FUN_00a92fb0();
  fVar2 = (float10)FUN_00e049b0();
  param_1[0x2c2] = (int)(float)fVar2;
  iVar1 = param_1[0x128];
  if (iVar1 == 0) {
    FUN_00460eb0();
  }
  else if (iVar1 == 1) {
    FUN_00460f90();
  }
  else if (iVar1 == 2) {
    FUN_00461070();
  }
  else {
    Behavior::vf4C();
  }
  if ((param_1[0x2cd] == 0) && (param_1[0x2ba] != 0)) {
    if ((*(byte *)(param_1[0x2ba] + 0x4c0) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00462c53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00462c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  return;
}

// 00AAF0A0  Em0060Battery::vf04  size=6  [class]
undefined * Em0060Battery::vf04(void)

{
  return &DAT_01b34c84;
}

// 00AB79E0  Em0060Battery::vf00  size=105  [class]
undefined4 * __thiscall Em0060Battery::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

