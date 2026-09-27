// src/unsorted/unit_005394A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005394A0..00539F60, 3 functions

#include "types.h"

// 005394A0  FUN_005394a0  size=1347  [run]
void __fastcall FUN_005394a0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((1 < *(uint *)(param_1 + 0x1010)) && (*(uint *)(param_1 + 0x1010) < 6)) {
    if ((*(int *)(param_1 + 0x1420) != 0) && (*(float *)(param_1 + 0xa8c) <= 144.0)) {
      FUN_0051d620(0x5000b,0,0,0,0);
      return;
    }
    if (((120.0 < *(float *)(param_1 + 0x920)) && (*(float *)(param_1 + 0xa8c) <= 49.0)) &&
       (*(float *)(param_1 + 0xaa0) < 1.5707964)) {
      FUN_0051d620(0x50008,0,0,0,0);
      FUN_00537090();
      *(undefined4 *)(param_1 + 0x1630) = 1;
    }
    if (*(int *)(param_1 + 0x940) == 0) {
      if ((*(float *)(param_1 + 0xa8c) <= 16.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        if (0.0 <= *(float *)(param_1 + 0x14a8)) {
          FUN_0051d620(0x10021,0,0,0,0);
        }
        else {
          sVar2 = FUN_00dde2d0(0,1);
          if (sVar2 == 0) {
            FUN_0051d620(0x10021,0,0,0,0);
          }
          else {
            FUN_0051d620(0x50008,0,0,0,0);
            FUN_00537090();
            *(undefined4 *)(param_1 + 0x1630) = 1;
            FUN_00537090();
            *(undefined4 *)(param_1 + 0x1630) = 1;
          }
        }
      }
    }
    else if ((*(float *)(param_1 + 0xa8c) <= 4.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
      if (0.0 <= *(float *)(param_1 + 0x14a8)) {
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        sVar2 = FUN_00dde2d0(0,1);
        FUN_0051d620(sVar2 + 0x10023,uVar4,uVar5,uVar6,uVar7);
      }
      else {
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          uVar7 = 0;
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,1);
          FUN_0051d620(sVar2 + 0x10023,uVar4,uVar5,uVar6,uVar7);
        }
        else {
          iVar3 = FUN_00ac4780();
          if (iVar3 != 0) {
            FUN_0051d620(0x5000f,0,0,0,0);
          }
        }
      }
    }
    if (64.0 < *(float *)(param_1 + 0xa8c)) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0xa8c);
    if (NAN(fVar1) || 36.0 < fVar1 == (fVar1 == 36.0)) {
      return;
    }
    if (0.7853982 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    if (0.0 <= *(float *)(param_1 + 0x14a8)) {
      return;
    }
    FUN_0051d620(0x5000b,0,0,0,0);
    return;
  }
  if ((((*(int *)(param_1 + 0x1614) == 0) && (iVar3 = FUN_00a8c760(0xf), iVar3 != 0)) &&
      (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25))) &&
     (*(float *)(param_1 + 0xa8c) <= 144.0)) {
    FUN_0051d620(0x50001,0,0,0,0);
    return;
  }
  if (((180.0 < *(float *)(param_1 + 0x920)) && (*(float *)(param_1 + 0xa8c) <= 49.0)) &&
     (*(float *)(param_1 + 0xaa0) < 1.5707964)) {
    FUN_0051d620(0x50009,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x940) == 0) {
    if ((*(float *)(param_1 + 0xa8c) <= 16.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
      FUN_0051d620(0x5000c,0,0,0,0);
      sVar2 = FUN_00dde2d0(0,2);
      if (sVar2 == 1) {
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        sVar2 = FUN_00dde2d0(0,1);
        FUN_0051d620(sVar2 + 0x1000a,uVar4,uVar5,uVar6,uVar7);
      }
      if (*(int *)(param_1 + 0x1420) != 0) {
        FUN_0051d620(0x50009,0,0,0,0);
      }
    }
    if (16.0 < *(float *)(param_1 + 0xa8c)) {
      return;
    }
    if (1.5707964 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    if (*(float *)(param_1 + 0x920) <= 60.0) {
      return;
    }
    FUN_0051d620(0x50007,0,0,0,0);
    return;
  }
  if (4.0 < *(float *)(param_1 + 0xa8c)) {
    return;
  }
  if (0.7853982 <= *(float *)(param_1 + 0xaa0)) {
    return;
  }
  if (0.0 <= *(float *)(param_1 + 0x14a8)) {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    sVar2 = FUN_00dde2d0(0,1);
    FUN_0051d620(sVar2 + 0x1000a,uVar4,uVar5,uVar6,uVar7);
    return;
  }
  sVar2 = FUN_00dde2d0(0,1);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  if (sVar2 == 0) {
    sVar2 = FUN_00dde2d0(0,1);
    FUN_0051d620(sVar2 + 0x1000a,uVar4,uVar5,uVar6,uVar7);
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) goto LAB_005398be;
    uVar4 = 0x50007;
  }
  else {
    FUN_0051d620(0x50006,0,0,0,0);
    if (((*(int *)(param_1 + 0x1418) < 1) || (sVar2 = FUN_00dde2d0(0,1), sVar2 == 0)) ||
       (iVar3 = FUN_00ac4780(), iVar3 == 0)) goto LAB_005398be;
    uVar4 = 0x5000f;
  }
  FUN_0051d620(uVar4,0,0,0,0);
LAB_005398be:
  if (*(int *)(param_1 + 0x1420) == 0) {
    return;
  }
  FUN_0051d620(0x50009,0,0,0,0);
  return;
}

// 005399F0  FUN_005399f0  size=1355  [run]
void __fastcall FUN_005399f0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float unaff_EBX;
  float unaff_ESI;
  int iVar6;
  float10 fVar7;
  float fStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 auStack_160 [348];
  
  iVar6 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar6 = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(99,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    FUN_0051cd50(1,1,1,1);
    FUN_00a8d280();
    FUN_0051a1b0(param_1[0x514]);
    goto LAB_00539aa5;
  case 1:
LAB_00539aa5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar3 = FUN_00a8c760(8);
    if (iVar3 != 0) {
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0xdc0) = 100;
        *(undefined4 *)(iVar6 + 0xdc4) = 0;
        *(undefined4 *)(iVar6 + 0xdc8) = 0;
        *(undefined4 *)(iVar6 + 0xdd0) = 0;
        *(undefined4 *)(iVar6 + 0xdcc) = 1;
        FUN_0051df70(0,0,1,0);
        FUN_00a8d280();
        iVar3 = FUN_00a81330();
        if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
          uVar4 = FUN_009f8b40();
          FUN_009f8ae0(uVar4);
        }
        local_170 = 0;
        local_16c = 0x3eb811b2;
        local_168 = 0;
        iVar3 = FUN_00a12210(0);
        D3DXVec3TransformNormal(&local_170,&local_170,iVar3 + 0x10);
        fVar2 = *(float *)(iVar3 + 0x40);
        fVar1 = *(float *)(iVar3 + 0x44);
        *(float *)(iVar6 + 0x58) = *(float *)(iVar3 + 0x48) + fStack_174;
        *(float *)(iVar6 + 0x50) = fVar2 + unaff_ESI;
        *(float *)(iVar6 + 0x54) = fVar1 + unaff_EBX;
        *(undefined4 *)(iVar6 + 0x5c) = local_170;
        fVar7 = (float10)FUN_00ddba30(param_1[0x25]);
        *(float *)(iVar6 + 0x94) = (float)fVar7;
        *(undefined4 *)(iVar6 + 0x90) = 0;
        FUN_008e4580(param_1 + 0x14,1);
        FUN_0052de60();
      }
      FUN_0052abb0(0,0x18);
      iVar3 = FUN_00a81330();
      if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
        FUN_004039a0(0,iVar3,0);
        if (iVar3 + 0x8b0 != 0) {
          FUN_00dffb20(iVar3 + 0x8b0);
        }
        FUN_00a8c8b0(*(undefined4 *)(iVar3 + 0x4b0),auStack_160);
      }
    }
    break;
  case 2:
    FUN_00aa4080(100,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar3 = FUN_00a92f90();
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x94) & 1) != 0)) {
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffef;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffdf;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffbf;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 8;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x10;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x40;
      }
    }
    param_1[0x248] = 0x43340000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (fVar2 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = 4;
    }
    if ((iVar6 != 0) && ((*(int *)(iVar6 + 0x618) == 0 || (*(int *)(iVar6 + 0x618) == 0xb)))) {
      param_1[0x187] = 4;
    }
    break;
  case 4:
    FUN_00aa4080(0x65,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar3 = FUN_00a92f90();
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x94) & 1) != 0)) {
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffef;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffdf;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffbf;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 8;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x10;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x40;
      }
    }
    if ((iVar6 != 0) && (iVar3 = FUN_00518da0(), iVar3 == 0)) {
      FUN_0051ace0();
      FUN_0052abb0(1,0x18);
      FUN_0052b240();
      FUN_00537490(0);
    }
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 != 0) {
      FUN_0051d620(0x50004,0,0,0,0);
      param_1[0x52a] = 0x43340000;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_0051d620(0x50004,0,0,0,0);
      param_1[0x52a] = 0x43340000;
    }
  }
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00539F60  FUN_00539f60  size=1319  [run]
void __fastcall FUN_00539f60(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float unaff_EBX;
  float unaff_ESI;
  int iVar6;
  float10 fVar7;
  float fStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 auStack_160 [348];
  
  iVar6 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar6 = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x71,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    FUN_0051cd50(1,1,1,1);
    FUN_00a8d280();
    FUN_0051a1b0(param_1[0x514]);
    goto LAB_0053a015;
  case 1:
LAB_0053a015:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar3 = FUN_00a8c760(8);
    if (iVar3 != 0) {
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0xdc0) = 0x72;
        *(undefined4 *)(iVar6 + 0xdc4) = 0;
        *(undefined4 *)(iVar6 + 0xdc8) = 0;
        *(undefined4 *)(iVar6 + 0xdcc) = 0;
        *(undefined4 *)(iVar6 + 0xdd0) = 1;
        FUN_0051df70(0,0,0,1);
        FUN_00a8d280();
        iVar3 = FUN_00a81330();
        if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
          uVar4 = FUN_009f8b40();
          FUN_009f8ae0(uVar4);
        }
        local_170 = 0;
        local_16c = 0x3eb811b2;
        local_168 = 0;
        iVar3 = FUN_00a12210(0);
        D3DXVec3TransformNormal(&local_170,&local_170,iVar3 + 0x10);
        fVar2 = *(float *)(iVar3 + 0x40);
        fVar1 = *(float *)(iVar3 + 0x44);
        *(float *)(iVar6 + 0x58) = *(float *)(iVar3 + 0x48) + fStack_174;
        *(float *)(iVar6 + 0x50) = fVar2 + unaff_ESI;
        *(float *)(iVar6 + 0x54) = fVar1 + unaff_EBX;
        *(undefined4 *)(iVar6 + 0x5c) = local_170;
        fVar7 = (float10)FUN_00ddba30(param_1[0x25]);
        *(float *)(iVar6 + 0x94) = (float)fVar7;
        *(undefined4 *)(iVar6 + 0x90) = 0;
        FUN_008e4580(param_1 + 0x14,1);
        FUN_0052dec0();
      }
      FUN_0052ac70(0,0x18);
      iVar3 = FUN_00a81330();
      if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
        FUN_004039a0(0,iVar3,0);
        if (iVar3 + 0x8b0 != 0) {
          FUN_00dffb20(iVar3 + 0x8b0);
        }
        FUN_00a8c8b0(*(undefined4 *)(iVar3 + 0x4b0),auStack_160);
      }
    }
    break;
  case 2:
    FUN_00aa4080(0x72,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar3 = FUN_00a92f90();
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x94) & 1) != 0)) {
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffef;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffdf;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffbf;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 8;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x10;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x20;
      }
    }
    param_1[0x248] = 0x43340000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (fVar2 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = 4;
    }
    if ((iVar6 != 0) && ((*(int *)(iVar6 + 0x618) == 0 || (*(int *)(iVar6 + 0x618) == 0xb)))) {
      param_1[0x187] = 4;
    }
    break;
  case 4:
    FUN_00aa4080(0x73,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar3 = FUN_00a92f90();
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x94) & 1) != 0)) {
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffef;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffdf;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffbf;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 8;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x10;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x20;
      }
    }
    if ((iVar6 != 0) && (iVar3 = FUN_00518da0(), iVar3 == 0)) {
      FUN_0051ace0();
      FUN_0052ac70(1,0x18);
      FUN_0052b360();
      FUN_005374c0(0);
    }
    FUN_00537090();
    param_1[0x58c] = 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x52a] = 0x43340000;
    }
  }
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

