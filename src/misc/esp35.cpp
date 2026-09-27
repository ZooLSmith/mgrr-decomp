// src/misc/esp35.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD460..00F364E0, 4 functions

#include "mgrr.h"
#include "esp35.h"

// 00ECD460  esp35::esp35  size=29  [class]
undefined4 * __fastcall esp35::esp35(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00ED0A20  esp35::vf00  size=30  [class]
undefined4 __thiscall esp35::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F10F70  esp35::vf08  size=479  [class]
void __fastcall esp35::vf08(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_84 [12];
  float local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [36];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_84;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    iVar2 = FUN_00a7c800();
    if (iVar2 != 0) {
      *(float *)(param_1 + 0x458) =
           *(float *)(param_1 + 0x45c) * *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x458);
      *(float *)(param_1 + 0x45c) =
           *(float *)(param_1 + 0x474) * *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x45c);
      iVar2 = FUN_00fdbc60();
      if ((iVar2 < *(int *)(param_1 + 0x450)) && (0.0 <= *(float *)(param_1 + 0x458))) {
        FUN_00edfc20(param_1 + 0x3a0);
        FUN_00f0b530(param_1 + 0x3a0);
        iVar2 = FUN_00fdbc60();
        iVar3 = *(short *)(param_1 + 0x4e) + iVar2;
        local_78 = *(float *)(param_1 + 0x458) - (float)iVar2;
        local_74 = FUN_00a12210(iVar3);
        iVar2 = FUN_00a12210(iVar3 + 1);
        FUN_00ddcaa0(local_60,local_74 + 0x10,iVar2 + 0x10,local_78);
        local_70 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x460);
        local_6c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x464);
        pfVar1 = (float *)(param_1 + 0x180);
        local_68 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x468);
        local_64 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x46c);
        D3DXVec3TransformNormal(pfVar1,&local_70,local_60);
        *pfVar1 = *pfVar1 + fStack_3c;
        *(float *)(param_1 + 0x184) = fStack_38 + *(float *)(param_1 + 0x184);
        *(float *)(param_1 + 0x188) = *(float *)(param_1 + 0x188) + fStack_34;
        if ((*(uint *)(param_1 + 0x38) & 0x100000) != 0) {
          FID_conflict__memcpy((void *)(param_1 + 0x200),&local_6c,0x40);
          *(undefined4 *)(param_1 + 0x230) = 0;
          *(undefined4 *)(param_1 + 0x234) = 0;
          *(undefined4 *)(param_1 + 0x238) = 0;
        }
        FUN_00efece0();
        __security_check_cookie(uStack_20 ^ (uint)&stack0xffffff70);
        return;
      }
    }
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  __security_check_cookie(local_14 ^ (uint)auStack_84);
  return;
}

// 00F364E0  esp35::vf04  size=587  [class]
undefined4 __thiscall esp35::vf04(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined2 *puVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  
  iVar4 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar4 == 0) {
    return 0;
  }
  if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = **(uint **)(param_1 + 0x58);
    if ((uVar7 + 0xf & 0xfffffff0) != uVar7) {
      uVar6 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
  }
  if (*(short *)(uVar7 + 0x10) != 0) {
    FUN_009cca90(param_1,&DAT_016dc888);
    return 0;
  }
  if ((*(int *)(param_2 + 4) != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(param_2 + 4) + 0x80), puVar5 != (undefined4 *)0x0)) {
    puVar2 = (undefined2 *)*puVar5;
    if ((undefined2 *)((int)puVar2 + 0xfU & 0xfffffff0) != puVar2) {
      uVar6 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if (puVar2 != (undefined2 *)0x0) {
      *(undefined2 *)(param_1 + 0x454) = *puVar2;
    }
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar5 != (undefined4 *)0x0)) {
    pfVar3 = (float *)*puVar5;
    if ((float *)((int)pfVar3 + 0xfU & 0xfffffff0) != pfVar3) {
      uVar6 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if (pfVar3 != (float *)0x0) {
      *(float *)(param_1 + 0x45c) = *pfVar3 * 0.1;
      *(float *)(param_1 + 0x474) = pfVar3[1] * 0.01;
      *(float *)(param_1 + 0x458) = pfVar3[2];
    }
  }
  iVar4 = (int)*(short *)(param_1 + 0x454) - (int)*(short *)(param_1 + 0x4e);
  *(int *)(param_1 + 0x450) = iVar4;
  if (iVar4 < 1) {
    FUN_009cca90(param_1,&DAT_016dc8d0,(int)*(short *)(param_1 + 0x4e),
                 (int)*(short *)(param_1 + 0x454));
    return 0;
  }
  iVar4 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar4 == 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c800();
      if ((iVar4 != 0) && (sVar1 = *(short *)(param_1 + 0x454), -2 < sVar1)) {
        iVar4 = FUN_00a7c990(&DAT_01ee11f4);
        if (iVar4 == 0) {
          iVar4 = FUN_00a81330();
          if (iVar4 != 0) {
            iVar4 = FUN_00a7c800();
            if ((iVar4 != 0) && (sVar1 != -1)) {
              if (*(int *)(iVar4 + 0x330) == 0) {
                iVar4 = 0xfff;
              }
              else {
                iVar4 = FUN_00a06de0((int)sVar1);
              }
              if (iVar4 == 0xfff) {
                FUN_009cca90(param_1,&DAT_016dc774,(int)*(short *)(param_1 + 0x454));
                return 0;
              }
            }
          }
        }
        FUN_00a7c960(param_1 + 0x8c);
        *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 0x180);
        *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x184);
        *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x188);
        *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x18c);
        return 1;
      }
    }
  }
  FUN_009cca90(param_1,&DAT_016dc7a4);
  return 0;
}

