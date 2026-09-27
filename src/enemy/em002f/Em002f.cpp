// src/enemy/em002f/Em002f.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0043AAB0..00AB6A70, 27 functions

#include "mgrr.h"
#include "Em002f.h"

// 0043AAB0  Em002f::vf48  size=26  [class]
void __fastcall Em002f::vf48(int param_1)

{
  float10 fVar1;
  
  BehaviorEmBase::vf48();
  fVar1 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar1;
  return;
}

// 0043AAD0  Em002f::vf50  size=39  [class]
void __fastcall Em002f::vf50(int param_1)

{
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  BehaviorEmBase::vf128();
  return;
}

// 0043AB00  Em002f::vf54  size=5  [class]
void __fastcall Em002f::vf54(int *param_1)

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

// 0043AB10  FUN_0043ab10  size=114  [between]
void __fastcall FUN_0043ab10(int param_1)

{
  if (*(int *)(param_1 + 0xfc0) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0xfc0) = 0;
  }
  if (*(int *)(param_1 + 0xfc4) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0xfc4) = 0;
  }
  if (*(int *)(param_1 + 0xfc8) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0xfc8) = 0;
  }
  if (*(int *)(param_1 + 0xfcc) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0xfcc) = 0;
  }
  if (*(int *)(param_1 + 0xfd0) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0xfd0) = 0;
  }
  return;
}

// 0043AB90  FUN_0043ab90  size=84  [between]
void __fastcall FUN_0043ab90(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xfc4) != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x48))();
    }
  }
  if (*(int *)(param_1 + 0xfc8) != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x0043abe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x48))();
      return;
    }
  }
  return;
}

// 0043ABF0  FUN_0043abf0  size=93  [between]
void __fastcall FUN_0043abf0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xfdc) != 0) {
    if (*(int *)(param_1 + 0xfc4) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x50))();
      }
    }
    if (*(int *)(param_1 + 0xfc8) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x0043ac49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x50))();
        return;
      }
    }
  }
  return;
}

// 0043AC50  FUN_0043ac50  size=93  [between]
void __fastcall FUN_0043ac50(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xfdc) != 0) {
    if (*(int *)(param_1 + 0xfc4) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x54))();
      }
    }
    if (*(int *)(param_1 + 0xfc8) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x0043aca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x54))();
        return;
      }
    }
  }
  return;
}

// 0043ACB0  FUN_0043acb0  size=216  [between]
void FUN_0043acb0(void)

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

// 0043ADC0  FUN_0043adc0  size=122  [between]
void __thiscall FUN_0043adc0(int param_1,byte param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*(int *)(param_1 + 0xfc8) != 0) {
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

// 0043AE40  FUN_0043ae40  size=120  [between]
void __thiscall FUN_0043ae40(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0xfc8) != 0) {
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

// 0043AEC0  FUN_0043aec0  size=78  [between]
void __fastcall FUN_0043aec0(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0xfc8) != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      fVar3 = (float10)FUN_00a958c0(0);
      fVar5 = (float)fVar3;
      uVar4 = 0;
      FUN_00a7c8a0(0,fVar5);
      FUN_00a95e60(uVar4,fVar5);
      piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x0043af0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 100))();
      return;
    }
  }
  return;
}

// 0043AF10  Em002f::vf1C  size=5  [class]
void __fastcall Em002f::vf1C(int *param_1)

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

// 0043AF20  Em002f::vf20  size=5  [class]
void __fastcall Em002f::vf20(int *param_1)

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

// 0043AF70  Em002f::vf264  size=116  [class]
undefined4 __thiscall Em002f::vf264(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0040ac60(param_2);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = 1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x40);
  iVar1 = *(int *)(param_2 + 0x44);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x618) = 0x10000;
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x618) = 0x10001;
      return uVar2;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x618) = 0x10002;
      return uVar2;
    }
  }
  return uVar2;
}

// 0043AFF0  Em002f::vf44  size=103  [class]
void __fastcall Em002f::vf44(int param_1)

{
  FUN_00a92a00();
  FUN_00a944d0();
  FUN_0043ab10();
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
  BehaviorEmBase::vf44();
  return;
}

// 0043B060  FUN_0043b060  size=585  [between]
undefined4 __fastcall FUN_0043b060(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xfdc) = 1;
  iVar1 = FUN_00a82090("Em0020_HAIR",0x20021,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xfc4) = iVar1;
    FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,5,0);
  }
  iVar1 = FUN_00a82090("Em0020_SCABBARD",0x20024,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xfc8) = iVar1;
    FUN_00a8c5f0(1,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x7f0,0);
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
    iVar1 = FUN_00a82090("Em0020_BLADE",0x30100,0);
    if (iVar1 != 0) {
      FUN_00a8c5f0(2,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x700,0);
      *(int *)(param_1 + 0xfcc) = iVar1;
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0xfc0) = 0;
  iVar1 = FUN_00a82090("Em0020_FACE",0x20026,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xfc0) = iVar1;
    FUN_00a8c5f0(4,*(undefined4 *)(param_1 + 0x4f0),iVar1,0,0);
    FUN_00a8c5f0(5,*(undefined4 *)(param_1 + 0x4f0),iVar1,1,1);
    FUN_00a8c5f0(6,*(undefined4 *)(param_1 + 0x4f0),iVar1,2,2);
    FUN_00a8c5f0(7,*(undefined4 *)(param_1 + 0x4f0),iVar1,3,3);
    FUN_00a8c5f0(8,*(undefined4 *)(param_1 + 0x4f0),iVar1,4,4);
    FUN_00a8c5f0(9,*(undefined4 *)(param_1 + 0x4f0),iVar1,5,5);
    FUN_00a8c5f0(10,*(undefined4 *)(param_1 + 0x4f0),iVar1,6,6);
    FUN_00a8c5f0(0xb,*(undefined4 *)(param_1 + 0x4f0),iVar1,10,10);
  }
  iVar1 = FUN_00a82090("Em0020_MASK",0x20022,0);
  if (iVar1 != 0) {
    FUN_00a8c5f0(3,*(undefined4 *)(param_1 + 0x4f0),iVar1,5,5);
    iVar1 = FUN_00a7c800();
    if (iVar1 != 0) {
      uVar3 = 5;
      FUN_00a7c800(5);
      cModelBase::setRootPartsNo(uVar3);
    }
  }
  return 1;
}

// 0043B2C0  FUN_0043b2c0  size=537  [between]
void __fastcall FUN_0043b2c0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 uVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0xfc8) != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      fVar4 = (float10)FUN_00a958c0(0);
      fVar6 = (float)fVar4;
      uVar5 = 0;
      FUN_00a7c8a0(0,fVar6);
      FUN_00a95e60(uVar5,fVar6);
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 100))();
    }
  }
  uVar3 = *(uint *)(param_1 + 0x4c0) & 1;
  if ((uVar3 != 0) && (*(int *)(param_1 + 0xfdc) == 0)) {
    if (*(int *)(param_1 + 0xfc0) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x1c))();
      }
    }
    if (*(int *)(param_1 + 0xfc4) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x1c))();
      }
    }
    if (*(int *)(param_1 + 0xfc8) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x1c))();
      }
    }
    if (*(int *)(param_1 + 0xfcc) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x1c))();
      }
    }
    if (*(int *)(param_1 + 0xfd0) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x1c))();
      }
    }
    *(undefined4 *)(param_1 + 0xfdc) = 1;
    return;
  }
  if ((uVar3 == 0) && (*(int *)(param_1 + 0xfdc) != 0)) {
    if (*(int *)(param_1 + 0xfc0) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x20))();
      }
    }
    if (*(int *)(param_1 + 0xfc4) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x20))();
      }
    }
    if (*(int *)(param_1 + 0xfc8) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x20))();
      }
    }
    if (*(int *)(param_1 + 0xfcc) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x20))();
      }
    }
    if (*(int *)(param_1 + 0xfd0) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + 0xfdc) = 0;
  }
  return;
}

// 0043B4E0  FUN_0043b4e0  size=172  [between]
void __fastcall FUN_0043b4e0(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 uVar4;
  float fVar5;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a9e290("em0020_0000",0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  if (*(int *)(param_1 + 0xfc8) != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      fVar3 = (float10)FUN_00a958c0(0);
      fVar5 = (float)fVar3;
      uVar4 = 0;
      FUN_00a7c8a0(0,fVar5);
      FUN_00a95e60(uVar4,fVar5);
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 100))();
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0043B590  FUN_0043b590  size=184  [between]
void __fastcall FUN_0043b590(int param_1)

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
    FUN_00a9e290("em0020_a000",0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    if (*(int *)(param_1 + 0xfc8) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        uVar8 = 0x3f800000;
        uVar7 = 0xbf800000;
        uVar6 = 0;
        uVar5 = 0x3f800000;
        uVar4 = 0x3e4ccccd;
        uVar3 = 0;
        pcVar2 = "em0024_a000";
        FUN_00a7c8a0("em0024_a000",0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a9e290(pcVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
      }
    }
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0043B650  FUN_0043b650  size=441  [between]
void __fastcall FUN_0043b650(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float local_2c [4];
  undefined4 local_1c;
  float local_18;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    iVar1 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar1 == 0) {
      FUN_009f8ea0(local_2c,10,param_1[300],0);
      FUN_00dd5650(&DAT_0163d460,local_2c,param_1[0x2c9]);
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      FUN_00a5dcc0(iVar1);
    }
    FUN_00a9e290("em0020_0011",0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x249] = 0;
    param_1[0x187] = 1;
    param_1[0x24a] = (int)((float)param_1[0x244] * 0.018);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x24a] = (int)((float)param_1[0x244] * 0.018);
  local_2c[0] = 0.0;
  local_2c[1] = 0.0;
  local_2c[2] = 0.0;
  fVar2 = (float10)FUN_00a581b0(local_2c,(float)param_1[0x244] * 0.018,param_1[0x249]);
  param_1[0x249] = (int)(float)fVar2;
  local_1c = 0;
  local_2c[3] = local_2c[0];
  local_18 = local_2c[2];
  FUN_00a8e880(local_2c + 3);
  iVar1 = FUN_00a8e9b0();
  param_1[0x25] = *(int *)(iVar1 + 4);
  iVar1 = FUN_00a54a60(param_1[0x249]);
  if ((iVar1 != 0) &&
     (SQRT((local_18 - (float)param_1[0x12]) * (local_18 - (float)param_1[0x12]) +
           (local_2c[3] - (float)param_1[0x10]) * (local_2c[3] - (float)param_1[0x10])) < 0.1)) {
    FUN_00a8caf0(0x10000,0,0,0);
  }
  return;
}

// 0043B810  Em002f::vf40  size=1211  [class]
undefined4 __fastcall Em002f::vf40(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  bool bVar9;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [24];
  undefined4 local_68;
  
  iVar3 = BehaviorEmBase::vf40();
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 0x20;
    FUN_00405230();
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),0,&local_90,0,0x41000000,0x3f800000,0,0);
    local_68 = 0x42c80000;
    uVar4 = FUN_00c57830(local_80);
    *(undefined4 *)(param_1 + 0x970) = uVar4;
    *(undefined4 *)(param_1 + 0x6c4) = 0;
    *(undefined4 *)(param_1 + 0x6d0) = 0;
    *(undefined4 *)(param_1 + 0x6d4) = 0;
    *(undefined4 *)(param_1 + 0x6d8) = 0;
    *(undefined4 *)(param_1 + 0x6dc) = local_84;
    *(undefined4 *)(param_1 + 0x6ec) = 1;
    *(undefined4 *)(param_1 + 0x6e4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6e8) = 0x3fc00000;
    *(undefined4 *)(param_1 + 0x618) = 0x10000;
    *(undefined4 *)(param_1 + 0x6e0) = 5;
    iVar3 = FUN_0043b060();
    if (iVar3 != 0) {
      FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),4,0);
      *(uint *)(param_1 + 0xe20) = *(uint *)(param_1 + 0xe20) | 2;
      FUN_00a82840(0x3dd67750,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82870(0x3f5f66f3,0xbdd67750,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),5,0);
      *(uint *)(param_1 + 0xef0) = *(uint *)(param_1 + 0xef0) | 2;
      FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82870(0x3f060a92,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      iVar3 = FUN_00a12210(0x7a0);
      if (iVar3 != 0) {
        *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x80;
      }
      iVar3 = FUN_00a12210(0x7a1);
      if (iVar3 != 0) {
        *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x80;
      }
      iVar3 = FUN_00a12210(0x7a2);
      if (iVar3 != 0) {
        *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x80;
      }
      uVar4 = 0;
      FUN_00a92fb0(0);
      FUN_00e08640(uVar4);
      iVar3 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        piVar8 = (int *)(*(int *)(param_1 + 800) + 0x60);
        do {
          pbVar7 = *(byte **)(*piVar8 + 0x40);
          if (pbVar7 != (byte *)0x0) {
            pcVar5 = "_dam1_CBODY";
            do {
              bVar2 = *pcVar5;
              bVar9 = bVar2 < *pbVar7;
              if (bVar2 != *pbVar7) {
LAB_0043baf0:
                iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_0043baf5;
              }
              if (bVar2 == 0) break;
              bVar2 = pcVar5[1];
              bVar9 = bVar2 < pbVar7[1];
              if (bVar2 != pbVar7[1]) goto LAB_0043baf0;
              pcVar5 = pcVar5 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_0043baf5:
            if (iVar6 == 0) {
              if ((iVar3 != -1) && (iVar3 = iVar3 * 0x70 + *(int *)(param_1 + 800), iVar3 != 0)) {
                puVar1 = (uint *)(iVar3 + 0x38);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              break;
            }
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x1c;
        } while (iVar3 < *(short *)(param_1 + 0x324));
      }
      iVar3 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        piVar8 = (int *)(*(int *)(param_1 + 800) + 0x60);
        do {
          pbVar7 = *(byte **)(*piVar8 + 0x40);
          if (pbVar7 != (byte *)0x0) {
            pcVar5 = "_dam1_LBODY";
            do {
              bVar2 = *pcVar5;
              bVar9 = bVar2 < *pbVar7;
              if (bVar2 != *pbVar7) {
LAB_0043bb64:
                iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_0043bb69;
              }
              if (bVar2 == 0) break;
              bVar2 = pcVar5[1];
              bVar9 = bVar2 < pbVar7[1];
              if (bVar2 != pbVar7[1]) goto LAB_0043bb64;
              pcVar5 = pcVar5 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_0043bb69:
            if (iVar6 == 0) {
              if ((iVar3 != -1) && (iVar3 = iVar3 * 0x70 + *(int *)(param_1 + 800), iVar3 != 0)) {
                puVar1 = (uint *)(iVar3 + 0x38);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              break;
            }
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x1c;
        } while (iVar3 < *(short *)(param_1 + 0x324));
      }
      iVar3 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        piVar8 = (int *)(*(int *)(param_1 + 800) + 0x60);
        do {
          pbVar7 = *(byte **)(*piVar8 + 0x40);
          if (pbVar7 != (byte *)0x0) {
            pcVar5 = "_dam1_RBODY";
            do {
              bVar2 = *pcVar5;
              bVar9 = bVar2 < *pbVar7;
              if (bVar2 != *pbVar7) {
LAB_0043bbe0:
                iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_0043bbe5;
              }
              if (bVar2 == 0) break;
              bVar2 = pcVar5[1];
              bVar9 = bVar2 < pbVar7[1];
              if (bVar2 != pbVar7[1]) goto LAB_0043bbe0;
              pcVar5 = pcVar5 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_0043bbe5:
            if (iVar6 == 0) {
              if ((iVar3 != -1) && (iVar3 = iVar3 * 0x70 + *(int *)(param_1 + 800), iVar3 != 0)) {
                puVar1 = (uint *)(iVar3 + 0x38);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              break;
            }
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x1c;
        } while (iVar3 < *(short *)(param_1 + 0x324));
      }
      uVar4 = FUN_00e03ea0("P360_SAM_TALK");
      *(undefined4 *)(param_1 + 0xfe0) = uVar4;
      if (DAT_018b9174 == 0x360) {
        pcVar5 = "P360_SAM_TALK";
        pbVar7 = DAT_018b925c;
        do {
          bVar2 = *pbVar7;
          bVar9 = bVar2 < (byte)*pcVar5;
          if (bVar2 != *pcVar5) {
LAB_0043bc60:
            iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0043bc65;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar7[1];
          bVar9 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_0043bc60;
          pbVar7 = pbVar7 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_0043bc65:
        if (iVar3 != 0) {
          iVar3 = FUN_008ec660(param_1,0x40000000,0x3f000000,0x41a00000,0x41a00000,0x78,0x1e,0);
          *(int *)(param_1 + 0x764) = iVar3;
          *(float *)(iVar3 + 0xf4) = *(float *)(iVar3 + 0xf4) * 0.5;
          FUN_008e6d00();
        }
      }
      return 1;
    }
  }
  return 0;
}

// 0043BCD0  Em002f::vf104  size=55  [class]
void __fastcall Em002f::vf104(int param_1)

{
  int *piVar1;
  
  Bh0064::vf104();
  FUN_0043acb0();
  FUN_0043b2c0();
  if (*(int *)(param_1 + 0xfc0) != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043bd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x104))();
      return;
    }
  }
  return;
}

// 0043BD10  FUN_0043bd10  size=47  [between]
void FUN_0043bd10(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x10000) {
    FUN_0043b4e0();
    return;
  }
  if (iVar1 != 0x10001) {
    if (iVar1 == 0x10002) {
      FUN_0043b650();
      return;
    }
    return;
  }
  FUN_0043b590();
  return;
}

// 0043BD40  Em002f::vf4C  size=216  [class]
void __fastcall Em002f::vf4C(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (((DAT_018b9174 == 0x360) &&
      (iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0xfe0),1), iVar1 != 0)) &&
     (*(int **)(param_1 + 0xa84) != (int *)0x0)) {
    puVar2 = &DAT_01be9db8;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar2);
    if (iVar1 != 0) {
      FUN_00b7eba0(*(undefined4 *)(param_1 + 0x4f0));
      FUN_00c4d470(*(undefined4 *)(param_1 + 0x970));
    }
  }
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  BehaviorEmBase::vf4C();
  FUN_00a8cab0();
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x10000) {
    FUN_0043b4e0();
  }
  else {
    if (iVar1 == 0x10001) {
      FUN_0043b590();
      FUN_0043acb0();
      FUN_0043b2c0();
      return;
    }
    if (iVar1 == 0x10002) {
      FUN_0043b650();
      FUN_0043acb0();
      FUN_0043b2c0();
      return;
    }
  }
  FUN_0043acb0();
  FUN_0043b2c0();
  return;
}

// 00AAC280  Em002f::Em002f  size=71  [class]
undefined4 * __fastcall Em002f::Em002f(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  FUN_00a603a0();
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a7c930();
  return param_1;
}

// 00AAC2D0  Em002f::vf04  size=6  [class]
undefined * Em002f::vf04(void)

{
  return &DAT_01b34c50;
}

// 00AB6A70  Em002f::vf00  size=43  [class]
undefined4 __thiscall Em002f::vf00(undefined4 param_1,byte param_2)

{
  cXml::cXml_7();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

