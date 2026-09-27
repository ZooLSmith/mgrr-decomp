// src/misc/esp52.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD5A0..00F38780, 3 functions

#include "mgrr.h"
#include "esp52.h"

// 00ECD5A0  esp52::esp52  size=18  [class]
undefined4 * __fastcall esp52::esp52(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0BE0  esp52::vf00  size=30  [class]
undefined4 __thiscall esp52::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F38780  esp52::vf04  size=5  [class]
/* WARNING: Removing unreachable block (ram,0x00f2d2ca) */
/* WARNING: Removing unreachable block (ram,0x00f2d32b) */

void __thiscall esp52::vf04(int param_1,undefined4 *param_2,float *param_3,undefined4 param_4)

{
  float *pfVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auStack_74 [8];
  float fStack_6c;
  float *pfStack_68;
  uint uStack_64;
  undefined1 auStack_60 [48];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_14;
  
  uStack_14 = DAT_018e8764 ^ (uint)auStack_74;
  pfStack_68 = param_3;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x54) = *param_2;
    *(undefined4 *)(param_1 + 0x58) = param_2[1];
    *(undefined4 *)(param_1 + 0x5c) = param_2[2];
  }
  if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = **(uint **)(param_1 + 0x58);
    if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
      uVar5 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | *(uint *)(uVar6 + 4);
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | *(uint *)(uVar6 + 8);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(uVar6 + 0x20);
  uStack_64 = uVar6;
  iVar3 = FUN_00efcbb0();
  if (iVar3 != 0) {
    FUN_00ddbbd0(param_4);
    *(uint *)(param_1 + 0x120) = (uint)*(ushort *)(uVar6 + 2);
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0x10), puVar4 != (uint *)0x0)) {
      uVar6 = *puVar4;
      if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
        uVar5 = FUN_00f59ed0(1);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
      if (uVar6 != 0) {
        FUN_00ede4f0(uVar6);
        if ((*(uint *)(param_1 + 0x38) & 0x20000) != 0) {
          uVar6 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
          *(uint *)(param_1 + 0x114) = uVar6;
          fStack_6c = 1.0 - (float)(uVar6 >> 8) * 5.960465e-08 * 2.0;
          if (0.0 <= fStack_6c) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfff7ffff;
          }
          else {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80000;
          }
        }
        if ((*(byte *)(param_1 + 0x3a) & 1) != 0) {
          uVar6 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
          *(uint *)(param_1 + 0x114) = uVar6;
          fStack_6c = 1.0 - (float)(uVar6 >> 8) * 5.960465e-08 * 2.0;
          if (0.0 <= fStack_6c) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffbffff;
          }
          else {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x40000;
          }
        }
        if ((*(byte *)(param_1 + 0x3b) & 1) != 0) {
          *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x200000;
        }
        if ((*(uint *)(param_1 + 0x38) & 0x4000) != 0) {
          if (*(int *)(param_1 + 0x50) == 0) {
            FUN_009cca90(param_1,&DAT_016da004);
            __security_check_cookie(uStack_14 ^ (uint)auStack_74);
            return;
          }
          iVar3 = FUN_00a7c990(&DAT_01ee11f4);
          if (((iVar3 == 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
             (iVar3 = FUN_00a7c800(), iVar3 != 0)) {
            iVar3 = FUN_00a12290(0xffffffff);
          }
          else {
            iVar3 = 0;
          }
          *(int *)(param_1 + 0x50) = iVar3;
          if (iVar3 == 0) {
            FUN_009cca90(param_1,&DAT_016da190);
            __security_check_cookie(uStack_14 ^ (uint)auStack_74);
            return;
          }
          sVar2 = *(short *)(param_1 + 0x4e);
          if (sVar2 < 0) {
            FUN_009cca90(param_1,&DAT_016da1d4,(int)sVar2);
            __security_check_cookie(uStack_14 ^ (uint)auStack_74);
            return;
          }
          iVar3 = FUN_00a7c990(&DAT_01ee11f4);
          if (((iVar3 != 0) || (iVar3 = FUN_00a81330(), iVar3 == 0)) ||
             ((iVar3 = FUN_00a7c800(), iVar3 == 0 || (iVar3 = FUN_00a12290((int)sVar2), iVar3 == 0))
             )) {
            FUN_009cca90(param_1,&DAT_016da248,(int)*(short *)(param_1 + 0x4e));
            __security_check_cookie(uStack_14 ^ (uint)auStack_74);
            return;
          }
          D3DXMatrixInverse(auStack_60,0,*(int *)(param_1 + 0x50) + 0x10);
          D3DXMatrixMultiply(&fStack_6c,iVar3 + 0x10,&fStack_6c);
          pfVar1 = (float *)(param_1 + 0x180);
          D3DXVec3TransformNormal(pfVar1,pfVar1,&stack0xffffff88);
          *pfVar1 = fStack_30 + *pfVar1;
          *(float *)(param_1 + 0x184) = fStack_2c + *(float *)(param_1 + 0x184);
          *(float *)(param_1 + 0x188) = fStack_28 + *(float *)(param_1 + 0x188);
        }
        pfVar1 = pfStack_68;
        if (((*(short *)(param_1 + 0x4e) != -3) || ((*(uint *)(param_1 + 0x38) & 0x200) != 0)) &&
           (((*(uint *)(param_1 + 0x38) & 0x8000) == 0 &&
            (FUN_00edc5c0(pfStack_68), *(short *)(param_1 + 0x4e) == -3)))) {
          pfStack_68 = (float *)*pfVar1;
          *(float *)(param_1 + 0x1f0) = (float)pfStack_68 * *(float *)(param_1 + 0x1f0);
          *(float *)(param_1 + 500) = (float)pfStack_68 * *(float *)(param_1 + 500);
        }
        iVar3 = FUN_009d4a40();
        if ((iVar3 == 0) || (iVar3 = FUN_00f26850(iVar3), iVar3 != 0)) {
          if (*(byte *)(uStack_64 + 0x1d) < *(byte *)(uStack_64 + 0x1c)) {
            FUN_009cca90(param_1,&DAT_016da2b8);
            __security_check_cookie(uStack_14 ^ (uint)auStack_74);
            return;
          }
          *(undefined4 *)(param_1 + 900) = 0;
          *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x4000000;
          FUN_00efd190(param_1 + 0x3a0);
          if (*(int *)(*(int *)(param_1 + 0x28) + 0x1ecc) == 0) {
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40;
          }
          if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x400;
          }
          iVar3 = FUN_009cdd70(*(undefined2 *)(param_1 + 0x4c));
          if (iVar3 == 0) {
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x80000000;
          }
          iVar3 = FUN_009cde30(*(undefined2 *)(param_1 + 0x4c));
          if (iVar3 == 0) {
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x40000000;
          }
          iVar3 = FUN_009ce400(param_1);
          if (iVar3 != 0) {
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x100000;
          }
          __security_check_cookie(uStack_14 ^ (uint)auStack_74);
          return;
        }
        goto LAB_00f2d26d;
      }
    }
    FUN_009cca90(param_1,&DAT_016da120);
  }
LAB_00f2d26d:
  __security_check_cookie(uStack_14 ^ (uint)auStack_74);
  return;
}

