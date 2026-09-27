// src/misc/cItemObjectBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E86F0..00AC11A0, 24 functions

#include "mgrr.h"
#include "cItemObjectBase.h"

// 005E86F0  cItemObjectBase::vf300  size=33  [class]
undefined4 __fastcall cItemObjectBase::vf300(int param_1)

{
  if ((*(char *)(param_1 + 0x908) != '\0') && (*(float *)(param_1 + 0x8d8) <= 0.0)) {
    return 1;
  }
  return 0;
}

// 005E8720  FUN_005e8720  size=13  [callgraph]
void __thiscall FUN_005e8720(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x914) = param_2;
  return;
}

// 005E8730  FUN_005e8730  size=74  [callgraph]
void __fastcall FUN_005e8730(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x914) == 0) {
    fVar1 = (float10)FUN_00a92ff0();
    fVar1 = fVar1 * (float10)*(float *)(param_1 + 0x8c4) + (float10)*(float *)(param_1 + 0x91c);
    *(float *)(param_1 + 0x91c) = (float)fVar1;
    if ((float10)3.1415927 < fVar1) {
      *(undefined4 *)(param_1 + 0x91c) = 0xc0490fdb;
    }
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x91c);
  }
  return;
}

// 005E8780  FUN_005e8780  size=46  [callgraph]
void __fastcall FUN_005e8780(int param_1)

{
  *(undefined1 *)(param_1 + 0x908) = 1;
  *(undefined4 *)(param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x8c8) = 0;
  *(undefined4 *)(param_1 + 0x8d0) = 0;
  *(undefined4 *)(param_1 + 0x8cc) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}

// 005E9630  cItemObjectBase::vf40  size=331  [class]
undefined4 __fastcall cItemObjectBase::vf40(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = FUN_0094b730();
  *(undefined4 *)(param_1 + 0x870) = uVar2;
  *(undefined4 *)(param_1 + 0x874) = 0;
  iVar3 = Behavior::startup();
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
    *(undefined4 *)(param_1 + 0x90c) = 0;
    local_c = 1;
    local_8 = 1;
    local_4 = 0;
    iVar3 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar3 != 0) {
      FUN_00dd7240();
      *(undefined4 *)(param_1 + 0x890) = 0;
      *(undefined4 *)(param_1 + 0x894) = 0;
      *(undefined4 *)(param_1 + 0x898) = 0;
      *(undefined4 *)(param_1 + 0x89c) = 0x3f800000;
      iVar3 = *(int *)(param_1 + 0x4b0);
      *(undefined4 *)(param_1 + 0x91c) = 0;
      *(undefined2 *)(param_1 + 0x908) = 1;
      *(undefined4 *)(param_1 + 0x8d0) = 0;
      *(undefined1 *)(param_1 + 0x90b) = 0;
      *(undefined4 *)(param_1 + 0x8c8) = 0;
      *(undefined4 *)(param_1 + 0x8cc) = 0;
      *(undefined4 *)(param_1 + 0x8c0) = 0;
      fVar1 = *(float *)(*(int *)(param_1 + 0x870) + 4);
      *(undefined4 *)(param_1 + 0x910) = 0;
      *(undefined4 *)(param_1 + 0x914) = 0;
      *(undefined4 *)(param_1 + 0x918) = 0;
      *(float *)(param_1 + 0x8c4) = fVar1 * 0.017453292;
      *(undefined4 *)(param_1 + 0x91c) = 0;
      *(undefined4 *)(param_1 + 0x8d4) = 0;
      *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(*(int *)(param_1 + 0x870) + 0x2c);
      if ((((iVar3 == 0x70600) || (iVar3 == 0x70610)) || (iVar3 == 0x70620)) || (iVar3 == 0x70630))
      {
        FUN_00aa92c0(0);
      }
      if (iVar3 == 0x70640) {
        FUN_00aa92c0(0);
        *(undefined4 *)(param_1 + 0x914) = 1;
      }
      return 1;
    }
  }
  return 0;
}

// 005E9780  FUN_005e9780  size=1065  [between]
/* WARNING: Removing unreachable block (ram,0x005e9ad4) */
/* WARNING: Removing unreachable block (ram,0x005e99fc) */
/* WARNING: Removing unreachable block (ram,0x005e9924) */
/* WARNING: Removing unreachable block (ram,0x005e984c) */
/* WARNING: Removing unreachable block (ram,0x005e97e0) */
/* WARNING: Removing unreachable block (ram,0x005e98b8) */
/* WARNING: Removing unreachable block (ram,0x005e9990) */
/* WARNING: Removing unreachable block (ram,0x005e9a68) */
/* WARNING: Removing unreachable block (ram,0x005e9b51) */

void __thiscall FUN_005e9780(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(int *)(param_1 + 0x4b0) == 0x70200) && (1 < *(short *)(param_1 + 0x324))) &&
     (iVar1 = *(int *)(param_1 + 800), iVar1 != -0x70)) {
    uVar3 = 0;
    do {
      if ((&DAT_01645190)[uVar3 * 2] == param_2) {
        uVar2 = (&DAT_01645194)[uVar3 * 2];
        *(float *)(iVar1 + 0x8c) = (float)(uVar2 >> 0x18) * 0.003921569;
        *(float *)(iVar1 + 0x80) = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x84) = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x88) = (float)(uVar2 & 0xff) * 0.003921569;
      }
      if ((&DAT_01645198)[uVar3 * 2] == param_2) {
        uVar2 = (&DAT_0164519c)[uVar3 * 2];
        *(float *)(iVar1 + 0x8c) = (float)(uVar2 >> 0x18) * 0.003921569;
        *(float *)(iVar1 + 0x80) = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x84) = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x88) = (float)(uVar2 & 0xff) * 0.003921569;
      }
      if ((&DAT_016451a0)[uVar3 * 2] == param_2) {
        uVar2 = (&DAT_016451a4)[uVar3 * 2];
        *(float *)(iVar1 + 0x8c) = (float)(uVar2 >> 0x18) * 0.003921569;
        *(float *)(iVar1 + 0x80) = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x84) = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x88) = (float)(uVar2 & 0xff) * 0.003921569;
      }
      if ((&DAT_016451a8)[uVar3 * 2] == param_2) {
        uVar2 = (&DAT_016451ac)[uVar3 * 2];
        *(float *)(iVar1 + 0x8c) = (float)(uVar2 >> 0x18) * 0.003921569;
        *(float *)(iVar1 + 0x80) = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x84) = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x88) = (float)(uVar2 & 0xff) * 0.003921569;
      }
      if ((&DAT_016451b0)[uVar3 * 2] == param_2) {
        uVar2 = (&DAT_016451b4)[uVar3 * 2];
        *(float *)(iVar1 + 0x8c) = (float)(uVar2 >> 0x18) * 0.003921569;
        *(float *)(iVar1 + 0x80) = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x84) = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x88) = (float)(uVar2 & 0xff) * 0.003921569;
      }
      if ((&DAT_016451b8)[uVar3 * 2] == param_2) {
        uVar2 = (&DAT_016451bc)[uVar3 * 2];
        *(float *)(iVar1 + 0x8c) = (float)(uVar2 >> 0x18) * 0.003921569;
        *(float *)(iVar1 + 0x80) = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x84) = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x88) = (float)(uVar2 & 0xff) * 0.003921569;
      }
      if ((&DAT_016451c0)[uVar3 * 2] == param_2) {
        uVar2 = (&DAT_016451c4)[uVar3 * 2];
        *(float *)(iVar1 + 0x8c) = (float)(uVar2 >> 0x18) * 0.003921569;
        *(float *)(iVar1 + 0x80) = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x84) = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x88) = (float)(uVar2 & 0xff) * 0.003921569;
      }
      if ((&DAT_016451c8)[uVar3 * 2] == param_2) {
        uVar2 = (&DAT_016451cc)[uVar3 * 2];
        *(float *)(iVar1 + 0x8c) = (float)(uVar2 >> 0x18) * 0.003921569;
        *(float *)(iVar1 + 0x80) = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x84) = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x88) = (float)(uVar2 & 0xff) * 0.003921569;
      }
      uVar3 = uVar3 + 8;
    } while (uVar3 < 0x10);
    for (; uVar3 < 0x17; uVar3 = uVar3 + 1) {
      if ((&DAT_01645190)[uVar3 * 2] == param_2) {
        uVar2 = (&DAT_01645194)[uVar3 * 2];
        *(float *)(iVar1 + 0x8c) = (float)(uVar2 >> 0x18) * 0.003921569;
        *(float *)(iVar1 + 0x80) = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x84) = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        *(float *)(iVar1 + 0x88) = (float)(uVar2 & 0xff) * 0.003921569;
      }
    }
  }
  return;
}

// 005E9BB0  cItemObjectBase::vf44  size=133  [class]
void __fastcall cItemObjectBase::vf44(int param_1)

{
  *(undefined4 *)(param_1 + 0x874) = 0;
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x8f8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8e0));
  }
  RayCastManager::getWork(param_1 + 0x900);
  RayCastManager::getWork(param_1 + 0x904);
  if (*(int *)(param_1 + 0x8f8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8e0));
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00dd7270();
  Behavior::vf44();
  return;
}

// 005E9C40  cItemObjectBase::vf48  size=85  [class]
void __fastcall cItemObjectBase::vf48(int param_1)

{
  float10 fVar1;
  
  BehaviorDebrisActor::vf48();
  if (*(char *)(param_1 + 0x908) != '\0') {
    fVar1 = (float10)FUN_00a92ff0();
    *(float *)(param_1 + 0x8d8) = (float)((float10)*(float *)(param_1 + 0x8d8) - fVar1);
  }
  if (*(float *)(param_1 + 0x8d8) <= 0.0) {
    *(undefined4 *)(param_1 + 0x8d8) = 0;
  }
  if (*(int *)(param_1 + 0x910) != 0) {
    *(undefined4 *)(param_1 + 0x8d8) = 0;
    *(undefined1 *)(param_1 + 0x908) = 1;
    return;
  }
  return;
}

// 005E9CA0  FUN_005e9ca0  size=31  [between]
void __fastcall FUN_005e9ca0(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x910) == 0) {
    fVar1 = (float10)FUN_00a92ff0();
    *(float *)(param_1 + 0x54) =
         (float)(fVar1 * (float10)*(float *)(param_1 + 0x894) + (float10)*(float *)(param_1 + 0x54))
    ;
  }
  return;
}

// 005E9CC0  cItemObjectBase::vf54  size=610  [class]
void __fastcall cItemObjectBase::vf54(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  Behavior::vf54();
  iVar2 = FUN_00d467a0();
  if ((((iVar2 != 0) && (iVar2 = 0, param_1[0x244] == 0)) && (iVar3 = FUN_00d45b10(), iVar3 != 0))
     && ((param_1[0x241] != 0 && (((float)param_1[0x232] < 0.0 || (0.0 < (float)param_1[0x232]))))))
  {
    local_40 = 0.0;
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 1.0;
    local_24 = 1.0;
    local_30 = 0.0;
    local_48 = 0;
    local_2c = 0.0;
    local_28 = 0.0;
    iVar3 = FUN_009075e0(param_1 + 0x241,&local_48,&local_40,&local_30);
    if ((iVar3 != 1) || (local_48 == 0)) {
      *(undefined1 *)(param_1 + 0x242) = 0;
      return;
    }
    FUN_0112c170();
    local_44 = 0;
    if (0 < *(int *)(local_48 + 0x14)) {
      do {
        iVar3 = *(int *)(local_48 + 0x10);
        iVar4 = *(int *)(iVar3 + 0x50 + iVar2);
        if (*(char *)(iVar4 + 0x18) == '\x01') {
          iVar4 = *(char *)(iVar4 + 0x10) + iVar4;
        }
        else {
          iVar4 = 0;
        }
        iVar4 = (**(code **)(*param_1 + 0x304))(iVar4);
        if (iVar4 == 0) {
          iVar4 = (**(code **)(*param_1 + 0x308))(0);
        }
        if (iVar4 == 1) {
          fVar1 = *(float *)(iVar3 + 0x10 + iVar2);
          fStack_20 = (local_30 - local_40) * fVar1 + local_40;
          fStack_1c = (local_2c - local_3c) * fVar1 + local_3c;
          fStack_18 = (local_28 - local_38) * fVar1 + local_38;
          fStack_14 = (local_24 - local_34) * fVar1 + local_34;
          if ((float)param_1[0x232] < 0.0) {
            if (*(char *)((int)param_1 + 0x909) != '\0') {
              iVar2 = param_1[0x21c];
              if ((uint)*(byte *)((int)param_1 + 0x90b) < *(uint *)(iVar2 + 0x28)) {
                *(byte *)((int)param_1 + 0x90b) = *(byte *)((int)param_1 + 0x90b) + 1;
                param_1[0x234] = (int)((float)param_1[0x234] * 0.5);
                param_1[0x233] = 0;
                fVar1 = (float)param_1[0x232] * 0.25 * -1.0;
                param_1[0x232] = (int)fVar1;
                param_1[0x225] = 0;
                param_1[0x15] = (int)fStack_1c;
                if (fVar1 < *(float *)(iVar2 + 0x14)) {
                  *(undefined1 *)((int)param_1 + 0x90b) = *(undefined1 *)(iVar2 + 0x28);
                }
                *(undefined1 *)((int)param_1 + 0x90a) = 1;
                return;
              }
            }
            FUN_005e8780();
            param_1[0x15] = (int)fStack_1c;
            return;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x242) = 0;
        }
        local_44 = local_44 + 1;
        iVar2 = iVar2 + 0x60;
      } while (local_44 < *(int *)(local_48 + 0x14));
      return;
    }
  }
  return;
}

// 005EBA20  cItemObjectBase::vf304  size=144  [class]
undefined4 cItemObjectBase::vf304(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar4 = 1;
    if ((uVar1 != 0) && (*(int *)((-(uint)(uVar1 != 0) & uVar1) + 0x20) != 0)) {
      return 0;
    }
    iVar3 = FUN_008f7780(param_1);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x4b0) == 0x42000) {
        return 0;
      }
      uVar2 = *(undefined4 *)(iVar3 + 0x4b4);
      iVar3 = FUN_009f9480(uVar2);
      if ((((iVar3 == 0) && (iVar3 = FUN_009f94a0(uVar2), iVar3 == 0)) &&
          (iVar3 = FUN_009f9460(uVar2), iVar3 == 0)) && (iVar3 = FUN_009f94c0(uVar2), iVar3 == 0)) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// 00AA7300  cItemObjectBase::cItemObjectBase_10  size=50  [class]
undefined4 * __fastcall cItemObjectBase::cItemObjectBase_10(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x23e] = 0;
  FUN_00904d60();
  FUN_00904d60();
  return param_1;
}

// 00AA7340  cItemObjectBase::vf04  size=6  [class]
undefined * cItemObjectBase::vf04(void)

{
  return &DAT_01b35390;
}

// 00AA7350  cItemObjectBase::vf308  size=5  [class]
undefined4 cItemObjectBase::vf308(void)

{
  return 0;
}

// 00AA8C00  cItemObjectBase::vf00  size=30  [class]
undefined4 __thiscall cItemObjectBase::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_124();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AB1360  cItemObjectBase::cItemObjectBase_3  size=56  [class]
undefined4 * __fastcall cItemObjectBase::cItemObjectBase_3(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x23e] = 0;
  FUN_00904d60();
  FUN_00904d60();
  *param_1 = cItemBox::vftable;
  return param_1;
}

// 00AB13C0  cItemObjectBase::cItemObjectBase_2  size=56  [class]
undefined4 * __fastcall cItemObjectBase::cItemObjectBase_2(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x23e] = 0;
  FUN_00904d60();
  FUN_00904d60();
  *param_1 = cItemLeftHand::vftable;
  return param_1;
}

// 00AB1420  cItemObjectBase::cItemObjectBase_5  size=56  [class]
undefined4 * __fastcall cItemObjectBase::cItemObjectBase_5(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x23e] = 0;
  FUN_00904d60();
  FUN_00904d60();
  *param_1 = cItemFixBase::vftable;
  return param_1;
}

// 00AB1490  cItemObjectBase::cItemObjectBase_4  size=56  [class]
undefined4 * __fastcall cItemObjectBase::cItemObjectBase_4(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x23e] = 0;
  FUN_00904d60();
  FUN_00904d60();
  *param_1 = cItemChip::vftable;
  return param_1;
}

// 00AB1A60  cItemObjectBase::cItemObjectBase  size=56  [class]
undefined4 * __fastcall cItemObjectBase::cItemObjectBase(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x23e] = 0;
  FUN_00904d60();
  FUN_00904d60();
  *param_1 = cItemFixVRPdaDlc::vftable;
  return param_1;
}

// 00AB6700  cItemObjectBase::cItemObjectBase_6  size=67  [class]
undefined4 * __fastcall cItemObjectBase::cItemObjectBase_6(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x23e] = 0;
  FUN_00904d60();
  FUN_00904d60();
  *param_1 = cItemViscelaBase::vftable;
  Hw::cTexture::cTexture_6();
  return param_1;
}

// 00AC0D90  cItemObjectBase::cItemObjectBase_8  size=73  [class]
undefined4 * __fastcall cItemObjectBase::cItemObjectBase_8(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x23e] = 0;
  FUN_00904d60();
  FUN_00904d60();
  *param_1 = cItemViscelaBase::vftable;
  Hw::cTexture::cTexture_6();
  *param_1 = It0500::vftable;
  return param_1;
}

// 00AC0E10  cItemObjectBase::cItemObjectBase_9  size=73  [class]
undefined4 * __fastcall cItemObjectBase::cItemObjectBase_9(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x23e] = 0;
  FUN_00904d60();
  FUN_00904d60();
  *param_1 = cItemViscelaBase::vftable;
  Hw::cTexture::cTexture_6();
  *param_1 = It0510::vftable;
  return param_1;
}

// 00AC11A0  cItemObjectBase::cItemObjectBase_7  size=56  [class]
undefined4 * __fastcall cItemObjectBase::cItemObjectBase_7(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x23e] = 0;
  FUN_00904d60();
  FUN_00904d60();
  *param_1 = cItemFixVRPda::vftable;
  return param_1;
}

