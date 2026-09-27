// src/object/ba0040/Ba0040.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AB0C50..00B786A0, 13 functions

#include "mgrr.h"
#include "Ba0040.h"

// 00AB0C50  Ba0040::Ba0040  size=18  [class]
undefined4 * __fastcall Ba0040::Ba0040(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB0C70  Ba0040::vf04  size=6  [class]
undefined * Ba0040::vf04(void)

{
  return &DAT_01be9d78;
}

// 00AB9500  Ba0040::vf00  size=43  [class]
undefined4 __thiscall Ba0040::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B77FA0  Ba0040::vf40  size=724  [class]
bool __fastcall Ba0040::vf40(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = MonThrowMoto::vf40();
  if (iVar4 == 0) {
    return false;
  }
  uVar1 = *(uint *)(param_1 + 0x4a8);
  *(undefined4 *)(param_1 + 0xb74) = 0;
  *(undefined4 *)(param_1 + 0xb78) = 0;
  *(undefined4 *)(param_1 + 0xb48) = 0;
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb44) = 0;
  if (uVar1 == 0) {
    sVar3 = FUN_00dde2a0(0,5);
    if (sVar3 != 0) {
      if (sVar3 == 1) {
        uVar2 = 0x3da3d70a;
LAB_00b78062:
        *(undefined4 *)(param_1 + 0xb30) = uVar2;
        *(undefined4 *)(param_1 + 0xb54) = 1;
        *(undefined4 *)(param_1 + 0xb3c) = 300;
        *(undefined4 *)(param_1 + 0xb34) = 0x3ecccccd;
        *(undefined4 *)(param_1 + 0xb38) = 0x42700000;
        goto LAB_00b7821a;
      }
      if (sVar3 == 2) {
        *(undefined4 *)(param_1 + 0xb54) = 1;
        *(undefined4 *)(param_1 + 0xb30) = 0x3cf5c28f;
        *(undefined4 *)(param_1 + 0xb34) = 0x3f333333;
        uVar2 = 0x42340000;
      }
      else {
        if (sVar3 == 3) {
          uVar2 = 0x3d4ccccd;
          goto LAB_00b78062;
        }
        if (sVar3 == 4) {
          *(undefined4 *)(param_1 + 0xb30) = 0x3da3d70a;
          *(undefined4 *)(param_1 + 0xb34) = 0x3f333333;
          uVar2 = 0x42340000;
          goto LAB_00b780b8;
        }
        if (sVar3 != 5) goto LAB_00b7821a;
        *(undefined4 *)(param_1 + 0xb54) = 0;
        *(undefined4 *)(param_1 + 0xb30) = 0x3d4ccccd;
        *(undefined4 *)(param_1 + 0xb34) = 0x3f666666;
        uVar2 = 0x42b40000;
      }
      *(undefined4 *)(param_1 + 0xb38) = uVar2;
LAB_00b78106:
      *(undefined4 *)(param_1 + 0xb3c) = 0x3c;
      goto LAB_00b7821a;
    }
    *(undefined4 *)(param_1 + 0xb30) = 0x3cf5c28f;
    *(undefined4 *)(param_1 + 0xb34) = 0x3f666666;
    uVar2 = 0x42b40000;
LAB_00b780b8:
    *(undefined4 *)(param_1 + 0xb38) = uVar2;
    *(undefined4 *)(param_1 + 0xb54) = 0;
  }
  else {
    if ((uVar1 & 0x10000) == 0) {
      if ((uVar1 & 0x20000) == 0) {
        if ((uVar1 & 0x40000) == 0) goto LAB_00b7814e;
        uVar2 = 0x3da3d70a;
      }
      else {
        uVar2 = 0x3d4ccccd;
      }
    }
    else {
LAB_00b7814e:
      uVar2 = 0x3cf5c28f;
    }
    *(undefined4 *)(param_1 + 0xb30) = uVar2;
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 0x20) == 0) {
        if ((uVar1 & 0x40) == 0) goto LAB_00b78185;
        uVar2 = 0x3f666666;
      }
      else {
        uVar2 = 0x3f333333;
      }
    }
    else {
LAB_00b78185:
      uVar2 = 0x3ecccccd;
    }
    *(undefined4 *)(param_1 + 0xb34) = uVar2;
    *(uint *)(param_1 + 0xb54) = (uint)((uVar1 & 1) != 0);
    if ((uVar1 & 0x100) == 0) {
      if ((uVar1 & 0x200) == 0) {
        if ((uVar1 & 0x400) == 0) goto LAB_00b781d5;
        uVar2 = 0x42b40000;
      }
      else {
        uVar2 = 0x42700000;
      }
    }
    else {
LAB_00b781d5:
      uVar2 = 0x42340000;
    }
    *(undefined4 *)(param_1 + 0xb38) = uVar2;
    if ((uVar1 & 0x1000) != 0) goto LAB_00b78106;
    if ((uVar1 & 0x2000) == 0) {
      *(uint *)(param_1 + 0xb3c) = (-(uint)((uVar1 & 0x4000) == 0) & 0xffffff10) + 300;
      goto LAB_00b7821a;
    }
  }
  *(undefined4 *)(param_1 + 0xb3c) = 0xb4;
LAB_00b7821a:
  *(undefined4 *)(param_1 + 0xb4c) = *(undefined4 *)(param_1 + 0xb30);
  *(undefined4 *)(param_1 + 0xb6c) = *(undefined4 *)(param_1 + 0xb3c);
  *(undefined4 *)(param_1 + 0xb50) = *(undefined4 *)(param_1 + 0xb34);
  *(undefined4 *)(param_1 + 0xb70) = 0;
  *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(param_1 + 0xb38);
  *(undefined4 *)(param_1 + 0xb60) = 0;
  *(undefined4 *)(param_1 + 0xb64) = 0;
  *(undefined4 *)(param_1 + 0xb68) = 0;
  iVar4 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  return iVar4 != 0;
}

// 00B78280  Ba0040::vf44  size=23  [class]
void Ba0040::vf44(void)

{
  FUN_00a9d8a0();
  FUN_00a944d0();
  BehaviorBgBase::vf44();
  return;
}

// 00B782A0  Ba0040::thunk_vf48  size=5  [class]
void __fastcall Ba0040::thunk_vf48(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [256];
  
  BehaviorDebrisActor::vf48();
  if ((((*(byte *)(param_1 + 0x4c0) & 1) != 0) && (*(int *)(param_1 + 0x884) != 0)) &&
     ((*(char *)(param_1 + 0x470) == '\0' ||
      (((*(byte *)(param_1 + 0x472) & 0x80) == 0 || (*(char *)(param_1 + 0x471) == '\0')))))) {
    FUN_0092bcd0();
    if (*(char *)(*(int *)(param_1 + 0x884) + 0x20) != '\0') {
      iVar1 = FUN_0092b680();
      if (iVar1 != 0) {
        fVar2 = (float10)FUN_00928de0();
        if ((fVar2 < (float10)(float)(undefined *)0x0 != (fVar2 == (float10)(float)(undefined *)0x0)
            ) && (*(int *)(param_1 + 0x898) != 0)) {
          if (*(int *)(param_1 + 0x89c) != 0) {
            FUN_00e5ca30(*(int *)(param_1 + 0x89c),0x40400000);
            *(undefined4 *)(param_1 + 0x89c) = 0;
          }
          FUN_009f8ea0(auStack_10c,10,*(undefined4 *)(param_1 + 0x4b0),0);
          FUN_00a90970(auStack_100,"%s_se_setobj_stop",auStack_10c);
          FUN_00e5e080(auStack_100,param_1 + 0x40,0,0xffffffff,0);
          *(undefined4 *)(param_1 + 0x898) = 0;
        }
      }
    }
  }
  return;
}

// 00B782B0  Ba0040::vf4C  size=5  [class]
void __fastcall Ba0040::vf4C(int param_1)

{
  BehaviorBgBase::vf4C();
  if ((((*(char *)(param_1 + 0x470) != '\0') && ((*(byte *)(param_1 + 0x472) & 0x80) != 0)) &&
      (*(char *)(param_1 + 0x471) != '\0')) && (*(int *)(param_1 + 0xb28) != 0)) {
    return;
  }
  Bh0064::vf64();
  return;
}

// 00B782C0  FUN_00b782c0  size=253  [between]
void __fastcall FUN_00b782c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0xb58) * 0.1;
  fVar1 = *(float *)(param_1 + 0xb5c);
  if (*(int *)(param_1 + 0xb54) == 1) {
    if (fVar2 < fVar1 != (fVar2 == fVar1)) {
      fVar1 = *(float *)(param_1 + 0xb64) + 2.0;
      *(float *)(param_1 + 0xb64) = fVar1;
      fVar3 = -(*(float *)(param_1 + 0xb58) * 0.5);
      if (fVar3 < fVar1 != (fVar3 == fVar1)) {
        *(float *)(param_1 + 0xb64) = fVar3;
      }
    }
    if ((*(float *)(param_1 + 0xb5c) <= *(float *)(param_1 + 0xb58) - fVar2) &&
       (fVar1 = *(float *)(param_1 + 0xb64) - 2.0, *(float *)(param_1 + 0xb64) = fVar1, fVar1 <= 0.0
       )) {
LAB_00b7834d:
      *(undefined4 *)(param_1 + 0xb64) = 0;
      return;
    }
  }
  else {
    if (fVar2 >= fVar1) {
      fVar1 = *(float *)(param_1 + 0xb64) - 2.0;
      *(float *)(param_1 + 0xb64) = fVar1;
      fVar3 = -(*(float *)(param_1 + 0xb58) * 0.5);
      if (fVar1 <= fVar3) {
        *(float *)(param_1 + 0xb64) = fVar3;
      }
    }
    fVar2 = *(float *)(param_1 + 0xb58) - fVar2;
    if (fVar2 < *(float *)(param_1 + 0xb5c) != (fVar2 == *(float *)(param_1 + 0xb5c))) {
      fVar1 = *(float *)(param_1 + 0xb64) + 2.0;
      *(float *)(param_1 + 0xb64) = fVar1;
      if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) goto LAB_00b7834d;
    }
  }
  return;
}

// 00B783F0  FUN_00b783f0  size=157  [between]
void __fastcall FUN_00b783f0(int param_1)

{
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [36];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  local_70[0] = 0.0;
  local_70[1] = 0.0;
  local_70[2] = *(float *)(param_1 + 0xb4c);
  local_60 = 0;
  local_5c = *(undefined4 *)(param_1 + 0xb78);
  local_58 = 0;
  local_54 = 0;
  thunk_FUN_00ddc1d0(local_50,&local_60,5);
  D3DXVec3TransformNormal(local_70,local_70,local_50);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + fStack_2c + fStack_7c;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fStack_28 + fStack_78;
  *(float *)(param_1 + 0x58) = fStack_24 + fStack_74 + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + local_70[0];
  return;
}

// 00B78490  FUN_00b78490  size=131  [between]
void __fastcall FUN_00b78490(int param_1)

{
  float fVar1;
  int extraout_ECX;
  
  if (*(int *)(param_1 + 0xb54) == 1) {
    fVar1 = *(float *)(param_1 + 0xb5c) - *(float *)(param_1 + 0xb50);
    *(float *)(param_1 + 0xb5c) = fVar1;
    if (fVar1 < *(float *)(param_1 + 0xb58) == (fVar1 == *(float *)(param_1 + 0xb58)))
    goto LAB_00b784e5;
  }
  else {
    fVar1 = *(float *)(param_1 + 0xb50) + *(float *)(param_1 + 0xb5c);
    *(float *)(param_1 + 0xb5c) = fVar1;
    if (fVar1 < *(float *)(param_1 + 0xb58)) goto LAB_00b784e5;
  }
  *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(param_1 + 0xb58);
LAB_00b784e5:
  FUN_00b782c0();
  *(float *)(extraout_ECX + 0xb78) =
       *(float *)(extraout_ECX + 0xb5c) * 0.017453292 + *(float *)(extraout_ECX + 0xb68);
  *(float *)(extraout_ECX + 0xb74) = *(float *)(extraout_ECX + 0xb64) * 0.017453292;
  return;
}

// 00B78520  FUN_00b78520  size=141  [between]
void __fastcall FUN_00b78520(int param_1)

{
  if (*(int *)(param_1 + 0xb48) == 0) {
    *(undefined4 *)(param_1 + 0xb70) = 0;
    FUN_00a9f2f0(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0xb48) = 1;
  }
  FUN_00b783f0();
  *(int *)(param_1 + 0xb70) = *(int *)(param_1 + 0xb70) + 1;
  if (*(uint *)(param_1 + 0xb6c) <= *(uint *)(param_1 + 0xb70)) {
    *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(param_1 + 0xb44);
    *(undefined4 *)(param_1 + 0xb44) = 1;
    *(undefined4 *)(param_1 + 0xb48) = 0;
  }
  return;
}

// 00B785B0  FUN_00b785b0  size=196  [between]
void __fastcall FUN_00b785b0(int param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0xb48) == 0) {
    *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_1 + 0xb78);
    if (*(int *)(param_1 + 0xb54) == 1) {
      *(float *)(param_1 + 0xb58) = *(float *)(param_1 + 0xb38) * -1.0;
    }
    *(undefined4 *)(param_1 + 0xb5c) = 0;
    FUN_00a9f2f0(&DAT_01641bdc,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0xb48) = 1;
  }
  FUN_00b78490();
  FUN_00b783f0();
  fVar1 = *(float *)(param_1 + 0xb5c);
  fVar2 = *(float *)(param_1 + 0xb58);
  if (*(int *)(param_1 + 0xb54) == 0) {
    if (fVar1 < fVar2) {
      return;
    }
  }
  else if (fVar1 < fVar2 == (fVar1 == fVar2)) {
    return;
  }
  *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(param_1 + 0xb44);
  *(undefined4 *)(param_1 + 0xb44) = 0;
  *(undefined4 *)(param_1 + 0xb48) = 0;
  return;
}

// 00B786A0  Ba0040::vf50  size=209  [class]
void __fastcall Ba0040::vf50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_a0;
  undefined4 local_9c [19];
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0xb44) == 0) {
    FUN_00b78520();
  }
  else if (*(int *)(param_1 + 0xb44) == 1) {
    FUN_00b785b0();
  }
  local_a0 = 0;
  local_9c[0] = *(undefined4 *)(param_1 + 0xb78);
  local_9c[1] = *(undefined4 *)(param_1 + 0xb74);
  local_9c[2] = 0;
  local_9c[0x11] = 0;
  local_9c[0x10] = 0;
  local_9c[0xf] = 0;
  local_9c[0xe] = 0;
  local_9c[0xc] = 0;
  local_9c[0xb] = 0;
  local_9c[10] = 0;
  local_9c[9] = 0;
  local_9c[7] = 0;
  local_9c[6] = 0;
  local_9c[5] = 0;
  local_9c[4] = 0;
  local_9c[0x12] = 0x3f800000;
  local_9c[0xd] = 0x3f800000;
  local_9c[8] = 0x3f800000;
  local_9c[3] = 0x3f800000;
  thunk_FUN_00ddc1d0(local_50,&local_a0,3);
  D3DXMatrixMultiply(local_9c + 3,local_50,local_9c + 3);
  puVar2 = local_9c;
  puVar3 = (undefined4 *)(param_1 + 0xb0);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  ExcelStage::vf50();
  return;
}

