// src/misc/esp11.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F6A00..00F38C30, 7 functions

#include "mgrr.h"
#include "esp11.h"

// 009F6A00  esp11::esp11  size=18  [class]
undefined4 * __fastcall esp11::esp11(undefined4 *param_1)

{
  ModelShaderWtrJackModule::ModelShaderWtrJackModule();
  *param_1 = vftable;
  return param_1;
}

// 009F6A70  esp11::vf00  size=43  [class]
undefined4 __thiscall esp11::vf00(undefined4 param_1,byte param_2)

{
  Spline<float>::Spline<float>();
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ED7F30  esp11::vf10  size=1  [class]
void esp11::vf10(void)

{
  return;
}

// 00EF0400  esp11::vf14  size=63  [class]
void __fastcall esp11::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x4c0) != 0) {
    uVar2 = 0x50000;
    iVar1 = param_1;
    iVar3 = param_1;
    FUN_00a7c940(param_1 + 0x4c4);
    FUN_009d5aa0(iVar1,uVar2,iVar3);
    *(undefined4 *)(param_1 + 0x4c0) = 0;
  }
  Spline<float>::Spline<float>();
  return;
}

// 00F22F80  esp11::vf08  size=477  [class]
void __fastcall esp11::vf08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined *puVar19;
  undefined4 uVar20;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar2 = FUN_00a7c930();
    iVar1 = FUN_00a7c9b0(uVar2);
    if (iVar1 == 0) {
      puVar19 = &DAT_016db310;
    }
    else {
      puVar19 = &DAT_016db2c0;
    }
    FUN_009cca90(param_1,puVar19);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return;
  }
  piVar3 = (int *)FUN_00a7c800();
  if (piVar3 == (int *)0x0) {
    FUN_009cca90(param_1,&DAT_016db330,iVar1);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return;
  }
  if (((*(byte *)(param_1 + 0x30) & 0x10) == 0) && (*(short *)(param_1 + 0x508) != 0)) {
    if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
    }
    if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffbff;
    }
    if ((*(uint *)(param_1 + 0x6c) & 0x800) != 0) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffff7ff;
    }
    if (*(short *)(param_1 + 0x508) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x504);
      uVar20 = 0;
      uVar18 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0x3f800000;
      iVar1 = (int)*(short *)(param_1 + 0x50a);
      uVar13 = 0xff;
      uVar12 = 0;
      uVar6 = *(uint *)(param_1 + 0x6c) | 0x40;
      uVar11 = *(undefined4 *)(param_1 + 0x74);
      uVar10 = *(undefined4 *)(param_1 + 0x78);
      uVar9 = 0;
      uVar8 = 0;
      uVar4 = FUN_00a81330(0,0,uVar10,uVar11,uVar6,iVar1,uVar2,0,0xff,0x3f800000,0,0,0,0,0);
      FUN_00f42780(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x510),
                   *(undefined4 *)(param_1 + 0x518),param_1 + 0x7c,uVar4,uVar8,uVar9,uVar10,uVar11,
                   uVar6,iVar1,uVar2,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar20);
    }
    *(undefined2 *)(param_1 + 0x508) = 0;
  }
  iVar1 = FUN_009d5b00(param_1);
  if (iVar1 == 0) {
    pcVar5 = *(code **)(*piVar3 + 0x20);
  }
  else {
    pcVar5 = *(code **)(*piVar3 + 0x1c);
  }
  (*pcVar5)();
  fVar7 = (float10)FUN_00fdef70();
  if (500.0 <= (float)fVar7) {
    iVar1 = FUN_009dfb70(piVar3);
    *(int *)(param_1 + 0x50c) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*piVar3 + 0x20))();
    }
  }
  piVar3[0xd9] = piVar3[0xd9] | 0x10000;
  FUN_00f15360(piVar3);
  return;
}

// 00F38B30  FUN_00f38b30  size=253  [callgraph]
undefined4 __thiscall FUN_00f38b30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00ef84d0();
  uVar4 = extraout_ECX;
  if (iVar1 != 0) {
    iVar1 = FUN_00f2d0a0();
    uVar4 = extraout_ECX_00;
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      uVar4 = extraout_ECX_01;
      if (iVar1 != 0) {
        iVar2 = FUN_00a7c800();
        uVar4 = extraout_ECX_02;
        if (iVar2 != 0) {
          iVar3 = FUN_00ef85f0();
          uVar4 = extraout_ECX_03;
          if (iVar3 != 0) {
            iVar3 = FUN_009f65d0(param_1,iVar1,param_2);
            uVar4 = extraout_ECX_04;
            if (iVar3 != 0) {
              iVar1 = FUN_009d2840(param_1,iVar1);
              uVar4 = extraout_ECX_05;
              if (iVar1 != 0) {
                if ((param_2 != 0) && (*(int *)(param_2 + 0x28) == 1)) {
                  *(undefined1 *)(iVar2 + 0x44d) = 4;
                }
                iVar1 = FUN_009d4a40();
                if (iVar1 != 0) {
                  *(undefined1 *)(iVar2 + 0x44c) = *(undefined1 *)(iVar1 + 0x2c);
                }
                iVar1 = FUN_009d49d0();
                if (iVar1 != 0) {
                  *(uint *)(iVar2 + 0x338) = (uint)*(byte *)(iVar1 + 0x17);
                }
                *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100000;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x4c0) != 0) {
    uVar5 = 0x50000;
    iVar1 = param_1;
    FUN_00a7c940(param_1 + 0x4c4);
    FUN_009d5aa0(uVar4,uVar5,iVar1);
    *(undefined4 *)(param_1 + 0x4c0) = 0;
  }
  Spline<float>::Spline<float>();
  return 0;
}

// 00F38C30  esp11::vf04  size=539  [class]
undefined4 __thiscall
esp11::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  iVar3 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar3 == 0) {
    return 0;
  }
  local_2c = -1;
  local_28 = -1;
  local_24 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 != (undefined4 *)0x0)) {
    psVar1 = (short *)*puVar4;
    if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
      uVar5 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (psVar1 != (short *)0x0) {
      switch((int)*psVar1) {
      case 0:
        *(undefined4 *)(param_1 + 0x500) = 0;
        break;
      case 1:
        *(undefined4 *)(param_1 + 0x500) = 2;
        break;
      case 2:
        *(undefined4 *)(param_1 + 0x500) = 1;
        break;
      case 3:
        *(undefined4 *)(param_1 + 0x500) = 4;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
        break;
      case 4:
        *(undefined4 *)(param_1 + 0x500) = 3;
        break;
      default:
        FUN_009cca90(param_1,&DAT_016db2a0,(int)*psVar1);
        return 0;
      }
      *(short *)(param_1 + 0x51c) = psVar1[1];
      *(int *)(param_1 + 0x518) = (int)psVar1[2];
      *(short *)(param_1 + 0x508) = (short)*(char *)((int)psVar1 + 0x13);
      *(short *)(param_1 + 0x50a) = (short)(char)psVar1[10];
      local_1c = (int)*(char *)((int)psVar1 + 0x15);
      local_4 = (int)(char)psVar1[0xb];
      local_2c = *(char *)((int)psVar1 + 0x17) + -1;
      local_28 = local_2c;
      goto LAB_00f38d9b;
    }
  }
  *(undefined4 *)(param_1 + 0x500) = 0;
  *(undefined2 *)(param_1 + 0x51c) = 0;
  *(undefined4 *)(param_1 + 0x518) = 0;
  *(undefined4 *)(param_1 + 0x508) = 0;
LAB_00f38d9b:
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x500) = 5;
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar6 = (uint *)(*(int *)(param_1 + 0x58) + 0xf0), puVar6 != (uint *)0x0)) {
    uVar2 = *puVar6;
    if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
      uVar5 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if ((uVar2 != 0) && (*(short *)(uVar2 + 0x14) == 0)) {
      local_c = 1;
    }
  }
  iVar3 = FUN_00f38b30(&local_2c);
  if ((((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
      (iVar3 = FUN_00a7c800(), iVar3 != 0)) &&
     ((*(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4, *(short *)(param_1 + 0x508) == 0
      || (iVar3 = FUN_00f0eb80(), iVar3 != 0)))) {
    return 1;
  }
  return 0;
}

