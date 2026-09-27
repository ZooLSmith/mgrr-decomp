// src/player/pl0010/state/ZangekiStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B83870..00BF1210, 10 functions

#include "types.h"

// 00B83870  ZangekiStatePl0010::thunk_vf14  size=5  [class]
undefined4 __thiscall ZangekiStatePl0010::thunk_vf14(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 4;
  return 1;
}

// 00B83880  ZangekiStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiStatePl0010::vf18(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 5;
  return 1;
}

// 00B83890  ZangekiStatePl0010::vf24  size=19  [class]
bool ZangekiStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B838B0  ZangekiStatePl0010::ZangekiStatePl0010  size=33  [class]
undefined4 * __thiscall
ZangekiStatePl0010::ZangekiStatePl0010(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_009003e0();
  return param_1;
}

// 00B838E0  ZangekiStatePl0010::vf00  size=6  [class]
undefined * ZangekiStatePl0010::vf00(void)

{
  return &DAT_01be9ee8;
}

// 00B91900  ZangekiStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BD2570  ZangekiStatePl0010::vf10  size=2543  [class]
/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall ZangekiStatePl0010::vf10(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  float unaff_EBX;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float *pfStack_158;
  float *local_154;
  float fStack_144;
  int iStack_140;
  int *local_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float afStack_120 [4];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [18];
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [4];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [100];
  
  if (param_2 == (float *)0x0) {
    uVar12 = 0;
  }
  else {
    local_154 = (float *)&DAT_01be9ef4;
    pfStack_158 = (float *)0xbd259b;
    (**(code **)*param_2)();
    pfStack_158 = (float *)0xbd25a2;
    iVar3 = FUN_00dd6d80();
    uVar12 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  local_134 = *(int **)(uVar12 + 0xc);
  if (local_134 == (int *)0x0) {
    local_134 = (int *)0x0;
  }
  else {
    local_154 = (float *)&DAT_01be9db8;
    pfStack_158 = (float *)0xbd25c7;
    (**(code **)(*local_134 + 4))();
    pfStack_158 = (float *)0xbd25ce;
    iVar3 = FUN_00dd6d80();
    local_134 = (int *)(-(uint)(iVar3 != 0) & (uint)local_134);
  }
  local_154 = (float *)0xb;
  pfStack_158 = (float *)0xbd25e7;
  iVar3 = FUN_00d821d0();
  if (iVar3 == 0) {
    *(uint *)(uVar12 + 0x3f4) = (uint)(*(int *)(uVar12 + 0x564) < 2);
    local_154 = (float *)0xbd2621;
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      local_154 = (float *)0xbd2630;
      FUN_00a81330();
      local_154 = (float *)0xbd2637;
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        fVar14 = (float10)fpatan((float10)*(float *)(iVar3 + 0x40) - (float10)(float)local_134[0x10]
                                 ,(float10)*(float *)(iVar3 + 0x48) -
                                  (float10)(float)local_134[0x12]);
        local_154 = (float *)(float)(fVar14 - (float10)(float)local_134[0x25]);
        pfStack_158 = (float *)0xbd2660;
        fVar14 = (float10)FUN_00ddba30();
        if (fVar14 * fVar14 < (float10)0.6168503 != (fVar14 * fVar14 == (float10)0.6168503)) {
          *(undefined4 *)(param_1 + 0x30) = 1;
          local_154 = (float *)0xbd2682;
          piVar4 = (int *)TargetManagerImplement::TargetManagerImplement_2();
          pfStack_158 = (float *)0xbd268c;
          local_154 = (float *)iVar3;
          (**(code **)(*piVar4 + 0x24))();
        }
      }
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      local_154 = (float *)0xbd269b;
      piVar4 = (int *)TargetManagerImplement::TargetManagerImplement_2();
      local_154 = (float *)0x0;
      pfStack_158 = (float *)0xbd26a6;
      (**(code **)(*piVar4 + 0x24))();
      pfStack_158 = (float *)0xbd26ab;
      piVar4 = (int *)TargetManagerImplement::TargetManagerImplement_2();
      pfStack_158 = (float *)0x0;
      (**(code **)(*piVar4 + 0x2c))();
      piVar4 = (int *)TargetManagerImplement::TargetManagerImplement_2();
      (**(code **)(*piVar4 + 0x1c))(0);
    }
    if (((((*(int *)(uVar12 + 0x2f4) == 0) && (iVar3 = local_134[0x1032], iVar3 != 4)) &&
         (iVar3 != 9)) && ((iVar3 != 0xc && (iVar3 != 0xf)))) &&
       ((iVar3 != 0xe && ((iVar3 != 0xd && (iVar3 != 8)))))) {
      fVar18 = *(float *)(uVar12 + 0x378);
      local_154 = (float *)0xbd270e;
      pfVar5 = (float *)(**(code **)(*local_134 + 0x84))();
      fStack_108 = pfVar5[2];
      fStack_110 = *pfVar5;
      local_154 = &fStack_110;
      pfStack_158 = (float *)0xbd2734;
      fStack_10c = fVar18;
      (**(code **)(*local_134 + 0x88))();
    }
    if (0.0 < *(float *)(uVar12 + 0x5cc)) {
      fVar18 = *(float *)(uVar12 + 0x5cc) - 1.0;
      *(float *)(uVar12 + 0x5cc) = fVar18;
      if (fVar18 < 0.0 != (fVar18 == 0.0)) {
        *(undefined4 *)(uVar12 + 0x5cc) = 0xbf800000;
      }
    }
    if (0 < *(int *)(uVar12 + 0x304)) {
      *(int *)(uVar12 + 0x304) = *(int *)(uVar12 + 0x304) + -1;
    }
    fVar18 = *(float *)(uVar12 + 0x5d8) - 1.0;
    *(undefined4 *)(uVar12 + 0x304) = 0;
    *(float *)(uVar12 + 0x5d8) = fVar18;
    if (fVar18 < 0.0) {
      *(undefined4 *)(uVar12 + 0x5d8) = 0;
    }
    if ((local_134[0x21c] < 1) && (local_134[0x1032] != 8)) {
      local_154 = (float *)0x1;
      pfStack_158 = (float *)0x64;
      FUN_00b92be0(param_2,param_1);
    }
    pfStack_158 = param_2;
    local_154 = (float *)param_1;
    FUN_00bbb500();
    if (*(int *)(uVar12 + 0x314) != 0) {
      *(int *)(uVar12 + 0x314) = *(int *)(uVar12 + 0x314) + -1;
    }
    if (*(int *)(uVar12 + 0x30c) != 0) {
      *(int *)(uVar12 + 0x30c) = *(int *)(uVar12 + 0x30c) + -1;
    }
    if ((*(int *)(uVar12 + 0x504) != 0) &&
       (fVar18 = *(float *)(uVar12 + 0x508) - 1.0, *(float *)(uVar12 + 0x508) = fVar18, fVar18 < 0.0
       )) {
      *(undefined4 *)(uVar12 + 0x508) = 0;
      *(undefined4 *)(uVar12 + 0x504) = 0;
    }
    local_154 = param_2;
    pfStack_158 = (float *)0xbd283b;
    iVar3 = FUN_00bbc8f0();
    if (iVar3 != 0) {
      local_154 = (float *)0xffffffff;
      pfStack_158 = (float *)0xbd284f;
      iVar3 = FUN_00a12210();
      fStack_130 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                        *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10) +
                        *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
      fStack_12c = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                        *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                        *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
      fVar16 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
                    *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
                    *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
      fVar18 = *(float *)(iVar3 + 0x28);
      fVar2 = *(float *)(iVar3 + 0x38) / fVar16;
      local_154 = (float *)-(*(float *)(iVar3 + 0x18) / fVar16);
      pfStack_158 = (float *)0xbd28dc;
      fVar14 = (float10)FUN_00ddbaa0();
      fVar15 = (float10)fpatan((float10)(fVar18 / fVar16),(float10)fVar2);
      fStack_100 = (float)fVar15;
      fStack_fc = (float)fVar14;
      fVar14 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)fStack_12c,
                               (float10)*(float *)(iVar3 + 0x10) / (float10)fStack_130);
      fStack_f8 = (float)fVar14;
      fStack_130 = *(float *)(iVar3 + 0x40);
      fStack_12c = *(float *)(iVar3 + 0x44);
      fStack_128 = *(float *)(iVar3 + 0x48);
      afStack_120[0] = 0.0;
      afStack_120[1] = 0.0;
      pfStack_158 = (float *)0x5;
      afStack_120[2] = 1.0;
      FUN_00ddc1d0(afStack_d0 + 8,&fStack_100);
      local_154 = afStack_d0 + 8;
      pfStack_158 = afStack_120;
      D3DXVec3TransformNormal(&fStack_110);
      fStack_12c = 0.0;
      fStack_128 = 1.0;
      fStack_124 = 0.0;
      FUN_00ddc1d0(afStack_d0 + 5,&fStack_10c,5);
      D3DXVec3TransformNormal(auStack_6c,&fStack_12c,afStack_d0 + 5);
      fStack_d8 = fStack_78 * 1.35 + unaff_EBX;
      fStack_d4 = fStack_74 * 1.35 + fStack_144;
      afStack_d0[0] = fStack_70 * 1.35 + fVar2;
      uStack_dc = 0;
      uStack_e4 = 0;
      uStack_e8 = 0;
      uStack_ec = 0;
      uStack_f0 = 0;
      fStack_f8 = 0.0;
      fStack_fc = 0.0;
      fStack_100 = 0.0;
      fStack_104 = 0.0;
      afStack_d0[1] = 1.0;
      uStack_e0 = 0x3f800000;
      uStack_f4 = 0x3f800000;
      fStack_108 = 1.0;
      afStack_d0[0x11] = 1.0;
      afStack_d0[0xc] = 1.0;
      afStack_d0[7] = 1.0;
      afStack_d0[2] = 1.0;
      afStack_d0[0x10] = 0.0;
      afStack_d0[0xf] = 0.0;
      afStack_d0[0xe] = 0.0;
      afStack_d0[0xd] = 0.0;
      afStack_d0[0xb] = 0.0;
      afStack_d0[10] = 0.0;
      afStack_d0[9] = 0.0;
      afStack_d0[8] = 0.0;
      afStack_d0[6] = 0.0;
      afStack_d0[5] = 0.0;
      afStack_d0[4] = 0.0;
      afStack_d0[3] = 0.0;
      if (fStack_110 != 0.0) {
        D3DXMatrixRotationZ(auStack_68,fStack_110);
        D3DXMatrixMultiply(afStack_d0,&fStack_70,afStack_d0);
      }
      if (afStack_120[3] != 0.0) {
        D3DXMatrixRotationY(auStack_68,afStack_120[3]);
        D3DXMatrixMultiply(afStack_d0,&fStack_70,afStack_d0);
      }
      if (afStack_120[2] != 0.0) {
        D3DXMatrixRotationX(auStack_68,afStack_120[2]);
        D3DXMatrixMultiply(afStack_d0,&fStack_70,afStack_d0);
      }
      D3DXMatrixMultiply(&fStack_108,afStack_d0 + 2,&fStack_108);
      D3DXMatrixRotationX(&fStack_74,*(float *)(uVar12 + 0x374) * 0.5);
      D3DXMatrixMultiply(afStack_120 + 1,auStack_7c,afStack_120 + 1);
      fVar18 = SQRT(afStack_120[0] * afStack_120[0] +
                    fStack_128 * fStack_128 + fStack_124 * fStack_124);
      fVar19 = SQRT(fStack_110 * fStack_110 +
                    afStack_120[2] * afStack_120[2] + afStack_120[3] * afStack_120[3]);
      fVar2 = SQRT(fStack_100 * fStack_100 + fStack_104 * fStack_104 + fStack_108 * fStack_108);
      fVar17 = fStack_110 / fVar2;
      fVar16 = fStack_100 / fVar2;
      fVar14 = (float10)FUN_00ddbaa0(-(afStack_120[0] / fVar2));
      fVar15 = (float10)fpatan((float10)fVar17,(float10)fVar16);
      afStack_d0[10] = (float)fVar15;
      afStack_d0[0xb] = (float)fVar14;
      fVar14 = (float10)fpatan((float10)fStack_124 / (float10)fVar19,
                               (float10)fStack_128 / (float10)fVar18);
      afStack_d0[0xc] = (float)fVar14;
      pfStack_158 = (float *)0x0;
      local_154 = (float *)0x0;
      FUN_00ddc1d0(auStack_88,afStack_d0 + 10,5);
      D3DXVec3TransformNormal(&stack0xfffffeb8,&pfStack_158,auStack_88);
      iStack_140 = 3;
      do {
        local_154 = (float *)0xbd2caf;
        FUN_00a82640();
        iStack_140 = iStack_140 + -1;
      } while (iStack_140 != 0);
      puVar10 = (undefined4 *)(param_1 + 0x50);
      iStack_140 = 3;
      do {
        local_154 = (float *)*puVar10;
        pfStack_158 = (float *)0xbd2cdc;
        iVar3 = FUN_00a12210();
        local_154 = (float *)0x1;
        pfStack_158 = &fStack_130;
        afStack_120[2] = fStack_108 * 2.6;
        fStack_130 = fStack_110 * 2.6 + *(float *)(iVar3 + 0x40);
        fStack_12c = fStack_10c * 2.6 + *(float *)(iVar3 + 0x44);
        fStack_128 = *(float *)(iVar3 + 0x48) + afStack_120[2];
        fStack_124 = fStack_104 * 2.6 + *(float *)(iVar3 + 0x4c);
        FUN_00a83330();
        puVar10 = puVar10 + 1;
        iStack_140 = iStack_140 + -1;
      } while (iStack_140 != 0);
    }
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(uVar12 + 0x374);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    local_154 = (float *)0xbd2d62;
    iVar3 = FUN_00f96420();
    if (iVar3 == 0x16) {
      if ((DAT_01b7b9d4 & 0x1000) != 0) {
        local_154 = (float *)0x1;
        pfStack_158 = (float *)0xbd2d83;
        FUN_009406a0();
      }
      if ((DAT_01b7b9d4 & 0x8000) != 0) {
        local_154 = (float *)0x0;
        pfStack_158 = (float *)0xbd2d9b;
        FUN_009406a0();
      }
      if ((DAT_01b7b9d4 & 0x20) != 0) {
        local_154 = (float *)0xbd2dae;
        FUN_0093db80();
      }
      if ((DAT_01b7b9d4 & 0x10) != 0) {
        local_154 = (float *)0x0;
        pfStack_158 = (float *)0x40000000;
        FUN_00940590();
      }
      if ((DAT_01b7b9d4 & 4) != 0) {
        local_154 = (float *)0xbd2de0;
        FUN_009408b0();
      }
      if ((DAT_01b7b9d4 & 2) != 0) {
        local_154 = (float *)0x1;
        pfStack_158 = (float *)0xbd2df5;
        FUN_00940a60();
      }
      if ((DAT_01b7b9d4 & 1) != 0) {
        local_154 = (float *)0xbd2e08;
        FUN_00940b10();
      }
      if ((DAT_01b7b9d4 & 0x40) != 0) {
        local_154 = (float *)0xbd2e1b;
        FUN_00940c10();
      }
      if ((DAT_01b7b9d4 & 0x80) != 0) {
        local_154 = (float *)0x1;
        pfStack_158 = (float *)0x40000000;
        FUN_00940590();
      }
    }
    local_154 = (float *)0xbd2e3f;
    iVar3 = FUN_00f96420();
    if ((iVar3 == 0x16) && (*(int *)(*(int *)(uVar12 + 0x170) + 8) != 0)) {
      iVar3 = 0;
      uVar11 = 1;
      do {
        local_154 = (float *)0xbd2e65;
        iVar6 = FUN_00f98a90();
        local_154 = (float *)0xbd2e7c;
        iVar7 = FUN_00f98aa0();
        uVar8 = (uint)(0xff / (ulonglong)uVar11);
        iVar1 = *(int *)(*(int *)(uVar12 + 0x170) + 4);
        local_154 = (float *)((uVar8 | 0xffffff00) << 8 | uVar8);
        pfStack_158 = (float *)0x41200000;
        FUN_00f95eb0(*(float *)(iVar1 + iVar3) * 0.3 + (float)iVar6 * 0.5,
                     *(float *)(iVar1 + 4 + iVar3) * 0.3 + (float)iVar7 * 0.5);
        iVar3 = iVar3 + 8;
        bVar13 = uVar11 < *(uint *)(*(int *)(uVar12 + 0x170) + 8);
        uVar11 = uVar11 + 1;
      } while (bVar13);
    }
    if (0.0 < (float)local_134[0x1031]) {
      local_154 = (float *)0xbd2f16;
      fVar14 = (float10)FUN_00a93060();
      fVar18 = (float)local_134[0x1031];
      local_134[0x1031] = (int)(float)((float10)fVar18 - fVar14);
      if ((float10)fVar18 - fVar14 < (float10)0) {
        local_134[0x1031] = (int)(float)(float10)0;
        local_154 = param_2;
        pfStack_158 = (float *)0xbd2f40;
        uVar9 = StateMachineNode::vf10();
        return uVar9;
      }
    }
    local_154 = param_2;
    pfStack_158 = (float *)0xbd2f56;
    uVar9 = StateMachineNode::vf10();
    return uVar9;
  }
  local_154 = (float *)0x64;
  pfStack_158 = (float *)0xb;
  FUN_00d82510();
  return 1;
}

// 00BD2F70  ZangekiStatePl0010::vf20  size=963  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ZangekiStatePl0010::vf20(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar1 = StateMachineNode::vf20(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar4 + 0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar5);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
  }
  *(undefined4 *)(uVar4 + 0xd0) = 0;
  FUN_00b7aa80();
  FUN_00a95fb0(0x3f800000);
  FUN_00e25500(0);
  FUN_00a8c9b0(0,0x5f,0x41200000,0);
  iVar1 = *(int *)(uVar4 + 0x318);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar1 = *(int *)(uVar4 + 0x31c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  FUN_00a7c950();
  iVar1 = *(int *)(uVar4 + 0x170);
  *(undefined4 *)(uVar4 + 0x408) = 0xffffffff;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar1 = *(int *)(uVar4 + 0x174);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar1 = *(int *)(uVar4 + 0x178);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar1 = *(int *)(uVar4 + 0x17c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar1 = *(int *)(uVar4 + 0x318);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar1 = *(int *)(uVar4 + 0x31c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  if (*(undefined4 **)(uVar4 + 0x170) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(uVar4 + 0x170))(1);
  }
  if (*(undefined4 **)(uVar4 + 0x174) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(uVar4 + 0x174))(1);
  }
  if (*(undefined4 **)(uVar4 + 0x178) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(uVar4 + 0x178))(1);
  }
  if (*(undefined4 **)(uVar4 + 0x17c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(uVar4 + 0x17c))(1);
  }
  if (*(undefined4 **)(uVar4 + 0x318) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(uVar4 + 0x318))(1);
  }
  if (*(undefined4 **)(uVar4 + 0x31c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(uVar4 + 0x31c))(1);
  }
  *(undefined4 *)(uVar4 + 0x170) = 0;
  *(undefined4 *)(uVar4 + 0x174) = 0;
  *(undefined4 *)(uVar4 + 0x178) = 0;
  *(undefined4 *)(uVar4 + 0x17c) = 0;
  *(undefined4 *)(uVar4 + 0x318) = 0;
  *(undefined4 *)(uVar4 + 0x31c) = 0;
  piVar3[0x43d] = 1;
  FUN_00d89e60(0x22);
  FUN_00e5e050("core_se_btl_zangeki_out",0);
  _DAT_01bea9a0 = 0;
  FUN_00b8a1d0();
  (**(code **)(*piVar3 + 0x1ec))();
  *(undefined4 *)(uVar4 + 0x520) = 0;
  FUN_00b92d70(param_1);
  if (((byte)DAT_01bea090 & 0x20) == 0) {
    iVar1 = FUN_00932720();
    iVar1 = iVar1 >> 8;
    if ((((iVar1 == 10) || (iVar1 == 0xe)) || ((DAT_01b75898 == 0 && (3 < iVar1 - 4U)))) &&
       ((DAT_01bea094 & 0x800) == 0)) goto LAB_00bd31ee;
  }
  iVar1 = FUN_00bc3230(0);
  if (iVar1 == 0) {
    FUN_00e5e1b0("bgm_Ripper_Exit3");
  }
LAB_00bd31ee:
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  (**(code **)(*(int *)(uVar2 + 400) + 8))(0x41200000,0,0);
  *(undefined4 *)(uVar4 + 0x5cc) = 0xbf800000;
  FUN_0085def0();
  piVar3[0x4a6] = 0;
  piVar3[0x4a5] = 0;
  piVar3[0x4a4] = 0;
  piVar3[0x4ab] = 0;
  piVar3[0x4ac] = 0;
  piVar3[0x4aa] = 0;
  FUN_00a83990();
  FUN_00a83990();
  FUN_00a83990();
  *(undefined4 *)(uVar4 + 0x528) = 0;
  *(undefined4 *)(uVar4 + 0x52c) = 0;
  *(undefined4 *)(uVar4 + 0x530) = 0;
  piVar3[0x2ee] = 0;
  piVar3[0x2ef] = 2;
  FUN_00d89e60(0x15);
  FUN_00c2ddc0();
  DAT_01dc08bc = 0;
  FUN_00a7c950();
  piVar3[0x102f] = 0;
  piVar3[0xf89] = 0;
  piVar3[0xf8c] = 0;
  piVar3[0xf8d] = 0;
  piVar3[0xf8e] = 0;
  piVar3[0xf8f] = 0x3f800000;
  piVar3[0xf90] = 0;
  piVar3[0xf94] = 0;
  piVar3[0xf95] = 0;
  piVar3[0xf96] = 0;
  piVar3[0xf97] = 0x3f800000;
  *(undefined4 *)(uVar4 + 0x5d8) = 0;
  return 1;
}

// 00BE5120  ZangekiStatePl0010::vf0C  size=341  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar8 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar4 = FUN_00dd6d80(puVar8);
      uVar6 = -(uint)(iVar4 != 0) & (uint)param_2;
    }
    piVar5 = *(int **)(uVar6 + 0xc);
    if (piVar5 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
      iVar4 = FUN_00dd6d80(puVar8);
      uVar7 = -(uint)(iVar4 != 0) & (uint)piVar5;
    }
    FUN_00bd7640(param_2);
    *(undefined4 *)(uVar6 + 0x504) = 0;
    fVar1 = *(float *)(uVar7 + 0x3bd4) * 0.001;
    fVar2 = *(float *)(uVar7 + 0x3bd8) * 0.001;
    if (0.1 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
      *(undefined4 *)(uVar6 + 0x504) = 1;
    }
    uVar3 = _DAT_018a96e8;
    *(undefined4 *)(param_1 + 0x48) = _DAT_018a96e8;
    *(undefined4 *)(uVar6 + 0x504) = 1;
    *(undefined4 *)(uVar6 + 0x508) = uVar3;
    *(undefined4 *)(uVar6 + 0x3f4) = 1;
    *(undefined4 *)(uVar6 + 0x564) = 0;
    *(undefined4 *)(uVar6 + 0x570) = 0;
    *(undefined4 *)(uVar7 + 0x890) = 0;
    *(undefined4 *)(uVar7 + 0x894) = 0;
    *(undefined4 *)(uVar7 + 0x898) = 0;
    *(undefined4 *)(uVar7 + 0x89c) = uStack_14;
    if (*(int *)(uVar6 + 0x528) != 0) {
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_00a7c8a0();
        if (piVar5 != (int *)0x0) {
          puVar8 = &DAT_01b35260;
          (**(code **)(*piVar5 + 4))(&DAT_01b35260);
          iVar4 = FUN_00dd6d80(puVar8);
          if (iVar4 != 0) {
            FUN_005ca1a0(0);
          }
        }
      }
    }
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BF1210  ZangekiStatePl0010::vf08  size=2389  [class]
undefined4 ZangekiStatePl0010::vf08(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int **ppiVar6;
  undefined4 ***pppuStack_8c;
  undefined4 ***pppuStack_88;
  undefined4 ***pppuStack_84;
  undefined1 **ppuStack_80;
  char **ppcStack_7c;
  undefined1 **ppuStack_78;
  undefined4 **ppuStack_74;
  int **ppiStack_70;
  int **ppiStack_6c;
  int **ppiStack_68;
  undefined4 **ppuStack_64;
  undefined1 *puStack_60;
  char *pcStack_5c;
  undefined1 *puStack_58;
  undefined4 *puStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *local_48;
  undefined4 *local_44;
  undefined4 uStack_34;
  int local_30 [3];
  int *local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_44 = param_1;
  local_48 = (int *)0xbf1229;
  iVar1 = StateMachineNode::vf08();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    local_44 = (undefined4 *)&DAT_01be9ef4;
    local_48 = (int *)0xbf124d;
    (**(code **)*param_1)();
    local_48 = (int *)0xbf1254;
    iVar1 = FUN_00dd6d80();
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  local_24 = *(int **)(uVar4 + 0xc);
  if (local_24 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    local_44 = (undefined4 *)&DAT_01be9db8;
    local_48 = (int *)0xbf1277;
    (**(code **)(*local_24 + 4))();
    local_48 = (int *)0xbf127e;
    iVar1 = FUN_00dd6d80();
    piVar5 = (int *)(-(uint)(iVar1 != 0) & (uint)local_24);
  }
  local_44 = &DAT_01b7bd48;
  local_48 = (int *)0xb0;
  piStack_4c = (int *)0xbf1297;
  puVar2 = (undefined4 *)FUN_00dd3500();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 0x14;
    *puVar2 = lib::StaticArray<Hw::cVec2,20>::vftable;
  }
  local_44 = &DAT_01b7bd48;
  local_48 = (int *)0xb0;
  *(undefined4 **)(uVar4 + 0x170) = puVar2;
  piStack_4c = (int *)0xbf12cd;
  puVar2 = (undefined4 *)FUN_00dd3500();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 0x14;
    *puVar2 = lib::StaticArray<Hw::cVec2,20>::vftable;
  }
  local_44 = &DAT_01b7bd48;
  local_48 = (int *)0x60;
  *(undefined4 **)(uVar4 + 0x174) = puVar2;
  piStack_4c = (int *)0xbf1300;
  puVar2 = (undefined4 *)FUN_00dd3500();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 5;
    *puVar2 = lib::StaticArray<Hw::cVec4,5>::vftable;
  }
  local_44 = &DAT_01b7bd48;
  local_48 = (int *)0xb0;
  *(undefined4 **)(uVar4 + 0x178) = puVar2;
  piStack_4c = (int *)0xbf1336;
  puVar2 = (undefined4 *)FUN_00dd3500();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 10;
    *puVar2 = lib::StaticArray<Hw::cVec4,10>::vftable;
  }
  *(undefined4 **)(uVar4 + 0x17c) = puVar2;
  *(undefined4 *)(uVar4 + 0x5cc) = 0xbf800000;
  *(undefined4 *)(uVar4 + 0x300) = 0;
  if (((float)piVar5[0xd07] <= 0.0) || (piVar5[0xd14] == 0)) {
    if ((float)piVar5[0xd07] <= 0.0) {
      local_44 = (undefined4 *)0xbf13e3;
      iVar1 = FUN_0085c0e0();
      if (iVar1 != 2) {
        local_44 = (undefined4 *)0xbf13ef;
        iVar1 = FUN_0085c0e0();
        *(undefined4 *)(uVar4 + 0x52c) = 0;
        *(undefined4 *)(uVar4 + 0x530) = 0;
        if (iVar1 == 1) {
          *(undefined4 *)(uVar4 + 0x528) = 1;
        }
        else {
          *(undefined4 *)(uVar4 + 0x528) = 0;
        }
        goto LAB_00bf1427;
      }
    }
    *(undefined4 *)(uVar4 + 0x528) = 1;
    *(undefined4 *)(uVar4 + 0x52c) = 0;
    *(undefined4 *)(uVar4 + 0x530) = 1;
  }
  else {
    *(undefined4 *)(uVar4 + 0x528) = 1;
    *(undefined4 *)(uVar4 + 0x52c) = 1;
    *(undefined4 *)(uVar4 + 0x530) = 0;
    if ((DAT_01bea090 & 0x80000000) == 0) {
      if (piVar5[0xe0a] != 0) {
        *(undefined4 *)(piVar5[0xe08] + 4) = *(undefined4 *)(piVar5[0xe08] + 0xc);
      }
    }
    else {
      piVar5[0xe0c] = piVar5[0xe0d];
    }
  }
LAB_00bf1427:
  local_30[0] = piVar5[0x1032];
  if (((((local_30[0] != 0xc) && (local_30[0] != 0xe)) && (local_30[0] != 0x12)) &&
      ((local_30[0] != 0x13 && (local_30[0] != 4)))) && (local_30[0] != 8)) {
    *(undefined4 *)(uVar4 + 0x5c4) = 0;
    local_24 = (int *)piVar5[0x13c];
    local_44 = (undefined4 *)(*(float *)(uVar4 + 0x574) * 1.2 * 30.0);
    local_48 = (int *)0x3f490fdb;
    piStack_4c = (int *)0xbf14a5;
    iVar1 = (**(code **)(*piVar5 + 0x84))();
    piStack_4c = *(int **)(iVar1 + 4);
    piStack_50 = local_24;
    puStack_54 = (undefined4 *)(uVar4 + 0x5b8);
    puStack_58 = (undefined1 *)0xbf14c2;
    FUN_00c58e90();
    if (*(int *)(uVar4 + 0x5c4) < 1) {
      local_44 = (undefined4 *)0xbf14d5;
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        local_44 = (undefined4 *)0xbf14e0;
        iVar1 = FUN_00416db0();
        if (iVar1 == 0) {
          if (*(int *)(uVar4 + 0x528) != 0) {
            local_30[0] = 2;
          }
        }
        else {
          local_30[0] = 2;
        }
        goto LAB_00bf1508;
      }
    }
    local_30[0] = 0x14;
  }
LAB_00bf1508:
  local_44 = (undefined4 *)0xbf1513;
  iVar3 = FUN_00a81330();
  iVar1 = 0xc;
  if (iVar3 == 0) {
    iVar1 = local_30[0];
  }
  switch(iVar1) {
  default:
    local_48 = (int *)0x41;
    break;
  case 2:
  case 5:
    local_48 = (int *)0x30;
    break;
  case 8:
    local_48 = (int *)0x34;
    break;
  case 0xc:
    local_48 = (int *)0x42;
    break;
  case 0x14:
    local_48 = (int *)0x3e;
  }
  local_44 = param_1;
  piStack_4c = (int *)0xbf1563;
  piStack_4c = (int *)(*(code *)**(undefined4 **)param_1[1])();
  piStack_50 = (int *)0xbf156d;
  FUN_00d82bf0();
  *(undefined4 *)(uVar4 + 0x2f4) = 0;
  *(undefined4 *)(uVar4 + 0x2f8) = 0;
  *(undefined4 *)(uVar4 + 0x304) = 0;
  piVar5[0x1016] = 0;
  *(undefined4 *)(uVar4 + 0x3f8) = 0x42b40000;
  *(undefined4 *)(uVar4 + 0x400) = 0x42b40000;
  *(undefined4 *)(uVar4 + 0x3fc) = 1;
  local_48 = (int *)0xbf15ac;
  iVar1 = FUN_008e2740();
  if ((iVar1 == 0) &&
     ((((*(int *)(uVar4 + 0x530) != 0 || (*(int *)(uVar4 + 0x52c) != 0)) ||
       (*(int *)(uVar4 + 0x528) != 0)) && (*(int *)(uVar4 + 0x330) != 8)))) {
    local_48 = (int *)0xbf15dd;
    (**(code **)(*piVar5 + 0x318))();
    local_48 = (int *)0x0;
    piStack_4c = (int *)0xbf15e9;
    FUN_008e0af0();
  }
  local_48 = (int *)0x8;
  piStack_4c = (int *)0x3f4ccccd;
  *(undefined4 *)(uVar4 + 0x3c4) = 0;
  *(undefined4 *)(uVar4 + 0x188) = 0;
  piStack_50 = (int *)0x3f800000;
  piVar5[0xe4b] = 3;
  puStack_54 = (undefined4 *)0x0;
  puStack_58 = (undefined1 *)0xbf1619;
  FUN_00dda360();
  puStack_58 = (undefined1 *)0x0;
  pcStack_5c = "core_se_btl_zangeki_in";
  puStack_60 = (undefined1 *)0xbf1624;
  FUN_00e5e050();
  puStack_60 = (undefined1 *)0x24;
  ppuStack_64 = (undefined4 **)0xbf162b;
  FUN_00d89e60();
  ppuStack_64 = (undefined4 **)&DAT_01b7bd48;
  ppiStack_68 = (int **)0x60;
  *(undefined4 *)(uVar4 + 0x308) = 0;
  *(undefined4 *)(uVar4 + 0x30c) = 0;
  *(undefined4 *)(uVar4 + 0x310) = 0;
  *(undefined4 *)(uVar4 + 0x314) = 0;
  ppiStack_6c = (int **)0xbf164f;
  puVar2 = (undefined4 *)FUN_00dd3500();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 0x14;
    *puVar2 = lib::StaticArray<float,20>::vftable;
  }
  local_48 = &DAT_01b7bd48;
  piStack_4c = (int *)0x60;
  *(undefined4 **)(uVar4 + 0x318) = puVar2;
  piStack_50 = (int *)0xbf1682;
  puVar2 = (undefined4 *)FUN_00dd3500();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 0x14;
    *puVar2 = lib::StaticArray<float,20>::vftable;
  }
  *(undefined4 **)(uVar4 + 0x31c) = puVar2;
  if (*(int *)(*(int *)(uVar4 + 0x318) + 4) != 0) {
    *(undefined4 *)(*(int *)(uVar4 + 0x318) + 8) = 0;
  }
  local_30[2] = 0x42b40000;
  local_48 = local_30 + 2;
  piStack_4c = (int *)0xbf16d3;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  local_30[1] = 0xc2870000;
  piStack_4c = local_30 + 1;
  piStack_50 = (int *)0xbf16ef;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  local_30[0] = 0x42870000;
  piStack_50 = local_30;
  puStack_54 = (undefined4 *)0xbf170b;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  uStack_34 = 0xc2b40000;
  puStack_54 = &uStack_34;
  puStack_58 = (undefined1 *)0xbf1727;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_58 = &stack0xffffffc8;
  pcStack_5c = (char *)0xbf1743;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  pcStack_5c = &stack0xffffffc4;
  puStack_60 = (undefined1 *)0xbf175f;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_60 = &stack0xffffffc0;
  ppuStack_64 = (undefined4 **)0xbf177b;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  local_44 = (undefined4 *)0xc2ab0000;
  ppuStack_64 = &local_44;
  ppiStack_68 = (int **)0xbf1797;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  local_48 = (int *)0x42ee8000;
  ppiStack_68 = &local_48;
  ppiStack_6c = (int **)0xbf17b3;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  piStack_4c = (int *)0xc2ca8000;
  ppiStack_6c = &piStack_4c;
  ppiStack_70 = (int **)0xbf17cf;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  piStack_50 = (int *)0x424f0000;
  ppiStack_70 = &piStack_50;
  ppuStack_74 = (undefined4 **)0xbf17eb;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_54 = (undefined4 *)0xc2d80000;
  ppuStack_74 = &puStack_54;
  ppuStack_78 = (undefined1 **)0xbf1807;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_58 = (undefined1 *)0x42cf0000;
  ppuStack_78 = &puStack_58;
  ppcStack_7c = (char **)0xbf1823;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  pcStack_5c = (char *)0xc2c18000;
  ppcStack_7c = &pcStack_5c;
  ppuStack_80 = (undefined1 **)0xbf183f;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  if (*(int *)(*(int *)(uVar4 + 0x31c) + 4) != 0) {
    *(undefined4 *)(*(int *)(uVar4 + 0x31c) + 8) = 0;
  }
  puStack_60 = (undefined1 *)0x431e0000;
  ppuStack_80 = &puStack_60;
  pppuStack_84 = (undefined4 ***)0xbf1869;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppuStack_64 = (undefined4 **)0x40accccd;
  pppuStack_84 = &ppuStack_64;
  pppuStack_88 = (undefined4 ***)0xbf1885;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppiStack_68 = (int **)0xc3196667;
  pppuStack_88 = &ppiStack_68;
  pppuStack_8c = (undefined4 ***)0xbf18a1;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppiStack_6c = (int **)0xc1100000;
  pppuStack_8c = &ppiStack_6c;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppiStack_70 = (int **)0x431a8ccd;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&ppiStack_70);
  ppuStack_74 = (undefined4 **)0xc1580001;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppuStack_78 = (undefined1 **)0xc30de666;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&ppuStack_78);
  ppcStack_7c = (char **)0x41633334;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&ppcStack_7c);
  ppuStack_80 = (undefined1 **)0x43196667;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&ppuStack_80);
  pppuStack_84 = (undefined4 ***)0xc0900000;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&pppuStack_84);
  pppuStack_88 = (undefined4 ***)0xc3196667;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&pppuStack_88);
  pppuStack_8c = (undefined4 ***)0x3f800000;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&pppuStack_8c);
  piVar5[0x4a5] = 0;
  piVar5[0x4a6] = 0;
  piVar5[0x4a4] = 0;
  piVar5[0x4ab] = 0;
  piVar5[0x4ac] = 0;
  piVar5[0x4aa] = 0;
  FUN_00bd9220(param_1);
  *(undefined4 *)(uVar4 + 0x510) = 0;
  *(undefined4 *)(uVar4 + 0x514) = 0;
  *(undefined4 *)(uVar4 + 0x518) = 0;
  *(undefined4 *)(uVar4 + 0x51c) = 0x3f800000;
  *(undefined4 *)(uVar4 + 0x3ec) = 0;
  piVar5[0x2dd] = 0;
  *(undefined4 *)(uVar4 + 0x56c) = 0;
  *(undefined4 *)(uVar4 + 0x358) = 0;
  DAT_01d61924 = 0;
  DAT_01d6192c = 0;
  DAT_01dc08d8 = 1;
  FUN_00da9230(1);
  ppiVar6 = &local_24;
  uStack_20 = 2;
  uStack_1c = 3;
  local_24 = (int *)0x1;
  iVar1 = 3;
  do {
    FUN_00a82610(piVar5[0x13c],*ppiVar6,0xffffffff);
    pppuStack_8c = (undefined4 ***)0x0;
    pppuStack_88 = (undefined4 ***)0x0;
    pppuStack_84 = (undefined4 ***)0x0;
    FUN_00a832d0(&pppuStack_8c,0,0x3e32b8c2,0,0xbe32b8c2);
    ppiVar6 = ppiVar6 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined1 *)(piVar5 + 0xd18) = 0;
  FUN_009403a0();
  if (*(int *)(uVar4 + 0x38c) != 0) {
    FUN_005edc60(0x40400000);
  }
  if (*(int *)(uVar4 + 0x390) != 0) {
    FUN_005edc60(0x40400000);
  }
  piVar5[0x1031] = piVar5[0x1030];
  uStack_14 = 0;
  uStack_18 = 0;
  piVar5[0x102f] = 0;
  *(undefined4 *)(uVar4 + 0x5d8) = 0;
  *(undefined4 *)(uVar4 + 0x5d4) = 0;
  *(undefined4 *)(uVar4 + 0x370) = 0;
  *(undefined4 *)(uVar4 + 0x5dc) = 0;
  uVar4 = DAT_01bea010 & 0x80000003;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar4 == 2) && ((DAT_01bea094 & 0x800) == 0)) {
    FUN_00bd9590(0);
  }
  return 1;
}

