// lib/cri/unit_012EB020.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 012EB020..012ECD70, 53 functions

#include "mgrr.h"
#include "CriManaSound.h"
#include "CriManaSoundAtomVoice.h"
#include "CriManaSoundAtomVoice_Float32.h"
#include "CriManaSystemTimer.h"
#include "CriMvSoundInterface.h"

// 012EB020  CriMvSoundInterface::~CriMvSoundInterface  size=20  [run]
void __fastcall CriMvSoundInterface::~CriMvSoundInterface(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 012EB040  CriMvSoundInterface::vf28  size=44  [run]
undefined4 __thiscall CriMvSoundInterface::vf28(undefined4 param_1,uint param_2)

{
  ~CriMvSoundInterface();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 012EB070  FUN_012eb070  size=10  [run]
undefined4 FUN_012eb070(void)

{
  return 1;
}

// 012EB080  FUN_012eb080  size=116  [run]
bool FUN_012eb080(void)

{
  bool bVar1;
  
  DAT_020b8660 = DAT_020b8660 + 1;
  DAT_020b8664 = 0;
  DAT_020b8668 = 0;
  DAT_020b866c = 0;
  DAT_020b8614 = FUN_01294159(&DAT_020b8618,0x48);
  bVar1 = DAT_020b8614 != 0;
  if (bVar1) {
    FUN_0149a026(FUN_012eb3b0,6);
  }
  else {
    DAT_020b8660 = DAT_020b8660 + -1;
  }
  return bVar1;
}

// 012EB100  FUN_012eb100  size=75  [run]
void FUN_012eb100(void)

{
  DAT_020b8660 = DAT_020b8660 + -1;
  if ((DAT_020b8660 < 1) && (FUN_0149a026(0,6), DAT_020b8614 != 0)) {
    FUN_01294197(DAT_020b8614);
    DAT_020b8614 = 0;
  }
  return;
}

// 012EB150  FUN_012eb150  size=85  [run]
uint FUN_012eb150(float param_1,float param_2)

{
  undefined4 local_1c;
  
  local_1c = (uint)(longlong)ROUND((param_1 / param_2) * 2.0);
  return local_1c / 3 + 7 & 0xfffffff8;
}

// 012EB1B0  CriManaSoundAtomVoice::CriManaSoundAtomVoice  size=385  [run]
undefined4 * __fastcall CriManaSoundAtomVoice::CriManaSoundAtomVoice(undefined4 *param_1)

{
  CriManaSound::CriManaSound();
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[0x14] = 0;
  param_1[0x42] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 1;
  param_1[0x5f] = 1;
  param_1[0x60] = 0x3f800000;
  FUN_0129432c(param_1 + 2,0x48);
  FUN_0129432c(param_1 + 0x53,8);
  FUN_0129432c(param_1 + 0x43,0x38);
  FUN_0129432c(param_1 + 0x3f,0xc);
  FUN_0129432c(param_1 + 0x15,0xa8);
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  return param_1;
}

// 012EB340  CriManaSound::CriManaSound  size=31  [run]
undefined4 * __fastcall CriManaSound::CriManaSound(undefined4 *param_1)

{
  CriMvSoundInterface::CriMvSoundInterface();
  *param_1 = vftable;
  return param_1;
}

// 012EB360  FID_conflict:`scalar_deleting_destructor'  size=46  [run]
/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall std::pmr::_Aligned_new_delete_resource_impl::`scalar deleting
   destructor'(unsigned int)
    public: virtual void * __thiscall std::pmr::_Identity_equal_resource::`scalar deleting
   destructor'(unsigned int)
    public: virtual void * __thiscall `class std::pmr::memory_resource * __cdecl
   null_memory_resource(void)'::`2'::_Null_resource::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall std::pmr::_Unaligned_new_delete_resource_impl::`scalar
   deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __thiscall FID_conflict__scalar_deleting_destructor_(undefined4 param_1,uint param_2)

{
  FUN_012eb000();
  if ((param_2 & 1) != 0) {
    FUN_014a1cbf(param_1,4);
  }
  return param_1;
}

// 012EB390  CriMvSoundInterface::CriMvSoundInterface  size=23  [run]
undefined4 * __fastcall CriMvSoundInterface::CriMvSoundInterface(undefined4 *param_1)

{
  *param_1 = vftable;
  return param_1;
}

// 012EB3B0  FUN_012eb3b0  size=327  [run]
void FUN_012eb3b0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  
  FUN_012941d9(DAT_020b8614);
  iVar3 = DAT_020b866c;
  for (local_14 = 0; piVar2 = DAT_020b8664, local_14 < iVar3; local_14 = local_14 + 1) {
    if (DAT_020b8664 != (int *)0x0) {
      if ((int *)DAT_020b8664[1] == (int *)0x0) {
        DAT_020b8668 = (int *)0x0;
      }
      piVar1 = DAT_020b8664 + 1;
      DAT_020b8664 = (int *)DAT_020b8664[1];
      *piVar1 = 0;
      DAT_020b866c = DAT_020b866c + -1;
    }
    piVar1 = (int *)*piVar2;
    FUN_012941d9(piVar1[1]);
    iVar4 = (**(code **)(*piVar1 + 0x1c))();
    if (iVar4 == 1) {
      for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
        (**(code **)(*piVar1 + 0x50))();
      }
    }
    FUN_0129420c(piVar1[1]);
    piVar1 = piVar2;
    if (DAT_020b8668 != (int *)0x0) {
      piVar2[1] = 0;
      DAT_020b8668[1] = (int)piVar2;
      piVar1 = DAT_020b8664;
    }
    DAT_020b8664 = piVar1;
    DAT_020b8668 = piVar2;
    DAT_020b866c = DAT_020b866c + 1;
  }
  FUN_0129420c(DAT_020b8614);
  return;
}

// 012EB500  FUN_012eb500  size=140  [run]
void __thiscall FUN_012eb500(int param_1,float *param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  float10 fVar2;
  
  FUN_0129432c(param_2,0x18);
  param_2[1] = param_3;
  if (*(int *)(param_1 + 0x178) / *(int *)(param_1 + 0x17c) < 2) {
    param_2[2] = param_4;
  }
  else {
    param_2[2] = (float)((uint)((int)param_4 * *(int *)(param_1 + 0x178)) /
                        *(uint *)(param_1 + 0x17c));
  }
  *param_2 = 60.0;
  param_2[3] = param_5;
  iVar1 = FUN_01499d93();
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_01499eb7();
    *param_2 = (float)fVar2;
  }
  return;
}

// 012EB590  FUN_012eb590  size=52  [run]
undefined4 __thiscall
FUN_012eb590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  
  thunk_FUN_012c263e(param_1);
  uVar1 = FUN_012eb5d0(param_2,param_3,param_4);
  thunk_FUN_012c2651();
  return uVar1;
}

// 012EB5D0  FUN_012eb5d0  size=1199  [run]
undefined4 __thiscall FUN_012eb5d0(int param_1,undefined4 *param_2,undefined4 param_3,short param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_14;
  uint local_c;
  
  if ((int)param_2[1] < 9) {
    uVar1 = FUN_01293a92(*(undefined4 *)(param_1 + 0x50),param_3,"CriManaSoundAtomVoice",8);
    *(undefined4 *)(param_1 + 0x148) = uVar1;
    if (*(int *)(param_1 + 0x148) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_012c31b1(1,param_2,*(undefined4 *)(param_1 + 0x148),param_3);
      *(undefined4 *)(param_1 + 0x144) = uVar1;
      if (*(int *)(param_1 + 0x144) == 0) {
        FUN_01293f1f(0,
                     "E2012012701M:Failed to create a sound module for CriMana. Check the number of channels or max number of sound resources."
                    );
        FUN_012ebaa0();
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_0149c968(param_1 + 0x10c);
        *(undefined4 *)(param_1 + 0x108) = uVar1;
        FUN_012c2bb8(*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x158),
                     *(undefined4 *)(param_1 + 0x108),0xffffffff,0);
        FUN_012c2caf(*(undefined4 *)(param_1 + 0x144),param_2[2]);
        FUN_012c2cbf(*(undefined4 *)(param_1 + 0x144),
                     (float)*(int *)(param_1 + 0x178) / (float)*(int *)(param_1 + 0x17c));
        uVar1 = FUN_012eb150((float)(int)param_2[2],*param_2);
        *(undefined4 *)(param_1 + 0x16c) = uVar1;
        *(int *)(param_1 + 0x174) = (int)param_4 * *(int *)(param_1 + 0x16c);
        *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x174) * *(int *)(param_1 + 0x158);
        iVar2 = (int)param_4 * *(int *)(param_1 + 0x16c) * *(int *)(param_1 + 0x158) * 3;
        uVar1 = FUN_01293a92(*(undefined4 *)(param_1 + 0x50),iVar2,
                             "CriManaSound_AtomVoice Sound Buffer",8);
        *(undefined4 *)(param_1 + 0x168) = uVar1;
        if (*(int *)(param_1 + 0x168) == 0) {
          FUN_012ebaa0();
          uVar1 = 0;
        }
        else {
          FUN_0129432c(*(undefined4 *)(param_1 + 0x168),iVar2);
          for (local_c = 0; local_c < 3; local_c = local_c + 1) {
            uVar1 = FUN_0149ca79(param_1 + 0x54 + local_c * 0x38);
            *(undefined4 *)(param_1 + 0xfc + local_c * 4) = uVar1;
            *(undefined4 *)(*(int *)(param_1 + 0xfc + local_c * 4) + 4) =
                 *(undefined4 *)(param_1 + 0x108);
            *(undefined1 *)(*(int *)(param_1 + 0xfc + local_c * 4) + 8) = 0;
            for (local_14 = 0; local_14 < *(uint *)(param_1 + 0x158); local_14 = local_14 + 1) {
              FUN_0149cab6(*(undefined4 *)(param_1 + 0xfc + local_c * 4),local_14,
                           *(int *)(param_1 + 0x168) + local_c * *(int *)(param_1 + 0x170) +
                           *(int *)(param_1 + 0x174) * local_14);
            }
            FUN_0149caf6(*(undefined4 *)(param_1 + 0xfc + local_c * 4),
                         *(undefined4 *)(param_1 + 0x174));
            FUN_0149c9d3(*(undefined4 *)(param_1 + 0x108),1,
                         *(undefined4 *)(param_1 + 0xfc + local_c * 4));
          }
          uVar1 = FUN_01294159(param_1 + 8,0x48);
          *(undefined4 *)(param_1 + 4) = uVar1;
          FUN_012c2caf(*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x154));
          FUN_012ec570(*(undefined4 *)(param_1 + 0x158));
          FUN_012c2c7d(*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x180));
          uVar1 = FUN_012f83e0();
          uVar3 = FUN_01293a92(*(undefined4 *)(param_1 + 0x50),uVar1,"CriManaSound_AtomVoice Timer",
                               8);
          *(undefined4 *)(param_1 + 0x198) = uVar3;
          uVar1 = FUN_012f8400(*(undefined4 *)(param_1 + 0x198),uVar1);
          *(undefined4 *)(param_1 + 0x194) = uVar1;
          *(undefined4 *)(param_1 + 0x1a0) = 0;
          *(undefined4 *)(param_1 + 0x1a4) = 0;
          *(undefined4 *)(param_1 + 0x1a8) = 1000;
          *(undefined4 *)(param_1 + 0x1ac) = 0;
          FUN_012941d9(DAT_020b8614);
          *(undefined4 *)(param_1 + 0x14c) = 0;
          *(undefined4 *)(param_1 + 0x150) = 0;
          *(int *)(param_1 + 0x14c) = param_1;
          if (DAT_020b8668 == 0) {
            DAT_020b8664 = param_1 + 0x14c;
          }
          else {
            *(undefined4 *)(param_1 + 0x150) = 0;
            *(int *)(DAT_020b8668 + 4) = param_1 + 0x14c;
          }
          DAT_020b8668 = param_1 + 0x14c;
          DAT_020b866c = DAT_020b866c + 1;
          FUN_0129420c(DAT_020b8614);
          uVar1 = 1;
        }
      }
    }
  }
  else {
    FUN_01293f35(0,"E2012031601M:Too many sound channels. max channels for this platform is %d",8);
    uVar1 = 0;
  }
  return uVar1;
}

// 012EBA80  FUN_012eba80  size=29  [run]
void __fastcall FUN_012eba80(undefined4 param_1)

{
  thunk_FUN_012c263e(param_1);
  FUN_012ebaa0();
  thunk_FUN_012c2651();
  return;
}

// 012EBAA0  FUN_012ebaa0  size=633  [run]
void __fastcall FUN_012ebaa0(int param_1)

{
  uint local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_012941d9(DAT_020b8614);
    if (param_1 + 0x14c == DAT_020b8664) {
      DAT_020b8664 = *(int *)(DAT_020b8664 + 4);
      if (DAT_020b8664 == 0) {
        DAT_020b8668 = 0;
      }
    }
    else {
      for (local_8 = DAT_020b8664; (local_8 != 0 && (*(int *)(local_8 + 4) != param_1 + 0x14c));
          local_8 = *(int *)(local_8 + 4)) {
      }
      if ((local_8 != 0) &&
         (*(undefined4 *)(local_8 + 4) = *(undefined4 *)(*(int *)(local_8 + 4) + 4),
         param_1 + 0x14c == DAT_020b8668)) {
        DAT_020b8668 = local_8;
      }
    }
    *(undefined4 *)(param_1 + 0x150) = 0;
    DAT_020b866c = DAT_020b866c + -1;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    FUN_0129420c(DAT_020b8614);
  }
  if (*(int *)(param_1 + 0x194) != 0) {
    FUN_012f84a0(*(undefined4 *)(param_1 + 0x194));
    FUN_01293b75(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x198));
    *(undefined4 *)(param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_01294197(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    if (*(int *)(param_1 + 0xfc + local_c * 4) != 0) {
      FUN_0149caad(*(undefined4 *)(param_1 + 0xfc + local_c * 4));
      *(undefined4 *)(param_1 + 0xfc + local_c * 4) = 0;
    }
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    FUN_0149c97d(*(undefined4 *)(param_1 + 0x108));
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(int *)(param_1 + 0x168) != 0) {
    FUN_01293b75(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x168));
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_012c2b7a(*(undefined4 *)(param_1 + 0x144));
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  if (*(int *)(param_1 + 0x148) != 0) {
    FUN_01293b75(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x148));
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  return;
}

// 012EBD20  CriManaSoundAtomVoice_Float32::vf1C  size=116  [run]
undefined4 __fastcall CriManaSoundAtomVoice_Float32::vf1C(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x144) == 0) {
    local_c = 0;
  }
  else {
    iVar1 = FUN_012c2c26(*(undefined4 *)(param_1 + 0x144));
    if ((iVar1 == 0) || (iVar1 == 3)) {
      local_c = 0;
    }
    else if (iVar1 == 4) {
      local_c = 2;
    }
    else {
      local_c = 1;
    }
  }
  return local_c;
}

// 012EBDA0  CriManaSoundAtomVoice_Float32::vf24  size=252  [run]
void __thiscall
CriManaSoundAtomVoice_Float32::vf24(int param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x160) == 0 && *(int *)(param_1 + 0x164) == 0) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *param_3 = 1000;
    param_3[1] = 0;
  }
  else if (*(int *)(param_1 + 0x15c) == 1) {
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x1a0);
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(param_1 + 0x1a4);
    *param_3 = *(undefined4 *)(param_1 + 0x1a8);
    param_3[1] = *(undefined4 *)(param_1 + 0x1ac);
  }
  else {
    FUN_012c2c56(*(undefined4 *)(param_1 + 0x144),&local_c,&local_10);
    FUN_012ebea0(local_c,local_8,local_10,param_2,param_3);
    uVar1 = __aulldiv(*(undefined4 *)param_2,*(undefined4 *)((int)param_2 + 4),
                      *(int *)(param_1 + 0x17c),*(int *)(param_1 + 0x17c) >> 0x1f);
    uVar1 = __allmul(uVar1,*(int *)(param_1 + 0x178),*(int *)(param_1 + 0x178) >> 0x1f);
    *param_2 = uVar1;
  }
  return;
}

// 012EBEA0  FUN_012ebea0  size=523  [run]
void __thiscall
FUN_012ebea0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5,
            int *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  float local_c;
  float local_8;
  
  FUN_012f84d0(*(undefined4 *)(param_1 + 0x194));
  FUN_012f84f0(*(undefined4 *)(param_1 + 0x194),&local_14,&local_1c);
  uVar1 = *(uint *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = uVar1 + local_14;
  *(uint *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + local_10 + (uint)CARRY4(uVar1,local_14);
  *(undefined4 *)(param_1 + 0x1a8) = local_1c;
  *(undefined4 *)(param_1 + 0x1ac) = local_18;
  local_8 = (float)CONCAT44(param_3,param_2) / (float)param_4;
  local_c = (float)((-(float10)(longlong)
                               (((ulonglong)*(uint *)(param_1 + 0x1a4) & 0x80000000) << 0x20) +
                    (float10)(*(ulonglong *)(param_1 + 0x1a0) & 0x7fffffffffffffff)) /
                   (-(float10)(longlong)
                              (((ulonglong)*(uint *)(param_1 + 0x1ac) & 0x80000000) << 0x20) +
                   (float10)(*(ulonglong *)(param_1 + 0x1a8) & 0x7fffffffffffffff)));
  if (local_8 <= local_c) {
    if (0.032 <= local_c - local_8) {
      uVar1 = *(uint *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = uVar1 - local_14;
      *(uint *)(param_1 + 0x1a4) = (*(int *)(param_1 + 0x1a4) - local_10) - (uint)(uVar1 < local_14)
      ;
      *param_5 = *(undefined4 *)(param_1 + 0x1a0);
      param_5[1] = *(undefined4 *)(param_1 + 0x1a4);
      *param_6 = *(int *)(param_1 + 0x1a8);
      param_6[1] = *(int *)(param_1 + 0x1ac);
    }
    else {
      *param_5 = *(undefined4 *)(param_1 + 0x1a0);
      param_5[1] = *(undefined4 *)(param_1 + 0x1a4);
      *param_6 = *(int *)(param_1 + 0x1a8);
      param_6[1] = *(int *)(param_1 + 0x1ac);
    }
  }
  else {
    *param_5 = param_2;
    param_5[1] = param_3;
    *param_6 = param_4;
    param_6[1] = param_4 >> 0x1f;
    uVar2 = __allmul(param_2,param_3,*(undefined4 *)(param_1 + 0x1a8),
                     *(undefined4 *)(param_1 + 0x1ac));
    uVar2 = __aulldiv(uVar2,param_4,param_4 >> 0x1f);
    *(undefined8 *)(param_1 + 0x1a0) = uVar2;
  }
  FUN_012f84b0(*(undefined4 *)(param_1 + 0x194));
  return;
}

// 012EC0B0  CriManaSoundAtomVoice_Float32::vf14  size=146  [run]
void __fastcall CriManaSoundAtomVoice_Float32::vf14(int param_1)

{
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_012941d9(*(undefined4 *)(param_1 + 4));
    if (*(int *)(param_1 + 0x15c) == 1) {
      FUN_012c2c0e(*(undefined4 *)(param_1 + 0x144),1);
    }
    FUN_012c2bf2(*(undefined4 *)(param_1 + 0x144));
    FUN_012f84b0(*(undefined4 *)(param_1 + 0x194));
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x164) = 0;
    FUN_0129420c(*(undefined4 *)(param_1 + 4));
  }
  return;
}

// 012EC150  CriManaSoundAtomVoice_Float32::vf18  size=127  [run]
void __fastcall CriManaSoundAtomVoice_Float32::vf18(int param_1)

{
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_012941d9(*(undefined4 *)(param_1 + 4));
    FUN_012c2bfb(*(undefined4 *)(param_1 + 0x144));
    FUN_012f84d0(*(undefined4 *)(param_1 + 0x194));
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    FUN_0129420c(*(undefined4 *)(param_1 + 4));
  }
  return;
}

// 012EC1D0  CriManaSoundAtomVoice_Float32::vf20  size=238  [run]
void __thiscall CriManaSoundAtomVoice_Float32::vf20(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 local_14 [8];
  uint local_c;
  int local_8;
  
  if ((param_1[0x51] != 0) && (param_1[0x57] != param_2)) {
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (iVar2 == 1) {
      FUN_012941d9(param_1[1]);
      FUN_012c2c0e(param_1[0x51],param_2);
      if (param_2 == 1) {
        FUN_012f84d0(param_1[0x65]);
        FUN_012f84f0(param_1[0x65],&local_c,local_14);
        uVar1 = param_1[0x68];
        param_1[0x68] = uVar1 + local_c;
        param_1[0x69] = param_1[0x69] + local_8 + (uint)CARRY4(uVar1,local_c);
      }
      else {
        FUN_012f84b0(param_1[0x65]);
      }
      FUN_0129420c(param_1[1]);
    }
    param_1[0x57] = param_2;
  }
  return;
}

// 012EC2C0  CriManaSoundAtomVoice_Float32::vf34  size=134  [run]
void __thiscall CriManaSoundAtomVoice_Float32::vf34(int param_1,float param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  if (0.0 <= param_2) {
    local_c = param_2;
  }
  else {
    local_c = 0.0;
  }
  if (local_c <= 1.0) {
    local_10 = local_c;
  }
  else {
    local_10 = 1.0;
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_012c2c7d(*(undefined4 *)(param_1 + 0x144),local_10);
  }
  *(float *)(param_1 + 0x180) = local_10;
  return;
}

// 012EC350  CriManaSoundAtomVoice_Float32::vf38  size=63  [run]
float10 __fastcall CriManaSoundAtomVoice_Float32::vf38(int param_1)

{
  float10 fVar1;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x144) == 0) {
    local_8 = *(float *)(param_1 + 0x180);
  }
  else {
    fVar1 = (float10)FUN_012c2c8d(*(undefined4 *)(param_1 + 0x144));
    local_8 = (float)fVar1;
  }
  return (float10)local_8;
}

// 012EC390  CriManaSoundAtomVoice_Float32::vf3C  size=85  [run]
void __thiscall CriManaSoundAtomVoice_Float32::vf3C(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_012c2cbf(*(undefined4 *)(param_1 + 0x144),(float)param_2 / (float)param_3);
  }
  *(int *)(param_1 + 0x178) = param_2;
  *(int *)(param_1 + 0x17c) = param_3;
  return;
}

// 012EC3F0  CriManaSoundAtomVoice_Float32::vf40  size=65  [run]
void __thiscall CriManaSoundAtomVoice_Float32::vf40(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 == 1) {
    FUN_012c2caf(param_1[0x51],param_2);
    param_1[0x55] = param_2;
  }
  return;
}

// 012EC440  CriManaSoundAtomVoice_Float32::vf44  size=41  [run]
int __fastcall CriManaSoundAtomVoice_Float32::vf44(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1[0x55];
  }
  return iVar1;
}

// 012EC470  CriManaSoundAtomVoice_Float32::vf48  size=180  [run]
void __thiscall CriManaSoundAtomVoice_Float32::vf48(int param_1,int param_2,float param_3)

{
  float local_10;
  float local_c;
  
  if ((-1 < param_2) && (param_2 < 2)) {
    if (-1.0 <= param_3) {
      local_c = param_3;
    }
    else {
      local_c = -1.0;
    }
    if (local_c <= 1.0) {
      local_10 = local_c;
    }
    else {
      local_10 = 1.0;
    }
    if (*(int *)(param_1 + 0x144) != 0) {
      FUN_012c2ccf(*(undefined4 *)(param_1 + 0x144),param_2,local_10);
    }
    *(float *)(param_1 + 0x184 + param_2 * 4) = local_10;
    *(undefined4 *)(param_1 + 0x18c + param_2 * 4) = 1;
  }
  return;
}

// 012EC530  CriManaSoundAtomVoice_Float32::vf4C  size=50  [run]
float10 __thiscall CriManaSoundAtomVoice_Float32::vf4C(int param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2 < 0) || (1 < param_2)) {
    fVar1 = (float10)0;
  }
  else {
    fVar1 = (float10)*(float *)(param_1 + 0x184 + param_2 * 4);
  }
  return fVar1;
}

// 012EC570  FUN_012ec570  size=401  [run]
void __thiscall FUN_012ec570(int param_1,uint param_2)

{
  undefined4 local_8;
  
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0x18c) == 0) {
      *(undefined4 *)(param_1 + 0x184) = 0;
    }
    FUN_012c2ccf(*(undefined4 *)(param_1 + 0x144),0,*(undefined4 *)(param_1 + 0x184));
  }
  else if (param_2 == 2) {
    if (*(int *)(param_1 + 0x18c) == 0) {
      *(undefined4 *)(param_1 + 0x184) = 0xbf800000;
    }
    if (*(int *)(param_1 + 400) == 0) {
      *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
    }
    FUN_012c2ccf(*(undefined4 *)(param_1 + 0x144),0,*(undefined4 *)(param_1 + 0x184));
    FUN_012c2ccf(*(undefined4 *)(param_1 + 0x144),1,*(undefined4 *)(param_1 + 0x188));
  }
  else if (param_2 == 4) {
    FUN_012c2d34(*(undefined4 *)(param_1 + 0x144),0,0,0x3f800000);
    FUN_012c2d34(*(undefined4 *)(param_1 + 0x144),1,1,0x3f800000);
    FUN_012c2d34(*(undefined4 *)(param_1 + 0x144),2,4,0x3f800000);
    FUN_012c2d34(*(undefined4 *)(param_1 + 0x144),3,5,0x3f800000);
  }
  else {
    for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
      FUN_012c2d34(*(undefined4 *)(param_1 + 0x144),local_8,local_8,0x3f800000);
    }
  }
  return;
}

// 012EC710  FUN_012ec710  size=32  [run]
void FUN_012ec710(void)

{
  DAT_020b8774 = DAT_020b8774 + 1;
  if (DAT_020b8774 == 1) {
    FUN_012ef340();
  }
  return;
}

// 012EC730  FUN_012ec730  size=36  [run]
void FUN_012ec730(undefined4 *param_1)

{
  *param_1 = 0;
  DAT_020b8774 = DAT_020b8774 + -1;
  if (DAT_020b8774 == 0) {
    FUN_012ef410();
  }
  return;
}

// 012EC760  FUN_012ec760  size=23  [run]
bool FUN_012ec760(void)

{
  return DAT_020b8774 != 0;
}

// 012EC780  FUN_012ec780  size=90  [run]
int FUN_012ec780(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = FUN_012ef4f0();
  return iVar1 + 0x870;
}

// 012EC7E0  FUN_012ec7e0  size=36  [run]
void FUN_012ec7e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_012ec760();
  if (iVar1 == 0) {
    FUN_012ec810(param_1);
    FUN_012ec830();
  }
  FUN_012ec710();
  return;
}

// 012EC810  FUN_012ec810  size=19  [run]
void FUN_012ec810(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_012f82b0();
  return;
}

// 012EC830  FUN_012ec830  size=5  [run]
void FUN_012ec830(void)

{
  return;
}

// 012EC840  FUN_012ec840  size=35  [run]
undefined4 __thiscall FUN_012ec840(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *param_3 = 0;
  uVar1 = FUN_012f85a0(param_2,param_1);
  return uVar1;
}

// 012EC870  FUN_012ec870  size=55  [run]
void __thiscall
FUN_012ec870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int iVar1;
  
  *param_5 = 0;
  iVar1 = FUN_012f85d0(param_2,param_3,param_4,param_1);
  if (iVar1 != 1) {
    *param_5 = 0xffffffff;
  }
  return;
}

// 012EC8B0  FUN_012ec8b0  size=28  [run]
undefined4 __thiscall FUN_012ec8b0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_012f8660(param_1);
  return uVar1;
}

// 012EC8D0  FUN_012ec8d0  size=34  [run]
int FUN_012ec8d0(void)

{
  int iVar1;
  
  iVar1 = FUN_014a1d35(8);
  return iVar1 + 0x1b8;
}

// 012EC900  CriManaSoundAtomVoice_Float32::vf2C  size=11  [run]
void CriManaSoundAtomVoice_Float32::vf2C(void)

{
  return;
}

// 012EC910  CriManaSoundAtomVoice_Float32::vf30  size=158  [run]
int CriManaSoundAtomVoice_Float32::vf30(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 local_20 [2];
  int local_18;
  int local_8;
  
  FUN_012eb500(local_20,param_1,param_2,0x20002);
  iVar1 = FUN_012c2b2a(1,local_20,extraout_var);
  iVar2 = FUN_012eb150((float)local_18,local_20[0]);
  local_8 = iVar2 * 4 * param_1 * 3;
  iVar1 = iVar1 + local_8;
  iVar2 = FUN_012f83e0();
  return iVar1 + iVar2 + 0x92;
}

// 012EC9B0  CriManaSoundAtomVoice_Float32::vf00  size=124  [run]
undefined4 __thiscall
CriManaSoundAtomVoice_Float32::vf00(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_1c [24];
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    *(int *)(param_1 + 0x158) = param_3;
    *(undefined4 *)(param_1 + 0x154) = param_4;
    *(undefined4 *)(param_1 + 0x50) = param_2;
    FUN_012eb500(local_1c,param_3,param_4,0x20002);
    uVar1 = FUN_012c2b2a(1,local_1c);
    uVar1 = FUN_012eb590(local_1c,uVar1,4);
  }
  return uVar1;
}

// 012ECA30  CriManaSoundAtomVoice_Float32::vf04  size=19  [run]
void __fastcall CriManaSoundAtomVoice_Float32::vf04(undefined4 param_1)

{
  FUN_012eba80(param_1);
  return;
}

// 012ECA50  CriManaSoundAtomVoice_Float32::vf08  size=13  [run]
undefined4 CriManaSoundAtomVoice_Float32::vf08(void)

{
  return 0;
}

// 012ECA60  CriManaSoundAtomVoice_Float32::vf0C  size=37  [run]
void __thiscall
CriManaSoundAtomVoice_Float32::vf0C(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1b4) = param_2;
  *(undefined4 *)(param_1 + 0x1b0) = param_3;
  return;
}

// 012ECA90  CriManaSoundAtomVoice_Float32::vf10  size=13  [run]
void CriManaSoundAtomVoice_Float32::vf10(void)

{
  return;
}

// 012ECAA0  CriManaSoundAtomVoice_Float32::vf50  size=256  [run]
void __fastcall CriManaSoundAtomVoice_Float32::vf50(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_30;
  uint local_24;
  undefined4 local_1c [6];
  
  iVar1 = FUN_0149c97e(param_1[0x42],0);
  if (iVar1 != 0) {
    for (local_24 = 0; local_24 < (uint)param_1[0x56]; local_24 = local_24 + 1) {
      FUN_0149caf6(iVar1,0);
      local_1c[local_24] = *(undefined4 *)(iVar1 + 0x18 + local_24 * 4);
    }
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (iVar2 == 1) {
      local_30 = FUN_012ecba0(param_1[0x56],local_1c,param_1[0x5b]);
    }
    else {
      FUN_0129432c(local_1c[0],param_1[0x5c]);
      local_30 = param_1[0x5b];
    }
    FUN_0149caf6(iVar1,local_30 << 2);
    FUN_0149c9d3(param_1[0x42],1,iVar1);
  }
  return;
}

// 012ECBA0  FUN_012ecba0  size=171  [run]
uint __thiscall FUN_012ecba0(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_24 [6];
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    local_24[local_c] = *(undefined4 *)(param_3 + (uint)(byte)(&DAT_01b26a44)[local_c] * 4);
  }
  if (*(int *)(param_1 + 0x1b4) != 0) {
    local_8 = (**(code **)(param_1 + 0x1b4))
                        (*(undefined4 *)(param_1 + 0x1b0),param_2,local_24,param_4);
  }
  uVar1 = *(uint *)(param_1 + 0x160);
  *(uint *)(param_1 + 0x160) = local_8 + *(uint *)(param_1 + 0x160);
  *(uint *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + (uint)CARRY4(local_8,uVar1);
  return local_8;
}

// 012ECC50  FUN_012ecc50  size=42  [run]
int FUN_012ecc50(void)

{
  int iVar1;
  
  iVar1 = FUN_012f83e0();
  return iVar1 + 0x40;
}

// 012ECC80  FUN_012ecc80  size=228  [run]
int FUN_012ecc80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  
  iVar1 = FUN_014a1d79(0x38,param_1,"CriManaSystemTimer",4);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = CriManaSystemTimer::CriManaSystemTimer();
  }
  if (local_10 == 0) {
    local_10 = 0;
  }
  else {
    uVar2 = FUN_012f83e0();
    *(undefined4 *)(local_10 + 0x10) = uVar2;
    uVar2 = FUN_01293a92(param_1,*(undefined4 *)(local_10 + 0x10),"CriManaTimer",8);
    *(undefined4 *)(local_10 + 0xc) = uVar2;
    if (*(int *)(local_10 + 0xc) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined4 *)(local_10 + 8) = 0;
      *(undefined4 *)(local_10 + 0x28) = 0;
      *(undefined4 *)(local_10 + 0x2c) = 0;
      *(undefined4 *)(local_10 + 4) = param_1;
      *(undefined4 *)(local_10 + 0x18) = 0;
      *(undefined4 *)(local_10 + 0x1c) = 0;
      *(undefined4 *)(local_10 + 0x20) = 1;
      *(undefined4 *)(local_10 + 0x24) = 0;
      *(undefined4 *)(local_10 + 0x30) = 1;
      *(undefined4 *)(local_10 + 0x34) = 1;
    }
  }
  return local_10;
}

// 012ECD70  CriManaSystemTimer::CriManaSystemTimer  size=31  [run]
undefined4 * __fastcall CriManaSystemTimer::CriManaSystemTimer(undefined4 *param_1)

{
  CriMvSystemTimerInterface::CriMvSystemTimerInterface();
  *param_1 = vftable;
  return param_1;
}

