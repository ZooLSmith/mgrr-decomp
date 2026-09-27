// src/player/pl1400/state/ZangekiChanceStatePl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085F270..0089CF60, 10 functions

#include "mgrr.h"
#include "ZangekiChanceStatePl1400.h"

// 0085F270  ZangekiChanceStatePl1400::vf14  size=5  [class]
undefined4 __thiscall ZangekiChanceStatePl1400::vf14(int param_1,undefined4 param_2)

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

// 0085F280  ZangekiChanceStatePl1400::vf18  size=5  [class]
undefined4 __thiscall ZangekiChanceStatePl1400::vf18(int param_1,undefined4 param_2)

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

// 0085F290  ZangekiChanceStatePl1400::vf24  size=19  [class]
bool ZangekiChanceStatePl1400::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 0085F2D0  ZangekiChanceStatePl1400::vf00  size=6  [class]
undefined * ZangekiChanceStatePl1400::vf00(void)

{
  return &DAT_01b35b30;
}

// 00867A20  ZangekiChanceStatePl1400::vf04  size=31  [class]
undefined4 * __thiscall ZangekiChanceStatePl1400::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00887E10  ZangekiChanceStatePl1400::vf08  size=325  [class]
undefined4 __thiscall ZangekiChanceStatePl1400::vf08(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined *puVar8;
  
  iVar2 = StateMachineNode::vf08(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar5 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar8 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(uVar3 + 0x40c8) = 2;
  *(undefined4 *)(uVar3 + 0x4058) = 0;
  if ((*(int *)(uVar5 + 0x52c) == 0) && (*(int *)(uVar5 + 0x530) == 0)) {
    if (param_2 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar8 = &DAT_01b35b78;
      (**(code **)*param_2)(&DAT_01b35b78);
      iVar2 = FUN_00dd6d80(puVar8);
      uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    if (*(int *)(uVar5 + 0x4c4) == 0) goto LAB_00887f35;
    FUN_00869630(param_2);
    *(undefined4 *)(uVar5 + 0x4c4) = 0;
    pcVar6 = "bgm_Zangeki_Enter";
  }
  else {
    if (param_2 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar8 = &DAT_01b35b78;
      (**(code **)*param_2)(&DAT_01b35b78);
      iVar2 = FUN_00dd6d80(puVar8);
      uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    if (*(int *)(uVar5 + 0x4c4) == 1) goto LAB_00887f35;
    FUN_00869630(param_2);
    *(undefined4 *)(uVar5 + 0x4c4) = 1;
    pcVar6 = "bgm_Zangeki_SP_Enter";
  }
  FUN_00e5e1b0(pcVar6);
LAB_00887f35:
  uVar7 = 0x13;
  uVar4 = (*(code *)**(undefined4 **)param_2[1])(0x13,param_2);
  FUN_00d82bf0(uVar4,uVar7);
  return 1;
}

// 00887F60  ZangekiChanceStatePl1400::SafeCheck  size=74  [class]
void __thiscall ZangekiChanceStatePl1400::SafeCheck(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00877160(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
    FUN_00877430(param_2);
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00887FB0  ZangekiChanceStatePl1400::vf20  size=205  [class]
undefined4 __thiscall ZangekiChanceStatePl1400::vf20(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 local_14;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar5 = &DAT_01b35b78;
      (**(code **)*param_2)(&DAT_01b35b78);
      iVar2 = FUN_00dd6d80(puVar5);
      uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar4 + 0x5e0);
    if (piVar1 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01b35b20;
      (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
      iVar2 = FUN_00dd6d80(puVar5);
      uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    *(undefined4 *)(uVar3 + 0x341c) = 0;
    *(undefined4 *)(uVar3 + 0x40c8) = 0;
    *(undefined4 *)(uVar3 + 0x4058) = 0;
    if (*(int *)(uVar4 + 0x188) != 0) {
      *(undefined4 *)(uVar3 + 0x890) = 0;
      *(undefined4 *)(uVar3 + 0x894) = 0;
      *(undefined4 *)(uVar3 + 0x898) = 0;
      *(undefined4 *)(uVar3 + 0x89c) = local_14;
    }
    FUN_00877940(param_2,param_1);
    return 1;
  }
  return 0;
}

// 00888080  FUN_00888080  size=1703  [callgraph]
void FUN_00888080(undefined4 *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  undefined *puVar11;
  byte bStack_2d1;
  int *piStack_2d0;
  uint local_2cc;
  float local_2c8;
  uint local_2c4;
  float fStack_2c0;
  float fStack_2bc;
  int *local_2b8;
  int iStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  int *piStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined1 auStack_274 [36];
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1e8;
  float fStack_1e4;
  undefined4 uStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 auStack_1c4 [5];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined1 auStack_16c [20];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [144];
  undefined1 auStack_a0 [156];
  
  if (param_1 == (undefined4 *)0x0) {
    local_2cc = 0;
  }
  else {
    puVar11 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar5 = FUN_00dd6d80(puVar11);
    local_2cc = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar7 = *(int **)(local_2cc + 0x5e0);
  if (piVar7 == (int *)0x0) {
    local_2c4 = 0;
  }
  else {
    puVar11 = &DAT_01b35b20;
    (**(code **)(*piVar7 + 4))(&DAT_01b35b20);
    iVar5 = FUN_00dd6d80(puVar11);
    local_2c4 = -(uint)(iVar5 != 0) & (uint)piVar7;
  }
  local_2c8 = 0.0;
  iVar5 = FUN_00a81330();
  if ((iVar5 != 0) && (local_2b8 = (int *)FUN_00a7c8a0(), local_2b8 != (int *)0x0)) {
    puVar11 = &DAT_01b35260;
    (**(code **)(*local_2b8 + 4))(&DAT_01b35260);
    iVar5 = FUN_00dd6d80(puVar11);
    if (iVar5 != 0) {
      iVar5 = FUN_00a7ca20();
      piStack_2d0 = *(int **)(iVar5 + 0x14);
      piVar7 = *(int **)(iVar5 + 0x18);
      piStack_294 = piVar7;
      if (piStack_2d0 != piVar7) {
        do {
          iVar5 = FUN_009f93b0(*(undefined4 *)(*piStack_2d0 + 0x24));
          if (((iVar5 != 0) && (iStack_2b4 = FUN_00a7c8a0(), iStack_2b4 != 0)) &&
             (fVar2 = *(float *)(local_2c4 + 0x40) - *(float *)(iStack_2b4 + 0x40),
             fVar4 = *(float *)(local_2c4 + 0x44) - *(float *)(iStack_2b4 + 0x44),
             fVar3 = *(float *)(local_2c4 + 0x48) - *(float *)(iStack_2b4 + 0x48),
             SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) <=
             *(float *)(local_2cc + 0x574) * 5.0)) {
            bStack_2d1 = 0;
            do {
              iVar5 = FUN_00c5f290(*piStack_2d0,(bStack_2d1 == 0) * '\x02' + '\x02');
              puVar8 = *(undefined4 **)(iVar5 + 4);
              puVar1 = puVar8 + *(int *)(iVar5 + 0xc);
              piVar7 = piStack_294;
              for (; piStack_294 = piVar7, puVar8 != puVar1; puVar8 = puVar8 + 1) {
                iVar5 = FUN_00c52930(*puVar8);
                if (iVar5 != 0) {
                  iVar5 = FUN_00c518c0(auStack_a0,*puVar8);
                  iVar5 = FUN_00a12210(*(undefined4 *)(iVar5 + 8));
                  if (iVar5 != 0) {
                    FUN_00c518c0(auStack_130,*puVar8);
                    iVar6 = FUN_00c518c0(auStack_130,*puVar8);
                    uStack_210 = *(undefined4 *)(iVar6 + 0x20);
                    uStack_20c = *(undefined4 *)(iVar6 + 0x24);
                    uStack_208 = *(undefined4 *)(iVar6 + 0x28);
                    FID_conflict__memcpy(&fStack_250,(void *)(iVar5 + 0x10),0x40);
                    fStack_200 = fStack_220;
                    fStack_1fc = fStack_21c;
                    fStack_1f8 = fStack_218;
                    fStack_1e8 = SQRT(fStack_248 * fStack_248 +
                                      fStack_250 * fStack_250 + fStack_24c * fStack_24c);
                    fStack_1e4 = SQRT(fStack_238 * fStack_238 +
                                      fStack_240 * fStack_240 + fStack_23c * fStack_23c);
                    fVar2 = SQRT(fStack_228 * fStack_228 +
                                 fStack_230 * fStack_230 + fStack_22c * fStack_22c);
                    fStack_2bc = fStack_238 / fVar2;
                    fStack_2c0 = fStack_228 / fVar2;
                    fVar9 = (float10)FUN_00ddbaa0(-(fStack_248 / fVar2));
                    fVar10 = (float10)fpatan((float10)fStack_2bc,(float10)fStack_2c0);
                    fStack_2b0 = (float)fVar10;
                    fStack_2ac = (float)fVar9;
                    fVar9 = (float10)fpatan((float10)fStack_24c / (float10)fStack_1e4,
                                            (float10)fStack_250 / (float10)fStack_1e8);
                    fStack_2a8 = (float)fVar9;
                    uStack_1b0 = 0;
                    uStack_1ac = 0;
                    uStack_1a8 = 0x3f800000;
                    FUN_00ddc1d0(&uStack_290,&fStack_2b0,5);
                    D3DXVec3TransformNormal(auStack_150,&uStack_1b0,&uStack_290);
                    uStack_1cc = 0x3f800000;
                    uStack_1c8 = 0;
                    auStack_1c4[0] = 0;
                    FUN_00ddc1d0(&uStack_29c,&fStack_2bc,5);
                    D3DXVec3TransformNormal(auStack_16c,&uStack_1cc,&uStack_29c);
                    fStack_1e8 = 0.0;
                    fStack_1e4 = 1.0;
                    uStack_1e0 = 0;
                    FUN_00ddc1d0(&fStack_2a8,&local_2c8,5);
                    D3DXVec3TransformNormal(auStack_158,&fStack_1e8,&fStack_2a8);
                    uStack_27c = 0;
                    uStack_280 = 0;
                    uStack_284 = 0;
                    uStack_288 = 0;
                    uStack_290 = 0;
                    piStack_294 = (int *)0x0;
                    uStack_298 = 0;
                    uStack_29c = 0;
                    uStack_2a4 = 0;
                    fStack_2a8 = 0.0;
                    fStack_2ac = 0.0;
                    fStack_2b0 = 0.0;
                    uStack_278 = 0x3f800000;
                    uStack_28c = 0x3f800000;
                    uStack_2a0 = 0x3f800000;
                    iStack_2b4 = 0x3f800000;
                    if (fStack_22c != 0.0) {
                      D3DXMatrixRotationZ(auStack_1c4,fStack_22c);
                      D3DXMatrixMultiply(&fStack_2bc,&uStack_1cc,&fStack_2bc);
                    }
                    if (fStack_230 != 0.0) {
                      D3DXMatrixRotationY(auStack_1c4,fStack_230);
                      D3DXMatrixMultiply(&fStack_2bc,&uStack_1cc,&fStack_2bc);
                    }
                    if (fStack_234 != 0.0) {
                      D3DXMatrixRotationX(auStack_1c4,fStack_234);
                      D3DXMatrixMultiply(&fStack_2bc,&uStack_1cc,&fStack_2bc);
                    }
                    D3DXMatrixMultiply(auStack_274,&iStack_2b4,auStack_274);
                    fStack_1dc = SQRT(fStack_248 * fStack_248 +
                                      fStack_250 * fStack_250 + fStack_24c * fStack_24c);
                    fStack_1d8 = SQRT(fStack_238 * fStack_238 +
                                      fStack_240 * fStack_240 + fStack_23c * fStack_23c);
                    fVar2 = SQRT(fStack_228 * fStack_228 +
                                 fStack_230 * fStack_230 + fStack_22c * fStack_22c);
                    fStack_2c0 = fStack_238 / fVar2;
                    fStack_2bc = fStack_228 / fVar2;
                    fVar9 = (float10)FUN_00ddbaa0(-(fStack_248 / fVar2));
                    fVar10 = (float10)fpatan((float10)fStack_2c0,(float10)fStack_2bc);
                    fStack_2b0 = (float)fVar10;
                    fStack_2ac = (float)fVar9;
                    fVar9 = (float10)fpatan((float10)fStack_24c / (float10)fStack_1d8,
                                            (float10)fStack_250 / (float10)fStack_1dc);
                    fStack_2a8 = (float)fVar9;
                    fVar2 = *(float *)(local_2c4 + 0x40) - fStack_200;
                    fVar4 = *(float *)(local_2c4 + 0x44) - fStack_1fc;
                    fVar3 = *(float *)(local_2c4 + 0x48) - fStack_1f8;
                    fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
                    if (local_2c8 < fVar2) {
                      local_2c8 = fVar2;
                    }
                  }
                }
                piVar7 = piStack_294;
              }
              bStack_2d1 = bStack_2d1 + 1;
            } while (bStack_2d1 < 2);
          }
          piStack_2d0 = (int *)piStack_2d0[2];
        } while (piStack_2d0 != piVar7);
        if (0.0 < local_2c8) {
          FUN_005ca330(local_2c8 / *(float *)(local_2cc + 0x574));
          return;
        }
      }
      FUN_005ca330(0x3f800000);
    }
  }
  return;
}

// 0089CF60  ZangekiChanceStatePl1400::qteSafeCheck  size=520  [class]
void __thiscall ZangekiChanceStatePl1400::qteSafeCheck(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  undefined *puVar8;
  
  puVar3 = param_2;
  uVar6 = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar4 = FUN_00dd6d80(puVar8);
    param_2 = (undefined4 *)(-(uint)(iVar4 != 0) & (uint)param_2);
  }
  piVar1 = *(int **)((int)param_2 + 0x5e0);
  if (piVar1 != (int *)0x0) {
    puVar8 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  fVar7 = (float10)FUN_00bda020();
  if ((float10)0 == fVar7) {
    if (puVar3 != (undefined4 *)0x0) {
      puVar8 = &DAT_01b35b78;
      (**(code **)*puVar3)(&DAT_01b35b78);
      FUN_00dd6d80(puVar8);
    }
    FUN_00b83e50();
    FUN_00d82510(1,100);
  }
  if (*(float *)(uVar6 + 0x341c) <= 0.0) {
    if (puVar3 != (undefined4 *)0x0) {
      puVar8 = &DAT_01b35b78;
      (**(code **)*puVar3)(&DAT_01b35b78);
      FUN_00dd6d80(puVar8);
    }
    FUN_00b83e50();
    FUN_00d82510(1,100);
  }
  FUN_00c5bbb0(2);
  FUN_00c5bbb0(0x10);
  FUN_00888080(puVar3);
  FUN_0089c390(puVar3,param_1,100,0.0 < *(float *)(param_1 + 0x30),0);
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*puVar3)(&DAT_01b35b78);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar4 != 0) & (uint)puVar3;
  }
  if (*(int *)(uVar5 + 0x2f4) == 0) {
    FUN_00876030(puVar3);
  }
  FUN_008774a0(puVar3);
  FUN_00876fd0(puVar3);
  FUN_008770b0(puVar3,0x3f800000);
  FUN_0088fce0(puVar3,0x420c0000,0xc2200000,0,0);
  if ((*(float *)(param_1 + 0x30) == 0.0) && ((*(byte *)(uVar6 + 0xcfc) & 0x20) != 0)) {
    *(undefined4 *)(param_1 + 0x30) = 0x41a00000;
  }
  fVar2 = *(float *)(param_1 + 0x30) - *(float *)(uVar6 + 0x910);
  *(float *)(param_1 + 0x30) = fVar2;
  if (fVar2 < 0.0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)((int)param_2 + 0x624) < *(int *)((int)param_2 + 0x620)) {
    FUN_00d82510(0xc,100);
  }
  StateMachineNode::qteSafeCheck(puVar3);
  return;
}

