// src/unsorted/unit_00D5E140.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D5E140..00D5E1A0, 2 functions

#include "mgrr.h"

// 00D5E140  FUN_00d5e140  size=87  [run]
undefined4 * __fastcall FUN_00d5e140(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00d4d890();
  FUN_00de3530();
  cXmlBinary::cXmlBinary_103();
  cXmlBinary::cXmlBinary_103();
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  return param_1;
}

// 00D5E1A0  FUN_00d5e1a0  size=1005  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00d5e1a0(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined *puVar12;
  undefined1 auStack_400 [1024];
  
  if (param_1[0x2e] == 0xffffffff) {
    piVar3 = (int *)FUN_00c13920();
    (**(code **)(*piVar3 + 0x10))();
  }
  FUN_00c23670();
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0;
  param_1[0x38] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  uVar2 = *param_1;
  uVar10 = uVar2 >> 1 & 1;
  uVar9 = uVar2 >> 4 & 1;
  *param_1 = uVar2 & 0xfffffd4d | 0x100;
  if (param_1[0xd] == 0xffffffff) {
    piVar3 = (int *)FUN_00c18350();
    (**(code **)(*piVar3 + 0x34))();
    FUN_00c16770(1);
    param_1[1] = 0;
    return 0;
  }
  FUN_00c820c0(2);
  if (DAT_01be8f14 == 0) {
    DAT_01b7592c = 0xffffffff;
    DAT_01b75930 = 0xffffffff;
    _DAT_01b75934 = 0xffffffff;
    _DAT_01b75938 = 0xffffffff;
    _DAT_01b7593c = 0xffffffff;
    _DAT_01b75940 = 0xffffffff;
    _DAT_01b75944 = 0xffffffff;
    _DAT_01b75948 = 0xffffffff;
    _DAT_01b7594c = 0xffffffff;
    _DAT_01b75950 = 0xffffffff;
    _DAT_01b75954 = 0xffffffff;
    _DAT_01b75958 = 0xffffffff;
    _DAT_01b7595c = 0xffffffff;
    _DAT_01b75960 = 0xffffffff;
    _DAT_01b75964 = 0xffffffff;
    _DAT_01b75968 = 0xffffffff;
  }
  if (param_1[0x62] != 0) {
    param_1[0x39] = param_1[0xd];
    param_1[0x3a] = param_1[0xe];
    param_1[0x43] = param_1[0x17];
    FID_conflict__memcpy(param_1 + 0x3b,param_1 + 0xf,0x20);
    if ((uVar2 >> 9 & 1) != 0) {
      iVar4 = FUN_009c57d0();
      if (iVar4 == 0) goto LAB_00d5e300;
    }
    FUN_00d4f310();
  }
LAB_00d5e300:
  if ((*param_1 & 0x40) == 0) {
    if ((param_1[0x17] != 0) || (uVar9 != 0)) {
      FUN_00d4f4f0();
    }
    if ((uVar10 == 0) && (DAT_01be8e58 != 0)) {
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 != (int *)0x0) {
        puVar12 = &DAT_01be9db8;
        (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
        iVar4 = FUN_00dd6d80(puVar12);
        if (iVar4 != 0) {
          FUN_00b94810(param_1[0x6b]);
        }
      }
    }
    FUN_00c16770(1);
    FUN_00d44a00(param_1[0xd]);
    uVar2 = param_1[0xd];
    puVar5 = param_1 + 0xf;
    piVar3 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar3 + 0x1c))(uVar2,puVar5,uVar9);
    piVar3 = (int *)FUN_00c18350();
    (**(code **)(*piVar3 + 0x2c))(uVar2,puVar5);
    FUN_00c95d40(uVar2,puVar5);
    FUN_00c184a0(uVar2,puVar5);
    thunk_FUN_009c9550(uVar2,puVar5);
    FUN_009470a0(puVar5);
    FUN_00db8410();
    FUN_00c95d80(param_1[0xd],puVar5);
  }
  iVar4 = FUN_00a4a350(param_1[0xd]);
  if (iVar4 == 1) {
    DAT_01bea090 = DAT_01bea090 | 4;
    DAT_018b56fc = 1;
  }
  if (param_1[0xd] == 0xd30) {
    pcVar7 = "PD30_MISSION1";
    puVar5 = param_1 + 0xf;
    do {
      bVar1 = (byte)*puVar5;
      bVar11 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_00d5e435:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00d5e43a;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)puVar5 + 1);
      bVar11 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_00d5e435;
      puVar5 = (uint *)((int)puVar5 + 2);
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00d5e43a:
    if (iVar4 != 0) {
      pbVar8 = (byte *)0x1649998;
      puVar5 = param_1 + 0xf;
      do {
        bVar1 = (byte)*puVar5;
        bVar11 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00d5e466:
          iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00d5e46b;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)puVar5 + 1);
        bVar11 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00d5e466;
        puVar5 = (uint *)((int)puVar5 + 2);
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00d5e46b:
      if (iVar4 != 0) {
        pcVar7 = "PD30_MISSION3";
        puVar5 = param_1 + 0xf;
        do {
          bVar1 = (byte)*puVar5;
          bVar11 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_00d5e497:
            iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00d5e49c;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)puVar5 + 1);
          bVar11 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_00d5e497;
          puVar5 = (uint *)((int)puVar5 + 2);
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00d5e49c:
        if (iVar4 != 0) goto LAB_00d5e4c7;
      }
    }
    iVar4 = FUN_00c82370(1);
    if (iVar4 == 0) {
      FUN_00c82240(1);
      DAT_01bea090 = DAT_01bea090 | 4;
      DAT_018b56fc = 1;
    }
  }
LAB_00d5e4c7:
  if (uVar10 == 0) {
    FUN_00e5e1b0("bgm_pstart");
    FUN_00e5e050("se_pstart",0);
    FUN_00d58f60();
    uVar6 = FUN_00959930(auStack_400,"%s%03x%s%s","bgm_pstart_p",param_1[0xd],&DAT_0165c24c,
                         param_1 + 0xf);
    FUN_00e5e1b0(uVar6);
    param_1[1] = 9;
    return 0;
  }
  uVar6 = FUN_00959930(auStack_400,"%sp%03x_%s","bgm_psub_",param_1[0xd],param_1 + 0xf);
  FUN_00e5e1b0(uVar6);
  param_1[1] = 9;
  return 0;
}

