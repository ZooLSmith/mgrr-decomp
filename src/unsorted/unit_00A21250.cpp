// src/unsorted/unit_00A21250.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A21250..00A28400, 26 functions

#include "mgrr.h"

// 00A21250  FUN_00a21250  size=56  [run]
undefined4 __thiscall FUN_00a21250(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0xac))) {
    *param_2 = *(undefined4 *)
                (&DAT_0165e1c8 + (param_4 + *(int *)(param_1 + 0x8c + param_3 * 8) * 4) * 4);
    return 1;
  }
  return 0;
}

// 00A212C0  FUN_00a212c0  size=107  [run]
undefined4
FUN_00a212c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (((DAT_01bea084 & 0x40000) == 0) && ((char)param_5 == '\0')) {
    return 0;
  }
  if (param_1 == 0x49) {
    iVar1 = FUN_00f9aea0(param_5,0x48,1,param_2,param_3,param_4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_00f9aea0(param_5,param_1,1,param_2,param_3,param_4);
  return uVar2;
}

// 00A21490  FUN_00a21490  size=76  [run]
void FUN_00a21490(void)

{
  FUN_00f9aea0(1,0x45,0,0,&DAT_00a20190,0);
  FUN_00f9aea0(1,0x45,0,0,&DAT_00a201a0,0);
  FUN_00f9aea0(1,0x45,0,0,&LAB_00a201b0,0);
  return;
}

// 00A21750  FUN_00a21750  size=26  [run]
void FUN_00a21750(void)

{
  FUN_00f98b40();
  FUN_00eb9070(DAT_01b83c00,1);
  FUN_00f98b50();
  return;
}

// 00A21780  FUN_00a21780  size=165  [run]
undefined4
FUN_00a21780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00f98c30(4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00f98c50(param_1,param_2,0,2);
  FUN_00f98c40(0,0xa00000 - iVar1,0xffffffff,0xffffffff);
  iVar1 = FUN_00f98c50(param_1,0x400,0,1);
  FUN_00f98c40(1,0xa00000 - iVar1,0xffffffff,0xffffffff);
  FUN_00f98c40(2,0,0xffffffff,0xffffffff);
  uVar2 = FUN_00f98c90(param_3,param_4,0);
  FUN_00f98c40(3,uVar2,0xffffffff,0xffffffff);
  FUN_00f98c90(0x600,0x600,0);
  return 1;
}

// 00A21830  FUN_00a21830  size=234  [run]
undefined4 FUN_00a21830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_68 [21];
  int local_14;
  
  puVar2 = &DAT_01f20668;
  puVar3 = local_68;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = FUN_00fa5cd0(param_1,param_2,0,2,3);
  if ((iVar1 != 0) && (iVar1 = FUN_00fa5cd0(param_3,param_4,0,3,3), iVar1 != 0)) {
    if (local_14 == 0) {
      iVar1 = FUN_00fa5cd0(0x400,0x400,0,3,3);
      if (iVar1 == 0) {
        return 0;
      }
      uVar4 = 3;
    }
    else {
      iVar1 = FUN_00fa5cd0(0x400,0x400,0,3,4);
      if (iVar1 == 0) {
        return 0;
      }
      uVar4 = 4;
    }
    iVar1 = FUN_00fa5cd0(0x600,0x600,0,3,uVar4);
    if ((iVar1 != 0) && (iVar1 = FUN_00fa5cd0(8,8,0,3,3), iVar1 != 0)) {
      FUN_00f98ce0(&DAT_01be0500);
      return 1;
    }
  }
  return 0;
}

// 00A21920  FUN_00a21920  size=1720  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00a21920(uint param_1,uint param_2,int param_3,int param_4)

{
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  CRect *pCVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int local_70;
  undefined4 local_68 [21];
  int local_14;
  
  puVar6 = &DAT_01f20668;
  puVar8 = local_68;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar3 = FUN_00fa4d60(0x140,0xb0,1,0,0);
  if ((((((((iVar3 == 0) || (iVar3 = FUN_00fa4d60(8,8,1,0,0), iVar3 == 0)) ||
          (iVar3 = FUN_00fa4d60(0x100,0x100,0,0,0), iVar3 == 0)) ||
         ((iVar3 = FUN_00fa4d60(0x100,0x100,0,0,0), iVar3 == 0 ||
          (iVar3 = FUN_00fa4d60(0x100,0x100,0,0,0), iVar3 == 0)))) ||
        (iVar3 = FUN_00fa4d60(0x100,0x100,0,0,0), iVar3 == 0)) ||
       (((iVar3 = FUN_00fa4d60(0x80,0x80,0,0,0), iVar3 == 0 ||
         (iVar3 = FUN_00fa4d60(0x80,0x80,0,0,0), iVar3 == 0)) ||
        ((iVar3 = FUN_00fa4d60(0x10,0x10,0,0,0), iVar3 == 0 ||
         (((iVar3 = FUN_00fa4d60(0x10,0x10,0,0,0), iVar3 == 0 ||
           (iVar3 = FUN_00fa4d60(0x10,0x10,0,0,0), iVar3 == 0)) ||
          (iVar3 = FUN_00fa4d60(0x10,0x10,0,0,0), iVar3 == 0)))))))) ||
      ((iVar3 = FUN_00fa4d60(0x40,0x40,0,0,0), iVar3 == 0 ||
       (iVar3 = FUN_00fa4d60(0x40,0x40,0,0,0), iVar3 == 0)))) ||
     (((iVar3 = FUN_00fa4d60(0x40,0x40,0,0,0), iVar3 == 0 ||
       (((iVar3 = FUN_00fa4d60(0x40,0x40,0,0,0), iVar3 == 0 ||
         (iVar3 = FUN_00fa4d60(0x40,0x40,0,0,0), iVar3 == 0)) ||
        ((iVar3 = FUN_00fa4d60(0x40,0x40,0,0,0), iVar3 == 0 ||
         (((iVar3 = FUN_00fa4d60(0x140,0xb0,0,0,0), iVar3 == 0 ||
           (iVar3 = FUN_00fa4d60(0x140,0xb0,0,0,0), iVar3 == 0)) ||
          (iVar3 = FUN_00fa4d60(0xa0,0x50,0,0,0), iVar3 == 0)))))))) ||
      (((iVar3 = FUN_00fa4d60(0x50,0x30,0,0,0), iVar3 == 0 ||
        (iVar3 = FUN_00fa4d60(0x30,0x20,0,0,0), iVar3 == 0)) ||
       (iVar3 = FUN_00fa4d60(0x20,0x10,0,0,0), iVar3 == 0)))))) {
    return 0;
  }
  pCVar7 = (CRect *)&DAT_01be0718;
  uVar9 = 0;
  do {
    CRect::SetRect(pCVar7,8,8,0,0);
    if (extraout_EAX == 0) {
      return 0;
    }
    uVar9 = uVar9 + 0x4c;
    pCVar7 = pCVar7 + 0x4c;
  } while (uVar9 < 0x130);
  CRect::SetRect((CRect *)&DAT_01be0848,param_3,param_4,0,0);
  pCVar7 = (CRect *)&DAT_01be0680;
  do {
    CRect::SetRect(pCVar7,0x100,1,1,0x1b7f3f0);
    if (extraout_EAX_00 == 0) {
      return 0;
    }
    pCVar7 = pCVar7 + 0x4c;
  } while ((int)pCVar7 < 0x1be0718);
  DAT_01b83bdc = &DAT_01be1ba0;
  DAT_01b83be0 = &DAT_01be1bf0;
  _DAT_01b83be4 = &DAT_01be1c40;
  DAT_01b83bd8 = &DAT_01be1ba0;
  DAT_01b83bd4 = &DAT_01be1880;
  uVar9 = 0;
  do {
    iVar3 = FUN_00fa4d60(0x100,0x100,0,0,0);
    if (iVar3 == 0) {
      return 0;
    }
    uVar9 = uVar9 + 0x50;
  } while (uVar9 < 0xa0);
  DAT_01b83be8 = 0;
  DAT_01b83bec = 0;
  DAT_01b83bf0 = 0;
  _DAT_01b83bf4 = 0;
  _DAT_01b83bf8 = 0;
  CRect::SetRect((CRect *)&DAT_01be0590,param_1,param_2,0,0);
  FUN_00fa4d60(param_1,param_2,0,0,0);
  local_70 = 0;
  while( true ) {
    uVar9 = param_2;
    if (local_70 == 1) {
      uVar10 = 0x480;
    }
    else {
      uVar10 = param_1;
      if (local_70 == 2) {
        uVar10 = 0x400;
        uVar9 = 0x230;
      }
    }
    iVar3 = FUN_00fa4d60(uVar10,uVar9,0,0,0);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00fa4d60(uVar10,uVar9,0,0,0);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00fa4d60(uVar10,uVar9,0,0,0);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00fa4d60(uVar10,uVar9,0,0,0);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00fa4d60(uVar10,uVar9,0,0,0);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00fa4d60(uVar10,uVar9,0,0,0);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = 0;
    do {
      uVar4 = 2;
      uVar1 = DAT_0189f58c;
      uVar5 = DAT_0189f588;
      if (iVar3 == 1) {
        uVar4 = 8;
      }
      else if (iVar3 == 2) {
        uVar4 = 4;
      }
      else if (iVar3 == 3) {
        uVar4 = 0x10;
      }
      else if (7 < iVar3) {
        uVar4 = 1;
        uVar1 = uVar9;
        uVar5 = uVar10;
      }
      iVar2 = FUN_00fa4d60(uVar5 / uVar4,uVar1 / uVar4,0,0,0);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    iVar3 = 0;
    do {
      iVar2 = FUN_00fa4d60(uVar10,uVar9,0,0,0);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 1);
    if (local_14 == 0) {
      uVar11 = 1;
    }
    else {
      uVar11 = 5;
    }
    iVar3 = FUN_00fa4d60(0x400,0x400,1,9,uVar11);
    if (iVar3 == 0) break;
    iVar3 = FUN_00fa4d60(uVar10,uVar9,1,0,0);
    if (iVar3 == 0) {
      return 0;
    }
    if (local_14 == 0) {
      uVar11 = 1;
    }
    else {
      uVar11 = 5;
    }
    iVar3 = FUN_00fa4d60(0x600,0x600,1,9,uVar11);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00fa4d60(uVar10,uVar9,0,0,1);
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined **)(&DAT_01b83bcc + local_70 * 4) = &DAT_01be1880;
    iVar3 = FUN_00fa4d60(uVar10,uVar9,0,0,0);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00fa4d60(uVar10,uVar9,0,0,2);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00fa4d60(uVar10,uVar9,0,0,0);
    if (iVar3 == 0) {
      return 0;
    }
    local_70 = local_70 + 1;
    if (0 < local_70) {
      DAT_01b83bd0 = &DAT_01be1880;
      iVar3 = FUN_00fa4d60(param_3,param_4,0,9,0);
      if ((iVar3 != 0) && (iVar3 = FUN_00fa4d60(param_3,param_4,0,0,0), iVar3 != 0)) {
        DAT_01b83c0c = 0;
        DAT_01b83c10 = 0;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

// 00A22240  FUN_00a22240  size=412  [run]
void FUN_00a22240(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_00fb9400("ModelShaderZMapScr");
  uVar2 = FUN_00fb93a0("ModelShaderZMap");
  iVar3 = FUN_00fb1110(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e2e8);
  }
  uVar1 = FUN_00fb9400("ModelShaderZMapScr");
  uVar2 = FUN_00fb93a0("ModelShaderZMapScr");
  iVar3 = FUN_00fb1110(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e2e8);
  }
  uVar1 = FUN_00fb9400("ModelShaderZMapScr");
  uVar2 = FUN_00fb93a0("ModelShaderZMapScr_I");
  iVar3 = FUN_00fb1110(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e2e8);
  }
  uVar1 = FUN_00fb9400("ModelShaderZMapScr");
  uVar2 = FUN_00fb93a0("ModelShaderZMapEff");
  iVar3 = FUN_00fb1110(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e2e8);
  }
  uVar1 = FUN_00fb9400("ModelShaderZMapScrNki");
  uVar2 = FUN_00fb93a0("ModelShaderZMapNki");
  iVar3 = FUN_00fbb350(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e2e8);
  }
  uVar1 = FUN_00fb9400("ModelShaderZMapScrNki");
  uVar2 = FUN_00fb93a0("ModelShaderZMapScrNki");
  iVar3 = FUN_00fbb350(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e2e8);
  }
  uVar1 = FUN_00fb9400("ModelShaderZMapScrNki");
  uVar2 = FUN_00fb93a0("ModelShaderZMapScrNki_I");
  iVar3 = FUN_00fbb350(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e2e8);
  }
  return;
}

// 00A223E0  FUN_00a223e0  size=567  [run]
void FUN_00a223e0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 local_68 [21];
  int local_14;
  
  puVar4 = &DAT_01f20668;
  puVar5 = local_68;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar1 = FUN_00fb9400("ModelShaderShadowCasterScr");
  uVar2 = FUN_00fb93a0("ModelShaderShadowCaster");
  iVar3 = FUN_00fb0fc0(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e458);
  }
  uVar1 = FUN_00fb9400("ModelShaderShadowCasterScr");
  uVar2 = FUN_00fb93a0("ModelShaderShadowCasterScr");
  iVar3 = FUN_00fb0fc0(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e458);
  }
  uVar1 = FUN_00fb9400("ModelShaderShadowCasterScrNki");
  uVar2 = FUN_00fb93a0("ModelShaderShadowCasterNki");
  iVar3 = FUN_00fbb000(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e458);
  }
  uVar1 = FUN_00fb9400("ModelShaderShadowCasterScrNki");
  uVar2 = FUN_00fb93a0("ModelShaderShadowCasterScrNki");
  iVar3 = FUN_00fbb000(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e458);
  }
  if (local_14 == 0) {
    uVar1 = FUN_00fb9400("ModelShaderNewShadowReceiver");
    uVar2 = FUN_00fb93a0("ModelShaderNewShadowReceiver");
    iVar3 = FUN_00fbae10(uVar2,uVar1);
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_0165e458);
    }
    pcVar6 = "ModelShaderNewShadowReceiverFar";
  }
  else {
    uVar1 = FUN_00fb9400("ModelShaderNewShadowReceiver2");
    uVar2 = FUN_00fb93a0("ModelShaderNewShadowReceiver");
    iVar3 = FUN_00fbae10(uVar2,uVar1);
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_0165e458);
    }
    pcVar6 = "ModelShaderNewShadowReceiverFar2";
  }
  uVar1 = FUN_00fb9400(pcVar6);
  uVar2 = FUN_00fb93a0("ModelShaderNewShadowReceiver");
  iVar3 = FUN_00fbae10(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e458);
  }
  uVar1 = FUN_00fb9400("ModelShaderNewShadowReceiver3");
  uVar2 = FUN_00fb93a0("ModelShaderNewShadowReceiver");
  iVar3 = FUN_00fbae10(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e458);
  }
  uVar1 = FUN_00fb9400("ModelShaderShadowReceiverEv");
  uVar2 = FUN_00fb93a0("ModelShaderNewShadowReceiver");
  iVar3 = FUN_00fbae10(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e458);
  }
  return;
}

// 00A22620  FUN_00a22620  size=412  [run]
void FUN_00a22620(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_00fb9400("ModelShaderVelocityMapScr");
  uVar2 = FUN_00fb93a0("ModelShaderVelocityMap");
  iVar3 = FUN_00fb1ad0(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e568);
  }
  uVar1 = FUN_00fb9400("ModelShaderVelocityMapScr");
  uVar2 = FUN_00fb93a0("ModelShaderVelocityMapScr");
  iVar3 = FUN_00fb1ad0(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e568);
  }
  uVar1 = FUN_00fb9400("ModelShaderVelocityMapScr");
  uVar2 = FUN_00fb93a0("ModelShaderVelocityMapScr_I");
  iVar3 = FUN_00fb1ad0(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e568);
  }
  uVar1 = FUN_00fb9400("ModelShaderVelocityMapScrNki");
  uVar2 = FUN_00fb93a0("ModelShaderVelocityMapNki");
  iVar3 = FUN_00fbede0(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e568);
  }
  uVar1 = FUN_00fb9400("ModelShaderVelocityMapScrNki");
  uVar2 = FUN_00fb93a0("ModelShaderVelocityMapScrNki");
  iVar3 = FUN_00fbede0(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e568);
  }
  uVar1 = FUN_00fb9400("ModelShaderVelocityMapScrNki");
  uVar2 = FUN_00fb93a0("ModelShaderVelocityMapScrNki_I");
  iVar3 = FUN_00fbede0(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e568);
  }
  uVar1 = FUN_00fb9400("ModelShaderDirectionVelocityMap");
  uVar2 = FUN_00fb93a0("ModelShaderDirectionVelocityMap");
  iVar3 = FUN_00fbeeb0(uVar2,uVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0165e568);
  }
  return;
}

// 00A227C0  FUN_00a227c0  size=17331  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a227c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00fb9400("gbuffer_xxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb430(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbuffer_xxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb430(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbuffer_xxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx_i");
  FUN_00fbb430(uVar2,uVar1);
  uVar3 = 0x9d;
  uVar1 = FUN_00fb9400("gbufferblend_xxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar1 = FUN_00fb9400("gbuffereye_xbxxx");
  uVar2 = FUN_00fb93a0("gbuffereye_xbxxx");
  FUN_00fbbdd0(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbuffereye_xbxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbbdd0(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbufferdv_sxxxx");
  uVar2 = FUN_00fb93a0("gbufferdv_sxxxx");
  FUN_00fbc100(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbufferdv2_sxxxx");
  uVar2 = FUN_00fb93a0("gbufferdv2_sxxxx");
  FUN_00fbc1a0(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbufferskin_xbxdx");
  uVar2 = FUN_00fb93a0("gbufferskin_xbxdx");
  FUN_00fbc240(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbufferskin2_xxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbc400(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbufferfa_xxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbc630(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbufferfai_xxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbc8c0(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbufferfaa_xxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbcbc0(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbuffercnsmask_sxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbd1d0(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbuffercnsmask_sxxxx");
  uVar2 = FUN_00fb93a0("gbuffercnsmask_sxxxx");
  FUN_00fbd1d0(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbuffercnsmask_sxxxx");
  uVar2 = FUN_00fb93a0("gbuffercnsmask_sxxxx_i");
  FUN_00fbd1d0(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbufferevcube");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbd280(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbufferevcube");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbd280(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbufferevcubefa");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbd480(uVar2,uVar1);
  uVar1 = FUN_00fb9400("gbufferevcubefaa");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbd750(uVar2,uVar1);
  uVar3 = 0x12f;
  uVar1 = FUN_00fb9400("gbuffersn_xxcdx");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ad;
  _DAT_018de518 = &DAT_01f74930;
  uVar1 = FUN_00fb9400("gbuffer_xxxdx");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ad;
  uVar1 = FUN_00fb9400("gbuffer_xxxdx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x129;
  uVar1 = FUN_00fb9400("gbuffer_sxxdx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x129;
  uVar1 = FUN_00fb9400("gbuffer_sxxdx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1a9;
  uVar1 = FUN_00fb9400("gbuffer_wxxdx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1a9;
  uVar1 = FUN_00fb9400("gbuffer_wxxdx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1af;
  uVar1 = FUN_00fb9400("gbuffer_xxcdx");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1af;
  uVar1 = FUN_00fb9400("gbuffer_xxcdx");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 299;
  uVar1 = FUN_00fb9400("gbuffer_sxcdx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 299;
  uVar1 = FUN_00fb9400("gbuffer_sxcdx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ab;
  uVar1 = FUN_00fb9400("gbuffer_wxcdx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ab;
  uVar1 = FUN_00fb9400("gbuffer_wxcdx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18d;
  uVar1 = FUN_00fb9400("gbuffer_xxxsx");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18d;
  uVar1 = FUN_00fb9400("gbuffer_xxxsx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x101;
  uVar1 = FUN_00fb9400("gbuffer_sxxsx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x101;
  uVar1 = FUN_00fb9400("gbuffer_sxxsx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x189;
  uVar1 = FUN_00fb9400("gbuffer_wxxsx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x189;
  uVar1 = FUN_00fb9400("gbuffer_wxxsx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 399;
  uVar1 = FUN_00fb9400("gbuffer_xxcsx");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 399;
  uVar1 = FUN_00fb9400("gbuffer_xxcsx");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x103;
  uVar1 = FUN_00fb9400("gbuffer_sxcsx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x103;
  uVar1 = FUN_00fb9400("gbuffer_sxcsx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18b;
  uVar1 = FUN_00fb9400("gbuffer_wxcsx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18b;
  uVar1 = FUN_00fb9400("gbuffer_wxcsx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ac;
  uVar1 = FUN_00fb9400("gbuffer_xxxox");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ac;
  uVar1 = FUN_00fb9400("gbuffer_xxxox");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x128;
  uVar1 = FUN_00fb9400("gbuffer_sxxox");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x128;
  uVar1 = FUN_00fb9400("gbuffer_sxxox");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1a8;
  uVar1 = FUN_00fb9400("gbuffer_wxxox");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1a8;
  uVar1 = FUN_00fb9400("gbuffer_wxxox");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ae;
  uVar1 = FUN_00fb9400("gbuffer_xxcox");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ae;
  uVar1 = FUN_00fb9400("gbuffer_xxcox");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x12a;
  uVar1 = FUN_00fb9400("gbuffer_sxcox");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x12a;
  uVar1 = FUN_00fb9400("gbuffer_sxcox");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1aa;
  uVar1 = FUN_00fb9400("gbuffer_wxcox");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1aa;
  uVar1 = FUN_00fb9400("gbuffer_wxcox");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18c;
  uVar1 = FUN_00fb9400("gbuffer_xxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18c;
  uVar1 = FUN_00fb9400("gbuffer_xxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x100;
  uVar1 = FUN_00fb9400("gbuffer_sxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x100;
  uVar1 = FUN_00fb9400("gbuffer_sxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x188;
  uVar1 = FUN_00fb9400("gbuffer_wxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x188;
  uVar1 = FUN_00fb9400("gbuffer_wxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18e;
  uVar1 = FUN_00fb9400("gbuffer_xxcxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18e;
  uVar1 = FUN_00fb9400("gbuffer_xxcxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x102;
  uVar1 = FUN_00fb9400("gbuffer_sxcxx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x102;
  uVar1 = FUN_00fb9400("gbuffer_sxcxx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18a;
  uVar1 = FUN_00fb9400("gbuffer_wxcxx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18a;
  uVar1 = FUN_00fb9400("gbuffer_wxcxx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1bd;
  uVar1 = FUN_00fb9400("gbuffer_xxxdb");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1bd;
  uVar1 = FUN_00fb9400("gbuffer_xxxdb");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x139;
  uVar1 = FUN_00fb9400("gbuffer_sxxdb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x139;
  uVar1 = FUN_00fb9400("gbuffer_sxxdb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1b9;
  uVar1 = FUN_00fb9400("gbuffer_wxxdb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1b9;
  uVar1 = FUN_00fb9400("gbuffer_wxxdb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1bf;
  uVar1 = FUN_00fb9400("gbuffer_xxcdb");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1bf;
  uVar1 = FUN_00fb9400("gbuffer_xxcdb");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x13b;
  uVar1 = FUN_00fb9400("gbuffer_sxcdb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x13b;
  uVar1 = FUN_00fb9400("gbuffer_sxcdb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1bb;
  uVar1 = FUN_00fb9400("gbuffer_wxcdb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1bb;
  uVar1 = FUN_00fb9400("gbuffer_wxcdb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19d;
  uVar1 = FUN_00fb9400("gbuffer_xxxsb");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19d;
  uVar1 = FUN_00fb9400("gbuffer_xxxsb");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x111;
  uVar1 = FUN_00fb9400("gbuffer_sxxsb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x111;
  uVar1 = FUN_00fb9400("gbuffer_sxxsb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x199;
  uVar1 = FUN_00fb9400("gbuffer_wxxsb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x199;
  uVar1 = FUN_00fb9400("gbuffer_wxxsb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19f;
  uVar1 = FUN_00fb9400("gbuffer_xxcsb");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19f;
  uVar1 = FUN_00fb9400("gbuffer_xxcsb");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x113;
  uVar1 = FUN_00fb9400("gbuffer_sxcsb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x113;
  uVar1 = FUN_00fb9400("gbuffer_sxcsb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19b;
  uVar1 = FUN_00fb9400("gbuffer_wxcsb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19b;
  uVar1 = FUN_00fb9400("gbuffer_wxcsb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1bc;
  uVar1 = FUN_00fb9400("gbuffer_xxxob");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1bc;
  uVar1 = FUN_00fb9400("gbuffer_xxxob");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x138;
  uVar1 = FUN_00fb9400("gbuffer_sxxob");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x138;
  uVar1 = FUN_00fb9400("gbuffer_sxxob");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1b8;
  uVar1 = FUN_00fb9400("gbuffer_wxxob");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1b8;
  uVar1 = FUN_00fb9400("gbuffer_wxxob");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1be;
  uVar1 = FUN_00fb9400("gbuffer_xxcob");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1be;
  uVar1 = FUN_00fb9400("gbuffer_xxcob");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x13a;
  uVar1 = FUN_00fb9400("gbuffer_sxcob");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x13a;
  uVar1 = FUN_00fb9400("gbuffer_sxcob");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ba;
  uVar1 = FUN_00fb9400("gbuffer_wxcob");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ba;
  uVar1 = FUN_00fb9400("gbuffer_wxcob");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19c;
  uVar1 = FUN_00fb9400("gbuffer_xxxxb");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19c;
  uVar1 = FUN_00fb9400("gbuffer_xxxxb");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x110;
  uVar1 = FUN_00fb9400("gbuffer_sxxxb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x110;
  uVar1 = FUN_00fb9400("gbuffer_sxxxb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x198;
  uVar1 = FUN_00fb9400("gbuffer_wxxxb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x198;
  uVar1 = FUN_00fb9400("gbuffer_wxxxb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19e;
  uVar1 = FUN_00fb9400("gbuffer_xxcxb");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19e;
  uVar1 = FUN_00fb9400("gbuffer_xxcxb");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x112;
  uVar1 = FUN_00fb9400("gbuffer_sxcxb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x112;
  uVar1 = FUN_00fb9400("gbuffer_sxcxb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19a;
  uVar1 = FUN_00fb9400("gbuffer_wxcxb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19a;
  uVar1 = FUN_00fb9400("gbuffer_wxcxb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ed;
  uVar1 = FUN_00fb9400("gbuffer_xxmdx");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ed;
  uVar1 = FUN_00fb9400("gbuffer_xxmdx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x169;
  uVar1 = FUN_00fb9400("gbuffer_sxmdx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x169;
  uVar1 = FUN_00fb9400("gbuffer_sxmdx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1e9;
  uVar1 = FUN_00fb9400("gbuffer_wxmdx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1e9;
  uVar1 = FUN_00fb9400("gbuffer_wxmdx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ef;
  uVar1 = FUN_00fb9400("gbuffer_xxddx");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ef;
  uVar1 = FUN_00fb9400("gbuffer_xxddx");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x16b;
  uVar1 = FUN_00fb9400("gbuffer_sxddx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x16b;
  uVar1 = FUN_00fb9400("gbuffer_sxddx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1eb;
  uVar1 = FUN_00fb9400("gbuffer_wxddx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1eb;
  uVar1 = FUN_00fb9400("gbuffer_wxddx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1cd;
  uVar1 = FUN_00fb9400("gbuffer_xxmsx");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1cd;
  uVar1 = FUN_00fb9400("gbuffer_xxmsx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x141;
  uVar1 = FUN_00fb9400("gbuffer_sxmsx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x141;
  uVar1 = FUN_00fb9400("gbuffer_sxmsx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1c9;
  uVar1 = FUN_00fb9400("gbuffer_wxmsx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1c9;
  uVar1 = FUN_00fb9400("gbuffer_wxmsx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1cf;
  uVar1 = FUN_00fb9400("gbuffer_xxdsx");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1cf;
  uVar1 = FUN_00fb9400("gbuffer_xxdsx");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x143;
  uVar1 = FUN_00fb9400("gbuffer_sxdsx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x143;
  uVar1 = FUN_00fb9400("gbuffer_sxdsx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1cb;
  uVar1 = FUN_00fb9400("gbuffer_wxdsx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1cb;
  uVar1 = FUN_00fb9400("gbuffer_wxdsx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ec;
  uVar1 = FUN_00fb9400("gbuffer_xxmox");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ec;
  uVar1 = FUN_00fb9400("gbuffer_xxmox");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x168;
  uVar1 = FUN_00fb9400("gbuffer_sxmox");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x168;
  uVar1 = FUN_00fb9400("gbuffer_sxmox");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1e8;
  uVar1 = FUN_00fb9400("gbuffer_wxmox");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1e8;
  uVar1 = FUN_00fb9400("gbuffer_wxmox");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ee;
  uVar1 = FUN_00fb9400("gbuffer_xxdox");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ee;
  uVar1 = FUN_00fb9400("gbuffer_xxdox");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x16a;
  uVar1 = FUN_00fb9400("gbuffer_sxdox");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x16a;
  uVar1 = FUN_00fb9400("gbuffer_sxdox");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ea;
  uVar1 = FUN_00fb9400("gbuffer_wxdox");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ea;
  uVar1 = FUN_00fb9400("gbuffer_wxdox");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1cc;
  uVar1 = FUN_00fb9400("gbuffer_xxmxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1cc;
  uVar1 = FUN_00fb9400("gbuffer_xxmxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x140;
  uVar1 = FUN_00fb9400("gbuffer_sxmxx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x140;
  uVar1 = FUN_00fb9400("gbuffer_sxmxx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1c8;
  uVar1 = FUN_00fb9400("gbuffer_wxmxx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1c8;
  uVar1 = FUN_00fb9400("gbuffer_wxmxx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ce;
  uVar1 = FUN_00fb9400("gbuffer_xxdxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ce;
  uVar1 = FUN_00fb9400("gbuffer_xxdxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x142;
  uVar1 = FUN_00fb9400("gbuffer_sxdxx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x142;
  uVar1 = FUN_00fb9400("gbuffer_sxdxx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ca;
  uVar1 = FUN_00fb9400("gbuffer_wxdxx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ca;
  uVar1 = FUN_00fb9400("gbuffer_wxdxx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fd;
  uVar1 = FUN_00fb9400("gbuffer_xxmdb");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fd;
  uVar1 = FUN_00fb9400("gbuffer_xxmdb");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x179;
  uVar1 = FUN_00fb9400("gbuffer_sxmdb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x179;
  uVar1 = FUN_00fb9400("gbuffer_sxmdb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1f9;
  uVar1 = FUN_00fb9400("gbuffer_wxmdb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1f9;
  uVar1 = FUN_00fb9400("gbuffer_wxmdb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ff;
  uVar1 = FUN_00fb9400("gbuffer_xxddb");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ff;
  uVar1 = FUN_00fb9400("gbuffer_xxddb");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x17b;
  uVar1 = FUN_00fb9400("gbuffer_sxddb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x17b;
  uVar1 = FUN_00fb9400("gbuffer_sxddb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fb;
  uVar1 = FUN_00fb9400("gbuffer_wxddb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fb;
  uVar1 = FUN_00fb9400("gbuffer_wxddb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1dd;
  uVar1 = FUN_00fb9400("gbuffer_xxmsb");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1dd;
  uVar1 = FUN_00fb9400("gbuffer_xxmsb");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x151;
  uVar1 = FUN_00fb9400("gbuffer_sxmsb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x151;
  uVar1 = FUN_00fb9400("gbuffer_sxmsb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1d9;
  uVar1 = FUN_00fb9400("gbuffer_wxmsb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1d9;
  uVar1 = FUN_00fb9400("gbuffer_wxmsb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1df;
  uVar1 = FUN_00fb9400("gbuffer_xxdsb");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1df;
  uVar1 = FUN_00fb9400("gbuffer_xxdsb");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x153;
  uVar1 = FUN_00fb9400("gbuffer_sxdsb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x153;
  uVar1 = FUN_00fb9400("gbuffer_sxdsb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1db;
  uVar1 = FUN_00fb9400("gbuffer_wxdsb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1db;
  uVar1 = FUN_00fb9400("gbuffer_wxdsb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fc;
  uVar1 = FUN_00fb9400("gbuffer_xxmob");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fc;
  uVar1 = FUN_00fb9400("gbuffer_xxmob");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x178;
  uVar1 = FUN_00fb9400("gbuffer_sxmob");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x178;
  uVar1 = FUN_00fb9400("gbuffer_sxmob");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1f8;
  uVar1 = FUN_00fb9400("gbuffer_wxmob");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1f8;
  uVar1 = FUN_00fb9400("gbuffer_wxmob");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fe;
  uVar1 = FUN_00fb9400("gbuffer_xxdob");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fe;
  uVar1 = FUN_00fb9400("gbuffer_xxdob");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x17a;
  uVar1 = FUN_00fb9400("gbuffer_sxdob");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x17a;
  uVar1 = FUN_00fb9400("gbuffer_sxdob");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fa;
  uVar1 = FUN_00fb9400("gbuffer_wxdob");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fa;
  uVar1 = FUN_00fb9400("gbuffer_wxdob");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1dc;
  uVar1 = FUN_00fb9400("gbuffer_xxmxb");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1dc;
  uVar1 = FUN_00fb9400("gbuffer_xxmxb");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x150;
  uVar1 = FUN_00fb9400("gbuffer_sxmxb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x150;
  uVar1 = FUN_00fb9400("gbuffer_sxmxb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1d8;
  uVar1 = FUN_00fb9400("gbuffer_wxmxb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1d8;
  uVar1 = FUN_00fb9400("gbuffer_wxmxb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1de;
  uVar1 = FUN_00fb9400("gbuffer_xxdxb");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1de;
  uVar1 = FUN_00fb9400("gbuffer_xxdxb");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x152;
  uVar1 = FUN_00fb9400("gbuffer_sxdxb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x152;
  uVar1 = FUN_00fb9400("gbuffer_sxdxb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1da;
  uVar1 = FUN_00fb9400("gbuffer_wxdxb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1da;
  uVar1 = FUN_00fb9400("gbuffer_wxdxb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ac;
  uVar1 = FUN_00fb9400("gbufferacc_xxxox");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ac;
  uVar1 = FUN_00fb9400("gbufferacc_xxxox");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x128;
  uVar1 = FUN_00fb9400("gbufferacc_sxxox");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x128;
  uVar1 = FUN_00fb9400("gbufferacc_sxxox");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1a8;
  uVar1 = FUN_00fb9400("gbufferacc_wxxox");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1a8;
  uVar1 = FUN_00fb9400("gbufferacc_wxxox");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ae;
  uVar1 = FUN_00fb9400("gbufferacc_xxcox");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ae;
  uVar1 = FUN_00fb9400("gbufferacc_xxcox");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x12a;
  uVar1 = FUN_00fb9400("gbufferacc_sxcox");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x12a;
  uVar1 = FUN_00fb9400("gbufferacc_sxcox");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1aa;
  uVar1 = FUN_00fb9400("gbufferacc_wxcox");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1aa;
  uVar1 = FUN_00fb9400("gbufferacc_wxcox");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18c;
  uVar1 = FUN_00fb9400("gbufferacc_xxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18c;
  uVar1 = FUN_00fb9400("gbufferacc_xxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x100;
  uVar1 = FUN_00fb9400("gbufferacc_sxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x100;
  uVar1 = FUN_00fb9400("gbufferacc_sxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x188;
  uVar1 = FUN_00fb9400("gbufferacc_wxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x188;
  uVar1 = FUN_00fb9400("gbufferacc_wxxxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18e;
  uVar1 = FUN_00fb9400("gbufferacc_xxcxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18e;
  uVar1 = FUN_00fb9400("gbufferacc_xxcxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x102;
  uVar1 = FUN_00fb9400("gbufferacc_sxcxx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x102;
  uVar1 = FUN_00fb9400("gbufferacc_sxcxx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18a;
  uVar1 = FUN_00fb9400("gbufferacc_wxcxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x18a;
  uVar1 = FUN_00fb9400("gbufferacc_wxcxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1bc;
  uVar1 = FUN_00fb9400("gbufferacc_xxxob");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1bc;
  uVar1 = FUN_00fb9400("gbufferacc_xxxob");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x138;
  uVar1 = FUN_00fb9400("gbufferacc_sxxob");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x138;
  uVar1 = FUN_00fb9400("gbufferacc_sxxob");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1b8;
  uVar1 = FUN_00fb9400("gbufferacc_wxxob");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1b8;
  uVar1 = FUN_00fb9400("gbufferacc_wxxob");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1be;
  uVar1 = FUN_00fb9400("gbufferacc_xxcob");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1be;
  uVar1 = FUN_00fb9400("gbufferacc_xxcob");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x13a;
  uVar1 = FUN_00fb9400("gbufferacc_sxcob");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x13a;
  uVar1 = FUN_00fb9400("gbufferacc_sxcob");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ba;
  uVar1 = FUN_00fb9400("gbufferacc_wxcob");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ba;
  uVar1 = FUN_00fb9400("gbufferacc_wxcob");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19c;
  uVar1 = FUN_00fb9400("gbufferacc_xxxxb");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19c;
  uVar1 = FUN_00fb9400("gbufferacc_xxxxb");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x110;
  uVar1 = FUN_00fb9400("gbufferacc_sxxxb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x110;
  uVar1 = FUN_00fb9400("gbufferacc_sxxxb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x198;
  uVar1 = FUN_00fb9400("gbufferacc_wxxxb");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x198;
  uVar1 = FUN_00fb9400("gbufferacc_wxxxb");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19e;
  uVar1 = FUN_00fb9400("gbufferacc_xxcxb");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19e;
  uVar1 = FUN_00fb9400("gbufferacc_xxcxb");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x112;
  uVar1 = FUN_00fb9400("gbufferacc_sxcxb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x112;
  uVar1 = FUN_00fb9400("gbufferacc_sxcxb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19a;
  uVar1 = FUN_00fb9400("gbufferacc_wxcxb");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x19a;
  uVar1 = FUN_00fb9400("gbufferacc_wxcxb");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ec;
  uVar1 = FUN_00fb9400("gbufferacc_xxmox");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ec;
  uVar1 = FUN_00fb9400("gbufferacc_xxmox");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x168;
  uVar1 = FUN_00fb9400("gbufferacc_sxmox");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x168;
  uVar1 = FUN_00fb9400("gbufferacc_sxmox");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1e8;
  uVar1 = FUN_00fb9400("gbufferacc_wxmox");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1e8;
  uVar1 = FUN_00fb9400("gbufferacc_wxmox");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ee;
  uVar1 = FUN_00fb9400("gbufferacc_xxdox");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ee;
  uVar1 = FUN_00fb9400("gbufferacc_xxdox");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x16a;
  uVar1 = FUN_00fb9400("gbufferacc_sxdox");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x16a;
  uVar1 = FUN_00fb9400("gbufferacc_sxdox");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ea;
  uVar1 = FUN_00fb9400("gbufferacc_wxdox");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ea;
  uVar1 = FUN_00fb9400("gbufferacc_wxdox");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1cc;
  uVar1 = FUN_00fb9400("gbufferacc_xxmxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1cc;
  uVar1 = FUN_00fb9400("gbufferacc_xxmxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x140;
  uVar1 = FUN_00fb9400("gbufferacc_sxmxx");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x140;
  uVar1 = FUN_00fb9400("gbufferacc_sxmxx");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1c8;
  uVar1 = FUN_00fb9400("gbufferacc_wxmxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1c8;
  uVar1 = FUN_00fb9400("gbufferacc_wxmxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ce;
  uVar1 = FUN_00fb9400("gbufferacc_xxdxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ce;
  uVar1 = FUN_00fb9400("gbufferacc_xxdxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x142;
  uVar1 = FUN_00fb9400("gbufferacc_sxdxx");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x142;
  uVar1 = FUN_00fb9400("gbufferacc_sxdxx");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ca;
  uVar1 = FUN_00fb9400("gbufferacc_wxdxx");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1ca;
  uVar1 = FUN_00fb9400("gbufferacc_wxdxx");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxx");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fc;
  uVar1 = FUN_00fb9400("gbufferacc_xxmob");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fc;
  uVar1 = FUN_00fb9400("gbufferacc_xxmob");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x178;
  uVar1 = FUN_00fb9400("gbufferacc_sxmob");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x178;
  uVar1 = FUN_00fb9400("gbufferacc_sxmob");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1f8;
  uVar1 = FUN_00fb9400("gbufferacc_wxmob");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1f8;
  uVar1 = FUN_00fb9400("gbufferacc_wxmob");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fe;
  uVar1 = FUN_00fb9400("gbufferacc_xxdob");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fe;
  uVar1 = FUN_00fb9400("gbufferacc_xxdob");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x17a;
  uVar1 = FUN_00fb9400("gbufferacc_sxdob");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x17a;
  uVar1 = FUN_00fb9400("gbufferacc_sxdob");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fa;
  uVar1 = FUN_00fb9400("gbufferacc_wxdob");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1fa;
  uVar1 = FUN_00fb9400("gbufferacc_wxdob");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1dc;
  uVar1 = FUN_00fb9400("gbufferacc_xxmxb");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1dc;
  uVar1 = FUN_00fb9400("gbufferacc_xxmxb");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x150;
  uVar1 = FUN_00fb9400("gbufferacc_sxmxb");
  uVar2 = FUN_00fb93a0("gbuffer_sxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x150;
  uVar1 = FUN_00fb9400("gbufferacc_sxmxb");
  uVar2 = FUN_00fb93a0("gbuffer_sbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1d8;
  uVar1 = FUN_00fb9400("gbufferacc_wxmxb");
  uVar2 = FUN_00fb93a0("gbuffer_xxxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1d8;
  uVar1 = FUN_00fb9400("gbufferacc_wxmxb");
  uVar2 = FUN_00fb93a0("gbuffer_xbxxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1de;
  uVar1 = FUN_00fb9400("gbufferacc_xxdxb");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1de;
  uVar1 = FUN_00fb9400("gbufferacc_xxdxb");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x152;
  uVar1 = FUN_00fb9400("gbufferacc_sxdxb");
  uVar2 = FUN_00fb93a0("gbuffer_sxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x152;
  uVar1 = FUN_00fb9400("gbufferacc_sxdxb");
  uVar2 = FUN_00fb93a0("gbuffer_sbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1da;
  uVar1 = FUN_00fb9400("gbufferacc_wxdxb");
  uVar2 = FUN_00fb93a0("gbuffer_xxcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  uVar3 = 0x1da;
  uVar1 = FUN_00fb9400("gbufferacc_wxdxb");
  uVar2 = FUN_00fb93a0("gbuffer_xbcxb");
  FUN_00fbb8c0(uVar2,uVar1,uVar3);
  _DAT_018de598 = &DAT_01f74a78;
  _DAT_018de618 = &DAT_01f74bc0;
  _DAT_018de698 = &DAT_01f74d08;
  _DAT_018de718 = &DAT_01f74e50;
  _DAT_018de798 = &DAT_01f74f98;
  _DAT_018de818 = &DAT_01f750e0;
  _DAT_018de898 = &DAT_01f75228;
  _DAT_018de918 = &DAT_01f75370;
  _DAT_018de998 = &DAT_01f754b8;
  _DAT_018dea18 = &DAT_01f75600;
  _DAT_018dea98 = &DAT_01f75748;
  _DAT_018deb18 = &DAT_01f75890;
  _DAT_018deb98 = &DAT_01f759d8;
  _DAT_018dec18 = &DAT_01f75b20;
  _DAT_018dec98 = &DAT_01f75c68;
  _DAT_018ded18 = &DAT_01f75db0;
  _DAT_018ded98 = &DAT_01f75ef8;
  _DAT_018dee18 = &DAT_01f76040;
  _DAT_018dee98 = &DAT_01f76188;
  _DAT_018def18 = &DAT_01f762d0;
  _DAT_018def98 = &DAT_01f76418;
  _DAT_018df018 = &DAT_01f76560;
  _DAT_018df098 = &DAT_01f766a8;
  _DAT_018df118 = &DAT_01f767f0;
  _DAT_018df198 = &DAT_01f76938;
  _DAT_018df218 = &DAT_01f76a80;
  _DAT_018df298 = &DAT_01f76bc8;
  _DAT_018df318 = &DAT_01f76d10;
  _DAT_018df398 = &DAT_01f76e58;
  _DAT_018df418 = &DAT_01f76fa0;
  _DAT_018df498 = &DAT_01f770e8;
  _DAT_018df518 = &DAT_01f77230;
  _DAT_018df598 = &DAT_01f77378;
  _DAT_018df618 = &DAT_01f774c0;
  _DAT_018df698 = &DAT_01f77608;
  _DAT_018df718 = &DAT_01f77750;
  _DAT_018df798 = &DAT_01f77898;
  _DAT_018df818 = &DAT_01f779e0;
  _DAT_018df898 = &DAT_01f77b28;
  _DAT_018df918 = &DAT_01f77c70;
  _DAT_018df998 = &DAT_01f77db8;
  _DAT_018dfa18 = &DAT_01f77f00;
  _DAT_018dfa98 = &DAT_01f78048;
  _DAT_018dfb18 = &DAT_01f78190;
  _DAT_018dfb98 = &DAT_01f782d8;
  _DAT_018dfc18 = &DAT_01f78420;
  _DAT_018dfc98 = &DAT_01f78568;
  _DAT_018dfd18 = &DAT_01f786b0;
  _DAT_018dfd98 = &DAT_01f787f8;
  _DAT_018dfe18 = &DAT_01f78940;
  _DAT_018dfe98 = &DAT_01f78a88;
  _DAT_018dff18 = &DAT_01f78bd0;
  _DAT_018dff98 = &DAT_01f78d18;
  _DAT_018e0018 = &DAT_01f78e60;
  _DAT_018e0098 = &DAT_01f78fa8;
  _DAT_018e0118 = &DAT_01f790f0;
  _DAT_018e0198 = &DAT_01f79238;
  _DAT_018e0218 = &DAT_01f79380;
  _DAT_018e0298 = &DAT_01f794c8;
  _DAT_018e0318 = &DAT_01f79610;
  _DAT_018e0398 = &DAT_01f79758;
  _DAT_018e0418 = &DAT_01f798a0;
  _DAT_018e0498 = &DAT_01f799e8;
  _DAT_018e0518 = &DAT_01f79b30;
  _DAT_018e0598 = &DAT_01f79c78;
  _DAT_018e0618 = &DAT_01f79dc0;
  _DAT_018e0698 = &DAT_01f79f08;
  _DAT_018e0718 = &DAT_01f7a050;
  _DAT_018e0798 = &DAT_01f7a198;
  _DAT_018e0818 = &DAT_01f7a2e0;
  _DAT_018e0898 = &DAT_01f7a428;
  _DAT_018e0918 = &DAT_01f7a570;
  _DAT_018e0998 = &DAT_01f7a6b8;
  _DAT_018e0a18 = &DAT_01f7a800;
  _DAT_018e0a98 = &DAT_01f7a948;
  _DAT_018e0b18 = &DAT_01f7aa90;
  _DAT_018e0b98 = &DAT_01f7abd8;
  _DAT_018e0c18 = &DAT_01f7ad20;
  _DAT_018e0c98 = &DAT_01f7ae68;
  _DAT_018e0d18 = &DAT_01f7afb0;
  _DAT_018e0d98 = &DAT_01f7b0f8;
  _DAT_018e0e18 = &DAT_01f7b240;
  _DAT_018e0e98 = &DAT_01f7b388;
  _DAT_018e0f18 = &DAT_01f7b4d0;
  _DAT_018e0f98 = &DAT_01f7b618;
  _DAT_018e1018 = &DAT_01f7b760;
  _DAT_018e1098 = &DAT_01f7b8a8;
  _DAT_018e1118 = &DAT_01f7b9f0;
  _DAT_018e1198 = &DAT_01f7bb38;
  _DAT_018e1218 = &DAT_01f7bc80;
  _DAT_018e1298 = &DAT_01f7bdc8;
  _DAT_018e1318 = &DAT_01f7bf10;
  _DAT_018e1398 = &DAT_01f7c058;
  _DAT_018e1418 = &DAT_01f7c1a0;
  _DAT_018e1498 = &DAT_01f7c2e8;
  _DAT_018e1518 = &DAT_01f7c430;
  _DAT_018e1598 = &DAT_01f7c578;
  _DAT_018e1618 = &DAT_01f7c6c0;
  _DAT_018e1698 = &DAT_01f7c808;
  _DAT_018e1718 = &DAT_01f7c950;
  _DAT_018e1798 = &DAT_01f7ca98;
  _DAT_018e1818 = &DAT_01f7cbe0;
  _DAT_018e1898 = &DAT_01f7cd28;
  _DAT_018e1918 = &DAT_01f7ce70;
  _DAT_018e1998 = &DAT_01f7cfb8;
  _DAT_018e1a18 = &DAT_01f7d100;
  _DAT_018e1a98 = &DAT_01f7d248;
  _DAT_018e1b18 = &DAT_01f7d390;
  _DAT_018e1b98 = &DAT_01f7d4d8;
  _DAT_018e1c18 = &DAT_01f7d620;
  _DAT_018e1c98 = &DAT_01f7d768;
  _DAT_018e1d18 = &DAT_01f7d8b0;
  _DAT_018e1d98 = &DAT_01f7d9f8;
  _DAT_018e1e18 = &DAT_01f7db40;
  _DAT_018e1e98 = &DAT_01f7dc88;
  _DAT_018e1f18 = &DAT_01f7ddd0;
  _DAT_018e1f98 = &DAT_01f7df18;
  _DAT_018e2018 = &DAT_01f7e060;
  _DAT_018e2098 = &DAT_01f7e1a8;
  _DAT_018e2118 = &DAT_01f7e2f0;
  _DAT_018e2198 = &DAT_01f7e438;
  _DAT_018e2218 = &DAT_01f7e580;
  _DAT_018e2298 = &DAT_01f7e6c8;
  _DAT_018e2318 = &DAT_01f7e810;
  _DAT_018e2398 = &DAT_01f7e958;
  _DAT_018e2418 = &DAT_01f7eaa0;
  _DAT_018e2498 = &DAT_01f7ebe8;
  _DAT_018e2518 = &DAT_01f7ed30;
  _DAT_018e2598 = &DAT_01f7ee78;
  _DAT_018e2618 = &DAT_01f7efc0;
  _DAT_018e2698 = &DAT_01f7f108;
  _DAT_018e2718 = &DAT_01f7f250;
  _DAT_018e2798 = &DAT_01f7f398;
  _DAT_018e2818 = &DAT_01f7f4e0;
  _DAT_018e2898 = &DAT_01f7f628;
  _DAT_018e2918 = &DAT_01f7f770;
  _DAT_018e2998 = &DAT_01f7f8b8;
  _DAT_018e2a18 = &DAT_01f7fa00;
  _DAT_018e2a98 = &DAT_01f7fb48;
  _DAT_018e2b18 = &DAT_01f7fc90;
  _DAT_018e2b98 = &DAT_01f7fdd8;
  _DAT_018e2c18 = &DAT_01f7ff20;
  _DAT_018e2c98 = &DAT_01f80068;
  _DAT_018e2d18 = &DAT_01f801b0;
  _DAT_018e2d98 = &DAT_01f802f8;
  _DAT_018e2e18 = &DAT_01f80440;
  _DAT_018e2e98 = &DAT_01f80588;
  _DAT_018e2f18 = &DAT_01f806d0;
  _DAT_018e2f98 = &DAT_01f80818;
  _DAT_018e3018 = &DAT_01f80960;
  _DAT_018e3098 = &DAT_01f80aa8;
  _DAT_018e3118 = &DAT_01f80bf0;
  _DAT_018e3198 = &DAT_01f80d38;
  _DAT_018e3218 = &DAT_01f80e80;
  _DAT_018e3298 = &DAT_01f80fc8;
  _DAT_018e3318 = &DAT_01f81110;
  _DAT_018e3398 = &DAT_01f81258;
  _DAT_018e3418 = &DAT_01f813a0;
  _DAT_018e3498 = &DAT_01f814e8;
  _DAT_018e3518 = &DAT_01f81630;
  _DAT_018e3598 = &DAT_01f81778;
  _DAT_018e3618 = &DAT_01f818c0;
  _DAT_018e3698 = &DAT_01f81a08;
  _DAT_018e3718 = &DAT_01f81b50;
  _DAT_018e3798 = &DAT_01f81c98;
  _DAT_018e3818 = &DAT_01f81de0;
  _DAT_018e3898 = &DAT_01f81f28;
  _DAT_018e3918 = &DAT_01f82070;
  _DAT_018e3998 = &DAT_01f821b8;
  _DAT_018e3a18 = &DAT_01f82300;
  _DAT_018e3a98 = &DAT_01f82448;
  _DAT_018e3b18 = &DAT_01f82590;
  _DAT_018e3b98 = &DAT_01f826d8;
  _DAT_018e3c18 = &DAT_01f82820;
  _DAT_018e3c98 = &DAT_01f82968;
  _DAT_018e3d18 = &DAT_01f82ab0;
  _DAT_018e3d98 = &DAT_01f82bf8;
  _DAT_018e3e18 = &DAT_01f82d40;
  _DAT_018e3e98 = &DAT_01f82e88;
  _DAT_018e3f18 = &DAT_01f82fd0;
  _DAT_018e3f98 = &DAT_01f83118;
  _DAT_018e4018 = &DAT_01f83260;
  _DAT_018e4098 = &DAT_01f833a8;
  _DAT_018e4118 = &DAT_01f834f0;
  _DAT_018e4198 = &DAT_01f83638;
  _DAT_018e4218 = &DAT_01f83780;
  _DAT_018e4298 = &DAT_01f838c8;
  _DAT_018e4318 = &DAT_01f83a10;
  _DAT_018e4398 = &DAT_01f83b58;
  _DAT_018e4418 = &DAT_01f83ca0;
  _DAT_018e4498 = &DAT_01f83de8;
  _DAT_018e4518 = &DAT_01f83f30;
  _DAT_018e4598 = &DAT_01f84078;
  _DAT_018e4618 = &DAT_01f841c0;
  _DAT_018e4698 = &DAT_01f84308;
  _DAT_018e4718 = &DAT_01f84450;
  _DAT_018e4798 = &DAT_01f84598;
  _DAT_018e4818 = &DAT_01f846e0;
  _DAT_018e4898 = &DAT_01f84828;
  _DAT_018e4918 = &DAT_01f84970;
  _DAT_018e4998 = &DAT_01f84ab8;
  _DAT_018e4a18 = &DAT_01f84c00;
  _DAT_018e4a98 = &DAT_01f84d48;
  _DAT_018e4b18 = &DAT_01f84e90;
  _DAT_018e4b98 = &DAT_01f84fd8;
  _DAT_018e4c18 = &DAT_01f85120;
  _DAT_018e4c98 = &DAT_01f85268;
  _DAT_018e4d18 = &DAT_01f853b0;
  _DAT_018e4d98 = &DAT_01f854f8;
  _DAT_018e4e18 = &DAT_01f85640;
  _DAT_018e4e98 = &DAT_01f85788;
  _DAT_018e4f18 = &DAT_01f858d0;
  _DAT_018e4f98 = &DAT_01f85a18;
  _DAT_018e5018 = &DAT_01f85b60;
  _DAT_018e5098 = &DAT_01f85ca8;
  _DAT_018e5118 = &DAT_01f85df0;
  _DAT_018e5198 = &DAT_01f85f38;
  _DAT_018e5218 = &DAT_01f86080;
  _DAT_018e5298 = &DAT_01f861c8;
  _DAT_018e5318 = &DAT_01f86310;
  _DAT_018e5398 = &DAT_01f86458;
  _DAT_018e5418 = &DAT_01f865a0;
  _DAT_018e5498 = &DAT_01f866e8;
  _DAT_018e5518 = &DAT_01f86830;
  _DAT_018e5598 = &DAT_01f86978;
  _DAT_018e5618 = &DAT_01f86ac0;
  _DAT_018e5698 = &DAT_01f86c08;
  _DAT_018e5718 = &DAT_01f86d50;
  _DAT_018e5798 = &DAT_01f86e98;
  _DAT_018e5818 = &DAT_01f86fe0;
  _DAT_018e5898 = &DAT_01f87128;
  _DAT_018e5918 = &DAT_01f87270;
  _DAT_018e5998 = &DAT_01f873b8;
  _DAT_018e5a18 = &DAT_01f87500;
  _DAT_018e5a98 = &DAT_01f87648;
  _DAT_018e5b18 = &DAT_01f87790;
  _DAT_018e5b98 = &DAT_01f878d8;
  _DAT_018e5c18 = &DAT_01f87a20;
  _DAT_018e5c98 = &DAT_01f87b68;
  _DAT_018e5d18 = &DAT_01f87cb0;
  _DAT_018e5d98 = &DAT_01f87df8;
  _DAT_018e5e18 = &DAT_01f87f40;
  _DAT_018e5e98 = &DAT_01f88088;
  _DAT_018e5f18 = &DAT_01f881d0;
  _DAT_018e5f98 = &DAT_01f88318;
  _DAT_018e6018 = &DAT_01f88460;
  _DAT_018e6098 = &DAT_01f885a8;
  _DAT_018e6118 = &DAT_01f886f0;
  _DAT_018e6198 = &DAT_01f88838;
  _DAT_018e6218 = &DAT_01f88980;
  _DAT_018e6298 = &DAT_01f88ac8;
  _DAT_018e6318 = &DAT_01f88c10;
  _DAT_018e6398 = &DAT_01f88d58;
  _DAT_018e6418 = &DAT_01f88ea0;
  _DAT_018e6498 = &DAT_01f88fe8;
  _DAT_018e6518 = &DAT_01f89130;
  _DAT_018e6598 = &DAT_01f89278;
  _DAT_018e6618 = &DAT_01f893c0;
  _DAT_018e6698 = &DAT_01f89508;
  _DAT_018e6718 = &DAT_01f89650;
  _DAT_018e6798 = &DAT_01f89798;
  _DAT_018e6818 = &DAT_01f898e0;
  _DAT_018e6898 = &DAT_01f89a28;
  _DAT_018e6918 = &DAT_01f89b70;
  _DAT_018e6998 = &DAT_01f89cb8;
  _DAT_018e6a18 = &DAT_01f89e00;
  _DAT_018e6a98 = &DAT_01f89f48;
  _DAT_018e6b18 = &DAT_01f8a090;
  _DAT_018e6b98 = &DAT_01f8a1d8;
  _DAT_018e6c18 = &DAT_01f8a320;
  _DAT_018e6c98 = &DAT_01f8a468;
  _DAT_018e6d18 = &DAT_01f8a5b0;
  _DAT_018e6d98 = &DAT_01f8a6f8;
  _DAT_018e6e18 = &DAT_01f8a840;
  _DAT_018e6e98 = &DAT_01f8a988;
  _DAT_018e6f18 = &DAT_01f8aad0;
  _DAT_018e6f98 = &DAT_01f8ac18;
  _DAT_018e7018 = &DAT_01f8ad60;
  _DAT_018e7098 = &DAT_01f8aea8;
  _DAT_018e7118 = &DAT_01f8aff0;
  _DAT_018e7198 = &DAT_01f8b138;
  _DAT_018e7218 = &DAT_01f8b280;
  _DAT_018e7298 = &DAT_01f8b3c8;
  _DAT_018e7318 = &DAT_01f8b510;
  _DAT_018e7398 = &DAT_01f8b658;
  _DAT_018e7418 = &DAT_01f8b7a0;
  _DAT_018e7498 = &DAT_01f8b8e8;
  _DAT_018e7518 = &DAT_01f8ba30;
  FUN_00fc2260(4);
  return;
}

// 00A26B90  FUN_00a26b90  size=16  [run]
void FUN_00a26b90(void)

{
  FUN_00fc1ed0(&DAT_01b7f3f0);
  return;
}

// 00A26BB0  FUN_00a26bb0  size=5151  [run]
void FUN_00a26bb0(void)

{
  undefined *puVar1;
  int iVar2;
  
  FUN_00a04e70();
  FUN_00a18980();
  FUN_00fa2620();
  FUN_00fa26b0();
  FUN_00fa26b0();
  iVar2 = 4;
  do {
    FUN_00fa26b0();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00fa26b0();
  FUN_00fa26b0();
  iVar2 = 0x10;
  do {
    FUN_00fa2620();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0x10;
  do {
    FUN_00fa2620();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  puVar1 = &DAT_01be15b0;
  do {
    FUN_00fa2620();
    puVar1 = puVar1 + 0x50;
  } while ((int)puVar1 < 0x1be1650);
  FUN_00fa26b0();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  iVar2 = 3;
  do {
    FUN_00fa2620();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 4;
  do {
    FUN_00fa2620();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00fa2620();
  iVar2 = 4;
  do {
    FUN_00fa2620();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00fa2620();
  FUN_00f90ed0();
  if ((DAT_01bea084 & 0x2000000) != 0) {
    FUN_00fb2a00();
    FUN_00fad610();
    cModelShaderEventWeight::vf04();
    cModelShaderEventFixed::vf04();
    cModelShaderEventFixed_I::vf04();
    cModelShaderWeight::vf04();
    cModelShaderWeightDepth::vf04();
    cModelShaderFixedDepth::vf04();
    FUN_00fb8a80();
    FUN_00fc5150();
    FUN_00fc5150();
    FUN_00fc5150();
    FUN_00fb8a80();
    FUN_00fb8a80();
    FUN_00fb8a80();
    FUN_00fc53e0();
    FUN_00fd5c60();
    FUN_00fd5c60();
    FUN_00fd5c60();
    FUN_00fd5c60();
    FUN_00fc5530();
    FUN_00fc5660();
    FUN_00fc5790();
    FUN_00fc5a90();
    FUN_00fc5fc0();
    FUN_00fc6100();
    FUN_00fc6230();
    FUN_00fd5910();
    FUN_00fd5b30();
    FUN_00fd56b0();
    FUN_00fd57e0();
    FUN_00fd60a0();
    FUN_00fc6f10();
    FUN_00fc6f10();
    FUN_00fc6f10();
    FUN_00fb9120();
    FUN_00fb9120();
    FUN_00fb9120();
    FUN_00fc70a0();
    FUN_00fc6dc0();
    FUN_00fb8a40();
    FUN_00fb8a40();
    FUN_00fb8a40();
    FUN_00fc5000();
    Hw::cShader::vf04();
    Hw::cShader::vf04();
    FUN_00fc6580();
    FUN_00fc67a0();
    FUN_00fc6ae0();
    FUN_00fc6ca0();
    FUN_00fc7ac0();
    FUN_00fc7f70();
    FUN_00fc8290();
    FUN_00fc85a0();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    cModelShaderGBuffer::vf04();
    FUN_00fc4990();
    FUN_00fc4990();
    FUN_00fc4990();
    FUN_00fc49b0();
    FUN_00fc49b0();
    FUN_00fc49b0();
    FUN_00fc49b0();
    FUN_00fc4a00();
    FUN_00fc4a00();
    FUN_00fc4a00();
    Hw::cShader::vf04();
    FUN_00fc4990();
    FUN_00fc4990();
    FUN_00fc4990();
    FUN_00fc49b0();
    FUN_00fc49b0();
    FUN_00fc49b0();
    FUN_00fc49b0();
    FUN_00fc4a00();
    FUN_00fc4a00();
    FUN_00fc4a00();
    FUN_00fc4990();
    FUN_00fc4990();
    FUN_00fc4990();
    FUN_00fc49b0();
    FUN_00fc49b0();
    FUN_00fc49b0();
    FUN_00fc4a00();
    FUN_00fc4a00();
    FUN_00fc4a00();
    FUN_00fc7350();
    FUN_00fc7350();
    FUN_00fc7370();
    FUN_00fc73c0();
    FUN_00fc7400();
    FUN_00fc7430();
    FUN_00fb8a60();
    FUN_00fb8a60();
    FUN_00fb8a60();
    FUN_00fc4d90();
    FUN_00fc4d90();
    FUN_00fc4d90();
    FUN_00fc4c30();
    FUN_00fc4c30();
    FUN_00fc4c30();
    FUN_00fc4c30();
    FUN_00fc4ed0();
    cFilterShader00::vf04();
    cFilterShader01::vf04();
    cFilterShader01::vf04();
    cFilterShader03::vf04();
    cFilterShader04::vf04();
    cFilterShader05::vf04();
    cFilterShader06::vf04();
    cFilterShader07::vf04();
    cFilterShader08::vf04();
    cFilterShader09::vf04();
    cFilterShader09_Sub::vf04();
    cFilterShader09_Sub2::vf04();
    cFilterShader10::vf04();
    cFilterShaderCopyTex::vf04();
    cFilterShader2xAAResolve::vf04();
    cFilterShader2xAAResolve::vf04();
    cFilterShaderZTurn::vf04();
    cFilterShaderZCopy::vf04();
    cFilterShaderZConversion::vf04();
    cFilterShaderZLinearConversion::vf04();
    cFilterShaderZCullReload::vf04();
    FUN_00fd4d60();
    FUN_00fd4ee0();
    FUN_00fd5320();
    FUN_00fd5490();
    FUN_00fc7200();
    FUN_00fc7200();
    FUN_00fc7330();
    FUN_00fc7330();
    FUN_00ec6040();
    cEspShaderShimmer_DAF::vf04();
    cEspShaderShimmer_DAF::vf04();
    cEspShaderShimmer_DAF::vf04();
    cEspShaderShimmer_DAF::vf04();
    cEspShaderShimmer_DAF::vf04();
    cEspShaderShimmer_DAF::vf04();
    FUN_00ec4ba0();
  }
  FUN_00fc1f10();
  FUN_00f9cb70();
  FUN_00f9cb70();
  Hw::cShaderPF::vf04();
  Hw::cShaderPFT::vf04();
  Hw::cShaderPFT::vf04();
  Hw::cShaderPFTyuv::vf04();
  Hw::cShaderPFTyuva::vf04();
  Hw::cShaderCharacter::vf04();
  Hw::cShaderPG::vf04();
  cModelShaderWeight::vf04();
  cModelShaderFixed::vf04();
  cModelShaderFixed_I::vf04();
  cFilterShaderMovie::vf04();
  cFilterShaderCopyTex::vf04();
  cFilterShaderGather::vf04();
  cFilterShaderGatherNoise::vf04();
  cFilterShaderOculus::vf04();
  FUN_00fa6300();
  return;
}

// 00A27FE0  FUN_00a27fe0  size=30  [run]
void FUN_00a27fe0(undefined4 param_1,undefined4 param_2)

{
  FUN_00a19a90(param_1,param_2);
  thunk_FUN_00fa5a00(param_1,param_2);
  return;
}

// 00A28040  FUN_00a28040  size=37  [run]
float10 FUN_00a28040(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00f98a90();
  iVar2 = FUN_00f98aa0();
  return (float10)iVar1 / (float10)iVar2;
}

// 00A28070  FUN_00a28070  size=81  [run]
void __thiscall
FUN_00a28070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00f98aa0(0,param_3,param_4,param_1);
  iVar1 = FUN_00f98a90((float)iVar1);
  FUN_00ddcbb0(param_2,0,(float)iVar1);
  return;
}

// 00A280D0  FUN_00a280d0  size=97  [run]
void FUN_00a280d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_00f98a90();
  fVar2 = (float)iVar1;
  iVar1 = FUN_00f98aa0(param_3,param_4,param_5,param_6,iVar1,fVar2);
  FUN_00ddccc0(param_1,param_2,fVar2 / (float)iVar1);
  return;
}

// 00A28140  FUN_00a28140  size=58  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a28140(uint param_1)

{
  _DAT_01b83bb8 =
       ((param_1 >> 0x10 & 0xfe) << 8 | param_1 >> 8 & 0xfe | (param_1 >> 0x18) << 0x11) << 7 |
       (param_1 & 0xff) >> 1;
  return;
}

// 00A28180  FUN_00a28180  size=50  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a28180(uint param_1)

{
  _DAT_01b83bb4 =
       (((param_1 >> 0x18) << 8 | param_1 >> 0x10 & 0xff) << 8 | param_1 >> 8 & 0xff) << 8 |
       param_1 & 0xff;
  return;
}

// 00A281F0  FUN_00a281f0  size=16  [run]
void FUN_00a281f0(undefined4 param_1)

{
  FUN_00de4500(param_1);
  return;
}

// 00A28210  FUN_00a28210  size=86  [run]
void FUN_00a28210(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  while ((((DAT_01bea084 & 0x100) != 0 && (iVar1 = FUN_00f99190(), iVar1 == 0)) &&
         (param_1 == (undefined *)0x0))) {
    param_3 = 0;
    param_2 = 0;
    param_4 = 1;
    param_1 = &DAT_01be1e70;
  }
  Hw::cRenderTargetInfo::cRenderTargetInfo_4(param_1,param_2,param_3,param_4);
  return;
}

// 00A28270  thunk_FUN_00fa5730  size=5  [run]
void thunk_FUN_00fa5730(undefined4 *param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 auStack_84 [18];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_018e8764 ^ (uint)auStack_84;
  ppuVar1 = &PTR_vftable_018da6d0;
  uVar3 = 0x30;
  do {
    if (*(undefined **)((int)(param_1 + -0x6369b4) + (int)ppuVar1) != *ppuVar1) {
      iVar2 = FUN_00fa30d0(param_1,&PTR_vftable_018da6d0,DAT_01f20564);
      uVar5 = DAT_01f20580;
      uVar7 = DAT_01f20584;
      if (iVar2 != 0) {
        if ((DAT_018da6d4 == param_1[1]) && (DAT_018da6d8 != 0)) {
          param_1[2] = DAT_018da6d8;
        }
        if ((DAT_018da6dc == param_1[3]) && (DAT_018da6e0 != 0)) {
          param_1[4] = DAT_018da6e0;
        }
        if ((DAT_018da6e4 == param_1[5]) && (DAT_018da6e8 != 0)) {
          param_1[6] = DAT_018da6e8;
        }
        if ((DAT_018da6ec == param_1[7]) && (DAT_018da6f0 != 0)) {
          param_1[8] = DAT_018da6f0;
        }
        ppuVar1 = &PTR_vftable_018da6d0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppuVar1 = (undefined *)*param_1;
          param_1 = param_1 + 1;
          ppuVar1 = ppuVar1 + 1;
        }
        uVar5 = DAT_01f20580;
        uVar7 = DAT_01f20584;
        if (param_2 != 0) {
          if (DAT_018da6d4 == 0) {
            puVar4 = &DAT_01f20668;
            puVar6 = auStack_84;
            for (iVar2 = 0x1a; uVar5 = uStack_38, uVar7 = uStack_3c, iVar2 != 0; iVar2 = iVar2 + -1)
            {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
          }
          else {
            iVar2 = FUN_00fa0740(0);
            if (iVar2 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined4 *)(iVar2 + 8);
            }
            iVar2 = FUN_00fa0740(0);
            if (iVar2 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined4 *)(iVar2 + 0xc);
            }
          }
          DAT_01f20578 = 0;
          DAT_01f20568 = 0;
          DAT_01f2056c = 0;
          DAT_01f2057c = 0x3f800000;
          DAT_01f20570 = uVar7;
          DAT_01f20574 = uVar5;
          if (DAT_01f206d4 != (int *)0x0) {
            uStack_c = 0;
            uStack_1c = 0;
            uStack_18 = 0;
            uStack_8 = 0x3f800000;
            uStack_14 = uVar7;
            uStack_10 = uVar5;
            (**(code **)(*DAT_01f206d4 + 0xbc))(DAT_01f206d4,&uStack_1c);
          }
        }
      }
      DAT_01f20584 = uVar7;
      DAT_01f20580 = uVar5;
      __security_check_cookie(uStack_4 ^ (uint)auStack_84);
      return;
    }
    uVar3 = uVar3 - 4;
    ppuVar1 = ppuVar1 + 1;
  } while (3 < uVar3);
  __security_check_cookie(uStack_4 ^ (uint)auStack_84);
  return;
}

// 00A28280  FUN_00a28280  size=284  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a28280(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_01be5564 * 0x50;
  DAT_01b83c20 = &DAT_01be1830 + iVar2;
  DAT_01b83c00 = &DAT_01be1880 + iVar2;
  _DAT_01b83bc8 = &DAT_01be18d0 + DAT_01be5564 * 0xf0;
  iVar3 = DAT_01be5564 * 0x140;
  DAT_01b83c28 = &DAT_01be1ba0 + DAT_01be5564 * 0xf0;
  puVar1 = &DAT_01be1c90;
  DAT_01b83c24 = &DAT_01be19c0 + iVar3;
  DAT_01b83bc4 = &DAT_01be1b00 + iVar2;
  DAT_01b83c18 = &DAT_01be1ce0 + iVar3;
  DAT_01b83c14 = &DAT_01be1dd0 + iVar2;
  DAT_01b83c2c = &DAT_01be1b50 + iVar2;
  DAT_01b83bbc = *(undefined4 *)(&DAT_01b83bcc + DAT_01be5564 * 4);
  if (((byte)DAT_01bea084 & 0x40) != 0) {
    puVar1 = &DAT_01be1d80;
  }
  DAT_01b83c1c = puVar1 + iVar3;
  _DAT_01b83bc0 = &DAT_01be1ec0 + iVar2;
  DAT_01b83c08 = DAT_01b83c30;
  DAT_01be6724 = (uint)(DAT_01be6724 == 0);
  DAT_01b83c0c = DAT_01b83c30;
  DAT_01b83c30 = &DAT_01be1740 + (DAT_01be6724 + DAT_01be5564 * 2) * 0x50;
  DAT_01b83c04 = &DAT_01be1740 + DAT_01be6724 * 0x50;
  if (DAT_01b83c10 == (undefined *)0x0) {
    DAT_01b83c10 = &DAT_01be1dd0 + iVar2;
  }
  return;
}

// 00A283A0  FUN_00a283a0  size=34  [run]
undefined4 FUN_00a283a0(void)

{
  int iVar1;
  
  if (DAT_01b83c30 == 0) {
    return DAT_0189f580;
  }
  iVar1 = FUN_00fa0740(0);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

// 00A283D0  FUN_00a283d0  size=34  [run]
undefined4 FUN_00a283d0(void)

{
  int iVar1;
  
  if (DAT_01b83c30 == 0) {
    return DAT_0189f584;
  }
  iVar1 = FUN_00fa0740(0);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}

// 00A28400  FUN_00a28400  size=52  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a28400(float param_1)

{
  _DAT_01b83bb0 = 0.0;
  if ((0.0 < param_1) && (_DAT_01b83bb0 = 1.0, param_1 <= 1.0)) {
    _DAT_01b83bb0 = param_1;
    return;
  }
  return;
}

