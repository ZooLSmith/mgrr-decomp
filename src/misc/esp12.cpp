// src/misc/esp12.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED0480..00F38E60, 6 functions

#include "mgrr.h"
#include "esp12.h"

// 00ED0480  esp12::esp12  size=57  [class]
undefined4 * __fastcall esp12::esp12(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = ModelShaderJackModule::vftable;
  FUN_009e6c70();
  FUN_009d2900();
  FUN_00a7c930();
  *param_1 = vftable;
  return param_1;
}

// 00ED08A0  esp12::vf00  size=54  [class]
undefined4 __thiscall esp12::vf00(undefined4 param_1,byte param_2)

{
  FUN_009de370();
  Spline<float>::Spline<float>_2();
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ED8050  esp12::addOtTransList  size=1  [class]
void esp12::addOtTransList(void)

{
  return;
}

// 00EF0440  esp12::vf14  size=63  [class]
void __fastcall esp12::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x4b0) != 0) {
    uVar2 = 0x50000;
    iVar1 = param_1;
    iVar3 = param_1;
    FUN_00a7c940(param_1 + 0x4b4);
    FUN_009d5aa0(iVar1,uVar2,iVar3);
    *(undefined4 *)(param_1 + 0x4b0) = 0;
  }
  Spline<float>::Spline<float>_2();
  return;
}

// 00F23160  esp12::vf08  size=477  [class]
void __fastcall esp12::vf08(int param_1)

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
      puVar19 = &DAT_016db478;
    }
    else {
      puVar19 = &DAT_016db428;
    }
    FUN_009cca90(param_1,puVar19);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return;
  }
  piVar3 = (int *)FUN_00a7c800();
  if (piVar3 == (int *)0x0) {
    FUN_009cca90(param_1,&DAT_016db498,iVar1);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return;
  }
  if (((*(byte *)(param_1 + 0x30) & 0x10) == 0) && (*(short *)(param_1 + 0x4f8) != 0)) {
    if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
    }
    if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffbff;
    }
    if ((*(uint *)(param_1 + 0x6c) & 0x800) != 0) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffff7ff;
    }
    if (*(short *)(param_1 + 0x4f8) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x4f4);
      uVar20 = 0;
      uVar18 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0x3f800000;
      iVar1 = (int)*(short *)(param_1 + 0x4fa);
      uVar13 = 0xff;
      uVar12 = 0;
      uVar6 = *(uint *)(param_1 + 0x6c) | 0x40;
      uVar11 = *(undefined4 *)(param_1 + 0x74);
      uVar10 = *(undefined4 *)(param_1 + 0x78);
      uVar9 = 0;
      uVar8 = 0;
      uVar4 = FUN_00a81330(0,0,uVar10,uVar11,uVar6,iVar1,uVar2,0,0xff,0x3f800000,0,0,0,0,0);
      FUN_00f42780(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x500),
                   *(undefined4 *)(param_1 + 0x508),param_1 + 0x7c,uVar4,uVar8,uVar9,uVar10,uVar11,
                   uVar6,iVar1,uVar2,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar20);
    }
    *(undefined2 *)(param_1 + 0x4f8) = 0;
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
    *(int *)(param_1 + 0x4fc) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*piVar3 + 0x20))();
    }
  }
  piVar3[0xd9] = piVar3[0xd9] | 0x10000;
  FUN_00f15f30(piVar3);
  return;
}

// 00F38E60  esp12::preTrans  size=575  [class]
undefined4 __thiscall
esp12::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
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
  
  iVar4 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar4 == 0) {
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
  bVar3 = false;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar5 != (undefined4 *)0x0)) {
    psVar1 = (short *)*puVar5;
    if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
      uVar6 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if (psVar1 != (short *)0x0) {
      switch((int)*psVar1) {
      case 0:
        *(undefined4 *)(param_1 + 0x4f0) = 0;
        break;
      case 1:
        *(undefined4 *)(param_1 + 0x4f0) = 2;
        break;
      case 2:
        *(undefined4 *)(param_1 + 0x4f0) = 1;
        break;
      case 3:
        *(undefined4 *)(param_1 + 0x4f0) = 4;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
        break;
      case 4:
        *(undefined4 *)(param_1 + 0x4f0) = 3;
        break;
      default:
        FUN_009cca90(param_1,&DAT_016db3cc,(int)*psVar1);
        return 0;
      }
      *(short *)(param_1 + 0x50c) = psVar1[1];
      *(int *)(param_1 + 0x508) = (int)psVar1[2];
      *(short *)(param_1 + 0x4f8) = (short)*(char *)((int)psVar1 + 0x13);
      *(short *)(param_1 + 0x4fa) = (short)(char)psVar1[10];
      local_1c = (int)*(char *)((int)psVar1 + 0x15);
      local_4 = (int)(char)psVar1[0xb];
      local_2c = *(char *)((int)psVar1 + 0x17) + -1;
      local_28 = local_2c;
      if (psVar1[3] != 0) {
        bVar3 = true;
      }
      goto LAB_00f38fd8;
    }
  }
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined2 *)(param_1 + 0x50c) = 0;
  *(undefined4 *)(param_1 + 0x508) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
LAB_00f38fd8:
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x4f0) = 5;
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar7 = (uint *)(*(int *)(param_1 + 0x58) + 0xf0), puVar7 != (uint *)0x0)) {
    uVar2 = *puVar7;
    if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
      uVar6 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if ((uVar2 != 0) && (*(short *)(uVar2 + 0x14) == 0)) {
      local_c = 1;
    }
  }
  iVar4 = FUN_00f38a30(&local_2c);
  if (((iVar4 != 0) && (iVar4 = FUN_00a81330(), iVar4 != 0)) && (iVar4 = FUN_00a7c800(), iVar4 != 0)
     ) {
    *(ushort *)(iVar4 + 0xa2) = *(ushort *)(iVar4 + 0xa2) | 4;
    if (bVar3) {
      *(uint *)(iVar4 + 0x364) = *(uint *)(iVar4 + 0x364) | 4;
    }
    if ((*(short *)(param_1 + 0x4f8) == 0) || (iVar4 = FUN_00f0fdb0(), iVar4 != 0)) {
      return 1;
    }
  }
  return 0;
}

