// src/behavior/Behavior.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8B7F0..00AC1850, 211 functions

#include "types.h"

// 00A8B7F0  Behavior::vf4C  size=67  [class]
void __fastcall Behavior::vf4C(int *param_1)

{
  (**(code **)(*param_1 + 0x218))();
  if ((param_1[0x1cd] < 1) && (0 < param_1[0x1cc])) {
    param_1[0x1cc] = param_1[0x1cc] + -1;
  }
  if ((param_1[499] != 0) && (param_1[500] != 0)) {
    FUN_00d82990(param_1[500]);
  }
  return;
}

// 00A91E90  Behavior::startup  size=1250  [class]
undefined4 __fastcall Behavior::startup(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iStack_18;
  
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  pcVar1 = *(code **)(*param_1 + 0x1d4);
  param_1[0x180] = 0x3dcccccd;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1d5] = 0;
  param_1[399] = 0;
  param_1[0x18e] = 0;
  param_1[0x1f2] = 0;
  param_1[400] = 0;
  (*pcVar1)(0);
  param_1[0x1b1] = -1;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = iStack_18;
  param_1[0x1b9] = -1;
  param_1[0x1b8] = -1;
  param_1[0x1ba] = 0x3f800000;
  param_1[0x1ce] = 0x3f800000;
  param_1[0x1bb] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1b0] = 0;
  param_1[0x19d] = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 0;
  param_1[0x203] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1da] = 0;
  param_1[0x200] = 0;
  *(undefined1 *)(param_1 + 0x164) = 0;
  if ((param_1[300] == 0x60330) || (param_1[300] == 0x60332)) {
    iVar2 = FUN_00de4550("_0_1_clp.bxm",0);
    if (iVar2 != 0) {
      iVar3 = FUN_00dd3500(0xbe0,&DAT_01b7bd48);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_009fad80();
      }
      param_1[0x1db] = iVar3;
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_01665048,param_1[300]);
        return 0;
      }
      uVar6 = 0x3f000000;
      piVar5 = param_1;
      uVar4 = FUN_00a7c800(param_1,0x3f000000);
      iVar2 = FUN_00a04230(iVar2,uVar4,piVar5,uVar6);
      if (iVar2 == 0) {
        iVar2 = param_1[0x1db];
        if (iVar2 != 0) {
          FUN_00a01300();
          FUN_00dd4920(iVar2);
          param_1[0x1db] = 0;
        }
        FUN_00dd5650(&DAT_01664fd8,param_1[0x12d],param_1[300]);
      }
      else {
        iVar2 = FUN_00de4550("_0_1_clw.bxm",0);
        if (iVar2 != 0) {
          FUN_00a04490(iVar2,param_1);
        }
        iVar2 = FUN_00de4550("_0_1_clh.bxm",0);
        if (iVar2 != 0) {
          FUN_00a04420(iVar2,param_1);
        }
        param_1[0x1da] = 1;
      }
    }
  }
  else {
    iVar2 = FUN_00de4550("_0_0_clp.bxm",0);
    if (iVar2 != 0) {
      iVar3 = FUN_00dd3500(0xbe0,&DAT_01b7bd48);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_009fad80();
      }
      param_1[0x1db] = iVar3;
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_01665048,param_1[300]);
        return 0;
      }
      uVar6 = 0x3f000000;
      piVar5 = param_1;
      uVar4 = FUN_00a7c800(param_1,0x3f000000);
      iVar2 = FUN_00a04230(iVar2,uVar4,piVar5,uVar6);
      if (iVar2 == 0) {
        iVar2 = param_1[0x1db];
        if (iVar2 != 0) {
          FUN_00a01300();
          FUN_00dd4920(iVar2);
          param_1[0x1db] = 0;
        }
        FUN_00dd5650(&DAT_01664fd8,param_1[0x12d],param_1[300]);
      }
      else {
        iVar2 = FUN_00de4550("_0_0_clw.bxm",0);
        if (iVar2 != 0) {
          FUN_00a04490(iVar2,param_1);
        }
        iVar2 = FUN_00de4550("_0_0_clh.bxm",0);
        if (iVar2 != 0) {
          FUN_00a04420(iVar2,param_1);
        }
      }
      if (param_1[300] == 0x20110) {
        iVar2 = FUN_00de4550("_0_1_clp.bxm",0);
        if (iVar2 != 0) {
          iVar3 = FUN_00dd3500(0xbe0,&DAT_01b7bd48);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_009fad80();
          }
          param_1[0x1dc] = iVar3;
          if (iVar3 == 0) {
            FUN_00dd5650(&DAT_01665048,param_1[300]);
            return 0;
          }
          uVar6 = 0x3f000000;
          piVar5 = param_1;
          uVar4 = FUN_00a7c800(param_1,0x3f000000);
          iVar2 = FUN_00a04230(iVar2,uVar4,piVar5,uVar6);
          if (iVar2 == 0) {
            iVar2 = param_1[0x1dc];
            if (iVar2 != 0) {
              FUN_00a01300();
              FUN_00dd4920(iVar2);
              param_1[0x1dc] = 0;
            }
            FUN_00dd5650(&DAT_01664fd8,param_1[0x12d],param_1[300]);
          }
          else {
            iVar2 = FUN_00de4550("_0_1_clw.bxm",0);
            if (iVar2 != 0) {
              FUN_00a04490(iVar2,param_1);
            }
            iVar2 = FUN_00de4550("_0_1_clh.bxm",0);
            if (iVar2 != 0) {
              FUN_00a04420(iVar2,param_1);
              param_1[0x1da] = 1;
              goto LAB_00a92315;
            }
          }
        }
      }
      param_1[0x1da] = 1;
    }
  }
LAB_00a92315:
  pcVar1 = *(code **)(*param_1 + 0x1f0);
  param_1[0x1af] = 0;
  (*pcVar1)(1);
  param_1[0x1e1] = 0x3f800000;
  pcVar1 = *(code **)(*param_1 + 0x1ec);
  param_1[0x205] = -1;
  param_1[0x204] = 0;
  (*pcVar1)();
  param_1[0x20f] = param_1[0x147];
  param_1[0x210] = 1;
  param_1[0x211] = 1;
  return 1;
}

// 00A92380  Behavior::setupCloth  size=283  [class]
undefined4 __fastcall Behavior::setupCloth(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00de4550("_0_0_clp.bxm",0);
  if (iVar1 != 0) {
    iVar2 = FUN_00dd3500(0xbe0,&DAT_01b7bd48);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_009fad80();
    }
    *(int *)(param_1 + 0x76c) = iVar2;
    if (iVar2 != 0) {
      uVar4 = 0x3f000000;
      iVar2 = param_1;
      uVar3 = FUN_00a7c800(param_1,0x3f000000);
      iVar1 = FUN_00a04230(iVar1,uVar3,iVar2,uVar4);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x76c);
        if (iVar1 != 0) {
          FUN_00a01300();
          FUN_00dd4920(iVar1);
          *(undefined4 *)(param_1 + 0x76c) = 0;
        }
        FUN_00dd5650(&DAT_0166508c,*(undefined4 *)(param_1 + 0x4b0));
        return 0;
      }
      iVar1 = FUN_00de4550("_0_0_clw.bxm",0);
      if (iVar1 != 0) {
        FUN_00a04490(iVar1,param_1);
      }
      iVar1 = FUN_00de4550("_0_0_clh.bxm",0);
      if (iVar1 != 0) {
        FUN_00a04420(iVar1,param_1);
      }
      *(undefined4 *)(param_1 + 0x768) = 1;
      return 1;
    }
    FUN_00dd5650(&DAT_016650c8,*(undefined4 *)(param_1 + 0x4b0));
  }
  return 0;
}

// 00A92B10  Behavior::updateGroundSupportForParts  size=986  [class]
void __thiscall
Behavior::updateGroundSupportForParts
          (int param_1,undefined4 param_2,float *param_3,int *param_4,int *param_5,
          undefined1 *param_6)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  float unaff_ESI;
  float unaff_EDI;
  undefined4 *puStack_158;
  undefined4 *puStack_154;
  undefined1 **ppuStack_150;
  undefined1 **ppuStack_14c;
  float fStack_148;
  undefined1 *puStack_144;
  undefined4 *puStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  float fStack_130;
  undefined1 *puStack_12c;
  undefined4 *puStack_128;
  undefined1 *puStack_124;
  undefined1 local_110 [4];
  int iStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 auStack_a8 [88];
  undefined1 local_50 [76];
  
  puStack_124 = param_6;
  puStack_128 = (undefined4 *)0xa92b2a;
  iVar6 = FUN_00a12290();
  if (iVar6 == 0) {
    local_f0 = *(undefined4 *)(param_1 + 0x40);
    local_ec = *(undefined4 *)(param_1 + 0x44);
    local_e8 = *(undefined4 *)(param_1 + 0x48);
    local_e4 = *(undefined4 *)(param_1 + 0x4c);
  }
  else {
    local_f0 = *(undefined4 *)(iVar6 + 0x40);
    local_ec = *(undefined4 *)(iVar6 + 0x44);
    local_e8 = *(undefined4 *)(iVar6 + 0x48);
    local_e4 = *(undefined4 *)(iVar6 + 0x4c);
  }
  puStack_124 = (undefined1 *)0x5;
  puVar1 = (undefined4 *)(param_1 + 0x90);
  local_c0 = 0;
  puStack_12c = local_50;
  local_bc = 0x3f800000;
  local_b8 = 0;
  fStack_130 = 1.5535818e-38;
  puStack_128 = puVar1;
  FUN_00ddc1d0();
  puStack_124 = local_50;
  puStack_128 = &local_c0;
  puStack_12c = local_110;
  fStack_130 = 1.5535854e-38;
  D3DXVec3TransformNormal();
  fVar2 = (float)(param_1 + 0xb0);
  puStack_138 = &stack0xfffffee4;
  puStack_13c = (undefined1 *)0xa92bb8;
  puStack_134 = puStack_138;
  fStack_130 = fVar2;
  D3DXVec3TransformNormal();
  puStack_13c = (undefined1 *)0x5;
  puStack_144 = auStack_a8;
  fVar3 = *(float *)(param_1 + 0xe8);
  puStack_128 = (undefined4 *)((*(float *)(param_1 + 0xe0) + (float)puStack_128) * 0.1);
  puStack_124 = (undefined1 *)((*(float *)(param_1 + 0xe4) + (float)puStack_124) * 0.1);
  uStack_c8 = 0;
  uStack_c4 = 0x3f800000;
  local_c0 = 0;
  fStack_148 = 1.5536015e-38;
  puStack_140 = puVar1;
  FUN_00ddc1d0();
  puStack_13c = auStack_a8;
  puStack_140 = &uStack_c8;
  puStack_144 = &stack0xfffffee8;
  fStack_148 = 1.5536052e-38;
  D3DXVec3TransformNormal();
  ppuStack_150 = &puStack_124;
  puStack_154 = (undefined4 *)0xa92c3f;
  ppuStack_14c = ppuStack_150;
  fStack_148 = fVar2;
  D3DXVec3TransformNormal();
  fStack_130 = (*(float *)(param_1 + 0xe0) + fStack_130) * 0.15 + (float)puStack_140;
  puStack_154 = (undefined4 *)0x5;
  puStack_12c = (undefined1 *)
                ((*(float *)(param_1 + 0xe4) + (float)puStack_12c) * 0.15 + (float)puStack_13c);
  puStack_128 = (undefined4 *)
                ((*(float *)(param_1 + 0xe8) + (float)puStack_128) * 0.15 + (float)puStack_138);
  puStack_124 = (undefined1 *)((float)puStack_124 * 0.15 + (float)puStack_134);
  uStack_e0 = 0;
  uStack_dc = 0x3f800000;
  uStack_d8 = 0;
  puStack_158 = puVar1;
  FUN_00ddc1d0(&local_c0);
  puStack_154 = &local_c0;
  puStack_158 = &uStack_e0;
  D3DXVec3TransformNormal(local_110);
  D3DXVec3TransformNormal(&stack0xfffffee4,&stack0xfffffee4,fVar2);
  fVar2 = *(float *)(param_1 + 0xe8);
  puStack_128 = (undefined4 *)((*(float *)(param_1 + 0xe0) + (float)puStack_128) * -0.35000002);
  puStack_124 = (undefined1 *)((*(float *)(param_1 + 0xe4) + (float)puStack_124) * -0.35000002);
  piVar7 = (int *)FUN_009f8b60();
  puStack_158 = (undefined4 *)((float)puStack_128 * 1.1);
  puStack_154 = (undefined4 *)((float)puStack_124 * 1.1);
  ppuStack_150 = (undefined1 **)((fVar2 + (fVar3 + unaff_EDI) * 0.1) * -0.35000002 * 1.1);
  ppuStack_14c = (undefined1 **)(unaff_ESI * 0.1 * -0.35000002 * 1.1);
  fStack_108 = fStack_148 + (float)puStack_138;
  fStack_104 = (float)puStack_144 + (float)puStack_134;
  fStack_100 = (float)puStack_140 + fStack_130;
  fStack_fc = (float)puStack_13c + (float)puStack_12c;
  FUN_0090fa30(param_2,1,&fStack_108,0x3e19999a,&puStack_158,*piVar7 << 0x10 | 0x1e,
               "Behavior::updateGroundSupportForParts");
  iVar6 = FUN_00907640(param_2,&iStack_10c,param_3);
  if (iVar6 == 0) {
    *param_4 = 0;
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    FUN_0112bcf0();
    pfVar4 = *(float **)(iStack_10c + 0x10);
    *param_3 = *pfVar4;
    param_3[1] = pfVar4[1];
    param_3[2] = pfVar4[2];
    param_3[3] = pfVar4[3];
    if (param_5 != (int *)0x0) {
      iVar6 = *(int *)(*(int *)(iStack_10c + 0x10) + 0x28);
      *param_5 = *(char *)(iVar6 + 0x10) + iVar6;
    }
    iVar6 = *(int *)(*(int *)(iStack_10c + 0x10) + 0x28);
    if ((*(char *)(iVar6 + 0x18) == '\x01') && (iVar6 = *(char *)(iVar6 + 0x10) + iVar6, iVar6 != 0)
       ) {
      FUN_00910a40(iVar6);
      uVar5 = FUN_00915990(9);
      *(undefined1 *)(param_1 + 0x590) = uVar5;
    }
    if (*(float *)(param_1 + 0x600) <=
        SQRT((*param_3 - (float)puStack_138) * (*param_3 - (float)puStack_138) +
             (param_3[1] - (float)puStack_134) * (param_3[1] - (float)puStack_134) +
             (param_3[2] - fStack_130) * (param_3[2] - fStack_130))) {
      *param_4 = 0;
      return;
    }
    *param_3 = *param_3 - fStack_148;
    param_3[1] = param_3[1] - (float)puStack_144;
    param_3[2] = param_3[2] - (float)puStack_140;
    param_3[3] = param_3[3] - (float)puStack_13c;
    if (*param_4 == 1) {
      *param_4 = 2;
      return;
    }
    if (*param_4 == 0) {
      *param_4 = 1;
      return;
    }
  }
  return;
}

// 00A933E0  FUN_00a933e0  size=106  [callgraph]
void __fastcall FUN_00a933e0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x7a4);
  if (iVar1 != 0) {
    puVar3 = *(undefined4 **)(iVar1 + 4);
    if (puVar3 != puVar3 + *(int *)(iVar1 + 8)) {
      do {
        FUN_00d7b0f0();
        piVar2 = (int *)FUN_00d773c0();
        (**(code **)(*piVar2 + 0x10))(*puVar3);
        puVar3 = puVar3 + 1;
      } while (puVar3 != (undefined4 *)
                         (*(int *)(*(int *)(param_1 + 0x7a4) + 4) +
                         *(int *)(*(int *)(param_1 + 0x7a4) + 8) * 4));
    }
    if (*(undefined4 **)(param_1 + 0x7a4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x7a4))(1);
      *(undefined4 *)(param_1 + 0x7a4) = 0;
    }
  }
  return;
}

// 00A93450  FUN_00a93450  size=106  [callgraph]
void __fastcall FUN_00a93450(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x7ac);
  if (iVar1 != 0) {
    puVar3 = *(undefined4 **)(iVar1 + 4);
    if (puVar3 != puVar3 + *(int *)(iVar1 + 8)) {
      do {
        FUN_00d7b0f0();
        piVar2 = (int *)FUN_00d773c0();
        (**(code **)(*piVar2 + 0x10))(*puVar3);
        puVar3 = puVar3 + 1;
      } while (puVar3 != (undefined4 *)
                         (*(int *)(*(int *)(param_1 + 0x7ac) + 4) +
                         *(int *)(*(int *)(param_1 + 0x7ac) + 8) * 4));
    }
    if (*(undefined4 **)(param_1 + 0x7ac) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x7ac))(1);
      *(undefined4 *)(param_1 + 0x7ac) = 0;
    }
  }
  return;
}

// 00A934C0  FUN_00a934c0  size=106  [callgraph]
void __fastcall FUN_00a934c0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x7a8);
  if (iVar1 != 0) {
    puVar3 = *(undefined4 **)(iVar1 + 4);
    if (puVar3 != puVar3 + *(int *)(iVar1 + 8)) {
      do {
        FUN_00d7b0f0();
        piVar2 = (int *)FUN_00d773c0();
        (**(code **)(*piVar2 + 0x14))(*puVar3);
        puVar3 = puVar3 + 1;
      } while (puVar3 != (undefined4 *)
                         (*(int *)(*(int *)(param_1 + 0x7a8) + 4) +
                         *(int *)(*(int *)(param_1 + 0x7a8) + 8) * 4));
    }
    if (*(undefined4 **)(param_1 + 0x7a8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x7a8))(1);
      *(undefined4 *)(param_1 + 0x7a8) = 0;
    }
  }
  return;
}

// 00A93530  FUN_00a93530  size=65  [callgraph]
int __thiscall FUN_00a93530(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x7a4);
  if ((iVar2 != 0) && (piVar3 = *(int **)(iVar2 + 4), piVar3 != piVar3 + *(int *)(iVar2 + 8))) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)(*piVar3 + 0x380) == param_2) {
        return *piVar3;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return 0;
}

// 00A93580  FUN_00a93580  size=65  [callgraph]
int __thiscall FUN_00a93580(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x7ac);
  if ((iVar2 != 0) && (piVar3 = *(int **)(iVar2 + 4), piVar3 != piVar3 + *(int *)(iVar2 + 8))) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)(*piVar3 + 0x380) == param_2) {
        return *piVar3;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return 0;
}

// 00A935D0  FUN_00a935d0  size=61  [callgraph]
void __fastcall FUN_00a935d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x7ac);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 4), iVar2 != iVar2 + *(int *)(iVar1 + 8) * 4)) {
    do {
      FUN_00d7b890();
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x7ac) + 4) +
                      *(int *)(*(int *)(param_1 + 0x7ac) + 8) * 4);
  }
  return;
}

// 00A93610  FUN_00a93610  size=65  [callgraph]
int __thiscall FUN_00a93610(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x7a8);
  if ((iVar2 != 0) && (piVar3 = *(int **)(iVar2 + 4), piVar3 != piVar3 + *(int *)(iVar2 + 8))) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)(*piVar3 + 0x380) == param_2) {
        return *piVar3;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return 0;
}

// 00A93660  FUN_00a93660  size=98  [callgraph]
void __thiscall FUN_00a93660(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x7a8);
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 4), piVar2 != piVar2 + *(int *)(iVar1 + 8))) {
    do {
      iVar1 = FUN_00fdbbd0(*piVar2 + 0x394,param_3);
      if (iVar1 != 0) {
        (**(code **)(*param_2 + 8))(piVar2);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(*(int *)(param_1 + 0x7a8) + 4) +
                              *(int *)(*(int *)(param_1 + 0x7a8) + 8) * 4));
  }
  return;
}

// 00A936D0  FUN_00a936d0  size=86  [callgraph]
void __thiscall FUN_00a936d0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x7a8);
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 4), piVar2 != piVar2 + *(int *)(iVar1 + 8))) {
    do {
      if (*(int *)(*piVar2 + 0x380) == param_3) {
        (**(code **)(*param_2 + 8))(piVar2);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(*(int *)(param_1 + 0x7a8) + 4) +
                              *(int *)(*(int *)(param_1 + 0x7a8) + 8) * 4));
  }
  return;
}

// 00A93730  FUN_00a93730  size=68  [callgraph]
void __thiscall FUN_00a93730(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x7a8);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 4), iVar2 != iVar2 + *(int *)(iVar1 + 8) * 4)) {
    do {
      FUN_00d771d0(param_2);
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x7a8) + 4) +
                      *(int *)(*(int *)(param_1 + 0x7a8) + 8) * 4);
  }
  return;
}

// 00A93780  FUN_00a93780  size=88  [callgraph]
void __thiscall FUN_00a93780(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x7a8);
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 4), piVar2 != piVar2 + *(int *)(iVar1 + 8))) {
    do {
      iVar1 = FUN_00fdbbd0(*piVar2 + 0x394,param_2);
      if (iVar1 != 0) {
        FUN_00d7acc0();
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(*(int *)(param_1 + 0x7a8) + 4) +
                              *(int *)(*(int *)(param_1 + 0x7a8) + 8) * 4));
  }
  return;
}

// 00A937E0  FUN_00a937e0  size=61  [callgraph]
void __fastcall FUN_00a937e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x7a8);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 4), iVar2 != iVar2 + *(int *)(iVar1 + 8) * 4)) {
    do {
      FUN_00d7acc0();
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x7a8) + 4) +
                      *(int *)(*(int *)(param_1 + 0x7a8) + 8) * 4);
  }
  return;
}

// 00A93820  FUN_00a93820  size=61  [callgraph]
void __fastcall FUN_00a93820(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x7a8);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 4), iVar2 != iVar2 + *(int *)(iVar1 + 8) * 4)) {
    do {
      FUN_00d7b890();
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x7a8) + 4) +
                      *(int *)(*(int *)(param_1 + 0x7a8) + 8) * 4);
  }
  return;
}

// 00A938C0  FUN_00a938c0  size=75  [callgraph]
void __thiscall FUN_00a938c0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x7a8);
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 4), piVar2 != piVar2 + *(int *)(iVar1 + 8))) {
    do {
      if (*(int *)(*piVar2 + 0x380) == param_2) {
        FUN_00d7acc0();
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(*(int *)(param_1 + 0x7a8) + 4) +
                              *(int *)(*(int *)(param_1 + 0x7a8) + 8) * 4));
  }
  return;
}

// 00A93910  FUN_00a93910  size=75  [callgraph]
void __thiscall FUN_00a93910(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x7a8);
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 4), piVar2 != piVar2 + *(int *)(iVar1 + 8))) {
    do {
      if (*(int *)(*piVar2 + 0x380) == param_2) {
        FUN_00d7b890();
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(*(int *)(param_1 + 0x7a8) + 4) +
                              *(int *)(*(int *)(param_1 + 0x7a8) + 8) * 4));
  }
  return;
}

// 00A93960  Behavior::addBodyOffenseCollisionFromRigidBody  size=156  [class]
undefined4 __thiscall
Behavior::addBodyOffenseCollisionFromRigidBody
          (int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_2 == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_009f8b60();
  iVar2 = CollisionMesh::CollisionMesh(param_5,*puVar1,param_6);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_01665128);
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x3f0) = *(undefined4 *)(param_1 + 0x4f0);
  uVar3 = FUN_00915990(9);
  FUN_00d771d0(uVar3);
  FUN_00d78e50(*param_2);
  FUN_00a8c3b0(iVar2,param_3,param_4);
  FUN_00d7b0f0();
  FUN_00d7b890();
  return 1;
}

// 00A93A00  FUN_00a93a00  size=189  [between]
undefined4 __thiscall FUN_00a93a00(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  bool bVar6;
  int unaff_retaddr;
  
  (**(code **)(**(int **)(param_1 + 0x7a8) + 8))(&param_2);
  FUN_00d77200();
  Collision::addObjDatReference(*(undefined4 *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4a0));
  *(undefined4 *)(unaff_retaddr + 0x374) = param_2;
  pbVar5 = &DAT_016416fa;
  pbVar2 = (byte *)(unaff_retaddr + 0x394);
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00a93a74:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a93a79;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00a93a74;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a93a79:
  if (iVar3 == 0) {
    _strncpy_s((char *)(unaff_retaddr + 0x394),0x20,"DefenseCol",0x1f);
  }
  piVar4 = (int *)FUN_00d773c0();
  iVar3 = (**(code **)(*piVar4 + 0xc))(unaff_retaddr);
  if (iVar3 == 0) {
    FUN_00d77210();
    return 0;
  }
  return 1;
}

// 00A93AC0  Behavior::addDefenseCollisionFromRigidBody  size=172  [class]
undefined4 __thiscall
Behavior::addDefenseCollisionFromRigidBody
          (int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_2 == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_009f8b60();
  iVar2 = CollisionMesh::CollisionMesh(param_3,*puVar1,0);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_01665178);
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x3f0) = *(undefined4 *)(param_1 + 0x4f0);
  uVar3 = FUN_00915990(9);
  FUN_00d771d0(uVar3);
  FUN_00d78e50(*param_2);
  iVar2 = FUN_00a93a00(iVar2,param_4);
  if (iVar2 == 0) {
    FUN_00d78e90();
    FUN_00d7b0f0();
    return 0;
  }
  FUN_00d7b0f0();
  FUN_00d7b890();
  return 1;
}

// 00A93B70  Behavior::addDefenseCollisionFromRigidBody_2  size=258  [class]
undefined4 __thiscall Behavior::addDefenseCollisionFromRigidBody_2(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 unaff_EBP;
  int iVar6;
  undefined4 unaff_retaddr;
  
  iVar2 = FUN_00a4af30(5);
  piVar1 = param_2;
  iVar6 = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  if (0 < iVar3) {
    do {
      (**(code **)(*piVar1 + 300))(&param_2,iVar6);
      if (iVar2 == 0) {
        return 0;
      }
      puVar4 = (undefined4 *)FUN_009f8b60();
      iVar3 = CollisionMesh::CollisionMesh(unaff_retaddr,*puVar4,0);
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_01665178);
        return 0;
      }
      *(undefined4 *)(iVar3 + 0x3f0) = *(undefined4 *)(param_1 + 0x4f0);
      uVar5 = FUN_00915990(9);
      FUN_00d771d0(uVar5);
      FUN_00d78e50(iVar2);
      iVar3 = FUN_00a93a00(iVar3,unaff_EBP);
      if (iVar3 == 0) {
        FUN_00d78e90();
        FUN_00d7b0f0();
        return 0;
      }
      FUN_00d7b0f0();
      FUN_00d7b890();
      iVar6 = iVar6 + 1;
      iVar3 = (**(code **)(*piVar1 + 0xc))();
    } while (iVar6 < iVar3);
  }
  return 1;
}

// 00A94010  Behavior::createAttackImpactWave  size=369  [class]
int * Behavior::createAttackImpactWave(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar2 != 0) {
    piVar3 = (int *)CollisionAttackData::CollisionAttackData_3();
    if (piVar3 != (int *)0x0) {
      FUN_0043e160(param_1 + 0x10);
      if (*(int *)(param_1 + 300) != 0) {
        piVar3[1] = 1;
      }
      piVar4 = (int *)FUN_00602cb0(*(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x138)
                                   ,piVar3);
      if (piVar4 == (int *)0x0) {
        FUN_00dd5650(&DAT_01665230);
        (**(code **)(*piVar3 + 4))(1);
        return (int *)0x0;
      }
      (**(code **)(*piVar4 + 0x6c))(param_1 + 0x110);
      piVar1 = (int *)piVar4[0x21c];
      piVar4[0x21d] = *(int *)(param_1 + 0x130);
      if (piVar1 == (int *)0x0) {
        (**(code **)(*piVar3 + 4))(1);
        return (int *)0x0;
      }
      if (*(int *)(param_1 + 0x13c) != 0) {
        puVar5 = (undefined4 *)FUN_009f8b60();
        (**(code **)(*piVar1 + 0x20))(0xb,*puVar5,8);
      }
      piVar3 = (int *)FUN_00d773c0();
      (**(code **)(*piVar3 + 8))(piVar1);
      FUN_00d7b0f0();
      FUN_00d77c50(piVar4[0x13c],0xffffffff);
      piVar1[0x144] = *(int *)(param_1 + 0x124);
      FUN_00d77580(*(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x120),
                   *(undefined4 *)(param_1 + 0x128));
      piVar1[0xe0] = 0x187;
      FUN_00d7b890();
      return piVar4;
    }
  }
  FUN_00dd5650(&DAT_01665278);
  return (int *)0x0;
}

// 00A94190  Behavior::createAttackImpactVolume  size=452  [class]
int * Behavior::createAttackImpactVolume(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) ||
     (piVar3 = (int *)CollisionAttackData::CollisionAttackData_3(), piVar3 == (int *)0x0)) {
    FUN_00dd5650(&DAT_01665310);
    return (int *)0x0;
  }
  FUN_0043e160(param_1 + 0x10);
  if ((0.0 < *(float *)(param_1 + 0x138)) || (*(float *)(param_1 + 0x13c) != 0.0)) {
    piVar3[1] = 1;
  }
  piVar4 = (int *)FUN_006029f0(*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x148),
                               piVar3);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x6c))(param_1 + 0x110);
    piVar1 = (int *)piVar4[0x21c];
    piVar4[0x21e] = *(int *)(param_1 + 0x138);
    piVar4[0x21f] = *(int *)(param_1 + 0x13c);
    piVar4[0x21d] = *(int *)(param_1 + 0x140);
    if (piVar1 != (int *)0x0) {
      if (*(int *)(param_1 + 0x14c) != 0) {
        (**(code **)(*piVar1 + 0x20))(0xb,*(undefined4 *)(param_1 + 0x148),8);
      }
      piVar3 = (int *)FUN_00d773c0();
      (**(code **)(*piVar3 + 8))(piVar1);
      FUN_00d7b0f0();
      FUN_00d77c50(piVar4[0x13c],0xffffffff);
      piVar1[0x15c] = *(int *)(param_1 + 0x124);
      piVar1[0x15d] = *(int *)(param_1 + 0x130);
      FUN_00d77620(*(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x120),
                   *(undefined4 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130),
                   *(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x134));
      piVar1[0xe0] = *(int *)(param_1 + 0x10);
      if (*(float *)(param_1 + 0x140) <= 0.0) {
        FUN_00d7b890();
      }
      return piVar4;
    }
    (**(code **)(*piVar3 + 4))(1);
    return (int *)0x0;
  }
  FUN_00dd5650(&DAT_016652c8);
  (**(code **)(*piVar3 + 4))(1);
  return (int *)0x0;
}

// 00A9CBA0  FUN_00a9cba0  size=97  [callgraph]
void __thiscall FUN_00a9cba0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 4);
    if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x14) {
      piVar3 = piVar2 + *(int *)(iVar1 + 8) * 0x14;
      do {
        if (*piVar2 == param_2) goto LAB_00a9cbdf;
        piVar2 = piVar2 + 0x14;
      } while (piVar2 != piVar3);
    }
    piVar2 = (int *)(*(int *)(iVar1 + 8) * 0x50 + *(int *)(iVar1 + 4));
LAB_00a9cbdf:
    if (piVar2 != (int *)(*(int *)(iVar1 + 8) * 0x50 + *(int *)(iVar1 + 4))) {
      piVar2[3] = param_3;
      piVar2[4] = param_4;
    }
  }
  return;
}

// 00A9CC10  FUN_00a9cc10  size=90  [callgraph]
void __thiscall FUN_00a9cc10(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 4);
    if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x14) {
      piVar3 = piVar2 + *(int *)(iVar1 + 8) * 0x14;
      do {
        if (*piVar2 == param_2) goto LAB_00a9cc4f;
        piVar2 = piVar2 + 0x14;
      } while (piVar2 != piVar3);
    }
    piVar2 = (int *)(*(int *)(iVar1 + 8) * 0x50 + *(int *)(iVar1 + 4));
LAB_00a9cc4f:
    if (piVar2 != (int *)(*(int *)(iVar1 + 8) * 0x50 + *(int *)(iVar1 + 4))) {
      piVar2[0x10] = param_3;
    }
  }
  return;
}

// 00A9CC70  FUN_00a9cc70  size=54  [callgraph]
uint __thiscall FUN_00a9cc70(int *param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_00a91be0(param_2);
  return -(uint)(uVar1 != *(int *)(*param_1 + 8) * 0x50 + *(int *)(*param_1 + 4)) & uVar1;
}

// 00A9CCB0  FUN_00a9ccb0  size=570  [callgraph]
void __fastcall FUN_00a9ccb0(int *param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  float *pfVar3;
  float fVar4;
  int local_ac;
  int *local_a8;
  int local_a4;
  float fStack_a0;
  float fStack_9c;
  float afStack_98 [2];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    local_ac = *(int *)(iVar1 + 4);
    if (local_ac != *(int *)(iVar1 + 8) * 0x50 + local_ac) {
      pfVar3 = (float *)(local_ac + 0x24);
      local_a8 = param_1;
      do {
        if (pfVar3[7] == 0.0) {
          local_a4 = FUN_00a81330();
          if (local_a4 != 0) {
            iVar1 = FUN_00a7c800();
            fVar4 = pfVar3[-5];
            if (fVar4 != -NAN) {
              FUN_00a7c800(fVar4);
              iVar1 = FUN_00a12210(fVar4);
            }
            iVar2 = FUN_00a81330();
            if (iVar2 == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = FUN_00a7c800();
              if ((iVar2 != 0) && (fVar4 = pfVar3[-6], fVar4 != -NAN)) {
                FUN_00a7c800(fVar4);
                iVar2 = FUN_00a12210(fVar4);
              }
            }
            if ((iVar1 != 0) && (iVar2 != 0)) {
              _Dst = (void *)(iVar1 + 0x10);
              FID_conflict__memcpy(_Dst,(void *)(iVar2 + 0x10),0x40);
              local_58 = 0;
              local_5c = 0;
              local_60 = 0;
              local_64 = 0;
              local_6c = 0;
              local_70 = 0;
              local_74 = 0;
              local_78 = 0;
              local_80 = 0;
              local_84 = 0;
              local_88 = 0;
              local_8c = 0;
              local_54 = 0x3f800000;
              local_68 = 0x3f800000;
              local_7c = 0x3f800000;
              local_90 = 0x3f800000;
              if (pfVar3[1] != 0.0) {
                D3DXMatrixRotationZ(local_50,pfVar3[1]);
                D3DXMatrixMultiply(afStack_98,&local_58,afStack_98);
              }
              if (*pfVar3 != 0.0) {
                D3DXMatrixRotationY(local_50,*pfVar3);
                D3DXMatrixMultiply(afStack_98,&local_58,afStack_98);
              }
              if (pfVar3[-1] != 0.0) {
                D3DXMatrixRotationX(local_50,pfVar3[-1]);
                D3DXMatrixMultiply(afStack_98,&local_58,afStack_98);
              }
              D3DXMatrixMultiply(_Dst,&local_90,_Dst);
              D3DXVec3TransformNormal(&local_ac,pfVar3 + 3,(void *)(iVar2 + 0x10));
              fStack_a0 = *(float *)(iVar2 + 0x40) + fStack_a0;
              fStack_9c = *(float *)(iVar2 + 0x44) + fStack_9c;
              afStack_98[0] = *(float *)(iVar2 + 0x48) + afStack_98[0];
              *(float *)(iVar1 + 0x48) = afStack_98[0];
              *(float *)(iVar1 + 0x40) = fStack_a0;
              *(float *)(iVar1 + 0x44) = fStack_9c;
              FUN_00a7c800();
              switchD_0080dbae::default();
            }
          }
        }
        local_ac = local_ac + 0x50;
        pfVar3 = pfVar3 + 0x14;
      } while (local_ac != *(int *)(*local_a8 + 8) * 0x50 + *(int *)(*local_a8 + 4));
    }
  }
  return;
}

// 00A9CEF0  FUN_00a9cef0  size=570  [callgraph]
void __fastcall FUN_00a9cef0(int *param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  float *pfVar3;
  float fVar4;
  int local_ac;
  int *local_a8;
  int local_a4;
  float fStack_a0;
  float fStack_9c;
  float afStack_98 [2];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    local_ac = *(int *)(iVar1 + 4);
    if (local_ac != *(int *)(iVar1 + 8) * 0x50 + local_ac) {
      pfVar3 = (float *)(local_ac + 0x24);
      local_a8 = param_1;
      do {
        if (pfVar3[7] != 0.0) {
          local_a4 = FUN_00a81330();
          if (local_a4 != 0) {
            iVar1 = FUN_00a7c800();
            fVar4 = pfVar3[-5];
            if (fVar4 != -NAN) {
              FUN_00a7c800(fVar4);
              iVar1 = FUN_00a12210(fVar4);
            }
            iVar2 = FUN_00a81330();
            if (iVar2 == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = FUN_00a7c800();
              if ((iVar2 != 0) && (fVar4 = pfVar3[-6], fVar4 != -NAN)) {
                FUN_00a7c800(fVar4);
                iVar2 = FUN_00a12210(fVar4);
              }
            }
            if ((iVar1 != 0) && (iVar2 != 0)) {
              _Dst = (void *)(iVar1 + 0x10);
              FID_conflict__memcpy(_Dst,(void *)(iVar2 + 0x10),0x40);
              local_58 = 0;
              local_5c = 0;
              local_60 = 0;
              local_64 = 0;
              local_6c = 0;
              local_70 = 0;
              local_74 = 0;
              local_78 = 0;
              local_80 = 0;
              local_84 = 0;
              local_88 = 0;
              local_8c = 0;
              local_54 = 0x3f800000;
              local_68 = 0x3f800000;
              local_7c = 0x3f800000;
              local_90 = 0x3f800000;
              if (pfVar3[1] != 0.0) {
                D3DXMatrixRotationZ(local_50,pfVar3[1]);
                D3DXMatrixMultiply(afStack_98,&local_58,afStack_98);
              }
              if (*pfVar3 != 0.0) {
                D3DXMatrixRotationY(local_50,*pfVar3);
                D3DXMatrixMultiply(afStack_98,&local_58,afStack_98);
              }
              if (pfVar3[-1] != 0.0) {
                D3DXMatrixRotationX(local_50,pfVar3[-1]);
                D3DXMatrixMultiply(afStack_98,&local_58,afStack_98);
              }
              D3DXMatrixMultiply(_Dst,&local_90,_Dst);
              D3DXVec3TransformNormal(&local_ac,pfVar3 + 3,(void *)(iVar2 + 0x10));
              fStack_a0 = *(float *)(iVar2 + 0x40) + fStack_a0;
              fStack_9c = *(float *)(iVar2 + 0x44) + fStack_9c;
              afStack_98[0] = *(float *)(iVar2 + 0x48) + afStack_98[0];
              *(float *)(iVar1 + 0x48) = afStack_98[0];
              *(float *)(iVar1 + 0x40) = fStack_a0;
              *(float *)(iVar1 + 0x44) = fStack_9c;
              FUN_00a7c800();
              switchD_0080dbae::default();
            }
          }
        }
        local_ac = local_ac + 0x50;
        pfVar3 = pfVar3 + 0x14;
      } while (local_ac != *(int *)(*local_a8 + 8) * 0x50 + *(int *)(*local_a8 + 4));
    }
  }
  return;
}

// 00A9D130  Behavior::vf44  size=434  [class]
void __fastcall Behavior::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(undefined4 **)(param_1 + 0x774) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x774))(1);
    *(undefined4 *)(param_1 + 0x774) = 0;
  }
  if (*(int *)(param_1 + 0x75c) != 0) {
    piVar2 = (int *)FUN_008d7570();
    (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x75c) = 0;
  if (*(int *)(param_1 + 0x754) != 0) {
    piVar2 = (int *)FUN_00d72970();
    (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x754) = 0;
  if (*(int *)(param_1 + 0x584) != 0) {
    (**(code **)(*DAT_01be9bf4 + 0x10))(*(int *)(param_1 + 0x584),*(undefined4 *)(param_1 + 0x588));
  }
  *(undefined4 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x584) = 0;
  if (*(int *)(param_1 + 0x808) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x808));
    *(undefined4 *)(param_1 + 0x808) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7d8);
  if (iVar1 != 0) {
    FUN_00c730c0();
    FUN_00905ce0();
    FUN_00905ce0();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7d8) = 0;
  }
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x638) != 0) {
    FUN_00dd7270();
  }
  iVar1 = *(int *)(param_1 + 0x638);
  if (iVar1 != 0) {
    FUN_00dd7270();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x638) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x63c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x63c))(1);
    *(undefined4 *)(param_1 + 0x63c) = 0;
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00a91a00();
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x7c4));
    *(undefined4 *)(param_1 + 0x7c4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x770);
  if (iVar1 != 0) {
    FUN_00a01300();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x770) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x76c);
  if (iVar1 != 0) {
    FUN_00a01300();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x76c) = 0;
  }
  if (*(int *)(param_1 + 0x788) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x788));
    *(undefined4 *)(param_1 + 0x788) = 0;
  }
  return;
}

// 00A9D380  Behavior::vf50  size=71  [class]
void __fastcall Behavior::vf50(int param_1)

{
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d829e0(*(int *)(param_1 + 2000));
  }
  if (((*(int *)(param_1 + 0x76c) != 0) || (*(int *)(param_1 + 0x770) != 0)) &&
     (*(int *)(param_1 + 0x768) != 0)) {
    switchD_0080dbae::default();
  }
  FUN_00a96f60();
  return;
}

// 00A9D3E0  Behavior::vf54  size=216  [class]
void __fastcall Behavior::vf54(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (((param_1[0x13c] != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 0x94) & 1) != 0)) {
    FUN_00e30490();
    FUN_00e304b0();
  }
  if (param_1[0x1f1] != 0) {
    FUN_00a9ccb0();
  }
  if ((param_1[0x1da] != 0) && (iVar1 = (**(code **)(*param_1 + 0x244))(), iVar1 != 0)) {
    if (param_1[0x1db] != 0) {
      if (param_1[0x13c] != 0) {
        FUN_00a7c910();
      }
      fVar2 = (float10)FUN_00e049b0();
      FUN_00a01350((float)fVar2,0);
    }
    if (param_1[0x1dc] != 0) {
      if (param_1[0x13c] != 0) {
        FUN_00a7c910();
      }
      fVar2 = (float10)FUN_00e049b0();
      FUN_00a01350((float)fVar2,0);
    }
  }
  if (param_1[0x1f1] == 0) {
    return;
  }
  FUN_00a9cef0();
  return;
}

// 00A9D4C0  FUN_00a9d4c0  size=284  [between]
undefined4 __thiscall FUN_00a9d4c0(int param_1,undefined4 param_2)

{
  undefined1 auStack_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_54 = 0x3f800000;
  local_68 = 0x3f800000;
  local_7c = 0x3f800000;
  local_90 = 0x3f800000;
  if (*(float *)(param_1 + 0x98) != 0.0) {
    D3DXMatrixRotationZ(local_50,*(undefined4 *)(param_1 + 0x98));
    D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
  }
  if (*(float *)(param_1 + 0x94) != 0.0) {
    D3DXMatrixRotationY(local_50,*(undefined4 *)(param_1 + 0x94));
    D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
  }
  if (*(float *)(param_1 + 0x90) != 0.0) {
    D3DXMatrixRotationX(local_50,*(undefined4 *)(param_1 + 0x90));
    D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
  }
  D3DXMatrixMultiply(param_2,&local_90,param_1 + 0xb0);
  return param_2;
}

// 00A9D5E0  FUN_00a9d5e0  size=313  [between]
int __thiscall FUN_00a9d5e0(int param_1,int param_2)

{
  undefined1 auStack_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_54 = 0x3f800000;
  local_68 = 0x3f800000;
  local_7c = 0x3f800000;
  local_90 = 0x3f800000;
  if (*(float *)(param_1 + 0x98) != 0.0) {
    D3DXMatrixRotationZ(local_50,*(undefined4 *)(param_1 + 0x98));
    D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
  }
  if (*(float *)(param_1 + 0x94) != 0.0) {
    D3DXMatrixRotationY(local_50,*(undefined4 *)(param_1 + 0x94));
    D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
  }
  if (*(float *)(param_1 + 0x90) != 0.0) {
    D3DXMatrixRotationX(local_50,*(undefined4 *)(param_1 + 0x90));
    D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
  }
  D3DXMatrixMultiply(param_2,&local_90,param_1 + 0xb0);
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) + *(float *)(param_1 + 0x50);
  *(float *)(param_2 + 0x34) = *(float *)(param_1 + 0x54) + *(float *)(param_2 + 0x34);
  *(float *)(param_2 + 0x38) = *(float *)(param_1 + 0x58) + *(float *)(param_2 + 0x38);
  return param_2;
}

// 00A9D720  FUN_00a9d720  size=156  [between]
void __thiscall FUN_00a9d720(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x638);
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_30 = param_2[8];
  local_50 = *param_2;
  local_4c = param_2[1];
  local_2c = param_2[9];
  local_48 = param_2[2];
  local_28 = param_2[10];
  local_40 = param_2[4];
  local_24 = param_2[0xb];
  local_44 = param_2[3];
  local_38 = param_2[6];
  local_20 = 0;
  local_3c = param_2[5];
  (**(code **)(**(int **)(param_1 + 0x63c) + 8))(&local_50);
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// 00A9D7C0  FUN_00a9d7c0  size=157  [between]
void __thiscall FUN_00a9d7c0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x638);
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_50 = *param_2;
  local_30 = param_2[8];
  local_4c = param_2[1];
  local_2c = param_2[9];
  local_48 = param_2[2];
  local_28 = param_2[10];
  local_40 = param_2[4];
  local_24 = param_2[0xb];
  local_44 = param_2[3];
  local_38 = param_2[6];
  local_20 = param_3;
  local_3c = param_2[5];
  (**(code **)(**(int **)(param_1 + 0x63c) + 8))(&local_50);
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// 00A9D860  FUN_00a9d860  size=58  [between]
void __fastcall FUN_00a9d860(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x638);
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)(*(int *)(param_1 + 0x63c) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x63c) + 8) = 0;
  }
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// 00A9D8A0  FUN_00a9d8a0  size=52  [between]
void __fastcall FUN_00a9d8a0(int param_1)

{
  FUN_00a934c0();
  FUN_00a933e0();
  FUN_00a93450();
  if (*(undefined4 **)(param_1 + 0x7b8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7b8))(1);
    *(undefined4 *)(param_1 + 0x7b8) = 0;
  }
  return;
}

// 00A9D9A0  FUN_00a9d9a0  size=38  [between]
void __fastcall FUN_00a9d9a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x7a4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7a4) + 4);
    FUN_00a9c270(iVar1,iVar1 + *(int *)(*(int *)(param_1 + 0x7a4) + 8) * 4);
  }
  return;
}

// 00A9DAC0  FUN_00a9dac0  size=237  [between]
void __thiscall FUN_00a9dac0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 0x7a4);
  if ((iVar1 != 0) && (piVar7 = *(int **)(iVar1 + 4), piVar7 != piVar7 + *(int *)(iVar1 + 8))) {
    do {
      iVar1 = *piVar7;
      if ((*(int *)(iVar1 + 0x354) == *(int *)(param_2 + 0x354)) &&
         ((*(int *)(iVar1 + 0x360) < 4 && (*(int *)(iVar1 + 0x360) != 1)))) {
        FUN_00d7b0f0();
        iVar2 = *(int *)(param_1 + 0x7a4);
        uVar3 = *(uint *)(iVar2 + 8);
        iVar4 = *(int *)(iVar2 + 4);
        piVar6 = (int *)(iVar4 + uVar3 * 4);
        if ((((piVar7 == piVar6) || (iVar4 == 0)) || (uVar3 == 0)) ||
           (uVar3 <= (uint)((int)piVar7 - iVar4 >> 2))) {
          piVar7 = (int *)FUN_00d773c0();
          (**(code **)(*piVar7 + 0x10))(iVar1);
        }
        else {
          for (piVar5 = piVar7; piVar5 != piVar6 + -1; piVar5 = piVar5 + 1) {
            *piVar5 = piVar5[1];
          }
          *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
          piVar6 = (int *)FUN_00d773c0();
          (**(code **)(*piVar6 + 0x10))(iVar1);
          piVar6 = piVar7;
        }
      }
      else {
        piVar6 = piVar7 + 1;
      }
      piVar7 = piVar6;
    } while (piVar6 != (int *)(*(int *)(*(int *)(param_1 + 0x7a4) + 4) +
                              *(int *)(*(int *)(param_1 + 0x7a4) + 8) * 4));
  }
  return;
}

// 00A9DD90  FUN_00a9dd90  size=229  [between]
void __thiscall FUN_00a9dd90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 0x7a4);
  if ((iVar1 != 0) && (piVar7 = *(int **)(iVar1 + 4), piVar7 != piVar7 + *(int *)(iVar1 + 8))) {
    do {
      iVar1 = *piVar7;
      if ((*(int *)(iVar1 + 0x380) == param_2) &&
         ((*(int *)(iVar1 + 0x360) < 4 && (*(int *)(iVar1 + 0x360) != 1)))) {
        FUN_00d7b0f0();
        iVar2 = *(int *)(param_1 + 0x7a4);
        uVar3 = *(uint *)(iVar2 + 8);
        iVar4 = *(int *)(iVar2 + 4);
        piVar6 = (int *)(iVar4 + uVar3 * 4);
        if ((((piVar7 == piVar6) || (iVar4 == 0)) || (uVar3 == 0)) ||
           (uVar3 <= (uint)((int)piVar7 - iVar4 >> 2))) {
          piVar7 = (int *)FUN_00d773c0();
          (**(code **)(*piVar7 + 0x10))(iVar1);
        }
        else {
          for (piVar5 = piVar7; piVar5 != piVar6 + -1; piVar5 = piVar5 + 1) {
            *piVar5 = piVar5[1];
          }
          *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
          piVar6 = (int *)FUN_00d773c0();
          (**(code **)(*piVar6 + 0x10))(iVar1);
          piVar6 = piVar7;
        }
      }
      else {
        piVar6 = piVar7 + 1;
      }
      piVar7 = piVar6;
    } while (piVar6 != (int *)(*(int *)(*(int *)(param_1 + 0x7a4) + 4) +
                              *(int *)(*(int *)(param_1 + 0x7a4) + 8) * 4));
  }
  return;
}

// 00A9E060  FUN_00a9e060  size=18  [between]
void __fastcall FUN_00a9e060(int param_1)

{
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_004bdf70();
    return;
  }
  return;
}

// 00A9E080  FUN_00a9e080  size=76  [between]
void __thiscall FUN_00a9e080(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(int **)(param_1 + 0x7c4) != (int *)0x0) &&
     (iVar1 = **(int **)(param_1 + 0x7c4), iVar1 != 0)) {
    if (param_2 < *(uint *)(iVar1 + 8)) {
      iVar2 = param_2 * 0x50 + *(int *)(iVar1 + 4);
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != *(int *)(iVar1 + 8) * 0x50 + *(int *)(iVar1 + 4)) {
      FUN_004b53d0();
      FUN_004bde80(iVar2);
    }
  }
  return;
}

// 00A9E0D0  FUN_00a9e0d0  size=69  [between]
void __thiscall FUN_00a9e0d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x7c4);
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) &&
     (iVar2 = FUN_00a91be0(param_2), iVar2 != *(int *)(*piVar1 + 8) * 0x50 + *(int *)(*piVar1 + 4)))
  {
    FUN_004b53d0();
    FUN_004bde80(iVar2);
  }
  return;
}

// 00A9E120  FUN_00a9e120  size=18  [between]
void __fastcall FUN_00a9e120(int param_1)

{
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00a9cba0();
    return;
  }
  return;
}

// 00A9E140  FUN_00a9e140  size=18  [between]
void __fastcall FUN_00a9e140(int param_1)

{
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00a9cc10();
    return;
  }
  return;
}

// 00A9E160  FUN_00a9e160  size=64  [between]
uint __thiscall FUN_00a9e160(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x7c4);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    uVar2 = FUN_00a91be0(param_2);
    return -(uint)(uVar2 != *(int *)(*piVar1 + 8) * 0x50 + *(int *)(*piVar1 + 4)) & uVar2;
  }
  return 0;
}

// 00A9E1E0  FUN_00a9e1e0  size=163  [between]
void __thiscall FUN_00a9e1e0(int param_1,int param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_30 [2];
  char local_28 [32];
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x774);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0xc) {
    piVar3 = piVar2 + *(int *)(iVar1 + 8) * 0xc;
    do {
      if (*piVar2 == param_2) {
        piVar2[10] = 0;
        _strcpy_s((char *)(piVar2 + 2),0x20,param_3);
        return;
      }
      piVar2 = piVar2 + 0xc;
    } while (piVar2 != piVar3);
  }
  local_8 = 0;
  local_30[0] = param_2;
  local_30[1] = 0xffffffff;
  local_4 = 0;
  _strcpy_s(local_28,0x20,param_3);
  (**(code **)(**(int **)(param_1 + 0x774) + 8))(local_30);
  return;
}

// 00A9E290  FUN_00a9e290  size=429  [between]
undefined4 __thiscall
FUN_00a9e290(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            uint param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_40 [64];
  
  if ((param_1[0x13c] != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
    if (param_1[0x13c] != 0) {
      FUN_00a7c890();
    }
    uVar2 = FUN_00e3ff90(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    iVar1 = FUN_00d466f0();
    if (iVar1 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x98))(0);
      FUN_009f8ea0(acStack_40,0x40,uVar3);
      _strcat_s(acStack_40,0x40,"_");
      _strcat_s(acStack_40,0x40,param_2);
      FUN_00de3530();
      if ((param_6 & 0x400) == 0) {
        uVar3 = (**(code **)(*param_1 + 0x9c))(acStack_40);
        if (param_1[0x13c] != 0) {
          FUN_00a7c890();
        }
        iVar1 = FUN_00e26e90();
        if (iVar1 != 0) {
          FUN_00e3fa90(uVar3,acStack_40,param_3);
        }
      }
    }
    FUN_00a9e1e0(uVar2,param_2);
    if (param_1[0x13c] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    FUN_00e26e90();
    *(undefined4 *)(iVar1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xec) = 0x3f800000;
    if (param_1[0x13c] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xfffffffe;
    (**(code **)(*param_1 + 0x24c))(param_2);
    param_1[0x1de] = 1;
    return uVar2;
  }
  return 0xffffffff;
}

// 00A9E440  FUN_00a9e440  size=595  [between]
undefined4 __thiscall
FUN_00a9e440(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_90 [16];
  char local_80 [64];
  char local_40 [64];
  
  if ((((*(int *)(param_2 + 0x4f0) != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) &&
      (param_1[0x13c] != 0)) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
    iVar1 = param_1[300];
    if (iVar1 == 0x10100) {
      iVar1 = 0x10010;
    }
    FUN_009f8ea0(local_80,0x40,iVar1,0);
    _strcat_s(local_80,0x40,"_");
    _strcat_s(local_80,0x40,param_3);
    if (*(int *)(param_2 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    uVar2 = FUN_00e355e0(local_80);
    if (param_1[0x13c] != 0) {
      FUN_00a7c890();
    }
    uVar2 = Animation::Unit::setAnimation
                      (uVar2,param_3,param_4,param_5,param_6,param_7 | 0x400,param_8,param_9);
    FUN_00de3530();
    if ((param_7 & 0x400) == 0) {
      _strcpy_s(local_40,0x40,local_80);
      uVar3 = (**(code **)(*param_1 + 0x94))();
      FUN_0099a460(acStack_90,"_%d_seq.bxm",uVar3);
      _strcat_s(local_40,0x40,acStack_90);
      uVar3 = FUN_00de4500(local_40);
      if (param_1[0x13c] != 0) {
        FUN_00a7c890();
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        FUN_00e3fa90(uVar3,local_80,param_4);
      }
    }
    FUN_00a9e1e0(uVar2,param_3);
    if (param_1[0x13c] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    FUN_00e26e90();
    *(undefined4 *)(iVar1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xec) = 0x3f800000;
    if (param_1[0x13c] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xfffffffe;
    param_1[0x1de] = 1;
    return uVar2;
  }
  return 0xffffffff;
}

// 00A9E6A0  FUN_00a9e6a0  size=572  [between]
undefined4 __thiscall
FUN_00a9e6a0(int *param_1,int param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,uint param_8,undefined4 param_9,
            undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_90 [16];
  char local_80 [64];
  char local_40 [64];
  
  if ((((*(int *)(param_2 + 0x4f0) != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) &&
      (param_1[0x13c] != 0)) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
    FUN_009f8ea0(local_80,0x40,param_3,0);
    _strcat_s(local_80,0x40,"_");
    _strcat_s(local_80,0x40,param_4);
    if (*(int *)(param_2 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    uVar2 = FUN_00e355e0(local_80);
    if (param_1[0x13c] != 0) {
      FUN_00a7c890();
    }
    uVar2 = Animation::Unit::setAnimation
                      (uVar2,param_4,param_5,param_6,param_7,param_8 | 0x400,param_9,param_10);
    FUN_00de3530();
    if ((param_8 & 0x400) == 0) {
      _strcpy_s(local_40,0x40,local_80);
      uVar3 = (**(code **)(*param_1 + 0x94))();
      FUN_0099a460(acStack_90,"_%d_seq.bxm",uVar3);
      _strcat_s(local_40,0x40,acStack_90);
      uVar3 = FUN_00de4500(local_40);
      if (param_1[0x13c] != 0) {
        FUN_00a7c890();
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        FUN_00e3fa90(uVar3,local_80,param_5);
      }
    }
    FUN_00a9e1e0(uVar2,param_4);
    if (param_1[0x13c] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    FUN_00e26e90();
    *(undefined4 *)(iVar1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xec) = 0x3f800000;
    if (param_1[0x13c] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xfffffffe;
    param_1[0x1de] = 1;
    return uVar2;
  }
  return 0xffffffff;
}

// 00A9E8E0  FUN_00a9e8e0  size=571  [between]
undefined4 __thiscall
FUN_00a9e8e0(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_90 [16];
  char local_80 [64];
  char local_40 [64];
  
  if ((((*(int *)(param_2 + 0x4f0) != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) &&
      (param_1[0x13c] != 0)) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
    FUN_009f8ea0(local_80,0x40,*(undefined4 *)(param_2 + 0x4b0),0);
    _strcat_s(local_80,0x40,"_");
    _strcat_s(local_80,0x40,param_3);
    if (*(int *)(param_2 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    uVar2 = FUN_00e355e0(local_80);
    if (param_1[0x13c] != 0) {
      FUN_00a7c890();
    }
    uVar2 = Animation::Unit::setAnimation
                      (uVar2,param_3,param_4,param_5,param_6,param_7 | 0x400,param_8,param_9);
    FUN_00de3530();
    if ((param_7 & 0x400) == 0) {
      _strcpy_s(local_40,0x40,local_80);
      uVar3 = (**(code **)(*param_1 + 0x94))();
      FUN_0099a460(acStack_90,"_%d_seq.bxm",uVar3);
      _strcat_s(local_40,0x40,acStack_90);
      uVar3 = FUN_00de4500(local_40);
      if (param_1[0x13c] != 0) {
        FUN_00a7c890();
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        FUN_00e3fa90(uVar3,local_80,param_4);
      }
    }
    FUN_00a9e1e0(uVar2,param_3);
    if (param_1[0x13c] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    FUN_00e26e90();
    *(undefined4 *)(iVar1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xec) = 0x3f800000;
    if (param_1[0x13c] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xfffffffe;
    param_1[0x1de] = 1;
    return uVar2;
  }
  return 0xffffffff;
}

// 00A9EB20  FUN_00a9eb20  size=572  [between]
undefined4 __thiscall
FUN_00a9eb20(int *param_1,int param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,uint param_8,undefined4 param_9,
            undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_90 [16];
  char local_80 [64];
  char local_40 [64];
  
  if ((((*(int *)(param_2 + 0x4f0) != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) &&
      (param_1[0x13c] != 0)) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
    FUN_009f8ea0(local_80,0x40,param_3,0);
    _strcat_s(local_80,0x40,"_");
    _strcat_s(local_80,0x40,param_4);
    if (*(int *)(param_2 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    uVar2 = FUN_00e355e0(local_80);
    if (param_1[0x13c] != 0) {
      FUN_00a7c890();
    }
    uVar2 = Animation::Unit::setAnimation
                      (uVar2,param_4,param_5,param_6,param_7,param_8 | 0x400,param_9,param_10);
    FUN_00de3530();
    if ((param_8 & 0x400) == 0) {
      _strcpy_s(local_40,0x40,local_80);
      uVar3 = (**(code **)(*param_1 + 0x94))();
      FUN_0099a460(acStack_90,"_%d_seq.bxm",uVar3);
      _strcat_s(local_40,0x40,acStack_90);
      uVar3 = FUN_00de4500(local_40);
      if (param_1[0x13c] != 0) {
        FUN_00a7c890();
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        FUN_00e3fa90(uVar3,local_80,param_5);
      }
    }
    FUN_00a9e1e0(uVar2,param_4);
    if (param_1[0x13c] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    FUN_00e26e90();
    *(undefined4 *)(iVar1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xec) = 0x3f800000;
    if (param_1[0x13c] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xfffffffe;
    param_1[0x1de] = 1;
    return uVar2;
  }
  return 0xffffffff;
}

// 00A9ED60  FUN_00a9ed60  size=585  [between]
undefined4 __thiscall
FUN_00a9ed60(int *param_1,undefined4 param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_98 [8];
  char acStack_90 [16];
  char local_80 [64];
  char local_40 [64];
  
  if ((param_1[0x13c] != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
    iVar1 = param_1[300];
    if (iVar1 == 0x10100) {
      iVar1 = 0x10010;
    }
    FUN_009f8ea0(local_80,0x40,iVar1,0);
    _strcat_s(local_80,0x40,"_");
    _strcat_s(local_80,0x40,param_3);
    FUN_00de3530();
    cObjReadManager::getDataAtSet(local_98,param_2,0);
    _strcpy_s(local_40,0x40,local_80);
    _strcat_s(local_40,0x40,".mot");
    uVar2 = FUN_00de4500(local_40);
    if (param_1[0x13c] != 0) {
      FUN_00a7c890();
    }
    uVar2 = Animation::Unit::setAnimation
                      (uVar2,param_3,param_4,param_5,param_6,param_7 | 0x400,param_8,param_9);
    if ((param_7 & 0x400) == 0) {
      _strcpy_s(local_40,0x40,local_80);
      uVar3 = (**(code **)(*param_1 + 0x94))();
      FUN_0099a460(acStack_90,"_%d_seq.bxm",uVar3);
      _strcat_s(local_40,0x40,acStack_90);
      uVar3 = FUN_00de4500(local_40);
      if (param_1[0x13c] != 0) {
        FUN_00a7c890();
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        FUN_00e3fa90(uVar3,local_80,param_4);
      }
    }
    FUN_00a9e1e0(uVar2,param_3);
    if (param_1[0x13c] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    FUN_00e26e90();
    *(undefined4 *)(iVar1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xec) = 0x3f800000;
    if (param_1[0x13c] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xfffffffe;
    param_1[0x1de] = 1;
    return uVar2;
  }
  return 0xffffffff;
}

// 00A9EFB0  FUN_00a9efb0  size=292  [between]
undefined4 __thiscall
FUN_00a9efb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,uint param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x4f0) != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    uVar2 = Animation::Unit::setAnimation
                      (param_2,"Direct",param_4,param_5,param_6,param_7 | 0x400,param_8,param_9);
    if ((param_7 & 0x400) == 0) {
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        FUN_00e3fa90(param_3,"Direct",param_4);
      }
    }
    FUN_00a9e1e0(uVar2,"Direct");
    if (*(int *)(param_1 + 0x4f0) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    FUN_00e26e90();
    *(undefined4 *)(iVar1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xec) = 0x3f800000;
    if (*(int *)(param_1 + 0x4f0) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x778) = 1;
    return uVar2;
  }
  return 0xffffffff;
}

// 00A9F0E0  FUN_00a9f0e0  size=155  [between]
void __thiscall
FUN_00a9f0e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [32];
  undefined1 local_20 [32];
  
  FUN_0099a390(local_20,"%s.mot",param_3);
  uVar1 = (**(code **)(*param_1 + 0x94))();
  FUN_0099a390(auStack_40,"%s_%d_seq.bxm",param_3,uVar1);
  uVar1 = FUN_00de4550(auStack_40,0);
  uVar2 = FUN_00de4550(local_20,0);
  FUN_00a9efb0(uVar2,uVar1,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

// 00A9F180  FUN_00a9f180  size=292  [between]
undefined4 __thiscall
FUN_00a9f180(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,uint param_8,undefined4 param_9,
            undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x4f0) != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    uVar2 = Animation::Unit::setAnimation
                      (param_2,param_4,param_5,param_6,param_7,param_8 | 0x400,param_9,param_10);
    if ((param_8 & 0x400) == 0) {
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        FUN_00e3fa90(param_3,param_4,param_5);
      }
    }
    FUN_00a9e1e0(uVar2,param_4);
    if (*(int *)(param_1 + 0x4f0) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    FUN_00e26e90();
    *(undefined4 *)(iVar1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xec) = 0x3f800000;
    if (*(int *)(param_1 + 0x4f0) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x778) = 1;
    return uVar2;
  }
  return 0xffffffff;
}

// 00A9F2B0  FUN_00a9f2b0  size=64  [between]
void FUN_00a9f2b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_00a9e290(param_1,param_2,param_3,param_4,param_5 | 0x8000000,param_6,param_7);
  return;
}

// 00A9F2F0  FUN_00a9f2f0  size=208  [between]
int __thiscall
FUN_00a9f2f0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4f0) != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    iVar1 = FUN_00e33270(param_2);
    if (iVar1 != -1) {
      return iVar1;
    }
  }
  if (param_3 != -1) {
    iVar1 = FUN_00a9e290(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return iVar1;
  }
  iVar1 = FUN_00a94ce0(0xffffffff);
  if (iVar1 == 0) {
    return -1;
  }
  iVar1 = FUN_00a9e290(param_2,0xffffffff,param_4,param_5,param_6,param_7,param_8);
  return iVar1;
}

// 00A9F3C0  FUN_00a9f3c0  size=255  [between]
undefined4 __thiscall
FUN_00a9f3c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  int iVar1;
  char *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_90 [16];
  char local_80 [64];
  undefined1 local_40 [64];
  
  iVar1 = FUN_00de4130(&DAT_01665404,param_3);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  _Src = (char *)FUN_00de38d0(iVar1);
  FUN_00a2a030(local_40,&DAT_016575ac,_Src);
  _strncpy_s(local_80,0x40,_Src,0xb);
  uVar2 = (**(code **)(*param_1 + 0x94))();
  FUN_0099a460(acStack_90,"_%d_seq.bxm",uVar2);
  _strcat_s(local_80,0x40,acStack_90);
  uVar2 = FUN_00de4550(local_80,0);
  uVar3 = FUN_00de4550(local_40,0);
  uVar2 = FUN_00a9efb0(uVar3,uVar2,param_4,param_5,param_6,param_7,param_8,param_9);
  return uVar2;
}

// 00A9F4C0  FUN_00a9f4c0  size=145  [between]
undefined4 __thiscall
FUN_00a9f4c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x4f0) != 0) {
    iVar1 = FUN_00a7c890();
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x4f0) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00a7c890();
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 == 0) {
        FUN_00a9e1e0(0xffffffff,param_2);
        return 0xffffffff;
      }
      uVar3 = FUN_00e36390(iVar1 + 0x98,param_5,param_2,0xffffffff,param_3,param_4);
      FUN_00a9e1e0(uVar3,param_2);
      return uVar3;
    }
  }
  return 0xffffffff;
}

// 00A9F560  FUN_00a9f560  size=145  [between]
undefined4 __thiscall
FUN_00a9f560(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x4f0) != 0) {
    iVar1 = FUN_00a7c890();
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x4f0) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00a7c890();
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 == 0) {
        FUN_00a9e1e0(0xffffffff,param_2);
        return 0xffffffff;
      }
      uVar3 = FUN_00e36450(iVar1 + 0x98,param_5,param_2,0xffffffff,param_3,param_4);
      FUN_00a9e1e0(uVar3,param_2);
      return uVar3;
    }
  }
  return 0xffffffff;
}

// 00A9F600  FUN_00a9f600  size=69  [between]
void FUN_00a9f600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008d7d70(param_6);
  FUN_00a94640(param_1,param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
  return;
}

// 00A9F650  FUN_00a9f650  size=85  [between]
void FUN_00a9f650(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 uVar1;
  
  FUN_00a7c8a0();
  uVar1 = FUN_008d7d70(param_7);
  FUN_00a94850(param_1,param_2,param_3,param_4,param_5,param_6,uVar1,param_8,param_9);
  return;
}

// 00A9F6B0  FUN_00a9f6b0  size=91  [between]
bool __thiscall FUN_00a9f6b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4f0) == 0) || (iVar1 = FUN_00a7c890(), iVar1 == 0)) {
    return false;
  }
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7c890();
  }
  iVar1 = FUN_00e33e50(param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_00a94ce0(param_2);
    return iVar1 == 0;
  }
  return false;
}

// 00A9F710  FUN_00a9f710  size=80  [between]
undefined4 __thiscall FUN_00a9f710(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x4f0) != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    iVar1 = FUN_00e33270(param_2);
    if (iVar1 != -1) {
      uVar2 = FUN_00a9f6b0(iVar1);
      return uVar2;
    }
  }
  return 0;
}

// 00A9F760  FUN_00a9f760  size=97  [between]
undefined4 __thiscall FUN_00a9f760(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_008d7d70(param_2);
  if ((*(int *)(param_1 + 0x4f0) != 0) && (iVar2 = FUN_00a7c890(), iVar2 != 0)) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    iVar2 = FUN_00e33270(uVar1);
    if (iVar2 != -1) {
      uVar1 = FUN_00a9f6b0(iVar2);
      return uVar1;
    }
  }
  return 0;
}

// 00A9F7D0  FUN_00a9f7d0  size=181  [between]
undefined4 __thiscall FUN_00a9f7d0(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x75c) == 0) {
    return 0;
  }
  fVar3 = (float10)FUN_008d7eb0(param_2);
  fVar4 = (float10)FUN_008d7f00(param_2);
  if ((float10)(float)fVar3 < (float10)0) {
    return 0;
  }
  fVar1 = (float)((float10)(float)fVar3 * (float10)60.0);
  if (fVar4 < (float10)0) {
    uVar2 = FUN_008d7d70(param_2);
    uVar2 = FUN_00a95140(uVar2,fVar1);
    return uVar2;
  }
  uVar2 = FUN_008d7d70(param_2);
  uVar2 = FUN_00a94f00(uVar2,fVar1,(float)fVar4 * 60.0 + fVar1);
  return uVar2;
}

// 00A9F890  FUN_00a9f890  size=196  [between]
undefined4 __thiscall FUN_00a9f890(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x14) == 0) {
LAB_00a9f8bb:
    uVar3 = 0;
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if (iVar2 != *(int *)(param_2 + 0x14)) goto LAB_00a9f8bb;
    uVar3 = 1;
  }
  if (*(int *)(param_1 + 0x370) == 0) {
    return 0;
  }
  iVar2 = FUN_00a1b020(param_1,uVar3,*(undefined4 *)(param_2 + 0xec),*(undefined4 *)(param_2 + 0xf0)
                       ,0);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if (iVar2 == *(int *)(param_2 + 0x14)) {
      uVar3 = 1;
      goto LAB_00a9f906;
    }
  }
  uVar3 = 0;
LAB_00a9f906:
  if (*(int *)(param_1 + 0x370) == 0) {
    return 0;
  }
  uVar3 = FUN_00a1a480(param_1,param_2 + 0xa0,*(undefined4 *)(param_2 + 0xe0),
                       *(undefined4 *)(param_2 + 0xe4),*(undefined4 *)(param_2 + 0xec),
                       *(undefined4 *)(param_2 + 0xf0),uVar3);
  return uVar3;
}

// 00A9F960  Behavior::setSeqAtk  size=3564  [class]
void __fastcall Behavior::setSeqAtk(int *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  float *pfVar14;
  undefined4 *puVar15;
  ushort *unaff_EDI;
  float *pfVar16;
  ushort *puVar17;
  undefined4 *puVar18;
  bool bVar19;
  float10 fVar20;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  int iStack_244;
  int *piStack_240;
  uint uStack_238;
  float fStack_204;
  float fStack_1fc;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1dc;
  float fStack_1d8;
  float afStack_1d4 [4];
  undefined4 uStack_1c4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  float afStack_134 [6];
  float fStack_11c;
  undefined1 auStack_110 [36];
  undefined1 auStack_ec [8];
  undefined1 auStack_e4 [84];
  int aiStack_90 [16];
  int local_50 [19];
  
  if (((param_1[0x13c] == 0) || (iVar7 = FUN_00a7c890(), iVar7 == 0)) ||
     (iVar7 = FUN_00e26e90(), iVar7 == 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00e33870();
  }
  iVar10 = param_1[0x1e0];
  param_1[0x1df] = iVar10;
  param_1[0x1e0] = (uint)(iVar7 != 0);
  if (((iVar10 != 0) && ((iVar7 != 0) == 0)) &&
     ((iVar10 = param_1[0x1e9], iVar10 != 0 &&
      (piVar11 = *(int **)(iVar10 + 4), piVar11 != piVar11 + *(int *)(iVar10 + 8))))) {
    do {
      if (*(int *)(*piVar11 + 0x418) == 0) {
        piVar8 = piVar11 + 1;
      }
      else {
        FUN_00d7b0f0();
        piVar8 = (int *)FUN_00d773c0();
        (**(code **)(*piVar8 + 0x10))();
        iVar10 = param_1[0x1e9];
        uVar3 = *(uint *)(iVar10 + 8);
        iVar9 = *(int *)(iVar10 + 4);
        piVar8 = (int *)(iVar9 + uVar3 * 4);
        if (((piVar11 != piVar8) && (iVar9 != 0)) &&
           ((uVar3 != 0 && ((uint)((int)piVar11 - iVar9 >> 2) < uVar3)))) {
          for (piVar12 = piVar11; piVar12 != piVar8 + -1; piVar12 = piVar12 + 1) {
            *piVar12 = piVar12[1];
          }
          *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + -1;
          piVar8 = piVar11;
        }
      }
      piVar11 = piVar8;
    } while (piVar8 != (int *)(*(int *)(param_1[0x1e9] + 4) + *(int *)(param_1[0x1e9] + 8) * 4));
  }
  iVar10 = param_1[0x1e9];
  if ((iVar10 != 0) && (piVar11 = *(int **)(iVar10 + 4), piVar11 != piVar11 + *(int *)(iVar10 + 8)))
  {
    do {
      if ((*(int *)(*piVar11 + 0x418) != 0) && (iVar10 = *(int *)(*piVar11 + 0x378), iVar10 != 0)) {
        iVar9 = 0;
        piStack_240 = (int *)0x0;
        if (0 < iVar7) {
          iVar10 = *(int *)(iVar10 + 8);
          do {
            if ((*(short *)(iVar10 + 0x80) == *(short *)(local_50[iVar9] + 8)) ||
               (*(short *)(iVar10 + 0x82) == *(short *)(local_50[iVar9] + 4))) {
              piStack_240 = (int *)0x1;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar7);
          if (piStack_240 != (int *)0x0) goto LAB_00a9fb18;
        }
        FUN_00d7acc0();
      }
LAB_00a9fb18:
      piVar11 = piVar11 + 1;
    } while (piVar11 != (int *)(*(int *)(param_1[0x1e9] + 4) + *(int *)(param_1[0x1e9] + 8) * 4));
  }
  afStack_1d4[0] = 0.0;
  if (0 < iVar7) {
    do {
      puVar4 = (ushort *)local_50[(int)afStack_1d4[0]];
      FID_conflict__memcpy(aiStack_90,param_1 + 4,0x40);
      FID_conflict__memcpy(auStack_110,param_1 + 4,0x40);
      if (param_1[0x13c] != 0) {
        FUN_00a7c890();
      }
      iVar10 = FUN_00e3a1e0();
      bVar19 = iVar10 != 0;
      uVar6 = puVar4[3];
      if (bVar19) {
        uVar6 = FUN_00a96170();
      }
      piVar11 = param_1;
      if (uVar6 != 0xffff) {
        piVar11 = (int *)FUN_00a12210();
      }
      if (piVar11 != (int *)0x0) {
        piVar11 = piVar11 + 4;
        piVar8 = aiStack_90;
        for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
          *piVar8 = *piVar11;
          piVar11 = piVar11 + 1;
          piVar8 = piVar8 + 1;
        }
      }
      fStack_170 = *(float *)(puVar4 + 6);
      uStack_16c = *(undefined4 *)(puVar4 + 8);
      uStack_168 = *(undefined4 *)(puVar4 + 10);
      afStack_134[5] = *(float *)(puVar4 + 0xc);
      fStack_11c = *(float *)(puVar4 + 0xe);
      if (bVar19) {
        fStack_11c = fStack_11c * -1.0;
        fStack_170 = fStack_170 * -1.0;
      }
      uStack_178 = 0;
      uStack_17c = 0;
      fStack_180 = 0.0;
      uStack_184 = 0;
      uStack_18c = 0;
      fStack_190 = 0.0;
      fStack_194 = 0.0;
      fStack_198 = 0.0;
      uStack_1a0 = 0;
      uStack_1a4 = 0;
      uStack_1a8 = 0;
      uStack_1ac = 0;
      uStack_174 = 0x3f800000;
      uStack_188 = 0x3f800000;
      uStack_19c = 0x3f800000;
      uStack_1b0 = 0x3f800000;
      if (*(float *)(puVar4 + 0x10) != 0.0) {
        D3DXMatrixRotationZ();
        D3DXMatrixMultiply();
      }
      if (fStack_11c != 0.0) {
        D3DXMatrixRotationY();
        D3DXMatrixMultiply();
      }
      if (afStack_134[5] != 0.0) {
        D3DXMatrixRotationX();
        D3DXMatrixMultiply();
      }
      fStack_180 = fStack_170;
      uStack_17c = uStack_16c;
      uStack_178 = uStack_168;
      D3DXMatrixMultiply();
      afStack_1d4[3] = *(float *)(puVar4 + 0x14);
      afStack_1d4[2] = 0.0;
      uStack_1c4 = 0;
      fStack_1d8 = -*(float *)(puVar4 + 0x14);
      uStack_1dc = 0;
      afStack_1d4[0] = 0.0;
      D3DXVec3TransformNormal(afStack_1d4 + 2);
      fStack_1d8 = fStack_1d8 + fStack_198;
      afStack_1d4[0] = afStack_1d4[0] + fStack_194;
      afStack_1d4[1] = afStack_1d4[1] + fStack_190;
      D3DXVec3TransformNormal(&uStack_1e8,&uStack_1e8,afStack_1d4 + 3);
      puVar17 = puVar4;
      switch(*(undefined1 *)((int)puVar4 + 3)) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 8:
        goto LAB_00a9ffc5;
      case 9:
LAB_00a9ffc5:
        pfVar14 = afStack_1d4;
        pfVar16 = afStack_134;
        for (iVar10 = 0x10; puVar17 = unaff_EDI, iVar10 != 0; iVar10 = iVar10 + -1) {
          *pfVar16 = *pfVar14;
          pfVar14 = pfVar14 + 1;
          pfVar16 = pfVar16 + 1;
        }
        break;
      case 10:
      case 7:
        goto LAB_00a9ffc5;
      case 0xb:
        pfVar14 = afStack_1d4;
        pfVar16 = afStack_134;
        for (iVar10 = 0x10; puVar17 = unaff_EDI, iVar10 != 0; iVar10 = iVar10 + -1) {
          *pfVar16 = *pfVar14;
          pfVar14 = pfVar14 + 1;
          pfVar16 = pfVar16 + 1;
        }
        break;
      case 0xc:
        pfVar14 = afStack_1d4;
        pfVar16 = afStack_134;
        for (iVar10 = 0x10; puVar17 = unaff_EDI, iVar10 != 0; iVar10 = iVar10 + -1) {
          *pfVar16 = *pfVar14;
          pfVar14 = pfVar14 + 1;
          pfVar16 = pfVar16 + 1;
        }
      }
      D3DXVec3TransformNormal(&stack0xfffffd8c,&stack0xfffffd8c,afStack_134);
      piVar11 = (int *)(**(code **)(*param_1 + 0x130))(puVar17);
      if (piVar11 == (int *)0x0) {
        FUN_00dd5650();
      }
      else {
        iVar10 = piVar11[2];
        *(ushort *)(iVar10 + 0x80) = puVar17[4];
        *(ushort *)(iVar10 + 0x82) = puVar17[2];
        *(undefined4 *)(iVar10 + 0x20) = uStack_250;
        *(undefined4 *)(iVar10 + 0x24) = uStack_24c;
        *(undefined4 *)(iVar10 + 0x28) = uStack_248;
        *(int *)(iVar10 + 0x2c) = iStack_244;
        *(undefined4 *)(iVar10 + 0x34) = 0;
        fVar20 = (float10)fpatan((float10)fStack_204,(float10)(float)piStack_240);
        *(float *)(iVar10 + 0x30) = (float)fVar20;
        iVar9 = FUN_00a12210();
        if (iVar9 == 0) {
          afStack_134[3] = 0.0;
          afStack_134[2] = 0.0;
          afStack_134[1] = 0.0;
          afStack_134[0] = 0.0;
          uStack_13c = 0;
          uStack_140 = 0;
          uStack_144 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_154 = 0;
          uStack_158 = 0;
          uStack_15c = 0;
          afStack_134[4] = 1.0;
          uStack_138 = 0x3f800000;
          uStack_14c = 0x3f800000;
          uStack_160 = 0x3f800000;
          D3DXMatrixRotationZ();
          D3DXMatrixMultiply();
          D3DXMatrixRotationX(auStack_e4,0x40490fdb);
          D3DXMatrixMultiply(&uStack_17c,auStack_ec,&uStack_17c);
          D3DXMatrixMultiply(iVar10 + 0x40,&uStack_188,&fStack_1d8);
        }
        else {
          puVar15 = (undefined4 *)(iVar9 + 0x10);
          puVar18 = (undefined4 *)(iVar10 + 0x40);
          for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
            *puVar18 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar18 = puVar18 + 1;
          }
        }
        fStack_204 = 0.0;
        if (*puVar4 < 4) {
          *(uint *)(iVar10 + 0x34) = (uint)puVar4[2];
        }
        piStack_240 = (int *)param_1[400];
        if ((*(uint *)(iVar10 + 0x8c) & 0x1000000) != 0) {
          piStack_240 = (int *)0x5;
        }
        if ((*(uint *)(iVar10 + 0x8c) & 0x40000) != 0) {
          piStack_240 = (int *)0x1;
        }
        uStack_1e8 = *(undefined4 *)(puVar4 + 10);
        uStack_1e4 = 0x3f800000;
        iVar9 = *(int *)(puVar4 + 0xc);
        fStack_1fc = *(float *)(puVar4 + 0xe);
        iVar13 = *(int *)(puVar4 + 0x10);
        if (bVar19) {
          fStack_1fc = fStack_1fc * -1.0;
        }
        uStack_238 = (uint)*puVar4;
        switch(uStack_238) {
        case 0:
          FUN_00a7c7f0();
          FUN_00a7c940();
          FUN_00c63390();
          goto LAB_00aa0725;
        case 1:
          puVar15 = (undefined4 *)piVar11[2];
          *puVar15 = 0x147;
          puVar15[1] = 999999;
          puVar15[3] = 0;
          *(undefined1 *)(puVar15 + 4) = 0;
          puVar15[2] = 0;
          break;
        case 2:
        case 3:
          goto switchD_00aa02c0_caseD_2;
        default:
          uStack_238 = 4;
        }
        if ((char)puVar4[1] == '\x03') {
switchD_00aa02c0_caseD_2:
          (**(code **)(*piVar11 + 4))();
          goto LAB_00aa0732;
        }
        iVar5 = param_1[0x1e9];
        if ((iVar5 != 0) && (piVar8 = *(int **)(iVar5 + 4), piVar8 != piVar8 + *(int *)(iVar5 + 8)))
        {
          do {
            piVar12 = (int *)*piVar8;
            if ((piVar12[0xde] != 0) &&
               ((iVar5 = *(int *)(piVar12[0xde] + 8), *(ushort *)(iVar5 + 0x80) == puVar4[4] &&
                (*(ushort *)(iVar5 + 0x82) == puVar4[2])))) {
              piVar12[0xdb] = (int)piStack_240;
              piVar8 = (int *)FUN_009f8b60();
              piVar12[0xdc] = *piVar8;
              *(int *)(iVar10 + 0x88) = param_1[0x1d8];
              if (piVar12[0xde] != 0) {
                FUN_0043e160();
              }
              fStack_204 = 1.4013e-45;
              goto LAB_00aa04fb;
            }
            piVar8 = piVar8 + 1;
          } while (piVar8 != (int *)(*(int *)(param_1[0x1e9] + 4) + *(int *)(param_1[0x1e9] + 8) * 4
                                    ));
        }
        switch((char)puVar4[1]) {
        case '\0':
          FUN_009f8b60();
          piVar12 = (int *)CollisionSphere::CollisionSphere();
          break;
        case '\x01':
          FUN_009f8b60();
          piVar12 = (int *)CollisionCapsule::CollisionCapsule();
          break;
        case '\x02':
          FUN_009f8b60();
          piVar12 = (int *)CollisionBox::CollisionBox();
          break;
        default:
          goto switchD_00aa0394_caseD_3;
        case '\x04':
          FUN_009f8b60();
          piVar12 = (int *)CollisionCylinder::CollisionCylinder();
        }
        if (piVar12 == (int *)0x0) {
switchD_00aa0394_caseD_3:
          FUN_00dd5650();
        }
        else {
          piVar12[0xe0] = (uint)*puVar4;
          FUN_00a95ca0();
          FUN_00d77250();
          piVar12[0x106] = 1;
          piVar12[0xfc] = param_1[0x13c];
          iVar5 = param_1[0x1d8];
          (**(code **)(*(int *)param_1[0x1e9] + 8))();
          FUN_00d77200();
          *(uint *)(iStack_244 + 0x374) = iVar5 + uStack_238;
          piVar8 = (int *)FUN_00d773c0();
          (**(code **)(*piVar8 + 8))();
          FUN_00d7b0f0();
          FUN_00d7b890();
          *(int *)(iVar10 + 0x88) = param_1[0x1d8];
          piStack_240 = piVar12;
LAB_00aa04fb:
          *(int *)(iVar10 + 0xf4) = piVar12[0xd5];
          FUN_009f8b60();
          (**(code **)(*piVar12 + 0x20))();
          if ((*(uint *)(iVar10 + 0x90) & 0x4000000) != 0) {
            piVar12[0xe1] = piVar12[0xe1] | 1;
          }
          switch((char)puVar4[1]) {
          case '\0':
            FUN_00d77c50();
            piVar12[0x144] = *(int *)(puVar4 + 0x12);
            FUN_00d77c90();
            break;
          case '\x01':
            FUN_00d77c50();
            fVar1 = *(float *)(puVar4 + 0x14) + *(float *)(puVar4 + 0x14);
            if ((float)param_1[0x1e1] == 1.0) {
              piVar12[0x165] = (int)fVar1;
              piVar12[0x164] = *(int *)(puVar4 + 0x12);
            }
            else {
              piVar12[0x165] = (int)(fVar1 * (float)param_1[0x1e1]);
              piVar12[0x164] = *(int *)(puVar4 + 0x12);
            }
            FUN_00d77c90();
            piVar12[0x160] = iVar9;
            piVar12[0x161] = (int)fStack_1fc;
            piVar12[0x162] = iVar13;
            piVar12[0x163] = 0x3f800000;
            break;
          case '\x02':
            FUN_00d77c50();
            fVar1 = *(float *)(puVar4 + 0x14);
            fVar2 = *(float *)(puVar4 + 0x16);
            piVar12[0x144] = (int)(*(float *)(puVar4 + 0x12) * 2.0);
            piVar12[0x145] = (int)(fVar1 * 2.0);
            piVar12[0x146] = (int)(fVar2 * 2.0);
            piVar12[0x147] = 0x40000000;
            FUN_00d77c90();
            FUN_00d77cc0();
            break;
          case '\x04':
            FUN_00d77c50();
            piVar12[0x15d] = (int)(*(float *)(puVar4 + 0x14) + *(float *)(puVar4 + 0x14));
            piVar12[0x15c] = *(int *)(puVar4 + 0x12);
            FUN_00d77c90();
            piVar12[0x158] = iVar9;
            piVar12[0x159] = (int)fStack_1fc;
            piVar12[0x15a] = iVar13;
            piVar12[0x15b] = 0x3f800000;
          }
          if (fStack_204 != 0.0) {
LAB_00aa0725:
            (**(code **)(*piVar11 + 4))();
          }
        }
      }
LAB_00aa0732:
      afStack_1d4[0] = (float)((int)afStack_1d4[0] + 1);
    } while ((int)afStack_1d4[0] < iVar7);
  }
  return;
}

// 00AA3540  Behavior::Behavior_95  size=318  [class]
undefined4 * __fastcall Behavior::Behavior_95(undefined4 *param_1)

{
  cObj::cObj();
  *param_1 = vftable;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x185] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  FUN_00a7c930();
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1b8] = 0xffffffff;
  cLockonPartsList::cLockonPartsList();
  param_1[0x1f0] = 0;
  *(undefined2 *)(param_1 + 0x209) = 0xffff;
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[499] = 0;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  param_1[0x1f6] = 0;
  param_1[0x202] = 0;
  param_1[0x206] = 0;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  *(undefined1 *)((int)param_1 + 0x849) = 0;
  return param_1;
}

// 00AA3680  Behavior::vf04  size=6  [class]
undefined * Behavior::vf04(void)

{
  return &DAT_01be9c20;
}

// 00AA3690  Behavior::Behavior_96  size=84  [class]
void __fastcall Behavior::Behavior_96(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA4B10  Behavior::Behavior_135  size=84  [class]
void __fastcall Behavior::Behavior_135(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7000  Behavior::Behavior_120  size=150  [class]
void __fastcall Behavior::Behavior_120(undefined4 *param_1)

{
  EspControllerBullet::EspControllerBullet_6();
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cXml::cXml_7();
  *param_1 = vftable;
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
  return;
}

// 00AA70A0  Behavior::Behavior_119  size=84  [class]
void __fastcall Behavior::Behavior_119(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7100  FUN_00aa7100  size=22  [between]
void FUN_00aa7100(void)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  return;
}

// 00AA7120  Behavior::Behavior_123  size=84  [class]
void __fastcall Behavior::Behavior_123(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7180  Behavior::Behavior_121  size=95  [class]
void __fastcall Behavior::Behavior_121(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AA71E0  Behavior::Behavior_122  size=84  [class]
void __fastcall Behavior::Behavior_122(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7360  Behavior::Behavior_124  size=117  [class]
void __fastcall Behavior::Behavior_124(undefined4 *param_1)

{
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00dd7270();
  *param_1 = vftable;
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
  return;
}

// 00AA7440  Behavior::Behavior_126  size=84  [class]
void __fastcall Behavior::Behavior_126(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA74E0  Behavior::Behavior_125  size=84  [class]
void __fastcall Behavior::Behavior_125(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7540  Behavior::Behavior_128  size=84  [class]
void __fastcall Behavior::Behavior_128(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA75A0  Behavior::Behavior_127  size=84  [class]
void __fastcall Behavior::Behavior_127(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7600  Behavior::Behavior_130  size=84  [class]
void __fastcall Behavior::Behavior_130(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7660  Behavior::Behavior_131  size=84  [class]
void __fastcall Behavior::Behavior_131(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA76C0  Behavior::Behavior_129  size=95  [class]
void __fastcall Behavior::Behavior_129(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AA7720  Behavior::Behavior_134  size=84  [class]
void __fastcall Behavior::Behavior_134(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7780  Behavior::Behavior_132  size=84  [class]
void __fastcall Behavior::Behavior_132(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA77E0  Behavior::Behavior_133  size=84  [class]
void __fastcall Behavior::Behavior_133(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7840  Behavior::Behavior_101  size=84  [class]
void __fastcall Behavior::Behavior_101(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA78A0  Behavior::Behavior_100  size=95  [class]
void __fastcall Behavior::Behavior_100(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AA7920  Behavior::Behavior_104  size=84  [class]
void __fastcall Behavior::Behavior_104(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7980  Behavior::Behavior_102  size=84  [class]
void __fastcall Behavior::Behavior_102(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA79E0  Behavior::Behavior_103  size=113  [class]
void __fastcall Behavior::Behavior_103(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 2;
  do {
    Animation::PostControl::Work::Work();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
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
  return;
}

// 00AA7A60  Behavior::Behavior_106  size=84  [class]
void __fastcall Behavior::Behavior_106(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7AC0  Behavior::Behavior_105  size=84  [class]
void __fastcall Behavior::Behavior_105(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7B20  Behavior::Behavior_108  size=84  [class]
void __fastcall Behavior::Behavior_108(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7B80  Behavior::Behavior_107  size=84  [class]
void __fastcall Behavior::Behavior_107(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7BE0  FUN_00aa7be0  size=22  [between]
void FUN_00aa7be0(void)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  return;
}

// 00AA7C10  Behavior::Behavior_110  size=84  [class]
void __fastcall Behavior::Behavior_110(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7C70  Behavior::Behavior_111  size=84  [class]
void __fastcall Behavior::Behavior_111(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7CD0  FUN_00aa7cd0  size=22  [between]
void FUN_00aa7cd0(void)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  return;
}

// 00AA7CF0  Behavior::Behavior_109  size=84  [class]
void __fastcall Behavior::Behavior_109(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7D50  Behavior::Behavior_113  size=84  [class]
void __fastcall Behavior::Behavior_113(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7DB0  Behavior::Behavior_112  size=84  [class]
void __fastcall Behavior::Behavior_112(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7E10  Behavior::Behavior_115  size=84  [class]
void __fastcall Behavior::Behavior_115(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7E70  Behavior::Behavior_116  size=95  [class]
void __fastcall Behavior::Behavior_116(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AA7ED0  Behavior::Behavior_114  size=106  [class]
void __fastcall Behavior::Behavior_114(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AA7F40  Behavior::Behavior_118  size=84  [class]
void __fastcall Behavior::Behavior_118(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA7FA0  Behavior::Behavior_117  size=84  [class]
void __fastcall Behavior::Behavior_117(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8000  Behavior::Behavior_49  size=84  [class]
void __fastcall Behavior::Behavior_49(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8060  Behavior::Behavior_50  size=84  [class]
void __fastcall Behavior::Behavior_50(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA80C0  Behavior::Behavior_48  size=84  [class]
void __fastcall Behavior::Behavior_48(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8120  Behavior::Behavior_53  size=84  [class]
void __fastcall Behavior::Behavior_53(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8180  Behavior::Behavior_51  size=84  [class]
void __fastcall Behavior::Behavior_51(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA81E0  Behavior::Behavior_52  size=95  [class]
void __fastcall Behavior::Behavior_52(undefined4 *param_1)

{
  FUN_00c1e230();
  *param_1 = vftable;
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
  return;
}

// 00AA8240  Behavior::Behavior_55  size=84  [class]
void __fastcall Behavior::Behavior_55(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA82A0  Behavior::Behavior_54  size=84  [class]
void __fastcall Behavior::Behavior_54(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8300  Behavior::Behavior_57  size=84  [class]
void __fastcall Behavior::Behavior_57(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8360  Behavior::Behavior_58  size=84  [class]
void __fastcall Behavior::Behavior_58(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA83C0  Behavior::Behavior_56  size=84  [class]
void __fastcall Behavior::Behavior_56(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8420  Behavior::Behavior_61  size=84  [class]
void __fastcall Behavior::Behavior_61(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8480  Behavior::Behavior_59  size=84  [class]
void __fastcall Behavior::Behavior_59(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA84E0  Behavior::Behavior_60  size=84  [class]
void __fastcall Behavior::Behavior_60(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8540  Behavior::Behavior_63  size=84  [class]
void __fastcall Behavior::Behavior_63(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA85A0  Behavior::Behavior_62  size=84  [class]
void __fastcall Behavior::Behavior_62(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8600  Behavior::Behavior_65  size=84  [class]
void __fastcall Behavior::Behavior_65(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8660  Behavior::Behavior_66  size=84  [class]
void __fastcall Behavior::Behavior_66(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA86C0  Behavior::Behavior_64  size=84  [class]
void __fastcall Behavior::Behavior_64(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8720  Behavior::Behavior_69  size=84  [class]
void __fastcall Behavior::Behavior_69(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8780  Behavior::Behavior_67  size=84  [class]
void __fastcall Behavior::Behavior_67(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA87E0  Behavior::Behavior_68  size=84  [class]
void __fastcall Behavior::Behavior_68(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8840  Behavior::Behavior_35  size=84  [class]
void __fastcall Behavior::Behavior_35(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA88A0  Behavior::Behavior_34  size=95  [class]
void __fastcall Behavior::Behavior_34(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AA8900  Behavior::Behavior_37  size=84  [class]
void __fastcall Behavior::Behavior_37(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8960  Behavior::Behavior_38  size=84  [class]
void __fastcall Behavior::Behavior_38(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA89C0  Behavior::Behavior_36  size=84  [class]
void __fastcall Behavior::Behavior_36(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8A20  Behavior::Behavior_40  size=84  [class]
void __fastcall Behavior::Behavior_40(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8A80  Behavior::Behavior_39  size=84  [class]
void __fastcall Behavior::Behavior_39(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8B20  Behavior::Behavior_42  size=117  [class]
void __fastcall Behavior::Behavior_42(undefined4 *param_1)

{
  FUN_00905ce0();
  FUN_00dd7270();
  FUN_00905ce0();
  *param_1 = vftable;
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
  return;
}

// 00AA8BA0  Behavior::Behavior_41  size=95  [class]
void __fastcall Behavior::Behavior_41(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AA8C80  Behavior::Behavior_43  size=84  [class]
void __fastcall Behavior::Behavior_43(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8D50  Behavior::Behavior_45  size=84  [class]
void __fastcall Behavior::Behavior_45(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8DB0  Behavior::Behavior_44  size=84  [class]
void __fastcall Behavior::Behavior_44(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA8E10  Behavior::Behavior_46  size=95  [class]
void __fastcall Behavior::Behavior_46(undefined4 *param_1)

{
  FUN_00dd7270();
  *param_1 = vftable;
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
  return;
}

// 00AA8E70  Behavior::Behavior_47  size=84  [class]
void __fastcall Behavior::Behavior_47(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AA9010  Behavior::vf00  size=105  [class]
undefined4 * __thiscall Behavior::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
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

// 00AA9350  Behavior::Behavior_33  size=84  [class]
void __fastcall Behavior::Behavior_33(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAB4C0  Behavior::Behavior_30  size=84  [class]
void __fastcall Behavior::Behavior_30(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAB560  Behavior::Behavior_31  size=95  [class]
void __fastcall Behavior::Behavior_31(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AAB770  Behavior::Behavior_32  size=227  [class]
void __fastcall Behavior::Behavior_32(undefined4 *param_1)

{
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cXml::cXml_7();
  cEspControler::~cEspControler();
  stKogekkoCamParamBase::stKogekkoCamParamBase_2();
  stKogekkoCamParamBase::stKogekkoCamParamBase_2();
  FUN_00dd7270();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AAB8E0  Behavior::Behavior_28  size=84  [class]
void __fastcall Behavior::Behavior_28(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AABE00  Behavior::Behavior_29  size=84  [class]
void __fastcall Behavior::Behavior_29(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAC140  Behavior::Behavior_93  size=84  [class]
void __fastcall Behavior::Behavior_93(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAC540  Behavior::Behavior_94  size=84  [class]
void __fastcall Behavior::Behavior_94(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAD110  Behavior::Behavior_92  size=117  [class]
void __fastcall Behavior::Behavior_92(undefined4 *param_1)

{
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AAE3C0  Behavior::Behavior_91  size=84  [class]
void __fastcall Behavior::Behavior_91(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAE960  Behavior::Behavior_84  size=106  [class]
void __fastcall Behavior::Behavior_84(undefined4 *param_1)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AAEAA0  Behavior::Behavior_85  size=106  [class]
void __fastcall Behavior::Behavior_85(undefined4 *param_1)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AAEB70  Behavior::Behavior_86  size=106  [class]
void __fastcall Behavior::Behavior_86(undefined4 *param_1)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AAED30  Behavior::Behavior_87  size=106  [class]
void __fastcall Behavior::Behavior_87(undefined4 *param_1)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AAEE20  Behavior::Behavior_88  size=106  [class]
void __fastcall Behavior::Behavior_88(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AAEF40  Behavior::Behavior_90  size=84  [class]
void __fastcall Behavior::Behavior_90(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAEFE0  Behavior::Behavior_89  size=84  [class]
void __fastcall Behavior::Behavior_89(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAF0B0  Behavior::Behavior_80  size=84  [class]
void __fastcall Behavior::Behavior_80(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAF160  Behavior::Behavior_81  size=84  [class]
void __fastcall Behavior::Behavior_81(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAF220  Behavior::Behavior_82  size=84  [class]
void __fastcall Behavior::Behavior_82(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAF3A0  Behavior::Behavior_83  size=84  [class]
void __fastcall Behavior::Behavior_83(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAF8B0  Behavior::Behavior_70  size=117  [class]
void __fastcall Behavior::Behavior_70(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cXml::cXml_7();
  *param_1 = vftable;
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
  return;
}

// 00AAF960  Behavior::Behavior_72  size=84  [class]
void __fastcall Behavior::Behavior_72(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAF9F0  Behavior::Behavior_71  size=84  [class]
void __fastcall Behavior::Behavior_71(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAFA80  Behavior::Behavior_73  size=84  [class]
void __fastcall Behavior::Behavior_73(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAFB10  Behavior::Behavior_75  size=84  [class]
void __fastcall Behavior::Behavior_75(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAFBA0  Behavior::Behavior_74  size=84  [class]
void __fastcall Behavior::Behavior_74(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAFC30  Behavior::Behavior_77  size=84  [class]
void __fastcall Behavior::Behavior_77(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAFCC0  Behavior::Behavior_76  size=84  [class]
void __fastcall Behavior::Behavior_76(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAFD50  Behavior::Behavior_79  size=84  [class]
void __fastcall Behavior::Behavior_79(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AAFDE0  Behavior::Behavior_78  size=84  [class]
void __fastcall Behavior::Behavior_78(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB0700  Behavior::Behavior_13  size=106  [class]
void __fastcall Behavior::Behavior_13(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AB0CE0  Behavior::Behavior_12  size=84  [class]
void __fastcall Behavior::Behavior_12(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB1030  Behavior::Behavior_10  size=128  [class]
void __fastcall Behavior::Behavior_10(undefined4 *param_1)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cXml::cXml_7();
  *param_1 = vftable;
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
  return;
}

// 00AB1160  Behavior::Behavior_11  size=128  [class]
void __fastcall Behavior::Behavior_11(undefined4 *param_1)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cXml::cXml_7();
  *param_1 = vftable;
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
  return;
}

// 00AB1A00  Behavior::Behavior_8  size=84  [class]
void __fastcall Behavior::Behavior_8(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB1BD0  Behavior::Behavior_9  size=117  [class]
void __fastcall Behavior::Behavior_9(undefined4 *param_1)

{
  FUN_00dd7270();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AB2120  Behavior::Behavior_6  size=84  [class]
void __fastcall Behavior::Behavior_6(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB23D0  Behavior::Behavior_7  size=84  [class]
void __fastcall Behavior::Behavior_7(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB29E0  Behavior::Behavior_5  size=84  [class]
void __fastcall Behavior::Behavior_5(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB37E0  Behavior::Behavior_4  size=84  [class]
void __fastcall Behavior::Behavior_4(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB3BF0  Behavior::Behavior_2  size=106  [class]
void __fastcall Behavior::Behavior_2(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AB3EB0  Behavior::Behavior_3  size=106  [class]
void __fastcall Behavior::Behavior_3(undefined4 *param_1)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AB4010  Behavior::Behavior_24  size=128  [class]
void __fastcall Behavior::Behavior_24(undefined4 *param_1)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cXml::cXml_7();
  *param_1 = vftable;
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
  return;
}

// 00AB4140  Behavior::Behavior_25  size=84  [class]
void __fastcall Behavior::Behavior_25(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB4200  Behavior::Behavior_27  size=84  [class]
void __fastcall Behavior::Behavior_27(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB42C0  Behavior::Behavior_26  size=84  [class]
void __fastcall Behavior::Behavior_26(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB4A50  Behavior::Behavior_23  size=84  [class]
void __fastcall Behavior::Behavior_23(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB50F0  Behavior::Behavior_22  size=84  [class]
void __fastcall Behavior::Behavior_22(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB5A10  Behavior::Behavior_18  size=84  [class]
void __fastcall Behavior::Behavior_18(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB5AA0  Behavior::Behavior_17  size=84  [class]
void __fastcall Behavior::Behavior_17(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB5B30  Behavior::Behavior_19  size=84  [class]
void __fastcall Behavior::Behavior_19(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB5E40  Behavior::Behavior_20  size=84  [class]
void __fastcall Behavior::Behavior_20(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB5F50  Behavior::Behavior_21  size=84  [class]
void __fastcall Behavior::Behavior_21(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB6010  Behavior::Behavior_16  size=84  [class]
void __fastcall Behavior::Behavior_16(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB60D0  Behavior::Behavior_15  size=84  [class]
void __fastcall Behavior::Behavior_15(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AB6BF0  Behavior::Behavior_14  size=84  [class]
void __fastcall Behavior::Behavior_14(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00ABACE0  Behavior::Behavior  size=84  [class]
void __fastcall Behavior::Behavior(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AC0EE0  Behavior::Behavior_98  size=84  [class]
void __fastcall Behavior::Behavior_98(undefined4 *param_1)

{
  *param_1 = vftable;
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
  return;
}

// 00AC0FE0  Behavior::Behavior_99  size=106  [class]
void __fastcall Behavior::Behavior_99(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  *param_1 = vftable;
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
  return;
}

// 00AC1850  Behavior::Behavior_97  size=151  [class]
void __fastcall Behavior::Behavior_97(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = 0xf;
  puVar2 = param_1 + 0x309;
  do {
    puVar3 = puVar2 + -7;
    if (puVar2[-6] != 0) {
      if (puVar2[-6] != 0) {
        FUN_00dd48d0(puVar2[-6],0);
        puVar2[-6] = 0;
      }
      puVar2[-5] = 0;
      puVar2[-4] = 0;
      puVar2[-3] = *puVar3;
      puVar2[-2] = *puVar3;
      puVar2[-1] = *puVar3;
    }
    iVar1 = iVar1 + -1;
    puVar2 = puVar3;
  } while (-1 < iVar1);
  *param_1 = vftable;
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
  return;
}

