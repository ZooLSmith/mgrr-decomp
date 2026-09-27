// src/enemy/em014a/Em014a.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004F1390..00AB6920, 27 functions

#include "mgrr.h"
#include "Em014a.h"

// 004F1390  Em014a::vf48  size=225  [class]
void __fastcall Em014a::vf48(int *param_1)

{
  float fVar1;
  int iVar2;
  
  if ((DAT_01bea070 & 0x20000000) == 0) {
    if (((param_1[0x370] & 0x10000000U) != 0) &&
       (fVar1 = (float)param_1[0x3a0], param_1[0x3a0] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] < 0.0)) {
      (**(code **)(*param_1 + 0x110))(0);
    }
    if (param_1[0x2fa] != 0) {
      param_1[0x4e3] = 0;
    }
    BehaviorEmBase::vf48();
    fVar1 = (float)param_1[0x3a2];
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      param_1[0x3a2] = (int)((float)param_1[0x3a2] - (float)param_1[0x244]);
    }
    iVar2 = FUN_00ac48f0(0);
    param_1[0x4e1] = iVar2;
    if (param_1[0x4c6] != 0) {
      iVar2 = FUN_00ac8410();
      if ((iVar2 == 0) &&
         (fVar1 = (float)param_1[0x4c5], param_1[0x4c5] = (int)(fVar1 - (float)param_1[0x244]),
         fVar1 - (float)param_1[0x244] < 0.0)) {
        param_1[0x4c6] = 0;
        FUN_00a8caf0(0x30000,0,0,0);
      }
    }
  }
  return;
}

// 004F14B0  Em014a::vf1A0  size=5  [class]
undefined4 Em014a::vf1A0(void)

{
  return 0;
}

// 004F14C0  Em014a::vf1A4  size=3  [class]
void Em014a::vf1A4(void)

{
  return;
}

// 004F14E0  Em014a::vf34C  size=14  [class]
void Em014a::vf34C(void)

{
  FUN_00a8caf0(0,0,0,0);
  return;
}

// 004F1510  Em014a::vf110  size=48  [class]
void __thiscall Em014a::vf110(int param_1,int param_2)

{
  Bh0064::vf110(param_2);
  if (param_2 != 0) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x10000000;
    return;
  }
  *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xefffffff;
  return;
}

// 004F1540  Em014a::setEmSetInfo  size=100  [class]
undefined4 __thiscall Em014a::setEmSetInfo(int param_1,undefined4 param_2)

{
  FUN_0040ac60(param_2);
  *(int *)(param_1 + 0x1360) = *(int *)(param_1 + 0xb84);
  if (*(int *)(param_1 + 0xb84) != 0) {
    *(undefined4 *)(param_1 + 0x1350) = *(undefined4 *)(param_1 + 0xb8c);
    *(undefined4 *)(param_1 + 0x1354) = *(undefined4 *)(param_1 + 0xb90);
    *(undefined4 *)(param_1 + 0x1358) = *(undefined4 *)(param_1 + 0xb94);
    *(undefined4 *)(param_1 + 0x135c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1364) = *(undefined4 *)(param_1 + 0xb88);
  }
  return 1;
}

// 004F15B0  Em014a::vf268  size=183  [class]
undefined4 __thiscall
Em014a::vf268(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    local_20 = param_4[8];
    local_1c = param_4[9];
    local_18 = param_4[10];
    local_14 = 0x3f800000;
    switch(*param_4) {
    case 1:
      FUN_00a883f0(2,0,&local_20);
      return 1;
    case 2:
      FUN_00a883f0(4,0,&local_20);
      return 1;
    case 9:
      *(undefined4 *)(param_1 + 0xbe8) = 0;
      return 1;
    case 0xf:
      *(undefined4 *)(param_1 + 0xbe8) = 1;
      return 1;
    }
  }
  return 0;
}

// 004F1690  FUN_004f1690  size=352  [between]
undefined4 __thiscall FUN_004f1690(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_EDI;
  undefined4 uVar4;
  
  piVar1 = param_2;
  iVar2 = *param_2;
  uVar4 = 0;
  if ((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) && ((iVar2 != 0x1b0 && (iVar2 != 0x147)))) {
    param_2 = (int *)param_2[1];
    if (iVar2 == 0x9d) {
      param_2 = (int *)0x0;
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      uVar4 = FUN_00a7c8a0();
    }
    uVar3 = 1;
    if (((*(byte *)(piVar1 + 0x23) & 0x40) == 0) || (iVar2 = FUN_00ac8170(uVar4), iVar2 != 0)) {
      if ((0 < param_1[0x21c]) && (iVar2 = FUN_00ac8170(uVar4), iVar2 != 0)) {
        (**(code **)(*param_1 + 0x21c))(uVar4,(char)piVar1[4],0x3c23d70a,0);
        (**(code **)(*param_1 + 0x220))(0x40000000);
      }
      (**(code **)(*param_1 + 0x30c))(param_2,0);
      if (param_1[0x21c] < 1) {
        (**(code **)(*param_1 + 0x344))(0,0,1);
        FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
        param_1[0x139] = 1;
        FUN_00a8caf0(0x30000,0,0,0);
        uVar3 = 0x81;
      }
    }
    (**(code **)(*param_1 + 0x198))(uVar4,piVar1,uVar3);
    return unaff_EDI;
  }
  return 0;
}

// 004F17F0  Em014a::vf50  size=177  [class]
void __fastcall Em014a::vf50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00a8d230(param_1 + 0x1330);
  }
  iVar1 = *(int *)(param_1 + 0x138c);
  iVar2 = *(int *)(param_1 + 0x131c);
  iVar3 = *(int *)(param_1 + 0x1320);
  FUN_00a84720();
  switchD_0080dbae::default();
  FUN_00a84780(param_1 + 0x1330,0,iVar2 == 0 && iVar1 != 0,0,iVar3 != 0,0x3f800000);
  *(undefined4 *)(param_1 + 0x131c) = 0;
  *(undefined4 *)(param_1 + 0x1320) = 0;
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x10a8) != 0) {
    *(undefined4 *)(param_1 + 0x10a8) = 0;
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 004F18B0  FUN_004f18b0  size=56  [between]
void __fastcall FUN_004f18b0(int *param_1)

{
  if (param_1[0x286] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x280));
  }
  (**(code **)(*param_1 + 0x1d4))(0);
  if (param_1[0x286] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x280));
  }
  return;
}

// 004F18F0  Em014a::vf360  size=36  [class]
void __fastcall Em014a::vf360(int param_1)

{
  FUN_00e00900();
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  return;
}

// 004F1930  FUN_004f1930  size=133  [between]
void __thiscall FUN_004f1930(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
  uVar1 = FUN_00a8d2a0();
  puVar2 = (undefined4 *)FUN_009f8b60();
  iVar3 = CollisionCapsule::CollisionCapsule(2,*puVar2,0);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x380) = 0;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),1);
    *(undefined4 *)(iVar3 + 0x594) = param_2;
    *(undefined4 *)(iVar3 + 0x590) = param_3;
    FUN_00d771d0(0xb);
    FUN_00a93a00(iVar3,uVar1);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  return;
}

// 004F19C0  FUN_004f19c0  size=71  [between]
void __fastcall FUN_004f19c0(int *param_1)

{
  if ((param_1[0x139] != 0) && (param_1[0x4c6] == 0)) {
    FUN_00eaa6e0(0x41100000,0);
    (**(code **)(*param_1 + 0x358))(0x20,param_1 + 0x3d0);
  }
  return;
}

// 004F1A10  FUN_004f1a10  size=117  [between]
void __fastcall FUN_004f1a10(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0x139] = 1;
  param_1[0x4c7] = 1;
  FUN_00eaa6e0(0x41100000,0);
  FUN_00eaa6e0(0x41200000,0);
  (**(code **)(*param_1 + 0x358))(3,0);
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
  param_1[0x1af] = 1;
                    /* WARNING: Could not recover jumptable at 0x004f1a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 004F1A90  Em014a::startup  size=640  [class]
undefined4 __fastcall Em014a::startup(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  iVar2 = BehaviorEmBase::startup();
  if (iVar2 == 0) {
    return 0;
  }
  param_1[0x21e] = 0;
  param_1[0x1c] = 0x3f8ccccd;
  param_1[0x1d] = 0x3f8ccccd;
  param_1[0x1e] = 0x3f8ccccd;
  param_1[0x370] = 0;
  param_1[0x371] = 0;
  param_1[0x4d4] = param_1[0x14];
  param_1[0x4d5] = param_1[0x15];
  param_1[0x4d6] = param_1[0x16];
  param_1[0x4d7] = param_1[0x17];
  param_1[0x4d0] = param_1[0x24];
  param_1[0x4d1] = param_1[0x25];
  param_1[0x4d2] = param_1[0x26];
  param_1[0x4d3] = param_1[0x27];
  FUN_00ac8e10(1);
  FUN_00ac8eb0(1,1);
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 0xc) = 1;
  }
  local_2c = 0x3f666666;
  local_28 = 0x3f99999a;
  local_24 = 0x3f8ccccd;
  local_20 = 0x3e4ccccd;
  local_1c = 0x40400000;
  local_18 = 0x40000000;
  FUN_00a8e4d0(&local_20,&local_2c);
  FUN_00a929d0();
  FUN_00a8edf0(10);
  param_1[0x3a2] = 0;
  iVar2 = FUN_008ec660(param_1,0x3ff33333,0x3f000000,0x41a00000,0x41a00000,0x78,7,0);
  param_1[0x1d9] = iVar2;
  FUN_008e6d00();
  *(float *)(param_1[0x1d9] + 0xf4) = *(float *)(param_1[0x1d9] + 0xf4) * 0.5;
  FUN_004f1930(0x3f733333,0x3ecccccd);
  FUN_00a82790(param_1[0x13c],1,0);
  param_1[0x45c] = param_1[0x45c] | 0x60;
  param_1[0x488] = 0;
  param_1[0x489] = 0;
  param_1[0x48a] = 0x3f800000;
  param_1[0x48b] = local_14;
  FUN_00a82870(0x3f860a92,0xbf860a92,0x3dcccccd,0x393702d3,0x3d567750);
  param_1[0x4c4] = 0;
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x4c5] = 0;
  param_1[0x3a1] = 0;
  param_1[0x4c6] = 0;
  (*pcVar1)();
  piVar3 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c54720(piVar3);
  FUN_00987dd0(param_1);
  param_1[0x4e0] = 0x40200000;
  param_1[0x20b] = 5;
  param_1[0x20c] = 5;
  return 1;
}

// 004F1D10  Em014a::vf44  size=172  [class]
void __fastcall Em014a::vf44(int param_1)

{
  int iVar1;
  
  FUN_00983fd0(param_1);
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  FUN_00a92a00();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  FUN_00a9d8a0();
  FUN_00a8c820();
  RayCastManager::getWork(param_1 + 5000);
  (**(code **)(*(int *)(param_1 + 0xe90) + 4))();
  BehaviorEmBase::vf44();
  return;
}

// 004F1DC0  FUN_004f1dc0  size=113  [between]
void __fastcall FUN_004f1dc0(int param_1)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x131c) = 1;
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    FUN_004f1a10();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (fVar1 < 0.0) {
    E3_EnemyBoardDebrisSokushi::vf4C();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 004F1E40  Em014a::vf19C  size=179  [class]
void __thiscall Em014a::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 004F1F00  Em014a::vf32C  size=310  [class]
undefined4 __fastcall Em014a::vf32C(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined1 local_160 [348];
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  iVar2 = FUN_00a8c240();
  if ((iVar2 == 0) && ((*(byte *)(param_1 + 0x4c0) & 1) != 0)) {
    iVar2 = FUN_00a8ef10();
    if (iVar2 == 0) {
      iVar2 = FUN_00a8c760(9);
      if (iVar2 == 0) {
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa00);
        if (*(int *)(param_1 + 0xa18) != 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        piVar4 = *(int **)(param_1 + 0x67c);
        piVar5 = piVar4 + *(int *)(param_1 + 0x684) * 0x54;
        FUN_00445db0();
        iVar2 = -1;
        bVar1 = false;
        if (piVar4 != piVar5) {
          do {
            if ((*piVar4 != 0x147) && (iVar2 <= piVar4[1])) {
              bVar1 = true;
              FUN_00448f50(piVar4);
              iVar2 = piVar4[1];
            }
            piVar4 = piVar4 + 0x54;
          } while (piVar4 != piVar5);
          if (bVar1) {
            FUN_00eaa6e0(0x41200000,0);
            uVar3 = FUN_004f1690(local_160);
            if (*(int *)(param_1 + 0xa18) != 0) {
              LeaveCriticalSection(lpCriticalSection);
            }
            return uVar3;
          }
        }
        if (*(int *)(param_1 + 0xa18) != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
      }
    }
  }
  return 0;
}

// 004F2040  FUN_004f2040  size=56  [between]
void __fastcall FUN_004f2040(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a82d50();
  if (iVar1 != 4) {
    *(undefined4 *)(param_1 + 0x131c) = 1;
  }
  if ((*(int *)(param_1 + 0x618) != 0) && (*(int *)(param_1 + 0x618) == 0x30000)) {
    FUN_004f1dc0();
    return;
  }
  return;
}

// 004F2080  Em014a::vf4C  size=264  [class]
void __fastcall Em014a::vf4C(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((DAT_01bea070 & 0x20000000) == 0) {
    FUN_00a92fb0();
    fVar4 = (float10)FUN_00e049b0();
    *(float *)(param_1 + 0x910) = (float)fVar4;
    uVar5 = *(undefined4 *)(param_1 + 0x4f0);
    uVar7 = 0x40800000;
    *(undefined4 *)(param_1 + 0x1160) = 0;
    uVar6 = 0x3f860a92;
    uVar2 = *(undefined4 *)(param_1 + 0x94);
    uVar1 = FUN_00ac45b0(uVar5,uVar2,0x3f860a92,0x40800000);
    uVar2 = lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>_4(uVar1,uVar5,uVar2,uVar6,uVar7);
    *(undefined4 *)(param_1 + 0x1160) = uVar2;
    *(undefined4 *)(param_1 + 0x1164) = 0;
    if ((*(int *)(param_1 + 0xa84) != 0) &&
       ((fVar4 = (float10)FUN_00ddba30(*(float *)(*(int *)(param_1 + 0xa84) + 0x94) -
                                       *(float *)(param_1 + 0x94)), (float10)2.3561945 < fVar4 ||
        (fVar4 < (float10)-2.3561945)))) {
      *(undefined4 *)(param_1 + 0x1164) = 1;
    }
    iVar3 = FUN_00ac4770();
    if (iVar3 == 0) {
      FUN_004f18b0();
    }
    iVar3 = FUN_00a82d50();
    if (iVar3 != 4) {
      *(undefined4 *)(param_1 + 0x131c) = 1;
    }
    if ((*(int *)(param_1 + 0x618) != 0) && (*(int *)(param_1 + 0x618) == 0x30000)) {
      FUN_004f1dc0();
      return;
    }
  }
  return;
}

// 00AABE60  Em014a::Em014a  size=115  [class]
undefined4 * __fastcall Em014a::Em014a(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = vftable;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00904d60();
  return param_1;
}

// 00AABEE0  Em014a::vf04  size=6  [class]
undefined * Em014a::vf04(void)

{
  return &DAT_01b34ef0;
}

// 00AABEF0  Em014a::vf20C  size=7  [class]
float10 Em014a::vf20C(void)

{
  return (float10)1.5;
}

// 00AABF00  Em014a::vf1E8  size=38  [class]
void __fastcall Em014a::vf1E8(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10b0) + 8))(0x41200000,0,0);
  return;
}

// 00AABF30  Em014a::vf1EC  size=38  [class]
void __fastcall Em014a::vf1EC(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10b0) + 8))(0x41200000,0,0);
  return;
}

// 00AB6920  Em014a::destruct  size=98  [class]
undefined4 __thiscall Em014a::destruct(undefined4 param_1,byte param_2)

{
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

