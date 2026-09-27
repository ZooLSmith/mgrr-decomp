// src/phase/app/p410.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D48DE0..00D70460, 8 functions

#include "mgrr.h"
#include "P410.h"

// 00D48DE0  P410::vf1C  size=34  [class]
void __fastcall P410::vf1C(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x120) + 8))(0,0,0);
  return;
}

// 00D48E10  P410::vf18  size=1  [class]
void P410::vf18(void)

{
  return;
}

// 00D48E20  P410::vf08  size=1  [class]
void P410::vf08(void)

{
  return;
}

// 00D48E30  P410::vf0C  size=1  [class]
void P410::vf0C(void)

{
  return;
}

// 00D54000  P410::vf10  size=42  [class]
void __fastcall P410::vf10(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x120) + 8))(0,0,0);
  DAT_01bea094 = DAT_01bea094 & 0xffffefff;
  return;
}

// 00D62610  P410::vf14  size=591  [class]
void __thiscall P410::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  char *pcVar10;
  char local_140 [32];
  undefined1 local_120 [284];
  
  FUN_00e01eb0(param_1 + 0x120);
  pcVar10 = "P410_ELV";
  uVar9 = 1;
  uVar2 = FUN_00e03ea0("P410_ELV",1,"P410_ELV");
  iVar3 = FUN_00d4f0b0(uVar2,uVar9,pcVar10);
  if (iVar3 == 0) {
    uVar2 = 0x14;
  }
  else {
    uVar2 = 0x15;
  }
  FUN_00e01540(0x400,uVar2,local_120);
  pcVar10 = "P410_CODEC_END";
  uVar9 = 0;
  uVar2 = FUN_00e03ea0("P410_CODEC_END",0,"P410_CODEC_END");
  iVar3 = FUN_00d4f0b0(uVar2,uVar9,pcVar10);
  if (iVar3 == 0) {
    FUN_00c81b80(0x58);
  }
  pcVar10 = "P410_DEFENSE";
  uVar9 = 1;
  uVar2 = FUN_00e03ea0("P410_DEFENSE",1,"P410_DEFENSE");
  iVar3 = FUN_00d4f0b0(uVar2,uVar9,pcVar10);
  if (iVar3 == 0) {
LAB_00d6272b:
    uVar6 = 0;
    do {
      _sprintf_s(local_140,0x20,"gun_on_%02d",uVar6);
      uVar2 = FUN_00e03ea0(local_140);
      iVar3 = FUN_00a18cf0(uVar2);
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar4 + 0x20))();
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0xb);
  }
  else {
    pcVar10 = "P410_DEFENSE_END";
    uVar9 = 1;
    uVar2 = FUN_00e03ea0("P410_DEFENSE_END",1,"P410_DEFENSE_END");
    iVar3 = FUN_00d4f0b0(uVar2,uVar9,pcVar10);
    if (iVar3 != 0) goto LAB_00d6272b;
    uVar6 = 0;
    do {
      _sprintf_s(local_140,0x20,"gun_on_%02d",uVar6);
      uVar2 = FUN_00e03ea0(local_140);
      iVar3 = FUN_00a18cf0(uVar2);
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar4 + 0x1c))();
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0xb);
  }
  iVar3 = FUN_00e03ea0("P410_BTL");
  if (DAT_018b9258 != 0) {
    iVar7 = 0;
    if (0 < *(int *)(DAT_018b9258 + 4)) {
      piVar4 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
      do {
        if (*piVar4 == iVar3) {
          if (-1 < iVar7) {
            iVar3 = FUN_00e03ea0(&DAT_018b917c);
            if (DAT_018b9258 == 0) goto LAB_00d627fc;
            iVar5 = 0;
            if (*(int *)(DAT_018b9258 + 4) < 1) goto LAB_00d627fc;
            piVar4 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
            goto LAB_00d627f0;
          }
          break;
        }
        iVar7 = iVar7 + 1;
        piVar4 = piVar4 + 0xb;
      } while (iVar7 < *(int *)(DAT_018b9258 + 4));
    }
  }
  FUN_00dd5650(&DAT_016bcbf8,"P410_BTL");
  goto LAB_00d62805;
  while( true ) {
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 0xb;
    if (*(int *)(DAT_018b9258 + 4) <= iVar5) break;
LAB_00d627f0:
    if (*piVar4 == iVar3) goto LAB_00d627ff;
  }
LAB_00d627fc:
  iVar5 = -1;
LAB_00d627ff:
  if ((iVar5 != iVar7) && (iVar7 <= iVar5)) goto LAB_00d62811;
LAB_00d62805:
  FUN_00c81b80(0x4b);
LAB_00d62811:
  pcVar10 = "P410_ELV_START";
  do {
    bVar1 = *param_3;
    bVar8 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_00d62840:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00d62845;
    }
    if (bVar1 == 0) break;
    bVar1 = param_3[1];
    bVar8 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_00d62840;
    param_3 = param_3 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d62845:
  if (iVar3 == 0) {
    FUN_00e5e050("r401_se_env_elevator_02",0);
  }
  return;
}

// 00D6F110  P410::P410  size=51  [class]
undefined4 * __fastcall P410::P410(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = lib::StaticArray<int,64>::vftable;
  *param_1 = vftable;
  cEspControler::cEspControler();
  return param_1;
}

// 00D70460  P410::vf00  size=65  [class]
undefined4 * __thiscall P410::vf00(undefined4 *param_1,byte param_2)

{
  cEspControler::~cEspControler();
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

