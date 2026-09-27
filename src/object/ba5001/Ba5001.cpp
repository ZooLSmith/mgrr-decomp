// src/object/ba5001/Ba5001.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00407AB0..00AB9610, 33 functions

#include "mgrr.h"
#include "Ba5001.h"

// 00407AB0  FUN_00407ab0  size=40  [callgraph]
void FUN_00407ab0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 != 0) {
    FUN_00e36720(param_1,param_2);
  }
  return;
}

// 00407AE0  FUN_00407ae0  size=38  [callgraph]
float10 FUN_00407ae0(undefined4 param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 == 0) {
    return (float10)1;
  }
  fVar2 = (float10)FUN_00e36840(param_1);
  return fVar2;
}

// 00407B10  FUN_00407b10  size=40  [callgraph]
void FUN_00407b10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 != 0) {
    Animation::Motion::Unit::setCurrentTime(param_1,param_2);
  }
  return;
}

// 00407B40  FUN_00407b40  size=42  [callgraph]
float10 FUN_00407b40(undefined4 param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 == 0) {
    return (float10)-1.0;
  }
  fVar2 = (float10)FUN_00e36970(param_1);
  return fVar2;
}

// 00407B70  Ba5001::vf40  size=159  [class]
undefined4 __fastcall Ba5001::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MonThrowMoto::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_00a8f7b0(1);
  }
  *(undefined4 *)(param_1 + 0xb38) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xb3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb44) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xb48) = 0;
  uVar2 = FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  *(undefined4 *)(param_1 + 0xb30) = uVar2;
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  *(undefined4 *)(param_1 + 0xb50) = 0;
  return 1;
}

// 00407C10  Ba5001::thunk_vf50  size=5  [class]
void __fastcall Ba5001::thunk_vf50(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xb24) != 0) && (*(int *)(param_1 + 0xb08) == 0)) {
    *(undefined4 *)(param_1 + 0xb24) = 0;
    if (*(int *)(param_1 + 0xb20) != 0) {
      piVar1 = (int *)FUN_00d773c0();
      (**(code **)(*piVar1 + 0x10))(*(undefined4 *)(param_1 + 0xb20));
    }
    *(undefined4 *)(param_1 + 0xb20) = 0;
    if (*(int *)(param_1 + 0xb08) == 0) {
      iVar2 = FUN_009fd880();
      if ((iVar2 == 0) && (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0)) {
        *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
      }
    }
  }
  FUN_00a93170();
  BehaviorBgBase::vf50();
  return;
}

// 00407C20  Ba5001::thunk_vf44  size=5  [class]
void __fastcall Ba5001::thunk_vf44(int param_1)

{
  int iVar1;
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [256];
  
  if (*(int *)(param_1 + 0x898) != 0) {
    if (*(int *)(param_1 + 0x89c) != 0) {
      FUN_00e5ca30(*(int *)(param_1 + 0x89c),0x40400000);
      *(undefined4 *)(param_1 + 0x89c) = 0;
    }
    FUN_009f8ea0(auStack_10c,10,*(undefined4 *)(param_1 + 0x4b0),0);
    FUN_00a90970(auStack_100,"%s_se_setobj_stop",auStack_10c);
    FUN_00e5e080(auStack_100,param_1 + 0x40,0,0xffffffff,0);
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  FUN_00a934c0();
  FUN_00a933e0();
  FUN_00a93450();
  if (*(undefined4 **)(param_1 + 0x7b8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7b8))(1);
    *(undefined4 *)(param_1 + 0x7b8) = 0;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  if (*(int **)(param_1 + 0x888) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x888) + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    if (*(undefined4 **)(param_1 + 0x888) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x888))(1);
      *(undefined4 *)(param_1 + 0x888) = 0;
    }
  }
  FUN_00a8c820();
  iVar1 = *(int *)(param_1 + 0x884);
  if (iVar1 != 0) {
    cXml::cXml_6();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x884) = 0;
  }
  if (*(int *)(param_1 + 0x9f4) != 0) {
    FUN_00983fd0(param_1);
  }
  if (*(int *)(param_1 + 0xa54) != 0) {
    if (*(int *)(param_1 + 0xa58) != -1) {
      FUN_00c5ad80(*(int *)(param_1 + 0xa58));
    }
    if (*(int *)(param_1 + 0xa5c) != -1) {
      FUN_00c4d100(*(int *)(param_1 + 0xa5c));
    }
  }
  FUN_009841c0(param_1);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  Behavior::vf44();
  return;
}

// 00407C30  FUN_00407c30  size=16  [between]
void FUN_00407c30(void)

{
  BehaviorBgBase::vf4C();
  Bh0064::vf64();
  return;
}

// 00407C40  FUN_00407c40  size=13  [between]
void __thiscall FUN_00407c40(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb4c) = param_2;
  return;
}

// 00407C50  FUN_00407c50  size=67  [between]
void __fastcall FUN_00407c50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a9f2b0(&DAT_0163b7bc,0,0,0x3f800000,0,0xbf800000,*(float *)(param_1 + 0xb3c) * 0.3);
  *(undefined4 *)(param_1 + 0xb30) = uVar1;
  return;
}

// 00407CA0  FUN_00407ca0  size=67  [between]
void __fastcall FUN_00407ca0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a9f2b0(&DAT_0163bafc,0,0,0x3f800000,0,0xbf800000,*(float *)(param_1 + 0xb3c) * 0.3);
  *(undefined4 *)(param_1 + 0xb30) = uVar1;
  return;
}

// 00407CF0  FUN_00407cf0  size=152  [between]
undefined1 __fastcall FUN_00407cf0(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 uVar6;
  bool bVar7;
  
  uVar6 = 0;
  iVar2 = FUN_00a92f90();
  if ((*(int *)(param_1 + 0xb30) != -1) && (iVar2 != 0)) {
    pbVar3 = (byte *)FUN_00e366b0(*(int *)(param_1 + 0xb30));
    if (pbVar3 == (byte *)0x0) {
      return 0;
    }
    pbVar5 = &DAT_0163b604;
    pbVar4 = pbVar3;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00407d48:
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00407d4d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00407d48;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_00407d4d:
    if (iVar2 != 0) {
      pbVar4 = &DAT_0163b5f4;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00407d78:
          iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00407d7d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00407d78;
        pbVar3 = pbVar3 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_00407d7d:
      if (iVar2 != 0) {
        return 0;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}

// 00407D90  FUN_00407d90  size=13  [between]
void __thiscall FUN_00407d90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb40) = param_2;
  return;
}

// 00407EC0  FUN_00407ec0  size=275  [between]
uint __thiscall FUN_00407ec0(int param_1,float param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar2 = FUN_00a92f90();
  if ((uVar2 == 0) || (*(int *)(param_1 + 0xb30) == -1)) {
LAB_00407ecc:
    return uVar2 & 0xffffff00;
  }
  pbVar3 = (byte *)FUN_00e366b0(*(int *)(param_1 + 0xb30));
  uVar2 = 0;
  if (pbVar3 == (byte *)0x0) goto LAB_00407ecc;
  pbVar6 = &DAT_0163b7bc;
  pbVar4 = pbVar3;
  do {
    bVar1 = *pbVar4;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00407f15:
      iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00407f1a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00407f15;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00407f1a:
  if (iVar5 == 0) {
    fVar8 = (float10)FUN_00a95680(*(undefined4 *)(param_1 + 0xb30));
    fVar9 = (float10)50.0;
    fVar10 = (float10)param_2;
    iVar5 = CONCAT22(extraout_var,
                     (ushort)(fVar10 < fVar9) << 8 | (ushort)(NAN(fVar10) || NAN(fVar9)) << 10 |
                     (ushort)(fVar10 == fVar9) << 0xe);
    if (fVar10 < fVar9) {
      *(float *)(param_1 + 0xb38) = (float)(fVar8 * (float10)0.02 * fVar10);
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
  }
  else {
    pbVar4 = &DAT_0163bafc;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00407f81:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00407f86;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00407f81;
      pbVar3 = pbVar3 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00407f86:
    if (iVar5 != 0) goto LAB_00407fcd;
    fVar8 = (float10)FUN_00a95680(*(undefined4 *)(param_1 + 0xb30));
    fVar9 = (float10)50.0;
    fVar10 = (float10)param_2;
    iVar5 = CONCAT22(extraout_var_00,
                     (ushort)(fVar10 < fVar9) << 8 | (ushort)(NAN(fVar10) || NAN(fVar9)) << 10 |
                     (ushort)(fVar10 == fVar9) << 0xe);
    if (fVar10 < fVar9) {
      *(float *)(param_1 + 0xb38) = (float)(fVar8 - fVar8 * (float10)0.02 * fVar10);
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
  }
  *(float *)(param_1 + 0xb38) = (float)fVar8;
LAB_00407fcd:
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}

// 00408020  FUN_00408020  size=23  [between]
void __thiscall FUN_00408020(int param_1,undefined4 param_2)

{
  FUN_00a96030(*(undefined4 *)(param_1 + 0xb30),param_2);
  return;
}

// 00408040  FUN_00408040  size=354  [between]
void __fastcall FUN_00408040(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  
  iVar2 = FUN_00a92f90();
  if (((iVar2 != 0) && (*(int *)(param_1 + 0xb30) != -1)) &&
     (pbVar3 = (byte *)FUN_00e366b0(*(int *)(param_1 + 0xb30)), pbVar3 != (byte *)0x0)) {
    fVar7 = (float10)FUN_00a958c0(*(undefined4 *)(param_1 + 0xb30));
    pbVar5 = &DAT_0163b7bc;
    pbVar4 = pbVar3;
    do {
      bVar1 = *pbVar4;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_004080b0:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_004080b5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_004080b0;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_004080b5:
    if (iVar2 == 0) {
      FUN_00a9f2b0(&DAT_0163bafc,*(undefined4 *)(param_1 + 0xb30),0,0x3f800000,0,0,0x3e99999a);
      fVar8 = (float10)FUN_00a95680(*(undefined4 *)(param_1 + 0xb30));
      FUN_00a9f2b0(&DAT_0163bafc,*(undefined4 *)(param_1 + 0xb30),0,0x3f800000,0,
                   (float)(fVar8 - (float10)(float)fVar7),0x3e99999a);
      return;
    }
    pbVar4 = &DAT_0163bafc;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_0040815d:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00408162;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_0040815d;
      pbVar3 = pbVar3 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_00408162:
    if (iVar2 == 0) {
      FUN_00a9f2b0(&DAT_0163bafc,*(undefined4 *)(param_1 + 0xb30),0,0x3f800000,0,(float)fVar7,
                   0x3e99999a);
      return;
    }
  }
  return;
}

// 004081B0  FUN_004081b0  size=354  [between]
void __fastcall FUN_004081b0(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  
  iVar2 = FUN_00a92f90();
  if (((iVar2 != 0) && (*(int *)(param_1 + 0xb30) != -1)) &&
     (pbVar3 = (byte *)FUN_00e366b0(*(int *)(param_1 + 0xb30)), pbVar3 != (byte *)0x0)) {
    fVar7 = (float10)FUN_00a958c0(*(undefined4 *)(param_1 + 0xb30));
    pbVar5 = &DAT_0163bafc;
    pbVar4 = pbVar3;
    do {
      bVar1 = *pbVar4;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00408220:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00408225;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00408220;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_00408225:
    if (iVar2 == 0) {
      FUN_00a9f2b0(&DAT_0163b7bc,*(undefined4 *)(param_1 + 0xb30),0,0x3f800000,0,0,0x3e99999a);
      fVar8 = (float10)FUN_00a95680(*(undefined4 *)(param_1 + 0xb30));
      FUN_00a9f2b0(&DAT_0163b7bc,*(undefined4 *)(param_1 + 0xb30),0,0x3f800000,0,
                   (float)(fVar8 - (float10)(float)fVar7),0x3e99999a);
      return;
    }
    pbVar4 = &DAT_0163b7bc;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_004082cd:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_004082d2;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_004082cd;
      pbVar3 = pbVar3 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_004082d2:
    if (iVar2 == 0) {
      FUN_00a9f2b0(&DAT_0163b7bc,*(undefined4 *)(param_1 + 0xb30),0,0x3f800000,0,(float)fVar7,
                   0x3e99999a);
      return;
    }
  }
  return;
}

// 00408320  FUN_00408320  size=159  [between]
undefined4 __thiscall FUN_00408320(int param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00a92f90();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xb30) != -1)) {
    FUN_00a9f2b0(&DAT_0163bafc,*(int *)(param_1 + 0xb30),0,0x3f800000,0,0,0x3e99999a);
    fVar2 = (float10)FUN_00a95680(*(undefined4 *)(param_1 + 0xb30));
    FUN_00a9f2b0(&DAT_0163bafc,*(undefined4 *)(param_1 + 0xb30),0,0x3f800000,0,
                 (float)(fVar2 - (float10)0.02 * fVar2 * (float10)param_2),0x3e99999a);
    return 1;
  }
  return 0;
}

// 004083C0  FUN_004083c0  size=82  [between]
bool __fastcall FUN_004083c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a92f90();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xb30) != -1)) {
    iVar1 = FUN_00a9e290(&DAT_0163bafc,*(int *)(param_1 + 0xb30),0,0x3f800000,0,0,0x3f800000);
    *(int *)(param_1 + 0xb30) = iVar1;
    return iVar1 != -1;
  }
  return false;
}

// 00408420  FUN_00408420  size=7  [between]
float10 FUN_00408420(void)

{
  return (float10)50.0;
}

// 00408430  FUN_00408430  size=7  [between]
float10 FUN_00408430(void)

{
  return (float10)0.3;
}

// 00408440  FUN_00408440  size=96  [between]
uint __fastcall FUN_00408440(int param_1)

{
  int iVar1;
  float10 fVar2;
  uint uVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 uVar5;
  float10 fVar6;
  
  uVar3 = FUN_00a92f90();
  if (uVar3 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xb30);
  if (iVar1 == -1) {
    return uVar3 & 0xffffff00;
  }
  iVar4 = FUN_00e26e90();
  if (iVar4 == 0) {
    fVar6 = (float10)-1.0;
    uVar5 = 0;
  }
  else {
    fVar6 = (float10)FUN_00e36970(iVar1);
    uVar5 = extraout_var;
  }
  fVar2 = (float10)*(float *)(param_1 + 0xb38);
  return CONCAT31((int3)(CONCAT22(uVar5,(ushort)(fVar6 < fVar2) << 8 |
                                        (ushort)(NAN(fVar6) || NAN(fVar2)) << 10 |
                                        (ushort)(fVar6 == fVar2) << 0xe) >> 8),fVar6 < fVar2 == 0);
}

// 004084A0  FUN_004084a0  size=284  [between]
float10 __fastcall FUN_004084a0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  
  iVar2 = FUN_00a92f90();
  if (iVar2 == 0) {
    return (float10)0;
  }
  iVar2 = *(int *)(param_1 + 0xb30);
  if (iVar2 != -1) {
    iVar3 = FUN_00e26e90();
    if (iVar3 == 0) {
      fVar8 = (float10)-1.0;
    }
    else {
      fVar8 = (float10)FUN_00e36970(iVar2);
    }
    fVar9 = (float10)FUN_00a95680(*(undefined4 *)(param_1 + 0xb30));
    pbVar4 = (byte *)FUN_00e366b0(*(undefined4 *)(param_1 + 0xb30));
    if (pbVar4 != (byte *)0x0) {
      pbVar6 = &DAT_0163b7bc;
      pbVar5 = pbVar4;
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00408547:
          iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0040854c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00408547;
        pbVar5 = pbVar5 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_0040854c:
      if (iVar2 == 0) {
        return ((float10)50.0 / (float10)(float)fVar9) * (float10)(float)fVar8;
      }
      pbVar5 = &DAT_0163bafc;
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00408590:
          iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00408595;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00408590;
        pbVar4 = pbVar4 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_00408595:
      if (iVar2 == 0) {
        return (float10)50.0 - ((float10)50.0 / (float10)(float)fVar9) * (float10)(float)fVar8;
      }
      return (float10)0.0;
    }
  }
  return (float10)0;
}

// 004085C0  FUN_004085c0  size=50  [between]
void __thiscall FUN_004085c0(int param_1,byte param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0x1f);
  if (param_3 == 1) {
    *(uint *)(param_1 + 0xb54) = *(uint *)(param_1 + 0xb54) | uVar1;
    return;
  }
  if ((uVar1 & *(uint *)(param_1 + 0xb54)) != 0) {
    *(uint *)(param_1 + 0xb54) = *(uint *)(param_1 + 0xb54) ^ uVar1;
  }
  return;
}

// 00408600  FUN_00408600  size=17  [between]
void FUN_00408600(void)

{
  int iVar1;
  
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x94) = *(uint *)(iVar1 + 0x94) & 0xfffffffd;
  }
  return;
}

// 00408620  FUN_00408620  size=39  [between]
void __fastcall FUN_00408620(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xb34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb38) = 0xbf800000;
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x94) = *(uint *)(iVar1 + 0x94) | 2;
  }
  return;
}

// 00408650  FUN_00408650  size=305  [between]
void __fastcall FUN_00408650(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  switch(param_1[0x189]) {
  case 1:
    if (param_1[0x2d4] != 0) {
      FUN_00e5ca30(param_1[0x2d4],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("ba5001_se_freighter_loop",param_1,0,0);
    break;
  case 2:
    if (param_1[0x2d4] != 0) {
      FUN_00e5ca30(param_1[0x2d4],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("Stop_ba5001_se_freighter_loop",param_1,0xffffffff,0);
    break;
  case 3:
    if (param_1[0x2d4] != 0) {
      FUN_00e5ca30(param_1[0x2d4],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("ba5001_se_freighter_end",param_1,0xffffffff,0);
    break;
  case 4:
    puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
    uStack_20 = *puVar1;
    uStack_18 = puVar1[2];
    uStack_14 = puVar1[3];
    fStack_1c = (float)puVar1[1] + 50.0;
    if (param_1[0x2d4] != 0) {
      FUN_00e5ca30(param_1[0x2d4],0x40400000);
    }
    iVar2 = FUN_00e5e080("ba5001_se_freighter_loop",&uStack_20,param_1,0,0);
    break;
  default:
    goto switchD_0040866c_default;
  }
  param_1[0x2d4] = iVar2;
switchD_0040866c_default:
  param_1[0x189] = 0;
  return;
}

// 004087A0  FUN_004087a0  size=518  [between]
void __fastcall FUN_004087a0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  uint local_c;
  
  local_c = 0;
LAB_004087c1:
  iVar3 = 0;
  switch(local_c) {
  case 0:
    iVar7 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar3 = *(int *)(param_1 + 800);
      piVar8 = (int *)(iVar3 + 0x60);
      do {
        pbVar6 = *(byte **)(*piVar8 + 0x40);
        if (pbVar6 != (byte *)0x0) {
          pcVar4 = "Corner_d_0";
          do {
            bVar1 = *pcVar4;
            bVar9 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_0040882a:
              iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_0040882f;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar4[1];
            bVar9 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_0040882a;
            pcVar4 = pcVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_0040882f:
          if (iVar5 == 0) goto LAB_00408960;
        }
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 0x1c;
      } while (iVar7 < *(short *)(param_1 + 0x324));
      iVar3 = 0;
      break;
    }
    goto LAB_00408965;
  case 1:
    iVar7 = 0;
    if (*(short *)(param_1 + 0x324) < 1) goto LAB_00408965;
    iVar3 = *(int *)(param_1 + 800);
    piVar8 = (int *)(iVar3 + 0x60);
    do {
      pbVar6 = *(byte **)(*piVar8 + 0x40);
      if (pbVar6 != (byte *)0x0) {
        pcVar4 = "Corner_a_0";
        do {
          bVar1 = *pcVar4;
          bVar9 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0040888e:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00408893;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar4[1];
          bVar9 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0040888e;
          pcVar4 = pcVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00408893:
        if (iVar5 == 0) goto LAB_00408960;
      }
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 0x1c;
    } while (iVar7 < *(short *)(param_1 + 0x324));
    iVar3 = 0;
    break;
  case 2:
    iVar7 = 0;
    if (*(short *)(param_1 + 0x324) < 1) goto LAB_00408965;
    iVar3 = *(int *)(param_1 + 800);
    piVar8 = (int *)(iVar3 + 0x60);
    do {
      pbVar6 = *(byte **)(*piVar8 + 0x40);
      if (pbVar6 != (byte *)0x0) {
        pcVar4 = "Corner_c_0";
        do {
          bVar1 = *pcVar4;
          bVar9 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_004088f2:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_004088f7;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar4[1];
          bVar9 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_004088f2;
          pcVar4 = pcVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_004088f7:
        if (iVar5 == 0) goto LAB_00408960;
      }
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 0x1c;
    } while (iVar7 < *(short *)(param_1 + 0x324));
    iVar3 = 0;
    break;
  case 3:
    iVar7 = 0;
    if (*(short *)(param_1 + 0x324) < 1) goto LAB_00408965;
    iVar3 = *(int *)(param_1 + 800);
    piVar8 = (int *)(iVar3 + 0x60);
    do {
      pbVar6 = *(byte **)(*piVar8 + 0x40);
      if (pbVar6 != (byte *)0x0) {
        pcVar4 = "Corner_b_0";
        do {
          bVar1 = *pcVar4;
          bVar9 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0040894b:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00408950;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar4[1];
          bVar9 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0040894b;
          pcVar4 = pcVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00408950:
        if (iVar5 == 0) goto LAB_00408960;
      }
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 0x1c;
    } while (iVar7 < *(short *)(param_1 + 0x324));
    iVar3 = 0;
  }
  goto switchD_004087db_default;
LAB_00408960:
  if (iVar7 == -1) {
LAB_00408965:
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + iVar7 * 0x70;
  }
switchD_004087db_default:
  uVar2 = 0x3f800000;
  if ((*(uint *)(param_1 + 0xb54) >> ((byte)local_c & 0x1f) & 1) != 0) {
    uVar2 = 0x3f000000;
  }
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x1c) = uVar2;
  }
  local_c = local_c + 1;
  if (3 < local_c) {
    return;
  }
  goto LAB_004087c1;
}

// 004089C0  Ba5001::vf48  size=16  [class]
void Ba5001::vf48(void)

{
  BehaviorBgBase::vf48();
  FUN_004087a0();
  return;
}

// 004089D0  Ba5001::vf4C  size=1008  [class]
void __fastcall Ba5001::vf4C(int param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined1 *puVar13;
  
  if (*(int *)(param_1 + 0xb4c) == 0) {
    ExcelStage::vf4C();
  }
  else {
    BehaviorBgBase::vf4C();
    Bh0064::vf64();
  }
  iVar3 = FUN_00a92f90();
  if ((*(int *)(param_1 + 0xb30) == -1) || (iVar3 == 0)) goto LAB_00408dae;
  pbVar4 = (byte *)FUN_00e366b0(*(int *)(param_1 + 0xb30));
  if (pbVar4 == (byte *)0x0) {
    return;
  }
  pbVar8 = &DAT_0163b7bc;
  pbVar6 = pbVar4;
  do {
    bVar2 = *pbVar6;
    bVar9 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_00408a53:
      iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00408a58;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar9 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_00408a53;
    pbVar6 = pbVar6 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_00408a58:
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_1 + 0xb34);
    if (iVar7 == -1) {
      if (*(float *)(param_1 + 0xb38) != -1.0) {
        fVar10 = (float10)FUN_00407b40(*(undefined4 *)(param_1 + 0xb30));
        if ((float10)*(float *)(param_1 + 0xb38) <= fVar10) {
          *(uint *)(iVar3 + 0x94) = *(uint *)(iVar3 + 0x94) & 0xfffffffd;
          *(undefined4 *)(param_1 + 0xb38) = 0xbf800000;
          FUN_00408650();
          return;
        }
        goto LAB_00408dae;
      }
      if ((*(int *)(param_1 + 0xb40) != 0) || (iVar7 = FUN_00a94d60(&DAT_0163b7bc), iVar7 != 1))
      goto LAB_00408dae;
      puVar13 = &DAT_0163b604;
LAB_00408d9a:
      *(uint *)(iVar3 + 0x94) = *(uint *)(iVar3 + 0x94) | 2;
      uVar5 = FUN_00a9e290(puVar13,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0xb30) = uVar5;
      goto LAB_00408dae;
    }
    puVar13 = &DAT_0163b7bc;
  }
  else {
    pbVar6 = &DAT_0163bafc;
    do {
      bVar2 = *pbVar4;
      bVar9 = bVar2 < *pbVar6;
      if (bVar2 != *pbVar6) {
LAB_00408b40:
        iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00408b45;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar9 = bVar2 < pbVar6[1];
      if (bVar2 != pbVar6[1]) goto LAB_00408b40;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar2 != 0);
    iVar7 = 0;
LAB_00408b45:
    if (iVar7 != 0) goto LAB_00408dae;
    iVar7 = *(int *)(param_1 + 0xb34);
    if (iVar7 == -1) {
      if (*(float *)(param_1 + 0xb38) != -1.0) {
        fVar10 = (float10)FUN_00407b40(*(undefined4 *)(param_1 + 0xb30));
        fVar1 = (float)fVar10;
        if ((float10)*(float *)(param_1 + 0xb38) <= fVar10) {
          *(uint *)(iVar3 + 0x94) = *(uint *)(iVar3 + 0x94) & 0xfffffffd;
          *(undefined4 *)(param_1 + 0xb38) = 0xbf800000;
          goto LAB_00408d12;
        }
        fVar11 = (float10)FUN_00407ae0(*(undefined4 *)(param_1 + 0xb30));
        fVar12 = (float10)FUN_00a95680(*(undefined4 *)(param_1 + 0xb30));
        fVar10 = (float10)fVar1;
        if (fVar10 < fVar12) {
          if ((float10)0.1 <= fVar12 - fVar10) {
            if ((((fVar10 == (float10)*(float *)(param_1 + 0xb44)) &&
                 (fVar12 <= (float10)*(float *)(param_1 + 0xb38))) && ((float)fVar11 == 0.0)) &&
               (2 < *(int *)(param_1 + 0xb48))) {
              FUN_00407ab0(*(undefined4 *)(param_1 + 0xb30),0x3e99999a);
              fVar10 = (float10)fVar1;
            }
            goto LAB_00408d12;
          }
          FUN_00407b10(*(undefined4 *)(param_1 + 0xb30),(float)fVar12);
          FUN_00407ab0(*(undefined4 *)(param_1 + 0xb30),0x3f800000);
        }
        else {
          if (*(int *)(param_1 + 0xb40) != 0) goto LAB_00408d12;
          iVar7 = FUN_00a94d60(&DAT_0163bafc);
          if (iVar7 == 1) {
            *(uint *)(iVar3 + 0x94) = *(uint *)(iVar3 + 0x94) | 2;
            uVar5 = FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
            fVar10 = (float10)fVar1;
            *(undefined4 *)(param_1 + 0xb30) = uVar5;
            goto LAB_00408d12;
          }
        }
        fVar10 = (float10)fVar1;
LAB_00408d12:
        if (fVar10 != (float10)*(float *)(param_1 + 0xb44)) {
          *(float *)(param_1 + 0xb44) = (float)fVar10;
          *(undefined4 *)(param_1 + 0xb48) = 0;
          FUN_00408650();
          return;
        }
        *(int *)(param_1 + 0xb48) = *(int *)(param_1 + 0xb48) + 1;
        FUN_00408650();
        return;
      }
      if ((*(int *)(param_1 + 0xb40) != 0) || (iVar7 = FUN_00a94d60(&DAT_0163bafc), iVar7 != 1))
      goto LAB_00408dae;
      puVar13 = &DAT_0163b5f4;
      goto LAB_00408d9a;
    }
    puVar13 = &DAT_0163bafc;
  }
  iVar7 = FUN_00a955a0(puVar13,iVar7);
  if (iVar7 == 1) {
    *(uint *)(iVar3 + 0x94) = *(uint *)(iVar3 + 0x94) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0xb34) = 0xffffffff;
    FUN_00408650();
    return;
  }
LAB_00408dae:
  FUN_00408650();
  return;
}

// 00AB0DE0  Ba5001::Ba5001  size=18  [class]
undefined4 * __fastcall Ba5001::Ba5001(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB0E00  Ba5001::vf04  size=6  [class]
undefined * Ba5001::vf04(void)

{
  return &DAT_01b34b3c;
}

// 00AB9610  Ba5001::vf00  size=43  [class]
undefined4 __thiscall Ba5001::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

