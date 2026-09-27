// src/phase/app/pa50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47A40..00D70070, 11 functions

#include "mgrr.h"
#include "cPa50.h"

// 00D47A40  cPa50::vf18  size=10  [class]
void cPa50::vf18(void)

{
  FUN_00cad2a0();
  return;
}

// 00D51700  cPa50::vf10  size=132  [class]
void __fastcall cPa50::vf10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  FUN_00c81e90(7);
  FUN_00c81e90(8);
  FUN_00c81e90(0xe);
  FUN_00c81e90(0x10);
  DAT_01bea090 = DAT_01bea090 & 0xfffffeef;
  DAT_01bea094 = DAT_01bea094 & 0xfeffffff;
  iVar3 = param_1 + 0x130;
  iVar2 = 2;
  do {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x2c))(iVar3);
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined2 *)(param_1 + 0x124) = 0;
  return;
}

// 00D51790  cPa50::vf14  size=720  [class]
void __fastcall cPa50::vf14(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  bool bVar8;
  undefined *puVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pcVar7 = "btl_sam_2_start";
  pbVar2 = DAT_018b925c;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_00d517c7:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00d517cc;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_00d517c7;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d517cc:
  if (iVar3 == 0) {
    iVar3 = FUN_00c19c00(DAT_01d5bad4,0,0);
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_00a7c8a0();
        uVar5 = 0;
        if (piVar4 != (int *)0x0) {
          puVar9 = &DAT_01b34c30;
          (**(code **)(*piVar4 + 4))(&DAT_01b34c30);
          iVar3 = FUN_00dd6d80(puVar9);
          uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
        }
        *(uint *)(param_1 + 0x11c) = uVar5;
        if (uVar5 != 0) {
          FUN_0041db20();
        }
      }
    }
    iVar3 = FUN_00c13920();
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00c13920();
      iVar3 = (**(code **)(*piVar4 + 0x28))(0);
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_00c13920();
        (**(code **)(*piVar4 + 0x28))(0);
        iVar3 = FUN_00a7c8a0();
        if (iVar3 != 0) {
          iVar3 = FUN_00412580(iVar3);
          if (iVar3 != 0) {
            iVar3 = FUN_00b7c980(0);
            FUN_00a8ee20(iVar3 / 2);
          }
        }
      }
    }
  }
  if ((DAT_01bea090 & 0x10) == 0) {
    pcVar7 = "btl_sam_3";
    pbVar2 = DAT_018b925c;
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_00d518c7:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00d518cc;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_00d518c7;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d518cc:
    if (iVar3 != 0) {
      pcVar7 = "btl_sam_2_end";
      pbVar2 = DAT_018b925c;
      do {
        bVar1 = *pbVar2;
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_00d518f7:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00d518fc;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_00d518f7;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d518fc:
      if (iVar3 != 0) goto LAB_00d519de;
    }
    *(undefined2 *)(param_1 + 0x124) = 4;
    DAT_01bea090 = DAT_01bea090 | 0x10;
    DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
    iVar3 = FUN_00c19c00(DAT_01d5bad4,0,0);
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        uVar6 = FUN_00a7c8a0();
        iVar3 = FUN_0041c9e0(uVar6);
        *(int *)(param_1 + 0x11c) = iVar3;
        if (iVar3 != 0) {
          FUN_0041db20();
        }
      }
    }
    iVar3 = FUN_00c13920();
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00c13920();
      iVar3 = (**(code **)(*piVar4 + 0x28))(0);
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_00c13920();
        (**(code **)(*piVar4 + 0x28))(0);
        iVar3 = FUN_00a7c8a0();
        if (iVar3 != 0) {
          piVar4 = (int *)FUN_00412580(iVar3);
          if (piVar4 != (int *)0x0) {
            FUN_00a8ee20(1);
            FUN_00d44940();
            FUN_00b8a040(1,0,0);
            (**(code **)(*piVar4 + 0x388))(0);
          }
        }
      }
    }
  }
LAB_00d519de:
  pcVar7 = "btl_sam_2_end";
  pbVar2 = DAT_018b925c;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_00d51a08:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00d51a0d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_00d51a08;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d51a0d:
  if (iVar3 == 0) {
    uStack_20 = 0xbda46a35;
    uStack_1c = 0x40e0de40;
    uStack_18 = 0x41bf1893;
    uStack_30 = 0;
    uStack_2c = 0x3c8efa35;
    uStack_28 = 0;
    FUN_00a4d790(&uStack_20,&uStack_30,0);
  }
  return;
}

// 00D51A60  cPa50::vf30  size=79  [class]
undefined * cPa50::vf30(byte *param_1)

{
  byte bVar1;
  char *pcVar2;
  bool bVar3;
  
  pcVar2 = "ObjDispOff";
  while( true ) {
    bVar1 = *param_1;
    bVar3 = bVar1 < (byte)*pcVar2;
    if (bVar1 != *pcVar2) break;
    if (bVar1 == 0) {
      return &DAT_00d47a50;
    }
    bVar1 = param_1[1];
    bVar3 = bVar1 < (byte)pcVar2[1];
    if (bVar1 != pcVar2[1]) break;
    param_1 = param_1 + 2;
    pcVar2 = pcVar2 + 2;
    if (bVar1 == 0) {
      return &DAT_00d47a50;
    }
  }
  return (undefined *)(~-(uint)(1 - bVar3 != (uint)(bVar3 != 0)) & 0xd47a50);
}

// 00D51AB0  FUN_00d51ab0  size=192  [callgraph]
void __fastcall FUN_00d51ab0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 300) == 1) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar3);
      if ((iVar2 != 0) &&
         ((iVar2 = FUN_00a8cab0(), iVar2 == 0 || (iVar2 = FUN_00a8cab0(), iVar2 == 2)))) {
        *(undefined4 *)(param_1 + 300) = 0;
      }
    }
  }
  if ((((*(int *)(param_1 + 0x11c) != 0) && (*(int *)(*(int *)(param_1 + 0x11c) + 0x120c) != 0)) &&
      (*(int *)(param_1 + 300) == 0)) && (iVar2 = FUN_00c81c60(0x10), iVar2 == 0)) {
    FUN_00a4ac40(0xf07,"START",0x42);
    *(short *)(param_1 + 0x124) = *(short *)(param_1 + 0x124) + 1;
    FUN_00c81e40(0x10);
  }
  return;
}

// 00D51B70  FUN_00d51b70  size=844  [callgraph]
void __fastcall FUN_00d51b70(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined1 local_f4 [4];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0 [30];
  undefined4 uStack_68;
  undefined4 local_50;
  undefined1 uStack_44;
  undefined1 local_2c;
  
  uStack_1a4 = 0xd51b8c;
  FUN_0118f7b0();
  local_50 = 0;
  local_e0[0] = 0x14;
  local_2c = 5;
  local_180 = 0x40a00000;
  local_17c = 0;
  local_178 = 0xc2460000;
  local_174 = local_184;
  local_170 = 0x40a00000;
  local_16c = 0;
  local_168 = 0xc23a0000;
  local_164 = local_184;
  local_160 = 0x40a00000;
  local_15c = 0x41200000;
  local_158 = 0xc2460000;
  local_154 = local_184;
  local_150 = 0x40a00000;
  local_14c = 0x41200000;
  local_148 = 0xc23a0000;
  local_144 = local_184;
  local_140 = 0xc0a00000;
  local_13c = 0;
  local_138 = 0xc2460000;
  local_134 = local_184;
  local_130 = 0xc0a00000;
  local_12c = 0;
  local_128 = 0xc23a0000;
  local_124 = local_184;
  local_120 = 0xc0a00000;
  local_11c = 0x41200000;
  local_118 = 0xc2460000;
  local_114 = local_184;
  local_110 = 0xc0a00000;
  local_10c = 0x41200000;
  local_108 = 0xc23a0000;
  local_104 = local_184;
  local_190 = 0;
  local_18c = 0;
  local_188 = 0xc2400000;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  uStack_1a4 = 0xd51cce;
  piVar1 = (int *)FUN_00910da0();
  uStack_1a4 = 1;
  puStack_1a8 = &local_f0;
  uVar2 = (**(code **)(*piVar1 + 0x14))(local_f4,local_e0,&local_180,&local_190);
  FUN_00910ab0(uVar2);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x130),0x40000000);
  FUN_0118f7b0();
  uStack_68 = 0;
  uStack_f8 = 0x14;
  uStack_44 = 5;
  uStack_198 = 0x40a00000;
  uStack_194 = 0;
  local_190 = 0xc2a2cccd;
  local_188 = 0x40a00000;
  local_184 = 0;
  local_180 = 0xc29d3333;
  local_178 = 0x40a00000;
  local_174 = 0x41200000;
  local_170 = 0xc2a2cccd;
  local_168 = 0x40a00000;
  local_164 = 0x41200000;
  local_160 = 0xc29d3333;
  local_158 = 0xc0a00000;
  local_154 = 0;
  local_150 = 0xc2a2cccd;
  local_148 = 0xc0a00000;
  local_144 = 0;
  local_140 = 0xc29d3333;
  local_138 = 0xc0a00000;
  local_134 = 0x41200000;
  local_130 = 0xc2a2cccd;
  local_128 = 0xc0a00000;
  local_124 = 0x41200000;
  local_120 = 0xc29d3333;
  local_108 = 0;
  local_104 = 0;
  uStack_100 = 0xc2a00000;
  puStack_1a8 = (undefined4 *)0x0;
  uStack_1a4 = 0;
  piVar1 = (int *)FUN_00910da0();
  uVar2 = (**(code **)(*piVar1 + 0x14))(&local_10c,&uStack_f8,&uStack_198,&local_108,&puStack_1a8,1)
  ;
  FUN_00910ab0(uVar2);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x134),0x40000000);
  return;
}

// 00D5A470  cPa50::vf08  size=233  [class]
void __fastcall cPa50::vf08(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  DAT_01bea094 = DAT_01bea094 | 0x1000000;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  FUN_00c81e90(7);
  FUN_00c81e90(8);
  FUN_00c81e90(0xe);
  FUN_00c81e90(0x10);
  DAT_01bea090 = DAT_01bea090 & 0xffffffef | 0x100;
  *(undefined2 *)(param_1 + 0x124) = 0;
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00c13920();
      (**(code **)(*piVar2 + 0x28))(0);
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d80(puVar4);
        if (iVar1 != 0) {
          piVar2[0x2dd] = 0;
        }
      }
    }
  }
  FUN_00d51b70();
  *(undefined4 *)(param_1 + 0x138) = 0;
  uVar3 = FUN_00e03ea0("btl_sam_3_start");
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  return;
}

// 00D5A560  cPa50::vf2C  size=20  [class]
void cPa50::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D60800  cPa50::vf34  size=93  [__FILE__]
undefined4 cPa50::vf34(byte *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = "moviePlay";
  do {
    bVar1 = *param_1;
    bVar4 = bVar1 < (byte)*pcVar3;
    if (bVar1 != *pcVar3) {
LAB_00d60830:
      iVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      goto LAB_00d60835;
    }
    if (bVar1 == 0) break;
    bVar1 = param_1[1];
    bVar4 = bVar1 < (byte)pcVar3[1];
    if (bVar1 != pcVar3[1]) goto LAB_00d60830;
    param_1 = param_1 + 2;
    pcVar3 = pcVar3 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00d60835:
  if (iVar2 == 0) {
    FUN_00d5dd30(&LAB_00d5a580,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\App/pa50.cpp",0xe7
                );
    return 1;
  }
  return 0;
}

// 00D67150  cPa50::vf0C  size=988  [class]
/* WARNING: Removing unreachable block (ram,0x00d672b9) */
/* WARNING: Removing unreachable block (ram,0x00d672c3) */
/* WARNING: Removing unreachable block (ram,0x00d609e7) */
/* WARNING: Removing unreachable block (ram,0x00d609f1) */

void __fastcall cPa50::vf0C(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int *piVar6;
  undefined4 unaff_EDI;
  undefined *puVar7;
  int *local_dc;
  int *local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8 [50];
  
  *(undefined4 *)(param_1 + 0x11c) = 0;
  iVar2 = FUN_00c19c00(DAT_01d5bad4,0,0);
  if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar7 = &DAT_01b34c30;
      (**(code **)(*piVar3 + 4))(&DAT_01b34c30);
      iVar2 = FUN_00dd6d80(puVar7);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
    }
    *(uint *)(param_1 + 0x11c) = uVar4;
    if ((uVar4 == 0) || (iVar2 = FUN_004183c0(), iVar2 != 0)) {
      FUN_00a55830(1);
    }
    else {
      FUN_00a55850();
    }
  }
  if ((*(int *)(param_1 + 0x138) == 0) &&
     (iVar2 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x13c),1), iVar2 != 0)) {
    local_d8 = local_c8;
    local_dc = (int *)0x0;
    local_d4 = 0x32;
    local_d0 = 0;
    local_cc = 0;
    uVar5 = FUN_00e03ea0("round_three");
    FUN_00a18df0(&local_dc,uVar5);
    piVar3 = local_d8;
    piVar6 = local_d8;
    if (local_d8 != local_d8 + local_d0) {
      do {
        if ((*piVar6 != 0) && (iVar2 = FUN_00a7c8a0(), piVar3 = local_d8, iVar2 != 0)) {
          piVar3 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar3 + 0x20))();
          piVar3 = local_d8;
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != piVar3 + local_d0);
    }
    if (piVar3 != (int *)0x0) {
      local_d0 = 0;
      if (local_cc != 0) {
        FUN_00dd48d0(piVar3,0);
        local_cc = 0;
      }
      local_d8 = (int *)0x0;
      local_d4 = 0;
    }
    *(undefined4 *)(param_1 + 0x138) = 1;
  }
  switch(*(short *)(param_1 + 0x124)) {
  case 0:
    if (*(int *)(param_1 + 0x120) != 0) {
LAB_00d67311:
      *(short *)(param_1 + 0x124) = *(short *)(param_1 + 0x124) + 1;
      return;
    }
    if ((*(int *)(param_1 + 0x11c) != 0) && (iVar2 = FUN_0041dbb0(), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x120) = 1;
    }
    break;
  case 1:
    FUN_00c81e40(0xe);
    *(short *)(param_1 + 0x124) = *(short *)(param_1 + 0x124) + 1;
    return;
  case 2:
    piVar3 = (int *)FUN_00c13920(unaff_EDI,unaff_ESI,unaff_EBP);
    iVar2 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar7);
      if ((iVar1 != 0) &&
         (((iVar1 = FUN_00a8cab0(), iVar1 == 0xc9 || (iVar1 = FUN_00a8cab0(), iVar1 == 0xca)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0xcb)))) {
        *(undefined4 *)(param_1 + 300) = 1;
      }
    }
    iVar1 = FUN_00c1d6a0();
    if (iVar1 != 0) {
      if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
        puVar7 = &DAT_01be9db8;
        (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
        iVar2 = FUN_00dd6d80(puVar7);
        if (iVar2 != 0) {
          (**(code **)(*piVar3 + 0x388))(0);
        }
      }
      *(short *)(param_1 + 0x124) = *(short *)(param_1 + 0x124) + 1;
      FUN_00da0d70();
      local_dc = &local_cc;
      local_d8 = (int *)0x32;
      local_d4 = 0;
      local_d0 = 0;
      uVar5 = FUN_00e03ea0("round_three");
      FUN_00a18df0(&stack0xffffff20,uVar5);
      piVar3 = local_dc;
      piVar6 = local_dc;
      if (local_dc != local_dc + local_d4) {
        do {
          if ((*piVar6 != 0) && (iVar2 = FUN_00a7c8a0(), piVar3 = local_dc, iVar2 != 0)) {
            piVar3 = (int *)FUN_00a7c8a0();
            (**(code **)(*piVar3 + 0x20))();
            piVar3 = local_dc;
          }
          piVar6 = piVar6 + 1;
        } while (piVar6 != piVar3 + local_d4);
      }
      if ((piVar3 != (int *)0x0) && (local_d4 = 0, local_d0 != 0)) {
        FUN_00dd48d0(piVar3,0);
      }
      *(undefined4 *)(param_1 + 0x138) = 1;
    }
    return;
  case 3:
    if (((byte)DAT_01bea090 & 0x10) != 0) goto LAB_00d67311;
    if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d67374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x11c) + 0x34c))();
      return;
    }
    break;
  case 4:
    FUN_00d51ab0();
    return;
  }
  return;
}

// 00D70070  cPa50::vf00  size=54  [class]
undefined4 * __thiscall cPa50::vf00(undefined4 *param_1,byte param_2)

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

