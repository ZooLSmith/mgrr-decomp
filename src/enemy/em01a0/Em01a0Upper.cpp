// src/enemy/em01a0/Em01a0Upper.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051A710..00AB7430, 31 functions

#include "types.h"

// 0051A710  Em01a0Upper::vf44  size=16  [class]
void Em01a0Upper::vf44(void)

{
  BehaviorEmBase::vf44();
  FUN_00a9d8a0();
  return;
}

// 0051A720  Em01a0Upper::vf50  size=21  [class]
void __fastcall Em01a0Upper::vf50(int *param_1)

{
  BehaviorEmBase::vf50();
                    /* WARNING: Could not recover jumptable at 0x0051a733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))();
  return;
}

// 0051A750  FUN_0051a750  size=91  [between]
void __fastcall FUN_0051a750(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar7 = 0x3f800000;
    uVar6 = 0xbf800000;
    uVar5 = 0;
    uVar4 = 0x3f800000;
    uVar3 = 0x3e2aaaab;
    uVar2 = 0;
    uVar1 = FUN_00a81330(0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00aa47a0(4,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_008e3c10();
    return;
  }
  return;
}

// 0051A7C0  FUN_0051a7c0  size=139  [between]
void __fastcall FUN_0051a7c0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_1[0x187] == 0) {
    uVar8 = 0x3f800000;
    uVar7 = 0xbf800000;
    uVar6 = 0x8000000;
    uVar5 = 0x3f800000;
    uVar4 = 0x3e2aaaab;
    uVar3 = 0;
    uVar1 = FUN_00a81330(0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa47a0(param_1[0x370],uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0051a849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0051A860  FUN_0051a860  size=303  [between]
void __fastcall FUN_0051a860(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_1[0x187] == 0) {
    uVar8 = 0x3f800000;
    uVar7 = 0xbf800000;
    uVar6 = 0;
    uVar5 = 0x3f800000;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = FUN_00a81330(0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00aa47a0(param_1[0x370],uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x248] = 0x42900000;
    param_1[0x376] = 0;
    param_1[0x377] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0051a932;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (((fVar1 - (float)param_1[0x244] < 0.0) || (param_1[0x376] != 0)) || (param_1[0x377] != 0)) {
    FUN_00a8caf0(3,0,0,0);
  }
LAB_0051a932:
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e567750,0);
  FUN_00a8de10((float)param_1[0x244] * 0.4,param_1[0x25],0);
  return;
}

// 0051A990  FUN_0051a990  size=205  [between]
void __fastcall FUN_0051a990(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1[0x187] == 0) {
    uVar7 = 0x3f800000;
    uVar6 = 0xbf800000;
    uVar5 = 0;
    uVar4 = 0x3f800000;
    uVar3 = 0x3e2aaaab;
    uVar2 = 0;
    uVar1 = FUN_00a81330(0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00aa47a0(0x67,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0051aa00;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0051aa00:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  FUN_00a8de10((float)param_1[0x244] * 0.05,param_1[0x25],0);
  return;
}

// 0051AA70  FUN_0051aa70  size=312  [between]
void __fastcall FUN_0051aa70(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (param_1[0x187] == 0) {
    uVar9 = 0x3f800000;
    uVar8 = 0xbf800000;
    uVar7 = 0;
    uVar6 = 0x3f800000;
    uVar5 = 0;
    uVar4 = 0;
    uVar2 = FUN_00a81330(0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00aa47a0(param_1[0x370],uVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x248] = 0x42900000;
    param_1[0x376] = 0;
    param_1[0x377] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0051ab42;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (((fVar1 - (float)param_1[0x244] < 0.0) || (param_1[0x376] != 0)) || (param_1[0x377] != 0)) {
    FUN_00a8caf0(6,0,0,0);
  }
LAB_0051ab42:
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e567750,0);
  fVar3 = (float10)FUN_00ddba30(param_1[0x25]);
  FUN_00a8de10((float)param_1[0x244] * 0.6,(float)fVar3,0);
  return;
}

// 0051ABB0  FUN_0051abb0  size=205  [between]
void __fastcall FUN_0051abb0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1[0x187] == 0) {
    uVar7 = 0x3f800000;
    uVar6 = 0xbf800000;
    uVar5 = 0;
    uVar4 = 0x3f800000;
    uVar3 = 0x3e2aaaab;
    uVar2 = 0;
    uVar1 = FUN_00a81330(0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00aa47a0(0x75,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0051ac20;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0051ac20:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  FUN_00a8de10((float)param_1[0x244] * 0.05,param_1[0x25],0);
  return;
}

// 0051AC80  FUN_0051ac80  size=49  [between]
void __fastcall FUN_0051ac80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(10);
  if ((iVar1 != 0) && ((*(int *)(param_1 + 0xdd8) != 0 || (*(int *)(param_1 + 0xddc) != 0)))) {
    FUN_00a8caf0(10,0,0,0);
  }
  return;
}

// 0051ACE0  FUN_0051ace0  size=25  [between]
void __fastcall FUN_0051ace0(int *param_1)

{
  (**(code **)(*param_1 + 0x34c))();
  FUN_008e3c10();
  return;
}

// 0051AD00  Em01a0Upper::vf34C  size=35  [class]
void Em01a0Upper::vf34C(void)

{
  FUN_00a8d280();
  FUN_00a8caf0(0,0,0,0);
  FUN_008e3c10();
  return;
}

// 0051AD40  Em01a0Upper::vf1A4  size=32  [class]
void __thiscall Em01a0Upper::vf1A4(int param_1,undefined4 param_2,byte param_3)

{
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xdd8) = 1;
  }
  if ((param_3 & 0xe) != 0) {
    *(undefined4 *)(param_1 + 0xddc) = 1;
  }
  return;
}

// 0051DC00  Em01a0Upper::vf40  size=511  [class]
undefined4 __fastcall Em01a0Upper::vf40(int *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = BehaviorEmBase::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(8);
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
  uVar3 = FUN_00a8d2a0();
  puVar4 = (undefined4 *)FUN_009f8b60();
  iVar2 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x380) = 0;
    FUN_00d77c50(param_1[0x13c],0);
    *(undefined4 *)(iVar2 + 0x594) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x590) = 0x3ecccccd;
    FUN_00d771d0(0xb);
    FUN_00a93a00(iVar2,uVar3);
    FUN_00d7b0f0();
    FUN_00d7b890();
    uVar3 = 2;
    FUN_00a92fb0(2);
    FUN_00e08640(uVar3);
    if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
      param_1[0xd9] = param_1[0xd9] | 0x400000;
      *(undefined4 *)param_1[0xdc] = 0;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 4) = 1;
      *(undefined4 *)(param_1[0xdc] + 8) = 1;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 0xc) = 2;
    }
    local_18 = 0x3f666666;
    local_14 = 0x3f99999a;
    local_10 = 0x3f8ccccd;
    local_c = 0x3e4ccccd;
    local_8 = 0x40400000;
    local_4 = 0x40000000;
    FUN_00a8e4d0(&local_c,&local_18);
    param_1[0xd9] = param_1[0xd9] & 0xfffffffd;
    iVar5 = 0;
    iVar2 = 0;
    if (0 < (short)param_1[0xc9]) {
      do {
        puVar1 = (uint *)(param_1[200] + 0x38 + iVar5);
        *puVar1 = *puVar1 & 0xfffffffe;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar2 < (short)param_1[0xc9]);
    }
    param_1[0x371] = 1;
    param_1[0x372] = 1;
    param_1[0x373] = 1;
    param_1[0x374] = 1;
    iVar2 = FUN_008ec660(param_1,0x3ecccccd,0x3e19999a,0x41a00000,0x41a00000,0x78,7,0);
    param_1[0x1d9] = iVar2;
    FUN_008e5610(0x20);
    FUN_008e1c70();
    FUN_008e3c10();
    (**(code **)(*param_1 + 0x318))();
    return 1;
  }
  return 0;
}

// 0051DE00  FUN_0051de00  size=52  [between]
void __fastcall FUN_0051de00(int param_1)

{
  if ((*(float *)(param_1 + 0xa8c) < 4.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
    FUN_00a8caf0(4,0,0,0);
  }
  return;
}

// 0051DE40  FUN_0051de40  size=78  [between]
void __fastcall FUN_0051de40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((((iVar1 != 0) && (*(float *)(param_1 + 0xa8c) < 25.0)) &&
      (*(float *)(param_1 + 0xaa0) < 1.0471976)) && (0 < *(int *)(param_1 + 0x940))) {
    FUN_00a8caf0(4,2,0,0);
  }
  return;
}

// 0051DE90  FUN_0051de90  size=52  [between]
void __fastcall FUN_0051de90(int param_1)

{
  if ((*(float *)(param_1 + 0xa8c) < 4.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
    FUN_00a8caf0(7,0,0,0);
  }
  return;
}

// 0051DED0  FUN_0051ded0  size=78  [between]
void __fastcall FUN_0051ded0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((((iVar1 != 0) && (*(float *)(param_1 + 0xa8c) < 25.0)) &&
      (*(float *)(param_1 + 0xaa0) < 1.0471976)) && (0 < *(int *)(param_1 + 0x940))) {
    FUN_00a8caf0(7,2,0,0);
  }
  return;
}

// 0051DF20  FUN_0051df20  size=80  [between]
void __fastcall FUN_0051df20(int param_1)

{
  float fVar1;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (*(float *)(param_1 + 0xa8c) < 25.0)) &&
      (*(float *)(param_1 + 0xaa0) < 1.0471976)) &&
     (fVar1 = *(float *)(param_1 + 0x920), !NAN(fVar1) && 10.0 < fVar1 != (fVar1 == 10.0))) {
    FUN_00a8caf0(9,0,0,0);
  }
  return;
}

// 0051DF70  FUN_0051df70  size=205  [between]
void FUN_0051df70(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a92f90();
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x94) & 1) != 0)) {
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffff7;
    }
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xffffffef;
    }
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xffffffdf;
    }
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xffffffbf;
    }
    if (param_1 != 0) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 8;
      }
    }
    if (param_2 != 0) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 0x10;
      }
    }
    if (param_3 != 0) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 0x20;
      }
    }
    if (param_4 != 0) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 0x40;
      }
    }
  }
  return;
}

// 0051E060  Em01a0Upper::vf360  size=106  [class]
void __fastcall Em01a0Upper::vf360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00e00900();
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar3 = 1;
      uVar2 = FUN_00a81330(1);
      FUN_00e03080(uVar2,uVar3);
      uVar3 = 2;
      uVar2 = FUN_00a81330(2);
      FUN_00e03080(uVar2,uVar3);
    }
  }
  return;
}

// 0052CA10  Em01a0Upper::getAttackInfo  size=65  [class]
undefined4 __thiscall Em01a0Upper::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint unaff_EBP;
  int iVar6;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7bd48);
  if ((iVar2 != 0) && (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 != 0)) {
    puVar1 = *(uint **)(iVar2 + 8);
    iVar6 = 0;
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar6 = FUN_00a7c8a0();
    }
    puVar1[5] = *(uint *)(iVar6 + 0x4f0);
    puVar1[5] = *(uint *)(param_1 + 0x4f0);
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    uVar4 = FUN_00ac8520(*param_2);
    (**(code **)(**(int **)(iVar6 + 0x754) + 0x10))(*param_2);
    (**(code **)(**(int **)(iVar6 + 0x754) + 0x20))(*param_2);
    uVar5 = (**(code **)(**(int **)(iVar6 + 0x754) + 0x18))(*param_2);
    puVar1[3] = unaff_EBP;
    puVar1[2] = uVar5;
    puVar1[1] = uVar4;
    *(undefined1 *)(puVar1 + 4) = uStack_8;
    *puVar1 = (uint)*param_2;
    *(undefined2 *)(puVar1 + 0x21) = 0x5300;
    switch(*param_2) {
    case 4:
      *puVar1 = 0x12e;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 6:
      *puVar1 = 0x130;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      return unaff_EBX;
    case 8:
      *puVar1 = 0x131;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      return unaff_EBX;
    case 10:
      *puVar1 = 0x132;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0xc:
      *puVar1 = 0x130;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x800000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      return unaff_EBX;
    case 0xe:
      *puVar1 = 0x131;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      return unaff_EBX;
    case 0x10:
      *puVar1 = 0x133;
      return unaff_EBX;
    case 0x12:
      *puVar1 = 0x134;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      return unaff_EBX;
    case 0x14:
      *puVar1 = 0x135;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x24] = puVar1[0x24] | 0x800000;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0x16:
      *puVar1 = 0x136;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0x18:
      *puVar1 = 0x137;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0x1a:
      *puVar1 = 0x138;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      return unaff_EBX;
    case 0x1c:
      *puVar1 = 0x139;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      puVar1[0x24] = puVar1[0x24] | 0x1000000;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0x1e:
      *puVar1 = 0x13a;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      puVar1[0x24] = puVar1[0x24] | 0x100000;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0x20:
      *puVar1 = 0x13b;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      puVar1[0x24] = puVar1[0x24] | 0x1000000;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0x22:
      *puVar1 = 0x13c;
      puVar1[0x24] = puVar1[0x24] | 0x1000000;
    }
    return unaff_EBX;
  }
  FUN_00dd5650(&DAT_01640ea0);
  return 0;
}

// 00537090  FUN_00537090  size=438  [callgraph]
void __fastcall FUN_00537090(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined1 auStack_30 [4];
  float fStack_2c;
  float local_28;
  float fStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      local_28 = *(float *)(iVar1 + 0x4f0);
      *(undefined4 *)(iVar1 + 0xdc0) = 99;
      *(undefined4 *)(iVar1 + 0xdc4) = 0;
      *(undefined4 *)(iVar1 + 0xdcc) = 0;
      *(undefined4 *)(iVar1 + 0xdd0) = 0;
      *(undefined4 *)(iVar1 + 0xdc8) = 1;
      FUN_0051df70(0,1,0,0);
      FUN_00a8d280();
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        iVar2 = FUN_00a7c8a0();
        if (iVar2 != 0) {
          uVar3 = FUN_009f8b40();
          FUN_009f8ae0(uVar3);
        }
      }
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      fStack_2c = *(float *)(param_1 + 0x40) + fStack_2c;
      local_28 = *(float *)(param_1 + 0x44) + local_28;
      fStack_24 = *(float *)(param_1 + 0x48) + fStack_24;
      *(float *)(iVar1 + 0x50) = fStack_2c;
      *(float *)(iVar1 + 0x54) = local_28;
      *(float *)(iVar1 + 0x58) = fStack_24;
      *(undefined4 *)(iVar1 + 0x5c) = local_20;
      fVar5 = (float10)FUN_00ddba30(*(undefined4 *)(param_1 + 0x94));
      *(float *)(iVar1 + 0x94) = (float)fVar5;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      FUN_008e4580(param_1 + 0x50,1);
      FUN_0052df20();
      puVar4 = &DAT_0188131c;
      do {
        iVar1 = FUN_00a81330();
        if (iVar1 != 0) {
          iVar1 = FUN_00a7c8a0();
          if (iVar1 != 0) {
            FUN_00a8caf0(2,0,0,0);
            FUN_00529450(7);
            uVar3 = FUN_00a7c7f0();
            FUN_00a7c940(uVar3);
            FUN_00a7c960(auStack_30);
            if (*(int *)(iVar1 + 0xa64) != 0) {
              *(undefined4 *)(iVar1 + 0xa68) = 1;
            }
          }
        }
        puVar4 = puVar4 + 1;
      } while ((int)puVar4 < 0x1881340);
    }
  }
  return;
}

// 00537250  FUN_00537250  size=406  [callgraph]
void __fastcall FUN_00537250(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x1010)) {
  case 0:
    *(undefined4 *)(param_1 + 0x1010) = 1;
    FUN_00aa4080(0xc6,3,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
  case 1:
    if (*(int *)(param_1 + 0x100c) != 0) {
      *(int *)(param_1 + 0x1010) = *(int *)(param_1 + 0x1010) + 1;
      return;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x1010) = 3;
    FUN_00aa4080(0xc3,3,0,0x3f800000,0x8040200,0xbf800000,0x3f800000);
  case 3:
    iVar2 = FUN_00a94ce0(3);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x1010) = *(int *)(param_1 + 0x1010) + 1;
      param_1 = param_1 + 0x1020;
      uVar3 = 3;
      uVar1 = FUN_00a81330(3,param_1);
      FUN_00534090(uVar1,uVar3,param_1);
      return;
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x1010) = 5;
    FUN_00aa4080(0xc4,3,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
  case 5:
    if (*(int *)(param_1 + 0x100c) == 0) {
      *(int *)(param_1 + 0x1010) = *(int *)(param_1 + 0x1010) + 1;
      return;
    }
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x1010) = 7;
    FUN_00aa4080(0xc5,3,0,0x3f800000,0x8040200,0xbf800000,0x3f800000);
    (**(code **)(*(int *)(param_1 + 0x1020) + 8))(0x42700000,0,0);
  case 7:
    iVar2 = FUN_00a94ce0(3);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1010) = 0;
    }
  }
  return;
}

// 00537410  FUN_00537410  size=125  [callgraph]
void FUN_00537410(void)

{
  int iVar1;
  int local_164;
  undefined1 local_160 [348];
  
  local_164 = 0x15;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_004039a0(0,iVar1,0);
        if (iVar1 + 0xba0 != 0) {
          FUN_00dffb20(iVar1 + 0xba0);
        }
        FUN_00a8c8b0(*(undefined4 *)(iVar1 + 0x4b0),local_160);
      }
    }
    local_164 = local_164 + -1;
  } while (local_164 != 0);
  return;
}

// 00537490  FUN_00537490  size=36  [callgraph]
void FUN_00537490(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00534290();
      return;
    }
  }
  return;
}

// 005374C0  FUN_005374c0  size=36  [callgraph]
void FUN_005374c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00534290();
      return;
    }
  }
  return;
}

// 005374F0  Em01a0Upper::vf32C  size=655  [class]
undefined4 __fastcall Em01a0Upper::vf32C(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  LPCRITICAL_SECTION p_Stack_194;
  undefined4 local_18c;
  LPCRITICAL_SECTION local_188;
  int local_184;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  int local_160 [87];
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  iVar2 = FUN_00a8ef10();
  if (iVar2 == 0) {
    local_188 = (LPCRITICAL_SECTION)(param_1 + 0x280);
    if (param_1[0x286] != 0) {
      EnterCriticalSection(local_188);
    }
    local_18c = 0;
    iVar2 = param_1[0x19f];
    iVar5 = param_1[0x1a1] * 0x150 + iVar2;
    FUN_00445db0();
    iVar3 = -1;
    local_184 = 0;
    if (iVar2 != iVar5) {
      do {
        if (iVar3 < *(int *)(iVar2 + 4)) {
          local_184 = 1;
          FUN_00448f50(iVar2);
          iVar3 = *(int *)(iVar2 + 4);
        }
        iVar2 = iVar2 + 0x150;
      } while (iVar2 != iVar5);
      if (((((local_184 != 0) && (local_160[0] != 0)) && (local_160[0] != 1)) &&
          ((local_160[0] != 2 && (local_160[0] != 0x1b0)))) && (local_160[0] != 0x147)) {
        iVar2 = FUN_00a81330();
        uVar4 = local_18c;
        if (iVar2 != 0) {
          uVar4 = FUN_00a7c8a0();
        }
        if (local_160[0] == 0x4f) {
          (**(code **)(*param_1 + 0x198))(uVar4,local_160,1);
          sVar1 = FUN_00dde2d0(0xfffffff6,10);
          fStack_17c = (float)(int)sVar1;
          sVar1 = FUN_00dde2d0(0,5);
          fStack_178 = (float)(int)sVar1 + 10.0;
          sVar1 = FUN_00dde2d0(0xfffffff6,10);
          fStack_174 = (float)(int)sVar1;
          local_18c = 0;
          local_188 = (LPCRITICAL_SECTION)0x41200000;
          local_184 = 0x41a00000;
          iVar2 = FUN_00a81330();
          if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
            if (param_1[0x373] != 0) {
              FUN_0052b620(&fStack_17c,&local_18c);
              iVar2 = FUN_00a81330();
              if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
                FUN_00eaa6e0(0x41200000,0);
              }
            }
            if (param_1[0x374] != 0) {
              FUN_0052b790(&fStack_17c,&local_18c);
              iVar2 = FUN_00a81330();
              if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
                FUN_00eaa6e0(0x41200000,0);
              }
            }
            if (param_1[0x372] != 0) {
              FUN_0052b9c0(&fStack_17c,&local_18c);
            }
          }
          FUN_00a8caf0(0xb,0,0,0);
          if (p_Stack_194[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            LeaveCriticalSection(p_Stack_194);
          }
          return 1;
        }
      }
    }
    if (local_188[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(local_188);
    }
  }
  return 0;
}

// 00537780  Em01a0Upper::vf4C  size=222  [class]
void __fastcall Em01a0Upper::vf4C(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  FUN_00a92fb0();
  fVar2 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar2;
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00a8e880(*(int *)(param_1 + 0xa84) + 0x40);
  }
  BehaviorEmBase::vf4C();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    switch(*(undefined4 *)(param_1 + 0x618)) {
    case 3:
      FUN_0051de00();
      break;
    case 4:
      FUN_0051de40();
      break;
    case 6:
      FUN_0051de90();
      break;
    case 7:
      FUN_0051ded0();
      break;
    case 8:
      FUN_0051df20();
      break;
    case 9:
      FUN_0051ac80();
    }
    FUN_00534100();
  }
  if (*(int *)(param_1 + 0x4b0) == 0x201b6) {
    iVar1 = FUN_00a12210(0);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x50) = 0;
      *(undefined4 *)(iVar1 + 0x54) = 0xbeb811b2;
      *(undefined4 *)(iVar1 + 0x58) = 0;
    }
    iVar1 = FUN_00a12210(0xfff);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x50) = 0;
      *(undefined4 *)(iVar1 + 0x54) = 0xbeb811b2;
      *(undefined4 *)(iVar1 + 0x58) = 0;
    }
  }
  return;
}

// 00AADF90  Em01a0Upper::Em01a0Upper  size=29  [class]
undefined4 * __fastcall Em01a0Upper::Em01a0Upper(undefined4 *param_1)

{
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AADFB0  Em01a0Upper::vf04  size=6  [class]
undefined * Em01a0Upper::vf04(void)

{
  return &DAT_01b34f3c;
}

// 00AB7430  Em01a0Upper::vf00  size=30  [class]
undefined4 __thiscall Em01a0Upper::vf00(undefined4 param_1,byte param_2)

{
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

