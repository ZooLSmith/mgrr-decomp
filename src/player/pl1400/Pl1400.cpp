// src/player/pl1400/Pl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085C6F0..00AC3C80, 272 functions

#include "mgrr.h"
#include "Pl1400.h"

// 0085C6F0  Pl1400::vf48  size=5  [class]
void __fastcall Pl1400::vf48(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  
  FUN_00bc3690();
  if ((DAT_01bea094 & 0x20000) != 0) {
    return;
  }
  param_1[0x106c] = param_1[0x24];
  param_1[0x106d] = param_1[0x25];
  param_1[0x106e] = param_1[0x26];
  param_1[0x106f] = param_1[0x27];
  param_1[0x34a] =
       (int)((float)param_1[0x343] * (float)param_1[0x343] +
            (float)param_1[0x342] * (float)param_1[0x342]);
  Pl0010::GroundTest();
  FUN_00bc3dc0();
  param_1[0x9f0] = 0;
  param_1[0x9f5] = 0;
  FUN_00bc2bd0();
  if ((DAT_01bea070 & 0x40000000) != 0) {
    return;
  }
  (**(code **)(*param_1 + 0x420))();
  iVar3 = (**(code **)(*param_1 + 0x32c))();
  if (iVar3 != 0) {
    param_1[0xeea] = 0;
    param_1[0xee9] = 1;
  }
  if ((param_1[0x1d9] == 0) || (param_1[0xeea] == 0)) goto LAB_00aa21f9;
  param_1[0xeeb] = *(int *)(param_1[0x1d9] + 0xf8);
  if (param_1[0xee8] != 0) {
    FUN_008e0b70(1);
    param_1[0xee9] = 1;
    goto LAB_00aa21f9;
  }
  FUN_008e0b70(0);
  if (param_1[0xee9] == 0) goto LAB_00aa21f9;
  fVar1 = (float)param_1[0xeec];
  if ((float)param_1[0xeec] <= (float)param_1[0xeeb]) {
    if (((float)param_1[0xeec] <= (float)param_1[0xeeb]) &&
       (fVar1 = (float)param_1[0xeeb] - 0.05,
       fVar1 < (float)param_1[0xeec] != (fVar1 == (float)param_1[0xeec]))) goto LAB_00aa21dc;
  }
  else {
    fVar1 = (float)param_1[0xeeb] + 0.05;
    if ((float)param_1[0xeec] <= fVar1) {
LAB_00aa21dc:
      param_1[0xee9] = 0;
      fVar1 = (float)param_1[0xeec];
    }
  }
  CharacterControl::setHeight(fVar1);
LAB_00aa21f9:
  param_1[0xee8] = 0;
  param_1[0xeea] = 1;
  BehaviorDebrisActor::vf48();
  (**(code **)(*param_1 + 0x328))(0x3f800000);
  param_1[0x462] = param_1[0x13c];
  if (param_1[0x13c] == 0) {
    return;
  }
  iVar3 = FUN_00a7c890();
  param_1[0x463] = iVar3;
  if (param_1[0x13c] != 0) {
    FUN_00a7c910();
  }
  fVar4 = (float10)FUN_00e049b0();
  param_1[0x244] = (int)(float)fVar4;
  (**(code **)(*param_1 + 0x3d0))();
  (**(code **)(*param_1 + 0x3d4))();
  fVar1 = (float)param_1[0xafc];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0xafc] = (int)((float)param_1[0xafc] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xafd] != ((float)param_1[0xafd] == 0.0)) {
    param_1[0xafd] = (int)((float)param_1[0xafd] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xd06] != ((float)param_1[0xd06] == 0.0)) {
    param_1[0xd06] = (int)((float)param_1[0xd06] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x435] != ((float)param_1[0x435] == 0.0)) {
    param_1[0x435] = (int)((float)param_1[0x435] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x436] != ((float)param_1[0x436] == 0.0)) {
    param_1[0x436] = (int)((float)param_1[0x436] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xb0f] != ((float)param_1[0xb0f] == 0.0)) {
    param_1[0xb0f] = (int)((float)param_1[0xb0f] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xc6a] != ((float)param_1[0xc6a] == 0.0)) {
    param_1[0xc6a] = (int)((float)param_1[0xc6a] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xe79] != ((float)param_1[0xe79] == 0.0)) {
    param_1[0xe79] = (int)((float)param_1[0xe79] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xe15] != ((float)param_1[0xe15] == 0.0)) {
    param_1[0xe15] = (int)((float)param_1[0xe15] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xb04] != ((float)param_1[0xb04] == 0.0)) {
    param_1[0xb04] = (int)((float)param_1[0xb04] - (float)param_1[0x244]);
  }
  if (0 < param_1[0x2e4]) {
    param_1[0x2e4] = param_1[0x2e4] + -1;
  }
  fVar1 = (float)param_1[0xc68];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0xc68] = (int)((float)param_1[0xc68] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xc69] != ((float)param_1[0xc69] == 0.0)) {
    param_1[0xc69] = (int)((float)param_1[0xc69] - (float)param_1[0x244]);
  }
  FUN_00b8f340();
  fVar1 = (float)param_1[0x9f9];
  if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) &&
     (fVar1 = (float)param_1[0x9f9], param_1[0x9f9] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] < 0.0)) {
    param_1[0x9f8] = 0;
  }
  if ((param_1[0xe16] != 0) && ((param_1[0x33e] & param_1[0x392]) == 0)) {
    param_1[0xe16] = 0;
  }
  if (((*(byte *)(param_1 + 0x1e4) & 0x10) != 0) && (FUN_00a8d280(), param_1[0x463] != 0)) {
    FUN_0041cc40(0x3f800000);
  }
  FUN_00be7f50();
  pcVar2 = *(code **)(*param_1 + 0x3cc);
  param_1[0x9fa] = 0;
  (*pcVar2)();
  FUN_00b7f530();
  return;
}

// 0085C700  Pl1400::vf4C  size=454  [class]
void __fastcall Pl1400::vf4C(int param_1)

{
  float *pfVar1;
  int iVar2;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  PlBaseDLC::vf4C();
  iVar2 = FUN_00932720();
  if (iVar2 != 0xc75) {
    return;
  }
  if (*(int *)(param_1 + 0x5464) != 0) {
    *(int *)(param_1 + 0x5464) = *(int *)(param_1 + 0x5464) + -1;
  }
  if (*(int *)(param_1 + 0x3b64) != 0) {
    *(undefined4 *)(param_1 + 0x5464) = 10;
  }
  if ((*(int *)(param_1 + 0x5464) == 0) || (*(int *)(param_1 + 0x5468) == 0)) goto LAB_0085c8b6;
  local_40 = *(undefined4 *)(param_1 + 0x50);
  pfVar1 = (float *)(param_1 + 0x50);
  local_3c = *(undefined4 *)(param_1 + 0x54);
  local_38 = *(undefined4 *)(param_1 + 0x58);
  local_34 = *(undefined4 *)(param_1 + 0x5c);
  local_30 = *pfVar1 - *(float *)(param_1 + 0x900);
  local_2c = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x904);
  local_28 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x908);
  local_24 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x90c);
  CharacterControl::setRadius(0x3e4ccccd);
  iVar2 = hkpCdPointCollector::hkpCdPointCollector(&local_30,&local_40,1,0,0x3c23d70a);
  if (iVar2 == 0) {
    FUN_008e4580(pfVar1,1);
    local_20 = 0;
    local_1c = 0xbecccccd;
    local_18 = 0;
    local_50 = *pfVar1;
    local_4c = *(undefined4 *)(param_1 + 0x54);
    local_48 = *(undefined4 *)(param_1 + 0x58);
    local_44 = *(undefined4 *)(param_1 + 0x5c);
    iVar2 = hkpCdPointCollector::hkpCdPointCollector(&local_20,&local_50,1,0,0x3c23d70a);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x54) = local_4c;
      *(undefined4 *)(*(int *)(param_1 + 0x764) + 0x124) = 0;
      goto LAB_0085c871;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = local_3c;
    *(undefined4 *)(*(int *)(param_1 + 0x764) + 0x124) = 0;
LAB_0085c871:
    if (-0.1 < *(float *)(param_1 + 0x894)) {
      *(undefined4 *)(param_1 + 0x894) = 0xbdcccccd;
    }
  }
  CharacterControl::setRadius(0x3eb33333);
LAB_0085c8b6:
  *(undefined4 *)(param_1 + 0x5468) = 0;
  return;
}

// 0085C8D0  Pl1400::vf54  size=5  [class]
void __fastcall Pl1400::vf54(int *param_1)

{
  int iVar1;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  FUN_00b84bf0();
  iVar1 = FUN_00b8bb10();
  if (iVar1 == 0) {
    if ((param_1[0x1e5] & 0x8000U) != 0) {
      iVar1 = (**(code **)(*param_1 + 0x32c))();
      if (iVar1 == 0) {
        iVar1 = FUN_00a81330();
        if (iVar1 != 0) {
          iVar1 = FUN_00a7c8a0();
          if (iVar1 != 0) {
            FUN_00a8ce90(&fStack_40,auStack_20);
            D3DXVec3TransformNormal(&fStack_40,&fStack_40,iVar1 + 0x10);
            fStack_40 = *(float *)(iVar1 + 0x40) + fStack_40;
            fStack_3c = *(float *)(iVar1 + 0x44) + fStack_3c;
            fStack_38 = *(float *)(iVar1 + 0x48) + fStack_38;
            fStack_30 = fStack_40 - (float)param_1[0x10];
            fStack_2c = fStack_3c - (float)param_1[0x11];
            fStack_28 = fStack_38 - (float)param_1[0x12];
            fStack_24 = fStack_34 - (float)param_1[0x13];
            FUN_00a12310(&fStack_30);
          }
        }
        goto LAB_00aa2707;
      }
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0x794) & 0x20) != 0)) &&
         ((param_1[0xf89] != 0 || (param_1[0xf90] != 0)))) {
        FUN_00a12210(0xffffffff);
        *(int *)(iVar1 + 0x860) = param_1[0xf8c];
        *(int *)(iVar1 + 0x864) = param_1[0xf8d];
        *(int *)(iVar1 + 0x868) = param_1[0xf8e];
        *(int *)(iVar1 + 0x86c) = param_1[0xf8f];
        *(int *)(iVar1 + 0x850) = param_1[0xf94];
        *(int *)(iVar1 + 0x854) = param_1[0xf95];
        *(int *)(iVar1 + 0x858) = param_1[0xf96];
        *(int *)(iVar1 + 0x85c) = param_1[0xf97];
      }
    }
  }
LAB_00aa2707:
  Behavior::vf54();
  param_1[0x158] = (int)((float)param_1[0x10] - (float)param_1[0x150]);
  param_1[0x159] = (int)((float)param_1[0x11] - (float)param_1[0x151]);
  param_1[0x15a] = (int)((float)param_1[0x12] - (float)param_1[0x152]);
  param_1[0x15b] = (int)((float)param_1[0x13] - (float)param_1[0x153]);
  param_1[0x150] = param_1[0x10];
  param_1[0x151] = param_1[0x11];
  param_1[0x152] = param_1[0x12];
  param_1[0x153] = param_1[0x13];
  return;
}

// 0085C900  Pl1400::vf420  size=1  [class]
void Pl1400::vf420(void)

{
  return;
}

// 0085C910  FUN_0085c910  size=230  [between]
undefined4 __fastcall FUN_0085c910(int param_1)

{
  int iVar1;
  
  if ((DAT_01bea090 & 0x40000) == 0) {
    iVar1 = FUN_00b876d0();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x2790) = 0;
      FUN_00a8caf0(0x100043,0,0,0);
      *(undefined4 *)(param_1 + 0x2620) = 0;
      return 1;
    }
    iVar1 = FUN_00b8f1b0();
    if (iVar1 != 0) {
      iVar1 = FUN_00b7f610();
      if ((((iVar1 != 1) && (iVar1 = FUN_00b7f610(), iVar1 != 2)) &&
          (iVar1 = FUN_00b7f610(), iVar1 != 3)) &&
         ((iVar1 = FUN_00b7f610(), iVar1 != 4 && (iVar1 = FUN_00b7f610(), iVar1 != 7)))) {
        iVar1 = FUN_00b7f610();
        if ((iVar1 != 5) && (iVar1 = FUN_00b7f610(), iVar1 != 6)) {
          return 0;
        }
        FUN_00a8caf0(0x100040,0,0,0);
        *(undefined4 *)(param_1 + 0x2620) = 0;
        return 1;
      }
      FUN_00a8caf0(0x10003a,0,0,0);
      return 1;
    }
  }
  return 0;
}

// 0085CA00  FUN_0085ca00  size=136  [between]
void __fastcall FUN_0085ca00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if ((param_1[0x187] != 0) &&
     ((((param_1[0x33e] & param_1[0x38f]) == 0 || ((DAT_01bea090 & 0x1000000) != 0)) ||
      ((DAT_01bea090 & 0x800000) != 0)))) {
    FUN_00a8caf0(0x100047,0,0,0);
  }
  return;
}

// 0085CA90  FUN_0085ca90  size=136  [between]
void __fastcall FUN_0085ca90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if ((param_1[0x187] != 0) &&
     ((((param_1[0x33e] & param_1[0x38f]) == 0 || ((DAT_01bea090 & 0x1000000) != 0)) ||
      ((DAT_01bea090 & 0x800000) != 0)))) {
    FUN_00a8caf0(0x100047,0,0,0);
  }
  return;
}

// 0085CB20  FUN_0085cb20  size=344  [between]
void __thiscall FUN_0085cb20(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = true;
  if (((*(int *)(param_2 + 0x5c) == 8) && ((DAT_01bea090 & 0x80000000) == 0)) &&
     (iVar2 = FUN_00bc3230(0), iVar2 == 0)) {
    bVar1 = false;
  }
  iVar2 = (**(code **)(*param_1 + 0x41c))();
  if (iVar2 == 0) {
    return;
  }
  if (!bVar1) {
    return;
  }
  iVar2 = FUN_00c15520();
  if (iVar2 == 0) {
    return;
  }
  switch(*(undefined4 *)(param_2 + 0x5c)) {
  case 1:
    uVar3 = 0x4000000;
    break;
  case 2:
  case 6:
  case 7:
    uVar3 = 2;
    break;
  case 3:
    uVar3 = 0x102;
    break;
  case 4:
    if (param_1[0x3d5] != 0) {
      FUN_00b85350(param_1[0xcee],param_1[0xcec],param_1[0xced],1,1,0x3dcccccd);
      param_1[0x1510] = 1;
      return;
    }
    goto LAB_0085cc6b;
  case 5:
    if (param_1[0x3d5] != 0) {
      FUN_00b85350(0x42b40000,param_1[0xcec],param_1[0xced],1,1,0x3dcccccd);
      param_1[0x1510] = 1;
      return;
    }
    goto LAB_0085cc6b;
  case 8:
    iVar2 = FUN_00416d50(0x20);
    if (iVar2 != 0) {
      return;
    }
  case 9:
    uVar3 = 10;
    break;
  default:
    uVar3 = 0x2800000;
  }
  FUN_00cbc8f0(uVar3,1);
LAB_0085cc6b:
  param_1[0x1510] = 1;
  return;
}

// 0085CCA0  Pl1400::vf14C  size=237  [class]
bool __thiscall Pl1400::vf14C(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    if ((param_2 != 0x28) && (param_2 != 0x29)) {
      if (((param_2 != 0x2a) && (param_2 != 0x2d)) && (param_2 != 0x30)) {
        if (param_2 == 0x32) {
          iVar1 = FUN_00b7f550(1);
          return iVar1 == 0;
        }
        if (((param_2 != 0x37) && (param_2 != 0x38)) && (param_2 != 0x39)) {
          if (param_2 == 0x3a) {
            iVar1 = FUN_00a81330();
            if (iVar1 != 0) {
              return false;
            }
            return true;
          }
          if (param_2 == 0x57) {
            return true;
          }
          if (param_2 == 0x5d) {
            return true;
          }
          if (param_2 == 0x5e) {
            return true;
          }
          if (param_2 == 0x61) {
            return true;
          }
          if (param_2 == 0x60) {
            return true;
          }
          if (param_2 != 0x5f) {
            if (param_2 == 100) {
              return true;
            }
            if (param_2 == 0x62) {
              return true;
            }
            if (param_2 == 99) {
              return true;
            }
            if (param_2 != 0x86) {
              if (param_2 != 0x87) {
                return false;
              }
              return true;
            }
            return true;
          }
          return true;
        }
      }
      return true;
    }
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x10006a) {
      iVar1 = (**(code **)(*param_1 + 0x1d8))();
      return iVar1 == 0;
    }
  }
  return false;
}

// 0085CD90  FUN_0085cd90  size=21  [between]
void __fastcall FUN_0085cd90(int *param_1)

{
  (**(code **)(*param_1 + 800))(0x3c888889);
  return;
}

// 0085CDB0  FUN_0085cdb0  size=21  [between]
void __fastcall FUN_0085cdb0(int *param_1)

{
  (**(code **)(*param_1 + 800))(0x3c888889);
  return;
}

// 0085CDD0  FUN_0085cdd0  size=21  [between]
void __fastcall FUN_0085cdd0(int *param_1)

{
  (**(code **)(*param_1 + 800))(0x3c888889);
  return;
}

// 0085CDF0  FUN_0085cdf0  size=134  [between]
void __fastcall FUN_0085cdf0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x118,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 0085CE80  FUN_0085ce80  size=269  [between]
void __fastcall FUN_0085ce80(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x119,0,0x3ed55555,0x3f800000,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    fVar2 = (float10)FUN_00dde300(0,0x42700000);
    param_1[0x248] = (int)(float)(fVar2 + (float10)60.0);
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    return;
  case 2:
    FUN_00aa4080(0x11a,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = 0;
      return;
    }
  default:
    return;
  }
}

// 0085CFA0  Pl1400::vf34C  size=12  [class]
uint Pl1400::vf34C(void)

{
  return DAT_01bea090 >> 0x1e & 1;
}

// 0085CFB0  FUN_0085cfb0  size=75  [between]
undefined4 __thiscall FUN_0085cfb0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x34c))();
  if (iVar1 != 0) {
    FUN_00a8caf0(0x10002e,0,0,0);
    if (param_2 != 0) {
      FUN_00a8caf0(0x10002f,0,0,0);
    }
    return 1;
  }
  return 0;
}

// 0085D000  Pl1400::vf358  size=29  [class]
undefined4 __fastcall Pl1400::vf358(int param_1)

{
  if ((*(int *)(param_1 + 0x618) != 0x10001e) && (*(int *)(param_1 + 0x618) != 0x100024)) {
    return 0;
  }
  return 1;
}

// 0085D020  Pl1400::vf360  size=71  [class]
undefined4 __fastcall Pl1400::vf360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (((((iVar1 != 0x10001e) && (iVar1 != 0x10001f)) && (iVar1 != 0x100020)) &&
      (((iVar1 != 0x100021 && (iVar1 != 0x100024)) && ((iVar1 != 0x100025 && (iVar1 != 0x100026)))))
      ) || (uVar2 = 1, 1 < *(int *)(param_1 + 0x61c))) {
    uVar2 = 0;
  }
  return uVar2;
}

// 0085D070  FUN_0085d070  size=284  [between]
undefined4 __fastcall FUN_0085d070(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  iVar2 = FUN_00a8c760(0x1f);
  if (((iVar2 != 0) && (bVar1 = false, param_1[0x186] == 0x10004e)) && (param_1[0x9f8] != 0)) {
    bVar1 = true;
  }
  if (((param_1[0x95c] != 0) && (bVar1)) && ((0.0 < (float)param_1[0xd0f] && (param_1[0x95c] < 3))))
  {
    param_1[0x95c] = 2;
  }
  if (((param_1[0x95c] != 0) && (bVar1)) &&
     (((float)param_1[0xd0f] <= 0.0 &&
      ((iVar2 = FUN_00a81330(), iVar2 != 0 &&
       (iVar2 = FUN_00b87df0(iVar2,param_1[0x41c],0x3f860a92), iVar2 != 0)))))) {
    (**(code **)(*param_1 + 0x220))(0);
    iVar2 = FUN_00a8c760(0x21);
    if (iVar2 == 0) {
      FUN_00a8caf0(0x10001e,0,0,0);
      iVar2 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar2 != 0) {
        FUN_00a8caf0(0x100024,0,0,0);
      }
    }
    param_1[0x2e4] = 0x5a;
    return 0;
  }
  return 0;
}

// 0085D190  FUN_0085d190  size=188  [between]
undefined4 __fastcall FUN_0085d190(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1[0x95c] != 0) && ((float)param_1[0xd0f] <= 0.0)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00b87df0(iVar1,param_1[0x41c],0x3f860a92);
      if (iVar1 != 0) {
        uVar2 = 0;
        iVar1 = (**(code **)(*param_1 + 0x360))();
        if ((((iVar1 != 0) && (param_1[0x187] < 2)) && (param_1[0x250] != 0)) &&
           (param_1[0x2e4] != 0)) {
          uVar2 = 1;
        }
        iVar1 = (**(code **)(*param_1 + 0x360))();
        if ((iVar1 == 0) && (param_1[0x2e4] != 0)) {
          iVar1 = FUN_00a8c760(0x21);
          if (iVar1 != 0) {
            uVar2 = 1;
          }
        }
        return uVar2;
      }
    }
  }
  return 0;
}

// 0085D250  FUN_0085d250  size=806  [between]
void __fastcall FUN_0085d250(int *param_1)

{
  float fVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  float10 fVar7;
  float local_4;
  
  local_4 = 0.0;
  bVar4 = false;
  iVar6 = FUN_00a94c70(0x2d);
  if (((iVar6 != -1) || (iVar6 = FUN_00a94c70(0x2e), iVar6 != -1)) ||
     (iVar6 = FUN_00a94c70(0x2f), iVar6 != -1)) {
    bVar4 = true;
    local_4 = (float)param_1[0x244] * 0.016666668;
  }
  bVar5 = false;
  if ((!bVar4) || (fVar1 = (float)param_1[0xaff], NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0))) {
    if ((short)param_1[0x428] != -1) {
      FUN_00a94bc0(2,0x3d888889);
      *(undefined2 *)(param_1 + 0x428) = 0xffff;
    }
  }
  else {
    sVar3 = (short)param_1[0x428];
    bVar5 = true;
    if (((sVar3 != 0x2d) && (sVar3 != 0x2e)) && (sVar3 != 0x2f)) {
      FUN_00aa4080(0xb6,2,0x3e088889,0x3f800000,0x40200,0,0x3f800000);
      *(undefined2 *)(param_1 + 0x428) = 0x2d;
    }
    fVar7 = (float10)FUN_00a958c0(0);
    fVar7 = fVar7 + (float10)local_4;
    if (fVar7 < (float10)0) {
      fVar7 = (float10)0;
    }
    FUN_00a95e60(2,(float)fVar7);
  }
  param_1[0xb00] = 0;
  cVar2 = (char)param_1[0x41e];
  switch(cVar2) {
  case '\0':
    *(char *)(param_1 + 0x41e) = cVar2 + '\x01';
    param_1[0xaf0] = 0;
    param_1[0xaf1] = 0x3fc00000;
    param_1[0xaf2] = 0x3fc00000;
    FUN_00eaa6e0(0x41200000,0);
    *(undefined2 *)(param_1 + 0x428) = 0xffff;
    break;
  case '\x01':
    break;
  default:
    goto LAB_0085d56a;
  case '\x04':
    param_1[0x41f] = 0x41f00000;
    *(char *)(param_1 + 0x41e) = cVar2 + '\x01';
    FUN_00aa4080(0xb4,1,0x3d088889,0x3f800000,0x40200,0,0x3f800000);
    goto LAB_0085d467;
  case '\x05':
LAB_0085d467:
    fVar1 = (float)param_1[0x41f];
    param_1[0x41f] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      *(undefined1 *)(param_1 + 0x41e) = 0;
      param_1[0xb00] = 1;
      FUN_00a94bc0(1,0x3d888889);
      if ((short)param_1[0x428] != -1) {
        FUN_00a94bc0(2,0x3d888889);
      }
      *(undefined2 *)(param_1 + 0x428) = 0xffff;
      return;
    }
    fVar1 = (float)param_1[0xaf4];
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && (param_1[0xaed] != 0)) {
      FUN_00dda360(0,0x3f4ccccd,0,3);
      param_1[0x41f] = 0x41f00000;
    }
    if (!bVar5) {
      *(undefined1 *)(param_1 + 0x41e) = 0;
      param_1[0xb00] = 1;
      FUN_00a94bc0(1,0x3d888889);
      if ((short)param_1[0x428] != -1) {
        FUN_00a94bc0(2,0x3d888889);
      }
      *(undefined2 *)(param_1 + 0x428) = 0xffff;
      param_1[0x427] = 0;
      return;
    }
    goto LAB_0085d56a;
  }
  if (bVar5) {
    *(char *)(param_1 + 0x41e) = (char)param_1[0x41e] + '\x01';
    (**(code **)(*param_1 + 0x3e0))(0x2b,param_1 + 0xdcc);
    *(undefined1 *)(param_1 + 0x41e) = 4;
    param_1[0x427] = 0;
    return;
  }
LAB_0085d56a:
  param_1[0x427] = 0;
  return;
}

// 0085D590  FUN_0085d590  size=102  [between]
undefined4 __fastcall FUN_0085d590(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x360))();
  if ((((iVar1 != 0) && (param_1[0x187] < 2)) && (iVar1 = FUN_00a8c760(0xb), iVar1 != 0)) &&
     (param_1[0x2e4] != 0)) {
    uVar2 = 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x360))();
  if (((iVar1 == 0) && (param_1[0x2e4] != 0)) && (iVar1 = FUN_00a8c760(0x21), iVar1 != 0)) {
    return 1;
  }
  return uVar2;
}

// 0085D620  FUN_0085d620  size=385  [between]
undefined4 __fastcall FUN_0085d620(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((param_1[0x33f] & param_1[0x38e]) == 0) && (param_1[0x96a] == 0)) {
    return 0;
  }
  local_34 = 0.0;
  iVar1 = FUN_00945590(&local_34);
  if (iVar1 == 0) {
    if (local_34 == 0.0) {
      return 0;
    }
  }
  else {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    param_1[0x96a] = 0;
    FUN_009484d0();
    FUN_00a8caf0(0x10002b,0,0,0);
    uVar2 = 0xf01;
    FUN_00a7c8a0(0xf01);
    iVar1 = FUN_00a12210(uVar2);
    local_30 = *(undefined4 *)(iVar1 + 0x50);
    local_2c = *(undefined4 *)(iVar1 + 0x54);
    local_28 = *(undefined4 *)(iVar1 + 0x58);
    local_24 = *(undefined4 *)(iVar1 + 0x5c);
    local_20 = *(undefined4 *)(iVar1 + 0x90);
    local_1c = *(float *)(iVar1 + 0x94);
    local_18 = *(undefined4 *)(iVar1 + 0x98);
    local_14 = *(undefined4 *)(iVar1 + 0x9c);
    iVar1 = FUN_00a7c8d0();
    fVar3 = (float10)FUN_00ddba30(*(float *)(iVar1 + 4) + local_1c);
    local_1c = (float)fVar3;
    iVar1 = FUN_00a7c8a0();
    D3DXVec3TransformNormal(&local_30,&local_30,iVar1 + 0x10);
    local_34 = *(float *)(iVar1 + 0x48) + local_34;
    (**(code **)(*param_1 + 0x7c))(&stack0xffffffc4,&local_2c);
  }
  return 1;
}

// 0085D7B0  Pl1400::vf368  size=36  [class]
undefined4 __fastcall Pl1400::vf368(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (((0x100042 < iVar1) && (iVar1 < 0x10004d)) && (iVar1 != 0x100047)) {
    return 1;
  }
  return 0;
}

// 0085D7E0  Pl1400::vf388  size=44  [class]
void __fastcall Pl1400::vf388(int *param_1)

{
  FUN_00b7fa30(0);
  FUN_00a8caf0(0x100000,0,0,0);
  (**(code **)(*param_1 + 0x39c))();
  return;
}

// 0085D810  FUN_0085d810  size=151  [between]
undefined4 __thiscall FUN_0085d810(int param_1,int param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = (*(uint *)(param_1 + 0xe18) & *(uint *)(param_1 + 0xcfc)) != 0;
  if ((param_3 != 0) && ((*(uint *)(param_1 + 0xe48) & *(uint *)(param_1 + 0xcfc)) != 0)) {
    bVar1 = true;
  }
  if (((((DAT_01bea090 & 0x400) == 0) && (bVar1)) && (param_2 != 0)) &&
     (*(int *)(param_1 + 0x261c) < 2)) {
    *(undefined4 *)(param_1 + 0x2c5c) = 0xbf800000;
    *(int *)(param_1 + 0x261c) = *(int *)(param_1 + 0x261c) + 1;
    *(undefined4 *)(param_1 + 0x25b4) = 0;
    *(undefined4 *)(param_1 + 0x25bc) = 0;
    FUN_00a8caf0(0x100004,0,0,0);
    return 1;
  }
  *(undefined4 *)(param_1 + 0x25b4) = 0;
  *(undefined4 *)(param_1 + 0x25bc) = 0;
  *(undefined4 *)(param_1 + 0x25b8) = 0;
  return 0;
}

// 0085D8B0  FUN_0085d8b0  size=84  [between]
undefined4 __thiscall FUN_0085d8b0(int param_1,int param_2)

{
  if (((param_2 != 0) && ((*(byte *)(param_1 + 0x2654) & 0x80) == 0)) &&
     ((DAT_01bea090 & 0x400) == 0 && (*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe48)) != 0)
     ) {
    FUN_00a8caf0(0x10000c,0,0,0);
    return 1;
  }
  return 0;
}

// 0085D910  FUN_0085d910  size=133  [between]
undefined4 __thiscall FUN_0085d910(int param_1,int param_2)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe20)) == 0) &&
     (*(int *)(param_1 + 0x2568) == 0)) {
    return 0;
  }
  iVar1 = FUN_00b865a0(0);
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a7c8a0();
    }
  }
  *(undefined4 *)(param_1 + 0x2568) = 0;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x2620) = 0;
  }
  if (3 < *(int *)(param_1 + 0x2620)) {
    *(undefined4 *)(param_1 + 0x2620) = 0;
  }
  FUN_00a8caf0(0x10000f,0,0,0);
  *(undefined4 *)(param_1 + 0x2628) = 0;
  *(undefined4 *)(param_1 + 0xb74) = 0;
  return 1;
}

// 0085D9A0  FUN_0085d9a0  size=191  [between]
undefined4 __fastcall FUN_0085d9a0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x2680) = 0;
  if ((DAT_01bea090 & 0x800000) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xe70) == 0) {
    if (((*(uint *)(param_1 + 0xe24) & *(uint *)(param_1 + 0xcfc)) == 0) &&
       (*(int *)(param_1 + 0x256c) == 0)) {
      if (((*(uint *)(param_1 + 0xe20) & *(uint *)(param_1 + 0xcfc)) == 0) &&
         (*(int *)(param_1 + 0x2568) == 0)) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x2568) = 0;
      uVar1 = 0x100014;
    }
    else {
      *(undefined4 *)(param_1 + 0x256c) = 0;
      uVar1 = 0x100015;
    }
    *(undefined4 *)(param_1 + 0x2620) = 0;
    *(undefined4 *)(param_1 + 0x2630) = 0;
    *(undefined4 *)(param_1 + 0x263c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2628) = 0;
    FUN_00a8caf0(uVar1,0,0,0);
    *(undefined4 *)(param_1 + 0x3350) = 0;
    *(undefined4 *)(param_1 + 0x2644) = 0;
    return 1;
  }
  *(undefined4 *)(param_1 + 0xe70) = 0;
  FUN_00a8caf0(0x10001b,0,0,0);
  *(undefined4 *)(param_1 + 0x2644) = 0;
  return 1;
}

// 0085DA60  FUN_0085da60  size=152  [between]
undefined4 __thiscall FUN_0085da60(int param_1,int param_2,int param_3)

{
  if ((((*(int *)(param_1 + 0x5430) != 0) && (*(int *)(param_1 + 0x542c) != 0)) && (param_3 != 0))
     && ((*(byte *)(param_1 + 0x2654) & 8) == 0)) {
    *(undefined4 *)(param_1 + 0x256c) = 0;
    *(undefined4 *)(param_1 + 0x2620) = 0;
    FUN_00a8caf0(0x100019,0,0,0);
    return 1;
  }
  if (((param_2 != 0) && ((*(byte *)(param_1 + 0x2654) & 2) == 0)) &&
     (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe20)) != 0 ||
      (*(int *)(param_1 + 0x2568) != 0)))) {
    *(undefined4 *)(param_1 + 0x2568) = 0;
    *(undefined4 *)(param_1 + 0x2620) = 0;
    FUN_00a8caf0(0x100017,0,0,0);
    return 1;
  }
  return 0;
}

// 0085DB00  FUN_0085db00  size=124  [between]
void __thiscall FUN_0085db00(int *param_1,int param_2)

{
  int iVar1;
  
  FUN_00b88400();
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x39c))();
  }
  param_1[0x995] = 0;
  param_1[0x9a2] = 0;
  param_1[0x9a3] = 0;
  FUN_00b895d0();
  FUN_00a81330();
  param_1[0x9f9] = 0;
  param_1[0x988] = 0;
  param_1[0xb0a] = 0;
  param_1[0x991] = 0;
  iVar1 = FUN_00a12210(0xf00);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 0x1000;
  }
  return;
}

// 0085DB80  FUN_0085db80  size=93  [between]
void __fastcall FUN_0085db80(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00a81330();
  pcVar1 = *(code **)(*param_1 + 0x39c);
  param_1[0x988] = 0;
  param_1[0xb0a] = 0;
  (*pcVar1)();
  FUN_00b88400();
  param_1[0x991] = 0;
  iVar2 = FUN_00a12210(0xf00);
  if (iVar2 != 0) {
    *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 0x1000;
  }
  return;
}

// 0085DBE0  Pl1400::vf3C0  size=228  [class]
void __fastcall Pl1400::vf3C0(int param_1)

{
  uint uVar1;
  
  PlBaseDLC::vf3C0();
  if (*(int *)(param_1 + 0x5428) != 0) {
    *(int *)(param_1 + 0x5428) = *(int *)(param_1 + 0x5428) + -1;
  }
  if (*(int *)(param_1 + 0x5438) != 0) {
    *(int *)(param_1 + 0x5438) = *(int *)(param_1 + 0x5438) + -1;
  }
  if (*(float *)(param_1 + 0x40d0) != 0.0) {
    *(float *)(param_1 + 0x40d0) = *(float *)(param_1 + 0x40d0) - 1.0;
  }
  if (*(int *)(param_1 + 0x543c) != 0) {
    *(int *)(param_1 + 0x543c) = *(int *)(param_1 + 0x543c) + -1;
  }
  uVar1 = *(uint *)(param_1 + 0xcfc);
  if ((*(uint *)(param_1 + 0x5424) & uVar1) != 0) {
    *(undefined4 *)(param_1 + 0x5428) = 10;
  }
  if ((*(uint *)(param_1 + 0x5434) & uVar1) != 0) {
    *(undefined4 *)(param_1 + 0x5438) = 10;
  }
  if ((*(uint *)(param_1 + 0xe48) & uVar1) != 0) {
    *(undefined4 *)(param_1 + 0x543c) = 10;
  }
  if ((*(int *)(param_1 + 0x40cc) != 0) && (*(int *)(param_1 + 0x543c) != 0)) {
    *(undefined4 *)(param_1 + 0x40d0) = 0x41200000;
  }
  if ((*(uint *)(param_1 + 0xcf8) & *(uint *)(param_1 + 0xe24)) == 0) {
    *(undefined4 *)(param_1 + 0x542c) = 0;
    *(undefined4 *)(param_1 + 0x5430) = 0;
  }
  else {
    *(int *)(param_1 + 0x542c) = *(int *)(param_1 + 0x542c) + 1;
    if ((uVar1 & *(uint *)(param_1 + 0xe24)) != 0) {
      *(undefined4 *)(param_1 + 0x5430) = 1;
      return;
    }
  }
  return;
}

// 0085DCD0  FUN_0085dcd0  size=31  [between]
undefined4 FUN_0085dcd0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00b7d0b0();
  if (iVar1 != 0) {
    FUN_00b7d0b0();
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 0085DCF0  FUN_0085dcf0  size=148  [between]
void __thiscall FUN_0085dcf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
      }
      FUN_00aa45f0(0x11405,param_3,param_2,0,0,0x3f800000,param_4,0,0x3f800000);
      *(undefined4 *)(param_1 + 0xb9c) = 4;
    }
  }
  return;
}

// 0085DD90  FUN_0085dd90  size=151  [between]
void __thiscall
FUN_0085dd90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
      }
      FUN_00a9e290(param_2,param_3,param_4,param_5,param_6,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0xb9c) = 4;
    }
  }
  return;
}

// 0085DE30  FUN_0085de30  size=34  [between]
undefined4 __fastcall FUN_0085de30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x1d8))();
  if ((iVar1 == 0) || (uVar2 = 1, 1 < param_1[0x987])) {
    uVar2 = 0;
  }
  return uVar2;
}

// 0085DE60  Pl1400::vf38C  size=36  [class]
void Pl1400::vf38C(void)

{
  FUN_00b7c9c0(0);
  FUN_00a8caf0(0x100062,0,0,0);
  FUN_00b7ce10();
  return;
}

// 0085DEF0  FUN_0085def0  size=107  [between]
void __fastcall FUN_0085def0(int param_1)

{
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return;
}

// 0085DFB0  Pl1400::vf32C  size=73  [class]
bool __fastcall Pl1400::vf32C(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00b8bb10();
  if (iVar1 == 0) {
    iVar1 = FUN_00b8bca0();
    if (iVar1 != 0) {
      return false;
    }
    if ((DAT_01bea090 & 0x20000000) == 0) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 0x100007) {
        return *(int *)(param_1 + 0x40c8) != 0;
      }
    }
  }
  return true;
}

// 0085E000  FUN_0085e000  size=274  [callgraph]
void __thiscall FUN_0085e000(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1[0x9b5] = 0;
  FUN_00b7aa50();
  (**(code **)(*param_1 + 0x39c))();
  if (param_2 != 0x11) {
    if ((DAT_01bea090 & 0x80000000) != 0) {
      FUN_00a9e120(3,0x711,0);
    }
    FUN_00a94bc0(2,0x3c888889);
    FUN_00a94bc0(3,0x3c888889);
    FUN_00a94bc0(4,0x3c888889);
    FUN_00a94bc0(5,0x3c888889);
    FUN_00a94bc0(6,0x3c888889);
    FUN_00a94bc0(7,0x3c888889);
    FUN_00a94bc0(8,0x3c888889);
    FUN_00a8caf0(0x100007,0,0,0);
  }
  param_1[0x991] = 0;
  param_1[0x1032] = param_2;
  uVar2 = 0x14;
  uVar1 = (**(code **)**(undefined4 **)(param_1[500] + 4))(0x14,param_1[500]);
  FUN_00d825d0(uVar1,uVar2);
  return;
}

// 0085E150  FUN_0085e150  size=87  [callgraph]
void __fastcall FUN_0085e150(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if ((param_1[0x187] != 0) && (param_1[0x251] != 0)) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
    if (iVar1 != 0) {
      FUN_00a8caf0(0x100006,0,0,0);
    }
  }
  return;
}

// 0085E1B0  FUN_0085e1b0  size=218  [callgraph]
void __fastcall FUN_0085e1b0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    param_1[0x2dd] = 0;
    FUN_00aa4080(0xe6,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41700000);
    FUN_00b895d0();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) &&
     (iVar2 = FUN_00e36060(0), iVar2 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 0085E290  FUN_0085e290  size=228  [callgraph]
void __fastcall FUN_0085e290(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    uVar2 = 0xdf;
    if (param_1[0x2dd] != 0) {
      uVar2 = 0xe3;
    }
    FUN_00aa4080(uVar2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    (**(code **)(*param_1 + 0x3e4))();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
     (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 0085E380  FUN_0085e380  size=228  [callgraph]
void __fastcall FUN_0085e380(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    uVar2 = 0xe1;
    if (param_1[0x2dd] != 0) {
      uVar2 = 0xe4;
    }
    FUN_00aa4080(uVar2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    (**(code **)(*param_1 + 0x3e4))();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
     (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 0085E470  FUN_0085e470  size=528  [callgraph]
void __fastcall FUN_0085e470(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  (**(code **)(*param_1 + 0x220))(0x41200000);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xee,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7a7e0(3);
    FUN_00b895d0();
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0xef,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  case 4:
    FUN_00aa4080(0xf0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0085e61d;
  case 5:
LAB_0085e61d:
    (**(code **)(*param_1 + 0x318))();
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a92f90();
    if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0) ||
       (iVar2 = FUN_00e36060(0), iVar2 != 0)) {
      FUN_00a8caf0(0x100056,0,0,0);
      return;
    }
  default:
    goto switchD_0085e4b0_default;
  }
  (**(code **)(*param_1 + 0x318))();
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a952e0(0,0x41b00000);
  if ((iVar2 != 0) && (iVar2 = FUN_00b7a840(), iVar2 != 0)) {
    FUN_00a8caf0(0x100059,2,0,0);
  }
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0) ||
     (iVar2 = FUN_00e36060(0), iVar2 != 0)) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_0085e4b0_default:
  return;
}

// 0085E790  FUN_0085e790  size=462  [callgraph]
void __fastcall FUN_0085e790(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x100054,0,0,0);
  }
  if ((param_1[0x187] != 0) &&
     ((iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0 || (iVar1 = FUN_0085d070(), iVar1 == 0)
      ))) {
    iVar1 = FUN_00a8c760(1);
    if (iVar1 != 0) {
      if (((param_1[0x150c] != 0) && (param_1[0x150b] != 0)) &&
         ((*(byte *)(param_1 + 0x995) & 8) == 0)) {
        param_1[0x95b] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x100019,0,0,0);
        return;
      }
      if (((*(byte *)(param_1 + 0x995) & 2) == 0) &&
         (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
        param_1[0x95a] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x100017,0,0,0);
        return;
      }
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) {
      if (((DAT_01bea090 & 0x400) == 0) &&
         (((param_1[0x33f] & param_1[0x386]) != 0 && (param_1[0x987] < 2)))) {
        param_1[0xb17] = -0x40800000;
        param_1[0x987] = param_1[0x987] + 1;
        param_1[0x96d] = 0;
        param_1[0x96f] = 0;
        FUN_00a8caf0(0x100004,0,0,0);
        return;
      }
      param_1[0x96d] = 0;
      param_1[0x96f] = 0;
      param_1[0x96e] = 0;
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) {
      if (((*(byte *)(param_1 + 0x995) & 0x80) == 0) &&
         ((DAT_01bea090 & 0x400) == 0 && (param_1[0x33f] & param_1[0x392]) != 0)) {
        FUN_00a8caf0(0x10000c,0,0,0);
      }
    }
  }
  return;
}

// 0085E960  FUN_0085e960  size=392  [callgraph]
void __fastcall FUN_0085e960(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x10005d,0,0,0);
  }
  if ((param_1[0x187] != 0) && (iVar1 = FUN_0085d070(), iVar1 == 0)) {
    iVar1 = FUN_00a8c760(1);
    if (iVar1 != 0) {
      if (((param_1[0x150c] != 0) && (param_1[0x150b] != 0)) &&
         ((*(byte *)(param_1 + 0x995) & 8) == 0)) {
        param_1[0x95b] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x100019,0,0,0);
        return;
      }
      if (((*(byte *)(param_1 + 0x995) & 2) == 0) &&
         (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
        param_1[0x95a] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x100017,0,0,0);
        return;
      }
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) {
      if (((DAT_01bea090 & 0x400) == 0) &&
         (((param_1[0x33f] & param_1[0x386]) != 0 && (param_1[0x987] < 2)))) {
        param_1[0xb17] = -0x40800000;
        param_1[0x987] = param_1[0x987] + 1;
        param_1[0x96d] = 0;
        param_1[0x96f] = 0;
        FUN_00a8caf0(0x100004,0,0,0);
        return;
      }
      param_1[0x96d] = 0;
      param_1[0x96f] = 0;
      param_1[0x96e] = 0;
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) {
      FUN_0085d8b0(1);
    }
  }
  return;
}

// 0085EAF0  FUN_0085eaf0  size=462  [callgraph]
void __fastcall FUN_0085eaf0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x100054,0,0,0);
  }
  if ((param_1[0x187] != 0) &&
     ((iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0 || (iVar1 = FUN_0085d070(), iVar1 == 0)
      ))) {
    iVar1 = FUN_00a8c760(1);
    if (iVar1 != 0) {
      if (((param_1[0x150c] != 0) && (param_1[0x150b] != 0)) &&
         ((*(byte *)(param_1 + 0x995) & 8) == 0)) {
        param_1[0x95b] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x100019,0,0,0);
        return;
      }
      if (((*(byte *)(param_1 + 0x995) & 2) == 0) &&
         (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
        param_1[0x95a] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x100017,0,0,0);
        return;
      }
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) {
      if (((DAT_01bea090 & 0x400) == 0) &&
         (((param_1[0x33f] & param_1[0x386]) != 0 && (param_1[0x987] < 2)))) {
        param_1[0xb17] = -0x40800000;
        param_1[0x987] = param_1[0x987] + 1;
        param_1[0x96d] = 0;
        param_1[0x96f] = 0;
        FUN_00a8caf0(0x100004,0,0,0);
        return;
      }
      param_1[0x96d] = 0;
      param_1[0x96f] = 0;
      param_1[0x96e] = 0;
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) {
      if (((*(byte *)(param_1 + 0x995) & 0x80) == 0) &&
         ((DAT_01bea090 & 0x400) == 0 && (param_1[0x33f] & param_1[0x392]) != 0)) {
        FUN_00a8caf0(0x10000c,0,0,0);
      }
    }
  }
  return;
}

// 0085ECC0  FUN_0085ecc0  size=392  [callgraph]
void __fastcall FUN_0085ecc0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x100060,0,0,0);
  }
  if ((param_1[0x187] != 0) && (iVar1 = FUN_0085d070(), iVar1 == 0)) {
    iVar1 = FUN_00a8c760(1);
    if (iVar1 != 0) {
      if (((param_1[0x150c] != 0) && (param_1[0x150b] != 0)) &&
         ((*(byte *)(param_1 + 0x995) & 8) == 0)) {
        param_1[0x95b] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x100019,0,0,0);
        return;
      }
      if (((*(byte *)(param_1 + 0x995) & 2) == 0) &&
         (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
        param_1[0x95a] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x100017,0,0,0);
        return;
      }
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) {
      if (((DAT_01bea090 & 0x400) == 0) &&
         (((param_1[0x33f] & param_1[0x386]) != 0 && (param_1[0x987] < 2)))) {
        param_1[0xb17] = -0x40800000;
        param_1[0x987] = param_1[0x987] + 1;
        param_1[0x96d] = 0;
        param_1[0x96f] = 0;
        FUN_00a8caf0(0x100004,0,0,0);
        return;
      }
      param_1[0x96d] = 0;
      param_1[0x96f] = 0;
      param_1[0x96e] = 0;
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) {
      FUN_0085d8b0(1);
    }
  }
  return;
}

// 00860A80  FUN_00860a80  size=42  [callgraph]
uint FUN_00860a80(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9c3c;
  (**(code **)(*param_1 + 4))(&DAT_01be9c3c);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00860B50  FUN_00860b50  size=42  [callgraph]
uint FUN_00860b50(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35260;
  (**(code **)(*param_1 + 4))(&DAT_01b35260);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00860B80  FUN_00860b80  size=42  [callgraph]
uint FUN_00860b80(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9ca8;
  (**(code **)(*param_1 + 4))(&DAT_01be9ca8);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00860C00  FUN_00860c00  size=35  [callgraph]
void FUN_00860c00(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

// 00860DE0  FUN_00860de0  size=89  [callgraph]
undefined4 __fastcall FUN_00860de0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_01885d68 != 1) {
    iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    if (*(int *)(iVar1 + 4) == 0) {
      if (((*(int *)(iVar1 + 8) == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd72c0();
      }
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    return param_1;
  }
  return param_1;
}

// 00860E40  FUN_00860e40  size=70  [callgraph]
void FUN_00860e40(void)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    piVar1 = (int *)(iVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
      return;
    }
  }
  return;
}

// 00860F40  FUN_00860f40  size=124  [callgraph]
float * FUN_00860f40(float *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_50 [24];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  iVar1 = FUN_00a12290(param_3);
  *param_1 = *(float *)(iVar1 + 0x40);
  param_1[1] = *(float *)(iVar1 + 0x44);
  param_1[2] = *(float *)(iVar1 + 0x48);
  param_1[3] = *(float *)(iVar1 + 0x4c);
  iVar1 = FUN_00a12290(0xffffffff);
  D3DXMatrixInverse(local_50,0,iVar1 + 0x10);
  D3DXVec3TransformNormal(param_1,param_1,&stack0xffffffa4);
  *param_1 = *param_1 + fStack_38;
  param_1[1] = param_1[1] + fStack_34;
  param_1[2] = param_1[2] + fStack_30;
  return param_1;
}

// 00861020  Pl1400::vf50  size=855  [class]
void __fastcall Pl1400::vf50(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 *puStack_b4;
  undefined1 *puStack_b0;
  float *pfStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [12];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined1 auStack_5c [12];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_38;
  float fStack_34;
  
  fStack_a4 = 1.2311769e-38;
  PlBaseDLC::vf50();
  *(undefined4 *)(param_1 + 0x4100) = *(undefined4 *)(param_1 + 0x4110);
  fStack_a4 = 2.52234e-44;
  *(undefined4 *)(param_1 + 0x4104) = *(undefined4 *)(param_1 + 0x4114);
  *(undefined4 *)(param_1 + 0x4108) = *(undefined4 *)(param_1 + 0x4118);
  *(undefined4 *)(param_1 + 0x410c) = *(undefined4 *)(param_1 + 0x411c);
  *(undefined4 *)(param_1 + 0x40e0) = *(undefined4 *)(param_1 + 0x40f0);
  *(undefined4 *)(param_1 + 0x40e4) = *(undefined4 *)(param_1 + 0x40f4);
  *(undefined4 *)(param_1 + 0x40e8) = *(undefined4 *)(param_1 + 0x40f8);
  *(undefined4 *)(param_1 + 0x40ec) = *(undefined4 *)(param_1 + 0x40fc);
  *(undefined4 *)(param_1 + 0x4140) = *(undefined4 *)(param_1 + 0x4150);
  *(undefined4 *)(param_1 + 0x4144) = *(undefined4 *)(param_1 + 0x4154);
  *(undefined4 *)(param_1 + 0x4148) = *(undefined4 *)(param_1 + 0x4158);
  *(undefined4 *)(param_1 + 0x414c) = *(undefined4 *)(param_1 + 0x415c);
  *(undefined4 *)(param_1 + 0x4120) = *(undefined4 *)(param_1 + 0x4130);
  *(undefined4 *)(param_1 + 0x4124) = *(undefined4 *)(param_1 + 0x4134);
  *(undefined4 *)(param_1 + 0x4128) = *(undefined4 *)(param_1 + 0x4138);
  *(undefined4 *)(param_1 + 0x412c) = *(undefined4 *)(param_1 + 0x413c);
  fStack_a8 = 1.2312051e-38;
  iVar1 = FUN_00a12290();
  local_90 = *(undefined4 *)(iVar1 + 0x40);
  fStack_a4 = -NAN;
  local_8c = *(undefined4 *)(iVar1 + 0x44);
  local_88 = *(undefined4 *)(iVar1 + 0x48);
  local_84 = *(undefined4 *)(iVar1 + 0x4c);
  fStack_a8 = 1.2312103e-38;
  iVar1 = FUN_00a12290();
  fStack_a4 = (float)(iVar1 + 0x10);
  fStack_a8 = 0.0;
  pfStack_ac = &local_50;
  puStack_b0 = (undefined1 *)0x861132;
  D3DXMatrixInverse();
  puStack_b0 = auStack_5c;
  puStack_b4 = &uStack_9c;
  D3DXVec3TransformNormal();
  fStack_a8 = fStack_38 + fStack_a8;
  fStack_a4 = fStack_34 + fStack_a4;
  iVar1 = FUN_00a12290(0x16);
  uStack_98 = *(undefined4 *)(iVar1 + 0x40);
  uStack_94 = *(undefined4 *)(iVar1 + 0x44);
  local_90 = *(undefined4 *)(iVar1 + 0x48);
  local_8c = *(undefined4 *)(iVar1 + 0x4c);
  iVar1 = FUN_00a12290(0xffffffff);
  fVar2 = (float)(iVar1 + 0x10);
  D3DXMatrixInverse();
  D3DXVec3TransformNormal();
  puStack_b0 = (undefined1 *)(local_50 + (float)puStack_b0);
  pfStack_ac = (float *)(fStack_4c + (float)pfStack_ac);
  fStack_a8 = fStack_48 + fStack_a8;
  iVar1 = FUN_00a12290(9);
  uStack_9c = *(undefined4 *)(iVar1 + 0x44);
  uStack_98 = *(undefined4 *)(iVar1 + 0x48);
  uStack_94 = *(undefined4 *)(iVar1 + 0x4c);
  iVar1 = FUN_00a12290(0xffffffff);
  iVar1 = iVar1 + 0x10;
  D3DXMatrixInverse();
  D3DXVec3TransformNormal();
  puStack_b4 = (undefined4 *)(fStack_64 + (float)puStack_b4);
  puStack_b0 = (undefined1 *)(fStack_60 + (float)puStack_b0);
  iVar3 = FUN_00a12290(0xd);
  fStack_a8 = *(float *)(iVar3 + 0x40);
  fStack_a4 = *(float *)(iVar3 + 0x44);
  uStack_9c = *(undefined4 *)(iVar3 + 0x4c);
  iVar3 = FUN_00a12290(0xffffffff);
  iVar3 = iVar3 + 0x10;
  D3DXMatrixInverse(&uStack_98);
  D3DXVec3TransformNormal(&puStack_b4,&puStack_b4,&fStack_a4);
  *(undefined4 *)(param_1 + 0x4110) = 0;
  *(int *)(param_1 + 0x4114) = iVar3;
  *(float ***)(param_1 + 0x4118) = &pfStack_ac;
  *(float ***)(param_1 + 0x411c) = &pfStack_ac;
  *(undefined4 **)(param_1 + 0x40f0) = &local_8c;
  *(float **)(param_1 + 0x40f4) = &fStack_80;
  *(undefined4 *)(param_1 + 0x40f8) = 0;
  *(int *)(param_1 + 0x40fc) = iVar1;
  *(float **)(param_1 + 0x4150) = &fStack_a4;
  *(float **)(param_1 + 0x4154) = &fStack_a4;
  *(undefined1 **)(param_1 + 0x4158) = auStack_74;
  *(float **)(param_1 + 0x415c) = &fStack_68;
  *(float *)(param_1 + 0x4130) = fStack_80 + 0.0;
  *(float *)(param_1 + 0x4134) = fStack_7c + fVar2;
  *(float *)(param_1 + 0x4138) = fStack_78 + fStack_68 + (float)&uStack_9c;
  *(undefined4 **)(param_1 + 0x413c) = puStack_b4;
  return;
}

// 00861380  FUN_00861380  size=554  [between]
void __fastcall FUN_00861380(int *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0xeda] = 1;
  param_1[0x151a] = 1;
  param_1[0x997] = 1;
  (*pcVar1)();
  switch(param_1[0x187]) {
  case 0:
    uVar2 = 0xb;
    if (param_1[0x2dd] != 0) {
      uVar2 = 7;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0085db00(1);
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    fVar4 = (float10)FUN_00a95c80(0);
    if (fVar4 < (float10)2.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    uVar2 = 0xc;
    if (param_1[0x2dd] != 0) {
      uVar2 = 8;
    }
    FUN_00aa4080(uVar2,0,0x3d088889,0x3f800000,0x3c000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    break;
  case 4:
    if (param_1[0x2dd] == 0) {
      iVar3 = FUN_00b95e60();
      uVar6 = 0;
      if (iVar3 == 2) {
        uVar5 = 0xd;
      }
      else {
        uVar5 = 0xe;
      }
    }
    else {
      iVar3 = FUN_00b95e60();
      uVar6 = 0xbf800000;
      if (iVar3 == 2) {
        uVar5 = 9;
      }
      else {
        uVar5 = 10;
      }
    }
    FUN_00aa4080(uVar5,0,0x3e2aaaab,0x3f800000,0x8000000,uVar6,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x308);
  param_1[0x23d] = param_1[0x34c];
  (*pcVar1)(0x3e99999a,0x3ae4c388,0x3f060a92,0);
  return;
}

// 008615D0  FUN_008615d0  size=1003  [between]
void __fastcall FUN_008615d0(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  undefined *puVar6;
  int iStack_38;
  float fStack_34;
  int iStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [28];
  
  (**(code **)(*param_1 + 0x318))();
  iStack_38 = 0x3d888889;
  bVar2 = false;
  param_1[0x991] = 0;
  param_1[0xaf4] = 0x40800000;
  param_1[0x998] = 1;
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  iVar3 = param_1[0x4a7];
  if (param_1[0x187] == 0) {
    if (param_1[0x9a4] != 0) {
      iStack_38 = 0;
    }
    param_1[0x9a4] = 0;
    FUN_0085db80();
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    param_1[0x408] = 0;
    param_1[0x409] = 0;
    param_1[0x40a] = 0;
    FUN_00aa4080(0x43,0,iStack_38,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x995] = param_1[0x995] | 0x80;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00861931;
  if ((iVar3 == 0) || (62500.0 < (float)param_1[0x34a])) {
    iVar3 = param_1[0x463];
    FUN_00e26e90();
    *(undefined4 *)(iVar3 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xec) = 0x3f800000;
  }
  else {
    FUN_00c15010(auStack_20);
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
LAB_00861707:
      piVar4 = (int *)0x0;
    }
    else {
      FUN_00a81330();
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 == (int *)0x0) goto LAB_00861707;
      puVar6 = &DAT_01be9c3c;
      (**(code **)(*piVar4 + 4))(&DAT_01be9c3c);
      iVar3 = FUN_00dd6d80(puVar6);
      piVar4 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
    }
    iStack_30 = param_1[0x10];
    fStack_2c = (float)param_1[0x11];
    iStack_28 = param_1[0x12];
    iStack_24 = param_1[0x13];
    if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0x1d8))(), iVar3 != 0)) {
      fStack_2c = fStack_2c + 1.0;
    }
    thunk_FUN_00dde510(&fStack_34,&iStack_38,auStack_20,&iStack_30);
    if (param_1[0x250] == 0) {
      param_1[0x25] = iStack_38;
      param_1[0x250] = 1;
      param_1[0x24] = (int)(fStack_34 * -1.0);
    }
    else {
      FUN_00a8db10(param_1 + 0x25,param_1[0x25],iStack_38,0x3dcccccd,0x3ae4c388,
                   (float)param_1[0x244] * 0.05235988);
      FUN_00a8db10(param_1 + 0x24,param_1[0x24],fStack_34 * -1.0,0x3dcccccd,0x3ae4c388,
                   (float)param_1[0x244] * 0.05235988);
    }
    pfVar5 = (float *)(param_1 + 0x24);
    bVar2 = true;
    if (*pfVar5 < -1.2217305) {
      *pfVar5 = -1.2217305;
    }
    if (1.3962634 < *pfVar5) {
      *pfVar5 = 1.3962634;
    }
    iVar3 = param_1[0x463];
    FUN_00e26e90();
    *(undefined4 *)(iVar3 + 0xe4) = 0x3f99999a;
    *(undefined4 *)(iVar3 + 0xe8) = 0x3f99999a;
    *(undefined4 *)(iVar3 + 0xec) = 0x3f99999a;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
     (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
    param_1[0x24] = 0;
    param_1[0x224] = 0;
    param_1[0x225] = 0x3dcccccd;
    param_1[0x226] = 0;
    (**(code **)(*param_1 + 0x314))();
    FUN_00a8caf0(0x100005,0,0,0);
  }
LAB_00861931:
  if ((810000.0 < (float)param_1[0x34a]) && (!bVar2)) {
    pcVar1 = *(code **)(*param_1 + 0x308);
    param_1[0x23d] = param_1[0x34c];
    if (param_1[0x250] == 0) {
      (*pcVar1)(0x3e99999a,0x3b64c388,0x3f060a92,0);
      return;
    }
    (*pcVar1)(0x3d75c28f,0x3ae4c388,0x3c8efa35,0);
  }
  return;
}

// 008619C0  FUN_008619c0  size=426  [between]
void __fastcall FUN_008619c0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    param_1[0x248] = param_1[0x34c];
    param_1[0x250] = 1;
    uVar2 = 0x40;
    if (param_1[0x2dd] != 0) {
      uVar2 = 0x41;
    }
    FUN_00aa4080(uVar2,0,0x3dcccccd,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x23d] = param_1[0x25];
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x988] = 0;
    (*pcVar1)(0x41200000);
    param_1[0x251] = 0;
    param_1[0x991] = 0;
    FUN_0085db00(1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar3 = FUN_00a8c760(5);
  if (((iVar3 != 0) && (iVar3 = FUN_00b7b200(), iVar3 != 0)) && (iVar3 = FUN_00b86410(), iVar3 != 0)
     ) {
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
  }
  param_1[0x469] = 1;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
     (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00861B70  FUN_00861b70  size=302  [between]
void __fastcall FUN_00861b70(int *param_1)

{
  int iVar1;
  
  FUN_00e26e90();
  FUN_00e22f10(0);
  (**(code **)(*param_1 + 0x220))(0x41200000);
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    FUN_00aa4080(0x145,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    DAT_01dc08d4 = 0;
    DAT_01dc08bc = 0;
    DAT_01dc08c8 = 0;
    FUN_00b7aa80();
    FUN_00b895d0();
    FUN_00a81330();
    FUN_00b96b30();
    param_1[0x9b5] = 0;
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    FUN_00db3e80(0x41700000,0,&DAT_01bea1d0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  (**(code **)(*param_1 + 0x318))();
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00d5ea40("PC30_RAY_HEAD",1,0);
  }
  return;
}

// 00862060  FUN_00862060  size=85  [between]
void __fastcall FUN_00862060(int *param_1)

{
  int iVar1;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  param_1[0x9b6] = 1;
  param_1[0x2e5] = 1;
  iVar1 = (**(code **)(*param_1 + 0x34c))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  FUN_0085d070();
  return;
}

// 008620C0  FUN_008620c0  size=85  [between]
void __fastcall FUN_008620c0(int *param_1)

{
  int iVar1;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  param_1[0x9b6] = 1;
  param_1[0x2e5] = 1;
  iVar1 = (**(code **)(*param_1 + 0x34c))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  FUN_0085d070();
  return;
}

// 00862120  FUN_00862120  size=278  [between]
void __fastcall FUN_00862120(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if (param_1[0x187] != 0) {
    iVar2 = FUN_00b7f610();
    if ((iVar2 == 9) && ((param_1[0x33e] & param_1[0x392]) != 0)) {
      FUN_00a8caf0(0x100048,0,0,0);
      return;
    }
    if (((param_1[0x33e] & param_1[0x38f]) == 0) ||
       (((DAT_01bea090 & 0x1000000) != 0 || ((DAT_01bea090 & 0x800000) != 0)))) {
      FUN_00a8caf0(0x100047,0,0,0);
    }
    else if (90000.0 < (float)param_1[0x34a]) {
      iVar2 = FUN_00416d50(7);
      if ((iVar2 == 0) && (810000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100046,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100045,0,0,0);
      return;
    }
  }
  return;
}

// 00862240  FUN_00862240  size=278  [between]
void __fastcall FUN_00862240(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if (param_1[0x187] != 0) {
    iVar2 = FUN_00b7f610();
    if ((iVar2 == 9) && ((param_1[0x33e] & param_1[0x392]) != 0)) {
      FUN_00a8caf0(0x100048,0,0,0);
      return;
    }
    if (((param_1[0x33e] & param_1[0x38f]) == 0) ||
       (((DAT_01bea090 & 0x1000000) != 0 || ((DAT_01bea090 & 0x800000) != 0)))) {
      FUN_00a8caf0(0x100047,0,0,0);
    }
    else if (90000.0 < (float)param_1[0x34a]) {
      iVar2 = FUN_00416d50(7);
      if ((iVar2 == 0) && (810000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100046,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100045,0,0,0);
      return;
    }
  }
  return;
}

// 00862360  FUN_00862360  size=377  [between]
void __fastcall FUN_00862360(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if (param_1[0x187] != 0) {
    iVar2 = FUN_00b7f610();
    if ((iVar2 == 9) && ((param_1[0x33e] & param_1[0x392]) != 0)) {
      FUN_00a8caf0(0x100048,0,0,0);
      return;
    }
    if ((((param_1[0x33e] & param_1[0x38f]) == 0) || ((DAT_01bea090 & 0x1000000) != 0)) ||
       ((DAT_01bea090 & 0x800000) != 0)) {
      FUN_00a8caf0(0x100047,0,0,0);
      return;
    }
    iVar2 = param_1[0x187];
    if (iVar2 < 4) {
      if ((float)param_1[0x34a] <= 62500.0) {
        param_1[0x187] = 4;
        return;
      }
      iVar3 = FUN_00416d50(7);
      if (iVar3 == 0) {
        if (((iVar2 != 1) ||
            (iVar2 = FUN_00a959f0(0), (float)iVar2 < 10.0 == ((float)iVar2 == 10.0))) ||
           ((float)param_1[0x34a] <= 810000.0)) {
          if (810000.0 < (float)param_1[0x34a]) {
            FUN_00a8caf0(0x100046,2,0,0);
            return;
          }
        }
        else {
          FUN_00a8caf0(0x100046,0,0,0);
        }
      }
    }
  }
  return;
}

// 008624E0  FUN_008624e0  size=265  [between]
void __fastcall FUN_008624e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if (param_1[0x187] != 0) {
    iVar2 = FUN_00b7f610();
    if ((iVar2 == 9) && ((param_1[0x33e] & param_1[0x392]) != 0)) {
      FUN_00a8caf0(0x100048,0,0,0);
      return;
    }
    if (((param_1[0x33e] & param_1[0x38f]) == 0) ||
       (((DAT_01bea090 & 0x1000000) != 0 || ((DAT_01bea090 & 0x800000) != 0)))) {
      FUN_00a8caf0(0x100047,0,0,0);
    }
    else if (param_1[0x187] < 4) {
      if ((float)param_1[0x34a] <= 62500.0) {
        param_1[0x187] = 4;
        return;
      }
      if ((float)param_1[0x34a] <= 722500.0) {
        FUN_00a8caf0(0x100045,2,0,0);
        return;
      }
    }
  }
  return;
}

// 008625F0  FUN_008625f0  size=379  [between]
void __fastcall FUN_008625f0(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  iVar4 = (*pcVar1)();
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if (param_1[0x187] != 0) {
    uVar2 = param_1[0x33e];
    if (((((param_1[0x38f] & uVar2) == 0) || (param_1[0x9e5] != 0)) ||
        ((DAT_01bea090._3_1_ & 1) != 0)) || (iVar4 = FUN_00416d50(8), iVar4 != 0)) {
      FUN_00a8caf0(0x100047,0,0,0);
    }
    else {
      if ((param_1[0x392] & uVar2) == 0) {
        FUN_00a8caf0(0x100049,0,0,0);
      }
      fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] - 1.5707964);
      fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] + 1.5707964);
      fVar5 = (float10)FUN_00ddba30((float)param_1[0x34c] - (float)fVar5);
      fVar6 = (float10)FUN_00ddba30((float)param_1[0x34c] - (float)fVar6);
      fVar3 = (float)fVar5 * (float)fVar5;
      if (fVar3 < 0.7615436 != (fVar3 == 0.7615436)) {
        FUN_00a8caf0(0x10004b,0,0,0);
        fVar6 = (float10)(float)fVar6;
      }
      if (fVar6 * fVar6 < (float10)0.7615436 != (fVar6 * fVar6 == (float10)0.7615436)) {
        FUN_00a8caf0(0x10004c,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00862770  FUN_00862770  size=506  [between]
void __fastcall FUN_00862770(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  FUN_00b7d8b0();
  uVar4 = 0x3c888889;
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if (param_1[0x187] != 0) {
    if (((((param_1[0x33e] & param_1[0x38f]) == 0) || (param_1[0x9e5] != 0)) ||
        ((DAT_01bea090._3_1_ & 1) != 0)) || (iVar2 = FUN_00416d50(8), iVar2 != 0)) {
      FUN_00a8caf0(0x100047,0,0,0);
      return;
    }
    fVar5 = (float)param_1[0x248];
    if ((!NAN(fVar5) && 60.0 < fVar5 != (fVar5 == 60.0)) && (iVar2 = FUN_00a8c760(0xb), iVar2 != 0))
    {
      if ((param_1[0x33e] & param_1[0x392]) == 0) {
        FUN_00a8caf0(0x100049,0,0,0);
      }
      fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] - 1.5707964);
      fVar5 = (float)fVar3;
      fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] + 1.5707964,uVar4,fVar5);
      fVar6 = (float)fVar3;
      if ((float)param_1[0x34a] <= 90000.0) {
        FUN_00a8caf0(0x10004a,0,0,0);
        return;
      }
      fVar3 = (float10)FUN_00ddba30((float)param_1[0x34c] - fVar5,uVar4,fVar5,fVar6);
      fVar5 = (float)fVar3;
      fVar3 = (float10)FUN_00ddba30((float)param_1[0x34c] - fVar6);
      fVar6 = (float)fVar3;
      if ((param_1[0x186] == 0x10004c) &&
         (fVar5 * fVar5 < 0.7615436 != (fVar5 * fVar5 == 0.7615436))) {
        FUN_00a8caf0(0x10004b,0,0,0);
        fVar3 = (float10)fVar6;
      }
      if ((param_1[0x186] == 0x10004b) &&
         (fVar3 * fVar3 < (float10)0.7615436 != (fVar3 * fVar3 == (float10)0.7615436))) {
        FUN_00a8caf0(0x10004c,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00862970  FUN_00862970  size=195  [between]
void __fastcall FUN_00862970(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = (**(code **)(*param_1 + 0x34c))();
  if (iVar1 == 0) {
    FUN_00a8caf0(0x100030,0,0,0);
    return;
  }
  if (((DAT_01bea094 & 0x40000000) == 0) && (90000.0 < (float)param_1[0x34a])) {
    FUN_00a8caf0(0x100032,0,0,0);
    return;
  }
  if ((DAT_01bea094 & 0x100000) != 0) {
    if (200.0 < (float)param_1[0x344]) {
      FUN_00a8caf0(0x100033,0,0,0);
      return;
    }
    if ((float)param_1[0x344] < -200.0) {
      FUN_00a8caf0(0x100034,0,0,0);
    }
  }
  return;
}

// 00862A40  FUN_00862a40  size=189  [between]
void __fastcall FUN_00862a40(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = (**(code **)(*param_1 + 0x34c))();
  if (iVar1 == 0) {
    FUN_00a8caf0(0x100030,0,0,0);
    return;
  }
  iVar1 = param_1[0x187];
  if (((iVar1 != 1) || (62500.0 <= (float)param_1[0x34a])) &&
     ((iVar1 != 3 || (62500.0 <= (float)param_1[0x34a])))) {
    if (iVar1 == 5) {
      if ((float)param_1[0x34a] < 62500.0) goto LAB_00862a98;
      if ((float)param_1[0x34a] < 722500.0) {
        param_1[0x187] = 2;
        return;
      }
    }
    return;
  }
LAB_00862a98:
  param_1[0x187] = 6;
  FUN_00a8caf0(0x100031,0,0,0);
  return;
}

// 00862B00  FUN_00862b00  size=2132  [between]
void __fastcall FUN_00862b00(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined2 uVar6;
  float10 fVar7;
  undefined4 uVar8;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = (float)param_1[0x342];
  local_1c = (float)param_1[0x343];
  local_18 = 0.0;
  bVar4 = 40000.0 <= local_1c * local_1c + local_20 * local_20;
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x11b,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    if ((DAT_01bea094 & 0x100000) == 0) {
      FUN_00aa4080(0x11b,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    }
    else {
      FUN_00a9f4c0("COMU WALK",0x3e088889,0x8000000,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x119,0x3e088889,0x8000000);
      FUN_00a9f600(0xffffffff,0,0,0,1,0x11b,0x3e088889,0x8000000);
      FUN_00a9f600(0xffffffff,0,0,0,0xffffffff,0x11c,0x3e088889,0x8000000);
      FUN_00a9f600(0xffffffff,0,1,0,0,0x11e,0x3e088889,0x8000000);
      FUN_00a9f600(0xffffffff,0,0xffffffff,0,0,0x11d,0x3e088889,0x8000000);
    }
    if ((DAT_01bea094 & 0x100000) != 0) {
      uVar8 = 0;
      FUN_00a92f90(0);
      FUN_0041cc40(uVar8);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24a] = 0;
    param_1[0x24b] = 0;
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((DAT_01bea094 & 0x100000) != 0) {
      fStack_30 = 0.0;
      fStack_2c = 0.0;
      fStack_28 = 0.0;
      if (bVar4) {
        fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&fStack_30,&local_20);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_28 = 0.0;
          fStack_2c = 1.0;
          fStack_30 = 0.0;
        }
        fStack_30 = fStack_30 * 1000.0;
        fStack_2c = fStack_2c * 1000.0;
        fStack_28 = fStack_28 * 1000.0;
        fStack_24 = fStack_24 * 1000.0;
      }
      fVar1 = (fStack_30 * 0.001 - (float)param_1[0x24a]) * 0.3 + (float)param_1[0x24a];
      param_1[0x24a] = (int)fVar1;
      fVar2 = (fStack_2c * -0.001 - (float)param_1[0x24b]) * 0.3 + (float)param_1[0x24b];
      param_1[0x24b] = (int)fVar2;
      FUN_00a947e0(0,fVar1,0,fVar2);
      goto switchD_00862b68_default;
    }
    goto LAB_0086330f;
  case 2:
    if ((DAT_01bea094 & 0x100000) == 0) {
      FUN_00aa4080(0x121,0,0,0x3f800000,0,0,0x3f800000);
    }
    else {
      FUN_00a9f4c0("COMU WALK",0x3e088889,0,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x119,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,0,0,1,0x121,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,0,0,0xffffffff,0x123,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,1,0,0,0x125,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,0xffffffff,0,0,0x124,0x3e088889,0);
    }
    if ((DAT_01bea094 & 0x100000) != 0) {
      uVar8 = 0;
      FUN_00a92f90(0);
      FUN_0041cc40(uVar8);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f800000;
    param_1[0x249] = 0;
    goto LAB_00862f9a;
  case 3:
LAB_00862f9a:
    if ((float)param_1[0x34a] <= 810000.0) {
      param_1[0x248] = (int)((1.0 - (float)param_1[0x248]) * 0.1 + (float)param_1[0x248]);
      fVar1 = -(float)param_1[0x249];
    }
    else {
      param_1[0x248] = (int)((1.5 - (float)param_1[0x248]) * 0.1 + (float)param_1[0x248]);
      fVar1 = 1.0 - (float)param_1[0x249];
    }
    param_1[0x249] = (int)(fVar1 * 0.1 + (float)param_1[0x249]);
    if ((DAT_01bea094 & 0x100000) != 0) {
      fStack_30 = 0.0;
      fStack_2c = 0.0;
      fStack_28 = 0.0;
      if (bVar4) {
        fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&fStack_30,&local_20);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_28 = 0.0;
          fStack_2c = 1.0;
          fStack_30 = 0.0;
        }
        fStack_30 = fStack_30 * 1000.0;
        fStack_2c = fStack_2c * 1000.0;
        fStack_28 = fStack_28 * 1000.0;
        fStack_24 = fStack_24 * 1000.0;
      }
      fVar2 = (fStack_30 * 0.001 - (float)param_1[0x24a]) * 0.3 + (float)param_1[0x24a];
      param_1[0x24a] = (int)fVar2;
      fVar1 = (fStack_2c * -0.001 - (float)param_1[0x24b]) * 0.3 + (float)param_1[0x24b];
      param_1[0x24b] = (int)fVar1;
      FUN_00a947e0(0,fVar2,0,fVar1);
    }
    break;
  case 4:
    FUN_00aa4080(0x121,0,0x3e088889,0x3f800000,0,0,0x3f800000);
    if ((DAT_01bea094 & 0x100000) != 0) {
      uVar8 = 0;
      FUN_00a92f90(0);
      FUN_0041cc40(uVar8);
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 5:
    break;
  case 6:
    uVar6 = 0x122;
    iVar5 = FUN_00a94ee0(0,0,0x2f);
    if (iVar5 != 0) {
      uVar6 = 0x11f;
    }
    FUN_00aa4080(uVar6,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    if ((DAT_01bea094 & 0x100000) != 0) {
      uVar8 = 0;
      FUN_00a92f90(0);
      FUN_0041cc40(uVar8);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00a8caf0(0x100031,0,0,0);
    }
  default:
    goto switchD_00862b68_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
switchD_00862b68_default:
  if ((DAT_01bea094 & 0x100000) == 0) {
LAB_0086330f:
    pcVar3 = *(code **)(*param_1 + 0x308);
    param_1[0x23d] = param_1[0x34c];
    (*pcVar3)(0x3dcccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  else {
    if ((200.0 < (float)param_1[0x344]) || ((float)param_1[0x344] < -200.0)) {
      fVar1 = (float)param_1[0x344];
      fVar2 = (float)param_1[0xd01];
      fVar7 = (float10)FUN_00da7570();
      fVar7 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] -
                                           fVar7 * (float10)((fVar1 - 200.0) * 0.00125 * fVar2)));
      param_1[0x25] = (int)(float)fVar7;
    }
    if (bVar4) {
      FUN_00b7cf60((float)param_1[0xd00] * (float)param_1[0x244],param_1[0x34c]);
      return;
    }
  }
  return;
}

// 00863380  FUN_00863380  size=251  [between]
void __fastcall FUN_00863380(int *param_1)

{
  float fVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar2 = (**(code **)(*param_1 + 0x34c))();
  if (iVar2 == 0) {
    FUN_00a8caf0(0x100030,0,0,0);
    return;
  }
  if (param_1[0x186] == 0x100033) {
    if ((float)param_1[0x344] <= 190.0) {
      FUN_00a8caf0(0x100031,0,0,0);
    }
    if (-200.0 <= (float)param_1[0x344]) {
LAB_00863448:
      if (((DAT_01bea094 & 0x40000000) == 0) && (90000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100032,0,0,0);
      }
      return;
    }
  }
  else {
    fVar1 = (float)param_1[0x344];
    if (!NAN(fVar1) && -190.0 < fVar1 != (fVar1 == -190.0)) {
      FUN_00a8caf0(0x100031,0,0,0);
    }
    fVar1 = (float)param_1[0x344];
    if (NAN(fVar1) || 200.0 < fVar1 == (fVar1 == 200.0)) goto LAB_00863448;
  }
  FUN_00a8caf0(0x100034,0,0,0);
  return;
}

// 008635C0  FUN_008635c0  size=742  [between]
undefined4 __thiscall FUN_008635c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  *(undefined4 *)(param_1 + 0x2680) = 0;
  if ((DAT_01bea090 & 0x800000) != 0) {
    return 0;
  }
  uVar1 = FUN_00e678d0(2,0x444,0xffffffff);
  iVar2 = FUN_00e7a6e0(uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  bVar4 = true;
  if ((param_2[4] != 0) || (param_2[6] != 0)) {
    iVar2 = FUN_00a8c760(1);
    bVar4 = iVar2 != 0;
    iVar2 = FUN_00a8c760(0x18);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x39e0) != 0)) {
      bVar4 = true;
    }
  }
  iVar2 = FUN_00a8c760(0x22);
  bVar5 = param_2[7] == 0;
  if (param_2[3] == 0) {
LAB_008636d6:
    if (!bVar4) goto LAB_008636da;
LAB_008636e0:
    if (*(int *)(param_1 + 0xe70) != 0) {
      *(undefined4 *)(param_1 + 0xe70) = 0;
      FUN_00a8caf0(0x10001b,0,0,0);
      *(undefined4 *)(param_1 + 0x2644) = 0;
      return 1;
    }
  }
  else {
    if (bVar4) {
      if (((((*(uint *)(param_1 + 0xcf8) & *(uint *)(param_1 + 0xe3c)) != 0) ||
           (*(int *)(param_1 + 0x25ac) != 0)) && (bVar5)) && (iVar3 = FUN_0085c910(), iVar3 != 0)) {
        *(undefined4 *)(param_1 + 0x2644) = 0;
        *(undefined4 *)(param_1 + 0x25ac) = 0;
        *(undefined4 *)(param_1 + 0x256c) = 0;
        *(undefined4 *)(param_1 + 0x2568) = 0;
        goto LAB_008636b7;
      }
      goto LAB_008636d6;
    }
LAB_008636da:
    if (iVar2 != 0) goto LAB_008636e0;
  }
  if (bVar4) {
    if ((*(int *)(param_1 + 0x25f8) != 0) &&
       (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe24)) != 0 ||
        (*(int *)(param_1 + 0x256c) != 0)))) {
      uVar1 = 0x100012;
LAB_00863768:
      *(undefined4 *)(param_1 + 0x263c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2628) = 0;
      *(undefined4 *)(param_1 + 0x2620) = 0;
      *(undefined4 *)(param_1 + 0x2568) = 0;
      *(undefined4 *)(param_1 + 0x25f4) = 0;
      *(undefined4 *)(param_1 + 0x25f8) = 0;
      FUN_00a8caf0(uVar1,0,0,0);
      *(undefined4 *)(param_1 + 0x2628) = 0;
      *(undefined4 *)(param_1 + 0x2644) = 0;
      return 1;
    }
    if ((*(int *)(param_1 + 0x25f4) != 0) &&
       (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe24)) != 0 ||
        (*(int *)(param_1 + 0x256c) != 0)))) {
      uVar1 = 0x100013;
      goto LAB_00863768;
    }
  }
  if ((((param_2[9] != 0) && (bVar4)) && (iVar2 = FUN_0085c530(), iVar2 != 0)) && (bVar5)) {
    if (param_2[1] != 0) {
      *(undefined4 *)(param_1 + 0x2628) = 0;
    }
    *(undefined4 *)(param_1 + 0x256c) = 0;
    *(undefined4 *)(param_1 + 0x2630) = 0;
    if ((param_2[2] != 0) &&
       (*(undefined4 *)(param_1 + 0x263c) = 0xffffffff, 3 < *(int *)(param_1 + 0x2628))) {
      *(undefined4 *)(param_1 + 0x2628) = 0;
      *(undefined4 *)(param_1 + 0x263c) = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x5430) = 0;
    FUN_00a8caf0(0x100011,0,0,0);
    *(undefined4 *)(param_1 + 0x3350) = 0;
    *(undefined4 *)(param_1 + 0x2644) = 0;
    return 1;
  }
  if (param_2[8] != 0) {
    if (!bVar4) {
      return 0;
    }
    if ((bVar5) && (iVar2 = FUN_0085d910(*param_2), iVar2 != 0)) {
LAB_008636b7:
      *(undefined4 *)(param_1 + 0x2628) = 0;
      *(undefined4 *)(param_1 + 0x263c) = 0xffffffff;
      return 1;
    }
  }
  if ((bVar4) && (*(int *)(param_1 + 0x5428) != 0)) {
    *(undefined4 *)(param_1 + 0x2620) = 0;
    *(undefined4 *)(param_1 + 0x5428) = 0;
    *(undefined4 *)(param_1 + 0x2568) = 0;
    *(undefined4 *)(param_1 + 0x256c) = 0;
    FUN_00a8caf0(0x10001c,0,0,0);
    return 1;
  }
  return 0;
}

// 008638D0  FUN_008638d0  size=231  [between]
undefined4 __thiscall FUN_008638d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_00a8c760(0);
  if (((iVar1 != 0) || (param_3 != 0)) && (param_2 != 0)) {
    local_18 = 0;
    local_14 = 0;
    local_1c = 1;
    local_10 = 0;
    local_c = 0;
    local_8 = 1;
    local_4 = 1;
    local_20 = 1;
    local_28 = 1;
    local_24 = 1;
    iVar1 = FUN_008635c0(&local_28);
    if (iVar1 != 0) {
      return 1;
    }
  }
  iVar1 = FUN_00a8c760(0);
  if (((iVar1 != 0) || (param_3 != 0)) && (90000.0 < *(float *)(param_1 + 0xd28))) {
    if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
       (810000.0 < *(float *)(param_1 + 0xd28))) {
      FUN_00a8caf0(0x100002,0,0,0);
      return 1;
    }
    FUN_00a8caf0(0x100001,0,0,0);
    return 1;
  }
  return 0;
}

// 008639C0  FUN_008639c0  size=539  [between]
void __fastcall FUN_008639c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00b7fa30(0);
  param_1[0x1da] = 1;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar2 = FUN_00a81330();
      iVar1 = 0;
      if (iVar2 != 0) {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
      }
      *(undefined4 *)(iVar1 + 0x768) = 1;
    }
  }
  DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
  (**(code **)(*param_1 + 0x39c))();
  FUN_00b88400();
  param_1[0x9b5] = 0;
  FUN_00eaa6e0(0x40a00000,0);
  iVar1 = FUN_00da0f40();
  if (iVar1 != 0) {
    FUN_00da9230(0);
  }
  iVar1 = FUN_00da0f90();
  if (iVar1 != 0) {
    FUN_00da0f50(0,0,0);
  }
  param_1[0x24] = 0;
  param_1[0x429] = 1;
  param_1[0x9b8] = 0;
  FUN_00b96b30();
  (**(code **)(*param_1 + 0x394))();
  FUN_00a8d280();
  param_1[0x988] = 0;
  param_1[0xa04] = 0;
  if (((int *)param_1[0x1e6] != (int *)0x0) &&
     (iVar1 = (**(code **)(*(int *)param_1[0x1e6] + 4))(9), iVar1 != 0)) {
    if ((int *)param_1[0x1e6] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1e6] + 4))(9);
    }
    FUN_00eaa6e0(0x41200000,0);
  }
  if ((DAT_01bea090 & 0x80000000) != 0) {
    FUN_00a9e120(3,0x711,0);
  }
  FUN_00a94bc0(2,0x3c888889);
  FUN_00a94bc0(4,0x3c888889);
  FUN_00a94bc0(5,0x3c888889);
  FUN_00a94bc0(6,0x3c888889);
  FUN_00a94bc0(7,0x3c888889);
  FUN_00a94bc0(8,0x3c888889);
  param_1[0xe16] = 0;
  param_1[0x991] = 0;
  iVar1 = FUN_00a12210(0xf00);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 0x1000;
  }
  return;
}

// 00863BE0  FUN_00863be0  size=458  [between]
void __fastcall FUN_00863be0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
  FUN_00b887c0();
  (**(code **)(*param_1 + 0x39c))();
  FUN_00b88400();
  param_1[0x9b5] = 0;
  FUN_00eaa6e0(0x40a00000,0);
  iVar2 = FUN_00da0f40();
  if (iVar2 != 0) {
    FUN_00da9230(0);
  }
  iVar2 = FUN_00da0f90();
  if (iVar2 != 0) {
    FUN_00da0f50(0,0,0);
  }
  pcVar1 = *(code **)(*param_1 + 0x394);
  param_1[0x24] = 0;
  param_1[0x429] = 1;
  param_1[0x9b8] = 0;
  (*pcVar1)();
  FUN_00a8d280();
  param_1[0x988] = 0;
  param_1[0xa04] = 0;
  if (((int *)param_1[0x1e6] != (int *)0x0) &&
     (iVar2 = (**(code **)(*(int *)param_1[0x1e6] + 4))(9), iVar2 != 0)) {
    if ((int *)param_1[0x1e6] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1e6] + 4))(9);
    }
    FUN_00eaa6e0(0x41200000,0);
  }
  if ((DAT_01bea090 & 0x80000000) != 0) {
    FUN_00a9e120(3,0x711,0);
  }
  FUN_00a94bc0(2,0x3c888889);
  FUN_00a94bc0(3,0x3c888889);
  FUN_00a94bc0(4,0x3c888889);
  FUN_00a94bc0(5,0x3c888889);
  FUN_00a94bc0(6,0x3c888889);
  FUN_00a94bc0(7,0x3c888889);
  FUN_00a94bc0(8,0x3c888889);
  param_1[0xe16] = 0;
  param_1[0x991] = 0;
  iVar2 = FUN_00a12210(0xf00);
  if (iVar2 != 0) {
    *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 0x1000;
  }
  return;
}

// 00863DB0  FUN_00863db0  size=491  [between]
void __fastcall FUN_00863db0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_00b8a740();
  if (*(int *)(param_1 + 0x13f8) == 0) {
    *(undefined4 *)(param_1 + 0x13f8) = 1;
    return;
  }
  iVar1 = FUN_00b7d050();
  iVar2 = FUN_00a94480(3);
  if (iVar1 == 0) {
    return;
  }
  if (iVar2 == 0) {
    return;
  }
  iVar3 = FUN_00a12210(0x720);
  if (iVar3 == 0) {
    return;
  }
  *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x1000;
  iVar4 = *(int *)(param_1 + 0x13f4);
  if ((((*(float *)(iVar3 + 0x50) < 0.01) && (-0.01 < *(float *)(iVar3 + 0x50))) &&
      (*(float *)(iVar3 + 0x54) < 0.01)) && (-0.01 < *(float *)(iVar3 + 0x54))) {
    iVar4 = 0;
  }
  if (*(float *)(iVar3 + 0x50) < -0.089999996) {
    iVar4 = 1;
  }
  if (0.089999996 < *(float *)(iVar3 + 0x50)) {
    iVar4 = 2;
  }
  if (0.089999996 < *(float *)(iVar3 + 0x54)) {
    iVar4 = 3;
  }
  if (*(float *)(iVar3 + 0x54) < -0.089999996) {
    iVar4 = 4;
  }
  if (*(int *)(param_1 + 0x13f4) == iVar4) {
    return;
  }
  if ((*(int *)(param_1 + 0x13f4) == 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
    uVar6 = 4;
    FUN_00a7c8a0(4);
    FUN_00a9e060(uVar6);
  }
  if (*(int *)(param_1 + 0x13f4) != 0) {
    FUN_00a9e060(4);
  }
  *(int *)(param_1 + 0x13f4) = iVar4;
  switch(iVar4) {
  case 0:
    iVar3 = FUN_00a7c8a0();
    if (iVar3 == 0) goto switchD_00863eec_default;
    uVar7 = 0;
    uVar6 = 0x710;
    uVar5 = 4;
    FUN_00a7c8a0(4,iVar2,iVar1,0x710,0);
    goto LAB_00863f52;
  case 1:
    uVar6 = 0x700;
    goto LAB_00863f46;
  case 2:
    iVar2 = *(int *)(param_1 + 0x4f0);
    uVar6 = 0x701;
    break;
  case 3:
    iVar2 = *(int *)(param_1 + 0x4f0);
    uVar6 = 0x702;
    break;
  case 4:
    uVar6 = 0x703;
LAB_00863f46:
    iVar2 = *(int *)(param_1 + 0x4f0);
    break;
  default:
    goto switchD_00863eec_default;
  }
  uVar7 = 0;
  uVar5 = 4;
LAB_00863f52:
  FUN_00a8c5f0(uVar5,iVar2,iVar1,uVar6,uVar7);
switchD_00863eec_default:
  iVar2 = FUN_00b88480();
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x13f4) == 0) {
      FUN_00b88480();
      FUN_00c11ac0();
      return;
    }
    if (*(int *)(param_1 + 0x13f4) - 1U < 4) {
      FUN_00b88480();
      FUN_00c11be0();
      return;
    }
  }
  return;
}

// 00863FB0  Pl1400::vf214  size=231  [class]
void __thiscall Pl1400::vf214(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x4f0) != 0) {
    if (param_4 != 0) {
      *(int *)(param_1 + 0x734) = param_4;
      *(undefined4 *)(param_1 + 0x738) = param_3;
      *(undefined4 *)(param_1 + 0x730) = param_2;
      return;
    }
    *(undefined4 *)(param_1 + 0x734) = 0;
    uVar4 = param_3;
    uVar2 = param_2;
    FUN_00a7c910(param_3,param_2,0);
    FUN_00e04a00(uVar4,uVar2,param_4);
    FUN_00a7c910();
    FUN_00e049a0();
    iVar1 = FUN_00b7d050();
    if (iVar1 != 0) {
      uVar3 = 0;
      uVar4 = param_3;
      uVar2 = param_2;
      FUN_00a7c910(param_3,param_2,0);
      FUN_00e04a00(uVar4,uVar2,uVar3);
      FUN_00a7c910();
      FUN_00e049a0();
    }
    iVar1 = FUN_00b7d110();
    if ((iVar1 != 0) && (iVar1 = FUN_00b7d110(), *(int *)(iVar1 + 0x4f0) != 0)) {
      uVar4 = 0;
      FUN_00a7c910(param_3,param_2,0);
      FUN_00e04a00(param_3,param_2,uVar4);
      FUN_00a7c910();
      FUN_00e049a0();
    }
  }
  return;
}

// 008640A0  Pl1400::vf218  size=863  [class]
void __fastcall Pl1400::vf218(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x4f0) != 0) {
    if ((0 < *(int *)(param_1 + 0x73c)) &&
       (iVar1 = *(int *)(param_1 + 0x73c) + -1, *(int *)(param_1 + 0x73c) = iVar1, iVar1 < 1)) {
      uVar3 = *(undefined4 *)(param_1 + 0x740);
      uVar2 = *(undefined4 *)(param_1 + 0x744);
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x730) = uVar3;
      FUN_00a7c910(uVar2,uVar3,0);
      FUN_00e04a00(uVar2,uVar3,uVar4);
      FUN_00a7c910();
      FUN_00e049a0();
      iVar1 = FUN_00b7d050();
      if (iVar1 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x740);
        uVar2 = *(undefined4 *)(param_1 + 0x744);
        uVar4 = 0;
        FUN_00a7c910(uVar2,uVar3,0);
        FUN_00e04a00(uVar2,uVar3,uVar4);
        FUN_00a7c910();
        FUN_00e049a0();
      }
      iVar1 = FUN_00b7d110();
      if ((iVar1 != 0) && (iVar1 = FUN_00b7d110(), *(int *)(iVar1 + 0x4f0) != 0)) {
        uVar3 = *(undefined4 *)(param_1 + 0x740);
        uVar2 = *(undefined4 *)(param_1 + 0x744);
        uVar4 = 0;
        FUN_00a7c910(uVar2,uVar3,0);
        FUN_00e04a00(uVar2,uVar3,uVar4);
        FUN_00a7c910();
        FUN_00e049a0();
      }
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x740);
        uVar2 = *(undefined4 *)(param_1 + 0x744);
        uVar4 = 0;
        FUN_00a7c910(uVar2,uVar3,0);
        FUN_00e04a00(uVar2,uVar3,uVar4);
        FUN_00a7c910();
        FUN_00e049a0();
      }
    }
    if ((0 < *(int *)(param_1 + 0x748)) &&
       (iVar1 = *(int *)(param_1 + 0x748) + -1, *(int *)(param_1 + 0x748) = iVar1, iVar1 < 1)) {
      uVar3 = *(undefined4 *)(param_1 + 0x74c);
      uVar2 = *(undefined4 *)(param_1 + 0x750);
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x730) = uVar3;
      FUN_00a7c910(uVar2,uVar3,0);
      FUN_00e04a00(uVar2,uVar3,uVar4);
      FUN_00a7c910();
      FUN_00e049a0();
      iVar1 = FUN_00b7d050();
      if (iVar1 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x74c);
        uVar2 = *(undefined4 *)(param_1 + 0x750);
        uVar4 = 0;
        FUN_00a7c910(uVar2,uVar3,0);
        FUN_00e04a00(uVar2,uVar3,uVar4);
        FUN_00a7c910();
        FUN_00e049a0();
      }
      iVar1 = FUN_00b7d110();
      if ((iVar1 != 0) && (iVar1 = FUN_00b7d110(), *(int *)(iVar1 + 0x4f0) != 0)) {
        uVar3 = *(undefined4 *)(param_1 + 0x74c);
        uVar2 = *(undefined4 *)(param_1 + 0x750);
        uVar4 = 0;
        FUN_00a7c910(uVar2,uVar3,0);
        FUN_00e04a00(uVar2,uVar3,uVar4);
        FUN_00a7c910();
        FUN_00e049a0();
      }
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x74c);
        uVar2 = *(undefined4 *)(param_1 + 0x750);
        uVar4 = 0;
        FUN_00a7c910(uVar2,uVar3,0);
        FUN_00e04a00(uVar2,uVar3,uVar4);
        FUN_00a7c910();
        FUN_00e049a0();
      }
    }
    if ((0 < *(int *)(param_1 + 0x734)) &&
       (iVar1 = *(int *)(param_1 + 0x734) + -1, *(int *)(param_1 + 0x734) = iVar1, iVar1 < 1)) {
      uVar3 = *(undefined4 *)(param_1 + 0x730);
      uVar2 = *(undefined4 *)(param_1 + 0x738);
      uVar4 = 0;
      FUN_00a7c910(uVar2,uVar3,0);
      FUN_00e04a00(uVar2,uVar3,uVar4);
      FUN_00a7c910();
      FUN_00e049a0();
      iVar1 = FUN_00b7d050();
      if (iVar1 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x730);
        uVar2 = *(undefined4 *)(param_1 + 0x738);
        uVar4 = 0;
        FUN_00a7c910(uVar2,uVar3,0);
        FUN_00e04a00(uVar2,uVar3,uVar4);
        FUN_00a7c910();
        FUN_00e049a0();
      }
      iVar1 = FUN_00b7d110();
      if ((iVar1 != 0) && (iVar1 = FUN_00b7d110(), *(int *)(iVar1 + 0x4f0) != 0)) {
        uVar3 = *(undefined4 *)(param_1 + 0x730);
        uVar2 = *(undefined4 *)(param_1 + 0x738);
        uVar4 = 0;
        FUN_00a7c910(uVar2,uVar3,0);
        FUN_00e04a00(uVar2,uVar3,uVar4);
        FUN_00a7c910();
        FUN_00e049a0();
      }
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x730);
        uVar2 = *(undefined4 *)(param_1 + 0x738);
        uVar4 = 0;
        FUN_00a7c910(uVar2,uVar3,0);
        FUN_00e04a00(uVar2,uVar3,uVar4);
        FUN_00a7c910();
        FUN_00e049a0();
        return;
      }
    }
  }
  return;
}

// 00864400  FUN_00864400  size=119  [between]
void FUN_00864400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00b7d0b0();
  if (iVar1 != 0) {
    FUN_00b7d0b0();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9d80;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d80);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00aa4080(param_1,param_2,param_3,param_4,param_5,0xbf800000,0x3f800000);
      }
    }
  }
  return;
}

// 00864480  FUN_00864480  size=129  [between]
void FUN_00864480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00b7d0b0();
  if (iVar1 != 0) {
    FUN_00b7d0b0();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9d80;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d80);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00aa45f0(0x11404,param_1,param_2,param_3,param_4,param_5,param_6,0xbf800000,0x3f800000);
      }
    }
  }
  return;
}

// 00864510  FUN_00864510  size=124  [between]
void FUN_00864510(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00b7d0b0();
  if (iVar1 != 0) {
    FUN_00b7d0b0();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9d80;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d80);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00a9f3c0(param_1,param_2,param_3,param_4,param_5,param_6,0xbf800000,0x3f800000);
      }
    }
  }
  return;
}

// 00864590  FUN_00864590  size=81  [between]
void FUN_00864590(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00b7d0b0();
  if (iVar1 != 0) {
    FUN_00b7d0b0();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9d80;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d80);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00a94bc0(param_1,param_2);
      }
    }
  }
  return;
}

// 008645F0  FUN_008645f0  size=71  [between]
void __fastcall FUN_008645f0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00b7d0b0();
  if (iVar1 != 0) {
    FUN_00b7d0b0();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9d80;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d80);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00a95ee0(0,param_1);
      }
    }
  }
  return;
}

// 00864640  Pl1400::vf39C  size=131  [class]
void __fastcall Pl1400::vf39C(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  if ((*(char *)(param_1 + 0x5450) != '\x02') && (iVar2 = FUN_00b7d0b0(), iVar2 != 0)) {
    FUN_00b7d0b0();
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01be9d80;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d80);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        FUN_00a94bc0(1,0);
      }
    }
  }
  uVar1 = 5;
  if (*(int *)(param_1 + 0xb74) != 0) {
    uVar1 = 4;
  }
  FUN_00864400(uVar1,0,0,0x3f800000,0);
  return;
}

// 008646D0  Pl1400::vf248  size=112  [class]
void __fastcall Pl1400::vf248(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00e00900();
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  iVar1 = FUN_00b7d050();
  if (iVar1 != 0) {
    FUN_00e00900();
    FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
    FUN_00e03080(iVar1,1);
    iVar1 = FUN_00b7d0b0();
    if (iVar1 != 0) {
      uVar3 = 2;
      uVar2 = FUN_00b7d0b0(2);
      FUN_00e03080(uVar2,uVar3);
    }
  }
  return;
}

// 00864740  Pl1400::vf380  size=147  [class]
bool __fastcall Pl1400::vf380(int param_1)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x4e4) != 0) || ((DAT_01bea060 & 0x2000000) != 0)) ||
      ((DAT_01bea060 & 0x40000000) != 0)) ||
     ((((DAT_01bea060 & 0x8000000) != 0 || ((DAT_01bea060 & 0x20000000) != 0)) ||
      (iVar1 = FUN_00416910(0x15), iVar1 != 0)))) {
    return false;
  }
  iVar1 = FUN_0099a2e0();
  if ((iVar1 != 0) && (iVar1 = FUN_00d466f0(), iVar1 != 0)) {
    return false;
  }
  iVar1 = FUN_00a8c760(0x3b);
  if ((((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0x618), iVar1 != 0x100000)) &&
      (iVar1 != 0x100001)) && (iVar1 != 0x100002)) {
    return iVar1 == 0x100008;
  }
  return true;
}

// 008647E0  FUN_008647e0  size=157  [between]
undefined4 __fastcall FUN_008647e0(int param_1)

{
  int iVar1;
  
  if (((((*(int *)(param_1 + 0x4e4) == 0) && ((DAT_01bea060 & 0x2000000) == 0)) &&
       ((DAT_01bea060 & 0x40000000) == 0)) &&
      (((DAT_01bea060 & 0x8000000) == 0 && ((DAT_01bea060 & 0x20000000) == 0)))) &&
     ((iVar1 = FUN_00416910(0x15), iVar1 == 0 &&
      ((*(int *)(param_1 + 0x618) != 0x100035 && (*(int *)(param_1 + 0x618) != 0x10002b)))))) {
    iVar1 = FUN_0099a2e0();
    if ((iVar1 != 0) && (iVar1 = FUN_00d466f0(), iVar1 != 0)) {
      return 0;
    }
    iVar1 = FUN_00a8c760(0x2a);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x5438) != 0)) {
      FUN_00a8caf0(0x10000e,0,0,0);
      return 1;
    }
  }
  return 0;
}

// 00864880  Pl1400::vf2F8  size=80  [class]
void __fastcall Pl1400::vf2F8(int *param_1)

{
  if (((DAT_01bea060 & 0x4a000400) == 0) && (param_1[0x139] == 0)) {
    FUN_008639c0();
    FUN_00a8caf0(0x100062,0,0,0);
    FUN_00b7c9c0(0);
    (**(code **)(*param_1 + 0x220))(0x41200000);
  }
  return;
}

// 008649D0  FUN_008649d0  size=252  [callgraph]
bool __fastcall FUN_008649d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  if (((DAT_01bea090 & 0x8000) != 0) ||
     ((((byte)DAT_01bea094 & 0x20) != 0 &&
      ((*(float *)(param_1 + 0x341c) <= 0.0 || (*(int *)(param_1 + 0x3450) == 0)))))) {
    return false;
  }
  iVar2 = FUN_00b80980();
  if (iVar2 != 0) {
    return false;
  }
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*puVar1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      iVar2 = FUN_00d82980(1);
      if (iVar2 != 0) {
        FUN_00d82de0(*(undefined4 *)(param_1 + 2000));
      }
      if (puVar1[0xbc] != 0) {
        iVar2 = FUN_00b7a500();
        if (iVar2 == 0) {
          puVar1[0xbc] = 0;
        }
        if (puVar1[0xbc] != 0) {
          return false;
        }
      }
    }
  }
  if ((DAT_01bea090 & 0x20000000) != 0) {
    return true;
  }
  if (((((DAT_01bea060 & 0x2000000) == 0) && (*(int *)(param_1 + 0x3860) == 0)) &&
      (*(float *)(param_1 + 0x405c) <= 0.0)) && (*(int *)(param_1 + 0x40b8) == 0)) {
    iVar2 = FUN_00b7a500();
    return iVar2 != 0;
  }
  return false;
}

// 00864AD0  FUN_00864ad0  size=76  [callgraph]
undefined4 __fastcall FUN_00864ad0(int param_1)

{
  int iVar1;
  
  if ((DAT_01bea090 & 0x8000) == 0) {
    iVar1 = FUN_00a8c760(0x17);
    if (((iVar1 == 0) && (iVar1 = FUN_00a8c760(1), iVar1 == 0)) &&
       (*(float *)(param_1 + 0x341c) <= 0.0)) {
      return 0;
    }
    iVar1 = FUN_008649d0();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00864B20  FUN_00864b20  size=189  [callgraph]
bool __fastcall FUN_00864b20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  if (((DAT_01bea090 & 0x8000) != 0) || (*(int *)(param_1 + 0x3bcc) != 0)) {
    return true;
  }
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*puVar1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar3);
    if ((iVar2 != 0) && (puVar1[0xbc] != 0)) {
      iVar2 = FUN_00b7a500();
      if (iVar2 == 0) {
        puVar1[0xbc] = 0;
      }
      if (puVar1[0xbc] != 0) {
        return true;
      }
    }
  }
  if ((*(int *)(param_1 + 0x40c8) == 4) || ((DAT_01bea090 & 0x20000000) != 0)) {
    return false;
  }
  iVar2 = FUN_00606de0(*(undefined4 *)(param_1 + 2000));
  if ((iVar2 != 0) && (iVar2 = FUN_00b83e50(), iVar2 == 0)) {
    return false;
  }
  if (*(int *)(param_1 + 0x3860) != 0) {
    return true;
  }
  iVar2 = FUN_00b7a500();
  return iVar2 == 0;
}

// 00864BE0  FUN_00864be0  size=254  [callgraph]
void __thiscall FUN_00864be0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int local_24;
  undefined4 uStack_14;
  
  *(undefined4 *)(param_1 + 0x3bcc) = 0;
  iVar2 = FUN_00d82980(0x14);
  if (iVar2 != 0) {
    FUN_00d82de0(*(undefined4 *)(param_1 + 2000));
    local_24 = 0;
    puVar1 = *(undefined4 **)(param_1 + 2000);
    iVar2 = 0x100000;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = &DAT_01be9ef4;
      (**(code **)*puVar1)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar4);
      if (iVar3 != 0) {
        if (0 < (int)puVar1[0xfb]) {
          iVar2 = puVar1[0xfb];
        }
        if (0 < (int)puVar1[0xfc]) {
          local_24 = puVar1[0xfc];
        }
        puVar1[0xfb] = 0;
        puVar1[0xfc] = 0;
        puVar1[0x62] = 0;
        if (param_4 != 0) {
          puVar1[0xbc] = 1;
        }
      }
    }
    if (param_2 == 0) {
      if (iVar2 == 0x100005) {
        *(undefined4 *)(param_1 + 0x890) = 0;
        *(undefined4 *)(param_1 + 0x894) = 0;
        *(undefined4 *)(param_1 + 0x898) = 0;
        *(undefined4 *)(param_1 + 0x89c) = uStack_14;
        *(undefined4 *)(param_1 + 0x2c60) = *(undefined4 *)(param_1 + 0x44);
      }
      FUN_00a8caf0(iVar2,local_24,0,0);
    }
    *(undefined4 *)(param_1 + 0x40c8) = 0;
  }
  return;
}

// 00864CE0  FUN_00864ce0  size=143  [callgraph]
void __thiscall FUN_00864ce0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0x3bcc) = 0;
  iVar2 = FUN_00d82980(0x14);
  if (iVar2 != 0) {
    FUN_00d82de0(*(undefined4 *)(param_1 + 2000));
    puVar1 = *(undefined4 **)(param_1 + 2000);
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = &DAT_01be9ef4;
      (**(code **)*puVar1)(&DAT_01be9ef4);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        puVar1[0xfb] = 0;
        puVar1[0xfc] = 0;
        puVar1[0x62] = 0;
        if (param_3 != 0) {
          puVar1[0xbc] = 1;
        }
      }
    }
    FUN_00a8caf0(param_2,0,0,0);
    *(undefined4 *)(param_1 + 0x40c8) = 0;
  }
  return;
}

// 00864D70  FUN_00864d70  size=94  [callgraph]
void __fastcall FUN_00864d70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xbd8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbc0));
  }
  iVar1 = FUN_00d82980(9);
  if (iVar1 == 0) {
    FUN_00864be0(1,0,1);
    FUN_00a8caf0(0x100061,0,0,0);
  }
  if (*(int *)(param_1 + 0xbd8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbc0));
  }
  return;
}

// 00864DD0  FUN_00864dd0  size=568  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00864dd0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  FUN_00863be0();
  *(undefined4 *)(param_1 + 0x3bcc) = 0;
  iVar2 = FUN_00d82980(0x14);
  if (iVar2 != 0) {
    FUN_00d82de0(*(undefined4 *)(param_1 + 2000));
    puVar1 = *(undefined4 **)(param_1 + 2000);
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = &DAT_01be9ef4;
      (**(code **)*puVar1)(&DAT_01be9ef4);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        puVar1[0xfb] = 0;
        puVar1[0xfc] = 0;
        puVar1[0x62] = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x40c8) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*puVar1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      puVar1[0x11f] = 0;
      puVar1[0x120] = 0;
      puVar1[0x121] = 0;
      FUN_00a7c950();
      puVar1[0x102] = 0xffffffff;
      puVar1[0x103] = 0xffffffff;
      puVar1[0x114] = 0;
      puVar1[0x115] = 0;
      puVar1[0x116] = 0;
      puVar1[0x117] = 0x3f800000;
      puVar1[0x11b] = 0x3f800000;
      puVar1[0x118] = 0;
      puVar1[0x119] = 0;
      puVar1[0x11a] = 0;
      puVar1[0x104] = 0;
      puVar1[0x105] = 0;
      puVar1[0x106] = 0;
      puVar1[0x107] = 0x3f800000;
      puVar1[0x10b] = 0x3f800000;
      puVar1[0x108] = 0;
      puVar1[0x109] = 0;
      puVar1[0x10a] = 0;
      puVar1[0x10c] = 0;
      puVar1[0x10d] = 0;
      puVar1[0x10e] = 0;
      puVar1[0x10f] = 0x3f800000;
      puVar1[0x113] = 0x3f800000;
      puVar1[0x110] = 0;
      puVar1[0x111] = 0;
      puVar1[0x112] = 0;
      puVar1[0x11c] = 0;
      puVar1[0x11e] = 1;
      puVar1[0x11d] = 0;
      puVar1[0x124] = 0;
      puVar1[0x125] = 0;
      puVar1[0x126] = 0;
      puVar1[0x127] = 0x3f800000;
      if (((param_2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
         (iVar2 = FUN_00a12210(param_3), iVar2 != 0)) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        puVar1[0x102] = param_3;
        puVar1[0x124] = *param_4;
        puVar1[0x125] = param_4[1];
        puVar1[0x126] = param_4[2];
        puVar1[0x127] = param_4[3];
      }
      _DAT_01bea9a4 = 1;
      if (*(int *)(param_1 + 0x764) != 0) {
        FUN_008e3c10();
      }
      _DAT_01d61ab0 = 0;
      if (*(int *)(param_1 + 0x40c8) == 0) {
        FUN_0085e000(0);
      }
    }
  }
  return;
}

// 008650B0  FUN_008650b0  size=106  [callgraph]
void __thiscall FUN_008650b0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01b35b78;
    (**(code **)*puVar1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      if (50.0 < (float)puVar1[0x186] * 0.25) {
        iVar2 = FUN_00fdbc60();
        *param_2 = iVar2 * *param_2;
        return;
      }
      iVar2 = FUN_00fdbc60();
      *param_2 = iVar2 * *param_2;
    }
  }
  return;
}

// 00865120  FUN_00865120  size=103  [callgraph]
void __thiscall FUN_00865120(int param_1,byte *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  char cStack_4;
  
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01b35b78;
    (**(code **)*puVar1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      cStack_4 = (char)(int)ROUND((float)puVar1[0x186] * 0.1);
      *param_2 = *param_2 + cStack_4;
    }
  }
  if (0x3c < *param_2) {
    *param_2 = 0x3c;
  }
  return;
}

// 00865190  Pl1400::vf3E8  size=47  [class]
undefined4 __fastcall Pl1400::vf3E8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01b35b78;
    (**(code **)*puVar1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      return puVar1[0x1a5];
    }
  }
  return 0;
}

// 008651C0  Pl1400::vf424  size=47  [class]
undefined4 __fastcall Pl1400::vf424(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01b35b78;
    (**(code **)*puVar1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      return puVar1[0x1a6];
    }
  }
  return 0;
}

// 00865220  FUN_00865220  size=424  [callgraph]
void __fastcall FUN_00865220(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar2)();
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_0086533f;
  }
  pcVar2 = *(code **)(*param_1 + 0x370);
  param_1[0x250] = 0;
  param_1[0x251] = 0;
  iVar4 = (*pcVar2)();
  if (iVar4 == 0) {
    uVar5 = 0x1de;
    param_1[0x251] = 1;
    goto LAB_0086530b;
  }
  puVar3 = (undefined4 *)param_1[500];
  if (puVar3 == (undefined4 *)0x0) {
LAB_008652f9:
    uVar5 = 0x1db;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*puVar3)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar6);
    if (iVar4 == 0) goto LAB_008652f9;
    fVar1 = (float)puVar3[0xfe];
    if (fVar1 < 0.0) {
      fVar1 = fVar1 + 360.0;
    }
    if ((fVar1 <= 60.0) || (180.0 < fVar1)) {
      if ((fVar1 <= 180.0) || (fVar1 < 300.0 == (fVar1 == 300.0))) goto LAB_008652f9;
      uVar5 = 0x1dc;
    }
    else {
      uVar5 = 0x1dd;
    }
  }
LAB_0086530b:
  FUN_00aa4080(uVar5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_0086533f:
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_0085d070();
  if ((param_1[0x250] == 0) && (iVar4 = FUN_00a8c760(0xb), iVar4 != 0)) {
    param_1[0x250] = 1;
    FUN_00b7ab80(param_1[0x1021],param_1[0x1022]);
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = 0;
    iVar4 = (**(code **)(*param_1 + 0x370))(0,0,0);
    FUN_00a8caf0((-(uint)(iVar4 != 0) & 0xfffffffb) + 0x100005,uVar5,uVar7,uVar8);
  }
  return;
}

// 008653D0  FUN_008653d0  size=452  [callgraph]
void __fastcall FUN_008653d0(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    iVar3 = 199;
    if ((0.7853982 < (float)param_1[0x245]) && ((float)param_1[0x245] < 2.3561945)) {
      iVar3 = 200;
    }
    if (((float)param_1[0x245] < -0.7853982) && (-2.3561945 < (float)param_1[0x245])) {
      iVar3 = 0xc9;
    }
    if ((2.3561945 < (float)param_1[0x245]) || ((float)param_1[0x245] < -2.3561945)) {
      iVar3 = 0xc6;
    }
    if (param_1[0x2dd] != 0) {
      if (iVar3 == 199) {
        iVar3 = 0xcb;
      }
      else if (iVar3 == 0xc9) {
        iVar3 = 0xcd;
      }
      else if (iVar3 == 200) {
        iVar3 = 0xcc;
      }
      else if (iVar3 == 0xc6) {
        iVar3 = 0xca;
      }
    }
    FUN_00aa4080(iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    FUN_008639c0();
    FUN_00b895d0();
    piVar2 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar2 + 0x30))();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
     (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
    iVar3 = (**(code **)(*param_1 + 0x340))();
    if (iVar3 != 0) {
      FUN_00a8caf0(0x100005,0,0,0);
      return;
    }
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008655A0  FUN_008655a0  size=485  [callgraph]
void __fastcall FUN_008655a0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar2)();
  if (param_1[0x187] == 0) {
    iVar4 = 0xd1;
    if ((0.7853982 < (float)param_1[0x245]) && ((float)param_1[0x245] < 2.3561945)) {
      iVar4 = 0xd3;
    }
    if (((float)param_1[0x245] < -0.7853982) && (-2.3561945 < (float)param_1[0x245])) {
      iVar4 = 0xd2;
    }
    if ((2.3561945 < (float)param_1[0x245]) || ((float)param_1[0x245] < -2.3561945)) {
      iVar4 = 0xd0;
    }
    if (param_1[0x2dd] != 0) {
      if (iVar4 == 0xd1) {
        iVar4 = 0xd5;
      }
      else if (iVar4 == 0xd3) {
        iVar4 = 0xd7;
      }
      else if (iVar4 == 0xd2) {
        iVar4 = 0xd6;
      }
      else if (iVar4 == 0xd0) {
        iVar4 = 0xd4;
      }
    }
    FUN_00aa4080(iVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar2 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)(0x41200000);
    FUN_008639c0();
    FUN_00b895d0();
    fVar1 = (float)param_1[0x9f9];
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      param_1[0x9f8] = param_1[0x9f8] + 1;
    }
    param_1[0x9f9] = 0x41f00000;
    piVar3 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar3 + 0x30))();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a92f90();
  if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) == 0) ||
     (iVar4 = FUN_00e36060(0), iVar4 != 0)) {
    iVar4 = (**(code **)(*param_1 + 0x340))();
    if (iVar4 != 0) {
      FUN_00a8caf0(0x100005,0,0,0);
      return;
    }
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 00865790  FUN_00865790  size=228  [callgraph]
void __fastcall FUN_00865790(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    param_1[0x2dd] = 0;
    FUN_00aa4080(0xf2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    piVar2 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar2 + 0x30))();
    FUN_008639c0();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
     (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00865880  FUN_00865880  size=228  [callgraph]
void __fastcall FUN_00865880(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x99,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    piVar2 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar2 + 0x30))();
    FUN_008639c0();
    param_1[0x2dd] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
     (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00865970  FUN_00865970  size=405  [callgraph]
void __fastcall FUN_00865970(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_00a8c760(0x2b);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  if (((param_1[0x187] != 0) && (iVar1 = FUN_0085d070(), iVar1 == 0)) &&
     (iVar1 = FUN_00a8cac0(), iVar1 == 1)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 != 0) && (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 != 0)) {
        return;
      }
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 != 0) && (90000.0 < (float)param_1[0x34a])) {
        if (((DAT_01bea090._3_1_ & 1) == 0) &&
           ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
          FUN_00a8caf0(0x100002,0,0,0);
          return;
        }
        FUN_00a8caf0(0x100001,0,0,0);
      }
    }
    else {
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 != 0) && (iVar1 = FUN_0085d810(1,1), iVar1 != 0)) {
        return;
      }
      iVar1 = FUN_00a8c760(0xb);
      if ((iVar1 != 0) && (param_1[0x9a5] != 0)) {
        FUN_00a8caf0(0x100058,0,0,0);
        fVar2 = (float10)FUN_00ddba30((float)param_1[0x9a6] + 3.1415927);
        param_1[0x25] = (int)(float)fVar2;
        return;
      }
    }
  }
  return;
}

// 00865B10  FUN_00865b10  size=612  [callgraph]
void __fastcall FUN_00865b10(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  undefined4 auStack_c [3];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  auStack_c[0] = 0xe9;
  auStack_c[1] = 0xe2;
  auStack_c[2] = 0xea;
  (**(code **)(*param_1 + 0x220))(0x41200000);
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  switch(param_1[0x187]) {
  case 0:
    sVar3 = FUN_00dde2d0(0,1);
    uVar2 = *(undefined4 *)(&stack0xffffffec + sVar3 * 4);
    param_1[0x250] = (int)sVar3;
    fVar6 = (float10)FUN_00ddba30((float)param_1[0x9fb] + 3.1415927);
    param_1[0x25] = (int)(float)fVar6;
    FUN_00aa4080(uVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_008639c0();
    if (param_1[0x186] == 0x100052) {
      iVar5 = param_1[0x463];
      FUN_00e26e90();
      *(undefined4 *)(iVar5 + 0xe4) = 0x3f333333;
      *(undefined4 *)(iVar5 + 0xe8) = 0x3f333333;
      *(undefined4 *)(iVar5 + 0xec) = 0x3f333333;
    }
    FUN_00b895d0();
    piVar4 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar4 + 0x30))();
    param_1[0x987] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(auStack_c[param_1[0x250]],0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x3e4);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)();
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a92f90();
    if ((*(int *)(iVar5 + 0xd0) + *(int *)(iVar5 + 0xc4) + *(int *)(iVar5 + 0xb8) == 0) ||
       (iVar5 = FUN_00e36060(0), iVar5 != 0)) {
      if ((*(byte *)(param_1 + 0x250) & 1) == 0) {
        FUN_00a8caf0(0x100055,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100056,0,0,0);
      return;
    }
  default:
    goto switchD_00865b86_default;
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar5 = FUN_00a92f90();
  if ((*(int *)(iVar5 + 0xd0) + *(int *)(iVar5 + 0xc4) + *(int *)(iVar5 + 0xb8) == 0) ||
     (iVar5 = FUN_00e36060(0), iVar5 != 0)) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00865b86_default:
  return;
}

// 00865D90  FUN_00865d90  size=405  [callgraph]
void __fastcall FUN_00865d90(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_00a8c760(0x2b);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  if (((param_1[0x187] != 0) && (iVar1 = FUN_0085d070(), iVar1 == 0)) &&
     (iVar1 = FUN_00a8cac0(), iVar1 == 1)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 != 0) && (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 != 0)) {
        return;
      }
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 != 0) && (90000.0 < (float)param_1[0x34a])) {
        if (((DAT_01bea090._3_1_ & 1) == 0) &&
           ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
          FUN_00a8caf0(0x100002,0,0,0);
          return;
        }
        FUN_00a8caf0(0x100001,0,0,0);
      }
    }
    else {
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 != 0) && (iVar1 = FUN_0085d810(1,1), iVar1 != 0)) {
        return;
      }
      iVar1 = FUN_00a8c760(0xb);
      if ((iVar1 != 0) && (param_1[0x9a5] != 0)) {
        FUN_00a8caf0(0x100058,0,0,0);
        fVar2 = (float10)FUN_00ddba30((float)param_1[0x9a6] + 3.1415927);
        param_1[0x25] = (int)(float)fVar2;
        return;
      }
    }
  }
  return;
}

// 00865F30  FUN_00865f30  size=467  [callgraph]
void __fastcall FUN_00865f30(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  switch(param_1[0x187]) {
  case 0:
    param_1[0x250] = 0;
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x9fb] + 3.1415927);
    param_1[0x25] = (int)(float)fVar4;
    FUN_00aa4080(0xeb,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    FUN_008639c0();
    FUN_00b895d0();
    piVar2 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar2 + 0x30))();
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0xec,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x3e4);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)();
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a92f90();
    if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
       (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
      FUN_00a8caf0(0x100055,0,0,0);
      return;
    }
  default:
    goto switchD_00865f6d_default;
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
     (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00865f6d_default:
  return;
}

// 00866120  FUN_00866120  size=262  [callgraph]
void __fastcall FUN_00866120(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    if ((param_1[0x187] == 3) && (iVar1 != 0)) {
      param_1[0x187] = 4;
    }
    iVar1 = FUN_0085d070();
    if (((iVar1 == 0) &&
        (((iVar1 = FUN_00a8c760(0), iVar1 == 0 ||
          (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
         (iVar1 = FUN_00a8c760(0), iVar1 != 0)))) && (90000.0 < (float)param_1[0x34a])) {
      if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
         (810000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100001,0,0,0);
    }
  }
  return;
}

// 00866230  FUN_00866230  size=418  [callgraph]
void __fastcall FUN_00866230(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    if ((param_1[0x187] == 3) && (iVar2 != 0)) {
      FUN_00a8caf0(0x100006,0,0,0);
      return;
    }
    iVar2 = FUN_0085d070();
    if (iVar2 == 0) {
      iVar2 = FUN_00a8c760(1);
      if (iVar2 != 0) {
        uVar1 = param_1[0x33f];
        if (((param_1[0x389] & uVar1) != 0) || (param_1[0x95b] != 0)) {
          param_1[0x250] = 1;
        }
        if (((param_1[0x388] & uVar1) != 0) || (param_1[0x95a] != 0)) {
          param_1[0x250] = 1;
        }
        if ((param_1[0x386] & uVar1) != 0) {
          param_1[0x250] = 1;
        }
        if ((param_1[0x392] & uVar1) != 0) {
          param_1[0x250] = 1;
        }
      }
      iVar2 = FUN_00a8c760(0xb);
      if ((iVar2 != 0) && (param_1[0x250] != 0)) {
        param_1[0x95b] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x10001d,0,0,0);
        return;
      }
      iVar2 = FUN_00a8c760(0);
      if ((((iVar2 == 0) || (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0)) &&
          (iVar2 = FUN_00a8c760(0), iVar2 != 0)) && (90000.0 < (float)param_1[0x34a])) {
        if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
           (810000.0 < (float)param_1[0x34a])) {
          FUN_00a8caf0(0x100002,0,0,0);
          return;
        }
        FUN_00a8caf0(0x100001,0,0,0);
      }
    }
  }
  return;
}

// 008663E0  FUN_008663e0  size=661  [callgraph]
void __fastcall FUN_008663e0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar2)();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xf5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7a800();
    FUN_008639c0();
    FUN_00b895d0();
    (**(code **)(*param_1 + 0x220))(0x41700000);
    piVar3 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar3 + 0x30))();
    param_1[0x2dd] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0xf6,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43960000;
    goto LAB_00866562;
  case 3:
LAB_00866562:
    if (param_1[0x2dd] != 0) {
      param_1[0x4fe] = 0;
    }
    param_1[0x20b] = 5;
    *(undefined2 *)(param_1 + 0x209) = 3;
    param_1[0x20a] = 0x78;
    FUN_00cbc8f0(0x4000,1);
    FUN_00b94790(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (0.0 <= fVar1 - (float)param_1[0x244]) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 4:
    uVar4 = 0xf7;
    if (param_1[0x2dd] != 0) {
      uVar4 = 0xf8;
    }
    FUN_00aa4080(uVar4,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a92f90();
    if ((*(int *)(iVar5 + 0xd0) + *(int *)(iVar5 + 0xc4) + *(int *)(iVar5 + 0xb8) == 0) ||
       (iVar5 = FUN_00e36060(0), iVar5 != 0)) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
  default:
    goto switchD_0086640a_default;
  }
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  param_1[0x20b] = 5;
  *(undefined2 *)(param_1 + 0x209) = 3;
  param_1[0x20a] = 0x78;
  FUN_00cbc8f0(0x4000,1);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar5 = FUN_00a92f90();
  if ((*(int *)(iVar5 + 0xd0) + *(int *)(iVar5 + 0xc4) + *(int *)(iVar5 + 0xb8) == 0) ||
     (iVar5 = FUN_00e36060(0), iVar5 != 0)) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_0086640a_default:
  return;
}

// 00866690  FUN_00866690  size=287  [callgraph]
void __fastcall FUN_00866690(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    if (3.0 < (float)param_1[0x248]) {
      (**(code **)(*param_1 + 0x1d4))(1);
    }
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if ((((iVar1 == 0) || (iVar1 = FUN_0085d070(), iVar1 == 0)) &&
        ((iVar1 = FUN_00a8c760(0), iVar1 == 0 ||
         (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)))) &&
       ((iVar1 = FUN_00a8c760(0), iVar1 != 0 && (90000.0 < (float)param_1[0x34a])))) {
      if (((DAT_01bea090._3_1_ & 1) == 0) &&
         ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100001,0,0,0);
    }
  }
  return;
}

// 008667B0  FUN_008667b0  size=432  [callgraph]
void __fastcall FUN_008667b0(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xfa,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    FUN_008639c0();
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x9fb] + 3.1415927);
    param_1[0x25] = (int)(float)fVar4;
    param_1[0x225] = 0x3edd2f1b;
    if (param_1[0xef0] != 0) {
      param_1[0x225] = 0x3f0a3d71;
    }
    param_1[0x224] = 0;
    param_1[0x226] = 0;
    param_1[0xa00] = 0;
    param_1[0xa01] = 0;
    param_1[0xa02] = 0;
    param_1[0x248] = 0;
    FUN_00b895d0();
    param_1[0xef1] = 0x41700000;
    param_1[0xeef] = 1;
    if (param_1[0xef0] != 0) {
      param_1[0xeef] = 1;
      param_1[0xef1] = 0x41b00000;
    }
    param_1[0xef0] = 0;
    piVar2 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar2 + 0x30))();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
     (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
    return;
  }
  FUN_00a8caf0(0x10005b,0,0,0);
  param_1[0xa00] = 0;
  param_1[0xa01] = 0;
  param_1[0xa02] = 0;
  return;
}

// 00866960  FUN_00866960  size=508  [callgraph]
void __fastcall FUN_00866960(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  param_1[0x99a] = 1;
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xfb,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_008639c0();
    fStack_20 = (float)param_1[0xa00];
    fStack_1c = (float)param_1[0xa01];
    fStack_18 = (float)param_1[0xa02];
    iStack_14 = param_1[0xa03];
    if (((fStack_20 != 0.0) || (fStack_1c != 0.0)) || (fStack_18 != 0.0)) {
      fVar1 = fStack_18 * fStack_18 + fStack_1c * fStack_1c + fStack_20 * fStack_20;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_20,&fStack_20);
        fVar1 = fStack_1c;
        fVar2 = fStack_20;
        fVar3 = fStack_18;
        if (fStack_1c <= 0.5) {
          param_1[0x225] = (int)(fStack_1c * 0.15 + (float)param_1[0x225]);
          param_1[0x224] = (int)(fStack_20 * 0.2 + (float)param_1[0x224]);
          param_1[0x226] = (int)(fStack_18 * 0.2 + (float)param_1[0x226]);
          goto LAB_00866b44;
        }
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar1 = 1.0;
        fVar2 = 0.0;
        fVar3 = 0.0;
      }
      param_1[0x225] = (int)(fVar1 * 0.15);
      param_1[0x224] = (int)(fVar2 * 0.2 + (float)param_1[0x224]);
      param_1[0x226] = (int)(fVar3 * 0.2 + (float)param_1[0x226]);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
LAB_00866b44:
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 00866B60  FUN_00866b60  size=227  [callgraph]
void __fastcall FUN_00866b60(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xfd,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    FUN_008639c0();
    param_1[0x225] = -0x41666666;
    param_1[0x224] = 0;
    param_1[0x226] = 0;
    piVar2 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar2 + 0x30))();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x225] = (int)((float)param_1[0x225] - 0.05);
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 00866C50  FUN_00866c50  size=239  [callgraph]
void __fastcall FUN_00866c50(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if ((((param_1[0x187] != 0) && (iVar1 = FUN_0085d070(), iVar1 == 0)) &&
      ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0))
      )) && ((iVar1 = FUN_00a8c760(0), iVar1 != 0 && (90000.0 < (float)param_1[0x34a])))) {
    if (((DAT_01bea090._3_1_ & 1) == 0) &&
       ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
      FUN_00a8caf0(0x100002,0,0,0);
      return;
    }
    FUN_00a8caf0(0x100001,0,0,0);
  }
  return;
}

// 00866D40  FUN_00866d40  size=344  [callgraph]
void __fastcall FUN_00866d40(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xfe,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x40000000);
    FUN_008639c0();
    FUN_00b895d0();
    (**(code **)(*param_1 + 0x3e4))();
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a92f90();
    if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) &&
       (iVar2 = FUN_00e36060(0), iVar2 == 0)) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 2:
    param_1[0x187] = 3;
    param_1[0x248] = 0x41700000;
    break;
  case 3:
    break;
  default:
    goto switchD_00866d7b_default;
  }
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  FUN_00b94790(0x3f800000,0x3f800000);
  if ((float)param_1[0x248] < 0.0) {
    FUN_00a8caf0(0x100055,0,0,0);
    return;
  }
switchD_00866d7b_default:
  return;
}

// 00866EB0  FUN_00866eb0  size=632  [callgraph]
void __fastcall FUN_00866eb0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_008670d4;
  }
  FUN_00aa4080(0xff,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  pcVar1 = *(code **)(*param_1 + 0x220);
  param_1[0x187] = param_1[0x187] + 1;
  (*pcVar1)(0x41200000);
  FUN_008639c0();
  fStack_24 = (float)param_1[0xa00];
  fStack_20 = (float)param_1[0xa01];
  fStack_1c = (float)param_1[0xa02];
  iStack_18 = param_1[0xa03];
  if (((fStack_24 != 0.0) || (fStack_20 != 0.0)) || (fStack_1c != 0.0)) {
    fVar2 = fStack_1c * fStack_1c + fStack_20 * fStack_20 + fStack_24 * fStack_24;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&fStack_24,&fStack_24);
      fVar2 = fStack_20;
      fVar3 = fStack_24;
      fVar4 = fStack_1c;
      if (fStack_20 <= 0.5) {
        param_1[0x225] = (int)(fStack_20 * 0.15 + (float)param_1[0x225]);
        param_1[0x224] = (int)(fStack_24 * 0.2 + (float)param_1[0x224]);
        param_1[0x226] = (int)(fStack_1c * 0.2 + (float)param_1[0x226]);
        goto LAB_008670a6;
      }
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar2 = 1.0;
      fVar3 = 0.0;
      fVar4 = 0.0;
    }
    param_1[0x225] = (int)(fVar2 * 0.15);
    param_1[0x224] = (int)(fVar3 * 0.2 + (float)param_1[0x224]);
    param_1[0x226] = (int)(fVar4 * 0.2 + (float)param_1[0x226]);
  }
LAB_008670a6:
  piVar5 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar5 + 0x30))();
  fVar7 = (float10)FUN_00ddba30((float)param_1[0x9fb] + 3.1415927);
  param_1[0x25] = (int)(float)fVar7;
LAB_008670d4:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar6 = FUN_00a92f90();
  if ((*(int *)(iVar6 + 0xd0) + *(int *)(iVar6 + 0xc4) + *(int *)(iVar6 + 0xb8) == 0) ||
     (iVar6 = FUN_00e36060(0), iVar6 != 0)) {
    FUN_00a8caf0(0x10005f,0,0,0);
  }
  return;
}

// 00867130  FUN_00867130  size=169  [callgraph]
void __fastcall FUN_00867130(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x100,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    FUN_008639c0();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 008671E0  FUN_008671e0  size=239  [callgraph]
void __fastcall FUN_008671e0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if ((((param_1[0x187] != 0) && (iVar1 = FUN_0085d070(), iVar1 == 0)) &&
      ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0))
      )) && ((iVar1 = FUN_00a8c760(0), iVar1 != 0 && (90000.0 < (float)param_1[0x34a])))) {
    if (((DAT_01bea090._3_1_ & 1) == 0) &&
       ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
      FUN_00a8caf0(0x100002,0,0,0);
      return;
    }
    FUN_00a8caf0(0x100001,0,0,0);
  }
  return;
}

// 008672D0  FUN_008672d0  size=250  [callgraph]
void __fastcall FUN_008672d0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x101,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    FUN_008639c0();
    FUN_00b895d0();
    (**(code **)(*param_1 + 0x3e4))();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) &&
     (iVar2 = FUN_00e36060(0), iVar2 == 0)) {
    return;
  }
  FUN_00a8caf0(0x100055,0,0,0);
  return;
}

// 008673D0  FUN_008673d0  size=451  [callgraph]
void __fastcall FUN_008673d0(int *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  
  (**(code **)(*param_1 + 0x314))();
  param_1[0x99a] = 1;
  DAT_01bea060 = DAT_01bea060 | 0x20000000;
  param_1[0x139] = 1;
  param_1[0xef3] = 0;
  iVar3 = FUN_00d82980(0x14);
  if (iVar3 != 0) {
    FUN_00d82de0(param_1[500]);
    puVar2 = (undefined4 *)param_1[500];
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = &DAT_01be9ef4;
      (**(code **)*puVar2)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar4);
      if (iVar3 != 0) {
        puVar2[0xfb] = 0;
        puVar2[0xfc] = 0;
        puVar2[0x62] = 0;
      }
    }
    param_1[0x1032] = 0;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00d4d920();
    FUN_00aa4080(0x10b,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_008639c0();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b895d0();
    FUN_00c29a50();
    FUN_00b7ab80(0x42340000,0x3dcccccd);
    break;
  case 1:
    break;
  case 2:
    param_1[0x248] = 0;
    param_1[0x187] = 3;
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (((fVar1 - (float)param_1[0x244] < 0.0) && (DAT_018b9174 != 0xa50)) &&
       ((DAT_01bea060 & 0x800000) == 0)) {
      FUN_00c17870();
      return;
    }
  default:
    goto switchD_00867475_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
     (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7ce10();
    return;
  }
switchD_00867475_default:
  return;
}

// 00869EC0  Pl1400::vf44  size=58  [class]
void __fastcall Pl1400::vf44(int param_1)

{
  int iVar1;
  
  PlBaseDLC::vf44();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  if (*(int *)(param_1 + 0x7cc) != 0) {
    FUN_00864be0(1,0,0);
  }
  return;
}

// 00869F00  Pl1400::vf400  size=119  [class]
void __fastcall Pl1400::vf400(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x768) = 1;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar2 = FUN_00a81330();
      iVar1 = 0;
      if (iVar2 != 0) {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
      }
      *(undefined4 *)(iVar1 + 0x768) = 1;
    }
  }
  FUN_00a8c760(0x38);
  FUN_00863db0();
  FUN_00be9130();
  return;
}

// 00869F80  FUN_00869f80  size=226  [between]
void __fastcall FUN_00869f80(int *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x996] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    iVar3 = FUN_00b80980();
    if (iVar3 != 0) {
      param_1[0x2dd] = 1;
    }
    uVar2 = 5;
    if (param_1[0x2dd] != 0) {
      uVar2 = 4;
    }
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00864400(uVar2,0,0x3e088889,0x3f800000,0);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0085db00(1);
    param_1[0x248] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 0086A070  FUN_0086a070  size=699  [between]
void __fastcall FUN_0086a070(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x186];
  if (iVar2 == 0x100009) {
    param_1[0x1508] = 1;
  }
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    return;
  }
  if (1 < iVar3) {
    pcVar1 = *(code **)(*param_1 + 0x1d4);
    param_1[0x991] = 0;
    (*pcVar1)(1);
    iVar3 = (**(code **)(*param_1 + 0x34c))();
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x314))();
      param_1[0x224] = (int)((float)param_1[0x224] * 0.0);
      param_1[0x225] = (int)((float)param_1[0x225] * 0.0);
      param_1[0x226] = (int)((float)param_1[0x226] * 0.0);
      param_1[0x227] = (int)((float)param_1[0x227] * 0.0);
      param_1[0x408] = (int)((float)param_1[0x408] * 0.0);
      param_1[0x409] = (int)((float)param_1[0x409] * 0.0);
      param_1[0x40a] = (int)((float)param_1[0x40a] * 0.0);
      param_1[0x40b] = (int)((float)param_1[0x40b] * 0.0);
      param_1[0x24] = 0;
      FUN_00a8caf0(0x100005,0,0,0);
      return;
    }
    if (((0.0 <= (float)param_1[0x225]) || (param_1[0x187] < 3)) ||
       (iVar3 = (**(code **)(*param_1 + 800))(0x3c888889), iVar3 == 0)) {
      if ((param_1[0x33e] & param_1[0x386]) == 0) {
        (**(code **)(*param_1 + 0x220))(0);
      }
      if (((param_1[0x187] == 1) && (iVar3 = FUN_00a959f0(0), (float)iVar3 < 5.0)) &&
         ((param_1[0x39c] != 0 && (iVar3 = FUN_00b7c530(), iVar3 != 0)))) goto LAB_0086a0c8;
      iVar3 = FUN_008649d0();
      if (iVar3 != 0) goto LAB_0086a0fb;
      iVar3 = FUN_0085d070();
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_00416d50(8);
      if ((((iVar3 == 0) && (param_1[0x250] == 0)) && (7.0 < (float)param_1[0x24a])) &&
         (iVar3 = FUN_0085da60(1,1), iVar3 != 0)) {
        return;
      }
      iVar3 = FUN_0085d810(1,0);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_0085d8b0(1);
      if (iVar3 != 0) {
        return;
      }
      if (param_1[0x187] < 3) {
        return;
      }
      if (param_1[0x250] != 0) {
        return;
      }
      iVar3 = (**(code **)(*param_1 + 800))(0x3c888889);
      if (iVar3 == 0) {
        return;
      }
    }
    FUN_00a8caf0(0x100006,0,0,0);
    if (iVar2 == 0x100009) {
      FUN_00a8caf0(0x10000b,0,0,0);
    }
    return;
  }
  if (((iVar3 != 1) || (iVar2 = FUN_00a959f0(0), 5.0 <= (float)iVar2)) || (param_1[0x39c] == 0)) {
    param_1[0x991] = 0;
    iVar2 = FUN_008649d0();
    if (iVar2 == 0) {
      FUN_0085d070();
      return;
    }
LAB_0086a0fb:
    FUN_0085e000(0);
    return;
  }
LAB_0086a0c8:
  param_1[0x39c] = 0;
  FUN_00a8caf0(0x10001b,0,0,0);
  param_1[0x991] = 0;
  return;
}

// 0086A330  FUN_0086a330  size=1529  [between]
void __fastcall FUN_0086a330(int *param_1)

{
  code *pcVar1;
  float fVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iStack_58;
  int iStack_54;
  undefined1 auStack_50 [76];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  iVar6 = param_1[0x186];
  param_1[0x999] = 1;
  (*pcVar1)();
  switch(param_1[0x187]) {
  case 0:
    FUN_0085db00(1);
    FUN_0085db80();
    uVar4 = 0x20;
    if (param_1[0x2dd] != 0) {
      uVar4 = 0x19;
    }
    if (iVar6 == 0x100009) {
      uVar4 = 0x34;
    }
    FUN_00aa4080(uVar4,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    if (iVar6 == 0x100009) {
      FUN_00864400(uVar4,0,0x3d088889,0x3f800000,0x8000000);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24a] = 0;
    param_1[0x250] = 1;
    param_1[0x988] = 0;
    param_1[0x991] = 0;
    param_1[0xa07] = 0;
    param_1[0xa08] = 0;
    FUN_00a94bc0(2,0x3c888889);
    FUN_00a94bc0(3,0x3c888889);
    FUN_00a94bc0(4,0x3c888889);
    FUN_00a94bc0(5,0x3c888889);
    FUN_00a94bc0(6,0x3c888889);
    FUN_00a94bc0(7,0x3c888889);
    FUN_00a94bc0(8,0x3c888889);
    break;
  case 1:
    break;
  case 2:
    uVar4 = 0x21;
    if (param_1[0x2dd] != 0) {
      uVar4 = 0x1a;
    }
    if (iVar6 == 0x100009) {
      uVar4 = 0x35;
    }
    FUN_00aa4080(uVar4,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    if (iVar6 == 0x100009) {
      FUN_00864400(uVar4,0,0x3d088889,0x3f800000,0x8000000);
    }
    param_1[0x224] = 0;
    param_1[0x225] = 0x3e4ccccd;
    param_1[0x226] = 0;
    param_1[0x227] = iStack_54;
    param_1[0x248] = 0x3cf5c28f;
    param_1[0x224] = 0;
    param_1[0x225] = (int)((float)param_1[0x244] * 0.03);
    param_1[0x226] = 0;
    param_1[0x23d] = param_1[0x25];
    if (90000.0 < (float)param_1[0x34a]) {
      param_1[0x23d] = param_1[0x34c];
      D3DXMatrixRotationY(auStack_50,param_1[0x34c]);
      D3DXVec3TransformNormal(&stack0xffffff98,&stack0xffffff98,&iStack_58);
      param_1[0x224] = 0x3df5c28f;
      param_1[0x226] = iStack_58;
    }
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x249] = 0x40e00000;
    param_1[0x24a] = 0;
    param_1[0x250] = 1;
    (*pcVar1)(0x40a00000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x988] = 0;
    param_1[0x987] = 1;
    param_1[0x9a2] = 0;
    param_1[0x9a3] = 0;
    param_1[0x995] = 0;
    FUN_00a94bc0(2,0x3c888889);
    FUN_00a94bc0(3,0x3c888889);
    FUN_00a94bc0(4,0x3c888889);
    FUN_00a94bc0(5,0x3c888889);
    FUN_00a94bc0(6,0x3c888889);
    FUN_00a94bc0(7,0x3c888889);
    FUN_00a94bc0(8,0x3c888889);
    goto LAB_0086a72f;
  case 3:
LAB_0086a72f:
    param_1[0x24a] = (int)((float)param_1[0x244] + (float)param_1[0x24a]);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a92f90();
    if (((*(int *)(iVar5 + 0xd0) + *(int *)(iVar5 + 0xc4) + *(int *)(iVar5 + 0xb8) == 0) ||
        (iVar5 = FUN_00e36060(0), iVar5 != 0)) && (FUN_00a8caf0(0x100005,0,0,0), iVar6 == 0x100009))
    {
      FUN_00a8caf0(0x10000a,0,0,0);
    }
switchD_0086a36b_default:
    if (0.0 <= (float)param_1[0xb17]) {
      param_1[0x250] = 0;
LAB_0086a851:
      param_1[0x225] = (int)((float)param_1[0x248] * (float)param_1[0x244] + (float)param_1[0x225]);
    }
    else {
      if (((param_1[0x33e] & param_1[0x386]) == 0) && ((float)param_1[0x249] < 3.0)) {
        param_1[0x250] = 0;
      }
      if ((float)param_1[0x249] <= 0.0) {
        param_1[0x250] = 0;
      }
      else {
        fVar2 = (float)param_1[0x249] - (float)param_1[0x244];
        param_1[0x249] = (int)fVar2;
        if ((param_1[0x250] != 0) && (fVar2 < 0.0 != (fVar2 == 0.0))) {
          param_1[0x250] = 0;
          param_1[0x225] =
               (int)((fVar2 + (float)param_1[0x244]) * (float)param_1[0x248] + (float)param_1[0x225]
                    );
        }
      }
      if (param_1[0x250] != 0) goto LAB_0086a851;
    }
    goto LAB_0086a869;
  default:
    goto switchD_0086a36b_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar6 = FUN_00a92f90();
  if ((*(int *)(iVar6 + 0xd0) + *(int *)(iVar6 + 0xc4) + *(int *)(iVar6 + 0xb8) == 0) ||
     (iVar6 = FUN_00e36060(0), iVar6 != 0)) {
    param_1[0x187] = param_1[0x187] + 1;
  }
LAB_0086a869:
  iVar6 = FUN_00a81330();
  if (iVar6 == 0) {
    if ((float)param_1[0x34a] <= 90000.0) goto LAB_0086a8ee;
    param_1[0x23d] = param_1[0x34c];
    uVar3 = 0x3ae4c388;
  }
  else {
    FUN_00b87c60(iVar6,0);
    uVar3 = 0x3bab92a6;
  }
  (**(code **)(*param_1 + 0x308))(0x3e99999a,uVar3,0x3f060a92,0);
LAB_0086a8ee:
  if (param_1[0x186] != 0x100009) {
    FUN_00b86700(0x3df5c28f,0);
    return;
  }
  FUN_00b86700(0x3e75c28f,0);
  return;
}

// 0086A940  FUN_0086a940  size=460  [between]
void __fastcall FUN_0086a940(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] != 0) {
    pcVar1 = *(code **)(*param_1 + 0x1d4);
    param_1[0x991] = 0;
    (*pcVar1)(1);
    iVar2 = (**(code **)(*param_1 + 0x34c))();
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x314))();
      param_1[0x224] = (int)((float)param_1[0x224] * 0.0);
      param_1[0x225] = (int)((float)param_1[0x225] * 0.0);
      param_1[0x226] = (int)((float)param_1[0x226] * 0.0);
      param_1[0x227] = (int)((float)param_1[0x227] * 0.0);
      param_1[0x408] = (int)((float)param_1[0x408] * 0.0);
      param_1[0x409] = (int)((float)param_1[0x409] * 0.0);
      param_1[0x40a] = (int)((float)param_1[0x40a] * 0.0);
      param_1[0x40b] = (int)((float)param_1[0x40b] * 0.0);
      param_1[0x24] = 0;
      FUN_00a8caf0(0x100005,0,0,0);
      return;
    }
    if ((param_1[0x33e] & param_1[0x386]) == 0) {
      (**(code **)(*param_1 + 0x220))(0);
    }
    iVar2 = FUN_008649d0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar2 = FUN_0085d070();
    if (iVar2 == 0) {
      if ((DAT_01bea090 & 0x800000) == 0) {
        if (((param_1[0x150c] != 0) && (param_1[0x150b] != 0)) &&
           ((*(byte *)(param_1 + 0x995) & 8) == 0)) {
          param_1[0x95b] = 0;
          param_1[0x988] = 0;
          FUN_00a8caf0(0x100019,0,0,0);
          return;
        }
        if (((*(byte *)(param_1 + 0x995) & 2) == 0) &&
           (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
          param_1[0x95a] = 0;
          param_1[0x988] = 0;
          FUN_00a8caf0(0x100017,0,0,0);
          return;
        }
      }
      iVar2 = FUN_0085d8b0(1);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_1 + 800))(0x3c888889);
        if (iVar2 != 0) {
          FUN_00a8caf0(0x100006,0,0,0);
        }
      }
    }
  }
  return;
}

// 0086AB10  FUN_0086ab10  size=1084  [between]
void __fastcall FUN_0086ab10(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iStack_58;
  int iStack_54;
  undefined1 auStack_50 [76];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x999] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    uVar5 = 0x29;
    if (param_1[0x2dd] != 0) {
      uVar5 = 0x28;
    }
    FUN_00aa4080(uVar5,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(uVar5,0,0x3d088889,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x988] = 0;
    param_1[0x991] = 0;
    FUN_0085db80();
    uVar2 = param_1[0x995];
    param_1[0x995] = uVar2 & 0x80;
    if ((uVar2 & 8) != 0) {
      param_1[0x995] = param_1[0x995] | 8;
    }
    param_1[0x24a] = 0;
    param_1[0xa07] = 0;
    param_1[0xa08] = 0;
    FUN_00a94bc0(2,0x3c888889);
    FUN_00a94bc0(3,0x3c888889);
    FUN_00a94bc0(4,0x3c888889);
    FUN_00a94bc0(5,0x3c888889);
    FUN_00a94bc0(6,0x3c888889);
    FUN_00a94bc0(7,0x3c888889);
    FUN_00a94bc0(8,0x3c888889);
    param_1[0x224] = 0;
    param_1[0x225] = 0x3e4ccccd;
    param_1[0x226] = 0;
    param_1[0x227] = iStack_54;
    param_1[0x248] = param_1[0x1505];
    param_1[0x224] = 0;
    param_1[0x225] = (int)((float)param_1[0x244] * (float)param_1[0x1505]);
    param_1[0x226] = 0;
    param_1[0x23d] = param_1[0x25];
    if (90000.0 < (float)param_1[0x34a]) {
      param_1[0x23d] = param_1[0x34c];
      D3DXMatrixRotationY(auStack_50,param_1[0x34c]);
      D3DXVec3TransformNormal(&stack0xffffff98,&stack0xffffff98,&iStack_58);
      param_1[0x224] = 0x3df5c28f;
      param_1[0x226] = iStack_58;
    }
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x249] = 0x40e00000;
    param_1[0x24a] = 0;
    param_1[0x250] = 1;
    (*pcVar1)(0x40a00000);
    param_1[0x987] = 2;
LAB_0086ad90:
    param_1[0x24a] = (int)((float)param_1[0x244] + (float)param_1[0x24a]);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar6 = FUN_00a92f90();
    if ((*(int *)(iVar6 + 0xd0) + *(int *)(iVar6 + 0xc4) + *(int *)(iVar6 + 0xb8) == 0) ||
       (iVar6 = FUN_00e36060(0), iVar6 != 0)) {
      FUN_00a8caf0(0x100005,0,0,0);
    }
  }
  else if (param_1[0x187] == 1) goto LAB_0086ad90;
  if (0.0 <= (float)param_1[0xb17]) {
    param_1[0x250] = 0;
LAB_0086ae97:
    param_1[0x225] = (int)((float)param_1[0x248] * (float)param_1[0x244] + (float)param_1[0x225]);
  }
  else {
    if (((param_1[0x33e] & param_1[0x386]) == 0) && ((float)param_1[0x249] < 3.0)) {
      param_1[0x250] = 0;
    }
    if ((float)param_1[0x249] <= 0.0) {
      param_1[0x250] = 0;
    }
    else {
      fVar3 = (float)param_1[0x249] - (float)param_1[0x244];
      param_1[0x249] = (int)fVar3;
      if ((param_1[0x250] != 0) && (fVar3 < 0.0 != (fVar3 == 0.0))) {
        param_1[0x250] = 0;
        param_1[0x225] =
             (int)((fVar3 + (float)param_1[0x244]) * (float)param_1[0x248] + (float)param_1[0x225]);
      }
    }
    if (param_1[0x250] != 0) goto LAB_0086ae97;
  }
  iVar6 = FUN_00a81330();
  if (iVar6 == 0) {
    if ((float)param_1[0x34a] <= 90000.0) goto LAB_0086af33;
    param_1[0x23d] = param_1[0x34c];
    uVar4 = 0x3ae4c388;
  }
  else {
    FUN_00b87c60(iVar6,0);
    uVar4 = 0x3bab92a6;
  }
  (**(code **)(*param_1 + 0x308))(0x3e99999a,uVar4,0x3f060a92,0);
LAB_0086af33:
  FUN_00b86700(0x3df5c28f,0);
  return;
}

// 0086AF50  FUN_0086af50  size=450  [between]
void __fastcall FUN_0086af50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[0x186];
  iVar1 = (**(code **)(*param_1 + 0x34c))();
  if (iVar1 == 0) {
    iVar1 = FUN_008649d0();
    if (iVar1 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar1 = FUN_0085d070();
    if (iVar1 == 0) {
      if (((param_1[0x150c] != 0) && (param_1[0x150b] != 0)) &&
         ((*(byte *)(param_1 + 0x995) & 8) == 0)) {
        param_1[0x95b] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x100019,0,0,0);
        return;
      }
      if (((*(byte *)(param_1 + 0x995) & 2) == 0) &&
         (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
        param_1[0x95a] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x100017,0,0,0);
        return;
      }
      if ((((DAT_01bea090 & 0x400) == 0) && ((param_1[0x33f] & param_1[0x386]) != 0)) &&
         (param_1[0x987] < 2)) {
        param_1[0xb17] = -0x40800000;
        param_1[0x987] = param_1[0x987] + 1;
        param_1[0x96d] = 0;
        param_1[0x96f] = 0;
        FUN_00a8caf0(0x100004,0,0,0);
        return;
      }
      param_1[0x96d] = 0;
      param_1[0x96f] = 0;
      param_1[0x96e] = 0;
      iVar1 = FUN_0085d8b0(1);
      if ((((iVar1 == 0) && (0 < param_1[0x187])) &&
          (iVar1 = (**(code **)(*param_1 + 800))(0x3c888889), iVar1 != 0)) &&
         (FUN_00a8caf0(0x100006,0,0,0), iVar2 == 0x10000a)) {
        FUN_00a8caf0(0x10000b,0,0,0);
      }
    }
  }
  else if ((0 < param_1[0x187]) && (iVar2 = (**(code **)(*param_1 + 800))(0x3c888889), iVar2 != 0))
  {
    FUN_00a8caf0(0x100006,0,0,0);
    return;
  }
  return;
}

// 0086B120  FUN_0086b120  size=501  [between]
void __fastcall FUN_0086b120(int *param_1)

{
  code *pcVar1;
  float fVar2;
  undefined2 uVar3;
  int iVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  iVar4 = param_1[0x186];
  param_1[0x999] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_0085db80();
    uVar3 = 0x22;
    if (param_1[0x2dd] != 0) {
      uVar3 = 0x1b;
    }
    if (iVar4 == 0x10000a) {
      uVar3 = 0x36;
    }
    FUN_00aa4080(uVar3,0,0x3e4ccccd,0x3f800000,0,0,0x3f800000);
    if (iVar4 == 0x10000a) {
      FUN_00864400(uVar3,0,0x3e4ccccd,0x3f800000,0);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24a] = 0;
LAB_0086b1df:
    if (0x78 < *(int *)(param_1[0x1d9] + 0x120)) {
      FUN_00a8caf0(0x100003,0,0,0);
      param_1[0xb17] = 0x40e00000;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
  }
  else if (param_1[0x187] == 1) goto LAB_0086b1df;
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
    if ((float)param_1[0x34a] <= 90000.0) goto LAB_0086b28b;
    param_1[0x23d] = param_1[0x34c];
  }
  else {
    FUN_00b87c60(iVar4,0);
  }
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0x3ae4c388,0x3f060a92,0);
LAB_0086b28b:
  iVar4 = (**(code **)(*param_1 + 0x34c))();
  if (iVar4 == 0) {
    FUN_00b86700(0x3df5c28f,0);
  }
  else {
    param_1[0x224] = 0;
    param_1[0x226] = 0;
  }
  iVar4 = 0;
  if ((float)param_1[0x225] <= -0.5) {
    if ((float)param_1[0x225] <= -1.0) {
      param_1[0x225] = -0x40800000;
    }
    fVar2 = (float)param_1[0x24a] - (float)param_1[0x244];
    param_1[0x24a] = (int)fVar2;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      return;
    }
    iVar4 = 0x3f800000;
  }
  param_1[0x24a] = iVar4;
  return;
}

// 0086B320  FUN_0086b320  size=488  [between]
void __fastcall FUN_0086b320(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    return;
  }
  pcVar1 = *(code **)(*param_1 + 0x1d4);
  param_1[0x991] = 0;
  (*pcVar1)(1);
  iVar2 = (**(code **)(*param_1 + 0x34c))();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x314))();
    param_1[0x224] = (int)((float)param_1[0x224] * 0.0);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.0);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.0);
    param_1[0x227] = (int)((float)param_1[0x227] * 0.0);
    param_1[0x408] = (int)((float)param_1[0x408] * 0.0);
    param_1[0x409] = (int)((float)param_1[0x409] * 0.0);
    param_1[0x40a] = (int)((float)param_1[0x40a] * 0.0);
    param_1[0x40b] = (int)((float)param_1[0x40b] * 0.0);
    param_1[0x24] = 0;
    FUN_00a8caf0(0x100005,0,0,0);
    return;
  }
  if ((param_1[0x33e] & param_1[0x386]) == 0) {
    (**(code **)(*param_1 + 0x220))(0);
  }
  iVar2 = FUN_008649d0();
  if (iVar2 != 0) {
    param_1[0x24] = 0;
    FUN_0085e000(0);
    return;
  }
  iVar2 = FUN_0085d070();
  if (iVar2 == 0) {
    if ((DAT_01bea090 & 0x800000) == 0) {
      if (((param_1[0x150c] != 0) && (param_1[0x150b] != 0)) &&
         ((*(byte *)(param_1 + 0x995) & 8) == 0)) {
        param_1[0x95b] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x100019,0,0,0);
        return;
      }
      if (((*(byte *)(param_1 + 0x995) & 2) == 0) &&
         (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
        param_1[0x95a] = 0;
        param_1[0x988] = 0;
        FUN_00a8caf0(0x100017,0,0,0);
        return;
      }
    }
    iVar2 = FUN_0085d810(1,0);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 800))(0x3c888889);
      if (iVar2 == 0) {
        return;
      }
      param_1[0x24] = 0;
      FUN_00a8caf0(0x100006,0,0,0);
      return;
    }
  }
  param_1[0x24] = 0;
  return;
}

// 0086B510  FUN_0086b510  size=863  [between]
void __fastcall FUN_0086b510(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_00e26e90();
  FUN_00e22f10(0);
  (**(code **)(*param_1 + 0x220))(0x41200000);
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    FUN_00aa4080(0x141,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00864400(0x141,0,0,0x3f800000,0x8000000);
    FUN_0085dd90(&DAT_016493dc,0,0,0x3f800000,0x8000000);
    DAT_01dc08d4 = 0;
    DAT_01dc08bc = 0;
    DAT_01dc08c8 = 0;
    FUN_00b7aa80();
    FUN_00cbc9c0(1,0);
    FUN_00b895d0();
    FUN_00a81330();
    FUN_00b96b30();
    pcVar1 = *(code **)(*param_1 + 0x314);
    param_1[0x9b5] = 0;
    (*pcVar1)();
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    param_1[0x187] = 3;
    FUN_00aa4080(0x142,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00864400(0x142,0,0,0x3f800000,0x8000000);
    FUN_0085dd90(&DAT_016493d4,0,0,0x3f800000,0x8000000);
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    param_1[0x187] = 5;
    FUN_00aa4080(0x143,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00864400(0x143,0,0,0x3f800000,0x8000000);
    FUN_0085dd90(&DAT_016493cc,0,0,0x3f800000,0x8000000);
    if (((((byte)DAT_01bea060 & 0x40) == 0) || (DAT_018b9174 == 0xc08)) || (DAT_018b9174 == 0xc09))
    {
      FUN_00a92f90();
      uVar3 = 1;
    }
    else {
      FUN_00a92f90();
      uVar3 = 2;
    }
    Animation::Motion::Unit::setCameraNo(0,uVar3);
    param_1[0x2dd] = 1;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (DAT_018b9174 != 0xf10) {
        (**(code **)(*param_1 + 0x388))(0);
        DAT_01bea090 = DAT_01bea090 | 0x4000000;
        return;
      }
      FUN_00a96030(0,0);
      FUN_00e26e90();
      FUN_00e22f10(0);
      param_1[0x187] = param_1[0x187] + 1;
      DAT_01bea090 = DAT_01bea090 | 0x4000000;
      return;
    }
    break;
  case 6:
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 0086B890  Pl1400::vf1A4  size=961  [class]
void __thiscall Pl1400::vf1A4(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  iVar4 = FUN_00a81330();
  bVar2 = false;
  piVar8 = (int *)0x0;
  if (iVar4 != 0) {
    piVar8 = (int *)FUN_00a7c8a0();
  }
  param_1[0x9f0] = 1;
  param_1[0x9f4] = param_3;
  param_1[0x9f1] = 1;
  bVar9 = (DAT_01bea060 & 0x2000000) == 0;
  bVar3 = false;
  if ((param_1[0x21c] < 1) || (param_1[0x139] != 0)) {
    bVar3 = true;
  }
  bVar10 = (param_2[0x23] & 0x10000000U) == 0;
  iVar5 = *param_2;
  bVar11 = iVar5 != 0x5f;
  param_1[0x9fc] = iVar5;
  if (iVar5 != 0x5f) {
    param_1[0x9f2] = 1;
  }
  if ((param_3 & 1) != 0) {
    param_1[0x9f3] = 1;
  }
  if ((param_3 & 0x8000) != 0) {
    param_1[0x9f3] = 0;
  }
  if (iVar5 == 0x4f) {
    FUN_00bda060(param_1[0xcf7],0);
  }
  if ((((char)param_3 < '\0') && ((param_3 & 0x60) == 0)) && (bVar11 && bVar10)) {
    if (*(int *)(iVar4 + 0x24) == 0x20040) {
      iVar5 = param_1[0xcea];
      iVar1 = param_1[0xceb];
    }
    else {
      iVar5 = param_1[0xce8];
      iVar1 = param_1[0xce9];
    }
    FUN_00b7ab80(iVar1,iVar5);
  }
  if ((param_3 & 1) != 0) {
    if ((param_3 & 0xc0202) == 0) {
      if ((piVar8 != (int *)0x0) && (iVar5 = (**(code **)(*piVar8 + 0x238))(), iVar5 != 0)) {
        piVar6 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar6 + 0x34))(param_2[0x3c]);
      }
      iVar5 = (**(code **)(*param_1 + 0x348))();
      if (((iVar5 != 0) && ((param_2[0x23] & 0x10100000U) == 0)) &&
         ((piVar8 != (int *)0x0 && (iVar5 = (**(code **)(*piVar8 + 0x23c))(), iVar5 != 0)))) {
        FUN_00bda230(0x40a00000,param_2);
      }
    }
    bVar2 = true;
  }
  if ((param_3 & 0x40) != 0) {
    FUN_00b85350(param_1[0xcf2],param_1[0xcf1],param_1[0xcf1],0,0,0x3e800000);
    bVar2 = true;
  }
  if ((param_3 & 0x20) != 0) {
    FUN_00b85350(param_1[0xcee],param_1[0xcec],param_1[0xced],1,1,0x3e800000);
  }
  iVar5 = (**(code **)(*param_1 + 0x32c))();
  if ((iVar5 != 0) && ((param_3 & 0x4000) != 0)) {
    bVar2 = true;
    FUN_00864d70();
  }
  if (((((param_3 & 0x200) != 0) && (bVar9)) && (bVar11 && bVar10)) && (!bVar3)) {
    bVar2 = true;
    iVar5 = FUN_00b80980();
    if (iVar5 == 0) {
      param_1[0x9fa] = 1;
      FUN_00a8caf0(0x100028,0,0,0);
    }
  }
  if ((((param_3 & 0x40000) != 0) && (bVar9)) && ((bVar11 && bVar10 && (!bVar3)))) {
    bVar2 = true;
    iVar5 = FUN_00b80980();
    if (iVar5 == 0) {
      param_1[0x9fa] = 1;
      FUN_00a8caf0(0x100029,0,0,0);
    }
  }
  if ((((param_3 & 0x80000) != 0) && (bVar9)) && ((bVar11 && bVar10 && (!bVar3)))) {
    bVar2 = true;
    iVar5 = FUN_00b80980();
    if (iVar5 == 0) {
      param_1[0x9fa] = 1;
      FUN_00a8caf0(0x100029,0,0,0);
    }
  }
  if ((param_3 & 2) != 0) {
    bVar2 = true;
  }
  if ((param_3 & 0x20000) != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  if ((param_3 & 8) == 0) {
    if (!bVar2) {
      return;
    }
  }
  else {
    param_1[0x9f5] = 1;
    param_1[0x9f6] = 1;
    if (bVar11 && bVar10) {
      FUN_00b7ab80(0x42340000,0x3dcccccd);
    }
    if (iVar4 != 0) {
      uVar7 = FUN_00a7c7f0();
      FUN_00a7c960(uVar7);
    }
  }
  FUN_00b7b380(iVar4,param_2 + 0x40,1);
  param_1[0xef9] = 0x42f00000;
  return;
}

// 0086BC60  Pl1400::getAttackInfo  size=1578  [class]
int __thiscall Pl1400::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_EBX;
  int unaff_EBP;
  undefined1 auStack_8 [4];
  int local_4;
  
  iVar3 = FUN_00dd3500(0x110);
  if ((iVar3 != 0) &&
     (iVar3 = CollisionAttackData::CollisionAttackData(), local_4 = iVar3, iVar3 != 0)) {
    if (*param_2 != 0) {
      puVar1 = *(uint **)(iVar3 + 8);
      puVar1[5] = *(uint *)(param_1 + 0x4f0);
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
      *puVar1 = (uint)*param_2;
      *(undefined2 *)(puVar1 + 0x21) = 1;
      if (*(int *)(param_1 + 0x754) == 0) {
        return iVar3;
      }
      FUN_00b7ed30(*param_2);
      uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
      uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
      local_4 = CONCAT31(local_4._1_3_,uVar2);
      uVar6 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
      FUN_00a9a1c0(puVar1);
      puVar1[0x24] = puVar1[0x24] | 0x800;
      iVar3 = FUN_00d82980(9);
      if (iVar3 != 0) {
        puVar1[0x24] = puVar1[0x24] | 0x40000;
        FUN_008650b0(&stack0xffffffe8);
        FUN_00865120(auStack_8);
      }
      puVar1[1] = unaff_EBX;
      puVar1[3] = uVar5;
      *(undefined1 *)(puVar1 + 4) = auStack_8[0];
      puVar1[2] = uVar6;
      switch(*param_2) {
      case 4:
        *puVar1 = 399;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 6:
        *puVar1 = 400;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 8:
        *puVar1 = 0x191;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 10:
        *puVar1 = 0x192;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0xc:
        *puVar1 = 0x193;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0xe:
        *puVar1 = 0x194;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x10:
        *puVar1 = 0x195;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x12:
        *puVar1 = 0x196;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x13:
        *puVar1 = 0x197;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x14:
        *puVar1 = 0x198;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x15:
        *puVar1 = 0x199;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x16:
        *puVar1 = 0x19a;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x17:
        *puVar1 = 0x19b;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x18:
        *puVar1 = 0x19c;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x1a:
        *puVar1 = 0x19d;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x1b:
        *puVar1 = 0x19e;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x1c:
        *puVar1 = 0x19f;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x1d:
        *puVar1 = 0x1a0;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x1e:
        *puVar1 = 0x1a1;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x20:
        *puVar1 = 0x1a2;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x22:
        *puVar1 = 0x1a3;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x23:
        *puVar1 = 0x1a4;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x24:
        *puVar1 = 0x1a5;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x25:
        *puVar1 = 0x1a6;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x26:
        *puVar1 = 0x1a7;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x28:
        *puVar1 = 0x1a9;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x29:
        *puVar1 = 0x1aa;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x2a:
        *puVar1 = 0x1b1;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x2c:
        *puVar1 = 0x1b2;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x2e:
        *puVar1 = 0x1b3;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x30:
        *puVar1 = 0x1b4;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x32:
        *puVar1 = 0x1b5;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x34:
      case 0x35:
        iVar3 = FUN_00d82980(9);
        *puVar1 = (-(uint)(iVar3 != 0) & 0x188) + 0x2f;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x36:
        *puVar1 = 0x1a8;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x38:
        *puVar1 = 0x1ab;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x3a:
        *puVar1 = 0x1ac;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x3c:
        *puVar1 = 0x1ad;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x3e:
        *puVar1 = 0x1ae;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x40:
        *puVar1 = 0x1af;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x66:
        *puVar1 = 0x4f;
        puVar1[0x23] = puVar1[0x23] | 0x8800;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x68:
        *puVar1 = 0x50;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x6a:
        *puVar1 = 0x92;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0x6c:
        *puVar1 = 0x1b0;
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        return unaff_EBP;
      case 0xf2:
        puVar1[0x24] = puVar1[0x24] | 0x2000;
        *puVar1 = 0x94;
      }
      DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
      iVar3 = unaff_EBP;
    }
    return iVar3;
  }
  FUN_00dd5650();
  return 0;
}

// 0086C430  FUN_0086c430  size=369  [between]
void __fastcall FUN_0086c430(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = FUN_0085d070();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
    if (iVar1 != 0) {
      param_1[0x24] = 0;
      FUN_00a8caf0(0x100006,0,0,0);
      return;
    }
    iVar1 = FUN_00864ad0();
    if (iVar1 != 0) {
      param_1[0x24] = 0;
      FUN_0085e000(0);
      return;
    }
    if (param_1[0x187] == 0) {
      return;
    }
    iVar1 = FUN_00a8c760(1);
    if (iVar1 != 0) {
      if (((param_1[0x150c] != 0) && (param_1[0x150b] != 0)) &&
         ((*(byte *)(param_1 + 0x995) & 8) == 0)) {
        param_1[0x95b] = 0;
        uVar2 = 0x100019;
LAB_0086c52c:
        param_1[0x988] = 0;
        FUN_00a8caf0(uVar2,0,0,0);
        param_1[0x24] = 0;
        return;
      }
      if (((*(byte *)(param_1 + 0x995) & 2) == 0) &&
         (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
        param_1[0x95a] = 0;
        uVar2 = 0x100017;
        goto LAB_0086c52c;
      }
    }
    iVar1 = FUN_00a8c760(0);
    if (((iVar1 == 0) && (iVar1 = FUN_00a8c760(0x1c), iVar1 == 0)) ||
       (iVar1 = FUN_0085d810(1,0), iVar1 == 0)) {
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(0x1c), iVar1 == 0)) {
        return;
      }
      iVar1 = FUN_0085d8b0(1);
      if (iVar1 == 0) {
        return;
      }
    }
  }
  param_1[0x24] = 0;
  return;
}

// 0086C5B0  FUN_0086c5b0  size=90  [between]
undefined4 __fastcall FUN_0086c5b0(int param_1)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = 0;
  local_c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 1;
  local_8 = 1;
  local_4 = 1;
  local_18 = 1;
  local_10 = 1;
  iVar1 = FUN_008635c0(&local_28);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2680) = 1;
    return 1;
  }
  return 0;
}

// 0086C610  FUN_0086c610  size=219  [between]
void __thiscall FUN_0086c610(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_ESI;
  float10 fVar4;
  float fStack_a8;
  float fStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  
  local_a0 = 0;
  local_9c = 0x3f800000;
  local_98 = 0x3f800000;
  D3DXVec3TransformNormal(&local_a0,&local_a0,param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  FUN_0040b190();
  uStack_40 = *(undefined4 *)(param_1 + 0x90);
  fStack_3c = *(float *)(param_1 + 0x94);
  uStack_38 = *(undefined4 *)(param_1 + 0x98);
  fStack_4c = fVar1 + unaff_ESI;
  fStack_48 = fVar2 + fStack_a8;
  fStack_44 = fVar3 + fStack_a4;
  fVar4 = (float10)FUN_00ddba30(fStack_3c + param_2);
  fStack_3c = (float)fVar4;
  local_98 = 0;
  local_9c = 0;
  FUN_00a82090("Kamaitati",0x3d070,&local_9c);
  return;
}

// 0086C6F0  FUN_0086c6f0  size=366  [between]
void __fastcall FUN_0086c6f0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar2 = FUN_0085d070();
  if (iVar2 == 0) {
    iVar2 = FUN_00864ad0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar2 = FUN_008635c0(&stack0xffffffd4);
    if (((iVar2 == 0) &&
        (((iVar2 = FUN_00a8c760(0), iVar2 == 0 ||
          (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0)) &&
         (iVar2 = FUN_00a8c760(0), iVar2 != 0)))) && (90000.0 < (float)param_1[0x34a])) {
      if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
         (810000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100001,0,0,0);
    }
  }
  return;
}

// 0086C860  FUN_0086c860  size=524  [between]
void __fastcall FUN_0086c860(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if ((param_1[0x187] != 0) && (iVar2 = FUN_0085d070(), iVar2 == 0)) {
    iVar2 = FUN_00864ad0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar2 = FUN_008635c0(&stack0xffffffd4);
    if (iVar2 == 0) {
      if (((param_1[0x33e] & param_1[0x38f]) != 0) && (iVar2 = FUN_00416d50(8), iVar2 == 0)) {
        if (90000.0 < (float)param_1[0x34a]) {
          FUN_00a8caf0(0x100038,0,0,0);
          return;
        }
        iVar2 = FUN_00a8c760(0);
        if ((iVar2 != 0) && (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 != 0)) {
          return;
        }
        iVar2 = FUN_00a8c760(0);
        if ((iVar2 != 0) && (90000.0 < (float)param_1[0x34a])) {
          if (((DAT_01bea090._3_1_ & 1) == 0) &&
             ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
            FUN_00a8caf0(0x100002,0,0,0);
            return;
          }
          FUN_00a8caf0(0x100001,0,0,0);
          return;
        }
        if (param_1[0x187] != 1) {
          return;
        }
        if ((param_1[0x33e] & param_1[0x390]) == 0) {
          return;
        }
        FUN_00a8caf0(0x100039,0,0,0);
        return;
      }
      FUN_00a8caf0(0x10003b,0,0,0);
    }
  }
  return;
}

// 0086CA70  FUN_0086ca70  size=510  [between]
void __fastcall FUN_0086ca70(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar2 = FUN_0085d070();
  if (iVar2 == 0) {
    iVar2 = FUN_00864ad0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar2 = FUN_008635c0(&stack0xffffffd4);
    if (iVar2 == 0) {
      if (((param_1[0x33e] & param_1[0x38f]) == 0) || (iVar2 = FUN_00416d50(8), iVar2 != 0)) {
        FUN_00a8caf0(0x10003b,0,0,0);
      }
      else {
        if ((float)param_1[0x34a] < 62500.0) {
          FUN_00a8caf0(0x100037,0,0,0);
          return;
        }
        iVar2 = FUN_00a8c760(0);
        if ((iVar2 == 0) || (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0)) {
          iVar2 = FUN_00a8c760(0);
          if ((iVar2 != 0) && (90000.0 < (float)param_1[0x34a])) {
            if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
               (810000.0 < (float)param_1[0x34a])) {
              FUN_00a8caf0(0x100002,0,0,0);
              return;
            }
            FUN_00a8caf0(0x100001,0,0,0);
            return;
          }
          if ((param_1[0x187] == 1) && ((param_1[0x33e] & param_1[0x390]) != 0)) {
            FUN_00a8caf0(0x100039,0,0,0);
            return;
          }
        }
      }
    }
  }
  return;
}

// 0086CC70  FUN_0086cc70  size=366  [between]
void __fastcall FUN_0086cc70(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar2 = FUN_0085d070();
  if (iVar2 == 0) {
    iVar2 = FUN_00864ad0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar2 = FUN_008635c0(&stack0xffffffd4);
    if (((iVar2 == 0) &&
        (((iVar2 = FUN_00a8c760(0), iVar2 == 0 ||
          (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0)) &&
         (iVar2 = FUN_00a8c760(0), iVar2 != 0)))) && (90000.0 < (float)param_1[0x34a])) {
      if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
         (810000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100001,0,0,0);
    }
  }
  return;
}

// 0086CDE0  FUN_0086cde0  size=366  [between]
void __fastcall FUN_0086cde0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar2 = FUN_0085d070();
  if (iVar2 == 0) {
    iVar2 = FUN_00864ad0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar2 = FUN_008635c0(&stack0xffffffd4);
    if (((iVar2 == 0) &&
        (((iVar2 = FUN_00a8c760(0), iVar2 == 0 ||
          (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0)) &&
         (iVar2 = FUN_00a8c760(0), iVar2 != 0)))) && (90000.0 < (float)param_1[0x34a])) {
      if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
         (810000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100001,0,0,0);
    }
  }
  return;
}

// 0086CF50  FUN_0086cf50  size=366  [between]
void __fastcall FUN_0086cf50(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar2 = FUN_0085d070();
  if (iVar2 == 0) {
    iVar2 = FUN_00864ad0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar2 = FUN_008635c0(&stack0xffffffd4);
    if (((iVar2 == 0) &&
        (((iVar2 = FUN_00a8c760(0), iVar2 == 0 ||
          (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0)) &&
         (iVar2 = FUN_00a8c760(0), iVar2 != 0)))) && (90000.0 < (float)param_1[0x34a])) {
      if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
         (810000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100001,0,0,0);
    }
  }
  return;
}

// 0086D0C0  FUN_0086d0c0  size=260  [between]
void __fastcall FUN_0086d0c0(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  param_1[0x2e5] = 1;
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if ((param_1[0x187] != 0) && (iVar3 = FUN_0085d070(), iVar3 == 0)) {
    iVar3 = FUN_00864ad0();
    if (iVar3 != 0) {
      FUN_0085e000(0);
      return;
    }
    uVar2 = param_1[0x33e];
    if (((param_1[0x38f] & uVar2) == 0) || (iVar3 = FUN_00416d50(8), iVar3 != 0)) {
      FUN_00a8caf0(0x100041,0,0,0);
    }
    else {
      if (90000.0 < (float)param_1[0x34a]) {
        FUN_00a8caf0(0x10003e,0,0,0);
        return;
      }
      if ((param_1[0x187] == 1) && ((param_1[0x390] & uVar2) != 0)) {
        FUN_00a8caf0(0x10003f,0,0,0);
        return;
      }
    }
  }
  return;
}

// 0086D1D0  FUN_0086d1d0  size=239  [between]
void __fastcall FUN_0086d1d0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar2 = FUN_0085d070();
  if (iVar2 == 0) {
    iVar2 = FUN_00864ad0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    if (((param_1[0x38f] & param_1[0x33e]) == 0) || ((DAT_01bea090 & 0x800000) != 0)) {
      FUN_00a8caf0(0x100041,0,0,0);
    }
    else {
      if ((float)param_1[0x34a] < 62500.0) {
        FUN_00a8caf0(0x10003d,0,0,0);
        return;
      }
      if ((param_1[0x187] == 1) && ((param_1[0x390] & param_1[0x33e]) != 0)) {
        FUN_00a8caf0(0x10003f,0,0,0);
        return;
      }
    }
  }
  return;
}

// 0086D2C0  FUN_0086d2c0  size=366  [between]
void __fastcall FUN_0086d2c0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar2 = FUN_0085d070();
  if (iVar2 == 0) {
    iVar2 = FUN_00864ad0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar2 = FUN_008635c0(&stack0xffffffd4);
    if (((iVar2 == 0) &&
        (((iVar2 = FUN_00a8c760(0), iVar2 == 0 ||
          (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0)) &&
         (iVar2 = FUN_00a8c760(0), iVar2 != 0)))) && (90000.0 < (float)param_1[0x34a])) {
      if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
         (810000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100001,0,0,0);
    }
  }
  return;
}

// 0086D430  FUN_0086d430  size=306  [between]
void __fastcall FUN_0086d430(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar2 = FUN_0085d070();
  if (iVar2 == 0) {
    iVar2 = FUN_00864ad0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar2 = FUN_00a8c760(0);
    if ((((iVar2 == 0) || (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0)) &&
        (iVar2 = FUN_00a8c760(0), iVar2 != 0)) && (90000.0 < (float)param_1[0x34a])) {
      if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
         (810000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100001,0,0,0);
    }
  }
  return;
}

// 0086D570  FUN_0086d570  size=110  [between]
void __fastcall FUN_0086d570(int *param_1)

{
  int iVar1;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  param_1[0x9b6] = 1;
  param_1[0x2e5] = 1;
  iVar1 = (**(code **)(*param_1 + 0x34c))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar1 = FUN_0085d070();
  if (iVar1 == 0) {
    iVar1 = FUN_00864ad0();
    if (iVar1 != 0) {
      FUN_0085e000(0);
    }
  }
  return;
}

// 0086D5E0  FUN_0086d5e0  size=1172  [between]
void __fastcall FUN_0086d5e0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float *pfVar8;
  float fStack_3cc;
  float local_3c8;
  float local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  int iStack_3b4;
  float local_3b0;
  float local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined1 auStack_38c [16];
  undefined4 uStack_37c;
  undefined4 uStack_378;
  float local_370;
  float local_36c;
  float local_368;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined1 auStack_34c [4];
  undefined4 uStack_348;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  float *pfStack_334;
  undefined4 uStack_330;
  undefined1 uStack_32c;
  undefined1 uStack_32b;
  undefined4 uStack_328;
  uint uStack_2b0;
  uint uStack_2ac;
  undefined4 uStack_23c;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_1dc;
  
  iVar2 = FUN_00b7d110();
  if (iVar2 != 0) {
    FUN_00b7f900();
    local_398 = FUN_00b7d110();
    iVar2 = FUN_00a12210(0x800);
    if (iVar2 != 0) {
      pfVar8 = (float *)(iVar2 + 0x10);
      local_3b0 = SQRT(*(float *)(iVar2 + 0x14) * *(float *)(iVar2 + 0x14) +
                       *(float *)(iVar2 + 0x10) * *(float *)(iVar2 + 0x10) +
                       *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x18));
      local_3ac = SQRT(*(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                       *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                       *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28));
      fVar1 = SQRT(*(float *)(iVar2 + 0x38) * *(float *)(iVar2 + 0x38) +
                   *(float *)(iVar2 + 0x34) * *(float *)(iVar2 + 0x34) +
                   *(float *)(iVar2 + 0x30) * *(float *)(iVar2 + 0x30));
      local_3c8 = *(float *)(iVar2 + 0x28) / fVar1;
      local_3c4 = *(float *)(iVar2 + 0x38) / fVar1;
      fVar6 = (float10)FUN_00ddbaa0(-(*(float *)(iVar2 + 0x18) / fVar1));
      fVar7 = (float10)fpatan((float10)local_3c8,(float10)local_3c4);
      local_370 = (float)fVar7;
      local_36c = (float)fVar6;
      fVar6 = (float10)fpatan((float10)*(float *)(iVar2 + 0x14) / (float10)local_3ac,
                              (float10)*pfVar8 / (float10)local_3b0);
      local_368 = (float)fVar6;
      local_3b0 = *(float *)(iVar2 + 0x40);
      local_3ac = *(float *)(iVar2 + 0x44);
      local_3a8 = *(undefined4 *)(iVar2 + 0x48);
      local_3a4 = *(undefined4 *)(iVar2 + 0x4c);
      local_3c0 = 0;
      local_3bc = 0;
      local_3b8 = 0x43480000;
      D3DXVec3TransformNormal(&local_3c0,&local_3c0,pfVar8);
      fStack_3cc = fStack_3cc + *(float *)(iVar2 + 0x40);
      local_3c8 = *(float *)(iVar2 + 0x44) + local_3c8;
      local_3c4 = *(float *)(iVar2 + 0x48) + local_3c4;
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      uStack_228 = 0xe;
      uStack_338 = 0x31002;
      uStack_22c = 0x27;
      (**(code **)(**(int **)(param_1 + 0x754) + 4))(0x45);
      uVar3 = FUN_00fdbc60();
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x45);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x45);
      uStack_32c = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x45);
      uStack_338 = uVar3;
      pfStack_334 = pfVar8;
      uStack_330 = uVar4;
      iVar2 = FUN_00b7f610();
      if (iVar2 == 6) {
        uStack_348 = 0x310e1;
        uStack_23c = 0x48;
        (**(code **)(**(int **)(param_1 + 0x754) + 4))(0x46);
        uVar3 = FUN_00fdbc60();
        uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x46);
        (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x46);
        uStack_32c = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x46);
        uStack_338 = uVar3;
        pfStack_334 = pfVar8;
        uStack_330 = uVar4;
      }
      uStack_1dc = FUN_009f8b40();
      uStack_2ac = uStack_2ac | 0x2008800;
      uStack_328 = *(undefined4 *)(param_1 + 0x4f0);
      uStack_2b0 = uStack_2b0 | 0x10300000;
      uStack_32b = 10;
      uStack_33c = 0x55;
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      uVar3 = 0x3f800000;
      iVar2 = FUN_00b7f610();
      if (iVar2 == 6) {
        uVar3 = 0x3f19999a;
      }
      if (*(int *)(param_1 + 0x1410) == 0) {
        FUN_0043fe30(&fStack_3cc,param_1 + 0x2760,auStack_38c,uVar3,0x43480000);
      }
      else {
        FUN_00416e30(&fStack_3cc,&stack0xfffffc24,auStack_38c,uVar3,0x43480000);
      }
      iVar2 = FUN_00b7f610();
      if (iVar2 == 6) {
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) {
          FUN_0043fed0(iVar2,*(undefined2 *)(param_1 + 0x26f4),param_1 + 10000);
        }
        if (*(int *)(param_1 + 0x1410) != 0) {
          iVar2 = FUN_00b7b260();
          iVar5 = FUN_00a81330();
          if (iVar5 != 0) {
            FUN_0043fed0(iVar5,*(undefined2 *)(iVar2 + 4),iVar2 + 0x20);
          }
        }
      }
      FUN_00ad3be0(*(undefined4 *)(iStack_3b4 + 0x4f0),auStack_34c);
      uStack_35c = 0;
      uStack_358 = 0;
      uStack_354 = 0;
      local_3a8 = 0xffffffff;
      local_3b0 = 0.0;
      local_3a4 = 0xffffffff;
      local_3ac = 0.0;
      uStack_3a0 = 0xffffffff;
      uStack_350 = 0xffffffff;
      uStack_394 = 0xffffffff;
      uStack_39c = 0xfffffffe;
      local_398 = 0;
      uStack_378 = 0;
      uStack_390 = 0x1010001;
      uStack_37c = 8;
      FUN_00c5e350(param_1,&local_3b0,&uStack_37c);
    }
  }
  return;
}

// 0086DA80  FUN_0086da80  size=1151  [between]
void __thiscall FUN_0086da80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined1 local_3b8 [8];
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined1 local_390 [4];
  float local_38c;
  float local_388;
  float local_384;
  undefined1 local_374 [4];
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  float local_35c;
  float local_358;
  float local_354;
  uint local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  char *local_340;
  undefined4 local_33c;
  undefined4 uStack_338;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined1 uStack_31c;
  undefined1 uStack_31b;
  undefined4 uStack_318;
  uint uStack_2a0;
  uint uStack_29c;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined2 uStack_1c4;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  
  iVar1 = FUN_00b7d110();
  if (iVar1 != 0) {
    FUN_00b7f900();
    iVar1 = FUN_00a12210(0x701);
    local_3a0 = param_2;
    local_39c = *(undefined4 *)(param_1 + 0x94);
    local_398 = 0;
    local_3e0 = *(undefined4 *)(iVar1 + 0x40);
    local_3dc = *(float *)(iVar1 + 0x44);
    local_3d8 = *(float *)(iVar1 + 0x48);
    local_3d4 = *(float *)(iVar1 + 0x4c);
    iVar1 = FUN_00b7d110();
    if (iVar1 != 0) {
      iVar1 = FUN_00b7d110();
      local_3e0 = *(undefined4 *)(iVar1 + 0x40);
      local_3dc = *(float *)(iVar1 + 0x44);
      local_3d8 = *(float *)(iVar1 + 0x48);
      local_3d4 = *(float *)(iVar1 + 0x4c);
    }
    FUN_00a8d230(&local_3b0);
    iVar1 = FUN_009f8b40();
    local_370 = local_3b0;
    local_350 = iVar1 << 0x10 | 6;
    local_36c = local_3ac;
    local_368 = local_3a8;
    local_364 = local_3a4;
    local_360 = local_3e0;
    local_35c = local_3dc;
    local_358 = local_3d8;
    local_354 = local_3d4;
    local_34c = 0;
    local_348 = 0;
    local_344 = 0;
    local_340 = "throw grenade";
    local_33c = 0;
    iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_2(local_390,0,local_374,local_3b8,&local_370)
    ;
    if (iVar1 != 0) {
      local_3dc = local_38c;
      local_3d8 = local_388;
      local_3d4 = local_384;
    }
    local_3d0 = 0;
    local_3cc = 0;
    local_3c8 = 0x41700000;
    D3DXVec3TransformNormal(&local_3d0,&local_3d0,param_1 + 0x10);
    local_3dc = *(float *)(param_1 + 0x40) + local_3dc;
    local_3d8 = *(float *)(param_1 + 0x44) + local_3d8;
    local_3d4 = *(float *)(param_1 + 0x48) + local_3d4;
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    uStack_228 = 0x11;
    uStack_338 = 0x31014;
    uStack_22c = 0x26;
    uStack_1cc = FUN_009f8b40();
    uStack_328 = 1;
    uStack_320 = 1;
    uStack_31c = 0;
    uStack_324 = 100;
    iVar1 = FUN_00b7f610();
    if (iVar1 == 1) {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 4))(0x47);
      uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x47);
      local_3d0 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x47);
      uStack_31c = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x47);
      uStack_324 = uStack_3c4;
      uStack_328 = uVar2;
      uStack_320 = uVar3;
    }
    uStack_2a0 = uStack_2a0 | 0x10000000;
    uStack_29c = uStack_29c | 0x8800;
    uStack_31b = 10;
    uStack_32c = 0x57;
    iVar1 = FUN_00b7f610();
    if (iVar1 == 2) {
      uStack_2a0 = uStack_2a0 | 0x20;
      uStack_228 = 0x29;
      uStack_338 = 0x31031;
      uStack_22c = 0x52;
      uStack_32c = 0x59;
    }
    iVar1 = FUN_00b7f610();
    if (iVar1 == 3) {
      uStack_228 = 0x29;
      uStack_338 = 0x31041;
      uStack_22c = 0x53;
      uStack_32c = 0x5a;
    }
    iVar1 = FUN_00b7f610();
    if (iVar1 == 4) {
      uStack_2a0 = uStack_2a0 | 0x20000;
      uStack_338 = 0x31051;
      uStack_22c = 0x51;
      uStack_32c = 0x58;
    }
    iVar1 = FUN_00b7f610();
    if (iVar1 == 7) {
      uStack_228 = 0x10;
      uStack_338 = 0x310a1;
    }
    uStack_318 = *(undefined4 *)(param_1 + 0x4f0);
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00416e30(&stack0xfffffc14,&local_3dc,&local_3ac,param_3,0x44480000);
    uVar2 = FUN_00b7d160();
    FUN_00a7c940(uVar2);
    uStack_1c8 = FUN_00a81330();
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = local_3a0;
    uStack_1c4 = 0;
    iVar1 = FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),&local_33c);
    iVar4 = FUN_00b7f610();
    if (iVar4 == 7) {
      FUN_00b8f230(*(undefined4 *)(iVar1 + 0x4f0));
    }
  }
  return;
}

// 0086DF00  Pl1400::vf150  size=1016  [class]
void __thiscall Pl1400::vf150(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  param_1[0xf98] = 0;
  param_1[0xf99] = 0;
  param_1[0xf9a] = 0;
  param_1[0xf9b] = 0x3f800000;
  param_1[3999] = 0x3f800000;
  param_1[0xf9c] = 0;
  param_1[0xf9d] = 0;
  param_1[0xf9e] = 0;
  if (param_3 == 0) {
    return;
  }
  FUN_00b7aa80();
  FUN_00864be0(0,0,0);
  FUN_00b8a620();
  param_1[0x24] = 0;
  param_1[0x991] = 0;
  FUN_00a94bc0(3,0x3c888889);
  FUN_00a94bc0(4,0x3c888889);
  FUN_00a94bc0(5,0x3c888889);
  FUN_00a94bc0(6,0x3c888889);
  FUN_00a94bc0(7,0x3c888889);
  FUN_00a94bc0(8,0x3c888889);
  FUN_00a7c950();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  FUN_00a7c8a0();
  FUN_00b7b380(param_3,param_1 + 0x10,1);
  param_1[0x9b5] = 0;
  if (param_2 == 0x28) {
    FUN_00a8caf0(0x10006a,0,0,0);
    return;
  }
  if (param_2 == 0x29) {
    FUN_00a8caf0(0x10006a,6,0,0);
    return;
  }
  if (param_2 == 0x2a) {
    FUN_00a8caf0(0x10006b,0,0,0);
    return;
  }
  if (param_2 == 0x2d) {
    FUN_00bee830();
    FUN_00a8caf0(0x100068,0,0,0);
    return;
  }
  if (param_2 == 0x32) {
    FUN_00bee830();
    FUN_00a8caf0(0x100069,0,0,0);
    return;
  }
  if (param_2 == 0x37) {
    FUN_00bee830();
    FUN_00a8caf0(0x10006c,0,0,0);
    return;
  }
  if (param_2 != 0x38) {
    if (param_2 == 0x39) {
      FUN_00bee830();
      FUN_00a8caf0(0x10006e,0,0,0);
      return;
    }
    if (param_2 == 0x57) {
      FUN_00a8caf0(0x10006f,0,0,0);
      return;
    }
    if ((param_2 != 0x5d) && (param_2 != 0x5e)) {
      if (param_2 == 0x89) {
        FUN_00bee830();
        FUN_00a8caf0(0x100074,0,0,0);
        return;
      }
      if ((param_2 != 0x5f) && (param_2 != 100)) {
        if (param_2 == 0x60) {
          FUN_00bee830();
          FUN_00a8caf0(0x10007a,0,0,0);
          return;
        }
        if (param_2 == 0x61) {
          FUN_00bee830();
          FUN_00a8caf0(0x100079,0,0,0);
          return;
        }
        if (param_2 == 0x62) {
          FUN_00bee830();
          FUN_00a8caf0(0x10007b,0,0,0);
          return;
        }
        if (param_2 != 99) {
          if (param_2 == 0x67) {
            FUN_00a8caf0(0x100035,0,0,0);
            return;
          }
          if (param_2 != 0x86) {
            if (param_2 != 0x87) {
              return;
            }
            FUN_00bee830();
            FUN_00a8caf0(0x10007f,0,0,0);
            return;
          }
          FUN_00bee830();
          FUN_00a8caf0(0x10007e,0,0,0);
          return;
        }
        local_20 = 0xc3468000;
        local_1c = 0xc0e3851f;
        local_18 = 0x43f7547b;
        local_30 = 0;
        local_2c = 0x3fc90fdb;
        local_28 = 0;
        (**(code **)(*param_1 + 0x7c))(&local_20,&local_30);
        return;
      }
    }
    FUN_00bee830();
    return;
  }
  FUN_00bee830();
  FUN_00a8caf0(0x10006d,0,0,0);
  return;
}

// 0086E300  FUN_0086e300  size=318  [between]
void __fastcall FUN_0086e300(int *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    pcVar1 = *(code **)(*param_1 + 0x39c);
    param_1[0x2e7] = 0;
    param_1[0x2eb] = 0;
    (*pcVar1)();
    FUN_00b88400();
    uVar2 = 0x116;
    if (param_1[0x2dd] != 0) {
      uVar2 = 0x114;
    }
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(uVar2,0,0x3e088889,0x3f800000,0x8000000);
    param_1[0x24] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x988] = 0;
    param_1[0x2dd] = 1;
    param_1[0x9b5] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00b7d0b0();
  if (iVar3 != 0) {
    FUN_00b7d0b0();
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar5 = &DAT_01be9d80;
      (**(code **)(*piVar4 + 4))(&DAT_01be9d80);
      iVar3 = FUN_00dd6d80(puVar5);
      if (iVar3 != 0) {
        FUN_00a95ee0(0,param_1);
      }
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x100031,0,0,0);
  }
  return;
}

// 0086E440  FUN_0086e440  size=304  [between]
void __fastcall FUN_0086e440(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    pcVar1 = *(code **)(*param_1 + 0x39c);
    param_1[0x2e7] = 0;
    param_1[0x2eb] = 0;
    (*pcVar1)();
    FUN_00b88400();
    FUN_00aa4080(0x115,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x115,0,0x3e088889,0x3f800000,0x8000000);
    param_1[0x24] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x988] = 0;
    param_1[0x2dd] = 1;
    param_1[0x9b5] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00b7d0b0();
  if (iVar2 != 0) {
    FUN_00b7d0b0();
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01be9d80;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d80);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        FUN_00a95ee0(0,param_1);
      }
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0x100031,0,0,0);
  }
  return;
}

// 0086E570  FUN_0086e570  size=244  [between]
void __fastcall FUN_0086e570(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x1d4);
  param_1[0x991] = 0;
  (*pcVar1)(1);
  FUN_00b7d8b0();
  param_1[0x95d] = 0;
  if (param_1[0x187] != 0) {
    FUN_0085d070();
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c8a0();
    }
    iVar2 = (**(code **)(*param_1 + 800))(0x3c888889);
    if ((iVar2 != 0) && (iVar2 = FUN_00a8c760(0x12), iVar2 == 0)) {
      FUN_00a8caf0(0x100006,0,0,0);
      return;
    }
    if ((DAT_01bea090 & 0x8000) == 0) {
      iVar2 = FUN_00a8c760(0x17);
      if (((iVar2 == 0) && (iVar2 = FUN_00a8c760(1), iVar2 == 0)) && ((float)param_1[0xd07] <= 0.0))
      {
        return;
      }
      iVar2 = FUN_008649d0();
      if (iVar2 != 0) {
        if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
          FUN_00da0f50(0,0,0);
        }
        FUN_0085e000(0);
      }
    }
  }
  return;
}

// 0086E670  FUN_0086e670  size=594  [between]
void __fastcall FUN_0086e670(int *param_1)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x99,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x248] = 0x42700000;
    pcVar2 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)();
    FUN_008639c0();
    (**(code **)(*param_1 + 0x220))(0x41200000);
    param_1[0x2dd] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  iVar7 = FUN_00a92f90();
  if ((*(int *)(iVar7 + 0xd0) + *(int *)(iVar7 + 0xc4) + *(int *)(iVar7 + 0xb8) == 0) ||
     (iVar7 = FUN_00e36060(0), iVar7 != 0)) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  if (param_1[0xa09] != 0) {
    pfVar1 = (float *)(param_1 + 0xa0c);
    FUN_00a8e880(pfVar1);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
    fStack_20 = (float)param_1[0x10] - *pfVar1;
    fStack_18 = (float)param_1[0x12] - (float)param_1[0xa0e];
    fStack_14 = (float)param_1[0x13] - (float)param_1[0xa0f];
    fStack_1c = 0.0;
    fVar3 = fStack_18 * fStack_18 + fStack_20 * fStack_20;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&fStack_20,&fStack_20);
      fVar3 = fStack_18;
      fVar5 = fStack_1c;
      fVar6 = fStack_20;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar3 = 0.0;
      fVar5 = 1.0;
      fVar6 = 0.0;
    }
    fVar4 = 1.0 - SQRT(((float)param_1[0x12] - (float)param_1[0xa0e]) *
                       ((float)param_1[0x12] - (float)param_1[0xa0e]) +
                       ((float)param_1[0x10] - *pfVar1) * ((float)param_1[0x10] - *pfVar1)) * 0.1;
    if (fVar4 < 0.2) {
      fVar4 = 0.2;
    }
    param_1[0x14] = (int)((float)param_1[0x14] + fVar6 * fVar4);
    param_1[0x15] = (int)((float)param_1[0x15] + fVar4 * fVar5);
    param_1[0x16] = (int)((float)param_1[0x16] + fVar3 * fVar4);
    param_1[0x17] = (int)((float)param_1[0x17] + fVar4 * fStack_14);
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 0086E8D0  Pl1400::vf394  size=88  [class]
void __fastcall Pl1400::vf394(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  Pl0000::vf394();
  *(undefined1 *)(param_1 + 0x5450) = 0;
  iVar1 = FUN_00b7d0b0();
  if (iVar1 != 0) {
    FUN_00b7d0b0();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9d80;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d80);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00a94bc0(1,0);
      }
    }
  }
  return;
}

// 0086E930  FUN_0086e930  size=189  [callgraph]
void __fastcall FUN_0086e930(int param_1)

{
  if (3 < *(byte *)(param_1 + 0x1078)) {
    *(undefined1 *)(param_1 + 0x5450) = 0;
    return;
  }
  if ((*(int *)(param_1 + 0xb74) == 0) && (*(byte *)(param_1 + 0x5450) < 2)) {
    *(undefined1 *)(param_1 + 0x5450) = 2;
    FUN_00aa4080(0xba,1,0x3d888889,0x3f800000,0x40200,0,0x3f800000);
    FUN_00aa4080(0xb9,2,0x3d888889,0x3f800000,0x8040200,0,0x3f800000);
    FUN_00864400(0xb9,1,0x3d888889,0x3f800000,0x8040200);
  }
  return;
}

// 0086E9F0  FUN_0086e9f0  size=142  [callgraph]
void __fastcall FUN_0086e9f0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x5450);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x5450) = 1;
  }
  else {
    if (cVar1 == '\x02') {
      *(undefined1 *)(param_1 + 0x5450) = 3;
    }
    else if (cVar1 != '\x03') {
      return;
    }
    if (3 < *(byte *)(param_1 + 0x1078)) {
      *(undefined1 *)(param_1 + 0x5450) = 0;
      return;
    }
    iVar2 = FUN_00a94ce0(2);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x5450) = 0;
      FUN_00a94bc0(1,0x3d888889);
      FUN_00a94bc0(2,0x3d888889);
      FUN_00864590(1,0x3d888889);
      return;
    }
  }
  return;
}

// 0086EA80  FUN_0086ea80  size=1234  [callgraph]
void __fastcall FUN_0086ea80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  int local_94;
  
  if (*(int *)(param_1 + 0x4f0) == 0) {
    return;
  }
  FUN_0040b190();
  if ((DAT_01bea02c == 0) && (DAT_01bea028 == DAT_01bea024)) {
    local_94 = *(int *)(DAT_01bea01c + 4);
LAB_0086eada:
    if (DAT_01bea028 != DAT_01bea024) goto LAB_0086eae5;
    local_a4 = *(undefined4 *)(DAT_01bea01c + 0xc);
LAB_0086eaf1:
    if (DAT_01bea028 == DAT_01bea024) {
      local_9c = *(int *)(DAT_01bea01c + 8);
      goto LAB_0086eb1f;
    }
  }
  else {
    local_94 = -1;
    if (DAT_01bea02c == 0) goto LAB_0086eada;
LAB_0086eae5:
    local_a4 = 0xffffffff;
    if (DAT_01bea02c == 0) goto LAB_0086eaf1;
  }
  local_9c = -1;
LAB_0086eb1f:
  if ((DAT_01bea004 == 0) && (DAT_01bea000 == DAT_01be9ffc)) {
    local_a0 = *DAT_01be9ff4;
  }
  else {
    local_a0 = 0xffffffff;
  }
  if ((DAT_01bea02c == 0) && (DAT_01bea028 == DAT_01bea024)) {
    local_98 = *(int *)(DAT_01bea01c + 0x10);
  }
  else {
    local_98 = -1;
  }
  if ((local_94 != -1) && (iVar1 = FUN_00a82090("Sam_Hair",local_94,0), iVar1 != 0)) {
    FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,5,0);
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar3 = FUN_00a81330();
      iVar1 = 0;
      if (iVar3 != 0) {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
      }
      *(int *)(iVar1 + 0x518) = param_1;
    }
  }
  if ((local_9c != -1) && (iVar1 = FUN_00a82090("Sam_Helmet",local_9c,0), iVar1 != 0)) {
    piVar4 = (int *)FUN_00a7c8a0();
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00a8c5f0(2,*(undefined4 *)(param_1 + 0x4f0),iVar1,5,5);
    if (piVar4 != (int *)0x0) {
      cModelBase::setRootPartsNo(5);
      (**(code **)(*piVar4 + 100))();
      piVar4[0x146] = param_1;
    }
  }
  iVar1 = FUN_00a82090("Sam_Sheath",local_a4,0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x5448) = 0x7f0;
    *(undefined4 *)(param_1 + 0x5444) = 0x7f0;
    FUN_00a8c5f0(3,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x7f0,0);
    uVar2 = 0;
    FUN_00a7c8a0(0);
    cModelBase::setRootPartsNo(uVar2);
    iVar3 = FUN_00a7c8a0();
    *(int *)(iVar3 + 0x518) = param_1;
  }
  *(int *)(param_1 + 0x1194) = iVar1;
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  *(undefined4 *)(param_1 + 0x3920) = 0xffffffff;
  iVar3 = FUN_00a82090("Sam_Blade",local_a0,0);
  if ((iVar3 != 0) && (iVar1 != 0)) {
    uVar10 = 0;
    uVar8 = 0x710;
    uVar2 = 4;
    iVar6 = iVar3;
    FUN_00a7c8a0(4,iVar1,iVar3,0x710,0);
    FUN_00a8c5f0(uVar2,iVar1,iVar6,uVar8,uVar10);
  }
  uVar2 = 0;
  *(int *)(param_1 + 0x1190) = iVar3;
  FUN_00a7c8a0(0);
  cModelBase::setRootPartsNo(uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  if (*(int *)(param_1 + 0x1190) != 0) {
    uVar2 = 1;
    FUN_00a7c8a0(1);
    FUN_00a92fb0();
    FUN_00e08640(uVar2);
    iVar1 = FUN_00a7c8a0();
    *(int *)(iVar1 + 0x518) = param_1;
  }
  *(undefined4 *)(param_1 + 0x13f4) = 0;
  FUN_00b949b0();
  if (local_98 != -1) {
    uVar2 = FUN_00a82090("Sam_FACE",local_98,0);
    FUN_00a7c970(uVar2);
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      FUN_00a8c5f0(9,*(undefined4 *)(param_1 + 0x4f0),iVar1,0,0);
      FUN_00a8c5f0(10,*(undefined4 *)(param_1 + 0x4f0),iVar1,1,1);
      FUN_00a8c5f0(0xb,*(undefined4 *)(param_1 + 0x4f0),iVar1,2,2);
      FUN_00a8c5f0(0xc,*(undefined4 *)(param_1 + 0x4f0),iVar1,3,3);
      FUN_00a8c5f0(0xd,*(undefined4 *)(param_1 + 0x4f0),iVar1,4,4);
      FUN_00a8c5f0(0xe,*(undefined4 *)(param_1 + 0x4f0),iVar1,5,5);
      FUN_00a8c5f0(0xf,*(undefined4 *)(param_1 + 0x4f0),iVar1,6,6);
      FUN_00a8c5f0(0x10,*(undefined4 *)(param_1 + 0x4f0),iVar1,10,10);
      if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
        iVar1 = FUN_00a7c8a0();
        *(uint *)(iVar1 + 0x364) = *(uint *)(iVar1 + 0x364) & 0xfffffffd;
        piVar4 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar4 + 0x1c))();
        uVar2 = 0;
        FUN_00a7c8a0(0);
        cModelBase::setRootPartsNo(uVar2);
        uVar2 = 1;
        FUN_00a7c8a0(1);
        FUN_00a92fb0();
        FUN_00e08640(uVar2);
        iVar1 = FUN_004b5380();
        uVar11 = 0x3f800000;
        iVar1 = iVar1 + 0x494;
        uVar9 = 0;
        uVar7 = 0;
        uVar5 = 0x3f800000;
        uVar10 = 0x3d088889;
        uVar8 = 0;
        uVar2 = 1;
        FUN_004b5380(iVar1,1,0,0x3d088889,0x3f800000,0,0,0x3f800000);
        FUN_00a9f3c0(iVar1,uVar2,uVar8,uVar10,uVar5,uVar7,uVar9,uVar11);
        iVar1 = FUN_004b5380();
        *(int *)(iVar1 + 0x518) = param_1;
      }
      *(undefined4 *)(param_1 + 0xb9c) = 0;
      *(undefined4 *)(param_1 + 0xbac) = 0;
    }
  }
  return;
}

// 0086EFB0  FUN_0086efb0  size=384  [callgraph]
undefined4 __thiscall FUN_0086efb0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (param_4 == 0) {
    if (*(int *)(param_1 + 0x40cc) == 0) goto LAB_0086f00e;
  }
  else if (*(float *)(param_1 + 0x40d0) == 0.0) goto LAB_0086f00e;
  if ((param_3 != 0) && ((DAT_01bea090 & 0x1000000) == 0)) {
    *(undefined4 *)(param_1 + 0x40d0) = 0;
    *(undefined4 *)(param_1 + 0x543c) = 0;
    *(undefined4 *)(param_1 + 0x25b4) = 0;
    *(undefined4 *)(param_1 + 0x25bc) = 0;
    if ((iVar1 != 0x10000a) && ((iVar1 != 0x10000b && (iVar1 != 0x100009)))) {
      FUN_00a8caf0(0x100008,0,0,0);
      *(undefined4 *)(param_1 + 0x2690) = 0;
      FUN_0086e930();
      *(undefined4 *)(param_1 + 0xb74) = 1;
      return 1;
    }
    FUN_00a8caf0(0x100008,0,0,0);
    *(undefined4 *)(param_1 + 0x61c) = 2;
    *(undefined4 *)(param_1 + 0x2690) = 1;
    FUN_0086e930();
    *(undefined4 *)(param_1 + 0xb74) = 1;
    return 1;
  }
LAB_0086f00e:
  if (((DAT_01bea090 & 0x400) == 0 &&
       (*(int *)(param_1 + 0x25b8) == 0 &&
       (*(int *)(param_1 + 0x25b4) == 0 &&
       (*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe18)) != 0))) && (param_2 != 0)) {
    *(int *)(param_1 + 0x261c) = *(int *)(param_1 + 0x261c) + 1;
    *(undefined4 *)(param_1 + 0x2c5c) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x25b4) = 0;
    *(undefined4 *)(param_1 + 0x25bc) = 0;
    FUN_00a8caf0(0x100003,0,0,0);
    if (iVar1 == 0x100008) {
      FUN_00a8caf0(0x100009,0,0,0);
    }
    return 1;
  }
  *(undefined4 *)(param_1 + 0x25b4) = 0;
  *(undefined4 *)(param_1 + 0x25bc) = 0;
  *(undefined4 *)(param_1 + 0x25b8) = 0;
  return 0;
}

// 0086F130  FUN_0086f130  size=345  [callgraph]
void __fastcall FUN_0086f130(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
  FUN_00b8de70();
  iVar1 = FUN_00b7d0b0();
  if (iVar1 != 0) {
    FUN_00b7d0b0();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9d80;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d80);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00a94bc0(1,0);
      }
    }
  }
  FUN_00da9230(0);
  param_1[0x24] = 0;
  (**(code **)(*param_1 + 0x394))();
  FUN_00a8d280();
  if ((DAT_01bea090 & 0x80000000) != 0) {
    FUN_00a9e120(3,0x711,0);
  }
  FUN_00a94bc0(2,0x3c888889);
  FUN_00a94bc0(3,0x3c888889);
  FUN_00a94bc0(4,0x3c888889);
  FUN_00a94bc0(5,0x3c888889);
  FUN_00a94bc0(6,0x3c888889);
  FUN_00a94bc0(7,0x3c888889);
  FUN_00a94bc0(8,0x3c888889);
  param_1[0xe4b] = 0;
  FUN_00b7cd90();
  param_1[0xe16] = 0;
  iVar1 = FUN_00a12210(0xf00);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 0x1000;
  }
  return;
}

// 0086F290  FUN_0086f290  size=67  [callgraph]
void __fastcall FUN_0086f290(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_00864b20();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    FUN_00864be0(0,0,0);
  }
  return;
}

// 0086F2E0  FUN_0086f2e0  size=131  [callgraph]
void FUN_0086f2e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  FUN_00863be0();
  if (param_1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4b0) == 0x2020a)) {
      local_20 = 0x439b63d7;
      local_1c = 0x41a347ae;
      local_18 = 0x42c12e14;
    }
  }
  FUN_00864dd0(param_1,param_2,&local_20);
  return;
}

// 0086F370  FUN_0086f370  size=941  [callgraph]
undefined4 __fastcall FUN_0086f370(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_2c = 0x100007;
  if (param_1[0x21c] < 1) {
    return 0x100007;
  }
  iVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (iVar1 == 0) {
    uStack_14 = 0;
    uStack_1c = 1;
    uStack_c = 0;
    uStack_8 = 1;
    uStack_4 = 1;
    uStack_20 = 1;
    uStack_28 = 1;
    uStack_24 = 1;
    uStack_18 = 1;
    uStack_10 = 0;
    iVar1 = FUN_008635c0(&uStack_28);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(0);
      if (iVar1 != 0) {
        uStack_18 = 0;
        uStack_14 = 0;
        uStack_1c = 1;
        uStack_10 = 0;
        uStack_c = 0;
        uStack_8 = 1;
        uStack_4 = 1;
        uStack_20 = 1;
        uStack_28 = 1;
        uStack_24 = 1;
        iVar1 = FUN_008635c0(&uStack_28);
        if (iVar1 != 0) goto LAB_0086f60a;
      }
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 != 0) && (90000.0 < (float)param_1[0x34a])) {
        if (((DAT_01bea090 & 0x1000000) != 0) ||
           (((DAT_01bea090 & 0x10) != 0 || ((float)param_1[0x34a] <= 810000.0)))) {
          uVar3 = 0x100001;
        }
        else {
          uVar3 = 0x100002;
        }
        FUN_00a8caf0(uVar3,0,0,0);
        goto LAB_0086f60a;
      }
    }
    else {
LAB_0086f60a:
      local_2c = FUN_00a8cab0();
    }
    uVar4 = 1;
    uVar3 = FUN_00a8c760(0x11);
    uVar2 = FUN_00a8c760(0x1c);
    iVar1 = FUN_0086efb0(uVar2,uVar3,uVar4);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x39c))();
      local_2c = FUN_00a8cab0();
    }
    iVar1 = FUN_00a8c760(0);
    if (iVar1 == 0) {
LAB_0086f690:
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 == 0) || ((float)param_1[0x34a] <= 90000.0)) goto LAB_0086f703;
      if (((DAT_01bea090 & 0x1000000) != 0) ||
         (((DAT_01bea090 & 0x10) != 0 || ((float)param_1[0x34a] <= 810000.0)))) {
        uVar3 = 0x100001;
      }
      else {
        uVar3 = 0x100002;
      }
      FUN_00a8caf0(uVar3,0,0,0);
    }
    else {
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_1c = 1;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_8 = 1;
      uStack_4 = 1;
      uStack_20 = 1;
      uStack_28 = 1;
      uStack_24 = 1;
      iVar1 = FUN_008635c0(&uStack_28);
      if (iVar1 == 0) goto LAB_0086f690;
    }
    (**(code **)(*param_1 + 0x39c))();
  }
  else {
    if (((DAT_01bea090 & 0x800000) == 0) && (iVar1 = FUN_00a8c760(1), iVar1 != 0)) {
      if ((param_1[0x150c] == 0) ||
         ((param_1[0x150b] == 0 || ((*(byte *)(param_1 + 0x995) & 8) != 0)))) {
        if (((*(byte *)(param_1 + 0x995) & 2) != 0) ||
           (((param_1[0x33f] & param_1[0x388]) == 0 && (param_1[0x95a] == 0)))) goto LAB_0086f42a;
        param_1[0x95a] = 0;
        uVar3 = 0x100017;
      }
      else {
        param_1[0x95b] = 0;
        uVar3 = 0x100019;
      }
      param_1[0x988] = 0;
      FUN_00a8caf0(uVar3,0,0,0);
      local_2c = FUN_00a8cab0();
    }
LAB_0086f42a:
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) {
      if (((DAT_01bea090 & 0x400) == 0) &&
         (((param_1[0x33f] & param_1[0x386]) != 0 && (param_1[0x987] < 2)))) {
        param_1[0xb17] = -0x40800000;
        param_1[0x987] = param_1[0x987] + 1;
        param_1[0x96d] = 0;
        param_1[0x96f] = 0;
        FUN_00a8caf0(0x100004,0,0,0);
        local_2c = FUN_00a8cab0();
      }
      else {
        param_1[0x96d] = 0;
        param_1[0x96f] = 0;
        param_1[0x96e] = 0;
      }
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(0x1c), iVar1 == 0)) goto LAB_0086f703;
    if (((*(byte *)(param_1 + 0x995) & 0x80) != 0) ||
       ((DAT_01bea090 & 0x400) != 0 || (param_1[0x33f] & param_1[0x392]) == 0)) goto LAB_0086f703;
    FUN_00a8caf0(0x10000c,0,0,0);
  }
  local_2c = FUN_00a8cab0();
LAB_0086f703:
  FUN_00a8caf0(0x100007,0,0,0);
  return local_2c;
}

// 0086F720  FUN_0086f720  size=269  [callgraph]
void __fastcall FUN_0086f720(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (((param_1[0x187] != 0) &&
      ((((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0086efb0(1,1,0), iVar1 == 0)) &&
        (iVar1 = FUN_0085d070(), iVar1 == 0)) &&
       ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)
        ))))) && ((iVar1 = FUN_00a8c760(0), iVar1 != 0 && (90000.0 < (float)param_1[0x34a])))) {
    if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
       (810000.0 < (float)param_1[0x34a])) {
      FUN_00a8caf0(0x100002,0,0,0);
      return;
    }
    FUN_00a8caf0(0x100001,0,0,0);
  }
  return;
}

// 0086F830  FUN_0086f830  size=331  [callgraph]
void __fastcall FUN_0086f830(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if ((((param_1[0x187] != 0) && (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
      ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0086efb0(1,1,0), iVar1 == 0)))) &&
     ((iVar1 = FUN_0085d070(), iVar1 == 0 &&
      ((((iVar1 = FUN_00a8c760(0), iVar1 == 0 ||
         (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
        (iVar1 = FUN_00a8c760(0), iVar1 != 0)) && (90000.0 < (float)param_1[0x34a])))))) {
    if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
       (810000.0 < (float)param_1[0x34a])) {
      FUN_00a8caf0(0x100002,0,0,0);
      return;
    }
    FUN_00a8caf0(0x100001,0,0,0);
  }
  return;
}

// 0086F980  FUN_0086f980  size=343  [callgraph]
void __fastcall FUN_0086f980(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if ((((((param_1[0x187] != 0) && (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
        ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0086efb0(1,1,0), iVar1 == 0)))) &&
       ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0085d070(), iVar1 == 0)))) &&
      ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0))
      )) && ((iVar1 = FUN_00a8c760(0), iVar1 != 0 && (90000.0 < (float)param_1[0x34a])))) {
    if (((DAT_01bea090._3_1_ & 1) == 0) &&
       ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
      FUN_00a8caf0(0x100002,0,0,0);
      return;
    }
    FUN_00a8caf0(0x100001,0,0,0);
  }
  return;
}

// 0086FAE0  FUN_0086fae0  size=331  [callgraph]
void __fastcall FUN_0086fae0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if ((((param_1[0x187] != 0) && (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
      ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0086efb0(1,1,0), iVar1 == 0)))) &&
     ((iVar1 = FUN_0085d070(), iVar1 == 0 &&
      ((((iVar1 = FUN_00a8c760(0), iVar1 == 0 ||
         (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
        (iVar1 = FUN_00a8c760(0), iVar1 != 0)) && (90000.0 < (float)param_1[0x34a])))))) {
    if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
       (810000.0 < (float)param_1[0x34a])) {
      FUN_00a8caf0(0x100002,0,0,0);
      return;
    }
    FUN_00a8caf0(0x100001,0,0,0);
  }
  return;
}

// 0086FC30  FUN_0086fc30  size=650  [callgraph]
void __fastcall FUN_0086fc30(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if ((param_1[0x187] != 0) && (iVar1 = FUN_0085d070(), iVar1 == 0)) {
    iVar1 = FUN_00a8c760(0x2b);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x1d4))(1);
      iVar1 = FUN_00a8c760(1);
      if (iVar1 != 0) {
        if (((param_1[0x150c] != 0) && (param_1[0x150b] != 0)) &&
           ((*(byte *)(param_1 + 0x995) & 8) == 0)) {
          param_1[0x95b] = 0;
          param_1[0x988] = 0;
          FUN_00a8caf0(0x100019,0,0,0);
          return;
        }
        if (((*(byte *)(param_1 + 0x995) & 2) == 0) &&
           (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
          param_1[0x95a] = 0;
          param_1[0x988] = 0;
          FUN_00a8caf0(0x100017,0,0,0);
          return;
        }
      }
      if ((((DAT_01bea090 & 0x400) == 0) && ((param_1[0x33f] & param_1[0x386]) != 0)) &&
         (param_1[0x987] < 2)) {
        param_1[0xb17] = -0x40800000;
        param_1[0x987] = param_1[0x987] + 1;
        param_1[0x96d] = 0;
        param_1[0x96f] = 0;
        FUN_00a8caf0(0x100004,0,0,0);
        return;
      }
      param_1[0x96d] = 0;
      param_1[0x96f] = 0;
      param_1[0x96e] = 0;
      FUN_0085d8b0(1);
      return;
    }
    iVar1 = FUN_008635c0(&stack0xffffffd4);
    if ((((iVar1 == 0) &&
         ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0086efb0(1,1,0), iVar1 == 0)))) &&
        ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0085d070(), iVar1 == 0)))) &&
       ((((iVar1 = FUN_00a8c760(0), iVar1 == 0 ||
          (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
         (iVar1 = FUN_00a8c760(0), iVar1 != 0)) && (90000.0 < (float)param_1[0x34a])))) {
      if ((((DAT_01bea090 & 0x1000000) == 0) && ((DAT_01bea090 & 0x10) == 0)) &&
         (810000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100001,0,0,0);
    }
  }
  return;
}

// 0086FEC0  FUN_0086fec0  size=358  [callgraph]
void __fastcall FUN_0086fec0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if ((((((param_1[0x187] != 0) && (iVar1 = FUN_0085d070(), iVar1 == 0)) &&
        (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
       (((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0086efb0(1,1,0), iVar1 == 0)) &&
        ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0085d070(), iVar1 == 0)))))) &&
      ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0))
      )) && ((iVar1 = FUN_00a8c760(0), iVar1 != 0 && (90000.0 < (float)param_1[0x34a])))) {
    if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
       (810000.0 < (float)param_1[0x34a])) {
      FUN_00a8caf0(0x100002,0,0,0);
      return;
    }
    FUN_00a8caf0(0x100001,0,0,0);
  }
  return;
}

// 00870030  FUN_00870030  size=358  [callgraph]
void __fastcall FUN_00870030(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if ((((((param_1[0x187] != 0) && (iVar1 = FUN_0085d070(), iVar1 == 0)) &&
        (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
       (((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0086efb0(1,1,0), iVar1 == 0)) &&
        ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0085d070(), iVar1 == 0)))))) &&
      ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0))
      )) && ((iVar1 = FUN_00a8c760(0), iVar1 != 0 && (90000.0 < (float)param_1[0x34a])))) {
    if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
       (810000.0 < (float)param_1[0x34a])) {
      FUN_00a8caf0(0x100002,0,0,0);
      return;
    }
    FUN_00a8caf0(0x100001,0,0,0);
  }
  return;
}

// 008701A0  FUN_008701a0  size=356  [callgraph]
void __fastcall FUN_008701a0(int *param_1)

{
  int iVar1;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    if (param_1[0x187] == 3) {
      iVar1 = FUN_00b7a7c0();
      param_1[0x248] = (int)((float)param_1[0x248] - (float)iVar1 * 20.0);
    }
    uStack_18 = 0;
    uStack_20 = 1;
    uStack_10 = 0;
    uStack_c = 1;
    uStack_8 = 1;
    uStack_24 = 1;
    uStack_2c = 1;
    uStack_28 = 1;
    uStack_1c = 1;
    uStack_14 = 1;
    iVar1 = FUN_008635c0(&uStack_2c);
    if ((iVar1 == 0) &&
       ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0086efb0(1,1,0), iVar1 == 0)))) {
      iVar1 = FUN_00a8c760(0);
      if (iVar1 != 0) {
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_20 = 1;
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 1;
        uStack_8 = 1;
        uStack_24 = 1;
        uStack_2c = 1;
        uStack_28 = 1;
        iVar1 = FUN_008635c0(&uStack_2c);
        if (iVar1 != 0) {
          return;
        }
      }
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 != 0) && (90000.0 < (float)param_1[0x34a])) {
        if (((DAT_01bea090._3_1_ & 1) == 0) &&
           ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
          FUN_00a8caf0(0x100002,0,0,0);
          return;
        }
        FUN_00a8caf0(0x100001,0,0,0);
      }
    }
  }
  return;
}

// 008781B0  FUN_008781b0  size=83  [callgraph]
void __fastcall FUN_008781b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 4);
    do {
      *piVar1 = (int)(piVar1 + -4);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0xc) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 008782B0  Pl1400::startup  size=2932  [class]
undefined4 __fastcall Pl1400::startup(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  float10 fVar10;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = PlBaseDLC::startup();
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x40d0) = 0;
  *(undefined4 *)(param_1 + 0x6c4) = 5;
  *(undefined4 *)(param_1 + 0x5400) = 0;
  *(undefined4 *)(param_1 + 0x5430) = 0;
  *(undefined4 *)(param_1 + 0x6d0) = 0;
  *(undefined4 *)(param_1 + 0x6d4) = 0;
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  *(undefined4 *)(param_1 + 0x6dc) = local_14;
  *(undefined4 *)(param_1 + 0x6ec) = 1;
  *(undefined4 *)(param_1 + 0x6e4) = 5;
  *(undefined4 *)(param_1 + 0x6e8) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x6e0) = 5;
  uVar4 = FUN_00a8d2a0();
  puVar5 = (undefined4 *)FUN_009f8b60();
  iVar3 = CollisionCapsule::CollisionCapsule(0x10,*puVar5,0);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x380) = 1;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
    *(undefined4 *)(iVar3 + 0x594) = 0x3f8ccccd;
    *(undefined4 *)(iVar3 + 0x590) = 0x3f333333;
    _strncpy_s((char *)(iVar3 + 0x394),0x20,"SignsAndBullet",0x1f);
    FUN_00a93a00(iVar3,uVar4);
    FUN_00d7b0f0();
    FUN_00d7b890();
    *(uint *)(iVar3 + 900) = *(uint *)(iVar3 + 900) | 3;
    *(undefined4 *)(param_1 + 0x2c0c) = 0;
    FUN_00a938c0(1);
  }
  puVar5 = (undefined4 *)FUN_009f8b60();
  iVar3 = CollisionCapsule::CollisionCapsule(3,*puVar5,0);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x380) = 3;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
    *(undefined4 *)(iVar3 + 0x594) = 0x3ff33333;
    *(undefined4 *)(iVar3 + 0x590) = 0x3f666666;
    _strncpy_s((char *)(iVar3 + 0x394),0x20,"MISSILE_ONLY",0x1f);
    FUN_00a93a00(iVar3,uVar4);
    FUN_00d7b0f0();
    FUN_00d7b890();
    *(uint *)(iVar3 + 900) = *(uint *)(iVar3 + 900) | 3;
    *(undefined4 *)(param_1 + 0x2c08) = 0;
    FUN_00a938c0(3);
  }
  puVar5 = (undefined4 *)FUN_009f8b60();
  iVar3 = CollisionCapsule::CollisionCapsule(1,*puVar5,0);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x380) = 0;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
    *(undefined4 *)(iVar3 + 0x594) = 0x3fa66666;
    *(undefined4 *)(iVar3 + 0x590) = 0x3e99999a;
    _strncpy_s((char *)(iVar3 + 0x394),0x20,"Body",0x1f);
    FUN_00a93a00(iVar3,uVar4);
    FUN_00d7b0f0();
    FUN_00d7b890();
    *(undefined4 *)(param_1 + 0x545c) = 1;
  }
  *(undefined4 *)(param_1 + 0x3bb0) = 0x3fe66666;
  *(undefined4 *)(param_1 + 0x3bac) = 0x3fe66666;
  *(undefined4 *)(param_1 + 0x3ba4) = 0;
  *(undefined4 *)(param_1 + 0x3ba8) = 1;
  *(undefined4 *)(param_1 + 0x3ba0) = 0;
  uVar4 = FUN_008ec660(param_1,0x3fe66666,0x3eb33333,0x41700000,0x41a00000,200,6,0);
  *(undefined4 *)(param_1 + 0x764) = uVar4;
  FUN_008e6fe0(4);
  FUN_008e7400(4);
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e0b70(1);
    FUN_008e0b80(0xffffffff,0x900);
    FUN_008e0ba0(0);
    FUN_008e0bb0(0x900);
    *(float *)(*(int *)(param_1 + 0x764) + 0xf4) =
         *(float *)(*(int *)(param_1 + 0x764) + 0xf4) * 0.75;
    FUN_00b7ad00();
    FUN_008e6d00();
    FUN_008e1cc0();
  }
  iVar3 = FUN_00a12210(0x710);
  if (iVar3 != 0) {
    *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x1000;
  }
  local_40 = *(undefined4 *)(param_1 + 0x50);
  local_3c = *(undefined4 *)(param_1 + 0x54);
  local_38 = *(undefined4 *)(param_1 + 0x58);
  local_34 = *(undefined4 *)(param_1 + 0x5c);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_30 = 0x3f19999a;
  local_2c = 0x3e99999a;
  local_28 = 0x3f333333;
  piVar6 = (int *)FUN_00900480();
  iVar3 = *piVar6;
  uVar4 = FUN_009f8b40(0);
  iVar7 = (**(code **)(iVar3 + 8))(&local_40,&local_20,&local_30,6,uVar4);
  FUN_008f7f00(iVar7,*(undefined4 *)(param_1 + 0x4f0));
  FUN_004066f0();
  iVar3 = _tls_index;
  if ((iVar7 == 0) || (uVar1 = *(uint *)(iVar7 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar8 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008786c6:
      piVar6 = (int *)(iVar8 + 4);
      *piVar6 = *piVar6 + -1;
      if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  else {
    puVar9 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar9 = *puVar9 | 1;
    puVar9[2] = puVar9[2] | 0x40;
    if (DAT_01885d68 != 1) {
      iVar8 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
      goto LAB_008786c6;
    }
  }
  FUN_004066f0();
  if ((iVar7 == 0) || (uVar1 = *(uint *)(iVar7 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar8 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
LAB_00878734:
      piVar6 = (int *)(iVar8 + 4);
      *piVar6 = *piVar6 + -1;
      if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  else {
    puVar9 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar9 = *puVar9 | 4;
    puVar9[4] = puVar9[4] | 4;
    if (DAT_01885d68 != 1) {
      iVar8 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
      goto LAB_00878734;
    }
  }
  FUN_004066f0();
  if ((iVar7 == 0) || (uVar1 = *(uint *)(iVar7 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_008787c6;
    iVar3 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
  }
  else {
    puVar9 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar9 = *puVar9 | 8;
    puVar9[5] = puVar9[5] | 4;
    if (DAT_01885d68 == 1) goto LAB_008787c6;
    iVar3 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
  }
  piVar6 = (int *)(iVar3 + 4);
  *piVar6 = *piVar6 + -1;
  if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_008787c6:
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(iVar7);
  FUN_009009c0("headHitCheck");
  FUN_00900bd0();
  *(undefined4 *)(param_1 + 0x5414) = 0x3cf5c28f;
  *(undefined4 *)(param_1 + 0x10f4) = 1;
  *(undefined4 *)(param_1 + 0x5418) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x5424) = 8;
  *(undefined4 *)(param_1 + 0x5428) = 0;
  *(undefined4 *)(param_1 + 0x541c) = 0x3f570a3d;
  *(undefined4 *)(param_1 + 0x5434) = 0x1000;
  *(undefined4 *)(param_1 + 0x5438) = 0;
  *(undefined4 *)(param_1 + 0x5464) = 0;
  *(undefined4 *)(param_1 + 0x5468) = 0;
  *(undefined4 *)(param_1 + 0x5440) = 0;
  if (*(int *)(param_1 + 0x754) != 0) {
    fVar10 = (float10)FUN_00b7edd0(0x53);
    *(float *)(param_1 + 0x3374) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x54);
    *(float *)(param_1 + 0x3378) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x55);
    *(float *)(param_1 + 0x337c) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x56);
    *(float *)(param_1 + 0x3380) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x57);
    *(float *)(param_1 + 0x3384) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x58);
    *(float *)(param_1 + 0x3388) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x59);
    *(float *)(param_1 + 0x338c) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x5a);
    *(float *)(param_1 + 0x3390) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x5c);
    *(float *)(param_1 + 0x3394) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x5d);
    *(float *)(param_1 + 0x3398) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x5e);
    *(float *)(param_1 + 0x339c) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x5f);
    *(float *)(param_1 + 0x33a0) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x60);
    *(float *)(param_1 + 0x33a4) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x61);
    *(float *)(param_1 + 0x33a8) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x62);
    *(float *)(param_1 + 0x33ac) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(99);
    *(float *)(param_1 + 0x33b0) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(100);
    *(float *)(param_1 + 0x33b4) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x65);
    *(float *)(param_1 + 0x33b8) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x68);
    *(float *)(param_1 + 0x33bc) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x69);
    *(float *)(param_1 + 0x33c0) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x66);
    *(float *)(param_1 + 0x33c4) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x67);
    *(float *)(param_1 + 0x33c8) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x6a);
    *(float *)(param_1 + 0x33cc) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x6b);
    *(float *)(param_1 + 0x33d0) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x6c);
    *(float *)(param_1 + 0x33d4) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x6d);
    *(float *)(param_1 + 0x33d8) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x6e);
    *(float *)(param_1 + 0x33dc) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x6f);
    *(float *)(param_1 + 0x33e0) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x4c);
    *(float *)(param_1 + 0x33f4) = (float)(fVar10 * (float10)0.017453292);
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x4c);
    *(float *)(param_1 + 0x33f8) = (float)(fVar10 * (float10)0.017453292);
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x4c);
    *(float *)(param_1 + 0x33fc) = (float)(fVar10 * (float10)20.0);
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x70);
    *(float *)(param_1 + 0x3400) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x70);
    *(float *)(param_1 + 0x3404) = (float)(fVar10 * (float10)0.017453292);
    FUN_00b7edd0(0x85);
    uVar4 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x1e40) = uVar4;
    fVar10 = (float10)FUN_00b7edd0(0x86);
    *(float *)(param_1 + 0x3410) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x87);
    *(float *)(param_1 + 0x3414) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x89);
    *(float *)(param_1 + 0x279c) = (float)(fVar10 * (float10)60.0);
    fVar10 = (float10)FUN_00b7edd0(0x8a);
    *(float *)(param_1 + 0x27a0) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x8c);
    *(float *)(param_1 + 0x26c4) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x8d);
    *(float *)(param_1 + 0x26c8) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x8e);
    *(float *)(param_1 + 0x26d0) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x8f);
    *(float *)(param_1 + 0x26cc) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x72);
    *(float *)(param_1 + 0x4060) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x73);
    *(float *)(param_1 + 0x4064) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x72);
    *(float *)(param_1 + 0x4068) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x73);
    *(float *)(param_1 + 0x406c) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x72);
    *(float *)(param_1 + 0x4070) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x73);
    *(float *)(param_1 + 0x4074) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x74);
    *(float *)(param_1 + 0x4078) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x75);
    *(float *)(param_1 + 0x407c) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x75);
    *(float *)(param_1 + 0x4080) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x76);
    *(float *)(param_1 + 0x4084) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x76);
    *(float *)(param_1 + 0x4088) = (float)fVar10;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x77);
    *(undefined4 *)(param_1 + 0x408c) = uVar4;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(0x77);
    *(undefined4 *)(param_1 + 0x4090) = uVar4;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x77);
    *(float *)(param_1 + 0x4094) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x77);
    *(float *)(param_1 + 0x4098) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x77);
    *(float *)(param_1 + 0x409c) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x7a);
    FUN_00c1cee0((float)fVar10);
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x7b);
    *(float *)(param_1 + 0x40a0) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x7b);
    *(float *)(param_1 + 0x40a8) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x7b);
    *(float *)(param_1 + 0x40ac) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(0x7b);
    *(float *)(param_1 + 0x40b0) = (float)fVar10;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x78);
    *(float *)(param_1 + 0x40b4) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x91);
    *(float *)(param_1 + 0x5414) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x93);
    *(float *)(param_1 + 0x5418) = (float)fVar10;
    fVar10 = (float10)FUN_00b7edd0(0x94);
    *(float *)(param_1 + 0x541c) = (float)fVar10;
  }
  FUN_00be8060();
  FUN_0086ea80();
  uVar2 = 5;
  if (*(int *)(param_1 + 0xb74) != 0) {
    uVar2 = 4;
  }
  FUN_00aa4080(uVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_00a92f90();
  FUN_00e3f050();
  switchD_0080dbae::default();
  puVar5 = (undefined4 *)(param_1 + 0x3ce0);
  *puVar5 = 0xb;
  *(undefined4 *)(param_1 + 0x3ce4) = 0xc;
  *(undefined4 *)(param_1 + 0x3ce8) = 0xd;
  uVar4 = FUN_00a92f90(puVar5);
  FUN_00e35ab0(uVar4,puVar5);
  uVar4 = FUN_00a12210(0x730);
  FUN_00e25400(uVar4);
  FUN_00e25500(0);
  FUN_00a8caf0(0x100000,0,0,0);
  return 1;
}

// 00878E30  Pl1400::vf3F8  size=164  [class]
void __fastcall Pl1400::vf3F8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_00863db0();
  FUN_00be9130();
  *(undefined4 *)(param_1 + 0x5444) = 0x7f0;
  iVar2 = FUN_00a8c760(0x15);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x5444) = 0x701;
  }
  if ((*(int *)(param_1 + 0x5444) != *(int *)(param_1 + 0x5448)) &&
     (iVar2 = FUN_00a81330(), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x5448) = *(undefined4 *)(param_1 + 0x5444);
    FUN_00a9e060(0x11);
    if (*(int *)(param_1 + 0x5448) == 0x701) {
      uVar1 = *(undefined4 *)(param_1 + 0x4f0);
      uVar5 = 10;
      uVar4 = 0x701;
      uVar3 = FUN_00a81330(0x701,10);
      FUN_00a8c5f0(0x11,uVar1,uVar3,uVar4,uVar5);
    }
  }
  FUN_0085d250();
  FUN_0086e9f0();
  return;
}

// 00878EE0  FUN_00878ee0  size=405  [between]
void __fastcall FUN_00878ee0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = *(code **)(*param_1 + 800);
  param_1[0x991] = 0;
  (*pcVar2)(0x3c888889);
  param_1[0x427] = 1;
  if (param_1[0x187] != 0) {
    iVar3 = (**(code **)(*param_1 + 0x34c))();
    if (iVar3 != 0) {
      FUN_00a8caf0(0x10002e,0,0,0);
      return;
    }
    iVar3 = FUN_0085d620();
    if (iVar3 == 0) {
      iVar3 = FUN_008649d0();
      if (iVar3 != 0) {
        FUN_0085e000(0);
        return;
      }
      iVar3 = FUN_0085d070();
      if (iVar3 == 0) {
        FUN_00708e60();
        iVar3 = FUN_008635c0(&stack0xffffffd4);
        if (iVar3 == 0) {
          iVar3 = FUN_0086efb0(1,1,0);
          if (iVar3 == 0) {
            iVar3 = FUN_00416d50(0x21);
            if ((iVar3 == 0) && (90000.0 < (float)param_1[0x34a])) {
              iVar3 = FUN_00416d50(7);
              if (iVar3 == 0) {
                iVar3 = FUN_00416d50(0x1b);
                if ((iVar3 == 0) && (810000.0 < (float)param_1[0x34a])) {
                  FUN_00a8caf0(0x100002,0,0,0);
                  return;
                }
              }
              FUN_00a8caf0(0x100001,0,0,0);
              return;
            }
            iVar3 = FUN_00416910(6);
            if ((iVar3 == 0) &&
               ((fVar1 = (float)param_1[0x248], !NAN(fVar1) && 600.0 < fVar1 != (fVar1 == 600.0) &&
                (param_1[0x2dd] == 0)))) {
              FUN_00a8caf0(0x10000e,0,0,0);
            }
          }
        }
      }
    }
  }
  return;
}

// 00879080  FUN_00879080  size=387  [between]
void __fastcall FUN_00879080(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 800);
  param_1[0x991] = 0;
  (*pcVar1)(0x3c888889);
  iVar2 = (**(code **)(*param_1 + 0x34c))();
  if (iVar2 != 0) {
    FUN_00a8caf0(0x10002e,0,0,0);
    return;
  }
  iVar2 = FUN_0085d620();
  if (iVar2 == 0) {
    if ((0x14 < *(int *)(param_1[0x1d9] + 0x124)) && (param_1[0x228] == 0)) {
      FUN_00a8caf0(0x100005,0,0,0);
      return;
    }
    iVar2 = FUN_008649d0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar2 = FUN_0085d070();
    if (((iVar2 == 0) && (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0)) &&
       (iVar2 = FUN_0086efb0(1,1,0), iVar2 == 0)) {
      if ((62500.0 < (float)param_1[0x34a]) || (3 < param_1[0x187])) {
        iVar2 = FUN_00416d50(0x21);
        if (iVar2 == 0) {
          iVar2 = FUN_00416d50(7);
          if (iVar2 != 0) {
            return;
          }
          iVar2 = FUN_00416d50(0x1b);
          if (iVar2 != 0) {
            return;
          }
          if ((float)param_1[0x34a] <= 810000.0) {
            return;
          }
          FUN_00a8caf0(0x100002,0,0,0);
          return;
        }
        if (3 < param_1[0x187]) {
          return;
        }
      }
      param_1[0x187] = 4;
    }
  }
  return;
}

// 00879210  FUN_00879210  size=450  [between]
void __fastcall FUN_00879210(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 800);
  param_1[0x991] = 0;
  (*pcVar1)(0x3c888889);
  iVar2 = (**(code **)(*param_1 + 0x34c))();
  if (iVar2 != 0) {
    FUN_00a8caf0(0x10002e,0,0,0);
    return;
  }
  iVar2 = FUN_0085d620();
  if (iVar2 == 0) {
    iVar2 = FUN_008649d0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    if ((0x14 < *(int *)(param_1[0x1d9] + 0x124)) && (param_1[0x228] == 0)) {
      FUN_00a8caf0(0x100005,0,0,0);
      return;
    }
    iVar2 = FUN_0085d070();
    if (((iVar2 == 0) && (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0)) &&
       (iVar2 = FUN_0086efb0(1,1,0), iVar2 == 0)) {
      if (((62500.0 < (float)param_1[0x34a]) || (3 < param_1[0x187])) &&
         ((722500.0 < (float)param_1[0x34a] || (3 < param_1[0x187])))) {
        iVar2 = FUN_00416d50(7);
        if (iVar2 != 0) {
          FUN_00a8caf0(0x100001,0,0,0);
          return;
        }
        iVar2 = FUN_00416d50(0x21);
        if (iVar2 == 0) {
          iVar2 = FUN_00416d50(0x1b);
          if (iVar2 != 0) {
            return;
          }
          if ((float)param_1[0x34a] <= 810000.0) {
            return;
          }
          if (param_1[0x187] < 4) {
            return;
          }
          FUN_00a8caf0(0x100002,0,0,0);
          return;
        }
        if (3 < param_1[0x187]) {
          return;
        }
      }
      param_1[0x187] = 4;
    }
  }
  return;
}

// 008793E0  FUN_008793e0  size=389  [between]
void __fastcall FUN_008793e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_1[0x187] != 0) && (iVar1 = FUN_0085d070(), iVar1 == 0)) {
    iVar1 = FUN_00864ad0();
    if (iVar1 != 0) {
      FUN_0085e000(0);
      return;
    }
    local_14 = 0;
    local_1c = 1;
    local_c = 0;
    local_8 = 1;
    local_4 = 1;
    local_20 = 1;
    local_28 = 1;
    local_24 = 1;
    local_18 = 1;
    local_10 = 1;
    iVar1 = FUN_008635c0(&local_28);
    if (iVar1 == 0) {
      uVar4 = 0;
      uVar2 = FUN_00a8c760(0x11);
      uVar3 = FUN_00a8c760(0x1c);
      iVar1 = FUN_0086efb0(uVar3,uVar2,uVar4);
      if (iVar1 == 0) {
        iVar1 = FUN_00a8c760(0);
        if (iVar1 != 0) {
          local_18 = 0;
          local_14 = 0;
          local_1c = 1;
          local_10 = 0;
          local_c = 0;
          local_8 = 1;
          local_4 = 1;
          local_20 = 1;
          local_28 = 1;
          local_24 = 1;
          iVar1 = FUN_008635c0(&local_28);
          if (iVar1 != 0) {
            return;
          }
        }
        iVar1 = FUN_00a8c760(0);
        if ((iVar1 != 0) && (90000.0 < (float)param_1[0x34a])) {
          if (((DAT_01bea090._3_1_ & 1) == 0) &&
             ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
            FUN_00a8caf0(0x100002,0,0,0);
            return;
          }
          FUN_00a8caf0(0x100001,0,0,0);
          return;
        }
        if ((param_1[0x251] != 0) && ((float)param_1[0x34a] <= 62500.0)) {
          (**(code **)(*param_1 + 0x388))(0);
        }
      }
    }
  }
  return;
}

// 00879570  FUN_00879570  size=1284  [between]
void __fastcall FUN_00879570(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined1 auStack_50 [76];
  
  iVar3 = param_1[0x186];
  (**(code **)(*param_1 + 0x314))();
  uStack_b4 = 0x3d4ccccd;
  if (param_1[0x187] == 0) {
    FUN_00aa92c0(0xf);
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    FUN_0085db00(1);
    sVar4 = 0x1d;
    if (((float)param_1[0xb18] <= -0.32000002) &&
       (iVar2 = (**(code **)(*param_1 + 0x34c))(), iVar2 == 0)) {
      sVar4 = 0x1c;
    }
    if ((810000.0 < (float)param_1[0x34a]) &&
       (iVar2 = (**(code **)(*param_1 + 0x34c))(), iVar2 == 0)) {
      sVar4 = 0x1f;
      param_1[0x251] = 1;
    }
    if (((float)param_1[0xb18] <= -0.9) && (iVar2 = (**(code **)(*param_1 + 0x34c))(), iVar2 == 0))
    {
      sVar4 = 0x1e;
    }
    if (param_1[0x2dd] == 0) {
      if (sVar4 == 0x1d) {
        sVar4 = 0x24;
      }
      else if (sVar4 == 0x1c) {
        sVar4 = 0x23;
      }
      else if (sVar4 == 0x1f) {
        sVar4 = 0x26;
      }
      else if (sVar4 == 0x1e) {
        sVar4 = 0x25;
      }
    }
    if (iVar3 == 0x10000b) {
      uStack_b4 = 0;
      if ((sVar4 == 0x1d) || (sVar4 == 0x1c)) {
LAB_008796d9:
        sVar4 = 0x37;
      }
      else if (sVar4 == 0x1f) {
        sVar4 = 0x1f;
      }
      else {
        if (((sVar4 == 0x1e) || (sVar4 == 0x24)) || (sVar4 == 0x23)) goto LAB_008796d9;
        if (sVar4 == 0x26) {
          sVar4 = 0x1f;
        }
        else if (sVar4 == 0x25) goto LAB_008796d9;
      }
    }
    if (param_1[0x1033] != 0) {
      uStack_b4 = 0;
      sVar4 = 0x39;
      if (iVar3 == 0x10000b) {
        sVar4 = 0x38;
      }
      param_1[0x251] = 1;
    }
    iVar2 = (int)sVar4;
    FUN_00aa4080(iVar2,0,uStack_b4,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x250] = iVar2;
    if ((iVar3 == 0x10000b) || (param_1[0x1033] != 0)) {
      FUN_00864400(iVar2,0,uStack_b4,0x3f800000,0x8000000);
    }
    if (((float)param_1[0x40d] <= -0.5) && (param_1[0x189] == 0)) {
      param_1[0x253] = 0xf;
    }
    uStack_78 = 0;
    uStack_7c = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a8 = 0;
    uStack_ac = 0;
    uStack_74 = 0x3f800000;
    uStack_88 = 0x3f800000;
    uStack_9c = 0x3f800000;
    uStack_b0 = 0x3f800000;
    if ((float)param_1[0x26] != 0.0) {
      D3DXMatrixRotationZ(auStack_50,param_1[0x26]);
      D3DXMatrixMultiply(&stack0xffffff48,&uStack_58,&stack0xffffff48);
    }
    if ((float)param_1[0x25] != 0.0) {
      D3DXMatrixRotationY(auStack_50,param_1[0x25]);
      D3DXMatrixMultiply(&stack0xffffff48,&uStack_58,&stack0xffffff48);
    }
    if ((float)param_1[0x24] != 0.0) {
      D3DXMatrixRotationX(auStack_50,param_1[0x24]);
      D3DXMatrixMultiply(&stack0xffffff48,&uStack_58,&stack0xffffff48);
    }
    D3DXMatrixMultiply(&uStack_b0,&uStack_b0,param_1 + 0x2c);
    param_1[0x987] = 0;
    param_1[0x228] = 1;
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    param_1[0x227] = iStack_54;
    param_1[0x187] = param_1[0x187] + 1;
    uStack_60 = 0;
    uStack_5c = 0xbf800000;
    uStack_58 = 0;
    iStack_70 = param_1[0x10];
    iStack_6c = param_1[0x11];
    iStack_68 = param_1[0x12];
    iStack_64 = param_1[0x13];
    iVar3 = hkpCdPointCollector::hkpCdPointCollector(&uStack_60,&iStack_70,1,0,0x3c23d70a);
    if (iVar3 != 0) {
      param_1[0x14] = iStack_70;
      param_1[0x15] = iStack_6c;
      param_1[0x16] = iStack_68;
      param_1[0x17] = iStack_64;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_00879a22;
  if (param_1[0x253] != 0) {
    param_1[0x253] = param_1[0x253] + -1;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
     (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
    iVar3 = (**(code **)(*param_1 + 0x34c))();
    if ((iVar3 == 0) && (param_1[0x251] != 0)) {
      FUN_00a8caf0(0x100002,2,0,0);
      if (param_1[0x1033] != 0) {
        FUN_00a8caf0(0x100008,0,0,0);
        param_1[0x187] = 2;
        param_1[0x9a4] = 1;
        FUN_0086e930();
        param_1[0x2dd] = 1;
      }
      param_1[0x9a4] = 1;
      param_1[0x988] = 0;
      param_1[0xb0a] = 0;
      FUN_00b895d0();
    }
    else {
      (**(code **)(*param_1 + 0x388))(0);
    }
  }
LAB_00879a22:
  iVar3 = FUN_00a8c760(0xb);
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*param_1 + 0x308);
    param_1[0x23d] = param_1[0x34c];
    (*pcVar1)(0x3e99999a,0x3ae4c388,0x3f060a92,0);
  }
  return;
}

// 00879A80  FUN_00879a80  size=418  [between]
void __fastcall FUN_00879a80(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 800);
  param_1[0x991] = 0;
  param_1[0x1508] = 1;
  (*pcVar1)(0x3c888889);
  iVar2 = (**(code **)(*param_1 + 0x34c))();
  if (iVar2 != 0) {
    FUN_00a8caf0(0x10002e,0,0,0);
    return;
  }
  iVar2 = FUN_0085d620();
  if (iVar2 == 0) {
    iVar2 = FUN_008649d0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    if ((0x14 < *(int *)(param_1[0x1d9] + 0x124)) && (param_1[0x228] == 0)) {
      FUN_00a8caf0(0x100005,0,0,0);
      return;
    }
    iVar2 = FUN_0085d070();
    if (iVar2 == 0) {
      if (param_1[0x1033] == 0) {
        FUN_00708e60();
        iVar2 = FUN_008635c0(&stack0xffffffd4);
      }
      else {
        iVar2 = FUN_0085d9a0();
      }
      if ((iVar2 == 0) && (iVar2 = FUN_0086efb0(1,0,0), iVar2 == 0)) {
        if ((param_1[0x1033] != 0) || (3 < param_1[0x187])) {
          iVar2 = FUN_00416d50(7);
          if (iVar2 != 0) {
            FUN_00a8caf0(0x100001,0,0,0);
            return;
          }
          iVar2 = FUN_00416d50(0x21);
          if (iVar2 == 0) {
            iVar2 = FUN_00416d50(0x1b);
            if (iVar2 != 0) {
              return;
            }
            if ((float)param_1[0x34a] <= 810000.0) {
              return;
            }
            if (param_1[0x187] < 4) {
              return;
            }
            FUN_00a8caf0(0x100002,0,0,0);
            return;
          }
          if (3 < param_1[0x187]) {
            return;
          }
        }
        param_1[0x187] = 4;
      }
    }
  }
  return;
}

// 00879C30  FUN_00879c30  size=1362  [between]
void __fastcall FUN_00879c30(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uStack_164;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0xeda] = 1;
  param_1[0x151a] = 1;
  param_1[0x991] = 0;
  param_1[0x998] = 1;
  (*pcVar1)();
  uStack_164 = 0x3e2aaaab;
  param_1[0xaf4] = 0x40800000;
  uVar2 = 0;
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x9a4] != 0) {
      uStack_164 = 0;
    }
    FUN_0085db00(1);
    param_1[0x9a4] = 0;
    FUN_00aa4080(0x2c,0,uStack_164,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x2c,0,uStack_164,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x2dd] = 1;
    break;
  case 1:
    break;
  case 2:
    uStack_164 = 0x3d088889;
    if (param_1[0x9a4] == 0) {
      uVar2 = 0x3d088889;
    }
    else {
      uStack_164 = 0;
    }
    param_1[0x9a4] = 0;
    FUN_00a9f4c0(&DAT_01649678,uVar2,0x3c000,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x2d,uStack_164,0x3c000);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x2f,uStack_164,0x3c000);
    FUN_00a9f600(0xffffffff,0,0,0,0xffffffff,0x2e,uStack_164,0x3c000);
    FUN_00864400(0x2d,0,uStack_164,0x3f800000,0x8000000);
    FUN_00b895d0();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24a] = 0;
    param_1[0x24b] = param_1[0x25];
    goto LAB_00879e38;
  case 3:
LAB_00879e38:
    FUN_00a947e0(0,0,0,param_1[0x24a]);
    fVar3 = (float)param_1[0x25] - (float)param_1[0x24b];
    fVar4 = (float)param_1[0x244] * 0.017453292;
    if (-fVar4 < fVar3) {
      if (fVar4 < fVar3 == (fVar4 == fVar3)) {
        if ((float)param_1[0x24a] <= 0.0) {
          fVar3 = (float)param_1[0x244] * 0.08 + (float)param_1[0x24a];
          param_1[0x24a] = (int)fVar3;
          if (0.0 <= fVar3) {
            param_1[0x24a] = 0;
          }
        }
        else {
          fVar3 = (float)param_1[0x24a] - (float)param_1[0x244] * 0.08;
          param_1[0x24a] = (int)fVar3;
          if (fVar3 < 0.0 != (fVar3 == 0.0)) {
            param_1[0x24a] = 0;
          }
        }
      }
      else {
        fVar3 = (float)param_1[0x244] * 0.08 + (float)param_1[0x24a];
        param_1[0x24a] = (int)fVar3;
        if (1.0 < fVar3) {
          param_1[0x24a] = 0x3f800000;
        }
      }
    }
    else {
      fVar3 = (float)param_1[0x24a] - (float)param_1[0x244] * 0.08;
      param_1[0x24a] = (int)fVar3;
      if (fVar3 < -1.0) {
        param_1[0x24a] = -0x40800000;
      }
    }
    param_1[0x24b] = param_1[0x25];
    FUN_00b94790(0x3f800000,0x3f800000);
    goto switchD_00879c94_default;
  case 4:
    (**(code **)(*param_1 + 0x394))();
    iVar5 = FUN_00b95e60();
    if (iVar5 == 2) {
      FUN_00aa4080(0x30,0,0x3daaaaab,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00864400(0x30,0,0x3daaaaab,0x3f800000,0x8000000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    else {
      FUN_00aa4080(0x31,0,0x3daaaaab,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00864400(0x31,0,0x3daaaaab,0x3f800000,0x8000000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto LAB_0087a012;
  case 5:
LAB_0087a012:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
    }
  default:
    goto switchD_00879c94_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  fVar6 = (float10)FUN_00a95c80(0);
  if (fVar6 < (float10)2.0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00879c94_default:
  pcVar1 = *(code **)(*param_1 + 0x308);
  param_1[0x23d] = param_1[0x34c];
  (*pcVar1)(0x3e99999a,0x3b64c388,0x3f060a92,0);
  iVar5 = FUN_00a8cac0();
  if (iVar5 != 5) {
    if (param_1[0x165] == 1) {
      FUN_004039a0(0xc,param_1,0);
      FUN_00a8c930(0,&stack0xfffffe90);
    }
    if (param_1[0x166] == 1) {
      FUN_004039a0(0xc,param_1,0);
      FUN_00a8c930(0,&stack0xfffffe90);
    }
  }
  return;
}

// 0087A1A0  FUN_0087a1a0  size=397  [between]
void __fastcall FUN_0087a1a0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (((param_1[0x187] != 0) && (iVar1 = FUN_008649d0(), iVar1 != 0)) &&
     (0.0 < (float)param_1[0xd07])) {
    FUN_0085e000(0);
    return;
  }
  iVar1 = FUN_0085d070();
  if ((((iVar1 == 0) &&
       ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0086efb0(1,1,0), iVar1 == 0)))) &&
      (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
     ((((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0086efb0(1,1,0), iVar1 == 0)) &&
       ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)
        ))) && ((iVar1 = FUN_00a8c760(0), iVar1 != 0 && (90000.0 < (float)param_1[0x34a])))))) {
    if (((DAT_01bea090._3_1_ & 1) == 0) &&
       ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
      FUN_00a8caf0(0x100002,0,0,0);
      return;
    }
    FUN_00a8caf0(0x100001,0,0,0);
  }
  return;
}

// 0087A330  FUN_0087a330  size=371  [between]
void __fastcall FUN_0087a330(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_1[0x187] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x34c))();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    iVar1 = FUN_0085d070();
    if (iVar1 == 0) {
      iVar1 = FUN_00864ad0();
      if (iVar1 != 0) {
        FUN_0085e000(0);
        return;
      }
      uStack_14 = 0;
      uStack_1c = 1;
      uStack_c = 0;
      uStack_8 = 1;
      uStack_4 = 1;
      uStack_20 = 1;
      uStack_28 = 1;
      uStack_24 = 1;
      uStack_18 = 1;
      uStack_10 = 1;
      iVar1 = FUN_008635c0(&uStack_28);
      if (iVar1 == 0) {
        uVar4 = 0;
        uVar2 = FUN_00a8c760(0x11);
        uVar3 = FUN_00a8c760(0x1c);
        iVar1 = FUN_0086efb0(uVar3,uVar2,uVar4);
        if (iVar1 == 0) {
          iVar1 = FUN_00a8c760(0);
          if (iVar1 != 0) {
            uStack_18 = 0;
            uStack_14 = 0;
            uStack_1c = 1;
            uStack_10 = 0;
            uStack_c = 0;
            uStack_8 = 1;
            uStack_4 = 1;
            uStack_20 = 1;
            uStack_28 = 1;
            uStack_24 = 1;
            iVar1 = FUN_008635c0(&uStack_28);
            if (iVar1 != 0) {
              return;
            }
          }
          iVar1 = FUN_00a8c760(0);
          if ((iVar1 != 0) && (90000.0 < (float)param_1[0x34a])) {
            if (((DAT_01bea090._3_1_ & 1) == 0) &&
               ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
              FUN_00a8caf0(0x100002,0,0,0);
              return;
            }
            FUN_00a8caf0(0x100001,0,0,0);
          }
        }
      }
    }
  }
  return;
}

// 0087A4B0  FUN_0087a4b0  size=326  [between]
void __fastcall FUN_0087a4b0(int *param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_0086f130();
    sVar1 = 0x45;
    if (param_1[0x2dd] != 0) {
      sVar1 = 0x46;
    }
    iVar2 = (int)sVar1;
    FUN_00aa4080(iVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x250] = iVar2;
    FUN_00864400(iVar2,0,0x3e2aaaab,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a8c760(0xb);
  if (iVar2 != 0) {
    param_1[0x2dd] = (uint)(param_1[0x2dd] == 0);
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00b7d0b0();
  if (iVar2 != 0) {
    FUN_00b7d0b0();
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01be9d80;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d80);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        FUN_00a95ee0(0,param_1);
      }
    }
  }
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) &&
     (iVar2 = FUN_00e36060(0), iVar2 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 0087A600  FUN_0087a600  size=723  [between]
void __fastcall FUN_0087a600(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_00b7d8b0();
  pcVar1 = *(code **)(*param_1 + 800);
  param_1[0x427] = 1;
  (*pcVar1)(0x3c888889);
  iVar2 = FUN_0085d070();
  if (iVar2 == 0) {
    if (((DAT_01bea090 & 0x8000) == 0) &&
       ((((iVar2 = FUN_00a8c760(0x17), iVar2 != 0 || (iVar2 = FUN_00a8c760(1), iVar2 != 0)) ||
         (0.0 < (float)param_1[0xd07])) && (iVar2 = FUN_008649d0(), iVar2 != 0)))) {
      FUN_0085e000(0);
      return;
    }
    iVar2 = FUN_00a8c760(0x16);
    if ((iVar2 == 0) || (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0)) {
      iVar2 = FUN_00a8c760(0x16);
      if ((iVar2 != 0) && ((param_1[0x150c] != 0 && (param_1[0x150b] != 0)))) {
        param_1[0x988] = 0;
        uVar4 = 0x100011;
LAB_0087a76d:
        param_1[0x98a] = 0;
        param_1[0x98f] = -1;
        param_1[0x98c] = 0;
        param_1[0x95b] = 0;
        param_1[0x150c] = 0;
        FUN_00a8caf0(uVar4,0,0,0);
        param_1[0xcd4] = 0;
        param_1[0x991] = 0;
        return;
      }
      iVar2 = FUN_008635c0(&stack0xffffffd4);
      if (iVar2 == 0) {
        iVar2 = FUN_00a8c760(1);
        if ((((iVar2 != 0) && (iVar2 = FUN_0085c530(), iVar2 != 0)) && (0 < param_1[0x988])) &&
           (param_1[0x988] < 4)) {
          uVar4 = 0x100010;
          goto LAB_0087a76d;
        }
        iVar2 = FUN_008635c0(&stack0xffffffd4);
        if (iVar2 == 0) {
          uVar5 = 1;
          uVar4 = FUN_00a8c760(0x11);
          uVar3 = FUN_00a8c760(0x1c);
          iVar2 = FUN_0086efb0(uVar3,uVar4,uVar5);
          if (iVar2 == 0) {
            iVar2 = FUN_00a8c760(0);
            if (((iVar2 == 0) || (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0)) &&
               ((iVar2 = FUN_00a8c760(0), iVar2 != 0 && (90000.0 < (float)param_1[0x34a])))) {
              if ((((DAT_01bea090 & 0x1000000) == 0) && ((DAT_01bea090 & 0x10) == 0)) &&
                 (810000.0 < (float)param_1[0x34a])) {
                FUN_00a8caf0(0x100002,0,0,0);
                return;
              }
              FUN_00a8caf0(0x100001,0,0,0);
            }
          }
          else {
            iVar2 = FUN_00a8c760(1);
            if (iVar2 == 0) {
              param_1[0x39d] = 0;
              return;
            }
          }
        }
      }
    }
  }
  return;
}

// 0087A8E0  FUN_0087a8e0  size=975  [between]
void __fastcall FUN_0087a8e0(int *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  undefined *puVar7;
  undefined4 local_14;
  undefined4 local_10 [4];
  
  local_14 = 0x3e2aaaab;
  local_10[0] = 0x4c;
  local_10[1] = 0x4d;
  local_10[2] = 0x4e;
  local_10[3] = 0x4f;
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    if (3 < param_1[0x988]) {
      param_1[0x988] = 0;
    }
    iVar5 = param_1[0x988];
    param_1[0x250] = iVar5;
    if (iVar5 == 0) {
      param_1[0x252] = param_1[0x989];
    }
    param_1[0x989] = param_1[0x989] + 1;
    uVar2 = local_10[iVar5];
    if (iVar5 == 3) {
      local_14 = 0x3dcccccd;
    }
    FUN_00aa4080(uVar2,0,local_14,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00864400(uVar2,0,local_14,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    FUN_0086f130();
    param_1[0x988] = param_1[0x988] + 1;
    if (3 < param_1[0x988]) {
      param_1[0x988] = 0;
    }
    if (90000.0 < (float)param_1[0x34a]) {
      piVar4 = (int *)FUN_00b7b200();
      if (((piVar4 == (int *)0x0) || (iVar5 = FUN_00b86410(), iVar5 == 0)) ||
         (iVar5 = (**(code **)(*piVar4 + 0x228))(), iVar5 == 0)) {
        param_1[0x248] = param_1[0x1506];
      }
      else {
        param_1[0x248] = param_1[0x1506];
        iVar5 = FUN_00b86410();
        if (iVar5 != 0) {
          (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
        }
      }
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0087ac35;
  param_1[0x469] = 1;
  iVar5 = FUN_00a8c760(5);
  if (iVar5 != 0) {
    piVar4 = (int *)FUN_00b7b200();
    if (((piVar4 == (int *)0x0) || (iVar5 = FUN_00b86410(), iVar5 == 0)) ||
       (iVar5 = (**(code **)(*piVar4 + 0x228))(), iVar5 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar3 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar3)(0x3ee66667,0x3ae4c388,0x3ed67750,0);
      }
    }
    else {
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
    }
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar5 = FUN_00b7d0b0();
  if (iVar5 != 0) {
    FUN_00b7d0b0();
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar7 = &DAT_01be9d80;
      (**(code **)(*piVar4 + 4))(&DAT_01be9d80);
      iVar5 = FUN_00dd6d80(puVar7);
      if (iVar5 != 0) {
        FUN_00a95ee0(0,param_1);
      }
    }
  }
  iVar5 = FUN_00a92f90();
  if ((*(int *)(iVar5 + 0xd0) + *(int *)(iVar5 + 0xc4) + *(int *)(iVar5 + 0xb8) == 0) ||
     (iVar5 = FUN_00e36060(0), iVar5 != 0)) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  else {
    if ((param_1[0x9a8] != 0) || (param_1[0x1513] != 0)) {
      iVar5 = param_1[0x463];
      FUN_00e26e90();
      *(undefined4 *)(iVar5 + 0xe4) = 0x3e19999a;
      *(undefined4 *)(iVar5 + 0xe8) = 0x3e19999a;
      *(undefined4 *)(iVar5 + 0xec) = 0x3e19999a;
      param_1[0x248] = 0;
    }
    if ((float)param_1[0x34a] <= 90000.0) {
      param_1[0x248] = 0;
    }
  }
LAB_0087ac35:
  iVar5 = FUN_00a8c760(0xb);
  if (iVar5 != 0) {
    pfVar1 = (float *)(param_1 + 0x2f8);
    *pfVar1 = 0.0;
    param_1[0x2f9] = 0;
    param_1[0x2fa] = param_1[0x248];
    D3DXVec3TransformNormal(pfVar1,pfVar1,param_1 + 4);
    param_1[0x14] = (int)(*pfVar1 + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x2f9] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x2fa] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x2fb] + (float)param_1[0x17]);
    fVar6 = (float10)FUN_00fdc1f0();
    param_1[0x248] = (int)(float)(fVar6 * (float10)(float)param_1[0x248]);
  }
  return;
}

// 0087ACB0  FUN_0087acb0  size=750  [between]
void __fastcall FUN_0087acb0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = FUN_00a8c760(0x2b);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  iVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 800))(0x3c888889);
  }
  iVar1 = (**(code **)(*param_1 + 0x34c))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar1 = FUN_0085d070();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0087ad36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x39c))();
    return;
  }
  if (param_1[0x187] == 0) {
    return;
  }
  iVar1 = FUN_00864ad0();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x39c))();
    FUN_0085e000(0);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (iVar1 != 0) {
    iVar1 = FUN_00416d50(8);
    if (((iVar1 == 0) && (iVar1 = FUN_00a8c760(1), iVar1 != 0)) &&
       (iVar1 = FUN_0085da60(1,1), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_00a8c760(0);
    if (((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) &&
       (iVar1 = FUN_0085d810(1,0), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_00a8c760(0);
    if (((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) &&
       (iVar1 = FUN_0085d8b0(1), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_00a8c760(0x12);
    if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 800))(0x3c888889), iVar1 != 0)) {
      FUN_00a8caf0(0x100006,0,0,0);
      return;
    }
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (((iVar1 < 4) && (iVar1 = FUN_00a8c760(0x16), iVar1 != 0)) &&
     ((param_1[0x33e] & param_1[0x389]) == 0)) {
    param_1[0x187] = 4;
    iVar1 = FUN_00a8c760(0xb);
    if (iVar1 == 0) {
      return;
    }
    param_1[0x187] = 8;
    return;
  }
  FUN_00708e60();
  uStack_28 = 1;
  uStack_24 = 1;
  uStack_18 = 1;
  uStack_10 = 1;
  iVar1 = FUN_008635c0(&uStack_28);
  if (iVar1 != 0) {
    return;
  }
  uVar4 = 1;
  uVar2 = FUN_00a8c760(0x11);
  uVar3 = FUN_00a8c760(0x1c);
  iVar1 = FUN_0086efb0(uVar3,uVar2,uVar4);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0087aee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x39c))();
    return;
  }
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_1c = 1;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 1;
    uStack_4 = 1;
    uStack_20 = 1;
    uStack_28 = 1;
    uStack_24 = 1;
    iVar1 = FUN_008635c0(&uStack_28);
    if (iVar1 != 0) goto LAB_0087af8c;
  }
  iVar1 = FUN_00a8c760(0);
  if (iVar1 == 0) {
    return;
  }
  if ((float)param_1[0x34a] <= 90000.0) {
    return;
  }
  if ((((DAT_01bea090._3_1_ & 1) != 0) || (((byte)DAT_01bea090 & 0x10) != 0)) ||
     ((float)param_1[0x34a] <= 810000.0)) {
    uVar2 = 0x100001;
  }
  else {
    uVar2 = 0x100002;
  }
  FUN_00a8caf0(uVar2,0,0,0);
LAB_0087af8c:
                    /* WARNING: Could not recover jumptable at 0x0087af9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x39c))();
  return;
}

// 0087AFA0  FUN_0087afa0  size=2020  [between]
void __fastcall FUN_0087afa0(int *param_1)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 auStack_30 [12];
  
  (**(code **)(*param_1 + 0x314))();
  iVar4 = FUN_00a8c760(0x12);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  auStack_30[0] = 0x51;
  auStack_30[1] = 0x52;
  auStack_30[2] = 0x53;
  auStack_30[3] = 0x54;
  auStack_30[4] = 0x57;
  auStack_30[5] = 0x58;
  auStack_30[6] = 0x59;
  auStack_30[7] = 0x5a;
  auStack_30[8] = 0x5c;
  auStack_30[9] = 0x5d;
  auStack_30[10] = 0x5e;
  auStack_30[0xb] = 0x5f;
  FUN_00b884c0();
  bVar3 = false;
  switch(param_1[0x187]) {
  case 0:
    FUN_0086f130();
    param_1[0x248] = 0;
    param_1[0x250] = param_1[0x988] + -1;
    uVar7 = auStack_30[(param_1[0x988] + -1) * 4];
    param_1[0x2dd] = 0;
    FUN_00aa4080(uVar7,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00864400(uVar7,0,0x3d888889,0x3f800000,0x8000000);
    FUN_00b86010(1);
    param_1[0x9b5] = 0;
    break;
  case 1:
    break;
  case 2:
    uVar7 = auStack_30[param_1[0x250] * 4 + 1];
    param_1[0x187] = 3;
    FUN_00aa4080(uVar7,0,0,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(uVar7,0,0,0x3f800000,0x8000000);
    param_1[0x2dd] = 1;
    goto LAB_0087b19d;
  case 3:
LAB_0087b19d:
    param_1[0x469] = 1;
    bVar3 = true;
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    uVar7 = 0;
    FUN_00a92f90(0);
    iVar4 = FUN_0085be10(uVar7);
    if (iVar4 != 0) {
      param_1[0x187] = 8;
    }
    goto switchD_0087b055_default;
  case 4:
    uVar7 = auStack_30[param_1[0x250] * 4 + 2];
    param_1[0x187] = 5;
    FUN_00aa4080(uVar7,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(uVar7,0,0x3d088889,0x3f800000,0x8000000);
    param_1[0x2dd] = 0;
    piVar5 = (int *)FUN_00b7b200();
    if (((piVar5 == (int *)0x0) || (iVar4 = FUN_00b86410(), iVar4 == 0)) ||
       (iVar4 = (**(code **)(*piVar5 + 0x228))(), iVar4 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar2 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar2)(0x3f800000,0x3ae4c388,0x40490fdb,0);
      }
    }
    else {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    param_1[0x248] = 0;
    if (90000.0 < (float)param_1[0x34a]) {
      param_1[0x248] = param_1[0x1506];
    }
    goto LAB_0087b321;
  case 5:
LAB_0087b321:
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    uVar7 = 0;
    FUN_00a92f90(0);
    iVar4 = FUN_0085be10(uVar7);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      (**(code **)(*param_1 + 0x39c))();
    }
    if ((param_1[0x9a8] != 0) || (param_1[0x1513] != 0)) {
      iVar4 = param_1[0x463];
      FUN_00e26e90();
      *(undefined4 *)(iVar4 + 0xe4) = 0x3e19999a;
      *(undefined4 *)(iVar4 + 0xe8) = 0x3e19999a;
      *(undefined4 *)(iVar4 + 0xec) = 0x3e19999a;
    }
    if ((param_1[0x9a8] != 0) || (param_1[0x1513] != 0)) {
      param_1[0x248] = 0;
    }
    iVar4 = FUN_00a8c760(0xb);
    if (iVar4 != 0) {
      pfVar1 = (float *)(param_1 + 0x2f8);
      *pfVar1 = 0.0;
      param_1[0x2f9] = 0;
      param_1[0x2fa] = param_1[0x248];
      D3DXVec3TransformNormal(pfVar1,pfVar1,param_1 + 4);
      param_1[0x14] = (int)((float)param_1[0x14] + *pfVar1);
      param_1[0x15] = (int)((float)param_1[0x2f9] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x2fa] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x2fb] + (float)param_1[0x17]);
LAB_0087b692:
      fVar6 = (float10)FUN_00fdc1f0();
      param_1[0x248] = (int)(float)(fVar6 * (float10)(float)param_1[0x248]);
    }
    goto switchD_0087b055_default;
  case 6:
  case 7:
    goto switchD_0087b055_default;
  case 8:
    param_1[0x248] = 0;
    uVar7 = auStack_30[param_1[0x250] * 4 + 3];
    param_1[0x187] = 9;
    if (90000.0 < (float)param_1[0x34a]) {
      param_1[0x248] = 0x3ecccccd;
    }
    if ((param_1[0x250] == 0) && (90000.0 < (float)param_1[0x34a])) {
      param_1[0x248] = 0x3ecccccd;
      uVar7 = 0x55;
    }
    FUN_00aa4080(uVar7,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(uVar7,0,0x3d088889,0x3f800000,0x8000000);
    param_1[0x2dd] = 0;
    piVar5 = (int *)FUN_00b7b200();
    if (((piVar5 == (int *)0x0) || (iVar4 = FUN_00b86410(), iVar4 == 0)) ||
       (iVar4 = (**(code **)(*piVar5 + 0x228))(), iVar4 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar2 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar2)(0x3f800000,0x3ae4c388,0x40490fdb,0);
      }
    }
    else {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    if (param_1[0x250] == 2) {
      FUN_0086c610(0);
    }
    goto LAB_0087b583;
  case 9:
LAB_0087b583:
    bVar3 = true;
    if (((param_1[0x9a8] != 0) || (param_1[0x1513] != 0)) && (param_1[0x250] != 0)) {
      FUN_0041cc40(0x3e19999a);
    }
    if ((param_1[0x9a8] != 0) || (param_1[0x1513] != 0)) {
      param_1[0x248] = 0;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    uVar7 = 0;
    FUN_00a92f90(0);
    iVar4 = FUN_0085be10(uVar7);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      if (param_1[0x250] == 0) {
        FUN_00a8caf0(0x100005,0,0,0);
      }
      (**(code **)(*param_1 + 0x39c))();
    }
    iVar4 = FUN_00a8c760(0xb);
    if (iVar4 == 0) goto switchD_0087b055_default;
    pfVar1 = (float *)(param_1 + 0x2f8);
    *pfVar1 = 0.0;
    param_1[0x2f9] = 0;
    param_1[0x2fa] = param_1[0x248];
    D3DXVec3TransformNormal(pfVar1,pfVar1,param_1 + 4);
    param_1[0x14] = (int)((float)param_1[0x14] + *pfVar1);
    param_1[0x15] = (int)((float)param_1[0x2f9] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x2fa] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x2fb] + (float)param_1[0x17]);
    goto LAB_0087b692;
  default:
    goto switchD_0087b055_default;
  }
  bVar3 = true;
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_008645f0();
  uVar7 = 0;
  FUN_00a92f90(0);
  iVar4 = FUN_0085be10(uVar7);
  if (iVar4 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0087b055_default:
  iVar4 = FUN_00a8c760(5);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00b7b200();
    if (((piVar5 != (int *)0x0) && (iVar4 = FUN_00b86410(), iVar4 != 0)) &&
       ((bVar3 || (iVar4 = (**(code **)(*piVar5 + 0x228))(), iVar4 != 0)))) {
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
      return;
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar2 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar2)(0x3ee66667,0x3ae4c388,0x3ed67750,0);
    }
  }
  return;
}

// 0087B7B0  FUN_0087b7b0  size=513  [between]
void __fastcall FUN_0087b7b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_0085d070();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0087b7e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x39c))();
    return;
  }
  if (param_1[0x187] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x34c))();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    iVar1 = FUN_00864ad0();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x39c))();
      FUN_0085e000(0);
      return;
    }
    iVar1 = FUN_00a8cac0();
    if (((iVar1 < 4) && (iVar1 = FUN_00a8c760(0x16), iVar1 != 0)) &&
       ((param_1[0x33e] & param_1[0x389]) == 0)) {
      param_1[0x187] = 4;
      iVar1 = FUN_00a8c760(0xb);
      if (iVar1 != 0) {
        param_1[0x187] = 8;
        return;
      }
    }
    iVar1 = FUN_008635c0(&stack0xffffffd4);
    if (iVar1 == 0) {
      uVar4 = 1;
      uVar2 = FUN_00a8c760(0x11);
      uVar3 = FUN_00a8c760(0x1c);
      iVar1 = FUN_0086efb0(uVar3,uVar2,uVar4);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0087b8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x39c))();
        return;
      }
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 == 0) || (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) {
        iVar1 = FUN_00a8c760(0);
        if (iVar1 == 0) {
          return;
        }
        if ((float)param_1[0x34a] <= 90000.0) {
          return;
        }
        if ((((DAT_01bea090._3_1_ & 1) != 0) || (((byte)DAT_01bea090 & 0x10) != 0)) ||
           ((float)param_1[0x34a] <= 810000.0)) {
          uVar2 = 0x100001;
        }
        else {
          uVar2 = 0x100002;
        }
        FUN_00a8caf0(uVar2,0,0,0);
      }
                    /* WARNING: Could not recover jumptable at 0x0087b9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x39c))();
      return;
    }
  }
  return;
}

// 0087B9C0  FUN_0087b9c0  size=1546  [between]
void __fastcall FUN_0087b9c0(int *param_1)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  (**(code **)(*param_1 + 0x314))();
  FUN_00b884c0();
  bVar3 = false;
  bVar4 = true;
  switch(param_1[0x187]) {
  case 0:
    FUN_0086f130();
    uVar8 = 0x61;
    param_1[0x248] = 0;
    if (param_1[0x2dd] != 0) {
      uVar8 = 0x65;
    }
    FUN_00aa4080(uVar8,0,0x3dcccccd,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(uVar8,0,0x3dcccccd,0x3f800000,0x8000000);
    FUN_00b86010(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x9b5] = 0;
    break;
  case 1:
    break;
  case 2:
    param_1[0x2dd] = 1;
    param_1[0x187] = 3;
    FUN_00aa4080(0x62,0,0,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x62,0,0,0x3f800000,0x8000000);
    param_1[0x248] = 0x40000000;
    param_1[0x250] = 1;
    goto LAB_0087bb42;
  case 3:
LAB_0087bb42:
    param_1[0x469] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    uVar8 = 0;
    FUN_00a92f90(0);
    iVar5 = FUN_0085be10(uVar8);
    bVar3 = bVar4;
    if (iVar5 != 0) {
      param_1[0x187] = 8;
      bVar3 = true;
    }
    goto switchD_0087b9f1_default;
  case 4:
    param_1[0x2dd] = 0;
    param_1[0x187] = 5;
    FUN_00aa4080(99,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(99,0,0x3d088889,0x3f800000,0x8000000);
    piVar6 = (int *)FUN_00b7b200();
    if (((piVar6 == (int *)0x0) || (iVar5 = FUN_00b86410(), iVar5 == 0)) ||
       (iVar5 = (**(code **)(*piVar6 + 0x228))(), iVar5 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar2 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar2)(0x3f800000,0x3ae4c388,0x40490fdb,0);
      }
    }
    else {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    param_1[0x248] = 0;
    if (90000.0 < (float)param_1[0x34a]) {
      param_1[0x248] = param_1[0x1506];
    }
    goto LAB_0087bcb5;
  case 5:
LAB_0087bcb5:
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    uVar8 = 0;
    FUN_00a92f90(0);
    iVar5 = FUN_0085be10(uVar8);
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      (**(code **)(*param_1 + 0x39c))();
    }
    if ((param_1[0x9a8] != 0) || (param_1[0x1513] != 0)) {
      param_1[0x248] = 0;
    }
    iVar5 = FUN_00a8c760(0xb);
    if (iVar5 != 0) {
      pfVar1 = (float *)(param_1 + 0x2f8);
      *pfVar1 = 0.0;
      param_1[0x2f9] = 0;
      param_1[0x2fa] = param_1[0x248];
      D3DXVec3TransformNormal(pfVar1,pfVar1,param_1 + 4);
      param_1[0x14] = (int)(*pfVar1 + (float)param_1[0x14]);
      param_1[0x15] = (int)((float)param_1[0x2f9] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x2fa] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x2fb] + (float)param_1[0x17]);
      fVar7 = (float10)FUN_00fdc1f0();
      param_1[0x248] = (int)(float)(fVar7 * (float10)(float)param_1[0x248]);
    }
    goto switchD_0087b9f1_default;
  case 6:
  case 7:
    goto switchD_0087b9f1_default;
  case 8:
    param_1[0x2dd] = 0;
    param_1[0x187] = 9;
    FUN_00aa4080(100,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(100,0,0x3d088889,0x3f800000,0x8000000);
    iVar5 = FUN_00b7b200();
    if ((iVar5 == 0) || (iVar5 = FUN_00b86410(), iVar5 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar2 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar2)(0x3f800000,0x3ae4c388,0x40490fdb,0);
        bVar4 = true;
      }
    }
    else {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    goto LAB_0087be82;
  case 9:
    bVar4 = bVar3;
LAB_0087be82:
    if ((param_1[0x9a8] != 0) || (param_1[0x1513] != 0)) {
      iVar5 = param_1[0x463];
      FUN_00e26e90();
      *(undefined4 *)(iVar5 + 0xe4) = 0x3dcccccd;
      *(undefined4 *)(iVar5 + 0xe8) = 0x3dcccccd;
      *(undefined4 *)(iVar5 + 0xec) = 0x3dcccccd;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    uVar8 = 0;
    FUN_00a92f90(0);
    iVar5 = FUN_0085be10(uVar8);
    bVar3 = bVar4;
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      (**(code **)(*param_1 + 0x39c))();
    }
  default:
    goto switchD_0087b9f1_default;
  }
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  bVar3 = true;
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_008645f0();
  uVar8 = 0;
  FUN_00a92f90(0);
  iVar5 = FUN_0085be10(uVar8);
  if (iVar5 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0087b9f1_default:
  iVar5 = FUN_00a8c760(5);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00b7b200();
    if (((piVar6 != (int *)0x0) && (iVar5 = FUN_00b86410(), iVar5 != 0)) &&
       ((bVar3 || (iVar5 = (**(code **)(*piVar6 + 0x228))(), iVar5 != 0)))) {
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
      return;
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar2 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar2)(0x3ee66667,0x3ae4c388,0x3ed67750,0);
    }
  }
  return;
}

// 0087C000  FUN_0087c000  size=400  [between]
void __fastcall FUN_0087c000(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_0085d070();
  if ((iVar1 == 0) && (param_1[0x187] != 0)) {
    iVar1 = (**(code **)(*param_1 + 0x34c))();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    iVar1 = FUN_00864ad0();
    if (iVar1 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar1 = FUN_008635c0(&stack0xffffffd4);
    if (iVar1 == 0) {
      uVar4 = 1;
      uVar2 = FUN_00a8c760(0x11);
      uVar3 = FUN_00a8c760(0x1c);
      iVar1 = FUN_0086efb0(uVar3,uVar2,uVar4);
      if (((iVar1 == 0) &&
          (((iVar1 = FUN_00a8c760(0), iVar1 == 0 ||
            (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
           (iVar1 = FUN_00a8c760(0), iVar1 != 0)))) && (90000.0 < (float)param_1[0x34a])) {
        if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
           (810000.0 < (float)param_1[0x34a])) {
          FUN_00a8caf0(0x100002,0,0,0);
          return;
        }
        FUN_00a8caf0(0x100001,0,0,0);
      }
    }
  }
  return;
}

// 0087C190  FUN_0087c190  size=1202  [between]
void __fastcall FUN_0087c190(int *param_1)

{
  int iVar1;
  
  FUN_00b884c0();
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    param_1[0x250] = param_1[0x8e5];
    FUN_00aa4080(0x67,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x67,0,0x3d888889,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x25] = param_1[0x97f];
    FUN_00b86010(1);
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3f860a92,0);
    FUN_0086f130();
    param_1[0x988] = 0;
    param_1[0x9b5] = 0;
    param_1[0x2dd] = 0;
    param_1[0x9f1] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x68,0,0,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x68,0,0,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x9f1] = 0;
    goto LAB_0087c3fe;
  case 3:
LAB_0087c3fe:
    param_1[0x469] = 1;
    iVar1 = FUN_00a8c760(5);
    if ((iVar1 != 0) && (param_1[0x9f1] == 0)) {
      FUN_00b7b270(0x3d75c28f,0x393702d3,0x3d8efa35,0);
    }
    iVar1 = FUN_00a8c760(5);
    if ((iVar1 == 0) || (param_1[0x9f1] == 0)) {
      iVar1 = param_1[0x463];
      FUN_00e26e90();
      *(undefined4 *)(iVar1 + 0xe4) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xe8) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xec) = 0x3f800000;
    }
    else {
      FUN_0041cc40(0x3e19999a);
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    iVar1 = FUN_00a92f90();
    if ((*(int *)(iVar1 + 0xd0) + *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0xb8) == 0) ||
       (iVar1 = FUN_00e36060(0), iVar1 != 0)) goto LAB_0087c511;
    goto LAB_0087c505;
  case 4:
    FUN_00aa4080(0x69,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x69,0,0x3d888889,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3f860a92,0);
    param_1[0x9f1] = 0;
    goto LAB_0087c5a8;
  case 5:
LAB_0087c5a8:
    param_1[0x469] = 1;
    iVar1 = FUN_00a8c760(5);
    if (iVar1 != 0) {
      FUN_00b7b270(0x3d75c28f,0x393702d3,0x3d8efa35,0);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    iVar1 = FUN_00a92f90();
    if ((*(int *)(iVar1 + 0xd0) + *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0xb8) == 0) ||
       (iVar1 = FUN_00e36060(0), iVar1 != 0)) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
  default:
    goto switchD_0087c1bc_default;
  }
  param_1[0x469] = 1;
  iVar1 = FUN_00a8c760(5);
  if ((iVar1 != 0) && (param_1[0x9f1] == 0)) {
    FUN_00b7b270(0x3d75c28f,0x393702d3,0x3d8efa35,0);
  }
  iVar1 = FUN_00a8c760(5);
  if ((iVar1 == 0) || (param_1[0x9f1] == 0)) {
    iVar1 = param_1[0x463];
    FUN_00e26e90();
    *(undefined4 *)(iVar1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xec) = 0x3f800000;
  }
  else {
    FUN_0041cc40(0x3e19999a);
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_008645f0();
  iVar1 = FUN_00a92f90();
  if ((*(int *)(iVar1 + 0xd0) + *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0xb8) == 0) ||
     (iVar1 = FUN_00e36060(0), iVar1 != 0)) {
    param_1[0x187] = 2;
    return;
  }
LAB_0087c505:
  if (param_1[0x9f1] == 0) {
switchD_0087c1bc_default:
    return;
  }
LAB_0087c511:
  param_1[0x187] = 4;
  return;
}

// 0087C660  FUN_0087c660  size=400  [between]
void __fastcall FUN_0087c660(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x34c))();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    iVar1 = FUN_00864ad0();
    if (iVar1 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar1 = FUN_0085d070();
    if ((iVar1 == 0) && (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) {
      uVar4 = 1;
      uVar2 = FUN_00a8c760(0x11);
      uVar3 = FUN_00a8c760(0x1c);
      iVar1 = FUN_0086efb0(uVar3,uVar2,uVar4);
      if (((iVar1 == 0) &&
          (((iVar1 = FUN_00a8c760(0), iVar1 == 0 ||
            (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
           (iVar1 = FUN_00a8c760(0), iVar1 != 0)))) && (90000.0 < (float)param_1[0x34a])) {
        if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
           (810000.0 < (float)param_1[0x34a])) {
          FUN_00a8caf0(0x100002,0,0,0);
          return;
        }
        FUN_00a8caf0(0x100001,0,0,0);
      }
    }
  }
  return;
}

// 0087CA10  FUN_0087ca10  size=497  [between]
void __fastcall FUN_0087ca10(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x34c))();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    iVar1 = FUN_00864ad0();
    if (iVar1 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar1 = FUN_0085d070();
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(1);
      if ((iVar1 != 0) && (iVar1 = FUN_0085c530(), iVar1 != 0)) {
        param_1[0x988] = 1;
        param_1[0x150c] = 0;
        param_1[0x95b] = 0;
        param_1[0x98c] = 0;
        param_1[0x98f] = -1;
        param_1[0x98a] = 0;
        FUN_00a8caf0(0x100010,0,0,0);
        param_1[0xcd4] = 0;
        param_1[0x991] = 0;
        return;
      }
      iVar1 = FUN_008635c0(&stack0xffffffd4);
      if (iVar1 == 0) {
        uVar4 = 1;
        uVar2 = FUN_00a8c760(0x11);
        uVar3 = FUN_00a8c760(0x1c);
        iVar1 = FUN_0086efb0(uVar3,uVar2,uVar4);
        if (((iVar1 == 0) &&
            (((iVar1 = FUN_00a8c760(0), iVar1 == 0 ||
              (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
             (iVar1 = FUN_00a8c760(0), iVar1 != 0)))) && (90000.0 < (float)param_1[0x34a])) {
          if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
             (810000.0 < (float)param_1[0x34a])) {
            FUN_00a8caf0(0x100002,0,0,0);
            return;
          }
          FUN_00a8caf0(0x100001,0,0,0);
        }
      }
    }
  }
  return;
}

// 0087CEE0  FUN_0087cee0  size=469  [between]
void __fastcall FUN_0087cee0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x34c))();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    iVar1 = FUN_00864ad0();
    if (iVar1 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar1 = FUN_0085d070();
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(0xb);
      if ((iVar1 != 0) && (iVar1 = FUN_0085c530(), iVar1 != 0)) {
        param_1[0x150c] = 0;
        param_1[0x98a] = 0;
        param_1[0x988] = 0;
        param_1[0x95b] = 0;
        FUN_00a8caf0(0x100016,0,0,0);
        return;
      }
      iVar1 = FUN_008635c0(&stack0xffffffd4);
      if (iVar1 == 0) {
        uVar4 = 1;
        uVar2 = FUN_00a8c760(0x11);
        uVar3 = FUN_00a8c760(0x1c);
        iVar1 = FUN_0086efb0(uVar3,uVar2,uVar4);
        if (((iVar1 == 0) &&
            (((iVar1 = FUN_00a8c760(0), iVar1 == 0 ||
              (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) &&
             (iVar1 = FUN_00a8c760(0), iVar1 != 0)))) && (90000.0 < (float)param_1[0x34a])) {
          if ((((DAT_01bea090._3_1_ & 1) == 0) && (((byte)DAT_01bea090 & 0x10) == 0)) &&
             (810000.0 < (float)param_1[0x34a])) {
            FUN_00a8caf0(0x100002,0,0,0);
            return;
          }
          FUN_00a8caf0(0x100001,0,0,0);
        }
      }
    }
  }
  return;
}

// 0087D390  FUN_0087d390  size=510  [between]
void __fastcall FUN_0087d390(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_0085d070();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0087d3c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x39c))();
    return;
  }
  if (param_1[0x187] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x34c))();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    iVar1 = FUN_00864ad0();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x39c))();
      FUN_0085e000(0);
      return;
    }
    iVar1 = FUN_00a8cac0();
    if (((iVar1 < 2) && (iVar1 = FUN_00a8c760(0x16), iVar1 != 0)) &&
       ((param_1[0x33e] & param_1[0x389]) == 0)) {
      param_1[0x187] = 2;
      iVar1 = FUN_00a8c760(0xb);
      if (iVar1 != 0) {
        param_1[0x187] = 4;
        return;
      }
    }
    iVar1 = FUN_008635c0(&stack0xffffffd4);
    if (iVar1 == 0) {
      uVar4 = 1;
      uVar2 = FUN_00a8c760(0x11);
      uVar3 = FUN_00a8c760(0x1c);
      iVar1 = FUN_0086efb0(uVar3,uVar2,uVar4);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0087d4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x39c))();
        return;
      }
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 == 0) || (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) {
        iVar1 = FUN_00a8c760(0);
        if (iVar1 == 0) {
          return;
        }
        if ((float)param_1[0x34a] <= 90000.0) {
          return;
        }
        if ((((DAT_01bea090._3_1_ & 1) != 0) || (((byte)DAT_01bea090 & 0x10) != 0)) ||
           ((float)param_1[0x34a] <= 810000.0)) {
          uVar2 = 0x100001;
        }
        else {
          uVar2 = 0x100002;
        }
        FUN_00a8caf0(uVar2,0,0,0);
      }
                    /* WARNING: Could not recover jumptable at 0x0087d58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x39c))();
      return;
    }
  }
  return;
}

// 0087D590  FUN_0087d590  size=1222  [between]
void __fastcall FUN_0087d590(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(*param_1 + 0x314))();
  FUN_00b884c0();
  switch(param_1[0x187]) {
  case 0:
    FUN_0086f130();
    param_1[0x248] = 0;
    FUN_00aa4080(0x70,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x70,0,0x3e088889,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    param_1[0x248] = 0x40000000;
    param_1[0x9b5] = 0;
    param_1[0x250] = 1;
    param_1[0x2dd] = 1;
    goto LAB_0087d65d;
  case 1:
LAB_0087d65d:
    param_1[0x469] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    iVar2 = FUN_00a92f90();
    if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0) ||
       (iVar2 = FUN_00e36060(0), iVar2 != 0)) {
      param_1[0x187] = 4;
    }
    goto switchD_0087d5bd_default;
  case 2:
    param_1[0x187] = 3;
    FUN_00aa4080(0x71,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x71,0,0x3d088889,0x3f800000,0x8000000);
    param_1[0x2dd] = 0;
    piVar3 = (int *)FUN_00b7b200();
    if (((piVar3 == (int *)0x0) || (iVar2 = FUN_00b86410(), iVar2 == 0)) ||
       (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar1 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar1)(0x3f800000,0x3ae4c388,0x40490fdb,0);
      }
    }
    else {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    break;
  case 3:
    break;
  case 4:
    param_1[0x187] = 5;
    FUN_00aa4080(0x72,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x72,0,0x3d088889,0x3f800000,0x8000000);
    param_1[0x2dd] = 0;
    piVar3 = (int *)FUN_00b7b200();
    if (((piVar3 == (int *)0x0) || (iVar2 = FUN_00b86410(), iVar2 == 0)) ||
       (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar1 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar1)(0x3f800000,0x3ae4c388,0x40490fdb,0);
      }
      FUN_0086c610(0);
    }
    else {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
      FUN_0086c610(0);
    }
    goto LAB_0087d953;
  case 5:
LAB_0087d953:
    if ((param_1[0x9a8] != 0) || (param_1[0x1513] != 0)) {
      iVar2 = param_1[0x463];
      FUN_00e26e90();
      *(undefined4 *)(iVar2 + 0xe4) = 0x3e19999a;
      *(undefined4 *)(iVar2 + 0xe8) = 0x3e19999a;
      *(undefined4 *)(iVar2 + 0xec) = 0x3e19999a;
    }
    break;
  default:
    goto switchD_0087d5bd_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_008645f0();
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0) ||
     (iVar2 = FUN_00e36060(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x388))(0);
    (**(code **)(*param_1 + 0x39c))();
  }
switchD_0087d5bd_default:
  iVar2 = FUN_00a8c760(5);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00b7b200();
    if (((piVar3 != (int *)0x0) && (iVar2 = FUN_00b86410(), iVar2 != 0)) &&
       (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 != 0)) {
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
      return;
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar1)(0x3ee66667,0x3ae4c388,0x3ed67750,0);
    }
  }
  return;
}

// 0087DDC0  FUN_0087ddc0  size=568  [between]
void __fastcall FUN_0087ddc0(int *param_1)

{
  int iVar1;
  
  FUN_00b7d8b0();
  if (param_1[0x189] < 4) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  iVar1 = FUN_0085d070();
  if (iVar1 != 0) {
    return;
  }
  if (param_1[0x187] == 3) {
    if (0x3c < *(int *)(param_1[0x1d9] + 0x120)) {
      FUN_00a8caf0(0x100003,0,0,0);
      param_1[0xb17] = 0x41a00000;
    }
    iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 800))(0x3c888889);
  }
  if ((((DAT_01bea090 & 0x8000) == 0) &&
      (((iVar1 = FUN_00a8c760(0x17), iVar1 != 0 || (iVar1 = FUN_00a8c760(1), iVar1 != 0)) ||
       (0.0 < (float)param_1[0xd07])))) && (iVar1 = FUN_008649d0(), iVar1 != 0)) {
    FUN_0085e000(0);
    return;
  }
  if (param_1[0x187] == 0) {
    return;
  }
  if (param_1[0x187] < 4) {
    iVar1 = FUN_00a8c760(1);
    if ((iVar1 != 0) && (iVar1 = FUN_0085da60(1,1), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_00a8c760(0);
    if (((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) &&
       (iVar1 = FUN_0085d810(1,0), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(0x1c), iVar1 == 0)) {
      return;
    }
    FUN_0085d8b0(1);
    return;
  }
  iVar1 = FUN_008635c0(&stack0xffffffd4);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (iVar1 = FUN_0086efb0(1,1,0), iVar1 != 0)) {
    return;
  }
  iVar1 = FUN_00a8c760(0);
  if (iVar1 == 0) {
    return;
  }
  if ((float)param_1[0x34a] <= 90000.0) {
    return;
  }
  if ((float)param_1[0x34a] <= 810000.0) {
    FUN_00a8caf0(0x100001,0,0,0);
    return;
  }
  FUN_00a8caf0(0x100002,0,0,0);
  return;
}

// 0087E000  FUN_0087e000  size=1184  [between]
void __fastcall FUN_0087e000(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  (**(code **)(*param_1 + 0x314))();
  iVar2 = FUN_00a8c760(0x12);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  FUN_00b884c0();
  if ((float)param_1[0x34a] <= 90000.0) {
    param_1[0x224] = 0;
    param_1[0x226] = 0;
  }
  switch(param_1[0x187]) {
  case 0:
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      pcVar1 = *(code **)(*param_1 + 0x308);
      fVar4 = (float10)fpatan((float10)*(float *)(iVar2 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar2 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar4;
      (*pcVar1)(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    FUN_00aa4080(0x81,0,0x3e2aaaab,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x81,0,0x3e2aaaab,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x23d] = param_1[0x25];
    param_1[0x225] = 0x3e4ccccd;
    FUN_00b86010(1);
    FUN_0086f130();
    param_1[0x988] = param_1[0x988] + 1;
    param_1[0x409] = 0;
    if (5 < param_1[0x988]) {
      param_1[0x988] = 0;
    }
    param_1[0x995] = param_1[0x995] | 8;
    param_1[0x24] = 0;
    param_1[0x2dd] = 0;
    param_1[0x9b5] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x82,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    FUN_00864400(0x82,0,0x3d088889,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0087e37e;
  case 3:
LAB_0087e37e:
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
    param_1[0x409] = (int)((float)param_1[0x244] * -0.13 + (float)param_1[0x409]);
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    return;
  case 4:
    FUN_00aa4080(0x83,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x83,0,0x3d088889,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0087e444;
  case 5:
LAB_0087e444:
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    iVar2 = FUN_00a92f90();
    if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) &&
       (iVar2 = FUN_00e36060(0), iVar2 == 0)) {
      return;
    }
    (**(code **)(*param_1 + 0x388))(0);
    return;
  default:
    return;
  }
  param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
  param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
  param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
  iVar2 = FUN_00a8c760(0x12);
  if (iVar2 == 0) {
    param_1[0x409] = (int)((float)param_1[0x244] * -0.1 + (float)param_1[0x409]);
  }
  else {
    param_1[0x225] = (int)((float)param_1[0x225] - 0.005);
    piVar3 = (int *)FUN_00b7b200();
    if (((piVar3 == (int *)0x0) || (iVar2 = FUN_00b86410(), iVar2 == 0)) ||
       (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar1 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar1)(0x3ee66667,0x3ae4c388,0x3ed67750,0);
      }
    }
    else {
      FUN_00b8ced0(0x40800000,0x3fc00000,0x3dcccccd,0x3e99999a);
    }
  }
  param_1[0x469] = 1;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_008645f0();
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) &&
     (iVar2 = FUN_00e36060(0), iVar2 == 0)) {
    return;
  }
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 0087E4C0  FUN_0087e4c0  size=729  [between]
void __fastcall FUN_0087e4c0(int *param_1)

{
  int iVar1;
  undefined1 auStack_54 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  
  FUN_00b7d8b0();
  iVar1 = FUN_00a8c760(0x2b);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  iVar1 = FUN_0085d070();
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (((iVar1 < 4) && (iVar1 = FUN_00a8c760(0x16), iVar1 != 0)) &&
     ((param_1[0x33e] & param_1[0x389]) == 0)) {
    param_1[0x187] = 4;
    iVar1 = FUN_00a8c760(0xb);
    if (iVar1 != 0) {
      FUN_00a8caf0(0x10001a,0,0,0);
      return;
    }
  }
  if ((param_1[0x187] == 7) || (param_1[0x187] == 5)) {
    if (0x3c < *(int *)(param_1[0x1d9] + 0x120)) {
      FUN_00a8caf0(0x100003,0,0,0);
      param_1[0xb17] = 0x41a00000;
    }
    fStack_50 = (float)param_1[0x408] + (float)param_1[0x224];
    fStack_4c = (float)param_1[0x409] + (float)param_1[0x225];
    fStack_48 = (float)param_1[0x40a] + (float)param_1[0x226];
    fStack_44 = (float)param_1[0x40b] + (float)param_1[0x227];
    iVar1 = (**(code **)(*param_1 + 800))(0x3d088889);
    if ((iVar1 != 0) ||
       (iVar1 = hkpCdPointCollector::hkpCdPointCollector_11(auStack_54,0x3d888889), iVar1 != 0)) {
      param_1[0x187] = 8;
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 800))(0x3c888889);
  }
  iVar1 = FUN_00864ad0();
  if (iVar1 != 0) {
    FUN_0085e000(0);
    return;
  }
  if (param_1[0x187] == 0) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (iVar1 != 0) {
    iVar1 = FUN_00a8c760(1);
    if ((iVar1 != 0) && (iVar1 = FUN_0085da60(1,1), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_00a8c760(0);
    if (((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) &&
       (iVar1 = FUN_0085d810(1,0), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(0x1c), iVar1 == 0)) {
      return;
    }
    FUN_0085d8b0(1);
    return;
  }
  FUN_00708e60();
  uStack_3c = 0;
  uStack_38 = 1;
  uStack_2c = 1;
  uStack_24 = 1;
  iVar1 = FUN_008635c0(&uStack_3c);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (iVar1 = FUN_0086efb0(1,1,0), iVar1 != 0)) {
    return;
  }
  iVar1 = FUN_00a8c760(0);
  if (iVar1 == 0) {
    return;
  }
  if ((float)param_1[0x34a] <= 90000.0) {
    return;
  }
  if ((float)param_1[0x34a] <= 810000.0) {
    FUN_00a8caf0(0x100001,0,0,0);
    return;
  }
  FUN_00a8caf0(0x100002,0,0,0);
  return;
}

// 0087E7A0  FUN_0087e7a0  size=2603  [between]
void __fastcall FUN_0087e7a0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined1 auStack_7c [4];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a8c760(0x12);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  FUN_00b884c0();
  if ((float)param_1[0x34a] <= 90000.0) {
    param_1[0x224] = 0;
    param_1[0x226] = 0;
  }
  switch(param_1[0x187]) {
  case 0:
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c8a0();
      pcVar1 = *(code **)(*param_1 + 0x308);
      fVar5 = (float10)fpatan((float10)*(float *)(iVar3 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar3 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar5;
      (*pcVar1)(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    FUN_00aa4080(0x86,0,0x3e2aaaab,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x86,0,0x3e2aaaab,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x23d] = param_1[0x25];
    param_1[0x225] = 0x3e4ccccd;
    FUN_00b86010(1);
    FUN_0086f130();
    param_1[0x995] = param_1[0x995] | 8;
    param_1[0x409] = 0;
    param_1[0x988] = 0;
    param_1[0x2dd] = 0;
    param_1[0x9b5] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x87,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x87,0,0x3d088889,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x2dd] = 1;
    goto LAB_0087eafc;
  case 3:
LAB_0087eafc:
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
    param_1[0x409] = 0;
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    uVar6 = 0;
    FUN_00a92f90(0);
    iVar3 = FUN_0085be10(uVar6);
    if (iVar3 == 0) {
      return;
    }
    FUN_00a8caf0(0x10001a,0,0,0);
    return;
  case 4:
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c8a0();
      pcVar1 = *(code **)(*param_1 + 0x308);
      fVar5 = (float10)fpatan((float10)*(float *)(iVar3 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar3 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar5;
      (*pcVar1)(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    FUN_00aa4080(0x88,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x88,0,0x3d088889,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x23d] = param_1[0x25];
    param_1[0x2dd] = 0;
    param_1[0x225] = 0x3e4ccccd;
    param_1[0x9b5] = 0;
    param_1[0x409] = 0;
    goto LAB_0087ec69;
  case 5:
LAB_0087ec69:
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
    iVar3 = FUN_00a8c760(0x12);
    if (iVar3 == 0) {
      param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
      param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
      param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
      fVar2 = (float)param_1[0x244] * -0.13;
      goto LAB_0087ea2d;
    }
    param_1[0x225] = (int)((float)param_1[0x225] - 0.005);
    piVar4 = (int *)FUN_00b7b200();
    if (((piVar4 == (int *)0x0) || (iVar3 = FUN_00b86410(), iVar3 == 0)) ||
       (iVar3 = (**(code **)(*piVar4 + 0x228))(), iVar3 == 0)) goto LAB_0087e9ce;
    FUN_00b8ced0(0x40800000,0x3fc00000,0x3dcccccd,0x3e99999a);
    goto LAB_0087ea39;
  case 6:
    FUN_00aa4080(0x89,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    FUN_00864400(0x89,0,0x3d088889,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0087edcc;
  case 7:
LAB_0087edcc:
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
    param_1[0x409] = (int)((float)param_1[0x244] * -0.13 + (float)param_1[0x409]);
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    return;
  case 8:
    FUN_00aa4080(0x8a,0,0,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x8a,0,0,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0087ee93;
  case 9:
LAB_0087ee93:
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    uVar6 = 0;
    FUN_00a92f90(0);
    iVar3 = FUN_0085be10(uVar6);
    if (iVar3 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x388))(0);
    return;
  case 10:
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c8a0();
      pcVar1 = *(code **)(*param_1 + 0x308);
      fVar5 = (float10)fpatan((float10)*(float *)(iVar3 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar3 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar5;
      (*pcVar1)(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    FUN_00aa4080(0x8b,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x8b,0,0x3d088889,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    iVar3 = FUN_00b7b200();
    if (iVar3 == 0) {
      param_1[0x24] = 0;
    }
    else {
      FUN_00b7b230(auStack_60);
      thunk_FUN_00dde510(&fStack_74,&fStack_78,auStack_60,param_1 + 0x10);
      param_1[0x25] = (int)fStack_78;
      param_1[0x24] = (int)(fStack_74 * -1.0);
    }
    goto LAB_0087eff6;
  case 0xb:
LAB_0087eff6:
    iVar3 = FUN_00b7b200();
    if (iVar3 != 0) {
      FUN_00b7b230(auStack_60);
      D3DXMatrixInverse(auStack_50,0,param_1 + 4);
      D3DXVec3TransformNormal(auStack_7c,&fStack_6c,auStack_5c);
      fStack_70 = fStack_70 + fStack_20;
      fStack_6c = fStack_1c + fStack_6c;
      fStack_68 = fStack_18 + fStack_68;
      if (2.0 <= fStack_68) {
        thunk_FUN_00dde510(&fStack_78,&fStack_74,auStack_60,param_1 + 0x10);
        FUN_00a8db10(param_1 + 0x25,param_1[0x25],fStack_74,0x3e4ccccd,0x3ae4c388,0x3db2b8c2);
        FUN_00a8db10(param_1 + 0x24,param_1[0x24],fStack_78 * -1.0,0x3e4ccccd,0x3ae4c388,0x3db2b8c2)
        ;
      }
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    if ((*(byte *)(param_1 + 0x9f4) & 1) != 0) {
      FUN_0041cc40(0x3e19999a);
    }
    iVar3 = FUN_00a8c760(0x12);
    if (iVar3 != 0) {
      FUN_00a8db10(param_1 + 0x24,param_1[0x24],0,0x3e99999a,0x3ae4c388,
                   (float)param_1[0x244] * 0.06981317);
    }
    uVar6 = 0;
    FUN_00a92f90(0);
    iVar3 = FUN_0085be10(uVar6);
    if (iVar3 != 0) {
      FUN_00a8caf0(0x100005,0,0,0);
      (**(code **)(*param_1 + 0x314))();
      param_1[0x24] = 0;
      return;
    }
  default:
    goto switchD_0087e80f_default;
  }
  param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
  param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
  param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
  iVar3 = FUN_00a8c760(0x12);
  if (iVar3 == 0) {
    fVar2 = (float)param_1[0x244] * -0.1;
LAB_0087ea2d:
    param_1[0x409] = (int)(fVar2 + (float)param_1[0x409]);
  }
  else {
    param_1[0x225] = (int)((float)param_1[0x225] - 0.005);
    piVar4 = (int *)FUN_00b7b200();
    if (((piVar4 == (int *)0x0) || (iVar3 = FUN_00b86410(), iVar3 == 0)) ||
       (iVar3 = (**(code **)(*piVar4 + 0x228))(), iVar3 == 0)) {
LAB_0087e9ce:
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar1 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar1)(0x3ee66667,0x3ae4c388,0x3ed67750,0);
      }
    }
    else {
      FUN_00b8ced0(0x40800000,0x3fc00000,0x3dcccccd,0x3e99999a);
    }
  }
LAB_0087ea39:
  param_1[0x469] = 1;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_008645f0();
  uVar6 = 0;
  FUN_00a92f90(0);
  iVar3 = FUN_0085be10(uVar6);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_0087e80f_default:
  return;
}

// 0087F200  FUN_0087f200  size=697  [between]
void __fastcall FUN_0087f200(int *param_1)

{
  int iVar1;
  
  FUN_00b7d8b0();
  iVar1 = FUN_00a8c760(0x2b);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  iVar1 = (**(code **)(*param_1 + 0x34c))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x314))();
    param_1[0x224] = (int)((float)param_1[0x224] * 0.0);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.0);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.0);
    param_1[0x227] = (int)((float)param_1[0x227] * 0.0);
    param_1[0x408] = (int)((float)param_1[0x408] * 0.0);
    param_1[0x409] = (int)((float)param_1[0x409] * 0.0);
    param_1[0x40a] = (int)((float)param_1[0x40a] * 0.0);
    param_1[0x40b] = (int)((float)param_1[0x40b] * 0.0);
    param_1[0x24] = 0;
    FUN_00a8caf0(0x100005,0,0,0);
    return;
  }
  iVar1 = FUN_0085d070();
  if (iVar1 != 0) {
    return;
  }
  if ((param_1[0x187] < 4) || (param_1[0x187] != 5)) {
    (**(code **)(*param_1 + 800))(0x3c888889);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
    if ((iVar1 != 0) && (iVar1 = FUN_00a8c760(0x12), iVar1 == 0)) {
      param_1[0x24] = 0;
      FUN_00a8caf0(0x100006,0,0,0);
    }
  }
  iVar1 = FUN_00864ad0();
  if (iVar1 != 0) {
    FUN_0085e000(0);
    return;
  }
  if (param_1[0x187] == 0) {
    return;
  }
  if ((param_1[0x187] < 4) && ((*(byte *)(param_1 + 0x9f4) & 1) != 0)) {
    param_1[0x187] = 4;
  }
  iVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (iVar1 != 0) {
    iVar1 = FUN_00a8c760(1);
    if ((iVar1 != 0) && (iVar1 = FUN_0085da60(1,1), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_00a8c760(0);
    if (((iVar1 != 0) || (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) &&
       (iVar1 = FUN_0085d810(1,0), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(0x1c), iVar1 == 0)) {
      return;
    }
    FUN_0085d8b0(1);
    return;
  }
  FUN_00708e60();
  iVar1 = FUN_008635c0(&stack0xffffffd4);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (iVar1 = FUN_0086efb0(1,1,0), iVar1 != 0)) {
    return;
  }
  iVar1 = FUN_00a8c760(0);
  if (iVar1 == 0) {
    return;
  }
  if ((float)param_1[0x34a] <= 90000.0) {
    return;
  }
  if ((float)param_1[0x34a] <= 810000.0) {
    FUN_00a8caf0(0x100001,0,0,0);
    return;
  }
  FUN_00a8caf0(0x100002,0,0,0);
  return;
}

// 0087F4C0  FUN_0087f4c0  size=2761  [between]
void __fastcall FUN_0087f4c0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  float unaff_ESI;
  float10 fVar5;
  float *pfStack_ac;
  float *pfStack_a8;
  float *pfStack_a4;
  int iStack_94;
  float fStack_90;
  int iStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  int iStack_74;
  int iStack_70;
  float fStack_6c;
  int iStack_68;
  int iStack_64;
  float fStack_60;
  undefined1 auStack_5c [12];
  float afStack_50 [3];
  float fStack_44;
  float fStack_3c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  pfStack_a4 = (float *)0x87f4db;
  (**(code **)(*param_1 + 0x314))();
  pfStack_a4 = (float *)0x12;
  pfStack_a8 = (float *)0x87f4e4;
  iVar4 = FUN_00a8c760();
  if (iVar4 != 0) {
    pfStack_a4 = (float *)0x87f4f4;
    (**(code **)(*param_1 + 0x318))();
  }
  pfStack_a4 = (float *)0x87f4fb;
  FUN_00b884c0();
  switch(param_1[0x187]) {
  case 0:
    pfStack_a4 = (float *)0x87f524;
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      pfStack_a4 = (float *)0x87f531;
      iVar4 = FUN_00a7c8a0();
      pcVar3 = *(code **)(*param_1 + 0x308);
      fVar5 = (float10)fpatan((float10)*(float *)(iVar4 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar4 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar5;
      pfStack_a4 = (float *)0x0;
      pfStack_a8 = (float *)0x40490fdb;
      pfStack_ac = (float *)0x393702d3;
      (*pcVar3)(0x3f800000);
    }
    pfStack_a4 = (float *)0x3f800000;
    pfStack_a8 = (float *)0x0;
    pfStack_ac = (float *)0x8000000;
    FUN_00aa4080(0x8b,0,0,0x3f800000);
    pfStack_a4 = (float *)0x8000000;
    pfStack_a8 = (float *)0x3f800000;
    pfStack_ac = (float *)0x0;
    FUN_00864400(0x8b,0);
    param_1[0x23d] = param_1[0x25];
    pfStack_a4 = (float *)0x1;
    pfStack_a8 = (float *)0x87f5d8;
    FUN_00b86010();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0x3e4ccccd;
    pfStack_a4 = (float *)0x87f5f1;
    FUN_0086f130();
    param_1[0x409] = 0;
    param_1[0x9f4] = 0;
    param_1[0x2dd] = 0;
    pfStack_a4 = (float *)0x87f60c;
    iVar4 = FUN_00b7b200();
    if (iVar4 == 0) {
      fVar2 = 0.0;
    }
    else {
      pfStack_a4 = &fStack_60;
      pfStack_a8 = (float *)0x87f61c;
      FUN_00b7b230();
      pfStack_a4 = (float *)(param_1 + 0x10);
      pfStack_a8 = &fStack_60;
      pfStack_ac = &fStack_88;
      thunk_FUN_00dde510(&fStack_84);
      param_1[0x25] = (int)fStack_88;
      fVar2 = fStack_84 * -1.0;
    }
    param_1[0x24] = (int)fVar2;
    param_1[0x250] = 0;
    param_1[0x409] = 0;
    pfStack_a4 = (float *)0x87f66a;
    iVar4 = FUN_00b7b200();
    if (iVar4 == 0) {
LAB_0087f6a4:
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar3 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        pfStack_a4 = (float *)0x0;
        pfStack_a8 = (float *)0x40490fdb;
        pfStack_ac = (float *)0x3ae4c388;
        (*pcVar3)(0x3f800000);
        param_1[0x250] = 1;
      }
    }
    else {
      pfStack_a4 = (float *)0x87f675;
      iVar4 = FUN_00b86410();
      if (iVar4 == 0) goto LAB_0087f6a4;
      pfStack_a4 = (float *)0x0;
      pfStack_a8 = (float *)0x40490fdb;
      pfStack_ac = (float *)0x393702d3;
      FUN_00b7b270(0x3f800000);
    }
    if (param_1[0x250] == 0) {
      pfStack_a4 = (float *)0x87f706;
      iVar4 = FUN_00b7b200();
      if (iVar4 == 0) {
        param_1[0x24] = 0;
      }
      else {
        pfStack_a4 = &fStack_60;
        pfStack_a8 = (float *)0x87f716;
        FUN_00b7b230();
        fStack_80 = (float)param_1[0x10];
        pfStack_a4 = &fStack_80;
        fStack_78 = (float)param_1[0x12];
        pfStack_a8 = &fStack_60;
        iStack_74 = param_1[0x13];
        pfStack_ac = &fStack_84;
        fStack_7c = (float)param_1[0x11] + 1.0;
        thunk_FUN_00dde510(&fStack_88);
        param_1[0x25] = (int)fStack_84;
        param_1[0x24] = (int)(fStack_88 * -1.0);
      }
    }
    break;
  case 1:
    break;
  case 2:
    pfStack_a4 = (float *)0x3f800000;
    pfStack_a8 = (float *)0x0;
    pfStack_ac = (float *)0x0;
    FUN_00aa4080(0x8c,0,0,0x3f800000);
    pfStack_a4 = (float *)0x8000000;
    pfStack_a8 = (float *)0x3f800000;
    pfStack_ac = (float *)0x0;
    FUN_00864400(0x8c,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x40e00000;
    goto LAB_0087fa52;
  case 3:
LAB_0087fa52:
    pfStack_a4 = (float *)0x87fa5e;
    (**(code **)(*param_1 + 0x318))();
    param_1[0x224] = (int)((float)param_1[0x224] * 0.0);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.0);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.0);
    pfStack_a4 = (float *)0x3f800000;
    pfStack_a8 = (float *)0x3f800000;
    pfStack_ac = (float *)0x87fa9d;
    FUN_00b94790();
    pfStack_a4 = (float *)0x87faa4;
    FUN_008645f0();
    pfVar1 = (float *)(param_1 + 0x2f8);
    *pfVar1 = 0.0;
    param_1[0x2f9] = 0;
    param_1[0x2fa] = 0x3eb33333;
    pfStack_ac = pfVar1;
    pfStack_a8 = pfVar1;
    pfStack_a4 = (float *)(param_1 + 4);
    D3DXVec3TransformNormal();
    param_1[0x14] = (int)(*pfVar1 + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x2f9]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x2fa]);
    param_1[0x17] = (int)((float)param_1[0x2fb] + (float)param_1[0x17]);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (fVar2 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar4 = FUN_00b7b200();
    if (iVar4 != 0) {
      FUN_00b7b230(&fStack_6c);
      D3DXMatrixInverse(auStack_5c,0,param_1 + 4);
      D3DXVec3TransformNormal(&stack0xffffff68,&fStack_78,&iStack_68);
      pfStack_a4 = (float *)((float)pfStack_a4 + fStack_44);
      iStack_94 = param_1[0x10];
      iStack_8c = param_1[0x12];
      fStack_88 = (float)param_1[0x13];
      fStack_90 = (float)param_1[0x11] + 1.0;
      if (2.0 <= fStack_3c + unaff_ESI) {
        thunk_FUN_00dde510(&pfStack_ac,&pfStack_a8,&fStack_84,&iStack_94);
        FUN_00a8db10(param_1 + 0x25,param_1[0x25],pfStack_a8,0x3dcccccd,0x3ae4c388,0x3d8efa35);
        FUN_00a8db10(param_1 + 0x24,param_1[0x24],(float)pfStack_ac * -1.0,0x3dcccccd,0x3ae4c388,
                     0x3d8efa35);
      }
    }
    fVar2 = (float)param_1[0x24];
    if (!NAN(fVar2) && 0.17453292 < fVar2 != (fVar2 == 0.17453292)) {
      param_1[0x24] = 0x3e32b8c2;
    }
    if (-0.9599311 < (float)param_1[0x24]) {
      param_1[0x225] = 0;
      return;
    }
    param_1[0x24] = -0x408a41f5;
    param_1[0x225] = 0;
    return;
  case 4:
    pfStack_a4 = (float *)0x3f800000;
    pfStack_a8 = (float *)0x0;
    pfStack_ac = (float *)0x8000000;
    FUN_00aa4080(0x8d,0,0,0x3f800000);
    pfStack_a4 = (float *)0x8000000;
    pfStack_a8 = (float *)0x3f800000;
    pfStack_ac = (float *)0x0;
    FUN_00864400(0x8d,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0;
    param_1[0x248] = 0x3ee66666;
    goto LAB_0087fcfd;
  case 5:
LAB_0087fcfd:
    pfStack_a4 = (float *)0x3f800000;
    pfStack_a8 = (float *)0x3f800000;
    pfStack_ac = (float *)0x87fd0e;
    FUN_00b94790();
    pfStack_a4 = (float *)0x87fd15;
    FUN_008645f0();
    pfStack_a4 = (float *)0x87fd1c;
    iVar4 = FUN_00a92f90();
    if (*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) == 0) {
LAB_0087fd41:
      pfStack_a4 = (float *)0x0;
      pfStack_a8 = (float *)0x0;
      pfStack_ac = (float *)0x0;
      FUN_00a8caf0(0x100005);
      pfStack_a4 = (float *)0x87fd5f;
      (**(code **)(*param_1 + 0x314))();
      param_1[0x24] = 0;
      return;
    }
    pfStack_a4 = (float *)0x0;
    pfStack_a8 = (float *)0x87fd3d;
    iVar4 = FUN_00e36060();
    if (iVar4 != 0) goto LAB_0087fd41;
    pfStack_a4 = (float *)0x12;
    pfStack_a8 = (float *)0x87fd77;
    iVar4 = FUN_00a8c760();
    if (iVar4 == 0) {
      pfStack_a4 = (float *)((float)param_1[0x244] * 0.06981317);
      pfStack_a8 = (float *)0x3ae4c388;
      pfStack_ac = (float *)0x3e99999a;
      FUN_00a8db10(param_1 + 0x24,param_1[0x24],0);
    }
    if ((param_1[0x9a8] != 0) || (param_1[0x1513] != 0)) {
      param_1[0x248] = 0;
    }
    pfVar1 = (float *)(param_1 + 0x2f8);
    *pfVar1 = 0.0;
    param_1[0x2f9] = 0;
    param_1[0x2fa] = param_1[0x248];
    pfStack_ac = pfVar1;
    pfStack_a8 = pfVar1;
    pfStack_a4 = (float *)(param_1 + 4);
    D3DXVec3TransformNormal();
    param_1[0x14] = (int)(*pfVar1 + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x2f9]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x2fa]);
    param_1[0x17] = (int)((float)param_1[0x2fb] + (float)param_1[0x17]);
    fVar5 = (float10)FUN_00fdc1f0();
    param_1[0x248] = (int)(float)(fVar5 * (float10)(float)param_1[0x248]);
    iVar4 = FUN_00a8c760(5);
    if ((iVar4 != 0) && (iVar4 = FUN_00b7b200(), iVar4 != 0)) {
      FUN_00b7b230(&fStack_6c);
      D3DXMatrixInverse(auStack_5c,0,param_1 + 4);
      D3DXVec3TransformNormal(&stack0xffffff68,&fStack_78,&iStack_68);
      pfStack_a4 = (float *)((float)pfStack_a4 + fStack_44);
      iStack_94 = param_1[0x10];
      iStack_8c = param_1[0x12];
      fStack_88 = (float)param_1[0x13];
      fStack_90 = (float)param_1[0x11] + 1.0;
      if (2.0 <= unaff_ESI + fStack_3c) {
        thunk_FUN_00dde510(&pfStack_ac,&pfStack_a8,&fStack_84,&iStack_94);
        FUN_00a8db10(param_1 + 0x25,param_1[0x25],pfStack_a8,0x3dcccccd,0x3ae4c388,0x3d8efa35);
        FUN_00a8db10(param_1 + 0x24,param_1[0x24],(float)pfStack_ac * -1.0,0x3dcccccd,0x3ae4c388,
                     0x3d8efa35);
        return;
      }
    }
  default:
    goto switchD_0087f50e_default;
  }
  param_1[0x224] = 0;
  pfStack_a4 = (float *)0x12;
  param_1[0x226] = 0;
  param_1[0x225] = 0;
  pfStack_a8 = (float *)0x87f7a0;
  iVar4 = FUN_00a8c760();
  if (iVar4 != 0) {
    param_1[0x225] = (int)((float)param_1[0x225] - 0.005);
  }
  if (param_1[0x250] == 0) {
    pfStack_a4 = (float *)0x87f7c9;
    iVar4 = FUN_00b7b200();
    if (iVar4 != 0) {
      pfStack_a4 = &fStack_60;
      pfStack_a8 = (float *)0x87f7dd;
      FUN_00b7b230();
      pfStack_a4 = (float *)(param_1 + 4);
      pfStack_a8 = (float *)0x0;
      pfStack_ac = afStack_50;
      D3DXMatrixInverse();
      D3DXVec3TransformNormal(&iStack_8c,&fStack_6c,auStack_5c);
      fStack_80 = fStack_80 + fStack_20;
      fStack_7c = fStack_7c + fStack_1c;
      fStack_78 = fStack_18 + fStack_78;
      iStack_70 = param_1[0x10];
      iStack_68 = param_1[0x12];
      iStack_64 = param_1[0x13];
      fStack_6c = (float)param_1[0x11] + 1.0;
      if (2.0 <= fStack_78) {
        pfStack_a4 = (float *)&iStack_70;
        pfStack_a8 = &fStack_60;
        pfStack_ac = &fStack_84;
        thunk_FUN_00dde510(&fStack_88);
        pfStack_a4 = (float *)0x3d8efa35;
        pfStack_a8 = (float *)0x3ae4c388;
        pfStack_ac = (float *)0x3dcccccd;
        FUN_00a8db10(param_1 + 0x25,param_1[0x25],fStack_84);
        pfStack_a4 = (float *)0x3d8efa35;
        pfStack_a8 = (float *)0x3ae4c388;
        pfStack_ac = (float *)0x3dcccccd;
        FUN_00a8db10(param_1 + 0x24,param_1[0x24],fStack_88 * -1.0);
      }
    }
  }
  fVar2 = (float)param_1[0x24];
  if (!NAN(fVar2) && 0.17453292 < fVar2 != (fVar2 == 0.17453292)) {
    param_1[0x24] = 0x3e32b8c2;
  }
  if ((float)param_1[0x24] <= -0.9599311) {
    param_1[0x24] = -0x408a41f5;
  }
  pfVar1 = (float *)(param_1 + 0x2f8);
  param_1[0x225] = 0;
  pfStack_a4 = (float *)(param_1 + 4);
  *pfVar1 = 0.0;
  param_1[0x2f9] = 0;
  param_1[0x2fa] = 0x3eb33333;
  pfStack_ac = pfVar1;
  pfStack_a8 = pfVar1;
  D3DXVec3TransformNormal();
  param_1[0x14] = (int)(*pfVar1 + (float)param_1[0x14]);
  param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x2f9]);
  param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x2fa]);
  param_1[0x17] = (int)((float)param_1[0x2fb] + (float)param_1[0x17]);
  param_1[0x469] = 1;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_008645f0();
  iVar4 = FUN_00a92f90();
  if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) == 0) ||
     (iVar4 = FUN_00e36060(0), iVar4 != 0)) {
    param_1[0x187] = 4;
    return;
  }
switchD_0087f50e_default:
  return;
}

// 0087FFB0  FUN_0087ffb0  size=419  [between]
void __fastcall FUN_0087ffb0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (((DAT_01bea090 & 0x8000) == 0) &&
     ((((iVar1 = FUN_00a8c760(0x17), iVar1 != 0 || (iVar1 = FUN_00a8c760(1), iVar1 != 0)) ||
       (0.0 < (float)param_1[0xd07])) && (iVar1 = FUN_008649d0(), iVar1 != 0)))) {
    FUN_0085e000(0);
    return;
  }
  iVar1 = FUN_0085d070();
  if (iVar1 == 0) {
    iVar1 = FUN_008635c0(&stack0xffffffd4);
    if (iVar1 != 0) {
      param_1[0x9a0] = 1;
      return;
    }
    uVar4 = 0;
    uVar2 = FUN_00a8c760(0x11);
    uVar3 = FUN_00a8c760(0x1c);
    iVar1 = FUN_0086efb0(uVar3,uVar2,uVar4);
    if (((iVar1 == 0) &&
        ((iVar1 = FUN_00a8c760(0), iVar1 == 0 ||
         (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)))) &&
       ((iVar1 = FUN_00a8c760(0), iVar1 != 0 && (90000.0 < (float)param_1[0x34a])))) {
      if ((((DAT_01bea090 & 0x1000000) == 0) && ((DAT_01bea090 & 0x10) == 0)) &&
         (810000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100001,0,0,0);
    }
  }
  return;
}

// 00880160  FUN_00880160  size=501  [between]
void __fastcall FUN_00880160(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00b7d8b0();
  pcVar1 = *(code **)(*param_1 + 800);
  param_1[0x427] = 1;
  (*pcVar1)(0x3c888889);
  if (((DAT_01bea060 & 0x8000000) != 0) || ((DAT_01bea070 & 0x200000) != 0)) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if ((0xf < *(int *)(param_1[0x1d9] + 0x124)) && (param_1[0x228] == 0)) {
    FUN_00a8caf0(0x100005,0,0,0);
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0x34c))();
  if (iVar2 != 0) {
    FUN_00a8caf0(0x10002e,0,0,0);
    return;
  }
  iVar2 = FUN_0085d070();
  if (iVar2 == 0) {
    iVar2 = FUN_00864ad0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    FUN_00708e60();
    iVar2 = FUN_008635c0(&stack0xffffffd4);
    if (iVar2 == 0) {
      FUN_00708e60();
      iVar2 = FUN_008635c0(&stack0xffffffd4);
      if (iVar2 == 0) {
        uVar3 = FUN_00a8c760(0x11);
        uVar4 = FUN_00a8c760(0x1c);
        iVar2 = FUN_0086efb0(uVar4,uVar3,iVar2);
        if (iVar2 == 0) {
          FUN_00a8c760(0);
          iVar2 = FUN_00a8c760(0);
          if ((iVar2 != 0) && (90000.0 < (float)param_1[0x34a])) {
            if (((DAT_01bea090._3_1_ & 1) == 0) &&
               ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
              FUN_00a8caf0(0x100002,0,0,0);
              return;
            }
            FUN_00a8caf0(0x100001,0,0,0);
          }
        }
        else {
          iVar2 = FUN_00a8c760(1);
          if (iVar2 == 0) {
            param_1[0x39d] = 0;
            return;
          }
        }
      }
    }
  }
  return;
}

// 00880360  FUN_00880360  size=542  [between]
void __fastcall FUN_00880360(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x39c))();
    iVar2 = FUN_00b7d0b0();
    if (iVar2 != 0) {
      FUN_00b7d0b0();
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 != (int *)0x0) {
        puVar5 = &DAT_01be9d80;
        (**(code **)(*piVar3 + 4))(&DAT_01be9d80);
        iVar2 = FUN_00dd6d80(puVar5);
        if (iVar2 != 0) {
          FUN_00a94bc0(1,0);
        }
      }
    }
    param_1[0x988] = 0;
    iVar2 = 0x78;
    if (param_1[0x2dd] != 0) {
      iVar2 = 0x77;
    }
    FUN_00aa4080(iVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (iVar2 == 0x78) {
      puVar4 = &DAT_01649698;
    }
    else {
      puVar4 = &DAT_01641c14;
    }
    FUN_0085dd90(puVar4,0,0x3e2aaaab,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    FUN_0086f130();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  iVar2 = FUN_00a8c760(5);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00b7b200();
    if (((piVar3 == (int *)0x0) || (iVar2 = FUN_00b86410(), iVar2 == 0)) ||
       (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar1 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar1)(0x3ee66667,0x3ae4c388,0x3ed67750,0);
      }
    }
    else {
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
    }
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) &&
     (iVar2 = FUN_00e36060(0), iVar2 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00880580  FUN_00880580  size=410  [between]
void __fastcall FUN_00880580(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  if ((((DAT_01bea090 & 0x8000) == 0) &&
      (((iVar1 = FUN_00a8c760(0x17), iVar1 != 0 || (iVar1 = FUN_00a8c760(1), iVar1 != 0)) ||
       (0.0 < (float)param_1[0xd07])))) && (iVar1 = FUN_008649d0(), iVar1 != 0)) {
    FUN_0085e000(0);
    return;
  }
  iVar1 = FUN_0085d070();
  if ((iVar1 == 0) && (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)) {
    uVar4 = 1;
    uVar2 = FUN_00a8c760(0x11);
    uVar3 = FUN_00a8c760(0x1c);
    iVar1 = FUN_0086efb0(uVar3,uVar2,uVar4);
    if (((iVar1 == 0) &&
        ((iVar1 = FUN_00a8c760(0), iVar1 == 0 ||
         (iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0)))) &&
       ((iVar1 = FUN_00a8c760(0), iVar1 != 0 && (90000.0 < (float)param_1[0x34a])))) {
      if ((((DAT_01bea090 & 0x1000000) == 0) && ((DAT_01bea090 & 0x10) == 0)) &&
         (810000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100001,0,0,0);
    }
  }
  return;
}

// 00880720  FUN_00880720  size=571  [between]
void __fastcall FUN_00880720(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  (**(code **)(*param_1 + 0x314))();
  FUN_00b884c0();
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  param_1[0x1518] = 1;
  if (param_1[0x187] == 0) {
    param_1[0x250] = 0;
    FUN_00aa4080(0x7a,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x7a,0,0x3d888889,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x25] = param_1[0x97f];
    param_1[0x23d] = param_1[0x97f];
    FUN_00b86010(0);
    FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    FUN_0086f130();
    param_1[0x988] = 0;
    param_1[0x9b5] = 0;
    FUN_00db3e80(0x41a00000,0,&DAT_01bea1d0);
    if (param_1[0x186] == 0x100067) {
      FUN_00a92f90();
      Animation::Motion::Unit::setCameraNo(0,1);
    }
    FUN_00b7aa80();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  iVar1 = FUN_00a8c760(5);
  if (iVar1 != 0) {
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00b7d0b0();
  if (iVar1 != 0) {
    FUN_00b7d0b0();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9d80;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d80);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00a95ee0(0,param_1);
      }
    }
  }
  iVar1 = FUN_00a92f90();
  if ((*(int *)(iVar1 + 0xd0) + *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0xb8) != 0) &&
     (iVar1 = FUN_00e36060(0), iVar1 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00880960  FUN_00880960  size=579  [between]
void __fastcall FUN_00880960(int *param_1)

{
  int iVar1;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = FUN_0085d070();
  if (iVar1 != 0) {
    return;
  }
  if (param_1[0x187] == 3) {
    iVar1 = (**(code **)(*param_1 + 0x34c))();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x314))();
      param_1[0x224] = (int)((float)param_1[0x224] * 0.0);
      param_1[0x225] = (int)((float)param_1[0x225] * 0.0);
      param_1[0x226] = (int)((float)param_1[0x226] * 0.0);
      param_1[0x227] = (int)((float)param_1[0x227] * 0.0);
      param_1[0x408] = (int)((float)param_1[0x408] * 0.0);
      param_1[0x409] = (int)((float)param_1[0x409] * 0.0);
      param_1[0x40a] = (int)((float)param_1[0x40a] * 0.0);
      param_1[0x40b] = (int)((float)param_1[0x40b] * 0.0);
      param_1[0x24] = 0;
      FUN_00a8caf0(0x100005,0,0,0);
      return;
    }
    iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 800))(0x3c888889);
  }
  if (((DAT_01bea090 & 0x8000) == 0) &&
     ((((iVar1 = FUN_00a8c760(0x17), iVar1 != 0 || (iVar1 = FUN_00a8c760(1), iVar1 != 0)) ||
       (0.0 < (float)param_1[0xd07])) && (iVar1 = FUN_008649d0(), iVar1 != 0)))) {
    param_1[0x24] = 0;
    FUN_0085e000(0);
    return;
  }
  if ((param_1[0x187] == 5) && (iVar1 = FUN_008635c0(&stack0xffffffd0), iVar1 == 0)) {
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) && (iVar1 = FUN_0086efb0(1,1,0), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) && (90000.0 < (float)param_1[0x34a])) {
      if (810000.0 < (float)param_1[0x34a]) {
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100001,0,0,0);
    }
  }
  return;
}

// 00880BB0  FUN_00880bb0  size=2039  [between]
void __fastcall FUN_00880bb0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*param_1 + 0x314))();
  iVar4 = FUN_00a8c760(0x12);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  FUN_00b884c0();
  switch(param_1[0x187]) {
  case 0:
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      pcVar3 = *(code **)(*param_1 + 0x308);
      fVar6 = (float10)fpatan((float10)*(float *)(iVar4 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar4 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar6;
      (*pcVar3)(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    FUN_00aa4080(0x92,0,0x3e2aaaab,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x92,0,0x3e2aaaab,0x3f800000,0x8000000);
    param_1[0x23d] = param_1[0x25];
    FUN_00b86010(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0x3e4ccccd;
    FUN_0086f130();
    param_1[0x409] = 0;
    param_1[0x988] = 1;
    param_1[0x224] = 0;
    param_1[0x9f4] = 0;
    param_1[0x226] = 0;
    param_1[0x2dd] = 0;
    param_1[0x225] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x93,0,0,0x3f800000,0,0,0x3f800000);
    FUN_00864400(0x93,0,0,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41c80000;
    piVar5 = param_1 + 0x2f8;
    *piVar5 = 0;
    param_1[0x2f9] = -0x42333333;
    param_1[0x2fa] = 0x3f000000;
    D3DXVec3TransformNormal(piVar5,piVar5,param_1 + 4);
    goto LAB_00880ece;
  case 3:
LAB_00880ece:
    (**(code **)(*param_1 + 0x318))();
    param_1[0x224] = (int)((float)param_1[0x224] * 0.0);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.0);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.0);
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    iVar4 = FUN_00a8c760(5);
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_00b7b200();
      if (((piVar5 == (int *)0x0) || (iVar4 = FUN_00b86410(), iVar4 == 0)) ||
         (iVar4 = (**(code **)(*piVar5 + 0x228))(), iVar4 == 0)) {
        piVar5 = param_1 + 0x2f8;
        *piVar5 = 0;
        param_1[0x2f9] = -0x42333333;
        param_1[0x2fa] = 0x3f000000;
        D3DXVec3TransformNormal(piVar5,piVar5,param_1 + 4);
      }
      else {
        FUN_00b7b230(&fStack_20);
        FUN_00a8e880(&fStack_20);
        fStack_1c = fStack_1c - 0.5;
        pfVar1 = (float *)(param_1 + 0x2f8);
        *pfVar1 = fStack_20 - (float)param_1[0x10];
        param_1[0x2f9] = (int)(fStack_1c - (float)param_1[0x11]);
        param_1[0x2fa] = (int)(fStack_18 - (float)param_1[0x12]);
        param_1[0x2fb] = (int)(fStack_14 - (float)param_1[0x13]);
        if ((fStack_20 - (float)param_1[0x10]) * (fStack_20 - (float)param_1[0x10]) +
            (fStack_1c - (float)param_1[0x11]) * (fStack_1c - (float)param_1[0x11]) +
            (fStack_18 - (float)param_1[0x12]) * (fStack_18 - (float)param_1[0x12]) < 9.0) {
          param_1[0x187] = 4;
        }
        fVar2 = (float)param_1[0x2fa] * (float)param_1[0x2fa] +
                *pfVar1 * *pfVar1 + (float)param_1[0x2f9] * (float)param_1[0x2f9];
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(pfVar1,pfVar1);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          *pfVar1 = 0.0;
          param_1[0x2f9] = 0x3f800000;
          param_1[0x2fa] = 0;
        }
        *pfVar1 = *pfVar1 * 0.7;
        param_1[0x2f9] = (int)((float)param_1[0x2f9] * 0.7);
        param_1[0x2fa] = (int)((float)param_1[0x2fa] * 0.7);
        param_1[0x2fb] = (int)((float)param_1[0x2fb] * 0.7);
      }
    }
    fVar2 = (float)param_1[0x244];
    param_1[0x14] = (int)((float)param_1[0x14] + fVar2 * (float)param_1[0x2f8]);
    param_1[0x15] = (int)((float)param_1[0x2f9] * fVar2 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x2fa] * fVar2 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x2fb] * fVar2 + (float)param_1[0x17]);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (0.0 < (float)param_1[0x2f9]) {
      param_1[0x248] =
           (int)((fVar2 - (float)param_1[0x244]) - ((float)param_1[0x244] + (float)param_1[0x244]));
    }
    if ((float)param_1[0x248] < 0.0) {
      param_1[0x187] = 4;
    }
    iVar4 = FUN_00a8c760(5);
    if (iVar4 == 0) {
      return;
    }
    piVar5 = (int *)FUN_00b7b200();
    if (((piVar5 != (int *)0x0) && (iVar4 = FUN_00b86410(), iVar4 != 0)) &&
       (iVar4 = (**(code **)(*piVar5 + 0x228))(), iVar4 != 0)) {
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
      return;
    }
    if ((float)param_1[0x34a] <= 90000.0) {
      return;
    }
    pcVar3 = *(code **)(*param_1 + 0x308);
    param_1[0x23d] = param_1[0x34c];
    (*pcVar3)(0x3ee66667,0x3ae4c388,0x3ed67750,0);
    return;
  case 4:
    FUN_00aa4080(0x94,0,0,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00864400(0x94,0,0,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24] = 0;
    goto LAB_0088128e;
  case 5:
LAB_0088128e:
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_008645f0();
    iVar4 = FUN_00a8c760(5);
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_00b7b200();
      if (((piVar5 == (int *)0x0) || (iVar4 = FUN_00b86410(), iVar4 == 0)) ||
         (iVar4 = (**(code **)(*piVar5 + 0x228))(), iVar4 == 0)) {
        if (90000.0 < (float)param_1[0x34a]) {
          pcVar3 = *(code **)(*param_1 + 0x308);
          param_1[0x23d] = param_1[0x34c];
          (*pcVar3)(0x3ee66667,0x3ae4c388,0x3ed67750,0);
        }
      }
      else {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
      }
    }
    iVar4 = FUN_00a92f90();
    if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) == 0) ||
       (iVar4 = FUN_00e36060(0), iVar4 != 0)) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
  default:
    goto switchD_00880c00_default;
  }
  iVar4 = FUN_00a8c760(5);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00b7b200();
    if (((piVar5 == (int *)0x0) || (iVar4 = FUN_00b86410(), iVar4 == 0)) ||
       (iVar4 = (**(code **)(*piVar5 + 0x228))(), iVar4 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar3 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar3)(0x3ee66667,0x3ae4c388,0x3f567750,0);
      }
    }
    else {
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3f0efa35,0);
    }
  }
  param_1[0x469] = 1;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_008645f0();
  iVar4 = FUN_00a92f90();
  if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) == 0) ||
     (iVar4 = FUN_00e36060(0), iVar4 != 0)) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00880c00_default:
  return;
}

// 008815B0  FUN_008815b0  size=926  [between]
void __fastcall FUN_008815b0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_0086f130();
    FUN_00a94bc0(8,0x3e088889);
    FUN_00a9f560("GREKAMAE",0x3e088889,0,0);
    iVar1 = FUN_00b7d110();
    FUN_00a94a40(iVar1 + 0x494,0xffffffff,0,1,0,0,1,0x3e088889,0);
    iVar1 = FUN_00b7d110();
    FUN_00a94a40(iVar1 + 0x494,0xffffffff,0,0,0,0,2,0x3e088889,0);
    iVar1 = FUN_00b7d110();
    FUN_00a94a40(iVar1 + 0x494,0xffffffff,0,0xffffffff,0,0,3,0x3e088889,0);
    FUN_00a947e0(0,(float)param_1[0x9e3] * 0.95492965,0,0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00a947e0(0,(float)param_1[0x9e3] * 0.95492965,0,0);
  FUN_00b94790(0x3f800000,0x3f800000);
  switchD_0080dbae::default();
  uStack_20 = 0x3e4ccccd;
  puVar4 = &uStack_20;
  uStack_1c = 0x3fe00000;
  uStack_18 = 0x3e99999a;
  puVar5 = puVar4;
  D3DXVec3TransformNormal(puVar4,puVar4,param_1 + 4);
  iVar1 = FUN_00a12210(0xf00);
  uStack_20 = *(undefined4 *)(iVar1 + 0x4c);
  fVar2 = (float10)FUN_00ddba30((float)param_1[0x9e3] - 0.34906584);
  FUN_00b8f5b0(&stack0xffffffd4,(float)fVar2,param_1[0xcff]);
  fVar6 = (float)param_1[0xcfd];
  fVar7 = (float)param_1[0xcfe] * -1.0;
  fVar2 = (float10)FUN_00da7500(puVar4,puVar5,fVar6,fVar7);
  fVar6 = (float)(fVar2 * (float10)fVar6);
  fVar2 = (float10)FUN_00da7570(puVar4,puVar5,fVar6);
  fVar2 = fVar2 * (float10)fVar7;
  fVar7 = (float)fVar2;
  fVar3 = (float10)200.0;
  if (fVar3 < (float10)(float)param_1[0x344] != (fVar3 == (float10)(float)param_1[0x344])) {
    fVar2 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] - fVar3) *
                                          (float10)0.00125 * fVar2 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar2;
    fVar2 = (float10)fVar7;
  }
  if ((float)param_1[0x344] <= -200.0) {
    fVar2 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] + (float10)200.0) *
                                          (float10)0.00125 * fVar2 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar2;
  }
  fVar7 = (float)param_1[0x345];
  if (!NAN(fVar7) && 200.0 < fVar7 != (fVar7 == 200.0)) {
    fVar2 = (float10)FUN_00ddba30(((float)param_1[0x345] - 200.0) * 0.00125 * fVar6 +
                                  (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar2;
  }
  if ((float)param_1[0x345] <= -200.0) {
    fVar2 = (float10)FUN_00ddba30(((float)param_1[0x345] + 200.0) * 0.00125 * fVar6 +
                                  (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar2;
  }
  if ((float)param_1[0x9e3] < -0.87266463) {
    param_1[0x9e3] = -0x40a0990d;
  }
  if ((float)param_1[0x9e3] <= 1.0471976) {
    return;
  }
  param_1[0x9e3] = 0x3f860a92;
  return;
}

// 00881950  FUN_00881950  size=1520  [between]
void __fastcall FUN_00881950(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_0086f130();
    FUN_00a9f4c0("GUNKAMAE",0x3e088889,0x2000,0);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,1,0,1,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0,0,2,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0xffffffff,0,3,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,1,1,4,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0,1,5,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0xffffffff,1,6,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,1,0xffffffff,7,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0,0xffffffff,8,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0xffffffff,0xffffffff,9,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,1,1,0,0xd,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,1,0,0,0xe,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,1,0xffffffff,0,0xf,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0xffffffff,1,0,10,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0xffffffff,0,0,0xb,0x3e088889,0x2000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0xffffffff,0xffffffff,0,0xc,0x3e088889,0x2000);
    FUN_00a947e0(0,(float)param_1[0x342] * 0.001,(float)param_1[0x9e3] * 0.95492965,
                 (float)param_1[0x343] * -0.001);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00a947e0(0,(float)param_1[0x342] * 0.001,(float)param_1[0x9e3] * 0.95492965,
               (float)param_1[0x343] * -0.001);
  FUN_00b94790(0x3f800000,0x3f800000);
  uStack_20 = 0x3e4ccccd;
  puVar5 = &uStack_20;
  uStack_1c = 0x3fe00000;
  uStack_18 = 0x3e99999a;
  puVar6 = puVar5;
  D3DXVec3TransformNormal(puVar5,puVar5,param_1 + 4);
  iVar2 = FUN_00a12210(0xf00);
  uStack_20 = *(undefined4 *)(iVar2 + 0x4c);
  fVar3 = (float10)FUN_00ddba30((float)param_1[0x9e3] - 0.34906584);
  FUN_00b8f5b0(&stack0xffffffd4,(float)fVar3,param_1[0xcff]);
  fVar7 = (float)param_1[0xcfd];
  fVar1 = (float)param_1[0xcfe];
  fVar3 = (float10)FUN_00da7500();
  fVar7 = (float)(fVar3 * (float10)fVar7);
  fVar3 = (float10)FUN_00da7570(puVar5,puVar6,fVar7);
  fVar3 = fVar3 * (float10)(fVar1 * -1.0);
  fVar4 = (float10)200.0;
  if (fVar4 < (float10)(float)param_1[0x344] != (fVar4 == (float10)(float)param_1[0x344])) {
    fVar4 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] - fVar4) *
                                          (float10)0.00125 * fVar3 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar4;
    fVar3 = (float10)(float)fVar3;
  }
  if ((float)param_1[0x344] <= -200.0) {
    fVar3 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] + (float10)200.0) *
                                          (float10)0.00125 * fVar3 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar3;
  }
  fVar1 = (float)param_1[0x345];
  if (!NAN(fVar1) && 200.0 < fVar1 != (fVar1 == 200.0)) {
    fVar3 = (float10)FUN_00ddba30(((float)param_1[0x345] - 200.0) * 0.00125 * fVar7 +
                                  (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar3;
  }
  if ((float)param_1[0x345] <= -200.0) {
    fVar3 = (float10)FUN_00ddba30(((float)param_1[0x345] + 200.0) * 0.00125 * fVar7 +
                                  (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar3;
  }
  if ((float)param_1[0x9e3] < -0.87266463) {
    param_1[0x9e3] = -0x40a0990d;
  }
  if ((float)param_1[0x9e3] <= 1.0471976) {
    return;
  }
  param_1[0x9e3] = 0x3f860a92;
  return;
}

// 00881F40  FUN_00881f40  size=511  [between]
void __fastcall FUN_00881f40(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00a9f560("GREKAMAE",0x3d088889,0,0);
    iVar1 = FUN_00b7d110();
    FUN_00a94a40(iVar1 + 0x494,0xffffffff,0,1,0,0,0x10,0x3d088889,0x8000000);
    iVar1 = FUN_00b7d110();
    FUN_00a94a40(iVar1 + 0x494,0xffffffff,0,0,0,0,0x11,0x3d088889,0x8000000);
    iVar1 = FUN_00b7d110();
    FUN_00a94a40(iVar1 + 0x494,0xffffffff,0,0xffffffff,0,0,0x12,0x3d088889,0x8000000);
    FUN_00a947e0(0,(float)param_1[0x9e3] * 0.95492965,0,0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00a947e0(0,(float)param_1[0x9e3] * 0.95492965,0,0);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0xb);
  if (iVar1 != 0) {
    switchD_0080dbae::default();
    if (param_1[0x506] == 0) {
      fVar2 = (float10)FUN_00ddba30((float)param_1[0x9e3] - 0.34906584);
      fVar3 = (float)param_1[0xcff];
    }
    else {
      fVar3 = (float)param_1[0xcff] * 0.6;
      fVar2 = (float10)(float)param_1[0x9e3] * (float10)0.8;
    }
    FUN_0086da80((float)fVar2,fVar3);
  }
  iVar1 = FUN_00a92f90();
  if ((*(int *)(iVar1 + 0xd0) + *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0xb8) != 0) &&
     (iVar1 = FUN_00e36060(0), iVar1 == 0)) {
    return;
  }
  FUN_00a8caf0(0x100037,0,0,0);
  iVar1 = FUN_00b7f940();
  if (iVar1 == 0) {
    FUN_00a8caf0(0x10003b,0,0,0);
  }
  return;
}

// 00882140  FUN_00882140  size=711  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00882140(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x39c))();
    iVar3 = FUN_00b7d0b0();
    if (iVar3 != 0) {
      FUN_00b7d0b0();
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 != (int *)0x0) {
        puVar6 = &DAT_01be9d80;
        (**(code **)(*piVar4 + 4))(&DAT_01be9d80);
        iVar3 = FUN_00dd6d80(puVar6);
        if (iVar3 != 0) {
          FUN_00a94bc0(1,0);
        }
      }
    }
    uVar5 = 0x13;
    if (param_1[0x2dd] != 0) {
      uVar5 = 0x14;
    }
    iVar3 = FUN_00b7d110();
    FUN_00a9f3c0(iVar3 + 0x494,uVar5,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x505] = 0;
    param_1[0x24a] = param_1[0x34d];
    param_1[0x504] = 1;
    param_1[0x506] = 0;
    param_1[0x9e3] = 0;
    param_1[0x502] = 0x701;
    FUN_00b86010(1);
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if (((param_1[0x33e] & param_1[0x38f]) == 0) || (param_1[0x250] != 0)) {
    param_1[0x505] = 0;
  }
  else {
    fVar1 = (float)param_1[0x505];
    param_1[0x505] = (int)((float)param_1[0x244] + fVar1);
    if (15.0 <= (float)param_1[0x244] + fVar1) {
      param_1[0x504] = 0;
      FUN_00a8caf0(0x100036,0,0,0);
      param_1[0x9e3] = _DAT_01bea530;
    }
  }
  iVar3 = FUN_00a8c760(5);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00b7b200();
    if ((piVar4 == (int *)0x0) || (iVar3 = (**(code **)(*piVar4 + 0x228))(), iVar3 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar2 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar2)(0x3dcccccd,0x3ae4c388,0x3e8efa35,0);
      }
    }
    else {
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
    }
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a8c760(0xb);
  if (iVar3 != 0) {
    switchD_0080dbae::default();
    FUN_0086da80(param_1[0x9e3],param_1[0xcff]);
    FUN_00b7f9c0();
    param_1[0x250] = 1;
  }
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
     (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00882410  FUN_00882410  size=245  [between]
void __fastcall FUN_00882410(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    uVar2 = 0x15;
    if (param_1[0x2dd] != 0) {
      uVar2 = 0x16;
    }
    iVar1 = FUN_00b7d110();
    FUN_00a9f3c0(iVar1 + 0x494,uVar2,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a92f90();
  if ((*(int *)(iVar1 + 0xd0) + *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0xb8) != 0) &&
     (iVar1 = FUN_00e36060(0), iVar1 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00882510  FUN_00882510  size=722  [between]
void __fastcall FUN_00882510(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  float fStack_38;
  undefined1 auStack_34 [4];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_20 [28];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x4fe] = 0;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00a94bc0(8,0x3dcccccd);
    FUN_00a9f560("GUNKAMAE",0x3dcccccd,0x8000000,0);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,1,0,0,0x19,0x3dcccccd,0x8000000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0,0,0,0,0x3dcccccd,0x8000000);
    iVar2 = FUN_00b7d110();
    FUN_00a94a40(iVar2 + 0x494,0xffffffff,0,0xffffffff,0,0,0x18,0x3dcccccd,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x250] = 0;
    FUN_00b7f610();
    param_1[0x502] = 0x701;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00a947e0(0,(float)param_1[0x9e3] * 1.2732395,0,0);
  iVar2 = FUN_00b7b310();
  if ((iVar2 == 0) || (iVar2 = FUN_00a81330(), iVar2 == 0)) {
    if (param_1[0x504] != 0) goto LAB_0088274c;
  }
  else {
    FUN_00c15010(auStack_20);
    FUN_00a8e880(auStack_20);
    param_1[0x249] = param_1[0x23d];
    fStack_30 = 0.0;
    fStack_2c = 1.5;
    fStack_28 = -0.5;
    D3DXVec3TransformNormal(&fStack_30,&fStack_30,param_1 + 4);
    fStack_30 = (float)param_1[0x10] + fStack_30;
    fStack_2c = (float)param_1[0x11] + fStack_2c;
    fStack_28 = (float)param_1[0x12] + fStack_28;
    thunk_FUN_00dde510(&fStack_38,auStack_34,auStack_20,&fStack_30);
    param_1[0x9e3] = (int)(fStack_38 * -1.0);
  }
  fVar3 = (float10)FUN_00ddba30((float)param_1[0x249] - (float)param_1[0x25]);
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 * (float10)0.3 + (float10)(float)param_1[0x25]));
  param_1[0x25] = (int)(float)fVar3;
LAB_0088274c:
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0) ||
     (iVar2 = FUN_00e36060(0), iVar2 != 0)) {
    FUN_00a8caf0(0x10003d,0,0,0);
    if ((param_1[0x33e] & param_1[0x38f]) != 0) {
      param_1[0x504] = 0;
    }
    if (param_1[0x504] == 1) {
      FUN_00a8caf0(0x10003f,0,0,0);
    }
  }
  return;
}

// 008827F0  FUN_008827f0  size=737  [between]
void __fastcall FUN_008827f0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  param_1[0x4fe] = 0;
  (*pcVar2)();
  if (param_1[0x187] == 0) {
    FUN_00a94bc0(8,0x3e088889);
    FUN_00a9f560("GUNKAMAE",0x3e088889,0x8000000,0);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,1,0,0,6,0x3e088889,0);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0,0,0,1,0x3e088889,0);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0xffffffff,0,0,5,0x3e088889,0);
    FUN_00a947e0(0,param_1[0x9e3],0,0);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    FUN_00bdb1d0();
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00a947e0(0,(float)param_1[0x9e3] * 1.2732395,0,0);
  FUN_00b94790(0x3f800000,0x3f800000);
  fVar4 = (float10)FUN_00da7500();
  fVar5 = (float10)FUN_00da7570();
  fVar5 = fVar5 * (float10)-0.02443461;
  fVar6 = (float10)200.0;
  if (fVar6 < (float10)(float)param_1[0x344] != (fVar6 == (float10)(float)param_1[0x344])) {
    fVar6 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] - fVar6) *
                                          (float10)0.00125 * fVar5 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar6;
    fVar5 = (float10)(float)fVar5;
  }
  if ((float)param_1[0x344] <= -200.0) {
    fVar5 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] + (float10)200.0) *
                                          (float10)0.00125 * fVar5 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar5;
  }
  fVar1 = (float)param_1[0x345];
  if (!NAN(fVar1) && 200.0 < fVar1 != (fVar1 == 200.0)) {
    fVar5 = (float10)FUN_00ddba30(((float)param_1[0x345] - 200.0) * 0.00125 *
                                  (float)(fVar4 * (float10)0.02443461) + (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar5;
  }
  if ((float)param_1[0x345] <= -200.0) {
    fVar4 = (float10)FUN_00ddba30(((float)param_1[0x345] + 200.0) * 0.00125 *
                                  (float)(fVar4 * (float10)0.02443461) + (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar4;
  }
  if ((float)param_1[0x9e3] < -0.7853982) {
    param_1[0x9e3] = -0x40b6f025;
  }
  if ((float)param_1[0x9e3] <= 0.7853982) {
    FUN_00bdb1d0();
    return;
  }
  param_1[0x9e3] = 0x3f490fdb;
  FUN_00bdb1d0();
  return;
}

// 00882AE0  FUN_00882ae0  size=1378  [between]
void __fastcall FUN_00882ae0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  param_1[0x4fe] = 0;
  (*pcVar2)();
  if (param_1[0x187] == 0) {
    FUN_00a94bc0(8,0x3e4ccccd);
    FUN_00a9f4c0("GUNKAMAE",0x3e4ccccd,0x2000,0);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0,1,0,6,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0,0,0,1,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0,0xffffffff,0,5,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0,1,1,10,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0,0,1,8,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0,0xffffffff,1,9,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0,1,0xffffffff,0xf,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0,0,0xffffffff,0xd,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0,0xffffffff,0xffffffff,0xe,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,1,1,0,0x15,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,1,0,0,0x13,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,1,0xffffffff,0,0x14,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0xffffffff,1,0,0x12,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0xffffffff,0,0,0x10,0x3e4ccccd,0x2000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0xffffffff,0xffffffff,0,0x11,0x3e4ccccd,0x2000);
    FUN_00a947e0(0,(float)param_1[0x342] * 0.001,(float)param_1[0x9e3] * 1.2732395,
                 (float)param_1[0x343] * 0.001);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x250] = 0;
    param_1[0x2f8] = 0;
    param_1[0x2f9] = 0;
    param_1[0x2fa] = 0;
  }
  else if (param_1[0x187] != 1) {
    FUN_00bdb1d0();
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00a947e0(0,(float)param_1[0x342] * 0.001,(float)param_1[0x9e3] * 1.2732395,
               (float)param_1[0x343] * -0.001);
  FUN_00b94790(0x3f800000,0x3f800000);
  fVar4 = (float10)FUN_00da7500();
  fVar5 = (float10)FUN_00da7570();
  fVar5 = fVar5 * (float10)-0.02443461;
  fVar6 = (float10)200.0;
  if (fVar6 < (float10)(float)param_1[0x344] != (fVar6 == (float10)(float)param_1[0x344])) {
    fVar6 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] - fVar6) *
                                          (float10)0.00125 * fVar5 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar6;
    fVar5 = (float10)(float)fVar5;
  }
  if ((float)param_1[0x344] <= -200.0) {
    fVar5 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] + (float10)200.0) *
                                          (float10)0.00125 * fVar5 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar5;
  }
  fVar1 = (float)param_1[0x345];
  if (!NAN(fVar1) && 200.0 < fVar1 != (fVar1 == 200.0)) {
    fVar5 = (float10)FUN_00ddba30(((float)param_1[0x345] - 200.0) * 0.00125 *
                                  (float)(fVar4 * (float10)0.02443461) + (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar5;
  }
  if ((float)param_1[0x345] <= -200.0) {
    fVar4 = (float10)FUN_00ddba30(((float)param_1[0x345] + 200.0) * 0.00125 *
                                  (float)(fVar4 * (float10)0.02443461) + (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar4;
  }
  if ((float)param_1[0x9e3] < -0.7853982) {
    param_1[0x9e3] = -0x40b6f025;
  }
  if ((float)param_1[0x9e3] <= 0.7853982) {
    FUN_00bdb1d0();
    return;
  }
  param_1[0x9e3] = 0x3f490fdb;
  FUN_00bdb1d0();
  return;
}

// 00883050  FUN_00883050  size=974  [between]
void __fastcall FUN_00883050(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  param_1[0x4fe] = 0;
  (*pcVar2)();
  if (param_1[0x187] == 0) {
    iVar3 = FUN_00b7d110();
    FUN_00a9f3c0(iVar3 + 0x494,3,8,0x3d088889,0x3f800000,0x8000010,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086d5e0();
    FUN_00a9f560("GUNKAMAE",0x3e088889,0x8000000,0);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,1,0,0,6,0x3e088889,0);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0,0,0,1,0x3e088889,0);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0xffffffff,0,0,5,0x3e088889,0);
  }
  else if (param_1[0x187] != 1) goto LAB_0088307e;
  if ((param_1[0x33e] & param_1[0x38f]) == 0) {
    param_1[0x505] = 0;
  }
  else {
    fVar1 = (float)param_1[0x505];
    param_1[0x505] = (int)((float)param_1[0x244] + fVar1);
    if (15.0 <= (float)param_1[0x244] + fVar1) {
      param_1[0x504] = 0;
    }
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00a947e0(0,(float)param_1[0x9e3] * 1.2732395,0,0);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(8);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x100041,0,0,0);
    iVar3 = FUN_00b7f940();
    if (iVar3 == 1) {
      FUN_00a8caf0(0x10003d,0,0,0);
    }
    iVar3 = FUN_00b7f940();
    if ((iVar3 == 0) && (iVar3 = FUN_00b7f980(), iVar3 == 1)) {
      FUN_00a8caf0(0x100042,0,0,0);
    }
    uVar4 = DAT_01bea010 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    if (uVar4 == 1) {
      FUN_00a8caf0(0x100042,0,0,0);
    }
    FUN_00a94bc0(8,0x3e088889);
    FUN_00bdb1d0();
    return;
  }
  fVar5 = (float10)FUN_00da7500();
  fVar6 = (float10)FUN_00da7570();
  fVar6 = fVar6 * (float10)-0.02443461;
  fVar7 = (float10)200.0;
  if (fVar7 < (float10)(float)param_1[0x344] != (fVar7 == (float10)(float)param_1[0x344])) {
    fVar7 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] - fVar7) *
                                          (float10)0.00125 * fVar6 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar7;
    fVar6 = (float10)(float)fVar6;
  }
  if ((float)param_1[0x344] <= -200.0) {
    fVar6 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] + (float10)200.0) *
                                          (float10)0.00125 * fVar6 + (float10)(float)param_1[0x25]))
    ;
    param_1[0x25] = (int)(float)fVar6;
  }
  fVar1 = (float)param_1[0x345];
  if (!NAN(fVar1) && 200.0 < fVar1 != (fVar1 == 200.0)) {
    fVar6 = (float10)FUN_00ddba30(((float)param_1[0x345] - 200.0) * 0.00125 *
                                  (float)(fVar5 * (float10)0.02443461) + (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar6;
  }
  if ((float)param_1[0x345] <= -200.0) {
    fVar5 = (float10)FUN_00ddba30(((float)param_1[0x345] + 200.0) * 0.00125 *
                                  (float)(fVar5 * (float10)0.02443461) + (float)param_1[0x9e3]);
    param_1[0x9e3] = (int)(float)fVar5;
  }
  if ((float)param_1[0x9e3] < -0.7853982) {
    param_1[0x9e3] = -0x40b6f025;
  }
  if (0.7853982 < (float)param_1[0x9e3]) {
    param_1[0x9e3] = 0x3f490fdb;
    FUN_00bdb1d0();
    return;
  }
LAB_0088307e:
  FUN_00bdb1d0();
  return;
}

// 00883420  FUN_00883420  size=712  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00883420(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x39c))();
    iVar3 = FUN_00b7d0b0();
    if (iVar3 != 0) {
      FUN_00b7d0b0();
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 != (int *)0x0) {
        puVar6 = &DAT_01be9d80;
        (**(code **)(*piVar4 + 4))(&DAT_01be9d80);
        iVar3 = FUN_00dd6d80(puVar6);
        if (iVar3 != 0) {
          FUN_00a94bc0(1,0);
        }
      }
    }
    uVar5 = 0xc;
    if (param_1[0x2dd] != 0) {
      uVar5 = 0xb;
    }
    iVar3 = FUN_00b7d110();
    FUN_00a9f3c0(iVar3 + 0x494,uVar5,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x505] = 0;
    param_1[0x249] = param_1[0x34d];
    param_1[0x504] = 1;
    FUN_00b7f610();
    param_1[0x502] = 0x701;
    if (((byte)DAT_01bea090 & 8) != 0) {
      param_1[0x504] = 0;
      FUN_00a8caf0(0x10003c,0,0,0);
    }
    FUN_00b86010(1);
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if (((param_1[0x33e] & param_1[0x38f]) == 0) || (param_1[0x250] != 0)) {
    param_1[0x505] = 0;
  }
  else {
    fVar1 = (float)param_1[0x505];
    param_1[0x505] = (int)((float)param_1[0x244] + fVar1);
    if (15.0 <= (float)param_1[0x244] + fVar1) {
      param_1[0x504] = 0;
      FUN_00a8caf0(0x10003c,0,0,0);
      param_1[0x9e3] = _DAT_01bea530;
    }
  }
  iVar3 = FUN_00a8c760(5);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00b7b200();
    if ((piVar4 == (int *)0x0) || (iVar3 = (**(code **)(*piVar4 + 0x228))(), iVar3 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar2 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar2)(0x3dcccccd,0x3ae4c388,0x3e8efa35,0);
      }
    }
    else {
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
    }
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a8c760(0xb);
  if (iVar3 != 0) {
    FUN_0086d5e0();
    FUN_00b7f9c0();
    param_1[0x250] = 1;
  }
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) != 0) &&
     (iVar3 = FUN_00e36060(0), iVar3 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 008836F0  FUN_008836f0  size=226  [between]
void __fastcall FUN_008836f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    uVar2 = 2;
    if (param_1[0x2dd] != 0) {
      uVar2 = 7;
    }
    iVar1 = FUN_00b7d110();
    FUN_00a9f3c0(iVar1 + 0x494,uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a92f90();
  if ((*(int *)(iVar1 + 0xd0) + *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0xb8) != 0) &&
     (iVar1 = FUN_00e36060(0), iVar1 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 008837E0  FUN_008837e0  size=872  [between]
void __fastcall FUN_008837e0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  param_1[0x4fe] = 0;
  (*pcVar2)();
  if (param_1[0x187] == 0) {
    param_1[0x504] = 0;
    FUN_00a94bc0(8,0x3e888889);
    FUN_00a9f560("GUNKAMAE",0x3e4ccccd,0x8000000,0);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,1,0,0,0x17,0x3e4ccccd,0x8000000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0,0,0,4,0x3e4ccccd,0x8000000);
    iVar3 = FUN_00b7d110();
    FUN_00a94a40(iVar3 + 0x494,0xffffffff,0,0xffffffff,0,0,0x16,0x3e4ccccd,0x8000000);
    FUN_00a947e0(0,param_1[0x9e3],0,0);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x250] = 0;
    FUN_00b7f9c0();
  }
  else if (param_1[0x187] != 1) {
    FUN_00bdb1d0();
    return;
  }
  FUN_00a947e0(0,(float)param_1[0x9e3] * 1.2732395,0,0);
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
     (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
    FUN_00a8caf0(0x100041,0,0,0);
    if ((param_1[0x33e] & param_1[0x38f]) != 0) {
      FUN_00a8caf0(0x10003d,0,0,0);
      FUN_00bdb1d0();
      return;
    }
  }
  else {
    fVar4 = (float10)FUN_00da7500();
    fVar5 = (float10)FUN_00da7570();
    fVar5 = fVar5 * (float10)-0.02443461;
    fVar6 = (float10)200.0;
    if (fVar6 < (float10)(float)param_1[0x344] != (fVar6 == (float10)(float)param_1[0x344])) {
      fVar6 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] - fVar6) *
                                            (float10)0.00125 * fVar5 + (float10)(float)param_1[0x25]
                                           ));
      param_1[0x25] = (int)(float)fVar6;
      fVar5 = (float10)(float)fVar5;
    }
    if ((float)param_1[0x344] <= -200.0) {
      fVar5 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x344] + (float10)200.0) *
                                            (float10)0.00125 * fVar5 + (float10)(float)param_1[0x25]
                                           ));
      param_1[0x25] = (int)(float)fVar5;
    }
    fVar1 = (float)param_1[0x345];
    if (!NAN(fVar1) && 200.0 < fVar1 != (fVar1 == 200.0)) {
      fVar5 = (float10)FUN_00ddba30(((float)param_1[0x345] - 200.0) * 0.00125 *
                                    (float)(fVar4 * (float10)0.02443461) + (float)param_1[0x9e3]);
      param_1[0x9e3] = (int)(float)fVar5;
    }
    if ((float)param_1[0x345] <= -200.0) {
      fVar4 = (float10)FUN_00ddba30(((float)param_1[0x345] + 200.0) * 0.00125 *
                                    (float)(fVar4 * (float10)0.02443461) + (float)param_1[0x9e3]);
      param_1[0x9e3] = (int)(float)fVar4;
    }
    if ((float)param_1[0x9e3] < -0.7853982) {
      param_1[0x9e3] = -0x40b6f025;
    }
    if (0.7853982 < (float)param_1[0x9e3]) {
      param_1[0x9e3] = 0x3f490fdb;
      FUN_00bdb1d0();
      return;
    }
  }
  FUN_00bdb1d0();
  return;
}

// 00883B50  FUN_00883b50  size=556  [between]
void __fastcall FUN_00883b50(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x2e0] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    pcVar1 = *(code **)(*param_1 + 0x39c);
    param_1[0x2dd] = 1;
    (*pcVar1)();
    iVar4 = FUN_00b7d0b0();
    if (iVar4 != 0) {
      FUN_00b7d0b0();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar11 = &DAT_01be9d80;
        (**(code **)(*piVar2 + 4))(&DAT_01be9d80);
        iVar4 = FUN_00dd6d80(puVar11);
        if (iVar4 != 0) {
          FUN_00a94bc0(1,0);
        }
      }
    }
    iVar4 = FUN_00b7d110();
    FUN_00a9f3c0(iVar4 + 0x494,0x10,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x9b5] = 0;
    param_1[0x250] = 0;
    param_1[0x502] = 0x701;
    iVar4 = FUN_00b7f610();
    if (iVar4 == 8) {
      iVar4 = FUN_00b7d110();
      uVar12 = 0x3f800000;
      iVar4 = iVar4 + 0x494;
      uVar10 = 0;
      uVar9 = 0x8000000;
      uVar8 = 0x3f800000;
      uVar7 = 0x3d888889;
      uVar6 = 0;
      uVar5 = 0x21;
      FUN_00b7d110(iVar4,0x21,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a9f3c0(iVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12);
    }
    param_1[0x2dd] = 1;
    FUN_00b7fa30(1);
    FUN_00a8e760();
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        iVar4 = FUN_00a81330();
        if (iVar4 != 0) {
          FUN_00a81330();
          FUN_00a7c8a0();
        }
        FUN_00a8e760();
      }
    }
    param_1[0x1da] = 0;
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        iVar3 = FUN_00a81330();
        iVar4 = 0;
        if (iVar3 != 0) {
          FUN_00a81330();
          iVar4 = FUN_00a7c8a0();
        }
        *(undefined4 *)(iVar4 + 0x768) = 0;
      }
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    FUN_00a8caf0(0x100044,0,0,0);
  }
  return;
}

// 00883D80  FUN_00883d80  size=271  [between]
void __fastcall FUN_00883d80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  param_1[0x2e0] = 1;
  if (param_1[0x1db] != 0) {
    FUN_009fb990();
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    iVar1 = FUN_00b7d110();
    FUN_00a9f3c0(iVar1 + 0x494,0,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x250] = 0;
    param_1[0x502] = 0x701;
    iVar1 = FUN_00b7f610();
    if (iVar1 == 8) {
      iVar1 = FUN_00b7d110();
      uVar8 = 0x3f800000;
      iVar1 = iVar1 + 0x494;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0x3f800000;
      uVar4 = 0x3d888889;
      uVar3 = 0;
      uVar2 = 0x11;
      FUN_00b7d110(iVar1,0x11,0,0x3d888889,0x3f800000,0,0,0x3f800000);
      FUN_00a9f3c0(iVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    }
    param_1[0x2dd] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 00883E90  FUN_00883e90  size=752  [between]
void __fastcall FUN_00883e90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  param_1[0x2e1] = 1;
  if (param_1[0x1db] != 0) {
    FUN_009fb990();
  }
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    iVar3 = FUN_00b7d110();
    FUN_00a9f3c0(iVar3 + 0x494,1,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x250] = 0;
    iVar3 = FUN_00b7f610();
    if (iVar3 == 8) {
      iVar3 = FUN_00b7d110();
      uVar10 = 0x3f800000;
      iVar3 = iVar3 + 0x494;
      uVar9 = 0;
      uVar8 = 0x8000000;
      uVar7 = 0x3f800000;
      uVar6 = 0x3d888889;
      uVar5 = 0;
      uVar4 = 0x12;
      FUN_00b7d110(iVar3,0x12,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a9f3c0(iVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    }
  case 1:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    iVar3 = FUN_00b7d110();
    FUN_00a9f3c0(iVar3 + 0x494,2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar3 = FUN_00b7f610();
    if (iVar3 == 8) {
      iVar3 = FUN_00b7d110();
      uVar10 = 0x3f800000;
      iVar3 = iVar3 + 0x494;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0x3f800000;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0x13;
      FUN_00b7d110(iVar3,0x13,0,0,0x3f800000,0,0,0x3f800000);
      FUN_00a9f3c0(iVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    }
  case 3:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
    break;
  case 4:
    iVar3 = 4;
    iVar2 = FUN_00b95e60();
    if (iVar2 == 2) {
      iVar3 = 3;
    }
    iVar2 = FUN_00b7d110();
    FUN_00a9f3c0(iVar2 + 0x494,iVar3,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar2 = FUN_00b7f610();
    if (iVar2 == 8) {
      iVar2 = FUN_00b7d110();
      uVar9 = 0x3f800000;
      iVar3 = iVar3 + 0x11;
      uVar8 = 0;
      iVar2 = iVar2 + 0x494;
      uVar7 = 0x8000000;
      uVar6 = 0x3f800000;
      uVar5 = 0x3d888889;
      uVar4 = 0;
      FUN_00b7d110(iVar2,iVar3,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a9f3c0(iVar2,iVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
    }
  case 5:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8caf0(0x100044,0,0,0);
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x308);
  param_1[0x23d] = param_1[0x34c];
  (*pcVar1)(0x3dcccccd,0x3ae4c388,0x3e0efa35,0);
  return;
}

// 008841A0  FUN_008841a0  size=753  [between]
void __fastcall FUN_008841a0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  param_1[0x2e1] = 1;
  if (param_1[0x1db] != 0) {
    FUN_009fb990();
  }
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    iVar3 = FUN_00b7d110();
    FUN_00a9f3c0(iVar3 + 0x494,5,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x250] = 0;
    iVar3 = FUN_00b7f610();
    if (iVar3 == 8) {
      iVar3 = FUN_00b7d110();
      uVar10 = 0x3f800000;
      iVar3 = iVar3 + 0x494;
      uVar9 = 0;
      uVar8 = 0x8000000;
      uVar7 = 0x3f800000;
      uVar6 = 0x3d888889;
      uVar5 = 0;
      uVar4 = 0x16;
      FUN_00b7d110(iVar3,0x16,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a9f3c0(iVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    }
  case 1:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    iVar3 = FUN_00b7d110();
    FUN_00a9f3c0(iVar3 + 0x494,6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar3 = FUN_00b7f610();
    if (iVar3 == 8) {
      iVar3 = FUN_00b7d110();
      uVar10 = 0x3f800000;
      iVar3 = iVar3 + 0x494;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0x3f800000;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0x17;
      FUN_00b7d110(iVar3,0x17,0,0,0x3f800000,0,0,0x3f800000);
      FUN_00a9f3c0(iVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    }
  case 3:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
    break;
  case 4:
    iVar3 = 8;
    iVar2 = FUN_00b95e60();
    if (iVar2 == 2) {
      iVar3 = 7;
    }
    iVar2 = FUN_00b7d110();
    FUN_00a9f3c0(iVar2 + 0x494,iVar3,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar2 = FUN_00b7f610();
    if (iVar2 == 8) {
      iVar2 = FUN_00b7d110();
      uVar9 = 0x3f800000;
      iVar3 = iVar3 + 0x11;
      uVar8 = 0;
      iVar2 = iVar2 + 0x494;
      uVar7 = 0x8000000;
      uVar6 = 0x3f800000;
      uVar5 = 0x3d888889;
      uVar4 = 0;
      FUN_00b7d110(iVar2,iVar3,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a9f3c0(iVar2,iVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
    }
  case 5:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8caf0(0x100044,0,0,0);
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x308);
  param_1[0x23d] = param_1[0x34c];
  (*pcVar1)(0x3d75c28f,0x3ae4c388,0x3d8efa35,0);
  return;
}

// 008844B0  FUN_008844b0  size=410  [between]
void __fastcall FUN_008844b0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x9b6] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if ((param_1[0x187] != 0) && (iVar2 = FUN_0085d070(), iVar2 == 0)) {
    iVar2 = FUN_00864ad0();
    if (iVar2 != 0) {
      FUN_0085e000(0);
      return;
    }
    iVar2 = FUN_008635c0(&stack0xffffffd4);
    if (iVar2 == 0) {
      uVar5 = 0;
      uVar3 = FUN_00a8c760(0x11);
      uVar4 = FUN_00a8c760(0x1c);
      iVar2 = FUN_0086efb0(uVar4,uVar3,uVar5);
      if (iVar2 == 0) {
        iVar2 = FUN_00a8c760(0);
        if ((iVar2 != 0) && (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 != 0)) {
          return;
        }
        iVar2 = FUN_00a8c760(0);
        if ((iVar2 != 0) && (90000.0 < (float)param_1[0x34a])) {
          if (((DAT_01bea090._3_1_ & 1) == 0) &&
             ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
            FUN_00a8caf0(0x100002,0,0,0);
            return;
          }
          FUN_00a8caf0(0x100001,0,0,0);
        }
      }
    }
  }
  return;
}

// 00884650  FUN_00884650  size=493  [between]
void __fastcall FUN_00884650(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x2e0] = 1;
  (*pcVar1)();
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_00884800;
  }
  iVar4 = 9;
  if (param_1[0x9e4] != 0) {
    iVar4 = 10;
  }
  iVar2 = FUN_00b7d110();
  FUN_00a9f3c0(iVar2 + 0x494,iVar4,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  FUN_0086f130();
  param_1[0x250] = 0;
  param_1[0x502] = 0x701;
  iVar2 = FUN_00b7f610();
  if (iVar2 == 8) {
    iVar3 = FUN_00b7d110();
    uVar11 = 0x3f800000;
    iVar2 = iVar4 + 0x11;
    uVar10 = 0;
    iVar3 = iVar3 + 0x494;
    uVar9 = 0x8000000;
    uVar8 = 0x3f800000;
    uVar7 = 0x3d888889;
    uVar6 = 0;
    FUN_00b7d110(iVar3,iVar2,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00a9f3c0(iVar3,iVar2,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
    bVar5 = iVar4 == 9;
LAB_00884773:
    if (bVar5) {
      iVar4 = FUN_00b7d110();
      uVar6 = 0x22;
      goto LAB_00884797;
    }
  }
  else {
    if (iVar4 != 9) {
      bVar5 = iVar4 == 10;
      goto LAB_00884773;
    }
    iVar4 = FUN_00b7d110();
    uVar6 = 0x23;
LAB_00884797:
    FUN_00864510(iVar4 + 0x494,uVar6,0,0x3d888889,0x3f800000,0x8000000);
  }
  FUN_00b7fa30(0);
  param_1[0x1da] = 1;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a81330();
    iVar4 = FUN_00a7c8a0();
    if (iVar4 != 0) {
      iVar2 = FUN_00a81330();
      iVar4 = 0;
      if (iVar2 != 0) {
        FUN_00a81330();
        iVar4 = FUN_00a7c8a0();
      }
      *(undefined4 *)(iVar4 + 0x768) = 1;
    }
  }
LAB_00884800:
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 00884840  FUN_00884840  size=432  [between]
void __fastcall FUN_00884840(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  param_1[0x2e0] = 1;
  if (param_1[0x1db] != 0) {
    FUN_009fb990();
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    iVar2 = FUN_00b7d110();
    FUN_00a9f3c0(iVar2 + 0x494,0xb,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x250] = 0;
    param_1[0x502] = 0x701;
    iVar2 = FUN_00b7f610();
    if (iVar2 == 8) {
      iVar2 = FUN_00b7d110();
      uVar10 = 0x3f800000;
      iVar2 = iVar2 + 0x494;
      uVar9 = 0;
      uVar8 = 0x8000000;
      uVar7 = 0x3f800000;
      uVar6 = 0x3d888889;
      uVar5 = 0;
      uVar4 = 0x1c;
      FUN_00b7d110(iVar2,0x1c,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a9f3c0(iVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    }
    param_1[0x9e5] = 0;
    param_1[0x9e6] = param_1[0x9e7];
    param_1[0x251] = 0;
    param_1[0x248] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0x10004a,0,0,0);
  }
  if (param_1[0x251] == 0) {
    fVar3 = (float10)FUN_00ddba30((float)param_1[0x244] * 0.034906585 + (float)param_1[0x25]);
    param_1[0x25] = (int)(float)fVar3;
    fVar1 = (float)param_1[0x244] * 0.034906585 + (float)param_1[0x248];
    param_1[0x248] = (int)fVar1;
    if (1.5707964 <= fVar1) {
      param_1[0x251] = 1;
    }
  }
  return;
}

// 008849F0  FUN_008849f0  size=281  [between]
void __fastcall FUN_008849f0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x2e0] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    iVar2 = FUN_00b7d110();
    FUN_00a9f3c0(iVar2 + 0x494,0xf,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x250] = 0;
    param_1[0x502] = 0x701;
    iVar2 = FUN_00b7f610();
    if (iVar2 == 8) {
      iVar2 = FUN_00b7d110();
      uVar9 = 0x3f800000;
      iVar2 = iVar2 + 0x494;
      uVar8 = 0;
      uVar7 = 0x8000000;
      uVar6 = 0x3f800000;
      uVar5 = 0x3d888889;
      uVar4 = 0;
      uVar3 = 0x20;
      FUN_00b7d110(iVar2,0x20,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a9f3c0(iVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0x100044,0,0,0);
  }
  return;
}

// 00884B10  FUN_00884b10  size=267  [between]
void __fastcall FUN_00884b10(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  param_1[0x2e0] = 1;
  if (param_1[0x1db] != 0) {
    FUN_009fb990();
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    iVar1 = FUN_00b7d110();
    FUN_00a9f3c0(iVar1 + 0x494,0xc,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x250] = 0;
    param_1[0x502] = 0x701;
    iVar1 = FUN_00b7f610();
    if (iVar1 == 8) {
      iVar1 = FUN_00b7d110();
      uVar8 = 0x3f800000;
      iVar1 = iVar1 + 0x494;
      uVar7 = 0;
      uVar6 = 0x8000000;
      uVar5 = 0x3f800000;
      uVar4 = 0x3d888889;
      uVar3 = 0;
      uVar2 = 0x1d;
      FUN_00b7d110(iVar1,0x1d,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a9f3c0(iVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 00884C20  FUN_00884c20  size=709  [between]
void __fastcall FUN_00884c20(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  param_1[0x2e1] = 1;
  if (param_1[0x1db] != 0) {
    FUN_009fb990();
  }
  fVar1 = (float)param_1[0x9e6];
  param_1[0x9e6] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    param_1[0x9e5] = 1;
    param_1[0x9e6] = -0x40800000;
    param_1[0x9e4] = 1;
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    iVar3 = 0xd;
    if (param_1[0x186] == 0x10004c) {
      iVar3 = 0xe;
    }
    iVar2 = FUN_00b7d110();
    FUN_00a9f3c0(iVar2 + 0x494,iVar3,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0086f130();
    param_1[0x250] = 0;
    param_1[0x502] = 0x701;
    iVar2 = FUN_00b7f610();
    if (iVar2 == 8) {
      iVar2 = FUN_00b7d110();
      uVar11 = 0x3f800000;
      iVar3 = iVar3 + 0x11;
      uVar10 = 0;
      iVar2 = iVar2 + 0x494;
      uVar9 = 0;
      uVar8 = 0x3f800000;
      uVar7 = 0x3d088889;
      uVar6 = 0;
      FUN_00b7d110(iVar2,iVar3,0,0x3d088889,0x3f800000,0,0,0x3f800000);
      FUN_00a9f3c0(iVar2,iVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
    }
    param_1[0x248] = 0;
LAB_00884d63:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790(0x3f800000,0x3f800000);
  }
  else if (param_1[0x187] == 1) goto LAB_00884d63;
  param_1[0x248] = (int)((float)param_1[0x248] + (float)param_1[0x244]);
  fVar1 = (float)param_1[0x25];
  fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
  fVar5 = (float10)FUN_00ddba30((float)param_1[0x34c] - fVar1);
  fVar4 = (float10)FUN_00ddba30((float)param_1[0x34c] - (float)fVar4);
  if (90000.0 < (float)param_1[0x34a]) {
    fVar1 = (float)fVar5 * (float)fVar5;
    if (param_1[0x186] == 0x10004b) {
      if (fVar1 < 1.0966228 != (fVar1 == 1.0966228)) {
        fVar5 = (float10)FUN_00ddba30((float)param_1[0x244] * 0.008726646 + (float)param_1[0x25]);
        param_1[0x25] = (int)(float)fVar5;
        fVar4 = (float10)(float)fVar4;
      }
      if (fVar4 * fVar4 < (float10)1.0966228 != (fVar4 * fVar4 == (float10)1.0966228)) {
        fVar1 = (float)param_1[0x25] - (float)param_1[0x244] * 0.008726646;
LAB_00884e6f:
        fVar4 = (float10)FUN_00ddba30(fVar1);
        param_1[0x25] = (int)(float)fVar4;
        return;
      }
    }
    else {
      if (fVar1 < 1.0966228 != (fVar1 == 1.0966228)) {
        fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x244] * 0.008726646);
        param_1[0x25] = (int)(float)fVar5;
        fVar4 = (float10)(float)fVar4;
      }
      if (fVar4 * fVar4 < (float10)1.0966228 != (fVar4 * fVar4 == (float10)1.0966228)) {
        fVar1 = (float)param_1[0x244] * 0.008726646 + (float)param_1[0x25];
        goto LAB_00884e6f;
      }
    }
  }
  return;
}

// 00884EF0  Pl1400::vf418  size=2140  [class]
undefined4 __thiscall Pl1400::vf418(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_24 [32];
  
  FUN_00a7c950();
  *param_3 = 1;
  if (((*(int *)(param_2 + 0x5c) == 8) && ((DAT_01bea090 & 0x80000000) == 0)) &&
     (iVar1 = FUN_00bc3230(0), iVar1 == 0)) {
    *param_3 = 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x41c))();
  if (((iVar1 != 0) && (*param_3 != 0)) &&
     ((param_1[0x1510] != 0 && (iVar1 = FUN_00c15520(), iVar1 != 0)))) {
    FUN_00b808d0(param_2);
    piVar3 = (int *)0x0;
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar3 = (int *)FUN_00a7c8a0();
    }
    iVar1 = FUN_00b90770(*(undefined4 *)(param_2 + 0x5c),param_2);
    if (((iVar1 != 0) && (piVar3 != (int *)0x0)) &&
       ((piVar3[0x139] == 0 && (iVar1 = (**(code **)(*piVar3 + 0x274))(), iVar1 == 0)))) {
      (**(code **)(*param_1 + 0x220))(0x40a00000);
      iVar1 = *(int *)(param_2 + 0x58);
      if ((iVar1 == 2) && (param_1[0x186] != 0x100066)) {
        FUN_00864be0(0,0,0);
        FUN_00a8caf0(0x100066,0,0,0);
      }
      else {
        if ((iVar1 != 0x2d) || (param_1[0x186] == 0x100067)) {
          if (iVar1 == 0xc) {
            uVar16 = 1;
            uVar15 = 0x3f060a92;
            DAT_01bea060 = DAT_01bea060 | 0x2000000;
            uVar14 = 0x3f060a92;
            puVar11 = auStack_24;
            puVar10 = auStack_24;
            uVar13 = 0x43340000;
            uVar12 = 1;
            puVar9 = auStack_24;
            uVar8 = 6;
            puVar7 = auStack_24;
            puVar6 = auStack_24;
            puVar5 = auStack_24;
            uVar4 = 6;
            uVar2 = FUN_00a81330(6,puVar5,puVar6,puVar7,6,puVar9,puVar10,puVar11,1,0x43340000,
                                 0x3f060a92,0x3f060a92,1);
            FUN_0086f2e0(uVar2,uVar4,puVar5,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11,uVar12,uVar13
                         ,uVar14,uVar15,uVar16);
            (**(code **)(*piVar3 + 0x150))(0x12,param_1[0x13c]);
            return 1;
          }
          if (iVar1 == 0x2b) {
            uVar16 = 1;
            uVar15 = 0x3f060a92;
            DAT_01bea060 = DAT_01bea060 | 0x2000000;
            uVar14 = 0x3f060a92;
            puVar11 = auStack_24;
            puVar10 = auStack_24;
            uVar13 = 0x43340000;
            uVar12 = 2;
            puVar9 = auStack_24;
            uVar8 = 0x114;
            puVar7 = auStack_24;
            puVar6 = auStack_24;
            puVar5 = auStack_24;
            uVar4 = 0x114;
            uVar2 = FUN_00a81330(0x114,puVar5,puVar6,puVar7,0x114,puVar9,puVar10,puVar11,2,
                                 0x43340000,0x3f060a92,0x3f060a92,1);
            FUN_0086f2e0(uVar2,uVar4,puVar5,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11,uVar12,uVar13
                         ,uVar14,uVar15,uVar16);
            (**(code **)(*piVar3 + 0x150))(0x88,param_1[0x13c]);
            return 1;
          }
          if (iVar1 == 0x12) {
            uVar16 = 1;
            uVar15 = 0x3f060a92;
            DAT_01bea060 = DAT_01bea060 | 0x2000000;
            uVar14 = 0x3f060a92;
            puVar11 = auStack_24;
            puVar10 = auStack_24;
            uVar13 = 0x43340000;
            uVar12 = 2;
            puVar9 = auStack_24;
            uVar8 = 0x110;
            puVar7 = auStack_24;
            puVar6 = auStack_24;
            puVar5 = auStack_24;
            uVar4 = 0x110;
            uVar2 = FUN_00a81330(0x110,puVar5,puVar6,puVar7,0x110,puVar9,puVar10,puVar11,2,
                                 0x43340000,0x3f060a92,0x3f060a92,1);
            FUN_0086f2e0(uVar2,uVar4,puVar5,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11,uVar12,uVar13
                         ,uVar14,uVar15,uVar16);
            (**(code **)(*piVar3 + 0x150))(0x14,param_1[0x13c]);
            return 1;
          }
          if (iVar1 == 0x13) {
            uVar16 = 1;
            uVar15 = 0x3f060a92;
            DAT_01bea060 = DAT_01bea060 | 0x2000000;
            uVar14 = 0x3f060a92;
            puVar11 = auStack_24;
            puVar10 = auStack_24;
            uVar13 = 0x43700000;
            uVar12 = 2;
            puVar9 = auStack_24;
            uVar8 = 0x111;
            puVar7 = auStack_24;
            puVar6 = auStack_24;
            puVar5 = auStack_24;
            uVar4 = 0x111;
            uVar2 = FUN_00a81330(0x111,puVar5,puVar6,puVar7,0x111,puVar9,puVar10,puVar11,2,
                                 0x43700000,0x3f060a92,0x3f060a92,1);
            FUN_0086f2e0(uVar2,uVar4,puVar5,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11,uVar12,uVar13
                         ,uVar14,uVar15,uVar16);
            (**(code **)(*piVar3 + 0x150))(0x13,param_1[0x13c]);
            return 1;
          }
          if (iVar1 == 0xd) {
            uVar16 = 1;
            uVar15 = 0x3f060a92;
            DAT_01bea060 = DAT_01bea060 | 0x2000000;
            uVar14 = 0x3f060a92;
            puVar11 = auStack_24;
            puVar10 = auStack_24;
            uVar13 = 0x43700000;
            uVar12 = 1;
            puVar9 = auStack_24;
            uVar8 = 0x41;
            puVar7 = auStack_24;
            puVar6 = auStack_24;
            puVar5 = auStack_24;
            uVar4 = 0x3a;
            uVar2 = FUN_00a81330(0x3a,puVar5,puVar6,puVar7,0x41,puVar9,puVar10,puVar11,1,0x43700000,
                                 0x3f060a92,0x3f060a92,1);
            FUN_0086f2e0(uVar2,uVar4,puVar5,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11,uVar12,uVar13
                         ,uVar14,uVar15,uVar16);
            (**(code **)(*piVar3 + 0x150))(0x15,param_1[0x13c]);
            return 1;
          }
          if (iVar1 == 0xe) {
            uVar16 = 1;
            uVar15 = 0x3f060a92;
            DAT_01bea060 = DAT_01bea060 | 0x2000000;
            uVar14 = 0x3f060a92;
            puVar11 = auStack_24;
            puVar10 = auStack_24;
            uVar13 = 0x43520000;
            uVar12 = 1;
            puVar9 = auStack_24;
            uVar8 = 0x1e;
            puVar7 = auStack_24;
            puVar6 = auStack_24;
            puVar5 = auStack_24;
            uVar4 = 0x20;
            uVar2 = FUN_00a81330(0x20,puVar5,puVar6,puVar7,0x1e,puVar9,puVar10,puVar11,1,0x43520000,
                                 0x3f060a92,0x3f060a92,1);
            FUN_0086f2e0(uVar2,uVar4,puVar5,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11,uVar12,uVar13
                         ,uVar14,uVar15,uVar16);
            (**(code **)(*piVar3 + 0x150))(0x16,param_1[0x13c]);
            return 1;
          }
          if (iVar1 == 0xf) {
            uVar16 = 1;
            uVar15 = 0x3f060a92;
            DAT_01bea060 = DAT_01bea060 | 0x2000000;
            uVar14 = 0x3f060a92;
            puVar11 = auStack_24;
            puVar10 = auStack_24;
            uVar13 = 0x43340000;
            uVar12 = 0;
            puVar9 = auStack_24;
            uVar8 = 0x112;
            puVar7 = auStack_24;
            puVar6 = auStack_24;
            puVar5 = auStack_24;
            uVar4 = 0x112;
            uVar2 = FUN_00a81330(0x112,puVar5,puVar6,puVar7,0x112,puVar9,puVar10,puVar11,0,
                                 0x43340000,0x3f060a92,0x3f060a92,1);
            FUN_0086f2e0(uVar2,uVar4,puVar5,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11,uVar12,uVar13
                         ,uVar14,uVar15,uVar16);
            (**(code **)(*piVar3 + 0x150))(0x17,param_1[0x13c]);
            return 1;
          }
          if (iVar1 != 0x10) {
            if (iVar1 == 0x11) {
              uVar16 = 1;
              uVar15 = 0x3f060a92;
              DAT_01bea060 = DAT_01bea060 | 0x2000000;
              uVar14 = 0x3f060a92;
              puVar11 = auStack_24;
              puVar10 = auStack_24;
              uVar13 = 0x43340000;
              uVar12 = 0;
              puVar9 = auStack_24;
              uVar8 = 0x26;
              puVar7 = auStack_24;
              puVar6 = auStack_24;
              puVar5 = auStack_24;
              uVar4 = 0x26;
              uVar2 = FUN_00a81330(0x26,puVar5,puVar6,puVar7,0x26,puVar9,puVar10,puVar11,0,
                                   0x43340000,0x3f060a92,0x3f060a92,1);
              FUN_0086f2e0(uVar2,uVar4,puVar5,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11,uVar12,
                           uVar13,uVar14,uVar15,uVar16);
              (**(code **)(*piVar3 + 0x150))(0x19,param_1[0x13c]);
              return 1;
            }
            if (iVar1 == 0x17) {
              uVar16 = 1;
              uVar15 = 0x3eb2b8c2;
              DAT_01bea060 = DAT_01bea060 | 0x2000000;
              uVar14 = 0x3eb2b8c2;
              puVar11 = auStack_24;
              puVar10 = auStack_24;
              uVar13 = 0x43520000;
              uVar12 = 1;
              puVar9 = auStack_24;
              uVar8 = 0xe;
              puVar7 = auStack_24;
              puVar6 = auStack_24;
              puVar5 = auStack_24;
              uVar4 = 0xe;
              uVar2 = FUN_00a81330(0xe,puVar5,puVar6,puVar7,0xe,puVar9,puVar10,puVar11,1,0x43520000,
                                   0x3eb2b8c2,0x3eb2b8c2,1);
              FUN_0086f2e0(uVar2,uVar4,puVar5,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11,uVar12,
                           uVar13,uVar14,uVar15,uVar16);
              (**(code **)(*piVar3 + 0x150))(0x4d,param_1[0x13c]);
              return 1;
            }
            if (iVar1 == 0x18) {
              uVar16 = 1;
              uVar15 = 0x3eb2b8c2;
              DAT_01bea060 = DAT_01bea060 | 0x2000000;
              uVar14 = 0x3eb2b8c2;
              puVar11 = auStack_24;
              puVar10 = auStack_24;
              uVar13 = 0x43520000;
              uVar12 = 1;
              puVar9 = auStack_24;
              uVar8 = 0x18;
              puVar7 = auStack_24;
              puVar6 = auStack_24;
              puVar5 = auStack_24;
              uVar4 = 0x18;
              uVar2 = FUN_00a81330(0x18,puVar5,puVar6,puVar7,0x18,puVar9,puVar10,puVar11,1,
                                   0x43520000,0x3eb2b8c2,0x3eb2b8c2,1);
              FUN_0086f2e0(uVar2,uVar4,puVar5,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11,uVar12,
                           uVar13,uVar14,uVar15,uVar16);
              (**(code **)(*piVar3 + 0x150))(0x4e,param_1[0x13c]);
              return 1;
            }
            if (iVar1 != 0x19) {
              if (iVar1 != 0x1a) {
                return 0;
              }
              uVar16 = 1;
              uVar15 = 0x3eb2b8c2;
              DAT_01bea060 = DAT_01bea060 | 0x2000000;
              uVar14 = 0x3eb2b8c2;
              puVar11 = auStack_24;
              puVar10 = auStack_24;
              uVar13 = 0x43520000;
              uVar12 = 1;
              puVar9 = auStack_24;
              uVar8 = 0x2e;
              puVar7 = auStack_24;
              puVar6 = auStack_24;
              puVar5 = auStack_24;
              uVar4 = 0x2e;
              uVar2 = FUN_00a81330(0x2e,puVar5,puVar6,puVar7,0x2e,puVar9,puVar10,puVar11,1,
                                   0x43520000,0x3eb2b8c2,0x3eb2b8c2,1);
              FUN_0086f2e0(uVar2,uVar4,puVar5,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11,uVar12,
                           uVar13,uVar14,uVar15,uVar16);
              (**(code **)(*piVar3 + 0x150))(0x50,param_1[0x13c]);
              return 1;
            }
            uVar16 = 1;
            uVar15 = 0x3eb2b8c2;
            DAT_01bea060 = DAT_01bea060 | 0x2000000;
            uVar14 = 0x3eb2b8c2;
            puVar11 = auStack_24;
            puVar10 = auStack_24;
            uVar13 = 0x43520000;
            uVar12 = 1;
            puVar9 = auStack_24;
            uVar8 = 0x24;
            puVar7 = auStack_24;
            puVar6 = auStack_24;
            puVar5 = auStack_24;
            uVar4 = 0x24;
            uVar2 = FUN_00a81330(0x24,puVar5,puVar6,puVar7,0x24,puVar9,puVar10,puVar11,1,0x43520000,
                                 0x3eb2b8c2,0x3eb2b8c2,1);
            FUN_0086f2e0(uVar2,uVar4,puVar5,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11,uVar12,uVar13
                         ,uVar14,uVar15,uVar16);
            (**(code **)(*piVar3 + 0x150))(0x4f,param_1[0x13c]);
            return 1;
          }
          uVar16 = 1;
          uVar15 = 0x3f060a92;
          DAT_01bea060 = DAT_01bea060 | 0x2000000;
          uVar14 = 0x3f060a92;
          puVar11 = auStack_24;
          puVar10 = auStack_24;
          uVar13 = 0x43520000;
          uVar12 = 1;
          puVar9 = auStack_24;
          uVar8 = 0x29;
          puVar7 = auStack_24;
          puVar6 = auStack_24;
          puVar5 = auStack_24;
          uVar4 = 0x2b;
          uVar2 = FUN_00a81330(0x2b,puVar5,puVar6,puVar7,0x29,puVar9,puVar10,puVar11,1,0x43520000,
                               0x3f060a92,0x3f060a92,1);
          FUN_0086f2e0(uVar2,uVar4,puVar5,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11,uVar12,uVar13,
                       uVar14,uVar15,uVar16);
          (**(code **)(*piVar3 + 0x150))(0x18,param_1[0x13c]);
          return 1;
        }
        FUN_00864be0(0,0,0);
        FUN_00a8caf0(0x100067,0,0,0);
      }
      piVar3 = param_1 + 0x10;
      uVar4 = 1;
      uVar2 = FUN_00a81330(piVar3,1);
      FUN_00b7b380(uVar2,piVar3,uVar4);
      param_1[0xef9] = 0x42f00000;
      return 1;
    }
  }
  return 0;
}

// 00885750  FUN_00885750  size=1436  [between]
undefined4 __fastcall FUN_00885750(int *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  int iStack_10;
  int local_c;
  
  fVar1 = (float)param_1[0xb05];
  param_1[0xa09] = 0;
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0xb05] = (int)((float)param_1[0xb05] - (float)param_1[0x244]);
  }
  iVar5 = FUN_00a8c760(7);
  if (((iVar5 != 0) || ((DAT_01bea060 & 0x2000000) != 0)) || (0.0 < (float)param_1[0xb05])) {
    return 0;
  }
  piVar11 = (int *)param_1[0x19f];
  piVar9 = piVar11 + param_1[0x1a1] * 0x54;
  local_c = 0;
  iVar5 = (**(code **)(*param_1 + 0x32c))();
  if (piVar11 == piVar9) {
    return 0;
  }
  do {
    iVar6 = *piVar11;
    if ((((iVar6 != 0) && (iVar6 != 1)) && ((iVar6 != 2 && ((iVar6 != 0x1b0 && (iVar6 != 0x147))))))
       && ((piVar11[0x23] & 0x2000U) == 0)) {
      piVar10 = (int *)0x0;
      iVar6 = FUN_00a81330();
      if (iVar6 != 0) {
        piVar10 = (int *)FUN_00a7c8a0();
        local_c = FUN_00860a80(piVar10);
      }
      if ((piVar11[0x23] & 0x400000U) == 0) {
        if ((piVar10 != (int *)0x0) &&
           (iVar7 = FUN_00b87df0(iVar6,param_1[0x41c],0x3f860a92), iVar7 == 0)) {
          FUN_00bc4610(iVar6);
        }
        iStack_10 = -1;
        if ((piVar10 != (int *)0x0) && (iVar7 = (**(code **)(*piVar10 + 0x17c))(), iVar7 != 0)) {
          iStack_10 = (**(code **)(*piVar10 + 0x184))(*piVar11,param_1[0x13c],piVar11);
        }
        bVar3 = 5 < *(byte *)((int)piVar11 + 0x11);
        *(bool *)(param_1 + 0xb06) = bVar3;
        bVar4 = false;
        iVar7 = (**(code **)(*param_1 + 0x360))();
        if ((((iVar7 != 0) && (param_1[0x187] < 2)) && (param_1[0x250] != 0)) &&
           (param_1[0x2e4] != 0)) {
          bVar4 = true;
        }
        iVar7 = (**(code **)(*param_1 + 0x360))();
        if (((iVar7 == 0) && (param_1[0x2e4] != 0)) && (iVar7 = FUN_00a8c760(0x21), iVar7 != 0)) {
          bVar4 = true;
        }
        if ((iStack_10 == -1) && (bVar4)) {
          FUN_00a8f040(piVar11);
          param_1[0x24] = 0;
          param_1[0x2e4] = 0;
          if (iVar6 != 0) {
            uVar8 = FUN_00a7c7f0();
            FUN_00a7c960(uVar8);
          }
          FUN_0085c0e0();
          bVar4 = false;
          iVar5 = FUN_00b7ec80();
          if ((iVar5 == 0) && (iVar5 = FUN_00a8c760(0x2c), iVar5 != 0)) {
            bVar4 = true;
          }
          iVar5 = FUN_00b7ec80();
          if ((iVar5 == 1) && (iVar5 = FUN_00a8c760(0x2d), iVar5 != 0)) {
            bVar4 = true;
          }
          iVar5 = FUN_00b7ec80();
          if ((iVar5 == 2) && (iVar5 = FUN_00a8c760(0x2e), iVar5 != 0)) {
            bVar4 = true;
          }
          iVar5 = FUN_00b7ec80();
          if ((iVar5 == 3) && (iVar5 = FUN_00a8c760(0x2e), iVar5 != 0)) {
            bVar4 = true;
          }
          iVar5 = FUN_00b7ec80();
          if ((iVar5 == 4) && (iVar5 = FUN_00a8c760(0x2e), iVar5 != 0)) {
            bVar4 = true;
          }
          bVar12 = (piVar11[0x23] & 0x100U) != 0;
          if ((local_c != 0) && (*(int *)(local_c + 0xe80) != 0)) {
            bVar12 = true;
            if (0 < piVar11[1]) {
              iVar5 = piVar11[1] / 10;
              if (iVar5 < 1) {
                iVar5 = 1;
              }
              (**(code **)(*param_1 + 0x30c))(iVar5,1);
            }
          }
          FUN_00bc31d0(0);
          piVar9 = (int *)FUN_00c1b9a0();
          (**(code **)(*piVar9 + 0x40))();
          iVar5 = (**(code **)(*param_1 + 0x1d8))();
          if (bVar12) {
            if (iVar5 == 0) {
              FUN_00a8caf0(0x100022,0,0,0);
              if (!bVar3) goto LAB_00885bac;
              uVar8 = 0x100023;
            }
            else {
              uVar8 = 0x100027;
            }
            FUN_00a8caf0(uVar8,0,0,0);
LAB_00885bac:
            FUN_00dda360(0,0x3f800000,0x3f800000,8);
            (**(code **)(*param_1 + 0x198))(piVar10,piVar11,8);
            return 1;
          }
          if (iVar5 == 0) {
            FUN_00a8caf0(0x100020,0,0,0);
            if (!bVar3) goto LAB_00885c16;
            uVar8 = 0x100021;
          }
          else {
            uVar8 = 0x100026;
          }
          FUN_00a8caf0(uVar8,0,0,0);
LAB_00885c16:
          uVar8 = 2;
          if ((bVar4) && ((piVar11[0x23] & 0x1000U) == 0)) {
            iVar5 = (**(code **)(*param_1 + 0x1d8))();
            if (iVar5 == 0) {
              uVar8 = 0x10001f;
            }
            else {
              uVar8 = 0x100025;
            }
            FUN_00a8caf0(uVar8,0,0,0);
            uVar8 = 4;
            FUN_00d450c0();
          }
          FUN_00dda360(0,0x3f800000,0x3f800000,8);
          (**(code **)(*param_1 + 0x198))(piVar10,piVar11,uVar8);
          FUN_00b7ab80(0x41700000,0x3dcccccd);
          FUN_00da0f50(1,0x41700000,1);
          (**(code **)(*param_1 + 0x220))(0x41f00000);
          return 1;
        }
      }
      else {
        param_1[0xa09] = 1;
        param_1[0xa0c] = piVar11[0x4c];
        param_1[0xa0d] = piVar11[0x4d];
        param_1[0xa0e] = piVar11[0x4e];
        param_1[0xa0f] = piVar11[0x4f];
        pcVar2 = *(code **)(*param_1 + 0x198);
        param_1[0xa10] = piVar11[0x50];
        (*pcVar2)(piVar10,piVar11,2);
        iVar6 = FUN_00a8cab0();
        if (iVar6 != 0x10002a) {
          FUN_00a8caf0(0x10002a,0,0,0);
        }
        if (iVar5 != 0) {
          FUN_00864be0(1,0,0);
        }
      }
    }
    piVar11 = piVar11 + 0x54;
    if (piVar11 == piVar9) {
      return 0;
    }
  } while( true );
}

// 00885CF0  FUN_00885cf0  size=783  [between]
void __fastcall FUN_00885cf0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  param_1[0x991] = 0;
  FUN_00b7d8b0();
  param_1[0x95d] = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] == 0) {
    return;
  }
  FUN_0085d070();
  if ((((param_1[0x187] == 1) && (iVar1 = FUN_00a959f0(0), (float)iVar1 < 8.0)) &&
      (0 < param_1[0x39c])) && (iVar1 = FUN_00b7c530(), iVar1 != 0)) {
    param_1[0x39c] = 0;
    FUN_00a8caf0(0x10001b,0,0,0);
    param_1[0x991] = 0;
    return;
  }
  if (((DAT_01bea090 & 0x8000) == 0) &&
     ((((iVar1 = FUN_00a8c760(0x17), iVar1 != 0 || (iVar1 = FUN_00a8c760(1), iVar1 != 0)) ||
       (0.0 < (float)param_1[0xd07])) && (iVar1 = FUN_008649d0(), iVar1 != 0)))) {
    if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
      FUN_00da0f50(0,0,0);
    }
    FUN_0085e000(0);
    return;
  }
  uStack_18 = 0;
  uStack_20 = 1;
  uStack_10 = 0;
  uStack_8 = 1;
  uStack_24 = 1;
  uStack_c = 0;
  uStack_2c = 1;
  uStack_28 = 1;
  uStack_1c = 1;
  uStack_14 = 1;
  iVar1 = FUN_008635c0(&uStack_2c);
  if (iVar1 == 0) {
    iVar1 = FUN_0085d190();
    if (iVar1 == 0) {
      uStack_18 = 0;
      uStack_20 = 1;
      uStack_10 = 0;
      uStack_c = 1;
      uStack_8 = 1;
      uStack_24 = 1;
      uStack_2c = 1;
      uStack_28 = 1;
      uStack_1c = 1;
      uStack_14 = 1;
      iVar1 = FUN_008635c0(&uStack_2c);
      if (iVar1 != 0) goto LAB_00885e90;
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 == 0) || ((float)param_1[0x34a] <= 90000.0)) goto LAB_00885f3a;
      if (810000.0 < (float)param_1[0x34a]) {
        if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
          FUN_00da0f50(0,0,0);
        }
        goto LAB_00885f01;
      }
      if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
        FUN_00da0f50(0,0,0);
      }
    }
    else {
LAB_00885f3a:
      uVar4 = 1;
      uVar2 = FUN_00a8c760(0x11);
      uVar3 = FUN_00a8c760(0x1c);
      iVar1 = FUN_0086efb0(uVar3,uVar2,uVar4);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = FUN_00a8c760(0);
      if (iVar1 != 0) {
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_20 = 1;
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 1;
        uStack_8 = 1;
        uStack_24 = 1;
        uStack_2c = 1;
        uStack_28 = 1;
        iVar1 = FUN_008635c0(&uStack_2c);
        if (iVar1 != 0) {
          return;
        }
      }
      iVar1 = FUN_00a8c760(0);
      if (iVar1 == 0) {
        return;
      }
      if ((float)param_1[0x34a] <= 90000.0) {
        return;
      }
      if ((((DAT_01bea090 & 0x1000000) == 0) && ((DAT_01bea090 & 0x10) == 0)) &&
         (810000.0 < (float)param_1[0x34a])) {
LAB_00885f01:
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
    }
    FUN_00a8caf0(0x100001,0,0,0);
  }
  else {
LAB_00885e90:
    if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
      FUN_00da0f50(0,0,0);
      return;
    }
  }
  return;
}

// 00886310  FUN_00886310  size=492  [between]
void __fastcall FUN_00886310(int *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar4 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    iVar3 = param_1[0x186];
    uVar2 = 0xa1;
    if (iVar3 == 0x100020) {
      uVar2 = 0x9b;
    }
    if (iVar3 == 0x100021) {
      uVar2 = 0x9c;
    }
    if (iVar3 == 0x100022) {
      uVar2 = 0x9d;
    }
    if (iVar3 == 0x100023) {
      uVar2 = 0x9d;
    }
    FUN_00aa4080(uVar2,0,0x392ec33e,0x3f800000,0x8000000,0,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)();
    FUN_0086f130();
    if ((param_1[0x186] != 0x100022) && (param_1[0x186] != 0x100023)) {
      (**(code **)(*param_1 + 0x220))(0x41700000);
    }
    param_1[0x9f4] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if (iVar4 != 0) {
    iVar3 = FUN_00a8c760(5);
    if (iVar3 != 0) {
      FUN_00a8e880(iVar4 + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
  param_1[0x469] = 1;
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_00a952e0(0,0x40800000);
  iVar3 = FUN_00a8c760(0xb);
  if (iVar3 != 0) {
    FUN_00b85350(0x42340000,0x3f800000,0x3dcccccd,0,1,0x3dcccccd);
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
      FUN_00da0f50(0,0,0);
    }
  }
  return;
}

// 00886500  FUN_00886500  size=796  [between]
void __fastcall FUN_00886500(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x314))();
  iVar2 = FUN_00a8c760(0x12);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  switch(param_1[0x187]) {
  case 0:
    iVar2 = FUN_00b80980();
    if (iVar2 == 0) {
      FUN_00aa4080(0xa3,0,0,0x3f800000,0x8000000,0,0x3f800000);
    }
    else {
      iVar2 = FUN_00b7d0c0();
      FUN_00a9f3c0(iVar2 + 0x494,0x17,0,0,0x3f800000,0x8000000,0,0x3f800000);
    }
    pcVar1 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)();
    (**(code **)(*param_1 + 0x39c))();
    FUN_0086f130();
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x41c];
      (*pcVar1)(0x3f800000,0x3ae4c388,0x40490fdb,0);
    }
    iVar2 = param_1[0x463];
    FUN_00e26e90();
    *(undefined4 *)(iVar2 + 0xe4) = 0;
    *(undefined4 *)(iVar2 + 0xe8) = 0;
    *(undefined4 *)(iVar2 + 0xec) = 0;
    param_1[0x9f4] = 0;
    FUN_00b86010(1);
switchD_0088655a_caseD_1:
    param_1[0x469] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      param_1[0x250] = 0;
      iVar2 = FUN_00a8c760(0xb);
      if (iVar2 != 0) {
        param_1[0x250] = 1;
        return;
      }
    }
    else {
LAB_008867da:
      (**(code **)(*param_1 + 0x388))(0);
      FUN_00a8caf0(0x100005,0,0,0);
      if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
        FUN_00da0f50(0,0,0);
        return;
      }
    }
switchD_0088655a_default:
    return;
  case 1:
    goto switchD_0088655a_caseD_1;
  case 2:
    FUN_00aa4080(0xa4,0,0x392ec33e,0x3f800000,0x8000000,0,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)();
    (**(code **)(*param_1 + 0x220))(0x41700000);
    param_1[0x9f4] = 0;
  case 3:
    if ((iVar3 != 0) && (iVar2 = FUN_00a8c760(5), iVar2 != 0)) {
      FUN_00b8ced0(0x40800000,0x3fe66666,0x3f4ccccd,0x3f000000);
    }
    param_1[0x469] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00a952e0(0,0x40800000);
    iVar2 = FUN_00a8c760(0xb);
    if (iVar2 != 0) {
      FUN_00b85350(0x42340000,0x3f800000,0x3dcccccd,0,1,0x3dcccccd);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    goto LAB_008867da;
  default:
    goto switchD_0088655a_default;
  }
}

// 00886A80  FUN_00886a80  size=405  [between]
void __fastcall FUN_00886a80(int *param_1)

{
  int iVar1;
  
  if (param_1[0x9fa] != 0) {
    FUN_0086f130();
  }
  param_1[0x991] = 0;
  param_1[0x95d] = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    if ((((DAT_01bea090 & 0x8000) == 0) &&
        (((iVar1 = FUN_00a8c760(0x17), iVar1 != 0 || (iVar1 = FUN_00a8c760(1), iVar1 != 0)) ||
         (0.0 < (float)param_1[0xd07])))) && (iVar1 = FUN_008649d0(), iVar1 != 0)) {
      FUN_0085e000(0);
      return;
    }
    if ((((param_1[0x187] != 1) || (iVar1 = FUN_0085d070(), iVar1 == 0)) &&
        ((iVar1 = FUN_00a8c760(0), iVar1 == 0 || (iVar1 = FUN_0086efb0(1,1,0), iVar1 == 0)))) &&
       (((iVar1 = FUN_008635c0(&stack0xffffffd4), iVar1 == 0 &&
         (iVar1 = FUN_00a8c760(0), iVar1 != 0)) && (90000.0 < (float)param_1[0x34a])))) {
      iVar1 = FUN_00416d50(7);
      if (((iVar1 == 0) && (iVar1 = FUN_00416d50(0x1b), iVar1 == 0)) &&
         (810000.0 < (float)param_1[0x34a])) {
        FUN_00a8caf0(0x100002,0,0,0);
        return;
      }
      FUN_00a8caf0(0x100001,0,0,0);
    }
  }
  return;
}

// 00886C20  FUN_00886c20  size=534  [between]
void __fastcall FUN_00886c20(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined2 uVar3;
  int iVar4;
  
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    pcVar2 = *(code **)(*param_1 + 0x39c);
    param_1[0x187] = 1;
    (*pcVar2)();
    (**(code **)(*param_1 + 0x394))();
    param_1[0x248] = 0x41f00000;
    param_1[0x250] = 0;
    uVar3 = 0xab;
    if (param_1[0x186] == 0x100029) {
      uVar3 = 0xac;
    }
    FUN_00aa4080(uVar3,0,0x392ec33e,0x3f800000,0x8000000,0,0x3f800000);
    FUN_0086f130();
    param_1[0x9f4] = 0;
    param_1[0x9b5] = 0;
    FUN_00b86010(1);
    iVar4 = FUN_00b86410();
    if (iVar4 != 0) {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x9e,0,0x392ec33e,0x3f800000,0x8000000,0,0x3f800000);
    pcVar2 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)();
    param_1[0x409] = 0;
    param_1[0x9f4] = 0;
  case 3:
    param_1[0x469] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00a952e0(0,0x40800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      return;
    }
    goto LAB_00886e07;
  default:
    goto switchD_00886c5f_default;
  }
  param_1[0x469] = 1;
  BehaviorAppBase::thunk_vf64();
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 == 0) {
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x250] == 0)) {
      param_1[0x250] = 1;
      return;
    }
  }
  else {
LAB_00886e07:
    (**(code **)(*param_1 + 0x388))(0);
    if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
      FUN_00da0f50(0,0,0);
      return;
    }
  }
switchD_00886c5f_default:
  return;
}

// 00886E50  FUN_00886e50  size=337  [between]
void __fastcall FUN_00886e50(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 800);
  param_1[0x991] = 0;
  (*pcVar1)(0x3c888889);
  if ((((((param_1[0x187] != 0) && (iVar2 = FUN_0085d070(), iVar2 == 0)) &&
        (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0)) &&
       ((iVar2 = FUN_00a8c760(0), iVar2 == 0 || (iVar2 = FUN_0086efb0(1,1,0), iVar2 == 0)))) &&
      ((iVar2 = FUN_00a8c760(0), iVar2 == 0 || (iVar2 = FUN_008635c0(&stack0xffffffd4), iVar2 == 0))
      )) && ((iVar2 = FUN_00a8c760(0), iVar2 != 0 && (90000.0 < (float)param_1[0x34a])))) {
    if (((DAT_01bea090._3_1_ & 1) == 0) &&
       ((((byte)DAT_01bea090 & 0x10) == 0 && (810000.0 < (float)param_1[0x34a])))) {
      FUN_00a8caf0(0x100002,0,0,0);
      return;
    }
    FUN_00a8caf0(0x100001,0,0,0);
  }
  return;
}

// 00886FB0  Pl1400::vf3D0  size=707  [class]
undefined4 __fastcall Pl1400::vf3D0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  int *piStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  param_1[0xafa] = 0;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>(param_1 + 0xaf7,1);
  param_1[0xaef] = 0;
  param_1[0xaed] = 0;
  if ((DAT_01bea060 & 0x2000000) == 0) {
    fVar2 = (float)param_1[0xaf4];
    if (!NAN(fVar2) && 0.0 < fVar2 != (fVar2 == 0.0)) {
      param_1[0xaf4] = (int)((float)param_1[0xaf4] - (float)param_1[0x244]);
    }
    if (0.0 < (float)param_1[0xaf6] != ((float)param_1[0xaf6] == 0.0)) {
      param_1[0xaf6] = (int)((float)param_1[0xaf6] - (float)param_1[0x244]);
    }
    iVar3 = (**(code **)(*param_1 + 0x330))();
    if (iVar3 != 0) {
      param_1[0xaf4] = 0x40400000;
    }
    fVar2 = (float)param_1[0xafe];
    if (!NAN(fVar2) && 0.0 < fVar2 != (fVar2 == 0.0)) {
      param_1[0xafe] = (int)((float)param_1[0xafe] - (float)param_1[0x244]);
    }
    if (0.0 < (float)param_1[0xaff] != ((float)param_1[0xaff] == 0.0)) {
      param_1[0xaff] = (int)((float)param_1[0xaff] - (float)param_1[0x244]);
    }
    if (param_1[0x1508] == 0) {
      if (param_1[0xb03] != 0) {
        FUN_00a938c0(1);
      }
      param_1[0xb03] = 0;
    }
    else {
      if (param_1[0xb03] == 0) {
        FUN_00a93910(1);
      }
      param_1[0xb03] = 1;
    }
    if (param_1[0xb03] != 0) {
      piVar7 = (int *)param_1[0xaf8];
      piVar4 = (int *)(param_1[0xafa] * 0x150 + param_1[0xaf8]);
      uVar5 = 0;
      if (piVar7 != piVar4) {
        piVar6 = piVar7 + 0x42;
        piStack_54 = piVar4;
        do {
          iVar3 = *piVar7;
          piStack_5c = piVar7;
          if ((((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 2)) &&
             (((iVar3 != 0x1b0 && (iVar3 != 0x147)) &&
              ((0.0 < (float)param_1[0xaf4] && ((piVar6[-0x1f] & 0x4000000U) == 0)))))) {
            uStack_58 = 0;
            iVar3 = FUN_00a81330();
            uVar5 = uStack_58;
            if (iVar3 != 0) {
              uVar5 = FUN_00a7c8a0();
            }
            if ((float)param_1[0xafe] <= 0.0) {
              param_1[0xafe] = 0x40a00000;
            }
            (**(code **)(*param_1 + 0x198))(uVar5,piVar7,2);
            param_1[0xaff] = 0x41f00000;
            param_1[0xaed] = 1;
            pfVar1 = (float *)(param_1 + 0xaf0);
            *pfVar1 = (float)piVar6[-2];
            param_1[0xaf1] = piVar6[-1];
            param_1[0xaf2] = *piVar6;
            param_1[0xaf3] = piVar6[1];
            fVar8 = (float10)FUN_00ddba30((float)piVar6[-0x36] - (float)param_1[0x25]);
            param_1[0xaf5] = (int)(float)fVar8;
            D3DXMatrixInverse(&piStack_5c,0,param_1 + 4);
            D3DXVec3TransformNormal(pfVar1,pfVar1,&stack0xffffff98);
            uVar5 = 1;
            *pfVar1 = fStack_20 + *pfVar1;
            param_1[0xaf1] = (int)((float)param_1[0xaf1] + fStack_1c);
            param_1[0xaf2] = (int)(fStack_18 + (float)param_1[0xaf2]);
            piVar4 = piStack_54;
          }
          piVar7 = piStack_5c + 0x54;
          piVar6 = piVar6 + 0x54;
        } while (piVar7 != piVar4);
      }
      return uVar5;
    }
  }
  else {
    param_1[0xaf4] = -0x40800000;
    param_1[0xaf6] = -0x40800000;
    param_1[0xafe] = -0x40800000;
  }
  return 0;
}

// 00887280  FUN_00887280  size=125  [callgraph]
undefined4 __fastcall FUN_00887280(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x67c);
  iVar2 = *(int *)(param_1 + 0x684) * 0x150 + iVar1;
  FUN_00445db0();
  while( true ) {
    if (iVar1 == iVar2) {
      return 0;
    }
    if (((*(byte *)(iVar1 + 0x8c) & 4) != 0) && (*(int *)(param_1 + 0x4e4) == 0)) break;
    iVar1 = iVar1 + 0x150;
  }
  FUN_00a8caf0(0x100062,0,0,0);
  FUN_00b7ce10();
  return 1;
}

// 00892EB0  Pl1400::vf3C4  size=1473  [class]
void __fastcall Pl1400::vf3C4(int *param_1)

{
  int iVar1;
  
  if (param_1[0xee6] != 0) {
    iVar1 = FUN_00b7c980(1);
    iVar1 = FUN_00b7c970((float)iVar1);
    FUN_00cb7ae0((float)iVar1);
  }
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = (**(code **)(*param_1 + 0x424))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  param_1[0x2de] = 0;
  param_1[0x2e0] = 0;
  param_1[0x2e1] = 0;
  param_1[0x9b6] = 0;
  param_1[0x1508] = 0;
  param_1[0x501] = 0;
  if (param_1[0x1014] != 0) {
    DAT_01dc08c8 = 0;
    FUN_00cbc9c0(1,0);
  }
  param_1[0x1014] = 0;
  param_1[0x1015] = 0;
  param_1[0x2e5] = 0;
  param_1[0x1518] = 0;
  FUN_008647e0();
  switch(param_1[0x186]) {
  case 0x100000:
    FUN_00878ee0();
    break;
  case 0x100001:
    FUN_00879080();
    break;
  case 0x100002:
    FUN_00879210();
    break;
  case 0x100003:
  case 0x100009:
    FUN_0086a070();
    break;
  case 0x100004:
    FUN_0086a940();
    break;
  case 0x100005:
  case 0x10000a:
    FUN_0086af50();
    break;
  case 0x100006:
  case 0x10000b:
    FUN_008793e0();
    break;
  case 0x100007:
    FUN_0086f290();
    break;
  case 0x100008:
    FUN_00879a80();
    break;
  case 0x10000c:
    FUN_0086b320();
    break;
  case 0x10000d:
    FUN_0087a1a0();
    break;
  case 0x10000e:
    FUN_0087a330();
    break;
  case 0x10000f:
    FUN_0087a600();
    break;
  case 0x100010:
    FUN_0087acb0();
    break;
  case 0x100011:
    FUN_0087b7b0();
    break;
  case 0x100012:
    FUN_0087c000();
    break;
  case 0x100013:
    FUN_0087c660();
    break;
  case 0x100014:
    FUN_0087ca10();
    break;
  case 0x100015:
    FUN_0087cee0();
    break;
  case 0x100016:
    FUN_0087d390();
    break;
  case 0x100017:
    FUN_0086c430();
    break;
  case 0x100018:
    FUN_0087ddc0();
    break;
  case 0x100019:
    FUN_0087e4c0();
    break;
  case 0x10001a:
    FUN_0087f200();
    break;
  case 0x10001b:
    FUN_0087ffb0();
    break;
  case 0x10001c:
    FUN_00880160();
    break;
  case 0x10001d:
    FUN_00880960();
    break;
  case 0x10001e:
  case 0x10001f:
  case 0x100020:
  case 0x100021:
  case 0x100022:
  case 0x100023:
    FUN_00885cf0();
    break;
  case 0x100024:
  case 0x100025:
  case 0x100026:
  case 0x100027:
    FUN_0086e570();
    break;
  case 0x100028:
  case 0x100029:
    FUN_00886a80();
    break;
  case 0x10002a:
    FUN_00886e50();
    break;
  case 0x10002b:
    FUN_00944ed0();
    break;
  case 0x10002c:
    FUN_00944f10();
    break;
  case 0x10002d:
    FUN_00944f50();
    break;
  case 0x10002e:
    FUN_0085cd90();
    break;
  case 0x10002f:
    FUN_0085cdb0();
    break;
  case 0x100030:
    FUN_0085cdd0();
    break;
  case 0x100031:
    FUN_00862970();
    break;
  case 0x100032:
    FUN_00862a40();
    break;
  case 0x100033:
  case 0x100034:
    FUN_00863380();
    break;
  case 0x100035:
    FUN_0085b030();
    break;
  case 0x100036:
    FUN_0086c6f0();
    break;
  case 0x100037:
    FUN_0086c860();
    break;
  case 0x100038:
    FUN_0086ca70();
    break;
  case 0x100039:
    FUN_00862060();
    break;
  case 0x10003a:
    FUN_0086cc70();
    break;
  case 0x10003b:
    FUN_0086cde0();
    break;
  case 0x10003c:
    FUN_0086cf50();
    break;
  case 0x10003d:
    FUN_0086d0c0();
    break;
  case 0x10003e:
    FUN_0086d1d0();
    break;
  case 0x10003f:
    FUN_008620c0();
    break;
  case 0x100040:
    FUN_0086d2c0();
    break;
  case 0x100041:
    FUN_0086d430();
    break;
  case 0x100042:
    FUN_0086d570();
    break;
  case 0x100043:
    FUN_00862120();
    break;
  case 0x100044:
    FUN_00862240();
    break;
  case 0x100045:
    FUN_00862360();
    break;
  case 0x100046:
    FUN_008624e0();
    break;
  case 0x100047:
    FUN_008844b0();
    break;
  case 0x100048:
    FUN_0085ca00();
    break;
  case 0x100049:
    FUN_0085ca90();
    break;
  case 0x10004a:
    FUN_008625f0();
    break;
  case 0x10004b:
  case 0x10004c:
    FUN_00862770();
    break;
  case 0x10004d:
    FUN_0086f720();
    break;
  case 0x10004e:
    FUN_0086f830();
    break;
  case 0x10004f:
    FUN_0086f980();
    break;
  case 0x100050:
    FUN_0086fae0();
    break;
  case 0x100051:
  case 0x100052:
    FUN_00865970();
    break;
  case 0x100053:
    FUN_00865d90();
    break;
  case 0x100054:
    FUN_0086fc30();
    break;
  case 0x100055:
    FUN_0086fec0();
    break;
  case 0x100056:
    FUN_00870030();
    break;
  case 0x100057:
    FUN_00866120();
    break;
  case 0x100058:
    FUN_00866230();
    break;
  case 0x100059:
    FUN_008701a0();
    break;
  case 0x10005a:
    FUN_00866690();
    break;
  case 0x10005b:
    FUN_0085e790();
    break;
  case 0x10005c:
    FUN_0085e960();
    break;
  case 0x10005d:
    FUN_00866c50();
    break;
  case 0x10005e:
    FUN_0085eaf0();
    break;
  case 0x10005f:
    FUN_0085ecc0();
    break;
  case 0x100060:
    FUN_008671e0();
    break;
  case 0x100061:
    FUN_0085e150();
    break;
  case 0x100066:
  case 0x100067:
    FUN_00880580();
    break;
  case 0x10006a:
    FUN_0070b440();
    break;
  case 0x10006b:
    FUN_00752650();
    break;
  case 0x10006c:
    FUN_007a1480();
    break;
  case 0x10006d:
    FUN_007a18d0();
    break;
  case 0x10006e:
    FUN_007a1970();
    break;
  case 0x10006f:
    FUN_008212c0();
    break;
  case 0x100070:
    FUN_00840690();
    break;
  case 0x100071:
    FUN_008406b0();
    break;
  case 0x100072:
    FUN_008406d0();
    break;
  case 0x100073:
    FUN_008406f0();
    break;
  case 0x100074:
    FUN_008407a0();
    break;
  case 0x100075:
    FUN_00840c90();
    break;
  case 0x100076:
    FUN_008412d0();
    break;
  case 0x100077:
    FUN_00841ad0();
    break;
  case 0x100079:
    FUN_008433b0();
    break;
  case 0x10007a:
    FUN_00843110();
    break;
  case 0x10007b:
    FUN_00843710();
    break;
  case 0x10007e:
    FUN_00809b30();
    break;
  case 0x10007f:
    FUN_0080a030();
  }
  iVar1 = FUN_00a8cab0();
  if ((iVar1 != 0x100064) && ((DAT_01bea090 & 0x8000000) != 0)) {
    FUN_0086f130();
    FUN_0085db00(1);
    FUN_00a8caf0(0x100064,0,0,0);
  }
  return;
}

// 00893680  FUN_00893680  size=1015  [between]
void __fastcall FUN_00893680(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0xeda] = 1;
  param_1[0x151a] = 1;
  param_1[0x991] = 0;
  param_1[0x998] = 1;
  (*pcVar1)();
  switch(param_1[0x187]) {
  case 0:
    uVar2 = 0x3e2aaaab;
    if (param_1[0x9a4] != 0) {
      uVar2 = 0;
    }
    param_1[0x9a4] = 0;
    if (param_1[0x2dd] == 0) {
      uVar6 = 0;
      uVar5 = 0x14;
    }
    else {
      uVar6 = 0xbf800000;
      uVar5 = 0x10;
    }
    FUN_00aa4080(uVar5,0,uVar2,0x3f800000,0x8000000,uVar6,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0085db00(1);
    break;
  case 1:
    break;
  case 2:
    uVar2 = 0x3d088889;
    if (param_1[0x9a4] != 0) {
      uVar2 = 0;
    }
    param_1[0x9a4] = 0;
    if (param_1[0x2dd] == 0) {
      uVar6 = 0;
      uVar5 = 0x15;
    }
    else {
      uVar6 = 0xbf800000;
      uVar5 = 0x11;
    }
    FUN_00aa4080(uVar5,0,uVar2,0x3f800000,0x3c000,uVar6,0x3f800000);
    FUN_0085db00(1);
    FUN_00b895d0();
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00893830;
  case 3:
LAB_00893830:
    FUN_00b94790(0x3f800000,0x3f800000);
    goto switchD_008936d4_default;
  case 4:
    if (param_1[0x2dd] == 0) {
      iVar3 = FUN_00b95e60();
      if (iVar3 == 2) {
        FUN_00aa4080(0x16,0,0x3daaaaab,0x3f800000,0x8000000,0,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else {
        FUN_00aa4080(0x17,0,0x3daaaaab,0x3f800000,0x8000000,0,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    else {
      iVar3 = FUN_00b95e60();
      if (iVar3 == 2) {
        FUN_00aa4080(0x12,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else {
        FUN_00aa4080(0x13,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    goto LAB_00893905;
  case 5:
LAB_00893905:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
    }
  default:
    goto switchD_008936d4_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  fVar4 = (float10)FUN_00a95c80(0);
  if (fVar4 < (float10)2.0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_008936d4_default:
  pcVar1 = *(code **)(*param_1 + 0x308);
  param_1[0x23d] = param_1[0x34c];
  (*pcVar1)(0x3e99999a,0x3ae4c388,0x3f060a92,0);
  iVar3 = FUN_00a8cac0();
  if (iVar3 != 5) {
    if (param_1[0x165] == 1) {
      FUN_004039a0(0xc,param_1,0);
      FUN_00a8c930(0,&stack0xfffffe90);
    }
    if (param_1[0x166] == 1) {
      FUN_004039a0(0xc,param_1,0);
      FUN_00a8c930(0,&stack0xfffffe90);
    }
  }
  return;
}

// 00893AA0  Pl1400::vf134  size=183  [class]
undefined4 __fastcall Pl1400::vf134(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1058) != 0) {
    FUN_008781b0();
  }
  FUN_00a7c950();
  if ((*(int *)(param_1 + 0x3ee0) == 0) && (*(int *)(param_1 + 0x3f80) == 0)) {
    *(undefined4 *)(param_1 + 0x2bb8) = 0;
    *(undefined4 *)(param_1 + 0x2c38) = 0;
    *(undefined4 *)(param_1 + 0xf58) = 0;
    if (((DAT_01bea090 & 0x10) == 0) && ((DAT_01bea060 & 0x2000000) == 0)) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x648) + 0x18);
      for (iVar1 = *(int *)(*(int *)(param_1 + 0x648) + 0x14); iVar1 != iVar2;
          iVar1 = *(int *)(iVar1 + 0xc)) {
        if (((((*(byte *)(iVar1 + 4) & 1) != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
            (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (FUN_00a7c8a0(), (DAT_01bea090 & 0x2000) == 0))
        {
          FUN_00a7c960(iVar1);
        }
      }
    }
  }
  return 0;
}

// 00893B60  Pl1400::vf40C  size=98  [class]
void __fastcall Pl1400::vf40C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_00a8c2e0();
  puVar1 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = StateMachineFactoryPl1400::vftable;
  }
  *(undefined4 **)(param_1 + 0x7d4) = puVar1;
  iVar2 = FUN_00dd3500(0x6c0,&DAT_01b7bd48);
  if (iVar2 != 0) {
    uVar3 = StateMachineContextPl1400::StateMachineContextPl1400
                      (*(undefined4 *)(param_1 + 0x7d4),param_1);
    *(undefined4 *)(param_1 + 2000) = uVar3;
    return;
  }
  *(undefined4 *)(param_1 + 2000) = 0;
  return;
}

// 00893BD0  Pl1400::vf3CC  size=2969  [class]
undefined4 __fastcall Pl1400::vf3CC(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iStack_168;
  int iStack_160;
  undefined4 uStack_15c;
  char cStack_150;
  byte bStack_14f;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  float fStack_130;
  uint uStack_d4;
  uint uStack_d0;
  
  param_1[0xe17] = 0;
  param_1[0x2e3] = 0;
  if (param_1[0x139] != 0) {
    return 0;
  }
  FUN_00b7a810();
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  iVar3 = FUN_00885750();
  if (iVar3 != 0) {
    return 1;
  }
  if ((((byte)DAT_01bea094 & 0x20) == 0) &&
     ((iVar3 = FUN_00a8ef10(), iVar3 != 0 || (iVar3 = FUN_00a8c760(6), iVar3 != 0)))) {
    if (param_1[0x1517] != 0) {
      FUN_00a938c0(0);
      param_1[0x1517] = 0;
    }
    FUN_00887280();
    return 0;
  }
  if (param_1[0x1517] == 0) {
    FUN_00a93910(0);
    param_1[0x1517] = 1;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    return 0;
  }
  if ((DAT_01bea060 & 0x8000000) != 0) {
    return 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x32c))();
  bVar8 = iVar3 != 0;
  piVar7 = (int *)param_1[0x19f];
  piVar6 = piVar7 + param_1[0x1a1] * 0x54;
  iVar4 = FUN_00a8cab0();
  iStack_168 = -1;
  FUN_00445db0();
  iVar3 = -1;
  if (piVar7 == piVar6) {
    return 0;
  }
  bVar1 = false;
  do {
    iVar5 = piVar7[1];
    if ((*piVar7 != 0x147) && (iVar3 <= iVar5)) {
      FUN_00448f50(piVar7);
      bVar1 = true;
      iVar3 = iVar5;
    }
    piVar7 = piVar7 + 0x54;
  } while (piVar7 != piVar6);
  if (!bVar1) {
    return 0;
  }
  iVar3 = FUN_00a8f040(&iStack_160);
  if (iVar3 != 0) {
    return 0;
  }
  bVar1 = 0.0 < (float)param_1[0xb04];
  iVar3 = FUN_004025b0();
  if (iVar3 == 0) {
    return 0;
  }
  param_1[0xa00] = iStack_140;
  param_1[0xa01] = iStack_13c;
  param_1[0xa02] = iStack_138;
  param_1[0xa03] = iStack_134;
  FUN_00bd9e50();
  piVar7 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if (((iVar3 != 0) && (piVar7 = (int *)FUN_00a7c8a0(), piVar7 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar7 + 0x1a0))(&iStack_160,param_1[0x13c]), iVar3 != 0)) {
    return 0;
  }
  if (cStack_150 != '\0') {
    (**(code **)(*param_1 + 0x21c))(piVar7,cStack_150,0x3c23d70a,0);
  }
  (**(code **)(*param_1 + 0x198))(piVar7,&iStack_160,1);
  if ((uStack_d4 & 0x400000) != 0) {
    return 0;
  }
  if ((uStack_d4 & 0x10000000) == 0) {
    FUN_00bc34f0();
  }
  if (((bVar1) && ((uStack_d4 & 0x10000000) != 0)) && (bStack_14f < 6)) {
    uStack_15c = 0;
  }
  (**(code **)(*param_1 + 0x30c))(uStack_15c,0);
  if (((!bVar1) && ((uStack_d4 & 0x10000000) != 0)) && (bStack_14f < 6)) {
    param_1[0xb04] = 0x41200000;
  }
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
    piVar7 = (int *)FUN_00a7c8a0();
    iVar3 = (**(code **)(*piVar7 + 0x1b0))(param_1[0x13c]);
    if (iVar3 != 0) {
      return 0;
    }
  }
  fVar9 = (float10)FUN_00ddba30(fStack_130 - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar9;
  param_1[0xa04] = param_1[0xa04] + (uint)bStack_14f;
  param_1[0x9fb] = (int)fStack_130;
  bVar2 = false;
  if ((uStack_d4 & 0x10000000) == 0) {
    if (bStack_14f < 4) {
LAB_00893f17:
      iStack_168 = 0;
    }
    else {
      if (5 < bStack_14f) goto LAB_00893f23;
      iStack_168 = 1;
    }
    if (5 < bStack_14f) goto LAB_00893f23;
LAB_00893f31:
    if (7 < bStack_14f) goto LAB_00893f35;
  }
  else {
    if (bStack_14f < 6) goto LAB_00893f17;
LAB_00893f23:
    if (bStack_14f < 8) {
      if (iStack_168 < 2) {
        iStack_168 = 2;
      }
      goto LAB_00893f31;
    }
LAB_00893f35:
    if ((bStack_14f < 0xb) && (iStack_168 < 4)) {
      iStack_168 = 4;
    }
  }
  if (((uStack_d0 & 0x2000000) != 0) && (iStack_168 < 4)) {
    iStack_168 = 4;
  }
  if (9 < param_1[0xa05]) {
    bVar1 = false;
    param_1[0xa05] = 0;
    if (iStack_168 < 1) {
      iStack_168 = 1;
    }
  }
  if (5 < param_1[0xa06]) {
    bVar1 = false;
    param_1[0xa06] = 0;
    if (iStack_168 < 2) {
      iStack_168 = 2;
    }
  }
  if ((uStack_d4 & 0x200000) != 0) {
    iStack_168 = 10;
    FUN_0085c300();
  }
  if ((uStack_d4 & 0x20) != 0) {
    iStack_168 = 0xb;
  }
  if ((bVar1) && (iVar3 = (**(code **)(*param_1 + 0x32c))(), iVar3 == 0)) {
    iStack_168 = 0;
  }
  if (((uStack_d4 & 0x800) != 0) && (iStack_168 = 6, iVar4 == 0x100059)) {
    iStack_168 = 5;
  }
  if ((((uStack_d4 & 0x20000) != 0) && (iVar3 = FUN_00416d50(0), iVar3 == 0)) &&
     (param_1[0xe18] == 0)) {
    param_1[0xe17] = 1;
  }
  iVar3 = FUN_00a8c760(0x1a);
  if (iVar3 != 0) {
    iStack_168 = 8;
  }
  iVar3 = FUN_00a8c760(0x1b);
  if (iVar3 != 0) {
    iStack_168 = 9;
  }
  if ((uStack_d0 & 0x800000) != 0) {
    iStack_168 = 7;
    param_1[0xef0] = 0;
  }
  if ((uStack_d0 & 0x200000) != 0) {
    iStack_168 = 7;
    param_1[0xef0] = 1;
  }
  iVar3 = FUN_00a8c760(8);
  if ((iVar3 != 0) || ((param_1[0xc61] != 0 && (bStack_14f < 6)))) {
    iStack_168 = 0;
    bVar8 = false;
  }
  iVar3 = FUN_009c4c10();
  if (((iVar3 == 0) && (iVar3 = FUN_00a8c760(0x3c), iVar3 != 0)) && (iStack_168 != 0xb)) {
    if (1 < iStack_168) {
      FUN_00dda360(0,0x3f000000,0x3f000000,6);
    }
    iStack_168 = 0;
    bVar8 = false;
  }
  if ((((uStack_d4 & 0x10000000) != 0) && (bStack_14f < 6)) &&
     (((bVar8 || (iVar3 = (**(code **)(*param_1 + 0x1fc))(), iVar3 != 0)) && (iStack_168 < 2)))) {
    iStack_168 = 0;
    bVar8 = false;
    bVar2 = true;
  }
  iVar3 = (**(code **)(*param_1 + 0x368))();
  if ((iVar3 != 0) && ((iStack_168 == 0 || (iStack_168 == 1)))) {
    iStack_168 = 2;
  }
  if (iStack_160 == 0xe2) {
    iStack_168 = 3;
  }
  iVar3 = FUN_009c4c10();
  if (((iVar3 != 0) || (iVar3 = FUN_00a8c760(0x3c), iVar3 == 0)) && ((uStack_d0 & 0x20000000) != 0))
  {
    iStack_168 = 5;
  }
  if (iStack_160 == 0xd9) {
    iStack_168 = 6;
  }
  else if (iStack_168 == 0) {
    iVar3 = FUN_00a8c760(8);
    if (iVar3 == 0) {
      param_1[0xa05] = param_1[0xa05] + 1;
    }
    (**(code **)(*param_1 + 0x394))();
    FUN_00dda360(0,0x3e99999a,0,3);
  }
  iVar3 = 0;
  iVar5 = (**(code **)(*param_1 + 0x1d8))();
  if (iVar5 == 0) {
    if (iStack_168 == 1) {
      iVar3 = (**(code **)(*param_1 + 0x1d8))();
      param_1[0xa06] = param_1[0xa06] + 1;
      if (iVar3 == 0) {
        FUN_00a8caf0(0x10004d,0,0,0);
        uVar12 = 4;
        uVar11 = 0x3e99999a;
        uVar10 = 0x3ecccccd;
        iVar3 = iStack_168;
      }
      else {
        (**(code **)(*param_1 + 0x394))();
        uVar12 = 3;
        uVar11 = 0;
        uVar10 = 0x3e99999a;
        iVar3 = iStack_168;
      }
LAB_00894315:
      FUN_00dda360(0,uVar10,uVar11,uVar12);
    }
    else {
      if (iStack_168 == 2) {
        FUN_00a8caf0(0x10004e,0,0,0);
        uVar12 = 6;
        uVar11 = 0x3ecccccd;
        uVar10 = 0x3f19999a;
        iVar3 = iStack_168;
        goto LAB_00894315;
      }
      if (iStack_168 == 3) {
        iVar3 = 2;
        FUN_00a8caf0(0x100052,0,0,0);
        uVar12 = 7;
        uVar11 = 0x3f000000;
        uVar10 = 0x3f333333;
        goto LAB_00894315;
      }
      if (iStack_168 == 4) {
        iVar3 = 3;
        uVar10 = 0x100051;
LAB_008942f9:
        FUN_00a8caf0(uVar10,0,0,0);
LAB_00894300:
        uVar12 = 8;
        uVar11 = 0x3f19999a;
        uVar10 = 0x3f4ccccd;
        goto LAB_00894315;
      }
      if (iStack_168 == 5) {
        iVar3 = 3;
        uVar10 = 0x100053;
        goto LAB_008942f9;
      }
      if (iStack_168 == 10) {
        iVar3 = 0;
        if (iVar4 != 0x10004f) {
          uVar10 = 0x10004f;
          goto LAB_008942f9;
        }
        goto LAB_00894300;
      }
      if (iStack_168 == 0xb) {
        iVar3 = 0;
        if (iVar4 != 0x100050) {
          uVar10 = 0x100050;
          goto LAB_008942f9;
        }
        goto LAB_00894300;
      }
    }
    if ((uStack_d4 & 0x80) == 0) {
      FUN_00b7a7e0(iVar3);
      iVar3 = FUN_00b7a840();
      if ((iVar3 != 0) || (iStack_168 == 6)) {
        FUN_00a8caf0(0x100059,0,0,0);
        FUN_00dda360(0,0x3f4ccccd,0x3f19999a,8);
      }
    }
    if ((iStack_168 == 8) || (iStack_168 == 9)) {
      FUN_00a8caf0(0x10005d,0,0,0);
      FUN_00dda360(0,0x3f4ccccd,0x3f19999a,8);
    }
  }
  iVar3 = (**(code **)(*param_1 + 0x1d8))();
  if (iVar3 == 0) goto LAB_008945cb;
  if (!bVar2) {
    param_1[0xa07] = param_1[0xa07] + 1;
  }
  iVar3 = FUN_009c4c10();
  if ((iVar3 == 0) && (iVar3 = FUN_00a8c760(0x3c), iVar3 != 0)) {
    param_1[0xa07] = 0;
  }
  if (iStack_168 != 10) {
    if ((uStack_d4 & 0x10000000) == 0) {
      uVar10 = 0x103;
    }
    else {
      if (bVar2) goto LAB_00894468;
      uVar10 = 0x104;
    }
    FUN_00aa4080(uVar10,3,0,0x3f800000,0x8000010,0,0x3f800000);
  }
LAB_00894468:
  if ((4 < param_1[0xa07]) && (param_1[0xa08] == 0)) {
    FUN_00a8caf0(0x10005e,0,0,0);
    param_1[0xa08] = 1;
  }
  if (iStack_168 == 2) {
    FUN_00a8caf0(0x10005e,0,0,0);
    uVar11 = 0x3f19999a;
    uVar10 = 0x3f333333;
LAB_0089454e:
    param_1[0xa08] = 1;
    FUN_00dda360(0,uVar10,uVar11,8);
  }
  else {
    if (iStack_168 == 5) {
      FUN_00a8caf0(0x10005e,0,0,0);
      uVar11 = 0x3f19999a;
      uVar10 = 0x3f333333;
      goto LAB_0089454e;
    }
    if (iStack_168 == 3) {
      FUN_00a8caf0(0x10005e,0,0,0);
      uVar11 = 0x3f19999a;
      uVar10 = 0x3f333333;
      goto LAB_0089454e;
    }
    if ((iStack_168 == 4) || (iStack_168 == 6)) {
      FUN_00a8caf0(0x10005e,0,0,0);
      uVar10 = 0x3f4ccccd;
      uVar11 = 0x3f4ccccd;
      goto LAB_0089454e;
    }
  }
  if ((uStack_d0 & 0x1000000) != 0) {
    FUN_00dda360(0,0x3f4ccccd,0x3f4ccccd,8);
    FUN_00a8caf0(0x10005c,0,0,0);
    param_1[0xa08] = 1;
  }
  iVar3 = (**(code **)(*param_1 + 0x32c))();
  if ((iVar3 != 0) && (param_1[0xa08] == 0)) {
    bVar8 = false;
  }
LAB_008945cb:
  if (iStack_168 == 7) {
    FUN_00dda360(0,0x3f4ccccd,0x3f4ccccd,8);
    FUN_00a8caf0(0x10005a,0,0,0);
    iVar3 = (**(code **)(*param_1 + 0x32c))();
    if (iVar3 != 0) {
      bVar8 = true;
    }
  }
  if ((uStack_d4 & 4) != 0) {
    param_1[0x21c] = -1;
  }
  iVar3 = FUN_00b7c970();
  if ((0 < iVar3) && (param_1[0x2e3] == 0)) {
    iVar3 = FUN_00b7cc20();
    if (iVar3 == 0) {
      param_1[0xe49] = 0;
    }
    else if (param_1[0xe49] == 0) {
      FUN_00b7ab80(0x42340000,0x3dcccccd);
      param_1[0xe49] = 1;
      FUN_00da0f50(1,0x42340000,0);
      param_1[0x429] = 0;
    }
    if (bVar8) {
      FUN_00864be0(1,0,0);
    }
    param_1[0xc6a] = 0x43340000;
    return 1;
  }
  FUN_00b7ab80(0x42340000,0x3dcccccd);
  FUN_00a8caf0(0x100062,0,0,0);
  FUN_00b7ce10();
  iVar3 = FUN_00416d50(0x3c);
  if ((iVar3 != 0) && (param_1[0x2e3] != 0)) {
    iVar3 = FUN_00b7c970();
    FUN_00b877b0(1 - iVar3,0);
    FUN_00a8caf0(0x100053,0,0,0);
    param_1[0x2e2] = 1;
    return 1;
  }
  return 1;
}

// 0089C390  FUN_0089c390  size=1404  [callgraph]
undefined4
FUN_0089c390(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  int *piVar7;
  uint uVar8;
  float10 fVar9;
  undefined *puVar10;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  int iStack_118;
  int iStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int *piStack_e4;
  undefined1 auStack_e0 [4];
  float fStack_dc;
  float fStack_d4;
  float fStack_cc;
  undefined1 auStack_c0 [12];
  float fStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [76];
  
  if (((int)DAT_01bea090 < 0) || ((DAT_01bea090 & 0x800) != 0)) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar10 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar10);
    uVar8 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar7 = *(int **)(uVar8 + 0x5e0);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar10 = &DAT_01b35b20;
    (**(code **)(*piVar7 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar10);
    piVar7 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar7);
  }
  iVar3 = piVar7[0x13c];
  iVar2 = (**(code **)(*piVar7 + 0x84))(0x40490fdb,0x41200000,param_5,*(int *)(uVar8 + 0x32c) == 0);
  iVar3 = FUN_0088faa0(param_1,iVar3,*(undefined4 *)(iVar2 + 4));
  if (*(int *)(iVar3 + 0xc) < 1) {
    if (*(int *)(uVar8 + 0x358) == 0) {
      return 0;
    }
    DAT_01dc08bc = 0;
    *(undefined4 *)(uVar8 + 0x358) = 0;
    return 0;
  }
  if (((*(byte *)(piVar7 + 0x33f) & 0x20) == 0) && (param_4 == 0)) {
    if (*(int *)(uVar8 + 0x358) == 0) {
      FUN_0085c270();
    }
    *(undefined4 *)(uVar8 + 0x358) = 1;
    piVar7[0x2ee] = 0x40000000;
    piVar7[0x2ef] = 2;
    return 0;
  }
  iStack_118 = 0;
  iStack_114 = *(int *)(uVar8 + 0x348);
  if (iStack_114 == iStack_114 + *(int *)(uVar8 + 0x350) * 4) {
    return 0;
  }
  do {
    iVar3 = FUN_00a81330();
    if ((((iVar3 != 0) && ((*(byte *)(iVar3 + 0x28) & 2) == 0)) &&
        (piStack_e4 = (int *)FUN_00a7c8a0(), piStack_e4 != (int *)0x0)) &&
       (((piStack_e4[0x1a4] == 0 && (iVar2 = FUN_00a7c800(), iVar2 != 0)) &&
        ((**(code **)(*piStack_e4 + 0x204))(&fStack_130),
        (fStack_130 - (float)piVar7[0x14]) * (fStack_130 - (float)piVar7[0x14]) +
        (fStack_12c - (float)piVar7[0x15]) * (fStack_12c - (float)piVar7[0x15]) +
        (fStack_128 - (float)piVar7[0x16]) * (fStack_128 - (float)piVar7[0x16]) <= 100.0)))) {
      fVar9 = (float10)FUN_009f8c60(iVar2 + 0x50);
      iVar2 = (**(code **)(*piVar7 + 0x84))();
      FUN_00ddba30((float)fVar9 - *(float *)(iVar2 + 4));
      iStack_118 = iVar3;
    }
    iStack_114 = iStack_114 + 4;
  } while (iStack_114 != *(int *)(uVar8 + 0x348) + *(int *)(uVar8 + 0x350) * 4);
  if (iStack_118 == 0) {
    return 0;
  }
  piVar4 = (int *)FUN_00a7c8a0();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  puVar10 = &DAT_01be9ca8;
  (**(code **)(*piVar4 + 4))(&DAT_01be9ca8);
  iVar3 = FUN_00dd6d80(puVar10);
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = FUN_00a7c7f0();
  FUN_00a7c960(uVar5);
  if (piVar4[0x21c] == 2) {
    FUN_00a7c940(piVar4 + 0x23e);
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      return 0;
    }
  }
  piVar7[0x2ee] = 0;
  FUN_00c2de00();
  if (*(int *)(uVar8 + 0x330) != 8) {
    iVar3 = (**(code **)(*piVar7 + 800))(0x3c888889);
    if ((iVar3 == 0) || (*(int *)(uVar8 + 0x188) != 0)) {
      fStack_110 = (float)piVar7[0x10];
      fStack_10c = (float)piVar7[0x11];
      fStack_108 = (float)piVar7[0x12];
      fStack_104 = (float)piVar7[0x13];
      iVar3 = FUN_00a81330();
      fStack_130 = fStack_110;
      fStack_128 = fStack_108;
      fStack_f4 = fStack_104;
      if (iVar3 != 0) {
        uVar5 = FUN_00a7c8a0();
        iVar3 = FUN_00860b80(uVar5);
        fStack_130 = fStack_110;
        fStack_128 = fStack_108;
        fStack_f4 = fStack_104;
        if (iVar3 != 0) {
          pfVar6 = (float *)FUN_00ac70a0();
          fStack_10c = pfVar6[1];
          fStack_130 = *pfVar6;
          fStack_128 = pfVar6[2];
          fStack_f4 = pfVar6[3];
        }
      }
      fStack_12c = fStack_10c + 1.0;
      fStack_124 = fStack_d4 + fStack_f4;
      fStack_fc = fStack_10c - 10.0;
      fStack_f4 = fStack_f4 - fStack_d4;
      fStack_100 = fStack_130;
      fStack_f8 = fStack_128;
      FUN_00445d40(&fStack_130,&fStack_100,0xffff0006,0,0x60,0,"datsuTransitionCheck",0);
      iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_2(auStack_e0,auStack_c0,0,0,auStack_90);
      if (iVar3 == 0) {
        fStack_dc = (float)piVar7[0x11];
      }
      fStack_130 = (float)piVar7[0x10];
      fStack_fc = (float)piVar7[0x11];
      fStack_128 = (float)piVar7[0x12];
      fStack_f4 = (float)piVar7[0x13];
      fStack_12c = fStack_fc - 1.5;
      fStack_124 = fStack_f4 - fStack_b4;
      fStack_100 = fStack_130;
      fStack_f8 = fStack_128;
      fStack_cc = fStack_dc;
      FUN_00445d40(&fStack_100,&fStack_130,0xffff0006,0,0x60,0,"datsuTransitionCheck",0);
      iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_2(auStack_b0,auStack_a0,0,0,auStack_50);
      if (((iVar3 != 0) && (fStack_10c < (float)piVar7[0x11] + 1.5)) &&
         (fStack_10c - fStack_cc < 1.5)) {
        *(undefined4 *)(uVar8 + 0x358) = 0;
        uVar5 = 6;
        goto LAB_0089c655;
      }
      *(undefined4 *)(uVar8 + 0x358) = 0;
    }
    else {
      pfVar6 = (float *)FUN_00ac70a0();
      fStack_130 = *pfVar6;
      fStack_12c = pfVar6[1];
      fStack_128 = pfVar6[2];
      fStack_124 = pfVar6[3];
      fVar1 = (float)piVar7[0x11];
      *(undefined4 *)(uVar8 + 0x358) = 0;
      if (fStack_12c - fVar1 <= 1.8) {
        uVar5 = 6;
        goto LAB_0089c655;
      }
    }
  }
  uVar5 = 5;
LAB_0089c655:
  FUN_00d82510(uVar5,param_3);
  *(undefined4 *)(uVar8 + 0x2f4) = 1;
  return 1;
}

// 0089C910  Pl1400::vf3C8  size=17656  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Pl1400::vf3C8(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float unaff_EBX;
  float unaff_ESI;
  short sVar9;
  uint uVar10;
  float10 fVar11;
  float10 extraout_ST0;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  undefined *puVar15;
  int *local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  char *pcStack_50;
  undefined1 *puStack_4c;
  undefined1 *local_48;
  int *piStack_44;
  float fStack_34;
  int in_stack_ffffffd0;
  undefined4 local_20;
  int *local_1c;
  
  switch(param_1[0x186]) {
  case 0x100000:
    FUN_00869f80();
    return;
  case 0x100001:
    FUN_00861380();
    return;
  case 0x100002:
    FUN_00893680();
    return;
  case 0x100003:
  case 0x100009:
    FUN_0086a330();
    return;
  case 0x100004:
    FUN_0086ab10();
    return;
  case 0x100005:
  case 0x10000a:
    FUN_0086b120();
    return;
  case 0x100006:
  case 0x10000b:
    FUN_00879570();
    return;
  case 0x100007:
    FUN_00b94790();
    iVar6 = FUN_00b7d0b0();
    if (iVar6 != 0) {
      FUN_00b7d0b0();
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))();
        iVar6 = FUN_00dd6d80();
        if (iVar6 != 0) {
          FUN_00a95ee0();
        }
      }
    }
    return;
  case 0x100008:
    FUN_00879c30();
    return;
  case 0x10000c:
    FUN_008615d0();
    return;
  case 0x10000d:
    FUN_008619c0();
    return;
  case 0x10000e:
    FUN_0087a4b0();
    return;
  case 0x10000f:
    FUN_0087a8e0();
    return;
  case 0x100010:
    FUN_0087afa0();
    return;
  case 0x100011:
    FUN_0087b9c0();
    return;
  case 0x100012:
    FUN_0087c190();
    return;
  case 0x100013:
    (**(code **)(*param_1 + 0x314))();
    (**(code **)(*param_1 + 0x314))();
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x318))();
    }
    FUN_00b884c0();
    if (param_1[0x187] == 0) {
      param_1[0x250] = 0;
      FUN_0086f130();
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00aa4080();
      local_1c = (int *)0x3d888889;
      local_20 = 0;
      FUN_00864400();
      param_1[0x25] = param_1[0x97f];
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x23d] = param_1[0x97f];
      FUN_00b86010();
      local_1c = (int *)0x393702d3;
      local_20 = 0x3f800000;
      FUN_00b7b270();
      param_1[0x988] = param_1[0x988] + 1;
      if (5 < param_1[0x988]) {
        param_1[0x988] = 0;
      }
      FUN_00b7d600();
      param_1[0x9b5] = 0;
      param_1[0x2dd] = 0;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    param_1[0x469] = 1;
    param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      local_1c = (int *)0x393702d3;
      local_20 = 0x3e99999a;
      FUN_00b7b270();
    }
    local_1c = (int *)0x87c990;
    FUN_00b94790();
    iVar6 = FUN_00b7d0b0();
    if (iVar6 != 0) {
      FUN_00b7d0b0();
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))();
        iVar6 = FUN_00dd6d80();
        if (iVar6 != 0) {
          local_1c = (int *)0x87c9d1;
          FUN_00a95ee0();
        }
      }
    }
    iVar6 = FUN_00a92f90();
    if ((*(int *)(iVar6 + 0xd0) + *(int *)(iVar6 + 0xc4) + *(int *)(iVar6 + 0xb8) == 0) ||
       (iVar6 = FUN_00e36060(), iVar6 != 0)) {
      (**(code **)(*param_1 + 0x388))();
    }
    return;
  case 0x100014:
    (**(code **)(*param_1 + 0x314))();
    (**(code **)(*param_1 + 0x314))();
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x318))();
    }
    FUN_00b884c0();
    if (param_1[0x187] == 0) {
      param_1[0x250] = 0;
      FUN_0086f130();
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00aa4080();
      local_1c = (int *)0x3d888889;
      local_20 = 0;
      FUN_00864400();
      param_1[0x23d] = param_1[0x25];
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00b86010();
      local_1c = (int *)0x393702d3;
      local_20 = 0x3f800000;
      FUN_00b7b270();
      param_1[0x988] = param_1[0x988] + 1;
      if (5 < param_1[0x988]) {
        param_1[0x988] = 0;
      }
      FUN_00b7d600();
      param_1[0x9b5] = 0;
      param_1[0x2dd] = 0;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    param_1[0x469] = 1;
    param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      piVar5 = (int *)FUN_00b7b200();
      if (((piVar5 == (int *)0x0) || (iVar6 = FUN_00b86410(), iVar6 == 0)) ||
         (iVar6 = (**(code **)(*piVar5 + 0x228))(), iVar6 == 0)) {
        if (90000.0 < (float)param_1[0x34a]) {
          pcVar2 = *(code **)(*param_1 + 0x308);
          param_1[0x23d] = param_1[0x34c];
          local_1c = (int *)0x3b2b92a6;
          local_20 = 0x3e99999a;
          (*pcVar2)();
        }
      }
      else {
        local_1c = (int *)0x393702d3;
        local_20 = 0x3e99999a;
        FUN_00b7b270();
      }
    }
    if ((param_1[0x9a8] != 0) || (param_1[0x1513] != 0)) {
      iVar6 = param_1[0x463];
      FUN_00e26e90();
      *(undefined4 *)(iVar6 + 0xe4) = 0x3e19999a;
      *(undefined4 *)(iVar6 + 0xe8) = 0x3e19999a;
      *(undefined4 *)(iVar6 + 0xec) = 0x3e19999a;
    }
    local_1c = (int *)0x87ce5e;
    FUN_00b94790();
    iVar6 = FUN_00b7d0b0();
    if (iVar6 != 0) {
      FUN_00b7d0b0();
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))();
        iVar6 = FUN_00dd6d80();
        if (iVar6 != 0) {
          local_1c = (int *)0x87ce9f;
          FUN_00a95ee0();
        }
      }
    }
    iVar6 = FUN_00a92f90();
    if ((*(int *)(iVar6 + 0xd0) + *(int *)(iVar6 + 0xc4) + *(int *)(iVar6 + 0xb8) == 0) ||
       (iVar6 = FUN_00e36060(), iVar6 != 0)) {
      (**(code **)(*param_1 + 0x388))();
    }
    return;
  case 0x100015:
    (**(code **)(*param_1 + 0x314))();
    (**(code **)(*param_1 + 0x314))();
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x318))();
    }
    FUN_00b884c0();
    if (param_1[0x187] == 0) {
      param_1[0x250] = 0;
      FUN_0086f130();
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00aa4080();
      local_1c = (int *)0x3d888889;
      local_20 = 0;
      FUN_00864400();
      param_1[0x23d] = param_1[0x25];
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00b86010();
      local_1c = (int *)0x393702d3;
      local_20 = 0x3f800000;
      FUN_00b7b270();
      param_1[0x988] = param_1[0x988] + 1;
      if (5 < param_1[0x988]) {
        param_1[0x988] = 0;
      }
      FUN_00b7d600();
      param_1[0x9b5] = 0;
      param_1[0x2dd] = 0;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    param_1[0x469] = 1;
    param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      piVar5 = (int *)FUN_00b7b200();
      if (((piVar5 == (int *)0x0) || (iVar6 = FUN_00b86410(), iVar6 == 0)) ||
         (iVar6 = (**(code **)(*piVar5 + 0x228))(), iVar6 == 0)) {
        if (90000.0 < (float)param_1[0x34a]) {
          pcVar2 = *(code **)(*param_1 + 0x308);
          param_1[0x23d] = param_1[0x34c];
          local_1c = (int *)0x3ae4c388;
          local_20 = 0x3ee66667;
          (*pcVar2)();
        }
      }
      else {
        local_1c = (int *)0x393702d3;
        local_20 = 0x3e99999a;
        FUN_00b7b270();
      }
    }
    if ((param_1[0x9a8] != 0) || (param_1[0x1513] != 0)) {
      iVar6 = param_1[0x463];
      FUN_00e26e90();
      *(undefined4 *)(iVar6 + 0xe4) = 0x3e19999a;
      *(undefined4 *)(iVar6 + 0xe8) = 0x3e19999a;
      *(undefined4 *)(iVar6 + 0xec) = 0x3e19999a;
    }
    local_1c = (int *)0x87d30e;
    FUN_00b94790();
    iVar6 = FUN_00b7d0b0();
    if (iVar6 != 0) {
      FUN_00b7d0b0();
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))();
        iVar6 = FUN_00dd6d80();
        if (iVar6 != 0) {
          local_1c = (int *)0x87d34f;
          FUN_00a95ee0();
        }
      }
    }
    iVar6 = FUN_00a92f90();
    if ((*(int *)(iVar6 + 0xd0) + *(int *)(iVar6 + 0xc4) + *(int *)(iVar6 + 0xb8) == 0) ||
       (iVar6 = FUN_00e36060(), iVar6 != 0)) {
      (**(code **)(*param_1 + 0x388))();
    }
    return;
  case 0x100016:
    FUN_0087d590();
    return;
  case 0x100017:
    local_1c = (int *)0x87da83;
    (**(code **)(*param_1 + 0x314))();
    if (0.0 < (float)param_1[0x24a]) {
      param_1[0x24a] = (int)((float)param_1[0x24a] - (float)param_1[0x244]);
    }
    local_1c = (int *)0x12;
    local_20 = 0x87daad;
    iVar6 = FUN_00a8c760();
    if ((iVar6 == 0) && (fVar3 = (float)param_1[0x24a], NAN(fVar3) || 0.0 < fVar3 == (fVar3 == 0.0))
       ) {
      local_1c = (int *)((float)param_1[0x244] * 0.06981317);
      local_20 = 0x3ae4c388;
      FUN_00a8db10();
    }
    else {
      local_1c = (int *)0x87db0e;
      (**(code **)(*param_1 + 0x318))();
    }
    local_1c = (int *)0x87db25;
    FUN_00b884c0();
    if ((float)param_1[0x34a] <= 90000.0) {
      param_1[0x224] = 0;
      param_1[0x226] = 0;
    }
    if (param_1[0x187] == 0) {
      param_1[0x9a2] = param_1[0x9a2] + 1;
      param_1[0x9a3] = 1;
      param_1[0x250] = 0;
      param_1[0x988] = 1;
      if (param_1[0x987] == 2) {
        param_1[0x250] = 1;
      }
      local_1c = (int *)0x3f800000;
      local_20 = 0;
      FUN_00aa4080();
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00864400();
      local_1c = (int *)0x1;
      param_1[0x23d] = param_1[0x25];
      local_20 = 0x87dbfa;
      FUN_00b86010();
      iVar6 = param_1[0x24];
      param_1[0x187] = param_1[0x187] + 1;
      local_1c = (int *)0x87dc11;
      FUN_0086f130();
      param_1[0x995] = param_1[0x995] | 2;
      param_1[0x24] = iVar6;
      param_1[0x9f4] = 0;
      param_1[0x225] = 0x3cf5c28f;
      param_1[0x2dd] = 0;
      param_1[0x9b5] = 0;
      param_1[0x248] = 0x3d75c28f;
      param_1[0x24a] = -0x40800000;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    param_1[0x469] = 1;
    param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
    local_1c = (int *)0x87dc77;
    piVar5 = (int *)FUN_00b7b200();
    if (piVar5 != (int *)0x0) {
      local_1c = (int *)0x87dc84;
      iVar6 = FUN_00b86410();
      if (iVar6 != 0) {
        local_1c = (int *)0x87dc94;
        iVar6 = (**(code **)(*piVar5 + 0x228))();
        if (iVar6 != 0) {
          local_1c = (int *)0x3da3d70a;
          local_20 = 0x3da3d70a;
          FUN_00b8ced0();
          goto LAB_0087dd16;
        }
      }
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar2 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      local_1c = (int *)0x0;
      local_20 = 0x3ed67750;
      (*pcVar2)();
    }
LAB_0087dd16:
    local_1c = (int *)0x3f800000;
    local_20 = 0x3f800000;
    FUN_00b94790();
    local_1c = (int *)0x87dd30;
    iVar6 = FUN_00b7d0b0();
    if (iVar6 != 0) {
      local_1c = (int *)0x87dd3b;
      FUN_00b7d0b0();
      local_1c = (int *)0x87dd42;
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 != (int *)0x0) {
        local_1c = (int *)&DAT_01be9d80;
        local_20 = 0x87dd56;
        (**(code **)(*piVar5 + 4))();
        local_20 = 0x87dd5d;
        iVar6 = FUN_00dd6d80();
        if (iVar6 != 0) {
          local_20 = 0;
          local_1c = param_1;
          FUN_00a95ee0();
        }
      }
    }
    local_1c = (int *)0x87dd71;
    iVar6 = FUN_00a92f90();
    if (*(int *)(iVar6 + 0xd0) + *(int *)(iVar6 + 0xc4) + *(int *)(iVar6 + 0xb8) != 0) {
      local_1c = (int *)0x0;
      local_20 = 0x87dd91;
      iVar6 = FUN_00e36060();
      if (iVar6 == 0) {
        return;
      }
    }
    local_1c = (int *)0x0;
    local_20 = 0;
    FUN_00a8caf0();
                    /* WARNING: Could not recover jumptable at 0x0087ddb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x314))();
    return;
  case 0x100018:
    FUN_0087e000();
    return;
  case 0x100019:
    FUN_0087e7a0();
    return;
  case 0x10001a:
    FUN_0087f4c0();
    return;
  case 0x10001b:
    (**(code **)(*param_1 + 0x314))();
    param_1[0x469] = 1;
    if (param_1[0x187] == 0) {
      if ((((param_1[0x4a7] != 0) && (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
          (*(int *)(param_1[0x4a7] + 0x34) != 0)) ||
         (((param_1[0x4aa] != 0 && (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
          (*(int *)(param_1[0x4aa] + 0x34) != 0)))) {
        local_1c = (int *)0x3f800000;
        local_20 = 0x861d3c;
        FUN_00b7b270();
      }
      param_1[0x2dd] = 0;
      iVar6 = 0x3b;
      if (90000.0 < (float)param_1[0x34a]) {
        fVar11 = (float10)FUN_00ddba30();
        fVar12 = (float10)0.61086524;
        if (fVar11 <= fVar12) {
          iVar6 = 0x3e;
        }
        fVar13 = (float10)-0.61086524;
        if (fVar13 < fVar11 != (fVar13 == fVar11)) {
          iVar6 = 0x3e;
        }
        if ((float10)2.5307274 < fVar11) {
          iVar6 = 0x3b;
        }
        fVar14 = (float10)-2.5307274;
        if (fVar11 < fVar14) {
          iVar6 = 0x3b;
        }
        if ((fVar12 < fVar11 != (fVar12 == fVar11)) && (fVar11 <= (float10)2.5307274)) {
          iVar6 = 0x3d;
        }
        if ((fVar13 < fVar11) ||
           ((NAN(fVar14) || NAN(fVar11)) || fVar14 < fVar11 == (fVar14 == fVar11))) {
          if ((iVar6 != 0x3b) && (((iVar6 != 0x3d && (iVar6 != 0x3c)) && (iVar6 == 0x3e)))) {
            (**(code **)(*param_1 + 0x3e4))();
          }
        }
        else {
          iVar6 = 0x3c;
        }
      }
      local_1c = (int *)0x3f800000;
      local_20 = 0x3d888889;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = iVar6;
      FUN_00b895d0();
      if ((((param_1[0x4a7] == 0) || (iVar6 = FUN_00a81330(), iVar6 == 0)) ||
          (*(int *)(param_1[0x4a7] + 0x34) == 0)) &&
         (((param_1[0x4aa] == 0 || (iVar6 = FUN_00a81330(), iVar6 == 0)) ||
          (*(int *)(param_1[0x4aa] + 0x34) == 0)))) {
        if (90000.0 < (float)param_1[0x34a]) {
          fVar11 = (float10)FUN_00ddba30();
          param_1[0x25] = (int)(float)fVar11;
        }
      }
      else {
        local_1c = (int *)0x3e99999a;
        local_20 = 0x861f32;
        FUN_00b7b270();
      }
      FUN_0085db00();
      (**(code **)(*param_1 + 0x220))();
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    if (((param_1[0x9a8] != 0) || (param_1[0x1513] != 0)) && (param_1[0x250] == 0x3e)) {
      iVar6 = param_1[0x463];
      FUN_00e26e90();
      *(undefined4 *)(iVar6 + 0xe4) = 0x3dcccccd;
      *(undefined4 *)(iVar6 + 0xe8) = 0x3dcccccd;
      *(undefined4 *)(iVar6 + 0xec) = 0x3dcccccd;
    }
    param_1[0x469] = 1;
    FUN_00b94790();
    if ((((param_1[0x4a7] != 0) && (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
        (*(int *)(param_1[0x4a7] + 0x34) != 0)) ||
       (((param_1[0x4aa] != 0 && (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
        (*(int *)(param_1[0x4aa] + 0x34) != 0)))) {
      local_1c = (int *)0x3e99999a;
      local_20 = 0x862019;
      FUN_00b7b270();
    }
    iVar6 = FUN_00a92f90();
    if ((*(int *)(iVar6 + 0xd0) + *(int *)(iVar6 + 0xc4) + *(int *)(iVar6 + 0xb8) == 0) ||
       (iVar6 = FUN_00e36060(), iVar6 != 0)) {
      (**(code **)(*param_1 + 0x388))();
    }
    return;
  case 0x10001c:
    FUN_00880360();
    return;
  case 0x10001d:
    FUN_00880bb0();
    return;
  case 0x10001e:
    iVar7 = 0;
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      iVar7 = FUN_00a7c8a0();
    }
    (**(code **)(*param_1 + 0x314))();
    switch(param_1[0x187]) {
    case 0:
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00aa4080();
      pcVar2 = *(code **)(*param_1 + 0x394);
      param_1[0x187] = param_1[0x187] + 1;
      (*pcVar2)();
      FUN_0086f130();
      (**(code **)(*param_1 + 0x39c))();
      param_1[0x9b5] = 0;
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar2 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x41c];
        local_1c = (int *)0x3ae4c388;
        local_20 = 0x3f800000;
        (*pcVar2)();
      }
      iVar6 = param_1[0x463];
      FUN_00e26e90();
      *(undefined4 *)(iVar6 + 0xe4) = 0;
      *(undefined4 *)(iVar6 + 0xe8) = 0;
      *(undefined4 *)(iVar6 + 0xec) = 0;
      param_1[0x9f4] = 0;
    case 1:
      param_1[0x469] = 1;
      local_1c = (int *)0x886131;
      FUN_00b94790();
      iVar6 = FUN_00a94ce0();
      if (iVar6 == 0) {
        param_1[0x250] = 0;
        iVar6 = FUN_00a8c760();
        if (iVar6 != 0) {
          param_1[0x250] = 1;
          if ((0 < param_1[0x2e4]) && (param_1[0x2e4] < 6)) {
            param_1[0x2e4] = 5;
            return;
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x388))();
        if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
          local_1c = (int *)0x0;
          local_20 = 0;
          FUN_00da0f50();
          return;
        }
      }
      break;
    case 2:
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00aa4080();
      pcVar2 = *(code **)(*param_1 + 0x394);
      param_1[0x187] = param_1[0x187] + 1;
      (*pcVar2)();
      (**(code **)(*param_1 + 0x220))();
      param_1[0x9f4] = 0;
    case 3:
      if ((iVar7 != 0) && (iVar6 = FUN_00a8c760(), iVar6 != 0)) {
        FUN_00a8e880();
        local_1c = (int *)0x3ae4c388;
        local_20 = 0x3e99999a;
        (**(code **)(*param_1 + 0x308))();
      }
      param_1[0x469] = 1;
      local_1c = (int *)0x886275;
      FUN_00b94790();
      local_1c = (int *)0x886287;
      FUN_00a952e0();
      iVar6 = FUN_00a8c760();
      if (iVar6 != 0) {
        local_1c = (int *)0x0;
        local_20 = 0x3dcccccd;
        FUN_00b85350();
      }
      iVar6 = FUN_00a94ce0();
      if ((iVar6 != 0) && ((**(code **)(*param_1 + 0x388))(), (*(byte *)(param_1 + 0x9f4) & 1) == 0)
         ) {
        local_1c = (int *)0x0;
        local_20 = 0;
        FUN_00da0f50();
        return;
      }
    }
    return;
  case 0x10001f:
  case 0x100020:
  case 0x100021:
  case 0x100022:
  case 0x100023:
    FUN_00886310();
    return;
  case 0x100024:
    FUN_00886500();
    return;
  case 0x100025:
  case 0x100026:
  case 0x100027:
    iVar7 = 0;
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      iVar7 = FUN_00a7c8a0();
    }
    (**(code **)(*param_1 + 0x314))();
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x318))();
    }
    sVar9 = 0xa4;
    if (param_1[0x187] == 0) {
      if ((param_1[0x186] == 0x100026) && (sVar9 = 0xa6, (char)param_1[0xb06] == '\x01')) {
        sVar9 = 0xa7;
      }
      if (param_1[0x186] == 0x100027) {
        sVar9 = 0xa9;
      }
      local_1c = (int *)0x3f800000;
      local_20 = 0x392ec33e;
      FUN_00aa4080();
      pcVar2 = *(code **)(*param_1 + 0x394);
      param_1[0x187] = param_1[0x187] + 1;
      (*pcVar2)();
      FUN_0086f130();
      (**(code **)(*param_1 + 0x220))();
      param_1[0x9f4] = 0;
      if (sVar9 != 0xa4) {
        param_1[0x224] = 0;
        param_1[0x226] = -0x41666666;
        param_1[0x225] = 0x3e4ccccd;
        local_1c = (int *)0x88695d;
        D3DXVec3TransformNormal();
      }
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    fVar11 = (float10)FUN_00fdc1f0();
    param_1[0x224] = (int)(float)((float10)(float)param_1[0x224] * fVar11);
    param_1[0x226] = (int)(float)(fVar11 * (float10)(float)param_1[0x226]);
    if ((iVar7 != 0) && (iVar6 = FUN_00a8c760(), iVar6 != 0)) {
      local_1c = (int *)0x40800000;
      local_20 = 0x8869ca;
      FUN_00b8ced0();
    }
    param_1[0x469] = 1;
    FUN_00b94790();
    FUN_00a952e0();
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      local_1c = (int *)0x3dcccccd;
      local_20 = 0x3f800000;
      FUN_00b85350();
    }
    iVar6 = FUN_00a94ce0();
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x388))();
      local_1c = (int *)0x0;
      local_20 = 0x100005;
      FUN_00a8caf0();
      if ((*(byte *)(param_1 + 0x9f4) & 1) == 0) {
        local_1c = (int *)0x0;
        local_20 = 0x886a7c;
        FUN_00da0f50();
      }
    }
    return;
  case 0x100028:
  case 0x100029:
    FUN_00886c20();
    return;
  case 0x10002a:
    FUN_0086e670();
    return;
  case 0x10002b:
    FUN_009487b0();
    return;
  case 0x10002c:
    FUN_00946c10();
    return;
  case 0x10002d:
    FUN_00946db0();
    return;
  case 0x10002e:
    FUN_0086e300();
    return;
  case 0x10002f:
    FUN_0086e440();
    return;
  case 0x100030:
    FUN_0085cdf0();
    return;
  case 0x100031:
    FUN_0085ce80();
    return;
  case 0x100032:
    FUN_00862b00();
    return;
  case 0x100033:
  case 0x100034:
    (**(code **)(*param_1 + 0x314))();
    if (param_1[0x187] == 0) {
      local_1c = (int *)0x3ed55555;
      local_20 = 0;
      FUN_00aa4080();
      if ((DAT_01bea094 & 0x100000) != 0) {
        iVar6 = FUN_00a92f90();
        FUN_00e26e90();
        *(undefined4 *)(iVar6 + 0xe4) = 0;
        *(undefined4 *)(iVar6 + 0xe8) = 0;
        *(undefined4 *)(iVar6 + 0xec) = 0;
      }
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) goto LAB_0086353c;
    FUN_00b94790();
    FUN_00a94ce0();
LAB_0086353c:
    if (((DAT_01bea094 & 0x100000) != 0) &&
       ((200.0 < (float)param_1[0x344] || ((float)param_1[0x344] < -200.0)))) {
      FUN_00da7570();
      fVar11 = (float10)FUN_00ddba30();
      param_1[0x25] = (int)(float)fVar11;
      return;
    }
    return;
  case 0x100035:
    FUN_0085b550();
    return;
  case 0x100036:
    if (param_1[0x2dd] != 0) {
      param_1[0x4fe] = 0;
    }
    (**(code **)(*param_1 + 0x314))();
    if (param_1[0x187] == 0) {
      (**(code **)(*param_1 + 0x39c))();
      iVar6 = FUN_00b7d0b0();
      if (iVar6 != 0) {
        FUN_00b7d0b0();
        piVar5 = (int *)FUN_00a7c8a0();
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))();
          iVar6 = FUN_00dd6d80();
          if (iVar6 != 0) {
            FUN_00a94bc0();
          }
        }
      }
      FUN_00a94bc0();
      iVar6 = FUN_00b7d110();
      pcStack_50 = (char *)(iVar6 + 0x494);
      piStack_44 = (int *)0x3e088889;
      local_48 = (undefined1 *)0x0;
      puStack_4c = (undefined1 *)0x0;
      fStack_54 = 1.2497036e-38;
      FUN_00a9f3c0();
      param_1[0x187] = param_1[0x187] + 1;
      FUN_0086f130();
      param_1[0x250] = 0;
      param_1[0x502] = 0x701;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    iVar6 = FUN_00b7b310();
    if ((iVar6 == 0) || (iVar6 = FUN_00a81330(), iVar6 == 0)) {
      if (param_1[0x504] != 0) goto LAB_00881541;
    }
    else {
      FUN_00c15010();
      FUN_00a8e880();
      param_1[0x24a] = param_1[0x23d];
    }
    FUN_00ddba30();
    fVar11 = (float10)FUN_00ddba30();
    param_1[0x25] = (int)(float)fVar11;
LAB_00881541:
    param_1[0x9b7] = 0x40400000;
    FUN_00b94790();
    iVar6 = FUN_00a92f90();
    if ((*(int *)(iVar6 + 0xd0) + *(int *)(iVar6 + 0xc4) + *(int *)(iVar6 + 0xb8) == 0) ||
       (iVar6 = FUN_00e36060(), iVar6 != 0)) {
      piStack_44 = (int *)0x88159e;
      FUN_00a8caf0();
    }
    return;
  case 0x100037:
    FUN_008815b0();
    return;
  case 0x100038:
    FUN_00881950();
    return;
  case 0x100039:
    FUN_00881f40();
    return;
  case 0x10003a:
    FUN_00882140();
    return;
  case 0x10003b:
    FUN_00882410();
    return;
  case 0x10003c:
    FUN_00882510();
    return;
  case 0x10003d:
    FUN_008827f0();
    return;
  case 0x10003e:
    FUN_00882ae0();
    return;
  case 0x10003f:
    FUN_00883050();
    return;
  case 0x100040:
    FUN_00883420();
    return;
  case 0x100041:
    FUN_008836f0();
    return;
  case 0x100042:
    FUN_008837e0();
    return;
  case 0x100043:
    FUN_00883b50();
    return;
  case 0x100044:
    FUN_00883d80();
    return;
  case 0x100045:
    FUN_00883e90();
    return;
  case 0x100046:
    FUN_008841a0();
    return;
  case 0x100047:
    FUN_00884650();
    return;
  case 0x100048:
    FUN_00884840();
    return;
  case 0x100049:
    FUN_008849f0();
    return;
  case 0x10004a:
    FUN_00884b10();
    return;
  case 0x10004b:
  case 0x10004c:
    FUN_00884c20();
    return;
  case 0x10004d:
    FUN_008653d0();
    return;
  case 0x10004e:
    FUN_008655a0();
    return;
  case 0x10004f:
    FUN_00865790();
    return;
  case 0x100050:
    FUN_00865880();
    return;
  case 0x100051:
  case 0x100052:
    FUN_00865b10();
    return;
  case 0x100053:
    FUN_00865f30();
    return;
  case 0x100054:
    FUN_0085e1b0();
    return;
  case 0x100055:
    FUN_0085e290();
    return;
  case 0x100056:
    FUN_0085e380();
    return;
  case 0x100057:
    FUN_0085e470();
    return;
  case 0x100058:
    param_1[0x99a] = 1;
    if (param_1[0x187] == 0) {
      local_1c = (int *)0x0;
      local_20 = 0x91;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00b895d0();
      (**(code **)(*param_1 + 0x220))();
      param_1[0x250] = 0;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    (**(code **)(*param_1 + 0x318))();
    FUN_00b94790();
    iVar6 = FUN_00a92f90();
    if ((*(int *)(iVar6 + 0xd0) + *(int *)(iVar6 + 0xc4) + *(int *)(iVar6 + 0xb8) == 0) ||
       (iVar6 = FUN_00e36060(), iVar6 != 0)) {
      (**(code **)(*param_1 + 0x314))();
      FUN_00a8caf0();
    }
    return;
  case 0x100059:
    FUN_008663e0();
    return;
  case 0x10005a:
    FUN_008667b0();
    return;
  case 0x10005b:
    FUN_00866960();
    return;
  case 0x10005c:
    FUN_00866b60();
    return;
  case 0x10005d:
    FUN_00866d40();
    return;
  case 0x10005e:
    FUN_00866eb0();
    return;
  case 0x10005f:
    FUN_00867130();
    return;
  case 0x100060:
    FUN_008672d0();
    return;
  case 0x100061:
    FUN_00865220();
    return;
  case 0x100062:
    FUN_008673d0();
    return;
  case 0x100063:
    DAT_01bea060 = DAT_01bea060 | 0x20000000;
    (**(code **)(*param_1 + 0x314))();
    param_1[0x99a] = 1;
    param_1[0x139] = 1;
    switch(param_1[0x187]) {
    case 0:
      FUN_008639c0();
      FUN_00c29a50();
      FUN_00d4d920();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00b7ce10();
      return;
    case 1:
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00b7ce10();
      return;
    case 2:
      param_1[0x248] = 0;
      param_1[0x187] = 3;
    case 3:
      fVar3 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar3 - (float)param_1[0x244]);
      if ((fVar3 - (float)param_1[0x244] < 0.0) && ((DAT_01bea060 & 0x800000) == 0)) {
        FUN_00c17870();
        return;
      }
    default:
      return;
    }
  case 0x100064:
    FUN_0086b510();
    return;
  case 0x100065:
    FUN_00861b70();
    return;
  case 0x100066:
  case 0x100067:
    FUN_00880720();
    return;
  case 0x100068:
    piStack_44 = (int *)0x742bd9;
    fVar3 = (float)FUN_00a81330();
    if (fVar3 != 0.0) {
      piStack_44 = (int *)0x742bea;
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 != (int *)0x0) {
        piStack_44 = (int *)&DAT_01b357d0;
        local_48 = (undefined1 *)0x742c02;
        (**(code **)(*piVar5 + 4))();
        local_48 = (undefined1 *)0x742c09;
        iVar6 = FUN_00dd6d80();
        if (iVar6 != 0) {
          piStack_44 = (int *)0x0;
          local_48 = (undefined1 *)0x2d;
          puStack_4c = (undefined1 *)0x742c21;
          iVar6 = (**(code **)(*piVar5 + 0x158))();
          if (iVar6 == 0) {
            if (param_1[0x187] == 3) {
              piStack_44 = (int *)0x2000;
              local_48 = (undefined1 *)0x742c3e;
              FUN_00b7d640();
            }
            switch(param_1[0x187]) {
            case 0:
              piStack_44 = (int *)0x742c5b;
              FUN_00b8a620();
              piStack_44 = (int *)0x742c62;
              FUN_00b7aa80();
              piStack_44 = (int *)0x1;
              local_48 = (undefined1 *)0x742c6b;
              FUN_00ac4c70();
              piStack_44 = (int *)0x3f800000;
              local_48 = (undefined1 *)0xbf800000;
              puStack_4c = (undefined1 *)0x8000000;
              pcStack_50 = (char *)0x3f800000;
              fStack_54 = 0.0;
              fStack_58 = 0.0;
              fStack_60 = 4.2039e-43;
              local_64 = 1.0668922e-38;
              fStack_5c = fVar3;
              FUN_00aa4520();
              piStack_44 = (int *)0x0;
              local_48 = (undefined1 *)0x742ca6;
              FUN_00ac4c70();
              param_1[0x187] = param_1[0x187] + 1;
              piStack_44 = (int *)&DAT_01bea1d0;
              local_48 = (undefined1 *)0x0;
              puStack_4c = (undefined1 *)0x0;
              pcStack_50 = (char *)0x742cc3;
              FUN_00db3e80();
              if (param_1[0x1d9] != 0) {
                piStack_44 = (int *)0x742cd2;
                FUN_008e3c10();
              }
              piStack_44 = (int *)0x3f800000;
              local_48 = (undefined1 *)0x3f800000;
              puStack_4c = (undefined1 *)0x742ce5;
              FUN_00b94790();
              piStack_44 = (int *)0x1;
              local_48 = (undefined1 *)0x3e99999a;
              param_1[0x2dd] = 0;
              puStack_4c = (undefined1 *)0x3f000000;
              pcStack_50 = (char *)0x40400000;
              fStack_58 = 1.0669096e-38;
              fStack_54 = fVar3;
              FUN_00b80920();
              piStack_44 = (int *)0x742d20;
              switchD_0080dbae::default();
              piStack_44 = &local_20;
              local_48 = &stack0xffffffd0;
              puStack_4c = (undefined1 *)0x742d31;
              FUN_00a8ce90();
              piStack_44 = (int *)((float)param_1[0x25] + (float)local_1c);
              local_48 = (undefined1 *)0x742d44;
              fVar11 = (float10)FUN_00ddba30();
              piVar5[0x25] = (int)(float)fVar11;
              piStack_44 = param_1 + 4;
              puStack_4c = &stack0xffffffd0;
              pcStack_50 = (char *)0x742d5e;
              local_48 = puStack_4c;
              D3DXVec3TransformNormal();
              fVar3 = (float)param_1[0x11];
              fVar1 = (float)param_1[0x12];
              piVar5[0x14] = (int)((float)param_1[0x10] + unaff_ESI);
              piVar5[0x15] = (int)(fVar3 + unaff_EBX);
              piVar5[0x16] = (int)(fVar1 + fStack_34);
              piVar5[0x17] = in_stack_ffffffd0;
              return;
            case 1:
              piStack_44 = (int *)0x0;
              local_48 = (undefined1 *)0x742d95;
              FUN_00a92f90();
              local_48 = (undefined1 *)0x742d9c;
              FUN_00404b90();
              piStack_44 = (int *)0x3f800000;
              local_48 = (undefined1 *)0x3f800000;
              puStack_4c = (undefined1 *)0x742daf;
              FUN_00b94790();
              piStack_44 = (int *)0x0;
              local_48 = (undefined1 *)0x742db8;
              iVar6 = FUN_00a94ce0();
              if (iVar6 == 0) {
                return;
              }
              param_1[0x187] = param_1[0x187] + 1;
              return;
            case 2:
              piStack_44 = (int *)0x0;
              local_48 = (undefined1 *)0x0;
              puStack_4c = (undefined1 *)0x0;
              pcStack_50 = "RushBlock";
              fStack_54 = 1.0669379e-38;
              FUN_00a9f4c0();
              piStack_44 = (int *)0x1;
              local_48 = (undefined1 *)0x742dec;
              FUN_00ac4c70();
              piStack_44 = (int *)0x0;
              local_48 = (undefined1 *)0x0;
              puStack_4c = (undefined1 *)0x12e;
              pcStack_50 = (char *)0x0;
              fStack_54 = 0.0;
              fStack_58 = 0.0;
              fStack_5c = 0.0;
              fStack_60 = -NAN;
              local_68 = (int *)0x742e0b;
              local_64 = fVar3;
              FUN_00a9f650();
              piStack_44 = (int *)0x0;
              local_48 = (undefined1 *)0x0;
              puStack_4c = (undefined1 *)0x12d;
              pcStack_50 = (char *)0x0;
              fStack_54 = 1.4013e-45;
              fStack_58 = 0.0;
              fStack_5c = 0.0;
              fStack_60 = -NAN;
              local_68 = (int *)0x742e2a;
              local_64 = fVar3;
              FUN_00a9f650();
              piStack_44 = (int *)0x0;
              local_48 = (undefined1 *)0x742e33;
              FUN_00ac4c70();
              param_1[0x187] = param_1[0x187] + 1;
              param_1[0x248] = 0x3f800000;
              param_1[0x250] = 100;
              param_1[0x251] = 2;
              param_1[0x252] = 0x168;
            case 3:
              piStack_44 = (int *)0x0;
              local_48 = (undefined1 *)0x742e68;
              FUN_00a92f90();
              local_48 = (undefined1 *)0x742e6f;
              FUN_00404b90();
              if ((float)param_1[0xd0f] < 1.0) {
                param_1[0x248] =
                     (int)(((float)param_1[0x250] * 0.0025 - (float)param_1[0x248]) * 1.3 * 0.1 +
                          (float)param_1[0x248]);
                fStack_34 = (float)param_1[0x250] * 0.0025;
                if (0.0 <= fStack_34) {
                  if (1.0 < fStack_34) {
                    fStack_34 = 1.0;
                  }
                }
                else {
                  fStack_34 = 0.0;
                }
                piStack_44 = (int *)0x0;
                puStack_4c = (undefined1 *)0x0;
                pcStack_50 = (char *)0x0;
                fStack_54 = 1.0669782e-38;
                local_48 = (undefined1 *)fStack_34;
                FUN_00a947e0();
                param_1[0x24f] = (int)fStack_34;
                param_1[0x250] = param_1[0x250] - param_1[0x251];
                if ((param_1[0x33f] & param_1[0x398]) != 0) {
                  piStack_44 = (int *)0x8;
                  local_48 = (undefined1 *)0x3f333333;
                  puStack_4c = (undefined1 *)0x3f333333;
                  pcStack_50 = (char *)0x0;
                  param_1[0x250] = param_1[0x250] + 0x1e;
                  fStack_54 = 1.0669889e-38;
                  FUN_00dda360();
                }
                iVar6 = param_1[0x252];
                param_1[0x252] = iVar6 + -1;
                if (iVar6 == 0) {
                  param_1[0x251] = param_1[0x251] + 1;
                  param_1[0x252] = 0x5a;
                }
              }
              if (param_1[0x250] < 0) {
                piStack_44 = (int *)0x6;
                param_1[0x250] = 0;
                param_1[0x187] = 6;
                local_48 = (undefined1 *)0x742f9f;
                FUN_00a8cb60();
              }
              if (400 < param_1[0x250]) {
                piStack_44 = (int *)0x4;
                param_1[0x250] = 400;
                param_1[0x187] = 4;
                local_48 = (undefined1 *)0x742fc5;
                FUN_00a8cb60();
              }
              param_1[0x24e] = (int)((float)param_1[0x248] + 1.0);
              if (1.7 < (float)param_1[0x248] + 1.0) {
                param_1[0x24e] = 0x3fd9999a;
              }
              piStack_44 = (int *)param_1[0x24e];
              local_48 = (undefined1 *)0x0;
              puStack_4c = (undefined1 *)0x743005;
              FUN_00a96030();
              piStack_44 = (int *)0x74300c;
              BehaviorAppBase::thunk_vf64();
              return;
            case 4:
              piStack_44 = (int *)0x1;
              local_48 = (undefined1 *)0x74301c;
              FUN_00ac4c70();
              piStack_44 = (int *)0x3f800000;
              local_48 = (undefined1 *)0xbf800000;
              puStack_4c = (undefined1 *)0x8000000;
              pcStack_50 = (char *)0x3f800000;
              fStack_54 = 0.0;
              fStack_58 = 0.0;
              fStack_60 = 4.24593e-43;
              local_64 = 1.0670246e-38;
              fStack_5c = fVar3;
              FUN_00aa4520();
              piStack_44 = (int *)0x0;
              local_48 = (undefined1 *)0x743057;
              FUN_00ac4c70();
              param_1[0x187] = param_1[0x187] + 1;
            case 5:
              piStack_44 = (int *)0x0;
              local_48 = (undefined1 *)0x743066;
              FUN_00a92f90();
              local_48 = (undefined1 *)0x74306d;
              FUN_00404b90();
              piStack_44 = (int *)0x3f800000;
              local_48 = (undefined1 *)0x3f800000;
              puStack_4c = (undefined1 *)0x743080;
              FUN_00b94790();
              piStack_44 = (int *)0x0;
              local_48 = (undefined1 *)0x743089;
              iVar6 = FUN_00a94ce0();
              if (iVar6 == 0) {
                return;
              }
              piStack_44 = (int *)0x0;
              local_48 = (undefined1 *)0x41700000;
              puStack_4c = (undefined1 *)0x7430a7;
              FUN_00dc1270();
              if (param_1[0x1d9] != 0) {
                piStack_44 = (int *)0x7430b6;
                FUN_008e6d00();
              }
              piStack_44 = (int *)0x7430c1;
              FUN_00a7c950();
              piStack_44 = (int *)0x1;
              local_48 = (undefined1 *)0x1;
              puStack_4c = (undefined1 *)0x7430cc;
              FUN_00ba6810();
              piStack_44 = (int *)0x0;
              local_48 = (undefined1 *)0x7430da;
              (**(code **)(*param_1 + 0x388))();
              return;
            case 6:
              goto switchD_00742c4d_caseD_6;
            case 7:
              goto switchD_00742c4d_caseD_7;
            default:
              return;
            }
          }
        }
      }
    }
    piStack_44 = (int *)0x0;
    local_48 = (undefined1 *)0x41700000;
    puStack_4c = (undefined1 *)0x743220;
    FUN_00dc1270();
    if (param_1[0x1d9] != 0) {
      piStack_44 = (int *)0x74322f;
      FUN_008e6d00();
    }
    piStack_44 = (int *)0x74323a;
    FUN_00a7c950();
    piStack_44 = (int *)0x1;
    local_48 = (undefined1 *)0x1;
    puStack_4c = (undefined1 *)0x743245;
    FUN_00ba6810();
    piStack_44 = (int *)0x0;
    local_48 = (undefined1 *)0x743253;
    (**(code **)(*param_1 + 0x388))();
    return;
  case 0x100069:
    FUN_00743280();
    return;
  case 0x10006a:
    param_1[0x99a] = 1;
    iVar6 = FUN_00a81330();
    if ((iVar6 == 0) || (piVar5 = (int *)FUN_00a7c8a0(), piVar5 == (int *)0x0)) {
LAB_00710489:
      local_1c = (int *)0x710497;
      (**(code **)(*param_1 + 0x388))();
      FUN_00b96b30();
      return;
    }
    local_1c = (int *)0x71047e;
    (**(code **)(*piVar5 + 4))();
    local_1c = (int *)0x710485;
    iVar6 = FUN_00dd6d80();
    if (iVar6 == 0) goto LAB_00710489;
    (**(code **)(*param_1 + 0x314))();
    switch(param_1[0x187]) {
    case 0:
      FUN_00863be0();
      local_1c = (int *)0x7104d6;
      FUN_00ac4c70();
      local_1c = (int *)0xbf800000;
      local_20 = 0x8000000;
      FUN_00aa4520();
      local_1c = (int *)0x710515;
      FUN_00ac4c70();
      param_1[0x187] = param_1[0x187] + 1;
      local_1c = (int *)0x0;
      local_20 = 0x41f00000;
      param_1[0x250] = 0;
      FUN_00db3e80();
    case 1:
      FUN_00e26e90();
      local_1c = (int *)0x71055a;
      FUN_00e22f10();
      local_1c = (int *)0x3f800000;
      local_20 = 0x71056d;
      FUN_00b94790();
      local_1c = (int *)0x710576;
      iVar6 = FUN_00a94ce0();
      if (iVar6 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
        local_1c = (int *)0x4000;
        local_20 = 0x71058f;
        FUN_00cbc8f0();
        return;
      }
      break;
    case 2:
      local_1c = (int *)0x7105a0;
      FUN_00ac4c70();
      local_1c = (int *)0xbf800000;
      local_20 = 0;
      FUN_00aa4520();
      local_1c = (int *)0x7105d8;
      FUN_00ac4c70();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x43960000;
      param_1[0x250] = 0;
    case 3:
      FUN_00e26e90();
      local_1c = (int *)0x71060e;
      FUN_00e22f10();
      local_1c = (int *)0x3f800000;
      local_20 = 0x710621;
      FUN_00b94790();
      local_1c = (int *)0x4000;
      local_20 = 0x71062c;
      FUN_00cbc8f0();
      iVar6 = FUN_00b7a7c0();
      fVar3 = ((float)param_1[0x248] - (float)iVar6 * 6.0) - (float)param_1[0x244];
      param_1[0x248] = (int)fVar3;
      if (fVar3 < 0.0) {
        param_1[0x187] = 4;
      }
      local_1c = (int *)0x710674;
      FUN_00a8c760();
      return;
    case 4:
      local_1c = (int *)0x710682;
      FUN_00ac4c70();
      local_1c = (int *)0xbf800000;
      local_20 = 0x8000000;
      FUN_00aa4520();
      local_1c = (int *)0x7106c1;
      FUN_00ac4c70();
      param_1[0x187] = param_1[0x187] + 1;
    case 5:
      FUN_00e26e90();
      local_1c = (int *)0x7106e1;
      FUN_00e22f10();
      local_1c = (int *)0x3f800000;
      local_20 = 0x7106f4;
      FUN_00b94790();
      local_1c = (int *)0x7106fd;
      iVar6 = FUN_00a94ce0();
      if (iVar6 == 0) {
        return;
      }
      local_1c = (int *)0x710713;
      (**(code **)(*param_1 + 0x388))();
      local_1c = (int *)0x71071a;
      FUN_00b96b30();
      local_1c = (int *)0x710721;
      iVar6 = FUN_00b7c970();
      if (0 < iVar6) {
        return;
      }
      local_1c = (int *)0x0;
      local_20 = 0;
      FUN_00a8caf0();
      return;
    case 6:
      FUN_00863be0();
      local_1c = (int *)0x710750;
      FUN_00ac4c70();
      local_1c = (int *)0xbf800000;
      local_20 = 0x8000000;
      FUN_00aa4520();
      local_1c = (int *)0x71078f;
      FUN_00ac4c70();
      param_1[0x187] = param_1[0x187] + 1;
      local_1c = (int *)0x0;
      local_20 = 0x41f00000;
      param_1[0x250] = 0;
      FUN_00db3e80();
    case 7:
      FUN_00e26e90();
      local_1c = (int *)0x7107d4;
      FUN_00e22f10();
      local_1c = (int *)0x3f800000;
      local_20 = 0x7107e7;
      FUN_00b94790();
      local_1c = (int *)0x7107f0;
      iVar6 = FUN_00a94ce0();
      if (iVar6 != 0) {
        param_1[0x187] = 2;
      }
      break;
    default:
      goto switchD_007104c0_default;
    }
    local_1c = (int *)0x4000;
    local_20 = 0x710809;
    FUN_00cbc8f0();
switchD_007104c0_default:
    return;
  case 0x10006b:
    FUN_00758d10();
    return;
  case 0x10006c:
    iVar6 = FUN_00a81330();
    uVar10 = 0;
    if ((iVar6 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      local_1c = (int *)0x7a1605;
      (**(code **)(*piVar5 + 4))();
      local_1c = (int *)0x7a160c;
      iVar6 = FUN_00dd6d80();
      uVar10 = -(uint)(iVar6 != 0) & (uint)piVar5;
    }
    (**(code **)(*param_1 + 0x314))();
    if (param_1[0x187] == 0) {
      FUN_00863be0();
      local_1c = (int *)0xbf800000;
      local_20 = 0x8000000;
      FUN_00aa4520();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 6;
      local_1c = (int *)0x7a168a;
      FUN_00b7c980();
      iVar6 = FUN_00fdbc60();
      iVar7 = FUN_00b7c970();
      if (iVar7 <= iVar6) {
        param_1[0x250] = 10;
      }
      local_1c = (int *)0x7a16bd;
      FUN_00b7c980();
      iVar6 = FUN_00fdbc60();
      iVar7 = FUN_00b7c970();
      if (iVar7 <= iVar6) {
        param_1[0x250] = 0x14;
      }
      local_1c = (int *)0x7a16f0;
      FUN_00b7c980();
      iVar6 = FUN_00fdbc60();
      iVar7 = FUN_00b7c970();
      if (iVar7 <= iVar6) {
        param_1[0x250] = 0x1e;
      }
      local_1c = (int *)0x7a1723;
      FUN_00b7c980();
      iVar6 = FUN_00fdbc60();
      iVar7 = FUN_00b7c970();
      if (iVar7 <= iVar6) {
        param_1[0x250] = 0x28;
      }
      iVar6 = FUN_00b7ec80();
      if (iVar6 == 0) {
        param_1[0x250] = param_1[0x250] / 2;
      }
      iVar6 = FUN_00b7ec80();
      if (2 < iVar6) {
        param_1[0x250] = param_1[0x250] + 5;
      }
      local_1c = (int *)0x0;
      local_20 = 0x41700000;
      FUN_00db3e80();
      param_1[0x251] = 0;
      if (uVar10 != 0) {
        local_1c = (int *)0x7a17ae;
        FUN_00ac84d0();
        FUN_00aa28e0();
        local_1c = (int *)FUN_00fdbc60();
        local_20 = 0x7a17d9;
        (**(code **)(*param_1 + 0x30c))();
      }
      local_1c = (int *)0x3f800000;
      local_20 = 0x3f000000;
      FUN_00b80920();
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00e26e90();
    local_1c = (int *)0x7a1813;
    FUN_00e22f10();
    local_1c = (int *)0x3f800000;
    local_20 = 0x7a1826;
    FUN_00b94790();
    local_1c = (int *)0x7a182f;
    iVar6 = FUN_00a94ce0();
    if (iVar6 != 0) {
      local_1c = (int *)0x7a1841;
      (**(code **)(*param_1 + 0x388))();
      local_1c = (int *)0x0;
      local_20 = 0;
      FUN_00a8caf0();
      FUN_00b96b30();
      iVar6 = FUN_00b7c970();
      if (iVar6 < 1) {
        local_1c = (int *)0x0;
        local_20 = 0;
        FUN_00a8caf0();
      }
    }
    local_1c = (int *)0x7a1880;
    iVar6 = FUN_00a8c760();
    if (iVar6 == 0) {
      return;
    }
    if (uVar10 != 0) {
      local_1c = (int *)0x7a1895;
      FUN_00ac84d0();
      FUN_00aa28e0();
      local_1c = (int *)FUN_00fdbc60();
      local_20 = 0x7a18c0;
      (**(code **)(*param_1 + 0x30c))();
    }
    FUN_00bc34f0();
    return;
  case 0x10006d:
    iVar6 = FUN_00a81330();
    iVar7 = 0;
    if (iVar6 != 0) {
      iVar7 = FUN_00a7c8a0();
    }
    break;
  case 0x10006e:
    iVar6 = FUN_00a81330();
    uVar10 = 0;
    if ((iVar6 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      local_1c = (int *)0x7a1af5;
      (**(code **)(*piVar5 + 4))();
      local_1c = (int *)0x7a1afc;
      iVar6 = FUN_00dd6d80();
      uVar10 = -(uint)(iVar6 != 0) & (uint)piVar5;
    }
    (**(code **)(*param_1 + 0x314))();
    if (param_1[0x187] == 0) {
      FUN_00863be0();
      local_1c = (int *)0xbf800000;
      local_20 = 0x8000000;
      FUN_00aa4520();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 6;
      local_1c = (int *)0x7a1b7a;
      FUN_00b7c980();
      iVar6 = FUN_00fdbc60();
      iVar7 = FUN_00b7c970();
      if (iVar7 <= iVar6) {
        param_1[0x250] = 10;
      }
      local_1c = (int *)0x7a1bad;
      FUN_00b7c980();
      iVar6 = FUN_00fdbc60();
      iVar7 = FUN_00b7c970();
      if (iVar7 <= iVar6) {
        param_1[0x250] = 0x14;
      }
      local_1c = (int *)0x7a1be0;
      FUN_00b7c980();
      iVar6 = FUN_00fdbc60();
      iVar7 = FUN_00b7c970();
      if (iVar7 <= iVar6) {
        param_1[0x250] = 0x1e;
      }
      local_1c = (int *)0x7a1c13;
      FUN_00b7c980();
      iVar6 = FUN_00fdbc60();
      iVar7 = FUN_00b7c970();
      if (iVar7 <= iVar6) {
        param_1[0x250] = 0x28;
      }
      iVar6 = FUN_00b7ec80();
      if (iVar6 == 0) {
        param_1[0x250] = param_1[0x250] / 2;
      }
      iVar6 = FUN_00b7ec80();
      if (2 < iVar6) {
        param_1[0x250] = param_1[0x250] + 5;
      }
      local_1c = (int *)0x0;
      local_20 = 0x41f00000;
      FUN_00db3e80();
      if (uVar10 != 0) {
        local_1c = (int *)0x7a1c94;
        FUN_00ac84d0();
        FUN_00aa28e0();
        local_1c = (int *)FUN_00fdbc60();
        local_20 = 0x7a1cbf;
        (**(code **)(*param_1 + 0x30c))();
      }
      local_1c = (int *)0x3f800000;
      local_20 = 0x3f000000;
      FUN_00b80920();
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00e26e90();
    local_1c = (int *)0x7a1cf9;
    FUN_00e22f10();
    local_1c = (int *)0x3f800000;
    local_20 = 0x7a1d0c;
    FUN_00b94790();
    local_1c = (int *)0x7a1d15;
    iVar6 = FUN_00a94ce0();
    if (iVar6 != 0) {
      local_1c = (int *)0x7a1d27;
      (**(code **)(*param_1 + 0x388))();
      local_1c = (int *)0x0;
      local_20 = 0;
      FUN_00a8caf0();
      FUN_00b96b30();
      iVar6 = FUN_00b7c970();
      if (iVar6 < 1) {
        local_1c = (int *)0x0;
        local_20 = 0;
        FUN_00a8caf0();
      }
    }
    local_1c = (int *)0x7a1d66;
    iVar6 = FUN_00a8c760();
    if (iVar6 == 0) {
      return;
    }
    if (uVar10 != 0) {
      local_1c = (int *)0x7a1d7b;
      FUN_00ac84d0();
      FUN_00aa28e0();
      local_1c = (int *)FUN_00fdbc60();
      local_20 = 0x7a1da6;
      (**(code **)(*param_1 + 0x30c))();
    }
    FUN_00bc34f0();
    return;
  case 0x10006f:
    iVar6 = FUN_00a81330();
    uVar10 = 0;
    local_64 = (float)iVar6;
    if ((iVar6 != 0) && (local_68 = (int *)FUN_00a7c8a0(), local_68 != (int *)0x0)) {
      puVar15 = &DAT_01b35a10;
      (**(code **)(*local_68 + 4))(&DAT_01b35a10);
      iVar7 = FUN_00dd6d80(puVar15);
      uVar10 = -(uint)(iVar7 != 0) & (uint)local_68;
    }
    iVar7 = param_1[0x187];
    if (iVar7 == 0) {
      FUN_00b94790(0x3f800000,0x3f800000);
      DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
      DAT_01bea060 = DAT_01bea060 | 0x2000000;
      param_1[0x248] = 0x41200000;
      param_1[0x187] = param_1[0x187] + 1;
    }
    else {
      if (iVar7 == 1) {
        FUN_00b94790(0x3f800000,0x3f800000);
        fVar3 = (float)param_1[0x248] - _DAT_01be942c;
        param_1[0x248] = (int)fVar3;
        if (uVar10 == 0) goto LAB_0082ab42;
        if (0.0 < fVar3) {
          return;
        }
        FUN_00bee830();
        FUN_00aa4520(0xcf,iVar6,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
        FUN_00db3e80(0,0,&DAT_01bea1d0);
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e22f10(0);
        param_1[0x250] = 0;
        FUN_00b80920(local_64,0x40400000,0x3fc00000,0x3f800000,0);
        iVar6 = FUN_008209f0();
        param_1[0x249] = (int)(float)iVar6;
        param_1[0x24b] = (int)((float)iVar6 * 0.0076923077);
        param_1[0x24a] = 0;
        param_1[0x250] = 0;
        local_64 = (float)iVar6;
        iVar7 = FUN_00a8eea0();
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x251] = iVar7;
        param_1[0x252] = iVar6;
      }
      else if (iVar7 != 2) {
        return;
      }
      if (uVar10 == 0) {
LAB_0082ab42:
        param_1[0x24] = 0;
        FUN_00ba6810(1,0);
        return;
      }
      FUN_00db3e80(0,0,&DAT_01bea1d0);
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10(0);
      FUN_00b94790(0x3f800000,0x3f800000);
      iVar6 = FUN_00a8c760(0x2f);
      if (iVar6 != 0) {
        param_1[0x461] = 1;
      }
      iVar6 = FUN_00a12210(0xf00);
      if (iVar6 != 0) {
        fVar11 = (float10)FUN_00ddba30(*(float *)(uVar10 + 0x94) + *(float *)(iVar6 + 0x94));
        param_1[0x25] = (int)(float)fVar11;
        if (*(int *)(uVar10 + 0x940) == 0) {
          D3DXMatrixRotationY(&pcStack_50,*(undefined4 *)(uVar10 + 0x94));
          D3DXVec3TransformNormal(&local_68,iVar6 + 0x50,&fStack_58);
          *(float *)(uVar10 + 0x50) = (float)param_1[0x14] - fStack_60;
          *(float *)(uVar10 + 0x54) = (float)param_1[0x15] - fStack_5c;
          *(float *)(uVar10 + 0x58) = (float)param_1[0x16] - fStack_58;
          *(float *)(uVar10 + 0x5c) = (float)param_1[0x17] - fStack_54;
        }
      }
      iVar6 = FUN_00a8c760(0x16);
      if (iVar6 != 0) {
        param_1[0x250] = param_1[0x250] + 1;
      }
      if ((param_1[0x250] != 0) && (0.0 < (float)param_1[0x249])) {
        param_1[0x249] =
             (int)((float)param_1[0x249] - (float)param_1[0x244] * (float)param_1[0x24b]);
        fVar3 = (float)param_1[0x244] * (float)param_1[0x24b] + (float)param_1[0x24a];
        param_1[0x24a] = (int)fVar3;
        if (!NAN(fVar3) && 1.0 < fVar3 != (fVar3 == 1.0)) {
          local_64 = (float)FUN_00fdbc60();
          param_1[0x24a] = (int)(float)(extraout_ST0 - (float10)(int)local_64);
          (**(code **)(*param_1 + 0x30c))(local_64,0);
        }
      }
      iVar6 = FUN_00a94ce0(0);
      if (iVar6 != 0) {
        if (param_1[0x250] == 0) {
          uVar8 = FUN_008209f0();
          (**(code **)(*param_1 + 0x30c))(uVar8,0);
          param_1[0x250] = param_1[0x250] + 1;
        }
        FUN_00a7c950();
        FUN_00ba6810(1,1);
        iVar6 = FUN_00a8eea0();
        if (0 < iVar6) {
          FUN_00a8caf0(0x100055,0,0,0);
          return;
        }
        FUN_00a8caf0(0x100063,0,0,0);
        return;
      }
    }
    return;
  case 0x100070:
    return;
  case 0x100071:
    return;
  case 0x100072:
    return;
  case 0x100073:
    return;
  case 0x100074:
    FUN_008407b0();
    return;
  case 0x100075:
    FUN_00840ca0();
    return;
  case 0x100076:
    FUN_008412e0();
    return;
  case 0x100077:
    FUN_00841ae0();
    return;
  default:
    return;
  case 0x100079:
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a7c8a0();
    }
    _DAT_01bea860 = 1;
    FUN_00a92f90();
    FUN_00e26e90();
    local_1c = (int *)0x843413;
    FUN_00e22f10();
    switch(param_1[0x187]) {
    case 0:
      local_1c = (int *)0xbf800000;
      local_20 = 0x8100000;
      FUN_00aa4520();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0xdfc] = param_1[0x10];
      local_1c = (int *)0x0;
      param_1[0xdfd] = param_1[0x11];
      param_1[0xdfe] = param_1[0x12];
      param_1[0xdff] = param_1[0x13];
      param_1[0xe00] = param_1[0x25];
      local_20 = 0;
      FUN_00db3e80();
      param_1[0x248] = param_1[0x25];
      param_1[0x2dd] = 0;
      FUN_0093db80();
      param_1[0x245] = 0;
      param_1[0x250] = 0;
      local_1c = (int *)0x8434eb;
      fVar11 = (float10)FUN_00ddba30();
      param_1[0x9fb] = (int)(float)fVar11;
      local_1c = (int *)0x3f800000;
      local_20 = 0x3f000000;
      FUN_00b80920();
      (**(code **)(*param_1 + 0x314))();
    case 1:
      local_1c = (int *)0x3f800000;
      local_20 = 0x843538;
      FUN_00b94790();
      local_1c = (int *)0x843541;
      iVar6 = FUN_00a94ce0();
      if (iVar6 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      break;
    case 2:
      goto LAB_008435bf;
    case 3:
    case 5:
      goto switchD_00843424_caseD_3;
    case 4:
LAB_008435bf:
      local_1c = (int *)0xbf800000;
      local_20 = 0x8100000;
      FUN_00aa4520();
      param_1[0x187] = param_1[0x187] + 1;
switchD_00843424_caseD_3:
      local_1c = (int *)0x3f800000;
      local_20 = 0x8435df;
      FUN_00b94790();
      local_1c = (int *)0x8435e8;
      iVar6 = FUN_00a94ce0();
      if (iVar6 == 0) {
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    case 6:
      local_1c = (int *)0xbf800000;
      local_20 = 0x8100000;
      FUN_00aa4520();
      param_1[0x187] = param_1[0x187] + 1;
    case 7:
      local_1c = (int *)0x3f800000;
      local_20 = 0x843674;
      FUN_00b94790();
      local_1c = (int *)0x84367d;
      iVar6 = FUN_00a94ce0();
      if (iVar6 != 0) {
        local_1c = (int *)0x843693;
        (**(code **)(*param_1 + 0x388))();
        local_1c = (int *)0x1;
        local_20 = 0x84369c;
        FUN_00ba6810();
        local_1c = (int *)0x0;
        local_20 = 0;
        FUN_00a8caf0();
        iVar6 = FUN_00b7c970();
        if (iVar6 < 1) {
          local_1c = (int *)0x0;
          local_20 = 0;
          FUN_00a8caf0();
        }
      }
      break;
    default:
      goto switchD_00843424_default;
    }
    local_1c = (int *)0x843554;
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      local_1c = (int *)0x843569;
      FUN_00ac84d0();
      FUN_00aa28e0();
      local_1c = (int *)FUN_00fdbc60();
      local_20 = 0x84358c;
      (**(code **)(*param_1 + 0x30c))();
      return;
    }
switchD_00843424_default:
    return;
  case 0x10007a:
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a7c8a0();
    }
    _DAT_01bea860 = 1;
    FUN_00a92f90();
    FUN_00e26e90();
    local_1c = (int *)0x84316a;
    FUN_00e22f10();
    switch(param_1[0x187]) {
    case 0:
      local_1c = (int *)0xbf800000;
      local_20 = 0x8000000;
      FUN_00aa4520();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0xdfc] = param_1[0x10];
      local_1c = (int *)0x0;
      param_1[0xdfd] = param_1[0x11];
      param_1[0xdfe] = param_1[0x12];
      param_1[0xdff] = param_1[0x13];
      param_1[0xe00] = param_1[0x25];
      local_20 = 0x41a00000;
      FUN_00db3e80();
      param_1[0x248] = param_1[0x25];
      param_1[0x2dd] = 0;
      FUN_0093db80();
      param_1[0x245] = 0;
      param_1[0x250] = 0;
      local_1c = (int *)0x843246;
      fVar11 = (float10)FUN_00ddba30();
      param_1[0x9fb] = (int)(float)fVar11;
      local_1c = (int *)0x3f800000;
      local_20 = 0x3f000000;
      FUN_00b80920();
      (**(code **)(*param_1 + 0x314))();
    case 1:
      local_1c = (int *)0x3f800000;
      local_20 = 0x843294;
      FUN_00b94790();
      local_1c = (int *)0x84329d;
      iVar6 = FUN_00a94ce0();
      if (iVar6 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 2:
      local_1c = (int *)0xbf800000;
      local_20 = 0x8000000;
      FUN_00aa4520();
      param_1[0x187] = param_1[0x187] + 1;
      local_1c = (int *)0x8432f0;
      FUN_00ac84d0();
      FUN_00aa28e0();
      local_1c = (int *)FUN_00fdbc60();
      local_20 = 0x843313;
      (**(code **)(*param_1 + 0x30c))();
    case 3:
      local_1c = (int *)0x3f800000;
      local_20 = 0x843326;
      FUN_00b94790();
      local_1c = (int *)0x84332f;
      iVar6 = FUN_00a94ce0();
      if (iVar6 != 0) {
        local_1c = (int *)0x843341;
        (**(code **)(*param_1 + 0x388))();
        local_1c = (int *)0x1;
        local_20 = 1;
        FUN_00ba6810();
        local_1c = (int *)0x0;
        local_20 = 0;
        FUN_00a8caf0();
        local_1c = (int *)0x843365;
        iVar6 = FUN_00b7c970();
        if (iVar6 < 1) {
          local_1c = (int *)0x0;
          local_20 = 0;
          FUN_00a8caf0();
          return;
        }
      }
    }
    return;
  case 0x10007b:
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a7c8a0();
    }
    _DAT_01bea860 = 1;
    FUN_00a92f90();
    FUN_00e26e90();
    local_1c = (int *)0x84376a;
    FUN_00e22f10();
    switch(param_1[0x187]) {
    case 0:
      local_1c = (int *)0xbf800000;
      local_20 = 0x8100000;
      FUN_00aa4520();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0xdfc] = param_1[0x10];
      local_1c = (int *)0x0;
      param_1[0xdfd] = param_1[0x11];
      param_1[0xdfe] = param_1[0x12];
      param_1[0xdff] = param_1[0x13];
      param_1[0xe00] = param_1[0x25];
      local_20 = 0x41a00000;
      FUN_00db3e80();
      param_1[0x248] = param_1[0x25];
      param_1[0x2dd] = 0;
      FUN_0093db80();
      param_1[0x245] = 0;
      param_1[0x250] = 0;
      local_1c = (int *)0x843846;
      fVar11 = (float10)FUN_00ddba30();
      param_1[0x9fb] = (int)(float)fVar11;
      local_1c = (int *)0x3f800000;
      local_20 = 0x3f000000;
      FUN_00b80920();
      (**(code **)(*param_1 + 0x314))();
    case 1:
      local_1c = (int *)0x3f800000;
      local_20 = 0x843894;
      FUN_00b94790();
      local_1c = (int *)0x84389d;
      iVar6 = FUN_00a94ce0();
      if (iVar6 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 2:
      local_1c = (int *)0xbf800000;
      local_20 = 0x8100000;
      FUN_00aa4520();
      param_1[0x187] = param_1[0x187] + 1;
      local_1c = (int *)0x8438f0;
      FUN_00ac84d0();
      FUN_00aa28e0();
      local_1c = (int *)FUN_00fdbc60();
      local_20 = 0x843913;
      (**(code **)(*param_1 + 0x30c))();
    case 3:
      local_1c = (int *)0x3f800000;
      local_20 = 0x843926;
      FUN_00b94790();
      local_1c = (int *)0x84392f;
      iVar6 = FUN_00a94ce0();
      if (iVar6 != 0) {
        local_1c = (int *)0x843941;
        (**(code **)(*param_1 + 0x388))();
        local_1c = (int *)0x1;
        local_20 = 1;
        FUN_00ba6810();
        local_1c = (int *)0x0;
        local_20 = 0;
        FUN_00a8caf0();
        local_1c = (int *)0x843965;
        iVar6 = FUN_00b7c970();
        if (iVar6 < 1) {
          local_1c = (int *)0x0;
          local_20 = 0;
          FUN_00a8caf0();
          return;
        }
      }
    }
    return;
  case 0x10007e:
    (**(code **)(*param_1 + 0x318))();
    param_1[0xc60] = 0;
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a7c8a0();
    }
    local_1c = (int *)0x809c1f;
    (**(code **)(*param_1 + 0x220))();
    _DAT_01bea860 = 1;
    local_1c = (int *)0x809c37;
    FUN_00e26e90();
    local_1c = (int *)0x0;
    local_20 = 0x809c44;
    FUN_00e22f10();
    switch(param_1[0x187]) {
    case 0:
      local_1c = (int *)0x3f800000;
      local_20 = 0;
      FUN_00aa4520();
      local_1c = (int *)0x8000000;
      local_20 = 0x165;
      FUN_0085dcf0();
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00864480();
      pcVar2 = *(code **)(*param_1 + 0x394);
      param_1[0x187] = param_1[0x187] + 1;
      local_1c = (int *)0x809cd6;
      (*pcVar2)();
      if (param_1[0x1d9] != 0) {
        local_1c = (int *)0x809ce5;
        FUN_008e3c10();
      }
      if (unaff_EBX != 0.0) {
        local_1c = (int *)0x809cf2;
        local_1c = (int *)FUN_009f8b40();
        local_20 = 0x809cfa;
        FUN_009f8ae0();
      }
      local_1c = (int *)&DAT_01bea1d0;
      param_1[0x248] = 0x42200000;
      local_20 = 0;
      param_1[0xdfc] = param_1[0x10];
      param_1[0xdfd] = param_1[0x11];
      param_1[0xdfe] = param_1[0x12];
      param_1[0xdff] = param_1[0x13];
      param_1[0xe00] = param_1[0x25];
      FUN_00db3e80();
      local_1c = (int *)0x1648418;
      local_20 = 0x809d57;
      FUN_00e5e1b0();
      break;
    case 1:
      break;
    case 2:
      local_1c = (int *)0x3f800000;
      local_20 = 0;
      FUN_00aa4520();
      local_1c = (int *)0x8000000;
      local_20 = 0x166;
      FUN_0085dcf0();
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00864480();
      param_1[0x187] = param_1[0x187] + 1;
      goto LAB_00809e1f;
    case 3:
LAB_00809e1f:
      local_1c = (int *)0x3f800000;
      local_20 = 0x3f800000;
      FUN_00b94790();
      local_1c = (int *)0xb;
      local_20 = 0x809e39;
      iVar6 = FUN_00a8c760();
      if (iVar6 != 0) {
        local_1c = (int *)0x0;
        local_20 = 1;
        FUN_00d5ea40();
      }
      local_1c = (int *)0x0;
      local_20 = 0x809e58;
      iVar6 = FUN_00a94ce0();
      if (iVar6 == 0) {
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    case 4:
      local_1c = (int *)0x3f800000;
      local_20 = 0;
      FUN_00aa4520();
      local_1c = (int *)0x8000000;
      local_20 = 0x167;
      FUN_0085dcf0();
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00864480();
      param_1[0x187] = param_1[0x187] + 1;
      goto LAB_00809ede;
    case 5:
LAB_00809ede:
      local_1c = (int *)0x3f800000;
      local_20 = 0x3f800000;
      FUN_00b94790();
      local_1c = (int *)0xb;
      local_20 = 0x809ef8;
      iVar6 = FUN_00a8c760();
      if (iVar6 != 0) {
        local_1c = (int *)0x0;
        local_20 = 1;
        FUN_00d5ea40();
      }
      local_1c = (int *)0x0;
      local_20 = 0x809f17;
      iVar6 = FUN_00a94ce0();
      if (iVar6 == 0) {
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    case 6:
      local_1c = (int *)0x3f800000;
      local_20 = 0;
      FUN_00aa4520();
      local_1c = (int *)0x8000000;
      local_20 = 0x168;
      FUN_0085dcf0();
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00864480();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x2dd] = 1;
      goto LAB_00809f9f;
    case 7:
LAB_00809f9f:
      local_1c = (int *)0x3f800000;
      local_20 = 0x3f800000;
      FUN_00b94790();
      local_1c = (int *)0xb;
      local_20 = 0x809fb9;
      iVar6 = FUN_00a8c760();
      if (iVar6 != 0) {
        local_1c = (int *)0x0;
        local_20 = 1;
        FUN_00d5ea40();
      }
      local_1c = (int *)0x0;
      local_20 = 0x809fd8;
      iVar6 = FUN_00a94ce0();
      if (iVar6 != 0) {
        local_1c = (int *)0x0;
        local_20 = 1;
        FUN_00a94bc0();
        local_1c = (int *)0x809ff1;
        FUN_009f8b10();
        if (param_1[0x1d9] != 0) {
          FUN_008e6d00();
          return;
        }
      }
    default:
      goto switchD_00809c57_default;
    }
    local_1c = (int *)0x3f800000;
    local_20 = 0x3f800000;
    FUN_00b94790();
    local_1c = (int *)0xb;
    local_20 = 0x809d7a;
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      local_1c = (int *)0x0;
      local_20 = 1;
      FUN_00d5ea40();
    }
    local_1c = (int *)0x0;
    local_20 = 0x809d99;
    iVar6 = FUN_00a94ce0();
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
switchD_00809c57_default:
    return;
  case 0x10007f:
    (**(code **)(*param_1 + 0x318))();
    param_1[0xc60] = 0;
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a7c8a0();
    }
    local_1c = (int *)0x80a11f;
    (**(code **)(*param_1 + 0x220))();
    _DAT_01bea860 = 1;
    local_1c = (int *)0x80a137;
    FUN_00e26e90();
    local_1c = (int *)0x0;
    local_20 = 0x80a144;
    FUN_00e22f10();
    switch(param_1[0x187]) {
    case 0:
      local_1c = (int *)0x3f800000;
      local_20 = 0;
      FUN_00aa4520();
      local_1c = (int *)0x8000000;
      local_20 = 0x16b;
      FUN_0085dcf0();
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00864480();
      pcVar2 = *(code **)(*param_1 + 0x394);
      param_1[0x187] = param_1[0x187] + 1;
      local_1c = (int *)0x80a1d6;
      (*pcVar2)();
      if (param_1[0x1d9] != 0) {
        local_1c = (int *)0x80a1e5;
        FUN_008e3c10();
      }
      if (unaff_EBX != 0.0) {
        local_1c = (int *)0x80a1f2;
        local_1c = (int *)FUN_009f8b40();
        local_20 = 0x80a1fa;
        FUN_009f8ae0();
      }
      local_1c = (int *)&DAT_01bea1d0;
      param_1[0xdfc] = param_1[0x10];
      local_20 = 0;
      param_1[0xdfd] = param_1[0x11];
      param_1[0xdfe] = param_1[0x12];
      param_1[0xdff] = param_1[0x13];
      param_1[0xe00] = param_1[0x25];
      FUN_00db3e80();
      break;
    case 1:
    case 3:
    case 5:
    case 7:
      break;
    case 2:
      local_1c = (int *)0x3f800000;
      local_20 = 0;
      FUN_00aa4520();
      local_1c = (int *)0x8000000;
      local_20 = 0x16c;
      FUN_0085dcf0();
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00864480();
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 4:
      local_1c = (int *)0x3f800000;
      local_20 = 0;
      FUN_00aa4520();
      local_1c = (int *)0x8000000;
      local_20 = 0x16d;
      FUN_0085dcf0();
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00864480();
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 6:
      local_1c = (int *)0x3f800000;
      local_20 = 0;
      FUN_00aa4520();
      local_1c = (int *)0x8000000;
      local_20 = 0x16e;
      FUN_0085dcf0();
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00864480();
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 8:
      local_1c = (int *)0x3f800000;
      local_20 = 0;
      FUN_00aa4520();
      local_1c = (int *)0x8000000;
      local_20 = 0x16f;
      FUN_0085dcf0();
      local_1c = (int *)0x8000000;
      local_20 = 0x3f800000;
      FUN_00864480();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x2dd] = 1;
      goto LAB_0080a442;
    case 9:
LAB_0080a442:
      local_1c = (int *)0x3f800000;
      local_20 = 0x3f800000;
      FUN_00b94790();
      local_1c = (int *)0xb;
      local_20 = 0x80a45c;
      iVar6 = FUN_00a8c760();
      if (iVar6 != 0) {
        local_1c = (int *)0x0;
        local_20 = 1;
        FUN_00d5ea40();
      }
      local_1c = (int *)0x0;
      local_20 = 0x80a47b;
      iVar6 = FUN_00a94ce0();
      if (iVar6 != 0) {
        local_1c = (int *)0x0;
        local_20 = 0x80a48b;
        FUN_00dc1300();
        local_1c = (int *)0x0;
        local_20 = 1;
        FUN_00a94bc0();
        local_1c = (int *)0x80a4a0;
        FUN_009f8b10();
        if (param_1[0x1d9] != 0) {
          FUN_008e6d00();
          return;
        }
      }
    default:
      goto switchD_0080a157_default;
    }
    local_1c = (int *)0x3f800000;
    local_20 = 0x3f800000;
    FUN_00b94790();
    local_1c = (int *)0x0;
    local_20 = 0x80a261;
    iVar6 = FUN_00a94ce0();
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
switchD_0080a157_default:
    return;
  }
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00863be0();
    local_1c = (int *)0xbf800000;
    local_20 = 0x8000000;
    FUN_00aa4520();
    param_1[0x187] = param_1[0x187] + 1;
    local_1c = (int *)0x0;
    local_20 = 0x41f00000;
    param_1[0x250] = 0;
    FUN_00db3e80();
    if (iVar7 != 0) {
      local_1c = (int *)0x79b3ff;
      FUN_00ac84d0();
      FUN_00aa28e0();
      local_1c = (int *)FUN_00fdbc60();
      local_20 = 0x79b42a;
      (**(code **)(*param_1 + 0x30c))();
    }
    local_1c = (int *)0x3f800000;
    local_20 = 0x3f000000;
    FUN_00b80920();
    break;
  case 1:
    break;
  case 2:
    local_1c = (int *)0xbf800000;
    local_20 = 0x8000000;
    FUN_00aa4520();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    goto LAB_0079b4f8;
  case 3:
LAB_0079b4f8:
    FUN_00e26e90();
    local_1c = (int *)0x79b512;
    FUN_00e22f10();
    local_1c = (int *)0x3f800000;
    local_20 = 0x79b525;
    FUN_00b94790();
    iVar6 = FUN_00b7c970();
    if (0 < iVar6) {
      local_1c = (int *)0x4000;
      local_20 = 0x79b53b;
      FUN_00cbc8f0();
    }
    iVar6 = FUN_00b7a7c0();
    param_1[0x250] = param_1[0x250] + iVar6;
    local_1c = (int *)0x79b554;
    iVar6 = FUN_00a94ce0();
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      uVar10 = 10;
      local_1c = (int *)0x79b570;
      FUN_00b7c980();
      iVar6 = FUN_00fdbc60();
      iVar4 = FUN_00b7c970();
      if (iVar4 <= iVar6) {
        uVar10 = 0xf;
      }
      local_1c = (int *)0x79b59e;
      FUN_00b7c980();
      iVar6 = FUN_00fdbc60();
      iVar4 = FUN_00b7c970();
      if (iVar4 <= iVar6) {
        uVar10 = 0x14;
      }
      local_1c = (int *)0x79b5cc;
      FUN_00b7c980();
      iVar6 = FUN_00fdbc60();
      iVar4 = FUN_00b7c970();
      if (iVar4 <= iVar6) {
        uVar10 = 0x28;
      }
      local_1c = (int *)0x79b5fa;
      FUN_00b7c980();
      iVar6 = FUN_00fdbc60();
      iVar4 = FUN_00b7c970();
      if (iVar4 <= iVar6) {
        uVar10 = 0x3c;
      }
      iVar6 = FUN_00b7ec80();
      if (iVar6 == 0) {
        uVar10 = uVar10 / 2;
      }
      iVar6 = FUN_00b7ec80();
      if (2 < iVar6) {
        uVar10 = uVar10 + 5;
      }
      if (((int)uVar10 <= param_1[0x250]) && (iVar6 = FUN_00b7c970(), 0 < iVar6)) {
        param_1[0x187] = 6;
      }
    }
    local_1c = (int *)0x79b668;
    iVar6 = FUN_00a8c760();
    if (iVar6 == 0) {
      return;
    }
    if (iVar7 != 0) {
      local_1c = (int *)0x79b67d;
      FUN_00ac84d0();
      FUN_00aa28e0();
      local_1c = (int *)FUN_00fdbc60();
      local_20 = 0x79b6a8;
      (**(code **)(*param_1 + 0x30c))();
    }
LAB_0079b6a8:
    FUN_00bc34f0();
    return;
  case 4:
    local_1c = (int *)0xbf800000;
    local_20 = 0x8000000;
    FUN_00aa4520();
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0079b6f4;
  case 5:
LAB_0079b6f4:
    FUN_00e26e90();
    local_1c = (int *)0x79b70e;
    FUN_00e22f10();
    local_1c = (int *)0x3f800000;
    local_20 = 0x79b721;
    FUN_00b94790();
    local_1c = (int *)0x79b72a;
    iVar6 = FUN_00a94ce0();
    if (iVar6 != 0) {
      local_1c = (int *)0x79b73c;
      (**(code **)(*param_1 + 0x388))();
      local_1c = (int *)0x0;
      local_20 = 0;
      FUN_00a8caf0();
      FUN_00b96b30();
      iVar6 = FUN_00b7c970();
      if (iVar6 < 1) {
        local_1c = (int *)0x0;
        local_20 = 0;
        FUN_00a8caf0();
      }
    }
    local_1c = (int *)0x79b77b;
    iVar6 = FUN_00a8c760();
    if (iVar6 == 0) {
      return;
    }
    if (iVar7 != 0) {
      local_1c = (int *)0x79b794;
      FUN_00ac84d0();
      FUN_00aa28e0();
      local_1c = (int *)FUN_00fdbc60();
      local_20 = 0x79b7bf;
      (**(code **)(*param_1 + 0x30c))();
      FUN_00bc34f0();
      return;
    }
    goto LAB_0079b6a8;
  case 6:
    local_1c = (int *)0xbf800000;
    local_20 = 0x8000000;
    FUN_00aa4520();
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0079b807;
  case 7:
LAB_0079b807:
    FUN_00e26e90();
    local_1c = (int *)0x79b821;
    FUN_00e22f10();
    local_1c = (int *)0x3f800000;
    local_20 = 0x79b834;
    FUN_00b94790();
    local_1c = (int *)0x79b83d;
    iVar6 = FUN_00a94ce0();
    if (iVar6 != 0) {
      local_1c = (int *)0x79b84f;
      (**(code **)(*param_1 + 0x388))();
      local_1c = (int *)0x79b856;
      FUN_00b96b30();
      local_1c = (int *)0x79b85d;
      iVar6 = FUN_00b7c970();
      if (iVar6 < 1) {
        local_1c = (int *)0x0;
        local_20 = 0;
        FUN_00a8caf0();
        return;
      }
    }
  default:
    goto switchD_0079b385_default;
  }
  FUN_00e26e90();
  local_1c = (int *)0x79b467;
  FUN_00e22f10();
  local_1c = (int *)0x3f800000;
  local_20 = 0x79b47a;
  FUN_00b94790();
  local_1c = (int *)0x79b483;
  iVar6 = FUN_00a94ce0();
  if (iVar6 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  iVar6 = FUN_00b7c970();
  if (0 < iVar6) {
    local_1c = (int *)0x4000;
    local_20 = 0x79b4a7;
    FUN_00cbc8f0();
    return;
  }
switchD_0079b385_default:
  return;
switchD_00742c4d_caseD_6:
  piStack_44 = (int *)0x1;
  local_48 = (undefined1 *)0x7430ea;
  FUN_00ac4c70();
  piStack_44 = (int *)0x3f800000;
  local_48 = (undefined1 *)0xbf800000;
  puStack_4c = (undefined1 *)0x8000000;
  pcStack_50 = (char *)0x3f800000;
  fStack_54 = 0.0;
  fStack_58 = 0.0;
  fStack_60 = 4.25995e-43;
  local_64 = 1.0670535e-38;
  fStack_5c = fVar3;
  FUN_00aa4520();
  piStack_44 = (int *)0x0;
  local_48 = (undefined1 *)0x743125;
  FUN_00ac4c70();
  param_1[0x187] = param_1[0x187] + 1;
  if (param_1[0x1d9] != 0) {
    piStack_44 = (int *)0x74313a;
    FUN_008e6d00();
  }
switchD_00742c4d_caseD_7:
  piStack_44 = (int *)0x0;
  local_48 = (undefined1 *)0x743143;
  FUN_00a92f90();
  local_48 = (undefined1 *)0x74314a;
  FUN_00404b90();
  piStack_44 = (int *)0x3f800000;
  local_48 = (undefined1 *)0x3f800000;
  puStack_4c = (undefined1 *)0x74315d;
  FUN_00b94790();
  piStack_44 = (int *)0x0;
  local_48 = (undefined1 *)0x743166;
  iVar6 = FUN_00a94ce0();
  if (iVar6 == 0) {
    return;
  }
  piStack_44 = (int *)0x0;
  local_48 = (undefined1 *)0x41700000;
  puStack_4c = (undefined1 *)0x743184;
  FUN_00dc1270();
  piStack_44 = (int *)0xe;
  local_48 = (undefined1 *)0x74318d;
  FUN_00ac8520();
  iVar6 = *param_1;
  piStack_44 = (int *)0x0;
  local_48 = (undefined1 *)0x74319c;
  FUN_00aa28e0();
  local_48 = (undefined1 *)0x7431a5;
  local_48 = (undefined1 *)FUN_00fdbc60();
  puStack_4c = (undefined1 *)0x7431b0;
  (**(code **)(iVar6 + 0x30c))();
  if (param_1[0x1d9] != 0) {
    puStack_4c = (undefined1 *)0x7431bf;
    FUN_008e6d00();
  }
  puStack_4c = (undefined1 *)0x7431ca;
  FUN_00a7c950();
  puStack_4c = (undefined1 *)0x1;
  pcStack_50 = (char *)0x1;
  fStack_54 = 1.0670794e-38;
  FUN_00ba6810();
  puStack_4c = (undefined1 *)0x7431dc;
  iVar6 = FUN_00b7c970();
  puStack_4c = (undefined1 *)0x0;
  pcStack_50 = (char *)0x0;
  fStack_54 = 0.0;
  if (0 < iVar6) {
    fStack_58 = 1.469487e-39;
    fStack_5c = 1.0670858e-38;
    FUN_00a8caf0();
    return;
  }
  fStack_58 = 1.469507e-39;
  fStack_5c = 1.0670835e-38;
  FUN_00a8caf0();
  return;
}

// 0089CD60  Pl1400::vf414  size=489  [class]
void __fastcall Pl1400::vf414(int *param_1)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iStack_c14;
  undefined **ppuStack_c10;
  undefined1 *puStack_c0c;
  int iStack_c08;
  undefined4 uStack_c04;
  undefined1 auStack_c00 [3072];
  
  FUN_00c15320();
  bVar3 = false;
  param_1[0x3d5] = 0;
  iVar6 = param_1[0x21c];
  iVar4 = (**(code **)(*param_1 + 0x1fc))();
  iVar1 = param_1[0x139];
  bVar2 = (byte)DAT_01bea090 & 0x10;
  iVar5 = (**(code **)(*param_1 + 0x32c))();
  if ((param_1[0x1518] != 0) ||
     (iVar5 != 0 || (bVar2 != 0 || (iVar1 != 0 || (iVar4 != 0 || iVar6 < 1))))) {
    param_1[0x3d3] = 0;
    FUN_00c59380();
    param_1[0x1510] = 0;
    param_1[0x3d4] = 1;
    return;
  }
  puStack_c0c = auStack_c00;
  iStack_c08 = 0;
  uStack_c04 = 0x20;
  ppuStack_c10 = lib::StaticArray<cQteArea,32>::vftable;
  if ((((byte)DAT_01bea090 & 0x10) == 0) &&
     (FUN_00c66140(param_1 + 0x10,param_1[0x25],0x3f800000,0x40000000,&ppuStack_c10),
     puVar7 = puStack_c0c, puStack_c0c != puStack_c0c + iStack_c08 * 0x60)) {
    do {
      iVar6 = (**(code **)(*param_1 + 0x418))(puVar7,&iStack_c14);
      if (iVar6 != 0) {
        DAT_018b56b4 = 1;
        FUN_005f5330(puVar7);
        goto LAB_0089ceab;
      }
      if (iStack_c14 != 0) {
        bVar3 = true;
      }
      puVar7 = puVar7 + 0x60;
    } while (puVar7 != puStack_c0c + iStack_c08 * 0x60);
    if (bVar3) {
LAB_0089ceab:
      if (param_1[0x3d3] == 0) {
        param_1[0x3d5] = 1;
      }
      param_1[0x3d3] = 1;
      goto LAB_0089cef0;
    }
  }
  param_1[0x3d3] = 0;
LAB_0089cef0:
  param_1[0x1510] = 0;
  if ((iStack_c08 != 0) &&
     ((FUN_00c594f0(&ppuStack_c10), *(int *)(puStack_c0c + 0x58) != 2 ||
      (param_1[0x186] != 0x100066)))) {
    FUN_0085cb20(puStack_c0c);
  }
  FUN_00c59380();
  param_1[0x3d4] = 1;
  return;
}

// 0089CF50  Pl1400::thunk_vf134  size=5  [class]
undefined4 __fastcall Pl1400::thunk_vf134(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1058) != 0) {
    FUN_008781b0();
  }
  FUN_00a7c950();
  if ((*(int *)(param_1 + 0x3ee0) == 0) && (*(int *)(param_1 + 0x3f80) == 0)) {
    *(undefined4 *)(param_1 + 0x2bb8) = 0;
    *(undefined4 *)(param_1 + 0x2c38) = 0;
    *(undefined4 *)(param_1 + 0xf58) = 0;
    if (((DAT_01bea090 & 0x10) == 0) && ((DAT_01bea060 & 0x2000000) == 0)) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x648) + 0x18);
      for (iVar1 = *(int *)(*(int *)(param_1 + 0x648) + 0x14); iVar1 != iVar2;
          iVar1 = *(int *)(iVar1 + 0xc)) {
        if (((((*(byte *)(iVar1 + 4) & 1) != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
            (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (FUN_00a7c8a0(), (DAT_01bea090 & 0x2000) == 0))
        {
          FUN_00a7c960(iVar1);
        }
      }
    }
  }
  return 0;
}

// 0089EC40  Pl1400::vf3FC  size=1235  [class]
void __fastcall Pl1400::vf3FC(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  undefined1 auStack_28c [4];
  undefined4 uStack_288;
  int iStack_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_270;
  float local_26c;
  float local_268;
  float fStack_264;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  undefined1 auStack_23c [8];
  int iStack_234;
  undefined1 local_230 [48];
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined1 auStack_1f0 [64];
  undefined1 local_1b0 [16];
  int iStack_1a0;
  int iStack_19c;
  
  *(undefined4 *)(param_1 + 0x544c) = 0;
  FUN_004066f0();
  if (*(int *)(param_1 + 0x10e4) != 0) {
    iVar5 = FUN_00a12210(5);
    local_280 = *(float *)(param_1 + 0x50);
    local_27c = *(float *)(param_1 + 0x54);
    local_278 = *(float *)(param_1 + 0x58);
    if (iVar5 != 0) {
      local_280 = *(float *)(iVar5 + 0x40);
      local_27c = *(float *)(iVar5 + 0x44);
      local_278 = *(float *)(iVar5 + 0x48);
    }
    D3DXMatrixRotationY(local_230,*(undefined4 *)(param_1 + 0x94));
    fStack_200 = local_280;
    fStack_1fc = local_27c;
    fStack_1f8 = local_278;
    Phantom::setTransform(local_230);
  }
  if ((((*(int *)(param_1 + 0x10f4) != 0) && ((DAT_01bea060 & 0x4a000000) == 0)) &&
      (*(int *)(param_1 + 0x10e4) != 0)) &&
     ((*(int *)(param_1 + 0x764) != 0 && (*(int *)(*(int *)(param_1 + 0x764) + 0x114) != 0)))) {
    local_270 = 0.0;
    local_26c = 0.0;
    local_268 = 0.0;
    hkpAllCdPointCollector::hkpAllCdPointCollector();
    FUN_00900350(local_1b0);
    if (0 < iStack_19c) {
      iStack_234 = 0;
      iStack_258 = 0;
      do {
        pfVar6 = (float *)(iStack_258 + iStack_1a0);
        fVar2 = pfVar6[10];
        iStack_284 = FUN_00445cc0(fVar2);
        iVar5 = FUN_00445ca0(fVar2);
        iStack_254 = 1;
        if (iVar5 == 0) {
          if (iStack_284 != 0) {
LAB_0089edd3:
            FUN_00860de0();
            if ((*(uint **)(iStack_284 + 0xc) == (uint *)0x0) ||
               (iStack_25c = 1, (**(uint **)(iStack_284 + 0xc) & 0x100) == 0)) {
              iStack_25c = 0;
            }
            if ((DAT_01885d68 != 1) &&
               (iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4),
               *(int *)(iVar3 + 4) == 0)) {
              piVar1 = (int *)(iVar3 + 8);
              *piVar1 = *piVar1 + -1;
              if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
                FUN_00dd7300();
              }
            }
            if (iStack_25c == 0) {
              iStack_254 = 0;
            }
            uVar4 = *(uint *)(iStack_284 + 0xc);
            if ((uVar4 == 0) || ((*(uint *)((-(uint)(uVar4 != 0) & uVar4) + 8) & 0x8000) == 0))
            goto LAB_0089ee76;
          }
        }
        else {
          uVar4 = *(uint *)(iVar5 + 0xc);
          if ((uVar4 != 0) && ((*(uint *)((-(uint)(uVar4 != 0) & uVar4) + 8) & 0x8000) != 0)) {
            iStack_254 = 0;
          }
          if (iStack_284 != 0) goto LAB_0089edd3;
LAB_0089ee76:
          if (iStack_254 != 0) {
            FUN_0048aaf0();
            fVar2 = pfVar6[7];
            if (fVar2 < 0.0) {
              fStack_244 = fStack_244 * fVar2;
              fStack_24c = pfVar6[5] * fVar2 * 0.7;
              fStack_250 = pfVar6[4] * fVar2 * 0.7;
              fStack_248 = pfVar6[6] * fVar2 * 0.7;
              local_280 = *pfVar6;
              local_27c = pfVar6[1];
              local_278 = pfVar6[2];
              D3DXMatrixInverse(local_230,0,param_1 + 0x10);
              D3DXVec3TransformNormal(auStack_28c,auStack_28c,auStack_23c);
              local_280 = fStack_200 + local_280;
              local_27c = fStack_1fc + local_27c;
              local_278 = fStack_1f8 + local_278;
              if (!NAN(local_278) && 0.0 < local_278 != (local_278 == 0.0)) {
                local_270 = local_270 + fStack_250;
                local_26c = local_26c + fStack_24c;
                local_268 = local_268 + fStack_248;
                fStack_264 = fStack_264 + fStack_244;
              }
              if (((iVar5 != 0) && (iVar5 = FUN_008f7780(iVar5), iVar5 != 0)) &&
                 ((*(byte *)(iVar5 + 0x4c0) & 0x20) != 0)) {
                *(undefined4 *)(param_1 + 0x544c) = 1;
              }
              if (((iStack_284 != 0) && (iVar5 = FUN_008f7780(iStack_284), iVar5 != 0)) &&
                 ((*(byte *)(iVar5 + 0x4c0) & 0x20) != 0)) {
                *(undefined4 *)(param_1 + 0x544c) = 1;
              }
            }
          }
        }
        iStack_258 = iStack_258 + 0x30;
        iStack_234 = iStack_234 + 1;
      } while (iStack_234 < iStack_19c);
    }
    D3DXMatrixInverse(auStack_1f0,0,param_1 + 0x10);
    D3DXVec3TransformNormal(&local_27c,&local_27c,&fStack_1fc);
    iStack_284 = 0;
    if (!NAN(local_280) && 0.0 < local_280 != (local_280 == 0.0)) {
      local_280 = 0.0;
      uStack_288 = 0;
    }
    D3DXVec3TransformNormal(&uStack_288,&uStack_288,param_1 + 0x10);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_270;
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + local_26c;
    *(float *)(param_1 + 0x58) = local_268 + *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) = fStack_264 + *(float *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0xbf0) != 0) {
      local_280 = 0.0;
      local_27c = -0.5;
      local_278 = 0.0;
      fStack_250 = *(float *)(param_1 + 0x40);
      fStack_24c = *(float *)(param_1 + 0x44);
      fStack_248 = *(float *)(param_1 + 0x48);
      fStack_244 = *(float *)(param_1 + 0x4c);
      iVar5 = hkpCdPointCollector::hkpCdPointCollector(&local_280,&fStack_250,1,0,0x3c23d70a);
      if (iVar5 != 0) {
        *(float *)(param_1 + 0x54) = fStack_24c;
      }
    }
    hkpCdPointCollector::hkpCdPointCollector();
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  *(undefined4 *)(param_1 + 0xbf0) = 0;
  return;
}

// 0089F120  Pl1400::qteSafeCheck  size=4728  [class]
void __thiscall Pl1400::qteSafeCheck(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float fVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined4 uVar13;
  float local_12c;
  float local_128;
  undefined4 uStack_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  undefined1 local_80 [12];
  float local_74;
  float afStack_70 [3];
  undefined4 local_64;
  undefined1 local_60 [12];
  float local_54;
  undefined1 local_50 [76];
  
  if (param_2 == (undefined4 *)0x0) {
    local_128 = 0.0;
  }
  else {
    puVar12 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar12);
    local_128 = (float)(-(uint)(iVar2 != 0) & (uint)param_2);
  }
  piVar1 = *(int **)((int)local_128 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    pfVar7 = (float *)0x0;
  }
  else {
    puVar12 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar12);
    pfVar7 = (float *)(-(uint)(iVar2 != 0) & (uint)piVar1);
  }
  iVar2 = FUN_00a81330();
  if ((iVar2 == 0) && (*(int *)(param_1 + 0xd4) == 0)) {
    FUN_00d82510(1,100);
    StateMachineNode::qteSafeCheck(param_2);
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x34) = 0;
    goto switchD_0089f1c4_default;
  case 1:
    break;
  case 2:
    goto switchD_0089f1c4_caseD_2;
  case 3:
    goto switchD_0089f1c4_caseD_3;
  case 4:
    goto LAB_008a0345;
  default:
    goto switchD_0089f1c4_default;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    local_12c = 0.0;
    if (*(int *)((int)local_128 + 0x370) < 1) {
      FUN_00da8810(0);
      uVar4 = 0;
    }
    else {
      local_12c = 0.16666667;
      FUN_00da8810(0x41200000);
      uVar4 = 0x41200000;
    }
    FUN_00db3e80(uVar4,0,&DAT_01bea1d0);
    FUN_00aa4080(0x1c1,*(undefined4 *)(param_1 + 0x3c),local_12c,0x3f800000,0x8000000,0xbf800000,
                 0x3f800000);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
LAB_0089f2c8:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    iVar2 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x3c));
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
      *(undefined4 *)(param_1 + 0x30) = 2;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      FUN_00d82510(1,100);
    }
  }
  else if (*(int *)(param_1 + 0x34) == 1) goto LAB_0089f2c8;
  if (*(int *)(param_1 + 0x60) == 0) goto switchD_0089f1c4_default;
switchD_0089f1c4_caseD_2:
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == 0) {
    uVar4 = 0xbf800000;
    if ((*(int *)(param_1 + 0xdc) != 0) || (*(int *)(param_1 + 0xe4) != 0)) {
      uVar4 = 0x3e2aaaab;
    }
    FUN_00aa4080(0x1c2,0,0,0x3f800000,0x8004000,uVar4,0x3f800000);
    FUN_0085dcf0(pfVar7[0x13c],0x1e2,0x8000000);
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
LAB_0089f7c6:
    local_120 = -0.01;
    local_11c = 2.91;
    local_118 = 2.241;
    local_114 = (float)local_64;
    iVar2 = FUN_00a12210(0xffffffff);
    local_100 = *(float *)(iVar2 + 0x40);
    local_fc = *(float *)(iVar2 + 0x44);
    local_f8 = *(float *)(iVar2 + 0x48);
    local_f4 = *(float *)(iVar2 + 0x4c);
    iVar2 = FUN_00a12210(0);
    local_f0 = *(float *)(iVar2 + 0x40) - local_100;
    local_ec = *(float *)(iVar2 + 0x44) - local_fc;
    local_e8 = *(float *)(iVar2 + 0x48) - local_f8;
    local_e4 = *(float *)(iVar2 + 0x4c) - local_f4;
    D3DXVec3TransformNormal(&local_120,&local_120,pfVar7 + 4);
    pfVar3 = (float *)FUN_00ac70a0();
    local_ec = *pfVar3;
    local_e8 = pfVar3[1];
    local_e4 = pfVar3[2];
    local_e0 = pfVar3[3];
    local_11c = local_ec - (local_fc + local_12c);
    local_118 = local_e8 - (local_f8 + local_128);
    local_114 = local_e4 - (local_f4 + uStack_124);
    local_110 = local_e0 - (local_f0 + local_120);
    iVar2 = hkpAllRayHitCollector::hkpAllRayHitCollector(&local_dc,&local_ec,&local_11c);
    if (iVar2 != 0) {
      local_11c = local_dc;
      local_114 = local_d4;
      local_110 = afStack_70[0];
    }
    fVar6 = *pfVar7;
    local_bc = local_11c + local_fc;
    local_b8 = local_f8 + local_118;
    local_b4 = local_114 + local_f4;
    fStack_b0 = local_110 + local_f0;
    uVar4 = (**(code **)((int)fVar6 + 0x84))();
    (**(code **)((int)fVar6 + 0x7c))(&local_bc,uVar4);
    iVar2 = FUN_00a92f90();
    if (iVar2 != 0) {
      uVar4 = 0;
      FUN_00a92f90(0);
      FUN_00404b90(uVar4);
      local_12c = *(float *)(param_1 + 0x3c);
      uVar4 = *(undefined4 *)(param_1 + 0x4c);
      FUN_00a92f90();
      Animation::Motion::Unit::setCameraNo(local_12c,uVar4);
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  else {
    if (iVar2 == 1) goto LAB_0089f7c6;
    if (iVar2 == 2) {
      iVar2 = FUN_00a92f90();
      if (iVar2 != 0) {
        uVar4 = 0;
        FUN_00a92f90(0);
        FUN_00404b90(uVar4);
        local_12c = *(float *)(param_1 + 0x3c);
        uVar4 = *(undefined4 *)(param_1 + 0x4c);
        FUN_00a92f90();
        Animation::Motion::Unit::setCameraNo(local_12c,uVar4);
      }
      iVar2 = FUN_00a94e10(*(undefined4 *)(param_1 + 0x3c),0,*(undefined4 *)(param_1 + 0xe0));
      if (iVar2 != 0) {
        iVar2 = FUN_00a12210(0xffffffff);
        local_120 = *(float *)(iVar2 + 0x40);
        local_11c = *(float *)(iVar2 + 0x44);
        local_118 = *(float *)(iVar2 + 0x48);
        local_114 = *(float *)(iVar2 + 0x4c);
        iVar2 = FUN_00a12210(0);
        local_f0 = *(float *)(iVar2 + 0x40);
        local_ec = *(float *)(iVar2 + 0x44);
        local_e8 = *(float *)(iVar2 + 0x48);
        local_e4 = *(float *)(iVar2 + 0x4c);
        iVar2 = FUN_00a12210(0xf00);
        local_c4 = *(float *)(iVar2 + 0x4c);
        local_100 = local_120 - local_f0;
        local_fc = local_11c - local_ec;
        local_f8 = local_118 - local_e8;
        local_f4 = local_114 - local_e4;
        local_120 = local_f0 - *(float *)(iVar2 + 0x40);
        local_11c = local_ec - *(float *)(iVar2 + 0x44);
        local_118 = local_e8 - *(float *)(iVar2 + 0x48);
        local_114 = local_e4 - local_c4;
        pfVar3 = (float *)FUN_00ac70a0();
        local_e0 = *pfVar3;
        local_dc = pfVar3[1];
        local_d8 = pfVar3[2];
        local_d4 = pfVar3[3];
        local_110 = local_120 + local_e0;
        local_10c = local_dc + local_11c;
        local_108 = local_d8 + local_118;
        local_104 = local_d4 + local_114;
        iVar2 = hkpAllRayHitCollector::hkpAllRayHitCollector(&local_d0,&local_e0,&local_110);
        if (iVar2 != 0) {
          local_110 = local_d0;
          local_108 = local_c8;
          local_104 = local_94;
        }
        fVar6 = *pfVar7;
        local_c0 = local_110 + local_100;
        local_bc = local_fc + local_10c;
        local_b8 = local_108 + local_f8;
        local_b4 = local_104 + local_f4;
        uVar4 = (**(code **)((int)fVar6 + 0x84))();
        (**(code **)((int)fVar6 + 0x7c))(&local_c0,uVar4);
      }
      iVar2 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xe0));
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x54) != 0) {
          FUN_00ae4660(*(int *)((int)local_128 + 0x6b0) + 0x6f,pfVar7);
          uVar4 = FUN_00a7c7f0();
          FUN_00878130(&local_12c,uVar4);
        }
        FUN_008e6d00();
        FUN_008e0af0(0);
        (**(code **)((int)*pfVar7 + 0x318))();
        FUN_008e5c50(6);
        FUN_008e5610(1);
        FUN_008e5610(2);
      }
      iVar2 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x3c));
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x60) = 1;
        *(undefined4 *)(param_1 + 0x30) = 3;
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        FUN_00d82510(1,100);
      }
      iVar2 = FUN_00a8c760(0xb);
      if (iVar2 != 0) {
        iVar2 = FUN_00a12210(0x12);
        local_120 = *(float *)(iVar2 + 0x40);
        local_11c = *(float *)(iVar2 + 0x44);
        local_118 = *(float *)(iVar2 + 0x48);
        local_114 = *(float *)(iVar2 + 0x4c);
        pfVar3 = (float *)FUN_00a8bac0(afStack_70,0xbf000000);
        local_e0 = local_120 + *pfVar3;
        uVar13 = 0;
        pcVar11 = "zangekiDatsuJump_CheckGround";
        uVar10 = 0;
        uVar9 = 0x60;
        uVar8 = 0;
        local_dc = pfVar3[1] + local_11c;
        local_d8 = pfVar3[2] + local_118;
        local_d4 = pfVar3[3] + local_114;
        uVar4 = FUN_00410130(6,0xffffffff,0,0,0,0,0x60,0,"zangekiDatsuJump_CheckGround",0);
        FUN_00445d40(&local_120,&local_e0,uVar4,uVar8,uVar9,uVar10,pcVar11,uVar13);
        iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_100,&local_d0,0,0,local_50);
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0x30) = 3;
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x60) == 0) goto switchD_0089f1c4_default;
switchD_0089f1c4_caseD_3:
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_00aa4080(0x1c3,*(undefined4 *)(param_1 + 0x3c),0,0x3f800000,0x8000000,0xbf800000,0x3f800000)
    ;
    FUN_0085dcf0(pfVar7[0x13c],0x1e3,0x8000000);
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    if (((*(float *)((int)local_128 + 0x360) == 0.0) && (*(float *)((int)local_128 + 0x364) == 0.0))
       && (*(float *)((int)local_128 + 0x368) == 0.0)) {
      if (*(int *)(param_1 + 0xdc) == 0) {
        iVar2 = FUN_00a12210(0);
        local_100 = *(float *)(iVar2 + 0x40);
        uVar13 = 0;
        local_f8 = *(float *)(iVar2 + 0x48);
        pcVar11 = "zangekiDatsuJumpSafeCheck";
        uVar10 = 0;
        uVar9 = 0x60;
        uVar8 = 0;
        local_fc = *(float *)(iVar2 + 0x44) + 1.0;
        local_f4 = local_74 + *(float *)(iVar2 + 0x4c);
        local_dc = *(float *)(iVar2 + 0x44) - 20.0;
        local_d4 = *(float *)(iVar2 + 0x4c) - local_74;
        local_e0 = local_100;
        local_d8 = local_f8;
        uVar4 = FUN_00410130(6,0xffffffff,0,0,0,0,0x60,0,"zangekiDatsuJumpSafeCheck",0);
        FUN_00445d40(&local_100,&local_e0,uVar4,uVar8,uVar9,uVar10,pcVar11,uVar13);
        iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_d0,&local_120,0,0,local_50);
        fVar6 = *pfVar7;
        if (iVar2 == 0) {
          local_9c = *(undefined4 *)(param_1 + 0xb4);
          local_98 = pfVar7[0x12];
          local_a0 = pfVar7[0x10];
          uVar4 = (**(code **)((int)fVar6 + 0x84))();
          pfVar3 = &local_a0;
        }
        else {
          local_8c = local_cc;
          local_88 = pfVar7[0x12];
          local_90 = pfVar7[0x10];
          uVar4 = (**(code **)((int)fVar6 + 0x84))();
          pfVar3 = &local_90;
        }
LAB_0089fe02:
        (**(code **)((int)fVar6 + 0x7c))(pfVar3,uVar4);
      }
      else {
        pfVar3 = (float *)FUN_0085c460(local_60);
        local_e0 = *pfVar3;
        local_dc = pfVar3[1] + 1.5;
        local_d8 = pfVar3[2];
        local_d4 = pfVar3[3] + local_54;
        pfVar3 = (float *)FUN_0085c430(local_80);
        local_120 = *pfVar3;
        uVar13 = 0;
        pcVar11 = "Pl1400::qteSafeCheck";
        uVar10 = 0;
        local_11c = pfVar3[1] + 1.5;
        uVar9 = 0x60;
        uVar8 = 0;
        local_118 = pfVar3[2];
        local_114 = pfVar3[3] + local_74;
        uVar4 = FUN_00410130(6,0xffffffff,0,0,0,0,0x60,0,"Pl1400::qteSafeCheck",0);
        FUN_00445d40(&local_120,&local_e0,uVar4,uVar8,uVar9,uVar10,pcVar11,uVar13);
        iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_d0,&local_f0,0,0,local_50);
        if (iVar2 != 0) {
          *(float *)(param_1 + 0xb0) = local_f0 * 0.5 + local_d0;
          *(float *)(param_1 + 0xb4) = local_ec * 0.5 + *(float *)(param_1 + 0xb4);
          *(float *)(param_1 + 0xb8) = local_e8 * 0.5 + local_c8;
          *(float *)(param_1 + 0xbc) = local_e4 * 0.5 + local_c4;
          pfVar7[0xf9c] = 0.0;
          pfVar7[0xf9d] = 0.0;
          pfVar7[0xf9e] = 0.0;
          pfVar7[3999] = 1.0;
        }
        local_12c = *(float *)(param_1 + 0xb4);
        iVar2 = FUN_00ac70a0();
        if (local_12c < *(float *)(iVar2 + 4)) {
          iVar2 = FUN_00ac70a0();
          *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar2 + 4);
        }
        local_110 = *(float *)(param_1 + 0xb0);
        local_108 = *(float *)(param_1 + 0xb8);
        local_104 = *(float *)(param_1 + 0xbc);
        local_fc = *(float *)(param_1 + 0xb4) + 0.5;
        local_10c = *(float *)(param_1 + 0xb4) - 10.0;
        local_100 = local_110;
        local_f8 = local_108;
        local_f4 = local_104;
        iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4
                          (&local_100,0,0,0,&local_100,&local_110,0x1e,"jumpDatsuFloorCheck");
        fVar6 = *pfVar7;
        if (iVar2 != 0) {
          uVar4 = (**(code **)((int)fVar6 + 0x84))();
          pfVar3 = &local_100;
          goto LAB_0089fe02;
        }
        uVar4 = (**(code **)((int)*pfVar7 + 0x84))();
        (**(code **)((int)fVar6 + 0x7c))(param_1 + 0xb0,uVar4);
      }
      Pl0000::qteZangekiSafeCheckForward();
      FUN_00b89850();
    }
    else {
      local_12c = *pfVar7;
      uVar4 = (**(code **)((int)local_12c + 0x84))();
      fVar6 = local_128;
      puVar5 = (undefined4 *)((int)local_128 + 0x360);
      (**(code **)((int)local_12c + 0x7c))(puVar5,uVar4);
      *puVar5 = 0;
      *(undefined4 *)((int)fVar6 + 0x364) = 0;
      *(undefined4 *)((int)fVar6 + 0x368) = 0;
      *(undefined4 *)((int)fVar6 + 0x36c) = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (pfVar7[0x1d9] != 0.0) {
      FUN_008e0af0(1);
    }
    (**(code **)((int)*pfVar7 + 0x314))();
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
LAB_0089fe3e:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    local_12c = *(float *)(param_1 + 0x3c);
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    FUN_00a92f90();
    Animation::Motion::Unit::setCameraNo(local_12c,uVar4);
    if (*(int *)(param_1 + 0xd4) == 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        FUN_00d82510(1,100);
      }
      if (*(int *)(param_1 + 0xd4) == 0) {
        iVar2 = FUN_00a8c760(0x16);
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x54) != 0) {
            FUN_00ae24f0();
          }
          *(undefined4 *)(param_1 + 0xe8) = 1;
        }
        if (((*(int *)(param_1 + 0xd4) == 0) && (*(int *)(param_1 + 0xe8) != 0)) &&
           (iVar2 = FUN_00a8c760(0xb), iVar2 != 0)) {
          if ((*(int *)(param_1 + 0x54) != 0) && (*(int *)(*(int *)(param_1 + 0x54) + 0x988) != 0))
          {
            if (0 < *(int *)((int)local_128 + 0x6b0)) {
              fVar6 = *(float *)((int)local_128 + 0x6a8);
              uStack_124 = (float)CONCAT13(1,(undefined3)uStack_124);
              local_12c = fVar6;
              if (fVar6 != (float)((int)fVar6 + *(int *)((int)local_128 + 0x6b0) * 4)) {
                do {
                  local_12c = fVar6;
                  iVar2 = FUN_00a81330();
                  if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
                     (iVar2 = FUN_00860b80(iVar2), fVar6 = local_12c, iVar2 != 0)) {
                    FUN_0093bdd0(pfVar7[0x13c],*(undefined4 *)(iVar2 + 0x87c),
                                 *(undefined4 *)(iVar2 + 0x884));
                    FUN_00ace4a0(((uint)uStack_124 >> 0x18) + 0x6f,pfVar7);
                    fVar6 = local_12c;
                  }
                  uStack_124 = (float)CONCAT13(uStack_124._3_1_ + '\x01',(undefined3)uStack_124);
                  fVar6 = (float)((int)fVar6 + 4);
                  local_12c = fVar6;
                } while (fVar6 != (float)(*(int *)((int)local_128 + 0x6a8) +
                                         *(int *)((int)local_128 + 0x6b0) * 4));
              }
              *(undefined4 *)((int)local_128 + 0x6b0) = 0;
            }
            FUN_0093bdd0(pfVar7[0x13c],*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x87c),
                         *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x884));
            FUN_00ace4a0(0x6f,pfVar7);
          }
          FUN_008696c0(param_2);
          FUN_00b7aa80();
          FUN_008e5c50(6);
          FUN_008e6d00();
          FUN_008e5720(1);
          FUN_008e5720(2);
          pfVar7[0x43d] = 1.4013e-45;
          *(undefined4 *)(param_1 + 0xd4) = 1;
        }
      }
    }
    iVar2 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x3c));
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
      *(undefined4 *)(param_1 + 0x30) = 4;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    iVar2 = FUN_00a8c760(0x20);
    if (iVar2 == 0) {
LAB_008a0159:
      if (*(int *)(param_1 + 0xd8) != 0) goto LAB_008a0166;
    }
    else {
      if (*(int *)(param_1 + 0xd8) == 0) {
        local_12c = pfVar7[0x13c];
        uVar4 = FUN_00a81330(0);
        iVar2 = (**(code **)((int)*pfVar7 + 0x84))(0x40c90fdb,0x40a00000,uVar4);
        iVar2 = FUN_0088faa0(param_2,local_12c,*(undefined4 *)(iVar2 + 4));
        if (0 < *(int *)(iVar2 + 0xc)) {
          *(undefined4 *)(param_1 + 0xd8) = 1;
          pfVar7[0x1029] = pfVar7[0x102a];
          pfVar7[0xd07] = 1.0;
          FUN_00b85350(0x43340000,0x3c23d70a,0x3c23d70a,0,0,0x3dcccccd);
          FUN_00877430(param_2);
          *(undefined4 *)((int)local_128 + 0x694) = 1;
        }
        goto LAB_008a0159;
      }
LAB_008a0166:
      if (pfVar7[0x1029] <= 0.0) {
        pfVar7[0x1029] = -1.0;
        pfVar7[0xd07] = 1.0;
        FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
        FUN_00877430(param_2);
        *(undefined4 *)((int)local_128 + 0x694) = 0;
      }
      else {
        FUN_00b7ab30(0x40a00000);
      }
      if (pfVar7[0xd09] <= pfVar7[0x1028]) {
        fVar6 = pfVar7[0x1029] - 1.0;
        pfVar7[0x1029] = fVar6;
        if ((fVar6 < pfVar7[0x102a] - pfVar7[0x102b]) && (pfVar7[0x102a] - pfVar7[0x102c] < fVar6))
        {
          uVar4 = FUN_00a81330();
          iVar2 = FUN_0089c390(param_2,param_1,100,0,uVar4);
          if (iVar2 != 0) {
            DAT_018b56b4 = 1;
            pfVar7[0x1029] = -1.0;
            pfVar7[0xd07] = 1.0;
            FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
            FUN_00877430(param_2);
            *(int *)((int)local_128 + 0x370U) = *(int *)((int)local_128 + 0x370U) + 1;
            *(undefined4 *)((int)local_128 + 0x694) = 0;
          }
        }
      }
    }
    if (*(int *)(param_1 + 0xd4) != 0) {
      (**(code **)((int)*pfVar7 + 0x1d4))(0);
      iVar2 = FUN_0086f370();
      if (iVar2 != 0x100007) {
        *(int *)((int)local_128 + 0x3ec) = iVar2;
        *(undefined4 *)((int)local_128 + 0x2f4) = 0;
        FUN_00da8810(0x41200000);
        FUN_00db3e80(0x41200000,1,&DAT_01bea1d0);
        *(undefined4 *)(param_1 + 0xec) = 1;
      }
    }
  }
  else if (*(int *)(param_1 + 0x34) == 1) goto LAB_0089fe3e;
  if (*(int *)(param_1 + 0x60) != 0) {
LAB_008a0345:
    if (*(int *)(param_1 + 0xdc) != 0) {
      pfVar7[0xf7d] = 1.469368e-39;
      pfVar7[0xf7e] = 0.0;
      FUN_00ba6810(1,0);
      *(undefined4 *)((int)local_128 + 0x32c) = 1;
      FUN_00b90990();
    }
    FUN_00d82510(1,100);
    *(undefined4 *)((int)local_128 + 0x370) = 0;
  }
switchD_0089f1c4_default:
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_008774a0(param_2);
  }
  (**(code **)((int)*pfVar7 + 0x220))(0x41200000);
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

// 00AC38D0  Pl1400::Pl1400  size=27  [class]
undefined4 * __fastcall Pl1400::Pl1400(undefined4 *param_1)

{
  Pl0000::Pl0000();
  *param_1 = vftable;
  *(undefined2 *)(param_1 + 0x1514) = 0;
  return param_1;
}

// 00AC38F0  Pl1400::vf04  size=6  [class]
undefined * Pl1400::vf04(void)

{
  return &DAT_01b35b20;
}

// 00AC3900  Pl1400::vf94  size=6  [class]
undefined4 Pl1400::vf94(void)

{
  return 2;
}

// 00AC3910  Pl1400::vf354  size=16  [class]
bool __fastcall Pl1400::vf354(int param_1)

{
  return *(int *)(param_1 + 0x618) == 0x100059;
}

// 00AC3920  Pl1400::vf35C  size=36  [class]
undefined4 __fastcall Pl1400::vf35C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (((iVar1 != 0x100051) && (iVar1 != 0x100053)) && (iVar1 != 0x10005a)) {
    return 0;
  }
  return 1;
}

// 00AC3950  Pl1400::vf36C  size=29  [class]
undefined4 __fastcall Pl1400::vf36C(int param_1)

{
  if ((0x100035 < *(int *)(param_1 + 0x618)) && (*(int *)(param_1 + 0x618) < 0x100043)) {
    return 1;
  }
  return 0;
}

// 00AC3970  Pl1400::vf374  size=38  [class]
undefined4 __fastcall Pl1400::vf374(int param_1)

{
  if (((*(int *)(param_1 + 0x1410) == 0) && (0x10003b < *(int *)(param_1 + 0x618))) &&
     (*(int *)(param_1 + 0x618) < 0x100043)) {
    return 1;
  }
  return 0;
}

// 00AC39A0  Pl1400::vf378  size=38  [class]
undefined4 __fastcall Pl1400::vf378(int param_1)

{
  if (((*(int *)(param_1 + 0x1410) == 0) && (0x100035 < *(int *)(param_1 + 0x618))) &&
     (*(int *)(param_1 + 0x618) < 0x10003c)) {
    return 1;
  }
  return 0;
}

// 00AC39D0  Pl1400::vf37C  size=3  [class]
undefined4 Pl1400::vf37C(void)

{
  return 0;
}

// 00AC39E0  Pl1400::vf3E4  size=27  [class]
void __fastcall Pl1400::vf3E4(int param_1)

{
  if ((*(char *)(param_1 + 0x590) == '\b') || (*(char *)(param_1 + 0x590) == '\x10')) {
    *(undefined4 *)(param_1 + 0x2bac) = 0xbf800000;
  }
  return;
}

// 00AC3A00  Pl1400::vf404  size=16  [class]
bool __fastcall Pl1400::vf404(int param_1)

{
  return *(int *)(param_1 + 0x618) == 0x10001b;
}

// 00AC3A10  Pl1400::vf364  size=16  [class]
bool __fastcall Pl1400::vf364(int param_1)

{
  return *(int *)(param_1 + 0x618) == 0x100008;
}

// 00AC3A20  Pl1400::vf3F0  size=11  [class]
void __fastcall Pl1400::vf3F0(int param_1)

{
  *(undefined4 *)(param_1 + 0x53ec) = 0;
  return;
}

// 00AC3C80  Pl1400::destruct  size=30  [class]
undefined4 __thiscall Pl1400::destruct(undefined4 param_1,byte param_2)

{
  hkpAllCdPointCollector::~hkpAllCdPointCollector();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

