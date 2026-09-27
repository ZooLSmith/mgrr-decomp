// src/effect/et000b/Et000b.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005CB230..00AB8B70, 10 functions

#include "mgrr.h"
#include "Et000b.h"

// 005CB230  Et000b::startup  size=134  [class]
undefined4 __fastcall Et000b::startup(int param_1)

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
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined4 *)(param_1 + 0x904) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x900) = 0;
  *(undefined4 *)(param_1 + 0x8e4) = 3;
  *(undefined4 *)(param_1 + 0x8f0) = 0;
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  *(undefined4 *)(param_1 + 0x8fc) = 0x3f800000;
  return 1;
}

// 005CB2C0  Et000b::vf44  size=16  [class]
void Et000b::vf44(void)

{
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 005CB2D0  Et000b::thunk_vf48  size=5  [class]
void __fastcall Et000b::thunk_vf48(int param_1)

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

// 005CB2E0  Et000b::thunk_vf50  size=5  [class]
void __fastcall Et000b::thunk_vf50(int param_1)

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

// 005CB310  FUN_005cb310  size=32  [between]
void FUN_005cb310(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 005CB330  FUN_005cb330  size=65  [between]
void __thiscall FUN_005cb330(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x900) != param_2) {
    if (*(int *)(param_1 + 0x900) == 0) {
      FUN_00a8ca50(0x102,0,0);
    }
    *(int *)(param_1 + 0x900) = param_2;
    *(undefined4 *)(param_1 + 0x618) = 1;
  }
  return;
}

// 005CB3F0  Et000b::vf4C  size=1508  [class]
void __fastcall Et000b::vf4C(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float *pfStack_2f0;
  float *pfStack_2ec;
  float *pfStack_2e8;
  float *pfStack_2e4;
  float *pfStack_2e0;
  float fVar9;
  float fVar10;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined4 local_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float fStack_298;
  float local_290;
  float local_28c;
  float local_288;
  float *local_280;
  float local_27c;
  float local_278;
  float fStack_274;
  float local_270;
  float local_26c;
  float local_268;
  undefined4 uStack_264;
  float local_260;
  float local_25c;
  float local_258 [14];
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined1 auStack_1fc [36];
  float afStack_1d8 [5];
  undefined1 auStack_1c4 [8];
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  
  Behavior::vf4C();
  if (0 < param_1[0x239]) {
    param_1[0x239] = param_1[0x239] + -1;
  }
  switch(param_1[0x186]) {
  case 0:
    if (param_1[0x238] != 0) {
      param_1[0x186] = 1;
      return;
    }
    break;
  case 1:
    if (param_1[0x240] == 0) {
      pfStack_2e0 = (float *)0x5cb464;
      FUN_004039a0();
      FUN_00e020f0();
      FUN_00dffb90();
      FUN_00a8c930();
    }
    param_1[0x186] = param_1[0x186] + 1;
    return;
  case 2:
    if (param_1[0x238] != 0) {
      pfStack_2e0 = (float *)0x5cb4c9;
      FID_conflict__memcpy(&local_280,param_1 + 0x220,0x40);
      local_2c0 = local_258[2];
      local_2bc = local_258[3];
      local_2b8 = local_258[4];
      local_2b4 = local_258[5];
      local_2a0 = SQRT(local_278 * local_278 +
                       (float)local_280 * (float)local_280 + local_27c * local_27c);
      local_29c = SQRT(local_268 * local_268 + local_270 * local_270 + local_26c * local_26c);
      local_2a8 = SQRT(local_258[0] * local_258[0] + local_260 * local_260 + local_25c * local_25c);
      local_2a4 = local_268 / local_2a8;
      local_2a8 = local_258[0] / local_2a8;
      fVar7 = (float10)FUN_00ddbaa0();
      fVar8 = (float10)fpatan((float10)local_2a4,(float10)local_2a8);
      pfStack_2e0 = local_258 + 6;
      local_290 = (float)fVar8;
      local_28c = (float)fVar7;
      fVar7 = (float10)fpatan((float10)local_27c / (float10)local_29c,
                              (float10)(float)local_280 / (float10)local_2a0);
      local_288 = (float)fVar7;
      afStack_1d8[2] = 0.0;
      afStack_1d8[3] = 0.0;
      afStack_1d8[4] = 1.0;
      pfStack_2e4 = (float *)0x5cb5c3;
      FUN_00ddc1d0();
      pfStack_2e0 = (float *)0x5cb5e3;
      D3DXVec3TransformNormal();
      uStack_1bc = 0x3f800000;
      pfStack_2e0 = (float *)0x5;
      pfStack_2e4 = &local_29c;
      uStack_1b8 = 0;
      pfStack_2e8 = local_258 + 3;
      uStack_1b4 = 0;
      pfStack_2ec = (float *)0x5cb610;
      FUN_00ddc1d0();
      pfStack_2e0 = local_258 + 3;
      pfStack_2e4 = (float *)&uStack_1bc;
      pfStack_2e8 = (float *)auStack_1fc;
      pfStack_2ec = (float *)0x5cb630;
      D3DXVec3TransformNormal();
      afStack_1d8[0] = 0.0;
      pfStack_2ec = (float *)0x5;
      pfStack_2f0 = &local_2a8;
      afStack_1d8[1] = 1.0;
      afStack_1d8[2] = 0.0;
      FUN_00ddc1d0(local_258);
      pfStack_2ec = local_258;
      pfStack_2f0 = afStack_1d8;
      D3DXVec3TransformNormal(&fStack_218);
      local_258[0xb] = 0.0;
      local_258[10] = 0.0;
      local_258[9] = 0.0;
      local_258[8] = 0.0;
      local_258[6] = 0.0;
      local_258[5] = 0.0;
      local_258[4] = 0.0;
      local_258[3] = 0.0;
      local_258[1] = 0.0;
      local_258[0] = 0.0;
      local_25c = 0.0;
      local_260 = 0.0;
      local_258[0xc] = 1.0;
      local_258[7] = 1.0;
      local_258[2] = 1.0;
      uStack_264 = 0x3f800000;
      if ((float)param_1[0x236] != 0.0) {
        D3DXMatrixRotationZ(auStack_1c4,param_1[0x236]);
        D3DXMatrixMultiply(&local_26c,afStack_1d8 + 3,&local_26c);
      }
      if ((float)param_1[0x235] != 0.0) {
        D3DXMatrixRotationY(auStack_1c4,param_1[0x235]);
        D3DXMatrixMultiply(&local_26c,afStack_1d8 + 3,&local_26c);
      }
      if ((float)param_1[0x234] != 0.0) {
        D3DXMatrixRotationX(auStack_1c4,param_1[0x234]);
        D3DXMatrixMultiply(&local_26c,afStack_1d8 + 3,&local_26c);
      }
      D3DXMatrixMultiply(&local_2a4,&uStack_264,&local_2a4);
      pfStack_2f0 = local_280;
      pfStack_2ec = (float *)local_27c;
      pfStack_2e8 = (float *)local_278;
      pfStack_2e4 = (float *)fStack_274;
      fVar1 = fStack_2ac * fStack_2ac;
      fVar6 = fStack_2b0 * fStack_2b0;
      fVar2 = local_2a8 * local_2a8;
      fVar4 = local_29c * local_29c;
      fVar5 = local_2a0 * local_2a0;
      fVar3 = SQRT(local_288 * local_288 + local_290 * local_290 + local_28c * local_28c);
      fVar9 = fStack_298 / fVar3;
      fVar10 = local_288 / fVar3;
      fVar7 = (float10)FUN_00ddbaa0(-(local_2a8 / fVar3));
      fVar8 = (float10)fpatan((float10)fVar9,(float10)fVar10);
      local_2c0 = (float)fVar8;
      local_2bc = (float)fVar7;
      fVar7 = (float10)fpatan((float10)fStack_2ac /
                              (float10)SQRT(fStack_298 * fStack_298 + fVar5 + fVar4),
                              (float10)fStack_2b0 / (float10)SQRT(fVar2 + fVar6 + fVar1));
      local_2b8 = (float)fVar7;
      fVar1 = (float)param_1[0x232];
      fVar2 = (float)param_1[0x230];
      fVar10 = (float)param_1[0x231];
      pfStack_2f0 = (float *)(local_258[10] * fVar10 +
                             fStack_220 * fVar2 + fStack_210 * fVar1 + (float)pfStack_2f0);
      pfStack_2ec = (float *)(local_258[0xb] * fVar10 +
                             fStack_21c * fVar2 + fStack_20c * fVar1 + (float)pfStack_2ec);
      pfStack_2e8 = (float *)(local_258[0xc] * fVar10 +
                             fStack_218 * fVar2 + fStack_208 * fVar1 + (float)pfStack_2e8);
      pfStack_2e4 = (float *)(local_258[0xd] * fVar10 +
                             fStack_214 * fVar2 + fStack_204 * fVar1 + (float)pfStack_2e4);
      (**(code **)(*param_1 + 0x7c))(&pfStack_2f0,&local_2c0);
      if ((param_1[0x238] != 0) && (param_1[0x239] != 0)) {
        return;
      }
    }
    param_1[0x186] = param_1[0x186] + 1;
    return;
  case 3:
    if (param_1[0x240] == 0) {
      pfStack_2e0 = (float *)0x5cb9bb;
      FUN_00a8ca50();
    }
    param_1[0x238] = 0;
    param_1[0x186] = 0;
  }
  return;
}

// 00AA6D00  Et000b::Et000b  size=29  [class]
undefined4 * __fastcall Et000b::Et000b(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AA6D20  Et000b::vf04  size=6  [class]
undefined * Et000b::vf04(void)

{
  return &DAT_01b35284;
}

// 00AB8B70  Et000b::destruct  size=105  [class]
undefined4 * __thiscall Et000b::destruct(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
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
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

