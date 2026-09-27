// src/effect/et0006/Et0006.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005CA030..00AB8AE0, 13 functions

#include "mgrr.h"
#include "Et0006.h"

// 005CA030  Et0006::vf40  size=174  [class]
undefined4 __fastcall Et0006::vf40(int *param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  local_8 = 0;
  local_4 = 0;
  local_c = 1;
  iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
          StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
  if (iVar1 == 0) {
    return 0;
  }
  param_1[0x237] = 0x3f800000;
  param_1[0x234] = 0;
  param_1[0x235] = 0;
  param_1[0x236] = 1;
  FUN_00eaa010();
  param_1[0x238] = 0;
  param_1[0x239] = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0x3f800000;
  param_1[0x23f] = 0x3f800000;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  (**(code **)(*param_1 + 0x20))();
  return 1;
}

// 005CA0E0  Et0006::vf44  size=156  [class]
void Et0006::vf44(void)

{
  FUN_00a8ca50(0xef,0x3f800000,0);
  FUN_00a8ca50(0xf0,0x3f800000,0);
  FUN_00a8ca50(0xf1,0x3f800000,0);
  FUN_00a8ca50(0xf9,0x3f800000,0);
  FUN_00a8c820();
  FUN_00eaa6e0(0,0);
  FUN_00eaa950();
  Behavior::vf44();
  return;
}

// 005CA180  Et0006::vf48  size=5  [class]
void __fastcall Et0006::vf48(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 0x64c) = 0;
  if (*(int *)(param_1 + 2000) != 0) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c910();
    }
    fVar1 = (float10)FUN_00e049b0();
    *(float *)(*(int *)(param_1 + 2000) + 8) = (float)(fVar1 * (float10)0.016666668);
  }
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d82df0(*(int *)(param_1 + 2000));
  }
  if (*(int *)(param_1 + 0x7d8) != 0) {
    thunk_FUN_00c73380();
  }
  *(undefined4 *)(param_1 + 0x860) = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined4 *)(param_1 + 0x86c) = 0x3f800000;
  return;
}

// 005CA190  Et0006::thunk_vf50  size=5  [class]
void __fastcall Et0006::thunk_vf50(int param_1)

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

// 005CA1A0  FUN_005ca1a0  size=67  [between]
void __thiscall FUN_005ca1a0(int param_1,int param_2)

{
  if ((param_2 != 2) && (*(int *)(param_1 + 0x8d8) != param_2)) {
    FUN_00eaa6e0(0x3f800000,0);
    *(int *)(param_1 + 0x8d8) = param_2;
    *(undefined4 *)(param_1 + 0x618) = 1;
  }
  return;
}

// 005CA1F0  FUN_005ca1f0  size=42  [between]
void __thiscall FUN_005ca1f0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x8e0) = *param_2;
  *(undefined4 *)(param_1 + 0x8e4) = param_2[1];
  *(undefined4 *)(param_1 + 0x8e8) = param_2[2];
  *(undefined4 *)(param_1 + 0x8ec) = param_2[3];
  return;
}

// 005CA220  FUN_005ca220  size=42  [between]
void __thiscall FUN_005ca220(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x8f0) = *param_2;
  *(undefined4 *)(param_1 + 0x8f4) = param_2[1];
  *(undefined4 *)(param_1 + 0x8f8) = param_2[2];
  *(undefined4 *)(param_1 + 0x8fc) = param_2[3];
  return;
}

// 005CA2A0  FUN_005ca2a0  size=107  [between]
void __thiscall FUN_005ca2a0(int param_1,void *param_2,undefined4 *param_3,undefined4 *param_4)

{
  FID_conflict__memcpy((void *)(param_1 + 0x870),param_2,0x40);
  *(undefined4 *)(param_1 + 0x8b0) = *param_3;
  *(undefined4 *)(param_1 + 0x8b4) = param_3[1];
  *(undefined4 *)(param_1 + 0x8b8) = param_3[2];
  *(undefined4 *)(param_1 + 0x8bc) = param_3[3];
  *(undefined4 *)(param_1 + 0x8c0) = *param_4;
  *(undefined4 *)(param_1 + 0x8c4) = param_4[1];
  *(undefined4 *)(param_1 + 0x8c8) = param_4[2];
  *(undefined4 *)(param_1 + 0x8cc) = param_4[3];
  return;
}

// 005CA330  FUN_005ca330  size=32  [between]
void __thiscall FUN_005ca330(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x95c) = param_2;
  *(undefined4 *)(param_1 + 0x960) = param_2;
  *(undefined4 *)(param_1 + 0x964) = param_2;
  *(uint *)(param_1 + 0x968) = *(uint *)(param_1 + 0x968) | 0x10;
  return;
}

// 005CA350  Et0006::vf4C  size=2427  [class]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Et0006::vf4C(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float *pfStack_2ec;
  float *pfStack_2e8;
  float *pfStack_2e4;
  float *pfStack_2e0;
  float *pfStack_2dc;
  undefined4 uStack_2d8;
  float *pfStack_2d4;
  float *pfStack_2d0;
  float *pfStack_2cc;
  float *pfStack_2c8;
  float *pfStack_2c4;
  float *pfStack_2c0;
  float *pfVar9;
  float fStack_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float fStack_278;
  float fStack_274;
  undefined4 uStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined4 uStack_260;
  float fStack_25c;
  float fStack_258;
  float afStack_254 [10];
  float *pfStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  undefined1 auStack_210 [20];
  undefined1 auStack_1fc [8];
  float afStack_1f4 [3];
  undefined1 auStack_1e8 [4];
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined1 auStack_1d4 [4];
  float local_1d0;
  float local_1cc;
  float local_1c8 [113];
  
  Behavior::vf4C();
  if (0 < param_1[0x235]) {
    param_1[0x235] = param_1[0x235] + -1;
  }
  switch(param_1[0x186]) {
  case 0:
    if (param_1[0x234] == 0) {
      return;
    }
    param_1[0x186] = 1;
    return;
  case 1:
    break;
  case 2:
    goto switchD_005ca386_caseD_2;
  case 3:
    goto switchD_005ca386_caseD_3;
  default:
    goto switchD_005ca386_default;
  }
  switch(param_1[0x236]) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    piVar5 = (int *)FUN_00c13920();
    iVar6 = (**(code **)(*piVar5 + 0x28))();
    if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
      pfStack_2c0 = (float *)0x5ca49e;
      FUN_004039a0();
      FUN_00e020f0();
      FUN_00dffb90();
      FUN_00dffb20();
      FUN_00a8c8b0();
    }
  default:
    goto switchD_005ca3ba_default;
  }
  pfStack_2c0 = (float *)0x5ca406;
  FUN_004039a0();
  FUN_00e020f0();
  FUN_00dffb90();
  FUN_00dffb20();
  FUN_00a8c930();
switchD_005ca3ba_default:
  param_1[0x186] = param_1[0x186] + 1;
switchD_005ca386_caseD_2:
  if (param_1[0x234] != 0) {
    local_2a0 = (float)param_1[0x228];
    pfVar1 = (float *)(param_1 + 0x21c);
    local_29c = (float)param_1[0x229];
    local_298 = (float)param_1[0x22a];
    local_294 = (float)param_1[0x22b];
    local_280 = SQRT((float)param_1[0x21d] * (float)param_1[0x21d] + *pfVar1 * *pfVar1 +
                     (float)param_1[0x21e] * (float)param_1[0x21e]);
    local_27c = SQRT((float)param_1[0x220] * (float)param_1[0x220] +
                     (float)param_1[0x221] * (float)param_1[0x221] +
                     (float)param_1[0x222] * (float)param_1[0x222]);
    local_284 = SQRT((float)param_1[0x226] * (float)param_1[0x226] +
                     (float)param_1[0x225] * (float)param_1[0x225] +
                     (float)param_1[0x224] * (float)param_1[0x224]);
    local_288 = (float)param_1[0x222] / local_284;
    local_284 = (float)param_1[0x226] / local_284;
    fVar7 = (float10)FUN_00ddbaa0();
    fVar8 = (float10)fpatan((float10)local_288,(float10)local_284);
    local_1d0 = (float)fVar8;
    local_1cc = (float)fVar7;
    fVar7 = (float10)fpatan((float10)(float)param_1[0x21d] / (float10)local_27c,
                            (float10)*pfVar1 / (float10)local_280);
    local_1c8[0] = (float)fVar7;
    afStack_254[1] = 0.0;
    afStack_254[2] = 0.0;
    afStack_254[3] = 1.0;
    pfVar9 = afStack_254 + 1;
    pfStack_2c0 = (float *)0x5ca60a;
    D3DXVec3TransformNormal();
    local_1cc = 1.0;
    pfStack_2c8 = &local_1cc;
    local_1c8[0] = 0.0;
    local_1c8[1] = 0.0;
    pfStack_2cc = (float *)0x5ca634;
    pfStack_2c4 = pfStack_2c8;
    pfStack_2c0 = pfVar1;
    D3DXVec3TransformNormal();
    fStack_258 = 0.0;
    pfStack_2d4 = &fStack_258;
    afStack_254[0] = 1.0;
    afStack_254[1] = 0.0;
    uStack_2d8 = 0x5ca655;
    pfStack_2d0 = pfStack_2d4;
    pfStack_2cc = pfVar1;
    D3DXVec3TransformNormal();
    uStack_2d8 = 0x5ca65a;
    piVar5 = (int *)FUN_00c13920();
    uStack_2d8 = 0;
    pfStack_2dc = (float *)0x5ca665;
    iVar6 = (**(code **)(*piVar5 + 0x28))();
    if (iVar6 == 0) {
LAB_005ca823:
      pfStack_2c8 = (float *)((float)param_1[0x22c] + (float)pfStack_2c8);
      pfStack_2c0 = (float *)((float)param_1[0x22e] + (float)pfStack_2c0);
      pfStack_2c4 = (float *)param_1[0x22d];
    }
    else {
      pfStack_2dc = (float *)0x5ca674;
      iVar6 = FUN_00a7c8a0();
      if (iVar6 == 0) goto LAB_005ca823;
      pfStack_2dc = (float *)0xffffffff;
      pfStack_2e0 = (float *)0x5ca687;
      iVar6 = FUN_00a12210();
      pfStack_2dc = (float *)-(*(float *)(iVar6 + 0x18) /
                              SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
                                   *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
                                   *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30)));
      pfStack_2e0 = (float *)0x5ca6b3;
      FUN_00ddbaa0();
      pfStack_2e4 = (float *)&stack0xfffffd58;
      fStack_2a4 = 1.0;
      local_2a0 = 0.0;
      pfStack_2e8 = (float *)0x5ca6d6;
      pfStack_2e0 = pfStack_2e4;
      pfStack_2dc = (float *)(iVar6 + 0x10);
      D3DXVec3TransformNormal();
      afStack_254[0] = 0.0;
      pfStack_2ec = afStack_254;
      afStack_254[1] = 1.0;
      afStack_254[2] = 0.0;
      pfStack_2e8 = (float *)(iVar6 + 0x10);
      D3DXVec3TransformNormal(pfStack_2ec);
      if (DAT_01d618d4 == 0) {
LAB_005ca7d1:
        fVar2 = (float)param_1[0x239] + 1.35;
        pfStack_2c8 = (float *)(fVar2 * 0.0 + (float)pfStack_2c8);
        pfStack_2c4 = (float *)(fVar2 * 1.0 + (float)pfStack_2c4);
        pfStack_2c0 = (float *)(fVar2 * local_2a0 + (float)pfStack_2c0);
      }
      else {
        pfStack_2dc = (float *)0x5ca714;
        iVar6 = FUN_00b8bc70();
        if (iVar6 == 0) goto LAB_005ca7d1;
        fVar4 = (float)param_1[0x239] + 1.35;
        local_29c = fVar4 * local_29c + (float)pfVar9;
        fVar2 = (float)param_1[0x22d];
        fVar3 = (float)param_1[0x22c];
        pfStack_2c8 = (float *)(((fVar4 * 0.0 + (float)pfStack_2c8) - fVar2 * 0.0) -
                               afStack_254[3] * fVar3);
        pfStack_2c4 = (float *)(((fVar4 * 1.0 + (float)pfStack_2c4) - fVar2 * 1.0) -
                               fVar3 * afStack_254[4]);
        pfStack_2c0 = (float *)(((fVar4 * local_2a0 + (float)pfStack_2c0) - local_2a0 * fVar2) -
                               fVar3 * afStack_254[5]);
      }
    }
    local_298 = fStack_278;
    pfStack_2e0 = (float *)auStack_1e8;
    pfStack_2e4 = local_1c8;
    local_294 = fStack_274;
    fStack_290 = (float)uStack_270;
    fStack_28c = fStack_26c;
    pfStack_2dc = (float *)((float)param_1[0x23c] + (float)param_1[0x230]);
    pfStack_2e8 = (float *)0x5ca89e;
    FUN_00ddcfe0();
    pfStack_2dc = local_1c8;
    pfStack_2e4 = &local_298;
    pfStack_2e8 = (float *)0x5ca8b6;
    pfStack_2e0 = pfStack_2e4;
    D3DXVec3TransformNormal();
    fStack_1e4 = fStack_2a4 * 3.0 + (float)pfStack_2d4;
    fStack_1e0 = local_2a0 * 3.0 + (float)pfStack_2d0;
    fStack_1dc = local_29c * 3.0 + (float)pfStack_2cc;
    fStack_1d8 = local_298 * 3.0 + (float)pfStack_2c8;
    local_294 = fStack_1e4 - (float)pfStack_2d4;
    fStack_290 = fStack_1e0 - (float)pfStack_2d0;
    fStack_28c = fStack_1dc - (float)pfStack_2cc;
    local_288 = fStack_1d8 - (float)pfStack_2c8;
    if (((local_294 != 0.0) || (fStack_290 != 0.0)) || (fStack_28c != 0.0)) {
      fVar2 = fStack_28c * fStack_28c + fStack_290 * fStack_290 + local_294 * local_294;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        pfStack_2ec = &local_294;
        pfStack_2e8 = pfStack_2ec;
        FUN_00ddf460();
      }
      else {
        pfStack_2e8 = (float *)&DAT_0163d0ac;
        pfStack_2ec = (float *)0x5ca9c6;
        FUN_00dd5650();
        local_294 = 0.0;
        fStack_290 = 1.0;
        fStack_28c = 0.0;
      }
    }
    fStack_264 = fStack_274;
    pfStack_2ec = afStack_1f4;
    uStack_260 = uStack_270;
    fStack_25c = fStack_26c;
    fStack_258 = fStack_268;
    pfStack_2e8 = (float *)((float)param_1[0x23c] + (float)param_1[0x230]);
    FUN_00ddcfe0(auStack_1d4);
    pfStack_2e8 = (float *)auStack_1d4;
    pfStack_2ec = &fStack_264;
    D3DXVec3TransformNormal(pfStack_2ec);
    FUN_00ddcfe0(&fStack_1e0,&local_2a0,param_1[0x232]);
    D3DXVec3TransformNormal(&uStack_270,&uStack_270,&fStack_1e0);
    uStack_224 = 0;
    uStack_228 = 0;
    pfStack_22c = (float *)0x0;
    afStack_254[9] = 0.0;
    afStack_254[7] = 0.0;
    afStack_254[6] = 0.0;
    afStack_254[5] = 0.0;
    afStack_254[4] = 0.0;
    afStack_254[2] = 0.0;
    afStack_254[1] = 0.0;
    afStack_254[0] = 0.0;
    fStack_258 = 0.0;
    uStack_220 = 0x3f800000;
    afStack_254[8] = 1.0;
    afStack_254[3] = 1.0;
    fStack_25c = 1.0;
    FUN_00db6410(&fStack_25c,&pfStack_2ec,auStack_1fc,&local_27c);
    pfStack_2ec = pfStack_22c;
    pfStack_2e8 = (float *)uStack_228;
    pfStack_2e4 = (float *)uStack_224;
    pfStack_2e0 = (float *)uStack_220;
    pfStack_2cc = (float *)SQRT(afStack_254[0] * afStack_254[0] +
                                fStack_258 * fStack_258 + fStack_25c * fStack_25c);
    pfStack_2c8 = (float *)SQRT(afStack_254[4] * afStack_254[4] +
                                afStack_254[2] * afStack_254[2] + afStack_254[3] * afStack_254[3]);
    fVar2 = SQRT(afStack_254[8] * afStack_254[8] +
                 afStack_254[7] * afStack_254[7] + afStack_254[6] * afStack_254[6]);
    pfStack_2d4 = (float *)(afStack_254[4] / fVar2);
    pfStack_2d0 = (float *)(afStack_254[8] / fVar2);
    fVar7 = (float10)FUN_00ddbaa0(-(afStack_254[0] / fVar2));
    fVar8 = (float10)fpatan((float10)(float)pfStack_2d4,(float10)(float)pfStack_2d0);
    fStack_21c = (float)fVar8;
    fStack_218 = (float)fVar7;
    fVar7 = (float10)fpatan((float10)fStack_258 / (float10)(float)pfStack_2c8,
                            (float10)fStack_25c / (float10)(float)pfStack_2cc);
    fStack_214 = (float)fVar7;
    (**(code **)(*param_1 + 0x7c))(&pfStack_2ec,&fStack_21c);
    pfStack_2c0 = (float *)0x5cac43;
    FID_conflict__memcpy(&DAT_01d618e0,auStack_210,0x40);
    _DAT_01d61920 = 0x41200000;
  }
  iVar6 = FUN_00d467a0();
  if (iVar6 == 0) {
    if ((param_1[0x234] == 0) || (param_1[0x235] == 0)) {
      param_1[0x186] = param_1[0x186] + 1;
      return;
    }
  }
  else if ((param_1[0x234] == 0) || (param_1[0x235] == 0)) {
    param_1[0x186] = param_1[0x186] + 1;
switchD_005ca386_caseD_3:
    FUN_00eaa6e0();
    param_1[0x234] = 0;
    param_1[0x186] = 0;
  }
switchD_005ca386_default:
  return;
}

// 00AA6CA0  Et0006::Et0006  size=29  [class]
undefined4 * __fastcall Et0006::Et0006(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  cEspControler::cEspControler();
  return param_1;
}

// 00AA6CC0  Et0006::vf04  size=6  [class]
undefined * Et0006::vf04(void)

{
  return &DAT_01b35260;
}

// 00AB8AE0  Et0006::vf00  size=30  [class]
undefined4 __thiscall Et0006::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_34();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

