// src/enemy/em002a/Em002a.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00439D40..00AB6A40, 25 functions

#include "mgrr.h"
#include "Em002a.h"

// 00439D40  Em002a::vf264  size=136  [class]
undefined4 __thiscall Em002a::vf264(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x618) = 0x10000;
  if (0.0 < *(float *)(param_2 + 0xfc)) {
    uVar1 = *(undefined4 *)(param_2 + 0xfc);
  }
  else {
    uVar1 = 0x40800000;
  }
  *(undefined4 *)(param_1 + 0xdc0) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0xdc0);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0xdc0);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xdc0);
  *(undefined4 *)(param_1 + 0x7c) = local_14;
  return 1;
}

// 00439DD0  Em002a::vf48  size=26  [class]
void __fastcall Em002a::vf48(int param_1)

{
  float10 fVar1;
  
  BehaviorEmBase::vf48();
  fVar1 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar1;
  return;
}

// 00439DF0  Em002a::vf50  size=39  [class]
void __fastcall Em002a::vf50(int param_1)

{
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  BehaviorEmBase::vf128();
  return;
}

// 00439E20  Em002a::thunk_vf54  size=5  [class]
void __fastcall Em002a::thunk_vf54(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  bVar2 = false;
  iVar3 = FUN_00ac8410();
  if (iVar3 == 0) {
    iVar3 = FUN_00a8c760(0x25);
    if ((((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
        (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (((((float)param_1[0x218] != 0.0 || ((float)param_1[0x219] != 0.0)) ||
         ((float)param_1[0x21a] != 0.0)) && (iVar3 = FUN_00a12210(0xffffffff), iVar3 != 0)))) {
      iVar1 = *param_1;
      fStack_40 = (float)param_1[0x10] +
                  (((float)param_1[0x218] + *(float *)(iVar3 + 0x40)) - (float)param_1[0x10]);
      fStack_3c = ((*(float *)(iVar3 + 0x44) + (float)param_1[0x219]) - (float)param_1[0x11]) +
                  (float)param_1[0x11];
      fStack_38 = ((*(float *)(iVar3 + 0x48) + (float)param_1[0x21a]) - (float)param_1[0x12]) +
                  (float)param_1[0x12];
      fStack_34 = (((float)param_1[0x21b] + *(float *)(iVar3 + 0x4c)) - (float)param_1[0x13]) +
                  (float)param_1[0x13];
      uVar4 = (**(code **)(iVar1 + 0x84))();
      (**(code **)(iVar1 + 0x7c))(&fStack_40,uVar4);
      bVar2 = true;
    }
    iVar3 = FUN_00a8c760(0x24);
    if (((iVar3 != 0) && (iVar3 = FUN_00ac82f0(), iVar3 == 0)) &&
       ((!bVar2 && ((iVar3 = FUN_00a81330(), iVar3 != 0 && (iVar3 = FUN_00a7c8a0(), iVar3 != 0))))))
    {
      FUN_00a8ce90(&fStack_40,auStack_20);
      D3DXVec3TransformNormal(&fStack_40,&fStack_40,iVar3 + 0x10);
      fStack_40 = *(float *)(iVar3 + 0x40) + fStack_40;
      fStack_3c = *(float *)(iVar3 + 0x44) + fStack_3c;
      fStack_38 = *(float *)(iVar3 + 0x48) + fStack_38;
      fStack_30 = fStack_40 - (float)param_1[0x10];
      fStack_2c = fStack_3c - (float)param_1[0x11];
      fStack_28 = fStack_38 - (float)param_1[0x12];
      fStack_24 = fStack_34 - (float)param_1[0x13];
      FUN_00a12310(&fStack_30);
    }
  }
  Behavior::vf54();
  return;
}

// 00439E30  FUN_00439e30  size=93  [between]
void __fastcall FUN_00439e30(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x103c) != 0) {
    if (*(int *)(param_1 + 0x1024) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x48))();
      }
    }
    if (*(int *)(param_1 + 0x1028) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00439e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x48))();
        return;
      }
    }
  }
  return;
}

// 00439E90  FUN_00439e90  size=93  [between]
void __fastcall FUN_00439e90(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x103c) != 0) {
    if (*(int *)(param_1 + 0x1024) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x50))();
      }
    }
    if (*(int *)(param_1 + 0x1028) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00439ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x50))();
        return;
      }
    }
  }
  return;
}

// 00439EF0  FUN_00439ef0  size=84  [between]
void __fastcall FUN_00439ef0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x1024) != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x54))();
    }
  }
  if (*(int *)(param_1 + 0x1028) != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00439f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x54))();
      return;
    }
  }
  return;
}

// 00439F50  FUN_00439f50  size=216  [between]
void FUN_00439f50(void)

{
  int iVar1;
  bool bVar2;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0.0;
  local_18 = 0;
  iVar1 = FUN_00ac45b0();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    local_20 = *(undefined4 *)(iVar1 + 0x50);
    local_18 = *(undefined4 *)(iVar1 + 0x58);
    local_14 = *(undefined4 *)(iVar1 + 0x5c);
    local_1c = *(float *)(iVar1 + 0x54) + 1.2;
  }
  bVar2 = (DAT_01bea060 & 0x42000000) == 0;
  FUN_00a84720();
  FUN_00a84720();
  FUN_00a84780(&local_20,bVar2,bVar2,0,0,0x3f800000);
  FUN_00a84780(&local_20,bVar2,bVar2,0,0,0x3f800000);
  switchD_0080dbae::default();
  return;
}

// 0043A040  FUN_0043a040  size=122  [between]
void __thiscall FUN_0043a040(int param_1,byte param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*(int *)(param_1 + 0x1028) != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar2 = (uint)param_2;
      uVar8 = 0x3f800000;
      uVar7 = 0xbf800000;
      uVar6 = 0;
      uVar5 = 0x3f800000;
      uVar4 = 0x3c888889;
      uVar3 = 0;
      FUN_00a7c8a0(uVar2,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00aa4080(uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
      if (param_3 == 0) {
        uVar5 = 1;
        uVar4 = 0x8000000;
        uVar3 = 0;
        FUN_00a7c8a0(0,0x8000000,1);
        FUN_00a96070(uVar3,uVar4,uVar5);
      }
    }
  }
  return;
}

// 0043A0C0  FUN_0043a0c0  size=120  [between]
void __thiscall FUN_0043a0c0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x1028) != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar7 = 0x3f800000;
      uVar6 = 0xbf800000;
      uVar5 = 0;
      uVar4 = 0x3f800000;
      uVar3 = 0x3e4ccccd;
      uVar2 = 0;
      FUN_00a7c8a0(param_2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      uVar2 = FUN_00a9e290(param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
      if (param_3 == 0) {
        uVar4 = 1;
        uVar3 = 0x8000000;
        FUN_00a7c8a0(uVar2,0x8000000,1);
        FUN_00a96070(uVar2,uVar3,uVar4);
      }
    }
  }
  return;
}

// 0043A140  Em002a::vf1C  size=5  [class]
void __fastcall Em002a::vf1C(int *param_1)

{
  int *piVar1;
  
  Bh0064::vf1C();
  (**(code **)(*param_1 + 200))(1);
  (**(code **)(*param_1 + 0xd0))(1);
  piVar1 = (int *)FUN_00ac89d0();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ace737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x1c))();
    return;
  }
  return;
}

// 0043A150  Em002a::vf20  size=5  [class]
void __fastcall Em002a::vf20(int *param_1)

{
  int *piVar1;
  
  Bh0064::vf20();
  (**(code **)(*param_1 + 200))(0);
  (**(code **)(*param_1 + 0xd0))(0);
  piVar1 = (int *)FUN_00ac89d0();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ace6f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x20))();
    return;
  }
  return;
}

// 0043A160  FUN_0043a160  size=486  [between]
undefined4 __fastcall FUN_0043a160(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00a82090("Em002a_HAIR",0x2002b,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x1024) = iVar1;
    FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,5,0);
  }
  iVar1 = FUN_00a82090("Em002a_SCABBARD",0x2002e,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x1028) = iVar1;
    FUN_00a8c5f0(0x11,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x7f0,0);
  }
  *(undefined4 *)(param_1 + 0x1020) = 0;
  iVar1 = FUN_00a82090("Em002a_FACE",0x2002d,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x1020) = iVar1;
    FUN_00a8c5f0(0x14,*(undefined4 *)(param_1 + 0x4f0),iVar1,0,0);
    FUN_00a8c5f0(0x15,*(undefined4 *)(param_1 + 0x4f0),iVar1,1,1);
    FUN_00a8c5f0(0x16,*(undefined4 *)(param_1 + 0x4f0),iVar1,2,2);
    FUN_00a8c5f0(0x17,*(undefined4 *)(param_1 + 0x4f0),iVar1,3,3);
    FUN_00a8c5f0(0x18,*(undefined4 *)(param_1 + 0x4f0),iVar1,4,4);
    FUN_00a8c5f0(0x19,*(undefined4 *)(param_1 + 0x4f0),iVar1,5,5);
    FUN_00a8c5f0(0x1a,*(undefined4 *)(param_1 + 0x4f0),iVar1,6,6);
    FUN_00a8c5f0(0x1b,*(undefined4 *)(param_1 + 0x4f0),iVar1,10,10);
  }
  iVar1 = FUN_00a82090("Em002a_MASK",0x2002c,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x1030) = iVar1;
    FUN_00a8c5f0(0x13,*(undefined4 *)(param_1 + 0x4f0),iVar1,5,5);
    iVar1 = FUN_00a7c800();
    if (iVar1 != 0) {
      uVar2 = 5;
      FUN_00a7c800(5);
      cModelBase::setRootPartsNo(uVar2);
    }
  }
  iVar1 = FUN_00a82090("Em002a_BLADE",0x30101,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x102c) = iVar1;
    FUN_00a8c5f0(0x12,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x700,0);
  }
  return 1;
}

// 0043A350  FUN_0043a350  size=129  [between]
void __fastcall FUN_0043a350(int param_1)

{
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00eaa840();
  if (*(int *)(param_1 + 0x1020) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0x1020) = 0;
  }
  if (*(int *)(param_1 + 0x1024) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0x1024) = 0;
  }
  if (*(int *)(param_1 + 0x1028) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0x1028) = 0;
  }
  if (*(int *)(param_1 + 0x102c) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0x102c) = 0;
  }
  return;
}

// 0043A3F0  FUN_0043a3f0  size=465  [between]
void __fastcall FUN_0043a3f0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = *(uint *)(param_1 + 0x4c0) & 1;
  if ((uVar1 != 0) && (*(int *)(param_1 + 0x103c) == 0)) {
    if (*(int *)(param_1 + 0x1020) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x1c))();
      }
    }
    if (*(int *)(param_1 + 0x1024) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x1c))();
      }
    }
    if (*(int *)(param_1 + 0x1028) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x1c))();
      }
    }
    if (*(int *)(param_1 + 0x102c) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x1c))();
      }
    }
    if (*(int *)(param_1 + 0x1030) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x1c))();
      }
    }
    *(undefined4 *)(param_1 + 0x103c) = 1;
    return;
  }
  if ((uVar1 == 0) && (*(int *)(param_1 + 0x103c) != 0)) {
    if (*(int *)(param_1 + 0x1020) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x20))();
      }
    }
    if (*(int *)(param_1 + 0x1024) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x20))();
      }
    }
    if (*(int *)(param_1 + 0x1028) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x20))();
      }
    }
    if (*(int *)(param_1 + 0x102c) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x20))();
      }
    }
    if (*(int *)(param_1 + 0x1030) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + 0x103c) = 0;
  }
  return;
}

// 0043A5D0  FUN_0043a5d0  size=114  [between]
void __fastcall FUN_0043a5d0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  
  if ((*(int *)(param_1 + 0x1028) != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    fVar4 = (float10)FUN_00a958c0(0);
    FUN_00a95e60(0,(float)fVar4);
    uVar1 = *(undefined4 *)(param_1 + 0xdc0);
    iVar3 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar3 + 0xe4) = uVar1;
    *(undefined4 *)(iVar3 + 0xe8) = uVar1;
    *(undefined4 *)(iVar3 + 0xec) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0043a63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 100))();
    return;
  }
  return;
}

// 0043A650  Em002a::vf44  size=141  [class]
void __fastcall Em002a::vf44(int param_1)

{
  FUN_00a92a00();
  FUN_00a944d0();
  FUN_0043a350();
  FUN_00a934c0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a829b0();
  FUN_00a829b0();
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00eaa840();
  BehaviorEmBase::vf44();
  return;
}

// 0043A6E0  FUN_0043a6e0  size=16  [between]
void FUN_0043a6e0(void)

{
  FUN_0043a350();
  FUN_009fdde0();
  return;
}

// 0043A6F0  FUN_0043a6f0  size=198  [between]
void __fastcall FUN_0043a6f0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a9e290("em0020_a200",0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    if (*(int *)(param_1 + 0x1028) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        uVar8 = 0x3f800000;
        uVar7 = 0xbf800000;
        uVar6 = 0;
        uVar5 = 0x3f800000;
        uVar4 = 0x3e4ccccd;
        uVar3 = 0;
        pcVar2 = "em0024_0000";
        FUN_00a7c8a0("em0024_0000",0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a9e290(pcVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
      }
    }
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(*(undefined4 *)(param_1 + 0xdc0),*(undefined4 *)(param_1 + 0xdc0));
  FUN_0043a5d0();
  return;
}

// 0043A7C0  FUN_0043a7c0  size=25  [between]
void FUN_0043a7c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x10000) {
    FUN_0043a6f0();
    return;
  }
  return;
}

// 0043A7E0  Em002a::vf40  size=641  [class]
undefined4 __fastcall Em002a::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d0 [112];
  undefined1 local_160 [348];
  
  iVar1 = BehaviorEmBase::vf40();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 0x20;
    FUN_00405230();
    local_1e0 = 0;
    local_1dc = 0;
    local_1d8 = 0;
    FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),0,&local_1e0,0,0x41700000,0x3f800000,0,0);
    FUN_00c57830(local_1d0);
    *(undefined4 *)(param_1 + 0x618) = 0x10000;
    FUN_004039a0(0,param_1,0);
    FUN_00dffb20(param_1 + 0xdd0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x6e0) = 5;
    iVar1 = FUN_0043a160();
    if (iVar1 != 0) {
      FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),4,0);
      *(uint *)(param_1 + 0xe80) = *(uint *)(param_1 + 0xe80) | 2;
      FUN_00a82840(0x3dd67750,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82870(0x3f5f66f3,0xbdd67750,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),5,0);
      *(uint *)(param_1 + 0xf50) = *(uint *)(param_1 + 0xf50) | 2;
      FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82870(0x3f060a92,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      iVar1 = FUN_00a12210(0x7a0);
      if (iVar1 != 0) {
        *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 0x80;
      }
      iVar1 = FUN_00a12210(0x7a1);
      if (iVar1 != 0) {
        *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 0x80;
      }
      iVar1 = FUN_00a12210(0x7a2);
      if (iVar1 != 0) {
        *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 0x80;
      }
      uVar2 = 0;
      FUN_00a92fb0(0);
      FUN_00e08640(uVar2);
      return 1;
    }
  }
  return 0;
}

// 0043AA70  Em002a::vf4C  size=61  [class]
void __fastcall Em002a::vf4C(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  BehaviorEmBase::vf4C();
  FUN_00a8cab0();
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x10000) {
    FUN_0043a6f0();
  }
  FUN_00439f50();
  FUN_0043a3f0();
  return;
}

// 00AAC200  Em002a::Em002a  size=71  [class]
undefined4 * __fastcall Em002a::Em002a(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  cEspControler::cEspControler();
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a7c930();
  return param_1;
}

// 00AAC250  Em002a::vf04  size=6  [class]
undefined * Em002a::vf04(void)

{
  return &DAT_01b34c34;
}

// 00AB6A40  Em002a::vf00  size=43  [class]
undefined4 __thiscall Em002a::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

