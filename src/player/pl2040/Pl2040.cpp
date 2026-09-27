// src/player/pl2040/Pl2040.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005F4400..00AB6570, 60 functions

#include "mgrr.h"
#include "Pl2040.h"
#include "hkpAllCdPointCollector.h"

// 005F4400  Pl2040::thunk_vf54  size=5  [class]
void __fastcall Pl2040::thunk_vf54(int *param_1)

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

// 005F4410  FUN_005f4410  size=59  [between]
void __thiscall
FUN_005f4410(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if ((iVar1 != param_2) || (*(char *)(param_1 + 0xdb5) != '\0')) {
    *(undefined1 *)(param_1 + 0xdbe) = 0;
    FUN_00a8caf0(param_2,param_3,param_4,param_5);
  }
  return;
}

// 005F4530  FUN_005f4530  size=51  [between]
bool __fastcall FUN_005f4530(int param_1)

{
  if (*(int *)(param_1 + 0xa20) != 0) {
    return (*(uint *)(param_1 + 0xf34) & *(uint *)(*(int *)(param_1 + 0xa20) + 0xe38)) != 0;
  }
  return (*(uint *)(param_1 + 0xf34) & 0x20) != 0;
}

// 005F4570  FUN_005f4570  size=51  [between]
bool __fastcall FUN_005f4570(int param_1)

{
  if (*(int *)(param_1 + 0xa20) != 0) {
    return (*(uint *)(param_1 + 0xf34) & *(uint *)(*(int *)(param_1 + 0xa20) + 0xe50)) != 0;
  }
  return (*(uint *)(param_1 + 0xf34) & 0x800) != 0;
}

// 005F45C0  FUN_005f45c0  size=34  [between]
undefined4 __fastcall FUN_005f45c0(int param_1)

{
  if ((*(int *)(param_1 + 0x618) != 3) &&
     ((*(int *)(param_1 + 0x618) != 0x16 || (1 < *(int *)(param_1 + 0x61c))))) {
    return 0;
  }
  return 1;
}

// 005F4600  FUN_005f4600  size=27  [between]
undefined4 __fastcall FUN_005f4600(int param_1)

{
  if ((*(int *)(param_1 + 0x618) == 8) && (*(char *)(param_1 + 0xdb2) != '\0')) {
    return 1;
  }
  return 0;
}

// 005F4670  FUN_005f4670  size=67  [between]
undefined4 __fastcall FUN_005f4670(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xa20) == 0) {
    uVar1 = 0x80;
  }
  else {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xa20) + 0xe24);
  }
  if (((((*(uint *)(param_1 + 0xf38) & uVar1) == 0) || (*(char *)(param_1 + 0xdc3) == '\0')) ||
      (*(char *)(param_1 + 0xdb3) != '\0')) && (*(int *)(param_1 + 0x618) != 0x12)) {
    return 0;
  }
  return 1;
}

// 005F46C0  FUN_005f46c0  size=58  [between]
undefined4 __fastcall FUN_005f46c0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x618) == 0x14) {
    if (*(int *)(param_1 + 0xa20) == 0) {
      uVar1 = 0x800;
    }
    else {
      uVar1 = *(uint *)(*(int *)(param_1 + 0xa20) + 0xe50);
    }
    if (((*(uint *)(param_1 + 0xf34) & uVar1) != 0) && (*(char *)(param_1 + 0xdb1) != '\0')) {
      return 1;
    }
  }
  return 0;
}

// 005F4700  FUN_005f4700  size=33  [between]
undefined4 __fastcall FUN_005f4700(int param_1)

{
  if ((*(int *)(param_1 + 0x618) == 0x16) &&
     ((*(int *)(param_1 + 0x61c) == 0 || (*(int *)(param_1 + 0x61c) == 1)))) {
    return 1;
  }
  return 0;
}

// 005F4730  FUN_005f4730  size=25  [between]
undefined4 __fastcall FUN_005f4730(int param_1)

{
  if ((*(int *)(param_1 + 0x618) != 0x11) && (*(int *)(param_1 + 0x618) != 0x12)) {
    return 0;
  }
  return 1;
}

// 005F4750  FUN_005f4750  size=13  [between]
bool __fastcall FUN_005f4750(int param_1)

{
  return *(int *)(param_1 + 0x618) == 0xe;
}

// 005F47B0  Pl2040::vf31C  size=610  [class]
void __fastcall Pl2040::vf31C(int param_1)

{
  int iVar1;
  float unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_14;
  
  fVar2 = (float10)FUN_00a92ff0();
  iVar1 = *(int *)(param_1 + 0x764);
  fVar3 = (float10)0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 1)) {
    *(undefined4 *)(iVar1 + 0x104) = 1;
    *(float *)(*(int *)(iVar1 + 0xd0) + 4) = (float)fVar3;
  }
  if (*(int *)(param_1 + 0x884) == 0) {
    if ((float10)*(float *)(param_1 + 0x894) <= fVar3) {
      fVar3 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x894) =
           (float)(((float10)*(float *)(param_1 + 0x894) -
                   (float10)*(float *)(param_1 + 0x8a8) * (float10)(float)fVar2 * (float10)1.1) *
                  fVar3);
    }
    else {
      fVar2 = (float10)*(float *)(param_1 + 0x894) -
              (float10)*(float *)(param_1 + 0x8a8) * fVar2 * (float10)0.9;
      *(float *)(param_1 + 0x894) = (float)fVar2;
      *(float *)(param_1 + 0x974) = (float)fVar3;
      if (fVar2 < fVar3) {
        *(float *)(param_1 + 0x894) = (float)fVar3;
      }
    }
    if (*(int *)(param_1 + 0x764) != 0) {
      if (((((*(int *)(param_1 + 0x1124) != 2) && (*(int *)(param_1 + 0x4a0) != 2)) ||
           (iVar1 = FUN_00a8cab0(), iVar1 != 8)) ||
          ((iVar1 = FUN_00a8cac0(), 3 < iVar1 ||
           (fVar3 = (float10)FUN_00a958c0(0), (float10)600.0 <= fVar3)))) &&
         ((*(float *)(*(int *)(*(int *)(param_1 + 0x764) + 0xd0) + 4) < 0.0 &&
          (iVar1 = FUN_008e2740(), iVar1 != 0)))) {
        *(undefined4 *)(param_1 + 0x8a0) = 1;
        *(undefined4 *)(param_1 + 0x894) = 0;
      }
      fStack_30 = *(float *)(param_1 + 0x890);
      fStack_2c = *(float *)(param_1 + 0x894);
      fStack_28 = *(float *)(param_1 + 0x898);
      fStack_24 = *(float *)(param_1 + 0x89c);
      D3DXVec3TransformNormal(&fStack_30,&fStack_30,param_1 + 0xb0);
      fStack_2c = *(float *)(param_1 + 0x890) * unaff_ESI;
      fStack_28 = *(float *)(param_1 + 0x894) * unaff_ESI;
      fStack_24 = *(float *)(param_1 + 0x898) * unaff_ESI;
      fStack_20 = unaff_ESI * *(float *)(param_1 + 0x89c);
      FUN_008e0c00(&fStack_2c);
      iVar1 = FUN_008e2740();
      if (iVar1 != 0) {
        *(float *)(param_1 + 0x890) = *(float *)(param_1 + 0x890) * 0.7;
        *(float *)(param_1 + 0x898) = *(float *)(param_1 + 0x898) * 0.7;
        return;
      }
    }
  }
  else {
    *(float *)(param_1 + 0x890) = (float)fVar3;
    *(float *)(param_1 + 0x894) = (float)fVar3;
    *(float *)(param_1 + 0x898) = (float)fVar3;
    *(undefined4 *)(param_1 + 0x89c) = uStack_14;
    if (*(int *)(param_1 + 0x764) != 0) {
      fStack_30 = (float)((float10)*(float *)(param_1 + 0x890) * fVar2);
      fStack_2c = (float)((float10)*(float *)(param_1 + 0x894) * fVar2);
      fStack_28 = (float)((float10)*(float *)(param_1 + 0x898) * fVar2);
      fStack_24 = (float)(fVar2 * (float10)*(float *)(param_1 + 0x89c));
      FUN_008e0c00(&fStack_30);
      return;
    }
  }
  return;
}

// 005F4A20  FUN_005f4a20  size=471  [between]
void __thiscall FUN_005f4a20(int param_1,undefined4 *param_2)

{
  int iVar1;
  float unaff_ESI;
  float unaff_EDI;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  if (*(int *)(param_1 + 0xf30) != 0) {
    param_2[0xe] = 0;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[1] = 0;
    param_2[0xf] = 0x3f800000;
    param_2[10] = 0x3f800000;
    param_2[5] = 0x3f800000;
    *param_2 = 0x3f800000;
    iVar1 = *(int *)(param_1 + 0xf30);
    local_70 = *(undefined4 *)(iVar1 + 0x1c0);
    local_6c = *(undefined4 *)(iVar1 + 0x1c4);
    local_68 = *(undefined4 *)(iVar1 + 0x1c8);
    local_64 = *(undefined4 *)(iVar1 + 0x1cc);
    local_60 = *(undefined4 *)(iVar1 + 0x1b0);
    local_5c = *(undefined4 *)(iVar1 + 0x1b4);
    local_58 = *(undefined4 *)(iVar1 + 0x1b8);
    local_54 = *(undefined4 *)(iVar1 + 0x1bc);
    local_90 = *(undefined4 *)(iVar1 + 0x1d0);
    local_8c = *(undefined4 *)(iVar1 + 0x1d4);
    local_88 = *(undefined4 *)(iVar1 + 0x1d8);
    local_84 = *(undefined4 *)(iVar1 + 0x1dc);
    FUN_00db6410(param_2,&local_60,&local_70,&local_90);
    local_90 = 0;
    local_8c = 0x3f800000;
    puVar2 = &local_90;
    local_88 = 0;
    local_84 = local_54;
    puVar3 = param_2;
    D3DXVec3TransformNormal(puVar2);
    D3DXVec3TransformNormal(&stack0xffffff64,&stack0xffffff64,param_1 + 0xf0);
    if (0.4 < unaff_EDI * 0.0 + (float)puVar2 * 0.0 + (float)puVar3) {
      D3DXMatrixRotationX(&local_68,0x3fc90fdb);
      D3DXMatrixMultiply(param_2,&local_70,param_2);
      return;
    }
    uStack_98 = 0;
    uStack_94 = 0;
    local_90 = 0x3f800000;
    D3DXVec3TransformNormal(&uStack_98,&uStack_98,param_2);
    if (0.7 < (float)puVar3 * 0.0 + unaff_EDI + unaff_ESI * 0.0) {
      D3DXMatrixRotationX(auStack_74,0x40490fdb);
      D3DXMatrixMultiply(param_2,auStack_7c,param_2);
    }
  }
  return;
}

// 005F4C00  FUN_005f4c00  size=90  [between]
unkbyte10 __fastcall FUN_005f4c00(int param_1)

{
  float fVar1;
  float unaff_EDI;
  unkbyte10 Var2;
  float fStack_38;
  float local_30;
  undefined1 auStack_2c [40];
  
  fVar1 = (float)(*(int *)(param_1 + 0xf30) + 0x1c0);
  D3DXVec3TransformNormal(&local_30,fVar1,param_1 + 0xf0);
  D3DXVec3TransformNormal(auStack_2c,*(int *)(param_1 + 0xf30) + 0x1b0,param_1 + 0xf0);
  Var2 = fpatan((float10)fVar1 - (float10)fStack_38,(float10)unaff_EDI - (float10)local_30);
  return Var2;
}

// 005F4CD0  FUN_005f4cd0  size=120  [between]
void __fastcall FUN_005f4cd0(int param_1)

{
  *(undefined4 *)(param_1 + 0x12c4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x12dc) = 0;
  FUN_00eaa6e0(0x41200000,0);
  FUN_00e5e050("core_se_btl_slow_out",0);
  FUN_00e03a70(0,0x3f800000);
  FUN_00e03a70(1,0x3f800000);
  FUN_00e03a70(2,0x3f800000);
  return;
}

// 005F4D90  Pl2040::vf320  size=383  [class]
undefined4 __thiscall Pl2040::vf320(int param_1,undefined4 param_2)

{
  float *pfVar1;
  int iVar2;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_40 = *(float *)(param_1 + 0x890);
  iVar2 = *(int *)(param_1 + 0x764);
  local_3c = *(float *)(param_1 + 0x894);
  local_38 = *(float *)(param_1 + 0x898);
  local_34 = *(float *)(param_1 + 0x89c);
  if (iVar2 != 0) {
    pfVar1 = *(float **)(iVar2 + 0xd0);
    local_40 = *pfVar1 + local_40;
    local_3c = pfVar1[1] + local_3c;
    local_38 = pfVar1[2] + local_38;
    local_34 = pfVar1[3] + local_34;
  }
  *(undefined4 *)(param_1 + 0x8a0) = 0;
  if (((local_3c <= 0.0) && (iVar2 != 0)) &&
     ((iVar2 = FUN_008e2740(), iVar2 != 0 ||
      (iVar2 = hkpCdPointCollector::hkpCdPointCollector_11(&local_40,param_2), iVar2 != 0)))) {
    FUN_008e2760();
    *(undefined4 *)(param_1 + 0x8a0) = 1;
    *(undefined4 *)(param_1 + 0x890) = 0;
    *(undefined4 *)(param_1 + 0x894) = 0xbc23d70a;
    *(undefined4 *)(param_1 + 0x898) = 0;
    *(undefined4 *)(param_1 + 0x89c) = local_14;
    local_20 = 0;
    local_1c = 0xbf800000;
    local_18 = 0;
    local_30 = *(undefined4 *)(param_1 + 0x40);
    local_2c = *(undefined4 *)(param_1 + 0x44);
    local_28 = *(undefined4 *)(param_1 + 0x48);
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    iVar2 = hkpCdPointCollector::hkpCdPointCollector_14(&local_20,&local_30,1,0,0x3c23d70a);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x50) = local_30;
      *(undefined4 *)(param_1 + 0x54) = local_2c;
      *(undefined4 *)(param_1 + 0x58) = local_28;
      *(undefined4 *)(param_1 + 0x5c) = local_24;
    }
    return 1;
  }
  return 0;
}

// 005F4F10  Pl2040::vf2E8  size=46  [class]
void __fastcall Pl2040::vf2E8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if ((iVar1 != 0xb) || (*(char *)(param_1 + 0xdb5) != '\0')) {
    *(undefined1 *)(param_1 + 0xdbe) = 0;
    FUN_00a8caf0(0xb,0,0,0);
  }
  return;
}

// 005F4F60  FUN_005f4f60  size=91  [callgraph]
void __thiscall FUN_005f4f60(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0x1394) = 1;
  *(undefined4 *)(param_1 + 0x13a0) = *param_2;
  *(undefined4 *)(param_1 + 0x13a4) = param_2[1];
  *(undefined4 *)(param_1 + 0x13a8) = param_2[2];
  *(undefined4 *)(param_1 + 0x13ac) = param_2[3];
  *(undefined4 *)(param_1 + 0x13b0) = *param_3;
  *(undefined4 *)(param_1 + 0x13b4) = param_3[1];
  *(undefined4 *)(param_1 + 0x13b8) = param_3[2];
  *(undefined4 *)(param_1 + 0x13bc) = param_3[3];
  return;
}

// 005F4FC0  FUN_005f4fc0  size=145  [callgraph]
void __fastcall FUN_005f4fc0(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x1394) != 0) {
    fVar1 = (*(float *)(param_1 + 0x13b4) *
             (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x13a4)) +
             *(float *)(param_1 + 0x13b0) *
             (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x13a0)) +
            *(float *)(param_1 + 0x13b8) *
            (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x13a8))) /
            (*(float *)(param_1 + 0x13b4) * *(float *)(param_1 + 0x13b4) +
             *(float *)(param_1 + 0x13b0) * *(float *)(param_1 + 0x13b0) +
            *(float *)(param_1 + 0x13b8) * *(float *)(param_1 + 0x13b8));
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x13b0) * fVar1 + *(float *)(param_1 + 0x13a0)
    ;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x13a8) + *(float *)(param_1 + 0x13b8) * fVar1
    ;
  }
  return;
}

// 005F5190  FUN_005f5190  size=128  [callgraph]
void __fastcall FUN_005f5190(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if ((((*(int *)(param_1 + 0x1124) == 1) || (*(int *)(param_1 + 0x4a0) == 1)) ||
        (*(int *)(param_1 + 0x1124) == 2)) || (*(int *)(param_1 + 0x4a0) == 2)) {
      FUN_00eaa6e0(0x41200000,0);
      FUN_00eaa6e0(0x41200000,0);
      FUN_00e5e0c0("pl2040_se_dmg_spark_stop",param_1,0xffffffff,0);
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 005F5210  Pl2040::vf14C  size=18  [class]
undefined4 Pl2040::vf14C(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00a7c8a0();
  }
  return 0;
}

// 005F5230  Pl2040::vf160  size=39  [class]
void Pl2040::vf160(int param_1)

{
  undefined4 uVar1;
  
  FUN_00a7c950();
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 005F5260  Pl2040::vf150  size=157  [class]
void __thiscall Pl2040::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    FUN_005f4cd0();
    *(undefined4 *)(param_1 + 0x90) = 0;
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    FUN_00a7c8a0();
    FUN_00a93090(2);
    if (param_2 == 0x25) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      DAT_01bea060 = DAT_01bea060 | 0x2000000;
      FUN_005f4cd0();
      iVar2 = FUN_00a8cab0();
      if ((iVar2 != 0xe) || (*(char *)(param_1 + 0xdb5) != '\0')) {
        *(undefined1 *)(param_1 + 0xdbe) = 0;
        FUN_00a8caf0(0xe,0,0,0);
      }
    }
  }
  return;
}

// 005F5300  Pl2040::vf158  size=5  [class]
undefined4 Pl2040::vf158(void)

{
  return 0;
}

// 005F58C0  Pl2040::vf50  size=504  [class]
void __fastcall Pl2040::vf50(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_00a93170();
  FUN_005f4fc0();
  BehaviorAppBase::vf50();
  (**(code **)(*param_1 + 0x128))();
  if ((param_1[0x287] != 0) && ((param_1[0x449] == 1 || (param_1[0x128] == 1)))) {
    uVar1 = (**(code **)(*param_1 + 0x68))();
    FUN_00a7ce90(uVar1);
    uVar1 = (**(code **)(*param_1 + 0x84))();
    FUN_00a7cf00(uVar1);
    FUN_00a7c8a0();
    FUN_008e3c10();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar5);
      if (iVar3 != 0) {
        (**(code **)(*piVar2 + 0x318))();
      }
    }
  }
  if (((param_1[0x449] == 2) || (param_1[0x128] == 2)) && (param_1[0x287] != 0)) {
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
    uStack_20 = *puVar4;
    uStack_1c = puVar4[1];
    uStack_18 = puVar4[2];
    uStack_14 = puVar4[3];
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
    uStack_30 = *puVar4;
    uStack_2c = puVar4[1];
    uStack_28 = puVar4[2];
    uStack_24 = puVar4[3];
    FUN_00a7c8a0();
    FUN_008e3c10();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar5);
      if (iVar3 != 0) {
        (**(code **)(*piVar2 + 0x7c))(&uStack_20,&uStack_30);
        (**(code **)(*piVar2 + 0x318))();
      }
    }
  }
  if (param_1[0x21e] != 0) {
    Behavior::updateGroundSupportForParts
              (param_1 + 0x4b8,param_1 + 0x16c,param_1 + 0x165,param_1 + 0x17c,param_1[0x21f]);
    Behavior::updateGroundSupportForParts
              (param_1 + 0x4b9,param_1 + 0x170,param_1 + 0x166,param_1 + 0x17d,param_1[0x220]);
  }
  return;
}

// 005F5AC0  FUN_005f5ac0  size=110  [between]
void FUN_005f5ac0(undefined4 param_1,undefined4 param_2)

{
  char local_80 [128];
  
  _sprintf_s(local_80,0x80,"%s_%s_0_seq.bxm",param_1,param_2);
  if (DAT_018b9174 == 0x230) {
    FUN_00de4550(local_80,0);
    return;
  }
  FUN_00de4550(local_80,0);
  return;
}

// 005F5B30  FUN_005f5b30  size=110  [between]
void FUN_005f5b30(undefined4 param_1,undefined4 param_2)

{
  char local_80 [128];
  
  _sprintf_s(local_80,0x80,"%s_%s.mot",param_1,param_2);
  if (DAT_018b9174 == 0x230) {
    FUN_00de4550(local_80,0);
    return;
  }
  FUN_00de4550(local_80,0);
  return;
}

// 005F5BA0  FUN_005f5ba0  size=65  [between]
void FUN_005f5ba0(undefined4 param_1)

{
  char local_80 [128];
  
  _sprintf_s(local_80,0x80,"Em0040_%s_0_seq.bxm",param_1);
  FUN_00de4550(local_80,0);
  return;
}

// 005F5BF0  FUN_005f5bf0  size=65  [between]
void FUN_005f5bf0(undefined4 param_1)

{
  char local_80 [128];
  
  _sprintf_s(local_80,0x80,"Em0040_%s.mot",param_1);
  FUN_00de4550(local_80,0);
  return;
}

// 005F5C40  Pl2040::getAttackInfo  size=208  [class]
int __fastcall Pl2040::getAttackInfo(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData_3();
    if (iVar2 != 0) {
      puVar1 = *(undefined4 **)(iVar2 + 8);
      puVar1[5] = *(undefined4 *)(param_1 + 0x4f0);
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      puVar1[1] = 0;
      puVar1[3] = 0;
      *(undefined1 *)(puVar1 + 4) = 1;
      puVar1[2] = 0;
      uVar3 = FUN_00a8d280();
      puVar1[0x22] = uVar3;
      iVar4 = FUN_00a8cab0();
      if (iVar4 == 0x16) {
        *(undefined2 *)(puVar1 + 0x21) = 0x1803;
        *puVar1 = 0x145;
        puVar1[0x23] = puVar1[0x23] | 0x20000000;
        return iVar2;
      }
      *puVar1 = 0x144;
      *(undefined2 *)(puVar1 + 0x21) = 0x1802;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      return iVar2;
    }
  }
  FUN_00dd5650(&DAT_01645674);
  return 0;
}

// 005F5D10  FUN_005f5d10  size=111  [between]
undefined4 __fastcall FUN_005f5d10(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xa20) == 0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xa20) + 0xe20);
  }
  if (((((((*(uint *)(param_1 + 0xf38) & uVar2) != 0) && (*(int *)(param_1 + 0x1394) == 0)) &&
        (*(int *)(param_1 + 0x618) != 0x16)) &&
       ((*(int *)(param_1 + 0x618) != 0x1a && (*(int *)(param_1 + 0x4e4) == 0)))) &&
      ((*(char *)(param_1 + 0xdb8) == '\0' &&
       ((*(char *)(param_1 + 0xdb0) == '\0' && (*(char *)(param_1 + 0xdb3) == '\0')))))) &&
     ((*(char *)(param_1 + 0xdad) == '\0' && (*(char *)(param_1 + 0xdae) == '\0')))) {
    uVar1 = 1;
  }
  return uVar1;
}

// 005F5D80  FUN_005f5d80  size=163  [between]
void __thiscall FUN_005f5d80(int param_1,float param_2,int param_3)

{
  float fVar1;
  undefined1 auStack_68 [8];
  float local_60;
  undefined4 local_5c;
  float local_58 [2];
  undefined1 local_50 [76];
  
  local_60 = 0.0;
  local_5c = 0;
  local_58[0] = 0.0;
  fVar1 = 0.93;
  if ((90000.0 < *(float *)(param_1 + 0x12b8)) || (param_3 != 0)) {
    D3DXMatrixRotationY(local_50,*(undefined4 *)(param_1 + 0x12b4));
    local_60 = param_2;
    D3DXVec3TransformNormal(auStack_68,auStack_68,local_58);
    fVar1 = 0.9;
  }
  *(float *)(param_1 + 0x890) = fVar1 * *(float *)(param_1 + 0x890) + local_60 * (1.0 - fVar1);
  *(float *)(param_1 + 0x898) = fVar1 * *(float *)(param_1 + 0x898) + (1.0 - fVar1) * local_58[0];
  return;
}

// 005F5E30  FUN_005f5e30  size=1135  [between]
void __fastcall FUN_005f5e30(int *param_1)

{
  uint *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  float10 fVar8;
  
  param_1[0x3d1] = 0;
  param_1[0x3d2] = 0;
  _Dst = (uint *)(param_1 + 0x3cd);
  puVar6 = (uint *)&DAT_01b7b910;
  puVar7 = _Dst;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if (((((DAT_01bea070 & 0x200000) == 0) && ((DAT_01bea060 & 0x48000000) == 0)) &&
      (param_1[0x139] == 0)) || (_memset(_Dst,0,0x30), param_1[0x139] == 0)) {
    if ((DAT_01bea070 & 0x100000) != 0) {
      *_Dst = *_Dst & 0xffffefff;
      param_1[0x3d1] = 0;
      param_1[0x3ce] = param_1[0x3ce] & 0xffffefff;
      param_1[0x3d2] = 0;
      param_1[0x3d0] = param_1[0x3d0] & 0xffffefff;
    }
    if ((DAT_01bea070 & 0x20000) != 0) {
      param_1[0x3d3] = 0;
      param_1[0x3d4] = 0;
    }
    if ((DAT_01bea070 & 0x80000) != 0) {
      iVar4 = param_1[0x288];
      if (iVar4 == 0) {
        uVar3 = 0x40;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe20);
      }
      *_Dst = *_Dst & ~uVar3;
      if (iVar4 == 0) {
        uVar3 = 0x40;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe20);
      }
      param_1[0x3ce] = param_1[0x3ce] & ~uVar3;
      if (iVar4 == 0) {
        uVar3 = 0x40;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe20);
      }
      param_1[0x3d0] = param_1[0x3d0] & ~uVar3;
    }
    if ((((DAT_01bea094 & 0x40000000) != 0) && (iVar4 = FUN_00a4a350(DAT_018b9174), iVar4 == 1)) &&
       ((param_1[0x449] == 2 || (param_1[0x128] == 2)))) {
      *_Dst = *_Dst & 0xffffefff;
      param_1[0x3ce] = param_1[0x3ce] & 0xffffefff;
      param_1[0x3d1] = 0;
      param_1[0x3d0] = param_1[0x3d0] & 0xffffefff;
      param_1[0x3d2] = 0;
    }
    if ((((DAT_01bea090 & 0x400) != 0) && (iVar4 = FUN_00a4a350(DAT_018b9174), iVar4 == 1)) &&
       ((param_1[0x449] == 2 || (param_1[0x128] == 2)))) {
      iVar4 = param_1[0x288];
      if (iVar4 == 0) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe18);
      }
      *_Dst = *_Dst & ~uVar3;
      if (iVar4 == 0) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe18);
      }
      param_1[0x3ce] = param_1[0x3ce] & ~uVar3;
      if (iVar4 == 0) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe18);
      }
      param_1[0x3d0] = param_1[0x3d0] & ~uVar3;
    }
    if ((((DAT_01bea090 & 0x4000) != 0) && (iVar4 = FUN_00a4a350(DAT_018b9174), iVar4 == 1)) &&
       ((param_1[0x449] == 2 || (param_1[0x128] == 2)))) {
      iVar4 = param_1[0x288];
      if (iVar4 == 0) {
        uVar3 = 0x4000;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe48);
      }
      *_Dst = *_Dst & ~uVar3;
      if (iVar4 == 0) {
        uVar3 = 0x4000;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe48);
      }
      param_1[0x3ce] = param_1[0x3ce] & ~uVar3;
      if (iVar4 == 0) {
        uVar3 = 0x4000;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe48);
      }
      param_1[0x3d0] = param_1[0x3d0] & ~uVar3;
    }
    if ((((DAT_01bea090 & 0x8000) != 0) && (iVar4 = FUN_00a4a350(DAT_018b9174), iVar4 == 1)) &&
       ((param_1[0x449] == 2 || (param_1[0x128] == 2)))) {
      iVar4 = param_1[0x288];
      if (iVar4 == 0) {
        uVar3 = 0x800;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe50);
      }
      *_Dst = *_Dst & ~uVar3;
      if (iVar4 == 0) {
        uVar3 = 0x800;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe50);
      }
      param_1[0x3ce] = param_1[0x3ce] & ~uVar3;
      if (iVar4 == 0) {
        uVar3 = 0x800;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe50);
      }
      param_1[0x3d0] = param_1[0x3d0] & ~uVar3;
    }
    if ((((DAT_01bea090 & 0x800000) != 0) && (iVar4 = FUN_00a4a350(DAT_018b9174), iVar4 == 1)) &&
       ((param_1[0x449] == 2 || (param_1[0x128] == 2)))) {
      iVar4 = param_1[0x288];
      if (iVar4 == 0) {
        uVar3 = 0x400;
        uVar5 = 0x80;
        uVar1 = 0x40;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe3c);
        uVar5 = *(uint *)(iVar4 + 0xe24);
        uVar1 = *(uint *)(iVar4 + 0xe20);
      }
      *_Dst = *_Dst & ~(uVar1 | uVar5 | uVar3);
      if (iVar4 == 0) {
        uVar3 = 0x400;
        uVar5 = 0x80;
        uVar1 = 0x40;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe3c);
        uVar5 = *(uint *)(iVar4 + 0xe24);
        uVar1 = *(uint *)(iVar4 + 0xe20);
      }
      param_1[0x3ce] = param_1[0x3ce] & ~(uVar1 | uVar5 | uVar3);
      if (iVar4 == 0) {
        uVar3 = 0x400;
        uVar5 = 0x80;
        uVar1 = 0x40;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xe3c);
        uVar5 = *(uint *)(iVar4 + 0xe24);
        uVar1 = *(uint *)(iVar4 + 0xe20);
      }
      param_1[0x3d0] = param_1[0x3d0] & ~(uVar1 | uVar5 | uVar3);
    }
    iVar2 = (**(code **)(*param_1 + 0x84))();
    iVar4 = param_1[0x288];
    param_1[0x4ad] = *(int *)(iVar2 + 4);
    param_1[0x4ae] =
         (int)((float)param_1[0x3d2] * (float)param_1[0x3d2] +
              (float)param_1[0x3d1] * (float)param_1[0x3d1]);
    if (iVar4 == 0) {
      uVar3 = 0x4000;
    }
    else {
      uVar3 = *(uint *)(iVar4 + 0xe48);
    }
    *(bool *)(param_1 + 0x36b) = (uVar3 & *_Dst) != 0;
    if (iVar4 == 0) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = *(uint *)(iVar4 + 0xe18);
    }
    *(bool *)((int)param_1 + 0xdb2) = (uVar3 & *_Dst) != 0;
    if (param_1[0x3cc] != 0) {
      FUN_005f4a20(param_1 + 0x3dc);
      fVar8 = (float10)FUN_005f4c00();
      param_1[0x4ac] = (int)(float)fVar8;
      return;
    }
  }
  return;
}

// 005F62A0  FUN_005f62a0  size=200  [between]
void __fastcall FUN_005f62a0(int param_1)

{
  float fVar1;
  float10 fVar2;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  fVar1 = *(float *)(*(int *)(param_1 + 0xa18) + 0x14c);
  if (fVar1 * fVar1 <
      *(float *)(param_1 + 0xf48) * *(float *)(param_1 + 0xf48) +
      *(float *)(param_1 + 0xf44) * *(float *)(param_1 + 0xf44)) {
    if (*(int *)(param_1 + 0xf30) != 0) {
      FUN_00da0640(param_1 + 0xf70);
    }
    local_20 = *(undefined4 *)(param_1 + 0xf44);
    local_1c = 0;
    local_18 = *(undefined4 *)(param_1 + 0xf48);
    D3DXVec3TransformNormal(local_30,&local_20,param_1 + 0xf70);
    fStack_3c = *(float *)(param_1 + 0x40) + fStack_3c;
    fStack_38 = *(float *)(param_1 + 0x44) + fStack_38;
    fStack_34 = *(float *)(param_1 + 0x48) + fStack_34;
    local_30[0] = *(float *)(param_1 + 0x4c) + local_30[0];
    fVar2 = (float10)FUN_00a8ec30(&fStack_3c);
    *(float *)(param_1 + 0x8f4) = (float)fVar2;
  }
  return;
}

// 005F6370  FUN_005f6370  size=556  [between]
void __fastcall FUN_005f6370(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  param_1[0x3cc] = 0;
  param_1[0x287] = 0;
  param_1[0x286] = 0;
  param_1[0x288] = 0;
  DAT_01dc0868 = 1;
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  param_1[0x287] = iVar2;
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x4c))(param_1[0x13c]);
  iVar2 = FUN_00932720();
  if (iVar2 == 0x230) {
    piVar1 = (int *)FUN_00a6e640();
    (**(code **)(*piVar1 + 0x48))(4,2);
  }
  FUN_00c3d2a0(param_1[0x13c]);
  param_1[0x3cc] = (int)&DAT_01bea1d0;
  if (param_1[0x287] != 0) {
    iVar2 = FUN_00a7c8a0();
    param_1[0x285] = *(int *)(*(int *)(iVar2 + 0x764) + 0x110);
    FUN_00a7c8a0();
    FUN_008e3c10();
    FUN_00a7c8a0();
    FUN_008e5c50(0x1f);
    FUN_00da8ea0();
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      piVar1 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar1);
    }
    iVar2 = *piVar1;
    uVar3 = (**(code **)(*param_1 + 0x84))();
    uVar3 = (**(code **)(*param_1 + 0x68))(uVar3);
    (**(code **)(iVar2 + 0x7c))(uVar3);
    param_1[0x288] = (int)piVar1;
    piVar1[0x14fa] = 0;
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    param_1[0x286] = piVar1[0x1035];
    (**(code **)(*piVar1 + 0x388))(0);
    FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00b94790(0x3f800000,0x3f800000);
    switchD_0080dbae::default();
    FUN_00b7e310(0);
    FUN_00dc1270(0,0);
    FUN_00da0d70();
    piVar1 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar1 + 0x20))();
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    if ((*(byte *)(iVar2 + 0x4c0) & 1) != 0) {
      FUN_00a81330();
      piVar1 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar1 + 0x20))();
      *(undefined1 *)((int)param_1 + 0xdb7) = 1;
    }
  }
  return;
}

// 005F65A0  FUN_005f65a0  size=443  [between]
void __fastcall FUN_005f65a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x50))();
  FUN_00c496c0(*(undefined4 *)(param_1 + 0x4f0));
  piVar1 = (int *)0x0;
  if (*(int *)(param_1 + 0xa1c) != 0) {
    iVar2 = FUN_00a7c7e0();
    if (iVar2 != 0) {
      DAT_01dc0868 = 0;
      FUN_00a7c8a0();
      FUN_008e5c50(*(undefined4 *)(param_1 + 0xa14));
      FUN_00a7c8a0();
      FUN_008e6d00();
      piVar3 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar3 + 0x1c))();
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 != (int *)0x0) {
        puVar4 = &DAT_01be9db8;
        (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
        iVar2 = FUN_00dd6d80(puVar4);
        piVar1 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
      }
      FUN_00b7e310(1);
      iVar2 = FUN_00932720();
      if (iVar2 == 0x230) {
        FUN_00da8ea0();
        if (*(int *)(param_1 + 0xdc4) != 0) {
          FUN_00a805f0();
        }
        piVar3 = (int *)FUN_00a6e640();
        (**(code **)(*piVar3 + 0x44))(4,2);
        iVar2 = FUN_00c78580(0,&uStack_40);
        if (iVar2 != 0) {
          uStack_14 = 0x3f800000;
          uStack_20 = uStack_40;
          uStack_1c = uStack_3c;
          uStack_18 = uStack_38;
          uStack_30 = 0;
          uStack_28 = 0;
          uStack_24 = 0x3f800000;
          uStack_2c = uStack_34;
          (**(code **)(*piVar1 + 0x7c))(&uStack_20,&uStack_30);
        }
        FUN_00dc1270(0,0);
        FUN_00da0d70();
      }
      if (*(char *)(param_1 + 0xdb7) != '\0') {
        FUN_00a81330();
        piVar1 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar1 + 0x1c))();
      }
    }
    *(undefined4 *)(param_1 + 0xa1c) = 0;
  }
  return;
}

// 005F6760  Pl2040::vf2F8  size=55  [class]
void __fastcall Pl2040::vf2F8(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8cab0();
    if ((iVar1 != 0x1c) || (*(char *)(param_1 + 0xdb5) != '\0')) {
      *(undefined1 *)(param_1 + 0xdbe) = 0;
      FUN_00a8caf0(0x1c,0,0,0);
    }
  }
  return;
}

// 005F67A0  FUN_005f67a0  size=111  [callgraph]
undefined4 FUN_005f67a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char local_80 [128];
  
  if (param_1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      _sprintf_s(local_80,0x80,"%s_0_seq.bxm",param_2);
      FUN_00a7c8a0();
      uVar2 = FUN_00de4550(local_80,0);
      return uVar2;
    }
  }
  return 0;
}

// 005F6810  FUN_005f6810  size=111  [callgraph]
undefined4 FUN_005f6810(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char local_80 [128];
  
  if (param_1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      _sprintf_s(local_80,0x80,"%s.mot",param_2);
      FUN_00a7c8a0();
      uVar2 = FUN_00de4550(local_80,0);
      return uVar2;
    }
  }
  return 0;
}

// 005F6880  FUN_005f6880  size=66  [callgraph]
void __fastcall FUN_005f6880(int *param_1)

{
  param_1[0x23d] = param_1[0x25];
  FUN_005f62a0();
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0,0x3f060a92,0);
  return;
}

// 005FA3D0  Pl2040::vf44  size=389  [class]
void __fastcall Pl2040::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x618) == 5) {
    DAT_01bea070 = DAT_01bea070 & 0xffddffff;
  }
  FUN_00eaa6e0(0,0);
  if (((*(int *)(param_1 + 0x1124) == 2) || (*(int *)(param_1 + 0x4a0) == 2)) &&
     (*(int *)(param_1 + 0x13e4) != 0)) {
    FUN_00a805f0();
  }
  *(undefined4 *)(param_1 + 0x13e4) = 0;
  FUN_00a944d0();
  if (((*(int *)(param_1 + 0x1124) == 1) || (*(int *)(param_1 + 0x4a0) == 1)) ||
     ((*(int *)(param_1 + 0x1124) == 2 || (*(int *)(param_1 + 0x4a0) == 2)))) {
    FUN_005f65a0();
    if (*(int *)(param_1 + 0xdc4) != 0) {
      FUN_00a805f0();
    }
    DAT_01bea094 = DAT_01bea094 & 0xfffdffff;
    FUN_00da9610();
    if ((*(int *)(param_1 + 0x1124) == 2) || (*(int *)(param_1 + 0x4a0) == 2)) {
      DAT_01dc0868 = 0;
    }
  }
  if (*(int *)(param_1 + 0xdc8) != 0) {
    FUN_00a805f0();
  }
  FUN_00a9d8a0();
  FUN_00a8c820();
  RayCastManager::getWork(param_1 + 0x12e0);
  RayCastManager::getWork(param_1 + 0x12e4);
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  FUN_00900ca0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  *(undefined4 *)(param_1 + 0xe90) = 0;
  *(undefined4 *)(param_1 + 0xe94) = 0;
  *(undefined4 *)(param_1 + 0xe98) = 0;
  *(undefined4 *)(param_1 + 0xe9c) = 0x3f800000;
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00dd7270();
  Behavior::vf44();
  return;
}

// 005FA560  FUN_005fa560  size=464  [callgraph]
void __fastcall FUN_005fa560(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  char acStack_114 [128];
  char acStack_94 [144];
  
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    _sprintf_s(acStack_114,0x80,"Em0040_%s.mot",&DAT_016457e4);
    uVar2 = FUN_00de4550(acStack_114,0);
    _sprintf_s(acStack_94,0x80,"Em0040_%s_0_seq.bxm",&DAT_016457e4);
    uVar3 = FUN_00de4550(acStack_94,0);
    FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (0 < iVar1) {
      iVar1 = FUN_00a92f90();
      FUN_00e332b0(&iStack_144,*(undefined4 *)(iVar1 + 0xa0));
      param_1[0x3a4] = iStack_144;
      param_1[0x3a5] = iStack_140;
      param_1[0x3a6] = iStack_13c;
      param_1[0x3a7] = iStack_138;
      if (*(char *)((int)param_1 + 0xdb1) == '\0') {
        param_1[0x3a4] = 0;
        param_1[0x3a5] = 0;
        param_1[0x3a6] = 0;
        param_1[0x3a7] = 0x3f800000;
        iVar1 = FUN_00a8cab0();
        if ((iVar1 == 0) && (*(char *)((int)param_1 + 0xdb5) == '\0')) {
          return;
        }
        *(undefined1 *)((int)param_1 + 0xdbe) = 0;
        FUN_00a8caf0(0,0,0,0);
        return;
      }
    }
  }
  FUN_005f62a0();
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0,0x3f060a92,0);
  return;
}

// 005FA730  FUN_005fa730  size=546  [callgraph]
void __fastcall FUN_005fa730(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  char acStack_114 [128];
  char acStack_94 [144];
  
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    _sprintf_s(acStack_114,0x80,"Em0040_%s.mot",&DAT_016457ec);
    uVar3 = FUN_00de4550(acStack_114,0);
    _sprintf_s(acStack_94,0x80,"Em0040_%s_0_seq.bxm",&DAT_016457ec);
    uVar4 = FUN_00de4550(acStack_94,0);
    if (((*(char *)((int)param_1 + 0xdbb) == '\0') && (param_1[0x18a] != 3)) &&
       (param_1[0x18a] != 1)) {
      uVar1 = 0x3e4ccccd;
    }
    else {
      uVar1 = 0;
    }
    FUN_00a9efb0(uVar3,uVar4,0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined1 *)((int)param_1 + 0xdbb) = 0;
  }
  else {
    iVar2 = FUN_00a8cac0();
    if (0 < iVar2) {
      iVar2 = FUN_00a92f90();
      FUN_00e332b0(&iStack_144,*(undefined4 *)(iVar2 + 0xa0));
      param_1[0x3a4] = iStack_144;
      param_1[0x3a5] = iStack_140;
      param_1[0x3a6] = iStack_13c;
      param_1[0x3a7] = iStack_138;
      if (*(char *)((int)param_1 + 0xdb1) == '\0') {
        param_1[0x3a4] = 0;
        param_1[0x3a5] = 0;
        param_1[0x3a6] = 0;
        param_1[0x3a7] = 0x3f800000;
        iVar2 = FUN_00a8cab0();
        if ((iVar2 != 0) || (*(char *)((int)param_1 + 0xdb5) != '\0')) {
          *(undefined1 *)((int)param_1 + 0xdbe) = 0;
          FUN_00a8caf0(0,0,0,0);
        }
        param_1[0x284] = 0;
        return;
      }
    }
  }
  fVar5 = (float10)FUN_00a958c0(0);
  param_1[0x284] = (int)(float)fVar5;
  FUN_005f62a0();
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0,0x3f060a92,0);
  return;
}

// 005FA960  FUN_005fa960  size=569  [callgraph]
void __fastcall FUN_005fa960(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  char acStack_114 [128];
  char acStack_94 [144];
  
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    _sprintf_s(acStack_114,0x80,"Em0040_%s.mot",&DAT_016457f4);
    uVar3 = FUN_00de4550(acStack_114,0);
    _sprintf_s(acStack_94,0x80,"Em0040_%s_0_seq.bxm",&DAT_016457f4);
    uVar4 = FUN_00de4550(acStack_94,0);
    if (((*(char *)((int)param_1 + 0xdbb) == '\0') && (param_1[0x18a] != 2)) &&
       (param_1[0x18a] != 1)) {
      uVar1 = 0x3e4ccccd;
    }
    else {
      uVar1 = 0;
    }
    FUN_00a9efb0(uVar3,uVar4,0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
    iVar2 = FUN_00a957b0(0);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined1 *)((int)param_1 + 0xdbb) = 0;
    param_1[0x3ac] = (int)(float)iVar2;
  }
  else {
    iVar2 = FUN_00a8cac0();
    if (0 < iVar2) {
      iVar2 = FUN_00a92f90();
      FUN_00e332b0(&iStack_144,*(undefined4 *)(iVar2 + 0xa0));
      param_1[0x3a4] = iStack_144;
      param_1[0x3a5] = iStack_140;
      param_1[0x3a6] = iStack_13c;
      param_1[0x3a7] = iStack_138;
      if (*(char *)((int)param_1 + 0xdb1) == '\0') {
        param_1[0x3a4] = 0;
        param_1[0x3a5] = 0;
        param_1[0x3a6] = 0;
        param_1[0x3a7] = 0x3f800000;
        iVar2 = FUN_00a8cab0();
        if ((iVar2 != 0) || (*(char *)((int)param_1 + 0xdb5) != '\0')) {
          *(undefined1 *)((int)param_1 + 0xdbe) = 0;
          FUN_00a8caf0(0,0,0,0);
        }
        param_1[0x284] = 0;
        return;
      }
    }
  }
  fVar5 = (float10)FUN_00a958c0(0);
  param_1[0x284] = (int)(float)fVar5;
  FUN_005f62a0();
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0,0x3f060a92,0);
  return;
}

// 005FABA0  FUN_005faba0  size=1338  [callgraph]
void __fastcall FUN_005faba0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar5;
  float *pfStack_138;
  float fStack_134;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  char acStack_114 [128];
  char acStack_94 [144];
  
  *(undefined1 *)((int)param_1 + 0xdad) = 1;
  *(undefined1 *)((int)param_1 + 0xdaf) = 1;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  *(undefined1 *)((int)param_1 + 0xdb3) = 0;
  fStack_134 = 8.78601e-39;
  iVar2 = FUN_00a8cac0();
  if (iVar2 < 2) {
    fStack_134 = 8.786084e-39;
    (**(code **)(*param_1 + 0x318))();
  }
  else {
    fStack_134 = 8.786039e-39;
    (**(code **)(*param_1 + 0x314))();
    fStack_134 = 0.016666668;
    pfStack_138 = (float *)0x5fabfd;
    (**(code **)(*param_1 + 800))();
  }
  pfStack_138 = (float *)0x5fac0e;
  pfStack_138 = (float *)FUN_00a8cac0();
  if (pfStack_138 == (float *)0x0) {
    FUN_00e5e0c0("em0040_vo_shout",param_1,0xffffffff);
    _sprintf_s(acStack_114,0x80,"Em0040_%s.mot",&DAT_01645714);
    pfStack_138 = (float *)0x0;
    uVar3 = FUN_00de4550(acStack_114);
    pfStack_138 = (float *)&DAT_01645714;
    _sprintf_s(acStack_94,0x80,"Em0040_%s_0_seq.bxm");
    pfStack_138 = (float *)0x0;
    uVar4 = FUN_00de4550(acStack_94);
    pfStack_138 = (float *)0x3f800000;
    FUN_00a9efb0(uVar3,uVar4,0,0,0x3f800000,0,0xbf800000);
    pfStack_138 = (float *)0x1;
    FUN_00a96070(0,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
  }
  else {
    pfStack_138 = (float *)0x5facdd;
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 1) {
      if (param_1[0x1d9] != 0) {
        pfStack_138 = (float *)0x5facf9;
        iVar2 = FUN_008e2740();
        if (iVar2 != 0) {
          param_1[0x187] = 4;
          return;
        }
      }
      if ((param_1[0x449] == 2) || (param_1[0x128] == 2)) {
        pfStack_138 = (float *)0x0;
        fVar5 = (float10)FUN_00a958c0();
        if ((float10)0.33333334 <= fVar5) {
          pfStack_138 = &fStack_124;
          FUN_00a92f90();
          FUN_0044fd10();
          pfStack_138 = (float *)0x5fad5b;
          iVar2 = (**(code **)(*param_1 + 0x84))();
          pfStack_138 = *(float **)(iVar2 + 4);
          D3DXMatrixRotationY(acStack_114);
          D3DXVec3TransformNormal(&stack0xfffffed4,&stack0xfffffed4,&fStack_11c);
          fVar1 = 1.0 / (float)param_1[0x244];
          pfStack_138 = (float *)((float)pfStack_138 * fVar1);
          fStack_134 = fStack_134 * fVar1;
          param_1[0x227] = (int)(unaff_ESI * fVar1);
          param_1[0x224] = (int)pfStack_138;
          param_1[0x225] = (int)fStack_134;
          param_1[0x226] = (int)(unaff_EDI * fVar1);
          FUN_008e0c00(&pfStack_138);
          param_1[0x187] = param_1[0x187] + 1;
          param_1[0x225] = 0x3f333333;
          uVar3 = FUN_005f5bf0(&DAT_01645804);
          uVar4 = FUN_005f5ba0(&DAT_01645804);
          FUN_00a9efb0(uVar3,uVar4,0,0x3c23d70a,0x3f800000,0,0xbf800000,0x3f800000);
          FUN_00a96070(0,0x8000000,1);
          return;
        }
      }
      pfStack_138 = (float *)0x0;
      iVar2 = FUN_00a94ce0();
      if (iVar2 != 0) {
        pfStack_138 = &fStack_124;
        FUN_00a92f90();
        FUN_0044fd10();
        pfStack_138 = (float *)0x5fae7b;
        iVar2 = (**(code **)(*param_1 + 0x84))();
        pfStack_138 = *(float **)(iVar2 + 4);
        D3DXMatrixRotationY(acStack_114);
        D3DXVec3TransformNormal(&stack0xfffffed4,&stack0xfffffed4,&fStack_11c);
        fVar1 = 1.0 / (float)param_1[0x244];
        pfStack_138 = &fStack_124;
        fStack_124 = fStack_124 * fVar1;
        fStack_120 = fStack_120 * fVar1;
        fStack_11c = fStack_11c * fVar1;
        fStack_118 = fStack_118 * fVar1;
        param_1[0x227] = (int)fStack_118;
        param_1[0x224] = (int)fStack_124;
        param_1[0x225] = (int)fStack_120;
        param_1[0x226] = (int)fStack_11c;
        FUN_008e0c00();
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x225] = 0x3f000000;
        pfStack_138 = (float *)&DAT_01645804;
        uVar3 = FUN_005f5bf0();
        pfStack_138 = (float *)&DAT_01645804;
        uVar4 = FUN_005f5ba0();
        pfStack_138 = (float *)0x3f800000;
        FUN_00a9efb0(uVar3,uVar4,0,0,0x3f800000,0,0xbf800000);
        pfStack_138 = (float *)0x1;
        FUN_00a96070(0,0x8000000);
      }
    }
    else {
      pfStack_138 = (float *)0x5faf6c;
      iVar2 = FUN_00a8cac0();
      if (iVar2 == 2) {
        if (param_1[0x1d9] != 0) {
          pfStack_138 = (float *)0x5faf83;
          iVar2 = FUN_008e2740();
          if (iVar2 != 0) {
            param_1[0x187] = param_1[0x187] + 1;
          }
        }
      }
      else {
        pfStack_138 = (float *)0x5faf9d;
        iVar2 = FUN_00a8cac0();
        if (iVar2 == 3) {
          pfStack_138 = (float *)&DAT_016457fc;
          uVar3 = FUN_005f5bf0();
          pfStack_138 = (float *)&DAT_016457fc;
          uVar4 = FUN_005f5ba0();
          pfStack_138 = (float *)0x3f800000;
          FUN_00a9efb0(uVar3,uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000);
          pfStack_138 = (float *)0x1;
          FUN_00a96070(0,0x8000000);
          param_1[0x187] = param_1[0x187] + 1;
        }
        else {
          pfStack_138 = (float *)0x5fb00a;
          iVar2 = FUN_00a8cac0();
          if (iVar2 == 4) {
            pfStack_138 = (float *)0x0;
            iVar2 = FUN_00a94ce0();
            if (iVar2 == 0) {
              return;
            }
            if (*(char *)((int)param_1 + 0xdb1) == '\0') {
              return;
            }
            param_1[0x187] = param_1[0x187] + 1;
            pfStack_138 = (float *)&DAT_016456c4;
            uVar3 = FUN_005f5bf0();
            pfStack_138 = (float *)&DAT_016456c4;
            uVar4 = FUN_005f5ba0();
            pfStack_138 = (float *)0x3f800000;
            FUN_00a9efb0(uVar3,uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000);
            pfStack_138 = (float *)0x1;
            FUN_00a96070(0,0x8000000);
          }
          else {
            pfStack_138 = (float *)0x5fb092;
            iVar2 = FUN_00a8cac0();
            if (iVar2 == 5) {
              pfStack_138 = (float *)0x0;
              iVar2 = FUN_00a94ce0();
              if (iVar2 != 0) {
                pfStack_138 = (float *)0x0;
                *(undefined1 *)((int)param_1 + 0xdaf) = 0;
                *(undefined1 *)((int)param_1 + 0xdad) = 0;
                FUN_005f4410(0,0,0);
              }
            }
          }
        }
      }
    }
  }
  pfStack_138 = (float *)0x3f800000;
  (**(code **)(*param_1 + 0x220))();
  return;
}

// 005FB0E0  FUN_005fb0e0  size=587  [callgraph]
void __fastcall FUN_005fb0e0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float unaff_EDI;
  undefined *puStack_13c;
  float fStack_138;
  float local_134;
  undefined1 auStack_120 [8];
  char acStack_118 [128];
  char acStack_98 [148];
  
  local_134 = 1.0;
  fStack_138 = 8.787869e-39;
  (**(code **)(*param_1 + 0x220))();
  *(undefined1 *)((int)param_1 + 0xdaf) = 1;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  *(undefined1 *)((int)param_1 + 0xdb3) = 1;
  fStack_138 = 8.787908e-39;
  iVar2 = FUN_00a8cac0();
  if (iVar2 < 2) {
    fStack_138 = 8.787977e-39;
    (**(code **)(*param_1 + 0x318))();
  }
  else {
    fStack_138 = 8.787932e-39;
    (**(code **)(*param_1 + 0x314))();
    fStack_138 = 0.016666668;
    puStack_13c = (undefined *)0x5fb144;
    (**(code **)(*param_1 + 800))();
  }
  puStack_13c = (undefined *)0x5fb155;
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    puStack_13c = &DAT_0164580c;
    _sprintf_s(acStack_118,0x80,"Em0040_%s.mot");
    puStack_13c = (undefined *)0x0;
    uVar3 = FUN_00de4550(acStack_118);
    puStack_13c = &DAT_0164580c;
    _sprintf_s(acStack_98,0x80,"Em0040_%s_0_seq.bxm");
    puStack_13c = (undefined *)0x0;
    uVar4 = FUN_00de4550(acStack_98);
    puStack_13c = (undefined *)0x3f800000;
    FUN_00a9efb0(uVar3,uVar4,0,0,0x3f800000,0,0xbf800000);
    puStack_13c = (undefined *)0x1;
    FUN_00a96070(0,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    return;
  }
  puStack_13c = (undefined *)0x5fb218;
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 1) {
    if (param_1[0x1d9] != 0) {
      puStack_13c = (undefined *)0x5fb230;
      iVar2 = FUN_008e2740();
      if (iVar2 != 0) {
        puStack_13c = (undefined *)0x0;
        FUN_005f4410(9,0,0);
        return;
      }
    }
    puStack_13c = (undefined *)0x0;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      puStack_13c = &stack0xfffffed8;
      FUN_00a92f90();
      FUN_0044fd10();
      puStack_13c = (undefined *)0x5fb27a;
      iVar2 = (**(code **)(*param_1 + 0x84))();
      puStack_13c = *(undefined **)(iVar2 + 4);
      D3DXMatrixRotationY(acStack_118);
      D3DXVec3TransformNormal(&stack0xfffffed0,&stack0xfffffed0,auStack_120);
      fVar1 = 1.0 / (float)param_1[0x244];
      puStack_13c = (undefined *)((float)puStack_13c * fVar1);
      fStack_138 = fStack_138 * fVar1;
      local_134 = local_134 * fVar1;
      param_1[0x227] = (int)(unaff_EDI * fVar1);
      param_1[0x224] = (int)puStack_13c;
      param_1[0x225] = (int)fStack_138;
      param_1[0x226] = (int)local_134;
      FUN_008e0c00(&puStack_13c);
      iVar2 = FUN_00a8cab0();
      if ((iVar2 != 7) || (*(char *)((int)param_1 + 0xdb5) != '\0')) {
        *(undefined1 *)((int)param_1 + 0xdbe) = 0;
        FUN_00a8caf0(7,0,0,0);
      }
    }
  }
  return;
}

// 005FB330  FUN_005fb330  size=1352  [callgraph]
uint __fastcall FUN_005fb330(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  float10 fVar9;
  undefined *puVar10;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [4];
  float fStack_6c;
  undefined1 auStack_60 [4];
  int aiStack_5c [22];
  
  piVar8 = (int *)0x0;
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar10 = &DAT_01b35420;
    (**(code **)(*piVar3 + 4))(&DAT_01b35420);
    iVar2 = FUN_00dd6d80(puVar10);
    piVar8 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  (**(code **)(*param_1 + 0x318))();
  iVar2 = FUN_00a92f90();
  if (iVar2 != 0) {
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if ((iVar2 != 0) && (fVar9 = (float10)FUN_00e36970(0), (float10)4.616667 <= fVar9)) {
      (**(code **)(*param_1 + 0x314))();
    }
  }
  param_1[0x375] = param_1[0x375] | 0x800;
  uVar7 = param_1[0x187];
  param_1[0x5a3] = 1;
  switch(uVar7) {
  case 0:
    if (piVar8 == (int *)0x0) {
      if (DAT_018b9174 == 0x230) {
        uVar5 = FUN_005f5510("Em0010",&DAT_01645814);
        uVar6 = FUN_005f5570("Em0010",&DAT_01645814);
        goto LAB_005fb458;
      }
    }
    else {
      uVar5 = FUN_005f5b30("Em0010",&DAT_01645814);
      uVar6 = FUN_005f5ac0("Em0010",&DAT_01645814);
LAB_005fb458:
      FUN_00a9efb0(uVar5,uVar6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      if (DAT_018b9174 == 0x230) {
        FUN_00c49970(1,param_1[0x2c8]);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((piVar8 != (int *)0x0) && (iVar2 = FUN_00a8c760(0x1c), iVar2 == 0)) {
      FUN_00a8ce90(auStack_60,auStack_70);
      fVar9 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_6c);
      piVar8[0x25] = (int)(float)fVar9;
      piVar3 = param_1 + 4;
      D3DXVec3TransformNormal(auStack_80,auStack_60,piVar3);
      if (aiStack_5c != piVar3) {
        FID_conflict__memcpy(aiStack_5c,piVar3,0x40);
      }
      (**(code **)(*piVar8 + 0x6c))(&stack0xffffff64);
    }
    if (((((byte)DAT_01bea060 & 0x40) != 0) && (param_1[599] == 0)) &&
       (iVar2 = FUN_00a959f0(0), 0x115 < iVar2)) {
      pcVar1 = *(code **)(*param_1 + 0x84);
      iVar2 = param_1[300];
      param_1[599] = 1;
      uVar5 = (*pcVar1)();
      uVar6 = (**(code **)(*param_1 + 0x68))(uVar5);
      FUN_00a5c570(iVar2,param_1[0x2e7],uVar6,uVar5);
    }
    iVar2 = FUN_00a94ce0(0);
    uVar7 = 0;
    if (iVar2 != 0) {
      FUN_00a930c0();
      param_1[0xd9] = param_1[0xd9] | 0x100000;
      if (DAT_018b9174 == 0x230) {
        iVar2 = param_1[300];
        uVar5 = (**(code **)(*param_1 + 0x84))();
        uVar6 = (**(code **)(*param_1 + 0x68))(uVar5);
        FUN_00a5c570(iVar2,param_1[0x2e7],uVar6,uVar5);
      }
      uVar7 = FUN_00b39f00(0xa0020,0,0,0);
      param_1[0x250] = 0;
      return uVar7;
    }
switchD_005fb3f3_default:
    return uVar7;
  case 2:
    FUN_00a930c0();
    param_1[0xd9] = param_1[0xd9] | 0x100000;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(5);
    }
    if (piVar8 == (int *)0x0) {
      if (DAT_018b9174 == 0x230) {
        uVar5 = FUN_005f5510("Em0010",&DAT_0163f42c);
        uVar6 = FUN_005f5570("Em0010",&DAT_0163f42c);
        goto LAB_005fb715;
      }
    }
    else {
      uVar5 = FUN_005f5b30("Em0010",&DAT_0163f42c);
      uVar6 = FUN_005f5ac0("Em0010",&DAT_0163f42c);
LAB_005fb715:
      FUN_00a9efb0(uVar5,uVar6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
switchD_005fb3f3_caseD_3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    uVar7 = 0;
    if (iVar2 != 0) {
      uVar4 = FUN_00dde2a0(0,100);
      uVar7 = (uVar4 & 0xffff) / 5;
      if ((uVar4 & 0xffff) % 5 == 0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      else {
LAB_005fb84a:
        param_1[0x187] = 2;
      }
    }
LAB_005fb854:
    *(undefined2 *)(param_1 + 0x209) = 4;
    param_1[0x20a] = 0x78;
    return uVar7;
  case 3:
    goto switchD_005fb3f3_caseD_3;
  case 4:
    if (piVar8 == (int *)0x0) {
      if (DAT_018b9174 == 0x230) {
        uVar5 = FUN_005f5510("Em0010",&DAT_016457d4);
        uVar6 = FUN_005f5570("Em0010",&DAT_016457d4);
        goto LAB_005fb81d;
      }
    }
    else {
      uVar5 = FUN_005f5b30("Em0010",&DAT_016457d4);
      uVar6 = FUN_005f5ac0("Em0010",&DAT_016457d4);
LAB_005fb81d:
      FUN_00a9efb0(uVar5,uVar6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar7 = FUN_00a94ce0(0);
    if (uVar7 == 0) goto LAB_005fb854;
    goto LAB_005fb84a;
  default:
    goto switchD_005fb3f3_default;
  }
}

// 005FB9D0  Pl2040::vf40  size=1779  [class]
undefined4 __fastcall Pl2040::vf40(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  code *pcVar9;
  float10 fVar10;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  int aiStack_3c [3];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = BehaviorAppBase::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00dd7240();
  pcVar9 = *(code **)(param_1[0x37c] + 4);
  param_1[0x1b8] = 0;
  param_1[0x372] = 0;
  param_1[0x288] = 0;
  (*pcVar9)();
  (**(code **)(param_1[0x390] + 4))();
  iVar2 = FUN_00e00260(0x20040);
  param_1[0x368] = iVar2;
  if (iVar2 == 0xfff) {
    return 0;
  }
  pcVar9 = *(code **)(*param_1 + 0x68);
  param_1[0xd9] = param_1[0xd9] & 0xfffffffd;
  param_1[0x371] = 0;
  piVar3 = (int *)(*pcVar9)();
  param_1[0x280] = *piVar3;
  param_1[0x281] = piVar3[1];
  iStack_50 = 1;
  iStack_4c = 1;
  param_1[0x282] = piVar3[2];
  iStack_48 = 1;
  param_1[0x283] = piVar3[3];
  iVar2 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
          StaticArray<Behavior::EffectIntegrationContainer,32>(&iStack_50);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_008ec660(param_1,0x3f4ccccd,0x3e99999a,0x42200000,0x41a00000,0x78,6,0);
  param_1[0x1d9] = iVar2;
  FUN_008e6d00();
  *(float *)(param_1[0x1d9] + 0xf4) = *(float *)(param_1[0x1d9] + 0xf4) * 0.5;
  FUN_008e0b70(1);
  FUN_008e0b80(0xffffffff,0x600);
  FUN_008e0ba0(0);
  FUN_008e0bb0(0xffffffff);
  FUN_008e6d00();
  FUN_008e1cc0();
  FUN_00410540(1,&DAT_01b7bd48);
  lib::AllocatedArray<Collision*>::AllocatedArray<Collision*>();
  lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(1);
  param_1[400] = 1;
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
  uVar4 = FUN_00a8d2a0();
  puVar5 = (undefined4 *)FUN_009f8b60();
  iVar2 = CollisionCapsule::CollisionCapsule(1,*puVar5,0);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x380) = 0;
  FUN_00d77c50(param_1[0x13c],0xffffffff);
  iStack_50 = 0;
  iStack_4c = 0x3f000000;
  iStack_48 = 0;
  iStack_44 = 0x3f800000;
  FUN_00d77c90(&iStack_50);
  *(undefined4 *)(iVar2 + 0x594) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x590) = 0x3e99999a;
  FUN_0041cd00("KogekkoBody");
  FUN_00a93a00(iVar2,uVar4);
  FUN_00d7b0f0();
  FUN_00d7b890();
  param_1[0x4ae] = 0;
  param_1[0x4ad] = 0;
  param_1[0x4af] = 0;
  param_1[0x4b0] = 0;
  param_1[0x4b1] = 0;
  param_1[0x4b2] = 0x3f800000;
  FUN_00c15320();
  param_1[0x4b5] = 0;
  param_1[0x4b3] = 0;
  param_1[0x4b4] = 0;
  param_1[0x4b6] = 0;
  param_1[0x4b7] = 0;
  param_1[0x4e5] = 0;
  param_1[0x41c] = 0;
  param_1[0x41d] = 0;
  param_1[0x41e] = 0;
  param_1[0x41f] = 0x3f800000;
  FUN_004066f0();
  iStack_50 = param_1[0x14];
  iStack_4c = param_1[0x15];
  iStack_48 = param_1[0x16];
  iStack_44 = param_1[0x17];
  uStack_30 = 0;
  uStack_2c = 0x40200000;
  uStack_28 = 0;
  uStack_40 = 0;
  aiStack_3c[0] = 0x3e99999a;
  aiStack_3c[1] = 0;
  piVar3 = (int *)FUN_00900480();
  iVar2 = *piVar3;
  uVar4 = FUN_009f8b40(0);
  iVar2 = (**(code **)(iVar2 + 0xc))(&iStack_50,&uStack_30,&uStack_40,0x40a00000,5,uVar4);
  FUN_008f7f00(iVar2,param_1[0x13c]);
  FUN_004066f0();
  if ((iVar2 == 0) || (uVar1 = *(uint *)(iVar2 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_005fbd92;
    }
  }
  else {
    puVar6 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar6 = *puVar6 | 1;
    puVar6[2] = puVar6[2] | 0x40;
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_005fbd92:
      piVar3 = (int *)(iVar7 + 4);
      *piVar3 = *piVar3 + -1;
      if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_004066f0();
  if ((iVar2 == 0) || (uVar1 = *(uint *)(iVar2 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_005fbe0a;
    }
  }
  else {
    puVar6 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar6 = *puVar6 | 4;
    puVar6[4] = puVar6[4] | 4;
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_005fbe0a:
      piVar3 = (int *)(iVar7 + 4);
      *piVar3 = *piVar3 + -1;
      if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_004066f0();
  if ((iVar2 == 0) || (uVar1 = *(uint *)(iVar2 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_005fbe81;
    }
  }
  else {
    puVar6 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar6 = *puVar6 | 8;
    puVar6[5] = puVar6[5] | 4;
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_005fbe81:
      piVar3 = (int *)(iVar7 + 4);
      *piVar3 = *piVar3 + -1;
      if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(iVar2);
  FUN_009009c0("qteCheck");
  FUN_00900bd0();
  FUN_0112c440(0x3f800000);
  FUN_00901540(0x1f);
  FUN_00406760();
  if (3 < (short)param_1[0xc9]) {
    *(uint *)(param_1[200] + 0x188) = *(uint *)(param_1[200] + 0x188) & 0xfffffffe;
  }
  if (4 < (short)param_1[0xc9]) {
    *(uint *)(param_1[200] + 0x1f8) = *(uint *)(param_1[200] + 0x1f8) & 0xfffffffe;
  }
  if (0xb < (short)param_1[0xc9]) {
    *(uint *)(param_1[200] + 0x508) = *(uint *)(param_1[200] + 0x508) & 0xfffffffe;
  }
  if (0xd < (short)param_1[0xc9]) {
    *(uint *)(param_1[200] + 0x5e8) = *(uint *)(param_1[200] + 0x5e8) & 0xfffffffe;
  }
  param_1[0x3ac] = 0;
  *(undefined1 *)((int)param_1 + 0xdae) = 0;
  param_1[0x284] = 0;
  *(undefined1 *)((int)param_1 + 0xdb3) = 0;
  param_1[0x36a] = 0;
  param_1[0x22a] = 0x3c23d70a;
  *(undefined2 *)((int)param_1 + 0xdb5) = 0;
  *(undefined2 *)(param_1 + 0x36e) = 0;
  *(undefined4 *)((int)param_1 + 0xdbb) = 0;
  param_1[0x3ad] = 0;
  param_1[0x3ae] = 0;
  *(undefined4 *)((int)param_1 + 0xdbf) = 0x1000000;
  param_1[0x3b0] = 0;
  param_1[0x3b1] = 0;
  *(undefined1 *)((int)param_1 + 0xdc3) = 1;
  param_1[0x3af] = 0;
  FUN_00a929d0();
  param_1[0x4f8] = 0;
  param_1[0x4f9] = 0;
  if ((int *)param_1[0x1d5] == (int *)0x0) {
    uVar4 = 100;
    goto LAB_005fc062;
  }
  uVar4 = (**(code **)(*(int *)param_1[0x1d5] + 0x24))(3);
  uVar8 = FUN_009c4bf0();
  switch(uVar8) {
  case 0:
    pcVar9 = *(code **)(*(int *)param_1[0x1d5] + 0x5c);
    break;
  default:
    goto switchD_005fc009_caseD_1;
  case 2:
    pcVar9 = *(code **)(*(int *)param_1[0x1d5] + 100);
    break;
  case 3:
    pcVar9 = *(code **)(*(int *)param_1[0x1d5] + 0x6c);
    break;
  case 4:
    pcVar9 = *(code **)(*(int *)param_1[0x1d5] + 0x74);
  }
  fVar10 = (float10)(*pcVar9)(3);
  if ((float10)0 < fVar10) {
    uVar4 = FUN_00fdbc60();
  }
  else {
switchD_005fc009_caseD_1:
  }
LAB_005fc062:
  FUN_00a8edf0(uVar4);
  uVar4 = 1;
  FUN_00a92fb0(1);
  FUN_00e08640(uVar4);
  FUN_00a925a0(aiStack_3c);
  param_1[0x394] = aiStack_3c[0];
  param_1[0x21e] = 1;
  param_1[0x396] = aiStack_3c[2];
  param_1[0x21f] = 7;
  param_1[0x220] = 0x27;
  return 1;
}

// 005FC0E0  FUN_005fc0e0  size=440  [callgraph]
void __thiscall FUN_005fc0e0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 local_160 [348];
  
  if (param_1[0x37a] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x374));
  }
  if (param_2 == 1) {
    FUN_005f6370();
    FUN_004117d0(4,param_1,param_1 + 0x28c);
    FUN_00a963e0(local_160);
    FUN_00a8caf0(0,0,0,0);
    DAT_01bea094 = DAT_01bea094 | 0x20000;
  }
  else if (param_2 == 2) {
    FUN_005f6370();
    FUN_005f6880();
    FUN_004117d0(4,param_1,param_1 + 0x28c);
    FUN_00a963e0(local_160);
    FUN_00a8caf0(0,0,0,0);
    iVar1 = FUN_00a82090("Pl2041_Hand",0x12041,0);
    param_1[0x4f9] = iVar1;
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_01645840);
      DAT_01bea094 = DAT_01bea094 | 0x20000;
    }
    else {
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x20))();
      FUN_00a8c5f0(0,param_1[0x13c],param_1[0x4f9],0,0);
      DAT_01bea094 = DAT_01bea094 | 0x20000;
    }
  }
  else if (param_2 == 0) {
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e5c50(0x1f);
    }
    if ((DAT_018b9174 == 0x230) || (DAT_018b9174 == 0x220)) {
      FUN_00a9e290(&DAT_01645838,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    }
    FUN_00a8caf0(0x1b,0,0,0);
    (**(code **)(*param_1 + 0x20))();
  }
  if (param_1[0x37a] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x374));
  }
  return;
}

// 005FC2A0  FUN_005fc2a0  size=480  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005fc2a0(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  iVar3 = FUN_00a8c760(0xe);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x12c4) = 0x40000000;
    *(undefined4 *)(param_1 + 0x12c8) = 0x3c23d70a;
  }
  iVar3 = FUN_00a8c760(0xf);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x12c4) = 0x40000000;
    *(undefined4 *)(param_1 + 0x12c8) = 0x3d4ccccd;
  }
  iVar3 = FUN_00a8c760(0x10);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x12c4) = 0x40000000;
    *(undefined4 *)(param_1 + 0x12c8) = 0x3dcccccd;
  }
  fVar1 = *(float *)(param_1 + 0x12c4);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0x12c4) = *(float *)(param_1 + 0x12c4) - _DAT_01be942c;
  }
  local_164 = 0x3f800000;
  bVar2 = 0.0 < *(float *)(param_1 + 0x12c4);
  if (bVar2) {
    local_164 = *(undefined4 *)(param_1 + 0x12c8);
  }
  uVar5 = (uint)bVar2;
  DAT_01beaa60 = uVar5;
  if (uVar5 != 0) {
    FUN_00e03a70(0,local_164);
    FUN_00e03a70(1,0x3f800000);
    FUN_00e03a70(2,0x3f800000);
  }
  if (*(uint *)(param_1 + 0x12d8) != uVar5) {
    FUN_00e03a70(0,local_164);
    FUN_00e03a70(1,0x3f800000);
    FUN_00e03a70(2,0x3f800000);
    if ((*(int *)(param_1 + 0x12dc) == 0) && (uVar5 != 0)) {
      uVar6 = 0;
      uVar4 = FUN_00a7c8a0(0);
      FUN_004039a0(1,uVar4,uVar6);
      FUN_00dffb20(param_1 + 0x1200);
      FUN_00a8c930(0,local_160);
      FUN_00e5e050("core_se_btl_slow_in",0);
      *(undefined4 *)(param_1 + 0x12dc) = 1;
    }
    if ((*(int *)(param_1 + 0x12dc) == 1) && (uVar5 == 0)) {
      FUN_00e5e050("core_se_btl_slow_out",0);
      *(undefined4 *)(param_1 + 0x12dc) = 0;
      *(undefined4 *)(param_1 + 0x12d8) = 0;
      return;
    }
  }
  *(uint *)(param_1 + 0x12d8) = uVar5;
  return;
}

// 005FD070  Pl2040::vf264  size=45  [class]
undefined4 __thiscall Pl2040::vf264(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x10e0);
  for (iVar1 = 0x48; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_005fc0e0(*(undefined4 *)(param_1 + 0x1124));
  return 1;
}

// 005FD0A0  FUN_005fd0a0  size=910  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005fd0a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  char local_260 [128];
  char local_1e0 [116];
  undefined1 auStack_16c [12];
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a4a350(DAT_018b9174);
  if (iVar1 == 0) {
LAB_005fd111:
    (**(code **)(*param_1 + 0x314))();
    (**(code **)(*param_1 + 800))(0x3c888889);
    *(undefined1 *)((int)param_1 + 0xdaf) = 0;
    *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  }
  else {
    iVar1 = FUN_00a8cac0();
    if ((iVar1 < 2) || ((param_1[0x449] != 2 && (param_1[0x128] != 2)))) goto LAB_005fd111;
    param_1[0x225] = 0;
    *(undefined1 *)((int)param_1 + 0xdaf) = 0;
    *(undefined1 *)((int)param_1 + 0xdb5) = 0;
    *(undefined1 *)((int)param_1 + 0xdad) = 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
  }
  *(undefined1 *)((int)param_1 + 0xdad) = 1;
  iVar1 = FUN_00a8cac0();
  if (iVar1 != 0) {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 1) {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 != 0) {
        (**(code **)(param_1[0x2b8] + 8))(0,0,0);
        FUN_004117d0(10,param_1,param_1 + 0x2e4);
        thunk_FUN_00e00b80(param_1[0x368],10,param_1 + 4,auStack_16c);
        iVar1 = FUN_00dda320(0);
        if (iVar1 != 0) {
          FUN_00dda360(0,0x3f800000,0x3f800000,10);
        }
        FUN_00e5e0c0("em0040_se_dmg_explosion",param_1,0xffffffff,0);
        (**(code **)(*param_1 + 0x20))();
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = 0;
        return;
      }
    }
    else {
      iVar1 = FUN_00a8cac0();
      if (iVar1 == 2) {
        fVar4 = (float10)FUN_00a92ff0();
        fVar4 = fVar4 * (float10)0.016666668 + (float10)(float)param_1[0x248];
        param_1[0x248] = (int)(float)fVar4;
        if ((float10)2.0 < fVar4) {
          FUN_005f4410(5,0,0,0);
        }
      }
    }
    return;
  }
  if (DAT_018b9174 != 0x230) {
    iVar1 = FUN_00a4a350(DAT_018b9174);
    if (iVar1 != 1) goto LAB_005fd17b;
  }
  _DAT_01d61384 = 0xffffffff;
LAB_005fd17b:
  FUN_00eaa6e0(0,0);
  FUN_00eaa6e0(0x41200000,0);
  FUN_00eaa6e0(0x41200000,0);
  FUN_004117d0(0x11,param_1,param_1 + 0x2b8);
  local_260[0x38] = '\0';
  local_260[0x39] = '\0';
  local_260[0x3a] = '\0';
  local_260[0x3b] = '\0';
  local_260[0x34] = '\0';
  local_260[0x35] = '\0';
  local_260[0x36] = '\0';
  local_260[0x37] = '\0';
  local_260[0x30] = '\0';
  local_260[0x31] = '\0';
  local_260[0x32] = '\0';
  local_260[0x33] = '\0';
  local_260[0x2c] = '\0';
  local_260[0x2d] = '\0';
  local_260[0x2e] = '\0';
  local_260[0x2f] = '\0';
  local_260[0x24] = '\0';
  local_260[0x25] = '\0';
  local_260[0x26] = '\0';
  local_260[0x27] = '\0';
  local_260[0x20] = '\0';
  local_260[0x21] = '\0';
  local_260[0x22] = '\0';
  local_260[0x23] = '\0';
  local_260[0x1c] = '\0';
  local_260[0x1d] = '\0';
  local_260[0x1e] = '\0';
  local_260[0x1f] = '\0';
  local_260[0x18] = '\0';
  local_260[0x19] = '\0';
  local_260[0x1a] = '\0';
  local_260[0x1b] = '\0';
  local_260[0x10] = '\0';
  local_260[0x11] = '\0';
  local_260[0x12] = '\0';
  local_260[0x13] = '\0';
  local_260[0xc] = '\0';
  local_260[0xd] = '\0';
  local_260[0xe] = '\0';
  local_260[0xf] = '\0';
  local_260[8] = '\0';
  local_260[9] = '\0';
  local_260[10] = '\0';
  local_260[0xb] = '\0';
  local_260[4] = '\0';
  local_260[5] = '\0';
  local_260[6] = '\0';
  local_260[7] = '\0';
  local_260[0x3c] = '\0';
  local_260[0x3d] = '\0';
  local_260[0x3e] = -0x80;
  local_260[0x3f] = '?';
  local_260[0x28] = '\0';
  local_260[0x29] = '\0';
  local_260[0x2a] = -0x80;
  local_260[0x2b] = '?';
  local_260[0x14] = '\0';
  local_260[0x15] = '\0';
  local_260[0x16] = -0x80;
  local_260[0x17] = '?';
  local_260[0] = '\0';
  local_260[1] = '\0';
  local_260[2] = -0x80;
  local_260[3] = '?';
  thunk_FUN_00e00b80(param_1[0x368],0x11,local_260,local_160);
  FUN_00e5e0c0("pl2040_se_dmg_spark_stop",param_1,0xffffffff,0);
  FUN_00e5e0c0("em0040_se_dmg_spark",param_1,0xffffffff,0);
  DAT_01bea070 = DAT_01bea070 | 0x220000;
  param_1[0x139] = 1;
  _sprintf_s(local_260,0x80,"Em0040_%s.mot",&DAT_016458c4);
  uVar2 = FUN_00de4550(local_260,0);
  _sprintf_s(local_1e0,0x80,"Em0040_%s_0_seq.bxm",&DAT_016458c4);
  uVar3 = FUN_00de4550(local_1e0,0);
  FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00a96070(0,0x8000000,1);
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005FD430  FUN_005fd430  size=486  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005fd430(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 auStack_16c [360];
  
  (**(code **)(*param_1 + 0x314))();
  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  *(undefined1 *)((int)param_1 + 0xdad) = 1;
  iVar1 = FUN_00a8cac0();
  if (iVar1 != 0) {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 1) {
      fVar2 = (float10)FUN_00a92ff0();
      fVar2 = fVar2 * (float10)0.016666668 + (float10)(float)param_1[0x248];
      param_1[0x248] = (int)(float)fVar2;
      if ((float10)2.0 < fVar2) {
        iVar1 = FUN_00a8cab0();
        if ((iVar1 != 5) || (*(char *)((int)param_1 + 0xdb5) != '\0')) {
          *(undefined1 *)((int)param_1 + 0xdbe) = 0;
          FUN_00a8caf0(5,0,0,0);
        }
      }
    }
    return;
  }
  if (DAT_018b9174 != 0x230) {
    iVar1 = FUN_00a4a350(DAT_018b9174);
    if (iVar1 != 1) goto LAB_005fd491;
  }
  _DAT_01d61384 = 0xffffffff;
LAB_005fd491:
  if (param_1[0x1d9] != 0) {
    FUN_008e3c10();
  }
  FUN_00eaa6e0(0,0);
  FUN_00eaa6e0(0x41200000,0);
  FUN_00eaa6e0(0x41200000,0);
  (**(code **)(param_1[0x2b8] + 8))(0,0,0);
  FUN_00e5e0c0("pl2040_se_dmg_spark_stop",param_1,0xffffffff,0);
  DAT_01bea070 = DAT_01bea070 | 0x220000;
  param_1[0x139] = 1;
  FUN_004117d0(10,param_1,param_1 + 0x2e4);
  thunk_FUN_00e00b80(param_1[0x368],10,param_1 + 4,auStack_16c);
  iVar1 = FUN_00dda320(0);
  if (iVar1 != 0) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  FUN_00e5e0c0("em0040_se_dmg_explosion",param_1,0xffffffff,0);
  (**(code **)(*param_1 + 0x20))();
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x248] = 0;
  return;
}

// 005FD620  FUN_005fd620  size=807  [callgraph]
void __fastcall FUN_005fd620(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  char acStack_260 [128];
  char acStack_1e0 [116];
  undefined1 auStack_16c [12];
  undefined1 auStack_160 [348];
  
  pcVar1 = *(code **)(*param_1 + 0x318);
  *(undefined1 *)((int)param_1 + 0xdad) = 1;
  *(undefined1 *)((int)param_1 + 0xdaf) = 1;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  *(undefined1 *)((int)param_1 + 0xdb3) = 0;
  (*pcVar1)();
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00e5e0c0("em0040_vo_shout",param_1,0xffffffff,0);
    _sprintf_s(acStack_260,0x80,"Em0040_%s.mot",&DAT_016419e8);
    uVar3 = FUN_00de4550(acStack_260,0);
    _sprintf_s(acStack_1e0,0x80,"Em0040_%s_0_seq.bxm",&DAT_016419e8);
    uVar4 = FUN_00de4550(acStack_1e0,0);
    FUN_00a9efb0(uVar3,uVar4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00eaa6e0(0,0);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    FUN_004117d0(0x11,param_1,param_1 + 0x2b8);
    acStack_260[0x38] = '\0';
    acStack_260[0x39] = '\0';
    acStack_260[0x3a] = '\0';
    acStack_260[0x3b] = '\0';
    acStack_260[0x34] = '\0';
    acStack_260[0x35] = '\0';
    acStack_260[0x36] = '\0';
    acStack_260[0x37] = '\0';
    acStack_260[0x30] = '\0';
    acStack_260[0x31] = '\0';
    acStack_260[0x32] = '\0';
    acStack_260[0x33] = '\0';
    acStack_260[0x2c] = '\0';
    acStack_260[0x2d] = '\0';
    acStack_260[0x2e] = '\0';
    acStack_260[0x2f] = '\0';
    acStack_260[0x24] = '\0';
    acStack_260[0x25] = '\0';
    acStack_260[0x26] = '\0';
    acStack_260[0x27] = '\0';
    acStack_260[0x20] = '\0';
    acStack_260[0x21] = '\0';
    acStack_260[0x22] = '\0';
    acStack_260[0x23] = '\0';
    acStack_260[0x1c] = '\0';
    acStack_260[0x1d] = '\0';
    acStack_260[0x1e] = '\0';
    acStack_260[0x1f] = '\0';
    acStack_260[0x18] = '\0';
    acStack_260[0x19] = '\0';
    acStack_260[0x1a] = '\0';
    acStack_260[0x1b] = '\0';
    acStack_260[0x10] = '\0';
    acStack_260[0x11] = '\0';
    acStack_260[0x12] = '\0';
    acStack_260[0x13] = '\0';
    acStack_260[0xc] = '\0';
    acStack_260[0xd] = '\0';
    acStack_260[0xe] = '\0';
    acStack_260[0xf] = '\0';
    acStack_260[8] = '\0';
    acStack_260[9] = '\0';
    acStack_260[10] = '\0';
    acStack_260[0xb] = '\0';
    acStack_260[4] = '\0';
    acStack_260[5] = '\0';
    acStack_260[6] = '\0';
    acStack_260[7] = '\0';
    acStack_260[0x3c] = '\0';
    acStack_260[0x3d] = '\0';
    acStack_260[0x3e] = -0x80;
    acStack_260[0x3f] = '?';
    acStack_260[0x28] = '\0';
    acStack_260[0x29] = '\0';
    acStack_260[0x2a] = -0x80;
    acStack_260[0x2b] = '?';
    acStack_260[0x14] = '\0';
    acStack_260[0x15] = '\0';
    acStack_260[0x16] = -0x80;
    acStack_260[0x17] = '?';
    acStack_260[0] = '\0';
    acStack_260[1] = '\0';
    acStack_260[2] = -0x80;
    acStack_260[3] = '?';
    thunk_FUN_00e00b80(param_1[0x368],0x11,acStack_260,auStack_160);
    FUN_00e5e0c0("pl2040_se_dmg_spark_stop",param_1,0xffffffff,0);
    FUN_00e5e0c0("em0040_se_dmg_spark",param_1,0xffffffff,0);
    DAT_01bea070 = DAT_01bea070 | 0x220000;
    param_1[0x248] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 1) {
    iVar2 = FUN_00a959f0(0);
    if (30.0 <= (float)iVar2) {
      (**(code **)(param_1[0x2b8] + 8))(0,0,0);
      FUN_004117d0(10,param_1,param_1 + 0x2e4);
      thunk_FUN_00e00b80(param_1[0x368],10,param_1 + 4,auStack_16c);
      iVar2 = FUN_00dda320(0);
      if (iVar2 != 0) {
        FUN_00dda360(0,0x3f800000,0x3f800000,10);
      }
      FUN_00e5e0c0("em0040_se_dmg_explosion",param_1,0xffffffff,0);
      (**(code **)(*param_1 + 0x20))();
      if (param_1[0x1d9] != 0) {
        FUN_008e5c50(0x1f);
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0;
      return;
    }
  }
  else {
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 2) {
      fVar5 = (float10)FUN_00a92ff0();
      fVar5 = fVar5 * (float10)0.016666668 + (float10)(float)param_1[0x248];
      param_1[0x248] = (int)(float)fVar5;
      if ((float10)2.0 < fVar5) {
        FUN_005f4410(5,0,0,0);
      }
    }
  }
  return;
}

// 005FE580  Pl2040::vf48  size=724  [class]
void __fastcall Pl2040::vf48(int *param_1)

{
  float fVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
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
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [76];
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x68))();
  param_1[0x280] = *piVar2;
  param_1[0x281] = piVar2[1];
  param_1[0x282] = piVar2[2];
  param_1[0x283] = piVar2[3];
  param_1[0x4e0] = 0;
  param_1[0x4e1] = 0;
  param_1[0x4e2] = 0;
  param_1[0x4e3] = 0x3f800000;
  if (0.0 < (float)param_1[0x3ac]) {
    fVar3 = (float10)FUN_00a92ff0();
    param_1[0x3ac] = (int)(float)((float10)(float)param_1[0x3ac] - fVar3);
  }
  if ((DAT_01bea060 & 0x40000000) == 0) {
    uStack_98 = 0;
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_ac = 0;
    uStack_b0 = 0;
    iStack_b4 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_c4 = 0;
    uStack_c8 = 0;
    uStack_cc = 0;
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_60 = 0;
    uStack_64 = 0;
    uStack_6c = 0;
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_88 = 0;
    uStack_8c = 0;
    uStack_94 = 0x3f800000;
    uStack_a8 = 0x3f800000;
    iStack_bc = 0x3f800000;
    uStack_d0 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_68 = 0x3f800000;
    uStack_7c = 0x3f800000;
    uStack_90 = 0x3f800000;
    if ((float)param_1[0x25] != 0.0) {
      D3DXMatrixRotationY(auStack_50,param_1[0x25]);
      D3DXMatrixMultiply(&uStack_98,&uStack_58,&uStack_98);
    }
    D3DXMatrixTranslation(&uStack_d0,0,0,0x3f800000);
    D3DXMatrixMultiply(&stack0xffffff20,&stack0xffffff20,&uStack_a0);
    param_1[0x394] = iStack_bc;
    param_1[0x396] = iStack_b4;
    if ((((DAT_01bea060 & 0x2000000) == 0) &&
        ((((param_1[0x449] == 1 || (param_1[0x128] == 1)) || (param_1[0x449] == 2)) ||
         (param_1[0x128] == 2)))) && (FUN_005f5e30(), param_1[0x139] == 0)) {
      FUN_005fd9c0();
    }
    if (0.0 < (float)param_1[0x3ad]) {
      fVar3 = (float10)FUN_00a92ff0();
      fVar1 = (float)param_1[0x3ad];
      param_1[0x3ad] = (int)(float)((float10)fVar1 - fVar3);
      if ((float10)fVar1 - fVar3 <= (float10)0) {
        param_1[0x3ad] = (int)(float)(float10)0;
        param_1[0x3ae] = 0;
      }
    }
    if (0.0 < (float)param_1[0x4b0] != ((float)param_1[0x4b0] == 0.0)) {
      fVar3 = (float10)FUN_00a92ff0();
      param_1[0x4b0] = (int)(float)((float10)(float)param_1[0x4b0] - fVar3);
    }
    if (0.0 < (float)param_1[0x4b0]) {
      DAT_01dc1300 = 1;
      DAT_01dc12fc = 1;
    }
    lib::StaticArray<cQteArea,32>::StaticArray<cQteArea,32>();
    FUN_005fc2a0();
    fVar1 = (float)param_1[0x4af];
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      fVar3 = (float10)FUN_00a92ff0();
      param_1[0x4af] = (int)(float)((float10)(float)param_1[0x4af] - fVar3);
    }
    BehaviorAppBase::vf48();
  }
  else if ((param_1[0x449] == 1) || (param_1[0x128] == 1)) {
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  return;
}

// 005FE860  hkpAllCdPointCollector::hkpAllCdPointCollector_7  size=1376  [between]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_7(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  int iStack_214;
  float local_20c;
  float local_208;
  float fStack_204;
  float local_1f8;
  undefined1 local_1f0 [48];
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  undefined **ppuStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  undefined1 auStack_190 [396];
  
  iVar11 = *(int *)(param_1 + 0x1390);
  iVar12 = 0;
  *(undefined4 *)(param_1 + 0x1390) = 0;
  iVar10 = FUN_00a81330();
  if (iVar10 != 0) {
    iVar12 = FUN_00a7c8a0();
  }
  if ((*(int *)(param_1 + 0x130c) != 0) && (switchD_0080dbae::default(), iVar11 != 0)) {
    FUN_004066f0();
    if (*(int *)(param_1 + 0x12e8) != 0) {
      if (iVar12 == 0) {
        local_230 = *(float *)(param_1 + 0x1310) + *(float *)(param_1 + 0x40);
        local_22c = *(float *)(param_1 + 0x1314) + *(float *)(param_1 + 0x44);
        local_228 = *(float *)(param_1 + 0x1318) + *(float *)(param_1 + 0x48);
        fVar2 = *(float *)(param_1 + 0x131c) + *(float *)(param_1 + 0x4c);
        local_234 = *(float *)(param_1 + 0x1320);
      }
      else {
        local_230 = *(float *)(param_1 + 0x40) - *(float *)(iVar12 + 0x40);
        local_22c = *(float *)(param_1 + 0x44) - *(float *)(iVar12 + 0x44);
        local_228 = *(float *)(param_1 + 0x48) - *(float *)(iVar12 + 0x48);
        local_224 = *(float *)(param_1 + 0x4c) - *(float *)(iVar12 + 0x4c);
        fVar2 = local_228 * local_228 + local_22c * local_22c + local_230 * local_230;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&local_230,&local_230);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_228 = 0.0;
          local_230 = 0.0;
          local_22c = 1.0;
        }
        fVar5 = *(float *)(param_1 + 0x1300) + 1.0;
        fVar7 = local_22c * fVar5;
        fVar4 = local_230 * fVar5 + *(float *)(param_1 + 0x40);
        fVar3 = local_228 * fVar5 + *(float *)(param_1 + 0x48);
        fVar2 = *(float *)(param_1 + 0x12fc) + *(float *)(param_1 + 0x1300);
        fVar6 = *(float *)(iVar12 + 0x40) - local_230 * fVar2;
        local_20c = *(float *)(iVar12 + 0x44) - local_22c * fVar2;
        fVar8 = *(float *)(iVar12 + 0x48) - local_228 * fVar2;
        local_230 = (fVar6 + fVar4) * 0.5;
        local_228 = (fVar8 + fVar3) * 0.5;
        fVar2 = ((*(float *)(iVar12 + 0x4c) - local_224 * fVar2) +
                local_224 * fVar5 + *(float *)(param_1 + 0x4c)) * 0.5;
        local_22c = *(float *)(param_1 + 0x44);
        fVar4 = fVar4 - fVar6;
        fVar5 = (fVar7 + *(float *)(param_1 + 0x44)) - local_20c;
        fVar3 = fVar3 - fVar8;
        local_234 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) * 0.5;
        local_224 = fVar2;
        local_1f8 = local_228;
      }
      if (*(int *)(param_1 + 0x1308) == 0) {
        *(undefined4 *)(param_1 + 0x1308) = 1;
        local_208 = local_228 - *(float *)(param_1 + 0x48);
        *(float *)(param_1 + 0x1310) = local_230 - *(float *)(param_1 + 0x40);
        *(float *)(param_1 + 0x1314) = local_22c - *(float *)(param_1 + 0x44);
        *(float *)(param_1 + 0x1318) = local_208;
        *(float *)(param_1 + 0x131c) = fVar2 - *(float *)(param_1 + 0x4c);
        *(float *)(param_1 + 0x1320) = local_234;
      }
      else {
        if (local_234 <= *(float *)(param_1 + 0x1320)) {
          *(float *)(param_1 + 0x1320) = local_234;
        }
        local_234 = *(float *)(param_1 + 0x1320);
      }
      *(float *)(param_1 + 0x1310) = local_230 - *(float *)(param_1 + 0x40);
      *(float *)(param_1 + 0x1314) = local_22c - *(float *)(param_1 + 0x44);
      *(float *)(param_1 + 0x1318) = local_228 - *(float *)(param_1 + 0x48);
      *(float *)(param_1 + 0x131c) = fVar2 - *(float *)(param_1 + 0x4c);
      D3DXMatrixRotationY(local_1f0,*(undefined4 *)(param_1 + 0x94));
      fStack_1c0 = local_230;
      fStack_1bc = local_22c;
      fStack_1b8 = local_228;
      Phantom::setTransform(local_1f0);
      FUN_0112c440(local_234);
      FUN_00901540(0xc);
      local_22c = local_22c + 1.1;
      if (*(int *)(param_1 + 0x12e8) != 0) {
        puStack_1a0 = auStack_190;
        uStack_1ac = 0x7f7fffee;
        ppuStack_1b0 = vftable;
        uStack_198 = 0x80000008;
        iStack_19c = 0;
        FUN_00900350(&ppuStack_1b0);
        if (0 < iStack_19c) {
          iStack_214 = 0;
          local_234 = 0.0;
          do {
            puVar9 = puStack_1a0;
            iVar11 = *(int *)(puStack_1a0 + (int)local_234 + 0x28);
            if (*(char *)(iVar11 + 0x18) == '\x02') {
              iVar10 = *(char *)(iVar11 + 0x10) + iVar11;
            }
            else {
              iVar10 = 0;
            }
            if (*(char *)(iVar11 + 0x18) == '\x01') {
              iVar11 = *(char *)(iVar11 + 0x10) + iVar11;
            }
            else {
              iVar11 = 0;
            }
            if (((iVar10 == 0) && (iVar11 != 0)) &&
               (((byte)*(undefined4 *)(iVar11 + 0x2c) & 0x1f) != 0xb)) {
              FUN_0048aaf0();
              fVar2 = *(float *)(puVar9 + (int)local_234 + 0x1c);
              fVar3 = *(float *)(puVar9 + (int)local_234 + 0x10);
              fVar4 = *(float *)(puVar9 + (int)local_234 + 0x18);
              fVar5 = *(float *)(puVar9 + (int)local_234 + 0x14) * fVar2;
              fStack_204 = fStack_204 * fVar2;
              if (*(int *)(param_1 + 0x1324) == 0) {
                fVar5 = 0.0;
              }
              else if ((0.0 <= fVar5) || (local_22c <= *(float *)(puVar9 + (int)local_234 + 4))) {
                if ((0.0 < fVar5) && (local_22c < *(float *)(puVar9 + (int)local_234 + 4))) {
                  fVar5 = 0.0;
                }
              }
              else {
                fVar5 = 0.0;
              }
              *(float *)(param_1 + 0x50) = fVar3 * fVar2 + *(float *)(param_1 + 0x50);
              *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fVar5;
              *(float *)(param_1 + 0x58) = fVar4 * fVar2 + *(float *)(param_1 + 0x58);
              *(float *)(param_1 + 0x5c) = fStack_204 + *(float *)(param_1 + 0x5c);
              if (iVar12 != 0) {
                *(float *)(iVar12 + 0x50) = fVar3 * fVar2 + *(float *)(iVar12 + 0x50);
                *(float *)(iVar12 + 0x54) = fVar5 + *(float *)(iVar12 + 0x54);
                *(float *)(iVar12 + 0x58) = fVar4 * fVar2 + *(float *)(iVar12 + 0x58);
                *(float *)(iVar12 + 0x5c) = fStack_204 + *(float *)(iVar12 + 0x5c);
              }
            }
            local_234 = (float)((int)local_234 + 0x30);
            iStack_214 = iStack_214 + 1;
          } while (iStack_214 < iStack_19c);
        }
        hkpCdPointCollector::hkpCdPointCollector_4();
      }
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 005FEDD0  FUN_005fedd0  size=599  [between]
void __fastcall FUN_005fedd0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_264 [128];
  char acStack_1e4 [128];
  undefined1 auStack_164 [352];
  
  if (param_1[0x1d9] != 0) {
    FUN_008e5610(2);
  }
  (**(code **)(*param_1 + 0x220))(0x3f800000);
  (**(code **)(*param_1 + 0x318))();
  param_1[0x4e4] = 1;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      param_1[0x4bf] = 0x3dcccccd;
      param_1[0x4c2] = 0;
      param_1[0x4c9] = 0;
      param_1[0x4c0] = 0x3e99999a;
      param_1[0x4c3] = 1;
      param_1[0x4c1] = 0x3dcccccd;
    }
    FUN_00eaa6e0(0,0);
    _sprintf_s(acStack_1e4,0x80,"Em0040_%s.mot",&DAT_01645814);
    uVar2 = FUN_00de4550(acStack_1e4,0);
    _sprintf_s(acStack_264,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645814);
    uVar3 = FUN_00de4550(acStack_264,0);
    FUN_00a9efb0(uVar2,uVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 1) {
      hkpAllCdPointCollector::hkpAllCdPointCollector_7();
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 != 0) {
        FUN_004117d0(4,param_1,param_1 + 0x28c);
        FUN_00a963e0(auStack_164);
        if (param_1[0x1d9] != 0) {
          FUN_008e5720(2);
        }
        (**(code **)(*param_1 + 0x314))();
        iVar1 = FUN_00a8cab0();
        if ((iVar1 != 0) || (*(char *)((int)param_1 + 0xdb5) != '\0')) {
          *(undefined1 *)((int)param_1 + 0xdbe) = 0;
          FUN_00a8caf0(0,0,0,0);
        }
        FUN_005f9fd0();
        param_1[0x4e4] = 0;
        DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
        FUN_00a7c950();
      }
    }
  }
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  return;
}

// 005FF030  Pl2040::vf4C  size=689  [class]
void __fastcall Pl2040::vf4C(int *param_1)

{
  int iVar1;
  
  Behavior::vf4C();
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0) {
    FUN_005f6990();
  }
  else {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 1) {
      FUN_005fa560();
    }
    else {
      iVar1 = FUN_00a8cab0();
      if (iVar1 == 2) {
        FUN_005fa730();
      }
      else {
        iVar1 = FUN_00a8cab0();
        if (iVar1 == 3) {
          FUN_005fa960();
        }
        else {
          iVar1 = FUN_00a8cab0();
          if (iVar1 == 4) {
            FUN_005fd0a0();
          }
          else {
            iVar1 = FUN_00a8cab0();
            if (iVar1 == 5) {
              FUN_005f9900();
            }
            else {
              iVar1 = FUN_00a8cab0();
              if (iVar1 == 6) {
                FUN_005f6d80();
              }
              else {
                iVar1 = FUN_00a8cab0();
                if (iVar1 == 0xb) {
                  FUN_005faba0();
                }
                else {
                  iVar1 = FUN_00a8cab0();
                  if (iVar1 == 0xd) {
                    FUN_005f8d20();
                  }
                  else {
                    iVar1 = FUN_00a8cab0();
                    if (iVar1 == 10) {
                      FUN_005f7b60();
                    }
                    else {
                      iVar1 = FUN_00a8cab0();
                      if (iVar1 == 0x11) {
                        FUN_005f8070();
                      }
                      else {
                        iVar1 = FUN_00a8cab0();
                        if (iVar1 == 0x12) {
                          FUN_005f81a0();
                        }
                        else {
                          iVar1 = FUN_00a8cab0();
                          if (iVar1 == 0xe) {
                            FUN_005fedd0();
                          }
                          else {
                            iVar1 = FUN_00a8cab0();
                            if (iVar1 == 7) {
                              FUN_005f6fa0();
                            }
                            else {
                              iVar1 = FUN_00a8cab0();
                              if (iVar1 == 0x19) {
                                FUN_005fb0e0();
                              }
                              else {
                                iVar1 = FUN_00a8cab0();
                                if (iVar1 == 8) {
                                  FUN_005f7300();
                                }
                                else {
                                  iVar1 = FUN_00a8cab0();
                                  if (iVar1 == 0x17) {
                                    FUN_005f91c0();
                                  }
                                  else {
                                    iVar1 = FUN_00a8cab0();
                                    if (iVar1 == 0x18) {
                                      FUN_005f9400();
                                    }
                                    else {
                                      iVar1 = FUN_00a8cab0();
                                      if (iVar1 == 0x13) {
                                        FUN_005f8360();
                                      }
                                      else {
                                        iVar1 = FUN_00a8cab0();
                                        if (iVar1 == 0x14) {
                                          FUN_005f8750();
                                        }
                                        else {
                                          iVar1 = FUN_00a8cab0();
                                          if (iVar1 == 0x15) {
                                            FUN_005f8ba0();
                                          }
                                          else {
                                            iVar1 = FUN_00a8cab0();
                                            if (iVar1 == 9) {
                                              FUN_005f77b0();
                                            }
                                            else {
                                              iVar1 = FUN_00a8cab0();
                                              if (iVar1 == 0x16) {
                                                FUN_005f6a90();
                                              }
                                              else {
                                                iVar1 = FUN_00a8cab0();
                                                if (iVar1 == 0x1a) {
                                                  FUN_005f85f0();
                                                }
                                                else {
                                                  iVar1 = FUN_00a8cab0();
                                                  if (iVar1 == 0x1c) {
                                                    FUN_005fd430();
                                                  }
                                                  else {
                                                    iVar1 = FUN_00a8cab0();
                                                    if (iVar1 == 0x1b) {
                                                      FUN_005f5190();
                                                    }
                                                    else {
                                                      iVar1 = FUN_00a8cab0();
                                                      if (iVar1 == 0x1d) {
                                                        FUN_005fd620();
                                                      }
                                                      else {
                                                        iVar1 = FUN_00a8cab0();
                                                        if (iVar1 == 0x1e) {
                                                          FUN_005f9a80();
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    if (param_1[0x1d9] != 0) {
      FUN_008e0d30(param_1 + 0x4e0);
    }
    (**(code **)(*param_1 + 100))();
    if ((((param_1[0x449] == 1) || (param_1[0x128] == 1)) || (param_1[0x449] == 2)) ||
       (param_1[0x128] == 2)) {
                    /* WARNING: Could not recover jumptable at 0x005ff2dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x31c))();
      return;
    }
  }
  return;
}

// 00AAB760  Pl2040::vf04  size=6  [class]
undefined * Pl2040::vf04(void)

{
  return &DAT_01b35420;
}

// 00AB6570  Pl2040::vf00  size=30  [class]
undefined4 __thiscall Pl2040::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_32();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

