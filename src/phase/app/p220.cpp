// src/phase/app/p220.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D48120..00D70240, 7 functions

#include "types.h"

// 00D48120  P220::vf1C  size=3  [class]
void P220::vf1C(void)

{
  return;
}

// 00D48130  P220::vf18  size=266  [class]
void __fastcall P220::vf18(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  bool bVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pbVar5 = &DAT_016bc578;
  pbVar2 = &DAT_018b917c;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d48167:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d4816c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d48167;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d4816c:
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_00a6e640();
    iVar3 = (**(code **)(*piVar4 + 0x24))(0x1d,2,2);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x120) = 1;
    }
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(0);
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c8a0();
      if (((177.0 <= *(float *)(iVar3 + 0x40)) && (-77.2 <= *(float *)(iVar3 + 0x44))) &&
         (*(int *)(param_1 + 0x120) != 0)) {
        piVar4 = (int *)FUN_00a7c8a0();
        uStack_30 = 0x43300000;
        uStack_2c = 0xc29a3333;
        uStack_28 = 0xc3d2f333;
        (**(code **)(*piVar4 + 0x7c))(&uStack_30,&stack0xffffffc0);
        return;
      }
    }
  }
  return;
}

// 00D48240  P220::vf10  size=26  [class]
void __fastcall P220::vf10(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x124);
  return;
}

// 00D52550  P220::vf14  size=923  [class]
void P220::vf14(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  
  pcVar7 = "P220_SEARCH_GATE";
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_00d52580:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00d52585;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_00d52580;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d52585:
  if (iVar3 != 0) {
    pcVar7 = "P220_SEARCH_GATE_2";
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_00d525b0:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00d525b5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_00d525b0;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d525b5:
    if (iVar3 != 0) goto LAB_00d525c5;
  }
  FUN_00c81e90(0x22);
LAB_00d525c5:
  pcVar7 = "P220_SEARCH_GATE";
  uVar9 = 0;
  uVar4 = FUN_00e03ea0("P220_SEARCH_GATE",0,"P220_SEARCH_GATE");
  iVar3 = FUN_00d4f0b0(uVar4,uVar9,pcVar7);
  if (iVar3 == 0) {
    FUN_00c81b80(0x59);
  }
  pcVar7 = "P220_SEWER_3";
  uVar9 = 0;
  uVar4 = FUN_00e03ea0("P220_SEWER_3",0,"P220_SEWER_3");
  iVar3 = FUN_00d4f0b0(uVar4,uVar9,pcVar7);
  if (iVar3 == 0) {
    FUN_00c81e90(0x57);
  }
  puVar10 = &DAT_016bc578;
  uVar9 = 0;
  uVar4 = FUN_00e03ea0(&DAT_016bc578,0,&DAT_016bc578);
  iVar3 = FUN_00d4f0b0(uVar4,uVar9,puVar10);
  if (iVar3 == 0) {
    FUN_00c81e90(0x43);
    FUN_00c81e90(0x44);
    FUN_00c81e90(0x45);
    if (DAT_01b76230 < 3) {
      piVar5 = (int *)FUN_00c14bb0();
      iVar3 = (**(code **)(*piVar5 + 0x20))("rap_scr2",0x204);
      if (iVar3 != 0) {
        piVar5 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar5 + 0x20))();
      }
      piVar5 = (int *)FUN_00c14bb0();
      pcVar7 = "rap_scr3";
    }
    else {
      piVar5 = (int *)FUN_00c14bb0();
      pcVar7 = "rap_scr2";
    }
    iVar3 = (**(code **)(*piVar5 + 0x20))(pcVar7,0x204);
    if (iVar3 != 0) {
      piVar5 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar5 + 0x20))();
    }
  }
  pbVar2 = &DAT_016bcf34;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < *param_2;
    if (bVar1 != *param_2) {
LAB_00d52707:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00d5270c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) goto LAB_00d52707;
    pbVar2 = pbVar2 + 2;
    param_2 = param_2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d5270c:
  if ((iVar3 == 0) && (2 < DAT_01b76230)) {
    FUN_00c81e90(0x43);
    FUN_00c81e90(0x45);
    piVar5 = (int *)FUN_00c14bb0();
    iVar3 = (**(code **)(*piVar5 + 0x20))("rap_scr1",0x204);
    if (iVar3 != 0) {
      piVar5 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar5 + 0x20))();
    }
    piVar5 = (int *)FUN_00c14bb0();
    iVar3 = (**(code **)(*piVar5 + 0x20))("rap_scr3",0x204);
    if (iVar3 != 0) {
      piVar5 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar5 + 0x20))();
    }
  }
  puVar10 = &DAT_016bcf34;
  uVar9 = 1;
  uVar4 = FUN_00e03ea0(&DAT_016bcf34,1,&DAT_016bcf34);
  iVar3 = FUN_00d4f0b0(uVar4,uVar9,puVar10);
  if (iVar3 != 0) {
    if (DAT_01b76230 < 3) {
      piVar5 = (int *)FUN_00c14bb0();
      iVar3 = (**(code **)(*piVar5 + 0x20))("rap_scr3",0x204);
      if (iVar3 != 0) {
        iVar3 = FUN_00c81c60(0x43);
        if (iVar3 == 0) {
          piVar5 = (int *)FUN_00a7c8a0();
          pcVar6 = *(code **)(*piVar5 + 0x1c);
        }
        else {
          piVar5 = (int *)FUN_00a7c8a0();
          pcVar6 = *(code **)(*piVar5 + 0x20);
        }
        (*pcVar6)();
      }
      piVar5 = (int *)FUN_00c14bb0();
      iVar3 = (**(code **)(*piVar5 + 0x20))("rap_scr2",0x204);
      if (iVar3 != 0) {
        iVar3 = FUN_00c81c60(0x44);
        if (iVar3 == 0) {
          piVar5 = (int *)FUN_00a7c8a0();
          pcVar6 = *(code **)(*piVar5 + 0x1c);
        }
        else {
          piVar5 = (int *)FUN_00a7c8a0();
          pcVar6 = *(code **)(*piVar5 + 0x20);
        }
        (*pcVar6)();
      }
      piVar5 = (int *)FUN_00c14bb0();
      iVar3 = (**(code **)(*piVar5 + 0x20))("rap_scr1",0x204);
      if (iVar3 == 0) {
        return;
      }
      iVar3 = FUN_00c81c60(0x45);
      if (iVar3 != 0) {
        piVar5 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar5 + 0x20))();
        return;
      }
    }
    else {
      piVar5 = (int *)FUN_00c14bb0();
      iVar3 = (**(code **)(*piVar5 + 0x20))("rap_scr2",0x204);
      if (iVar3 == 0) {
        return;
      }
      iVar3 = FUN_00c81c60(0x44);
      if (iVar3 != 0) {
        piVar5 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar5 + 0x20))();
        return;
      }
    }
    piVar5 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar5 + 0x1c))();
  }
  return;
}

// 00D528F0  P220::vf0C  size=83  [class]
void __fastcall P220::vf0C(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x128) != 0) {
    piVar1 = (int *)FUN_00a6dd90();
    iVar2 = (**(code **)(*piVar1 + 0x9c))(0x204);
    if (iVar2 != 0) {
      iVar2 = FUN_00a6d5c0();
      if ((iVar2 != 0) && (*(int *)(param_1 + 0x124) != 0)) {
        FUN_0091a930(0x1f);
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
    }
  }
  return;
}

// 00D61BF0  P220::vf08  size=445  [class]
void __fastcall P220::vf08(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  undefined1 local_114 [4];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  *(undefined4 *)(param_1 + 0x120) = 0;
  FUN_0118f7b0();
  local_50 = 0;
  local_2c = 5;
  local_e0[0] = 0x14;
  piVar2 = (int *)FUN_00910da0();
  local_f0 = 0x40a00000;
  local_ec = 0x41000000;
  local_e8 = 0x3f800000;
  local_110 = 0;
  local_10c = 0x3fc90fdb;
  local_108 = 0;
  local_100 = 0x43776b85;
  local_fc = 0xc294147b;
  local_f8 = 0xc3d27d71;
  uVar3 = (**(code **)(*piVar2 + 4))(local_114,local_e0,&local_100,&local_110,&local_f0,1);
  FUN_00910ab0(uVar3);
  iVar4 = *(int *)(param_1 + 0x124);
  if (iVar4 != 0) {
    if (DAT_01885d68 != 1) {
      iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      if ((*(int *)(iVar1 + 4) == 0) && (DAT_01b35fac != 0)) {
        if (DAT_01885db8 == 0) {
          FUN_00dd72e0();
        }
        else {
          FUN_00dd5650(&DAT_0163b898);
        }
      }
      piVar2 = (int *)(iVar1 + 4);
      *piVar2 = *piVar2 + 1;
    }
    puVar5 = (uint *)(-(uint)(*(uint *)(iVar4 + 0xc) != 0) & *(uint *)(iVar4 + 0xc));
    *puVar5 = *puVar5 | 0x200;
    puVar5[0xb] = 0xf;
    if (DAT_01885d68 != 1) {
      piVar2 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar2 = *piVar2 + -1;
      if (((*piVar2 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x124),4);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x124),0x20);
  FUN_00911ca0("programmabled");
  *(undefined4 *)(param_1 + 0x128) = 1;
  return;
}

// 00D70240  P220::vf00  size=54  [class]
undefined4 * __thiscall P220::vf00(undefined4 *param_1,byte param_2)

{
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

