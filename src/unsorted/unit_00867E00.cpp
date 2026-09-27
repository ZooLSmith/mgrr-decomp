// src/unsorted/unit_00867E00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00867E00..00867E00, 1 functions

#include "mgrr.h"

// 00867E00  FUN_00867e00  size=3015  [run]
undefined4
FUN_00867e00(undefined4 param_1,float *param_2,undefined4 param_3,float *param_4,int param_5)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined4 *local_140;
  undefined4 *local_13c;
  byte local_135;
  float local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [2];
  char local_fe;
  undefined1 local_fb;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_150 = 0.0;
  local_14c = 0.0;
  local_148 = 0.0;
  local_140 = *(undefined4 **)(param_5 + 0x4b4);
  local_144 = 1.0;
  *param_4 = 0.0;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_4[3] = 1.0;
  iVar2 = FUN_009f93b0(local_140);
  puVar3 = local_140;
  if ((iVar2 != 0) &&
     (iVar2 = FUN_009f8ea0(local_100,0x10,local_140,0), puVar3 = local_140, iVar2 != 0)) {
    iVar2 = FUN_00d46780();
    if (iVar2 != 0) {
      if (local_fe == 'c') {
        local_fe = '0';
      }
      else if (local_fe == 'd') {
        local_fe = '1';
      }
      local_fb = 0x30;
    }
    puVar3 = (undefined4 *)FUN_009fde60(local_100);
  }
  if (0x20120 < puVar3) {
    switch(puVar3) {
    case (undefined4 *)0x20140:
    case (undefined4 *)0x20150:
    case (undefined4 *)0x20160:
    case (undefined4 *)0x20170:
      puVar3 = &local_60;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      local_12c = 0;
      uVar6 = 0x3e99999a;
      uVar4 = 0x3fc00000;
      break;
    default:
      goto switchD_00867ecf_caseD_20031;
    case (undefined4 *)0x20190:
      puVar3 = &local_40;
      local_40 = 0x3fc90fdb;
      local_3c = 0;
      local_38 = 0;
      local_12c = 0x3f000000;
      uVar6 = 0x3f4ccccd;
      uVar4 = 0x40400000;
      break;
    case (undefined4 *)0x20220:
      puVar3 = &local_20;
      local_20 = 0x3fc90fdb;
      local_1c = 0;
      local_18 = 0;
      local_12c = 0xbdcccccd;
      uVar6 = 0x3e99999a;
      uVar4 = 0x3fc00000;
      uVar5 = 2;
      goto LAB_008688ed;
    }
    uVar5 = 0;
LAB_008688ed:
    local_128 = 0;
    local_130 = 0;
    iVar2 = FUN_0085f9d0(param_1,param_2,param_3,&local_150,param_5,uVar5,uVar4,uVar6,&local_130,
                         puVar3);
    if (iVar2 != 0) {
      *param_4 = local_150;
      param_4[1] = local_14c;
      param_4[2] = local_148;
      param_4[3] = local_144;
    }
    goto switchD_00867ecf_caseD_20031;
  }
  if (puVar3 == (undefined4 *)0x20120) {
    local_134 = 100.0;
    local_a0 = 0x3fc90fdb;
    local_9c = 0;
    local_98 = 0;
    local_130 = 0;
    local_12c = 0;
    local_128 = 0;
    iVar2 = FUN_0085f9d0(param_1,param_2,param_3,&local_150,param_5,0,0x3f800000,0x3e99999a,
                         &local_130,&local_a0);
    if (iVar2 != 0) {
      *param_4 = local_150;
      param_4[1] = local_14c;
      param_4[2] = local_148;
      param_4[3] = local_144;
      local_134 = SQRT((param_2[2] - local_148) * (param_2[2] - local_148) +
                       (param_2[1] - local_14c) * (param_2[1] - local_14c) +
                       (*param_2 - local_150) * (*param_2 - local_150));
    }
    local_80 = 0;
    local_7c = 0;
    local_78 = 0x3fc90fdb;
    local_130 = 0;
    local_12c = 0;
    local_128 = 0;
    iVar2 = FUN_0085f9d0(param_1,param_2,param_3,&local_150,param_5,0,0x40400000,0x3e99999a,
                         &local_130,&local_80);
    if ((iVar2 != 0) &&
       (SQRT((param_2[2] - local_148) * (param_2[2] - local_148) +
             (param_2[1] - local_14c) * (param_2[1] - local_14c) +
             (*param_2 - local_150) * (*param_2 - local_150)) < local_134)) {
      *param_4 = local_150;
      param_4[1] = local_14c;
      param_4[2] = local_148;
      param_4[3] = local_144;
    }
    goto switchD_00867ecf_caseD_20031;
  }
  switch(puVar3) {
  case (undefined4 *)0x20030:
    local_13c = (undefined4 *)0x42c80000;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_120 = 0;
    local_11c = 0;
    local_118 = 0;
    iVar2 = FUN_0085f9d0(param_1,param_2,param_3,&local_150,param_5,0,0x3f99999a,0x3f000000,
                         &local_120,&local_70);
    if (iVar2 != 0) {
      *param_4 = local_150;
      param_4[1] = local_14c;
      param_4[2] = local_148;
      param_4[3] = local_144;
      local_13c = (undefined4 *)
                  SQRT((*param_2 - local_150) * (*param_2 - local_150) +
                       (param_2[1] - local_14c) * (param_2[1] - local_14c) +
                       (param_2[2] - local_148) * (param_2[2] - local_148));
    }
    local_140 = &local_110;
    local_110 = 0x34;
    local_10c = 0x54;
    local_134 = 2.8026e-45;
    do {
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      local_120 = 0;
      local_11c = 0xbf800000;
      local_118 = 0;
      iVar2 = FUN_0085f9d0(param_1,param_2,param_3,&local_150,param_5,*local_140,0x3f99999a,
                           0x3e99999a,&local_120,&local_90);
      if ((iVar2 != 0) &&
         (fVar1 = SQRT((param_2[2] - local_148) * (param_2[2] - local_148) +
                       (*param_2 - local_150) * (*param_2 - local_150) +
                       (param_2[1] - local_14c) * (param_2[1] - local_14c)),
         fVar1 < (float)local_13c)) {
        *param_4 = local_150;
        param_4[1] = local_14c;
        param_4[2] = local_148;
        param_4[3] = local_144;
        local_13c = (undefined4 *)fVar1;
      }
      local_140 = local_140 + 1;
      local_134 = (float)((int)local_134 + -1);
    } while (local_134 != 0.0);
    break;
  case (undefined4 *)0x20040:
    puVar7 = &local_d0;
    local_d0 = 0;
    local_cc = 0;
    puVar3 = &local_120;
    local_c8 = 0;
    local_120 = 0;
    local_11c = 0;
    local_118 = 0;
    uVar5 = 0x3e99999a;
    uVar4 = 0x3f4ccccd;
    goto LAB_008684a7;
  case (undefined4 *)0x20060:
    local_140 = (undefined4 *)0x42c80000;
    local_f0 = 0x3fc90fdb;
    local_ec = 0;
    local_e8 = 0;
    local_120 = 0;
    local_11c = 0x3dcccccd;
    local_118 = 0x3dcccccd;
    iVar2 = FUN_0085f9d0(param_1,param_2,param_3,&local_150,param_5,0,0x3fc00000,0x3f000000,
                         &local_120,&local_f0);
    if (iVar2 != 0) {
      *param_4 = local_150;
      param_4[1] = local_14c;
      param_4[2] = local_148;
      param_4[3] = local_144;
      local_140 = (undefined4 *)
                  SQRT((*param_2 - local_150) * (*param_2 - local_150) +
                       (param_2[1] - local_14c) * (param_2[1] - local_14c) +
                       (param_2[2] - local_148) * (param_2[2] - local_148));
    }
    local_13c = &local_110;
    local_110 = 0x10;
    local_10c = 0x17;
    local_134 = 2.8026e-45;
    do {
      local_b0 = 0;
      local_ac = 0;
      local_a8 = 0;
      local_120 = 0;
      local_11c = 0;
      local_118 = 0;
      iVar2 = FUN_0085f9d0(param_1,param_2,param_3,&local_150,param_5,*local_13c,0x3f4ccccd,
                           0x3f000000,&local_120,&local_b0);
      if ((iVar2 != 0) &&
         (fVar1 = SQRT((param_2[2] - local_148) * (param_2[2] - local_148) +
                       (*param_2 - local_150) * (*param_2 - local_150) +
                       (param_2[1] - local_14c) * (param_2[1] - local_14c)),
         fVar1 < (float)local_140)) {
        *param_4 = local_150;
        param_4[1] = local_14c;
        param_4[2] = local_148;
        param_4[3] = local_144;
        local_140 = (undefined4 *)fVar1;
      }
      local_13c = local_13c + 1;
      local_134 = (float)((int)local_134 + -1);
    } while (local_134 != 0.0);
    break;
  case (undefined4 *)0x20070:
    local_140 = (undefined4 *)0x42c80000;
    local_30 = 0xbe99999a;
    local_2c = 0;
    local_28 = 0;
    local_120 = 0;
    local_11c = 0x3dcccccd;
    local_118 = 0x3dcccccd;
    iVar2 = FUN_0085f9d0(param_1,param_2,param_3,&local_150,param_5,2,0x3fa00000,0x3e4ccccd,
                         &local_120,&local_30);
    if (iVar2 != 0) {
      *param_4 = local_150;
      param_4[1] = local_14c;
      param_4[2] = local_148;
      param_4[3] = local_144;
      local_140 = (undefined4 *)
                  SQRT((*param_2 - local_150) * (*param_2 - local_150) +
                       (param_2[1] - local_14c) * (param_2[1] - local_14c) +
                       (param_2[2] - local_148) * (param_2[2] - local_148));
    }
    local_13c = &local_110;
    local_110 = 8;
    local_10c = 0xc;
    local_108 = 0x10;
    local_104 = 0x14;
    local_135 = 0;
    do {
      local_120 = 0;
      local_11c = 0;
      local_118 = 0;
      if (local_135 < 2) {
        local_118 = 0x3fc90fdb;
      }
      local_130 = 0;
      local_12c = 0;
      local_128 = 0;
      iVar2 = FUN_0085f9d0(param_1,param_2,param_3,&local_150,param_5,*local_13c,0x3f800000,
                           0x3e99999a,&local_130,&local_120);
      if ((iVar2 != 0) &&
         (fVar1 = SQRT((param_2[2] - local_148) * (param_2[2] - local_148) +
                       (*param_2 - local_150) * (*param_2 - local_150) +
                       (param_2[1] - local_14c) * (param_2[1] - local_14c)),
         fVar1 < (float)local_140)) {
        *param_4 = local_150;
        param_4[1] = local_14c;
        param_4[2] = local_148;
        param_4[3] = local_144;
        local_140 = (undefined4 *)fVar1;
      }
      local_13c = local_13c + 1;
      local_135 = local_135 + 1;
    } while (local_135 < 4);
    break;
  case (undefined4 *)0x20080:
    puVar7 = &local_50;
    local_50 = 0;
    local_4c = 0;
    puVar3 = &local_130;
    local_48 = 0;
    local_130 = 0;
    local_12c = 0;
    local_128 = 0;
    uVar5 = 0x3f000000;
    uVar4 = 0x40000000;
LAB_008684a7:
    iVar2 = FUN_0085f9d0(param_1,param_2,param_3,&local_150,param_5,0,uVar4,uVar5,puVar3,puVar7);
    if (iVar2 != 0) {
      *param_4 = local_150;
      param_4[1] = local_14c;
      param_4[2] = local_148;
      param_4[3] = local_144;
    }
    break;
  case (undefined4 *)0x20100:
    local_140 = (undefined4 *)0x42c80000;
    local_e0 = 0x3fc90fdb;
    local_dc = 0;
    local_d8 = 0;
    local_130 = 0;
    local_12c = 0x3e4ccccd;
    local_128 = 0xbe4ccccd;
    iVar2 = FUN_0085f9d0(param_1,param_2,param_3,&local_150,param_5,1,0x3f99999a,0x3f000000,
                         &local_130,&local_e0);
    if (iVar2 != 0) {
      *param_4 = local_150;
      param_4[1] = local_14c;
      param_4[2] = local_148;
      param_4[3] = local_144;
      local_140 = (undefined4 *)
                  SQRT((*param_2 - local_150) * (*param_2 - local_150) +
                       (param_2[1] - local_14c) * (param_2[1] - local_14c) +
                       (param_2[2] - local_148) * (param_2[2] - local_148));
    }
    local_13c = &local_110;
    local_110 = 0x103;
    local_10c = 0x203;
    local_108 = 0x303;
    local_134 = 4.2039e-45;
    do {
      local_c0 = 0;
      local_bc = 0;
      local_b8 = 0;
      local_130 = 0;
      local_12c = 0xbf000000;
      local_128 = 0;
      iVar2 = FUN_0085f9d0(param_1,param_2,param_3,&local_150,param_5,*local_13c,0x3fc00000,
                           0x3e99999a,&local_130,&local_c0);
      if ((iVar2 != 0) &&
         (fVar1 = SQRT((param_2[2] - local_148) * (param_2[2] - local_148) +
                       (*param_2 - local_150) * (*param_2 - local_150) +
                       (param_2[1] - local_14c) * (param_2[1] - local_14c)),
         fVar1 < (float)local_140)) {
        *param_4 = local_150;
        param_4[1] = local_14c;
        param_4[2] = local_148;
        param_4[3] = local_144;
        local_140 = (undefined4 *)fVar1;
      }
      local_13c = local_13c + 1;
      local_134 = (float)((int)local_134 + -1);
    } while (local_134 != 0.0);
  }
switchD_00867ecf_caseD_20031:
  if (((*param_4 == 0.0) && (param_4[1] == 0.0)) && (param_4[2] == 0.0)) {
    return 0;
  }
  return 1;
}

