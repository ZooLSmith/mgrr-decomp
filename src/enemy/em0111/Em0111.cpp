// src/enemy/em0111/Em0111.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004B7050..00AB7230, 15 functions

#include "types.h"

// 004B7050  Em0111::vf48  size=163  [class]
void __fastcall Em0111::vf48(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  BehaviorEmBase::vf48();
  piVar5 = &DAT_0163ed24;
  piVar6 = (int *)(param_1 + 0xdc8);
  do {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      if (((piVar3 != (int *)0x0) && (piVar3[0x19d] == 0)) && (*(int *)(param_1 + 0xfcc) == 0)) {
        iVar2 = *piVar3;
        iVar4 = FUN_00a8e520();
        (**(code **)(iVar2 + 0xf8))(iVar4 == 0);
      }
    }
    if ((*piVar6 == 0) && (iVar2 = 0, 0 < *piVar5)) {
      piVar3 = piVar6 + 7;
      do {
        if (*piVar3 != 0) {
          puVar1 = (uint *)(*piVar3 + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *piVar5);
    }
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 9;
  } while ((int)piVar5 < 0x163ed5c);
  return;
}

// 004B7100  Em0111::thunk_vf54  size=5  [class]
void __fastcall Em0111::thunk_vf54(int *param_1)

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

// 004B7110  FUN_004b7110  size=198  [callgraph]
void __fastcall FUN_004b7110(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    local_c = 0;
    do {
      if ((local_8 < 0) || (*(short *)(param_1 + 0x324) <= local_8)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 800) + local_c;
      }
      if ((*(byte *)(iVar4 + 0x38) & 1) != 0) {
        uVar2 = *(undefined4 *)(*(int *)(iVar4 + 0x60) + 0x40);
        iVar4 = 0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar6 = 0;
          do {
            iVar3 = *(int *)(param_1 + 800);
            iVar5 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
            if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,uVar2), iVar5 != 0)) {
              puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
              *puVar1 = *puVar1 | 1;
            }
            iVar4 = iVar4 + 1;
            iVar6 = iVar6 + 0x70;
          } while (iVar4 < *(short *)(param_1 + 0x324));
        }
      }
      local_c = local_c + 0x70;
      local_8 = local_8 + 1;
    } while (local_8 < *(short *)(param_1 + 0x324));
  }
  *(undefined4 *)(param_1 + 0xfd0) = 1;
  return;
}

// 004B71E0  FUN_004b71e0  size=103  [callgraph]
void __fastcall FUN_004b71e0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
    *(undefined4 *)(param_1 + 0xfd0) = 0;
    return;
  }
  do {
    iVar2 = *(int *)(param_1 + 800);
    iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
    if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0163eeb8), iVar3 != 0)) {
      puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x70;
  } while (iVar5 < *(short *)(param_1 + 0x324));
  *(undefined4 *)(param_1 + 0xfd0) = 0;
  return;
}

// 004BD640  Em0111::vf44  size=167  [class]
void __fastcall Em0111::vf44(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  iVar2 = 0xe;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a805f0();
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  iVar2 = *(int *)(param_1 + 0x7b4);
  if (iVar2 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar2);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  FUN_00a9d8a0();
  BehaviorEmBase::vf44();
  return;
}

// 004BD6F0  Em0111::vf3C  size=65  [class]
void Em0111::vf3C(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_009f8ae0(param_1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xe);
  return;
}

// 004CB0C0  Em0111::vf4C  size=198  [class]
void __fastcall Em0111::vf4C(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  BehaviorEmBase::vf4C();
  *(float *)(param_1 + 0xfc8) =
       *(float *)(param_1 + 0x910) * 0.016666668 + *(float *)(param_1 + 0xfc8);
  if ((DAT_01bea060 & 0x2000000) == 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
  }
  else {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return;
  }
  puVar4 = &DAT_01b34e80;
  (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
  iVar1 = FUN_00dd6d70(puVar4);
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    if ((iVar1 == 0) || (piVar2 = (int *)FUN_00a7c8a0(), piVar2 == (int *)0x0)) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01b34e80;
      (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
      iVar1 = FUN_00dd6d70(puVar4);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(uVar3 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(uVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(uVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(uVar3 + 0x5c);
    return;
  }
  return;
}

// 004CB190  Em0111::vf50  size=292  [class]
int __fastcall Em0111::vf50(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  
  BehaviorEmBase::vf50();
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar9 = &DAT_01b34e80;
    (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
    FUN_00dd6d70(puVar9);
  }
  if ((*(int *)(param_1 + 0x7b0) == 0) ||
     (((iVar1 = FUN_00a81330(), iVar1 != 0 && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
      ((*(uint *)(iVar1 + 0x4c0) & 1) != 0)))) {
    if (*(int *)(param_1 + 0xfc0) != 0) {
      *(undefined4 *)(param_1 + 0xfc0) = 0;
      FUN_00a937e0();
    }
  }
  else {
    FUN_008f3cb0(param_1);
    if (*(int *)(param_1 + 0xfc0) == 0) {
      *(undefined4 *)(param_1 + 0xfc0) = 1;
      piVar2 = (int *)(param_1 + 0xdc8);
      bVar8 = false;
      iVar1 = -0xe;
      uVar6 = 0;
      do {
        if ((bVar8 != iVar1 < 0) && (*piVar2 != 0)) {
          FUN_00a93910(uVar6);
        }
        uVar7 = uVar6 + 1;
        piVar2 = piVar2 + 9;
        bVar8 = SBORROW4(uVar7,0xe);
        iVar1 = uVar6 - 0xd;
        uVar6 = uVar7;
      } while (uVar7 < 0xe);
    }
  }
  iVar5 = 0;
  iVar1 = param_1 + 0xde8;
  do {
    iVar3 = FUN_00a81330();
    iVar4 = 0;
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar4 = iVar3, iVar3 != 0)) &&
       ((*(byte *)(iVar3 + 0x4c0) & 1) != 0)) {
      iVar4 = FUN_004b6df0(param_1,iVar1 + -0x14);
      *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) | 0x10000;
    }
    iVar5 = iVar5 + 1;
    iVar1 = iVar1 + 0x24;
  } while (iVar5 < 0xe);
  return iVar4;
}

// 004CB2C0  FUN_004cb2c0  size=389  [callgraph]
void __thiscall FUN_004cb2c0(int param_1,int param_2)

{
  uint *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  if ((param_2 < 0xe) && (piVar5 = (int *)(param_1 + (param_2 * 9 + 0x372) * 4), *piVar5 == 0)) {
    iVar3 = FUN_00a81330();
    if (*(int *)(param_1 + 0xa18) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
    }
    iVar6 = 0;
    *piVar5 = 1;
    if (0 < (int)(&DAT_0163ed24)[param_2]) {
      piVar5 = (int *)(param_1 + param_2 * 0x24 + 0xde4);
      do {
        if (*piVar5 != 0) {
          puVar1 = (uint *)(*piVar5 + 0x38);
          *puVar1 = *puVar1 | 1;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < (int)(&DAT_0163ed24)[param_2]);
    }
    iVar6 = *(int *)(param_1 + 0xdd4 + param_2 * 0x24);
    if (iVar6 != 0) {
      puVar2 = (ushort *)(iVar6 + 0xa2);
      *puVar2 = *puVar2 & 0xfff7;
    }
    iVar6 = *(int *)(param_1 + 0xdd8 + param_2 * 0x24);
    if (iVar6 != 0) {
      puVar2 = (ushort *)(iVar6 + 0xa2);
      *puVar2 = *puVar2 & 0xfff7;
    }
    iVar6 = *(int *)(param_1 + 0xddc + param_2 * 0x24);
    if (iVar6 != 0) {
      puVar2 = (ushort *)(iVar6 + 0xa2);
      *puVar2 = *puVar2 & 0xfff7;
    }
    iVar6 = *(int *)(param_1 + 0xde0 + param_2 * 0x24);
    if (iVar6 != 0) {
      puVar2 = (ushort *)(iVar6 + 0xa2);
      *puVar2 = *puVar2 & 0xfff7;
    }
    FUN_00a93910(param_2);
    if (*(int *)(param_1 + 0xa18) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
    }
    if ((iVar3 == 0) &&
       (iVar3 = FUN_00a82090("Em0110Arm",*(undefined4 *)(&DAT_0163f160 + param_2 * 4),0), iVar3 != 0
       )) {
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 != (int *)0x0) {
        FUN_004b6f80(param_2,*(undefined4 *)(param_1 + 0x4f0));
        (**(code **)(*piVar5 + 0x20))();
        (**(code **)(*piVar5 + 0xf8))(1);
        uVar4 = FUN_009f8b40();
        FUN_009f8ae0(uVar4);
      }
    }
  }
  return;
}

// 004D1A80  Em0111::vf32C  size=568  [class]
undefined4 __fastcall Em0111::vf32C(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined *puVar9;
  int local_10;
  int iStack_8;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar9 = &DAT_01b34e80;
      (**(code **)(*piVar4 + 4))(&DAT_01b34e80);
      iVar3 = FUN_00dd6d70(puVar9);
      if ((iVar3 != 0) &&
         ((((iVar3 = FUN_00a81330(), iVar3 != 0 && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
           ((*(uint *)(iVar3 + 0x4c0) & 1) != 0)) && (iVar3 = FUN_00a8e520(), iVar3 == 0)))) {
        return 0;
      }
    }
    iVar3 = param_1 + 0xde8;
    local_10 = 0;
    do {
      *(undefined4 *)(param_1 + 0x684) = 0;
      if ((local_10 < 0xe) && (*(int *)(iVar3 + -0x20) != 0)) {
        FUN_00ac2080(local_10);
        iVar5 = FUN_00a81330();
        if ((iVar5 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
          piVar8 = *(int **)(param_1 + 0x67c);
          piVar7 = piVar8 + *(int *)(param_1 + 0x684) * 0x54;
          if (piVar8 != piVar7) {
LAB_004d1b74:
            iVar5 = *piVar8;
            if ((((iVar5 == 0) || (iVar5 == 1)) ||
                ((iVar5 == 2 ||
                 (((iVar5 == 0x1b0 || (iVar5 == 0x147)) ||
                  (iVar5 = FUN_00a81330(), iVar5 == *(int *)(param_1 + 0x4f0))))))) ||
               ((((piVar8[0x23] & 0x400U) == 0 && ((piVar8[0x24] & 0x60000U) == 0)) &&
                ((piVar8[0x25] == 0 ||
                 (((iVar5 = FUN_00ac82f0(), iVar5 == 0 || (iVar5 = FUN_00ac8350(), iVar5 == 0)) &&
                  ((piVar8[0x25] == 0 || ((piVar8[0x23] & 0x200U) == 0)))))))))) goto LAB_004d1bf2;
            (**(code **)(*piVar4 + 0x1c))();
            iVar5 = 0;
            if ((*(int *)(param_1 + 0xfd0) == 0) && (iStack_8 = 0, 0 < (short)piVar4[0xc9])) {
              do {
                iVar2 = piVar4[200];
                iVar6 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
                if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0163eeb8), iVar6 != 0)) {
                  puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
                iStack_8 = iStack_8 + 1;
                iVar5 = iVar5 + 0x70;
              } while (iStack_8 < (short)piVar4[0xc9]);
            }
            FUN_004b6df0(param_1,iVar3 + -0x14);
            piVar4[0xd9] = piVar4[0xd9] | 0x10000;
            FUN_00a8e5d0(piVar4,piVar8,0);
          }
        }
      }
LAB_004d1c9c:
      local_10 = local_10 + 1;
      iVar3 = iVar3 + 0x24;
    } while (local_10 < 0xe);
  }
  return 0;
LAB_004d1bf2:
  piVar8 = piVar8 + 0x54;
  if (piVar8 == piVar7) goto LAB_004d1c9c;
  goto LAB_004d1b74;
}

// 004DA790  Em0111::vf40  size=759  [class]
undefined4 __fastcall Em0111::vf40(int *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = BehaviorEmBase::vf40();
  if (iVar1 != 0) {
    iVar1 = FUN_00a12210(2);
    iVar8 = 0;
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 4;
    }
    iVar1 = FUN_00a12210(3);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 4;
    }
    iVar1 = FUN_008ec660(param_1,0x40200000,0x3f99999a,0x41700000,0x41a00000,0x78,5,0);
    param_1[0x1d9] = iVar1;
    FUN_008e6d00();
    FUN_008e0ae0(0);
    FUN_008e5270(0x2000);
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    puVar3 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x1a0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 0x7f7fffee;
      *puVar3 = hkpAllCdPointCollector::vftable;
      puVar3[4] = puVar3 + 8;
      puVar3[6] = 0x80000008;
      puVar3[5] = 0;
      puVar3[1] = 0x7f7fffee;
      *puVar3 = CharacterControlPointCollectorEm0111::vftable;
    }
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    puVar4 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x1a0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = hkpAllCdPointCollector::vftable;
      puVar4[1] = 0x7f7fffee;
      puVar4[4] = puVar4 + 8;
      puVar4[6] = 0x80000008;
      puVar4[5] = 0;
      puVar4[1] = 0x7f7fffee;
      *puVar4 = CharacterControlPointCollectorEm0111::vftable;
    }
    FUN_008e0d70(puVar4,puVar3);
    iVar1 = param_1[0x1d9];
    if (*(int *)(iVar1 + 0x104) != 1) {
      *(undefined4 *)(iVar1 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
    }
    (**(code **)(*param_1 + 0x318))();
    uVar9 = 0x300;
    iVar1 = 0;
    piVar7 = param_1 + 0x37a;
    do {
      FUN_00a7c950();
      piVar7[-7] = uVar9;
      piVar7[-6] = iVar8;
      piVar7[-8] = 0;
      FUN_004cb2c0(iVar1);
      iVar8 = iVar8 + (&DAT_0163ed24)[iVar1];
      iVar10 = 4;
      piVar6 = piVar7 + -5;
      do {
        iVar5 = FUN_00a12210(uVar9);
        uVar9 = uVar9 + 1;
        *piVar6 = iVar5;
        if (9 < ((byte)uVar9 & 0xf)) {
          uVar9 = (uVar9 & 0xfffffff0) + 0x10;
        }
        piVar6 = piVar6 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      iVar10 = 0;
      if (0 < (int)(&DAT_0163ed24)[iVar1]) {
        piVar6 = piVar7 + -1;
        do {
          iVar5 = piVar7[-6] + iVar10;
          if ((iVar5 < 0) || ((short)param_1[0xc9] <= iVar5)) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 * 0x70 + param_1[200];
          }
          *piVar6 = iVar5;
          iVar10 = iVar10 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar10 < (int)(&DAT_0163ed24)[iVar1]);
      }
      iVar1 = iVar1 + 1;
      piVar7 = piVar7 + 9;
    } while (iVar1 < 0xe);
    if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
      param_1[0xd9] = param_1[0xd9] | 0x400000;
      *(undefined4 *)param_1[0xdc] = 0;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 4) = 0;
      *(undefined4 *)(param_1[0xdc] + 8) = 1;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 0xc) = 1;
    }
    uStack_20 = 0x3f666666;
    uStack_1c = 0x3f99999a;
    uStack_18 = 0x3f8ccccd;
    uStack_14 = 0x3e4ccccd;
    uStack_10 = 0x40400000;
    uStack_c = 0x40000000;
    FUN_00a8e4d0(&uStack_14,&uStack_20);
    param_1[0x3f2] = 0;
    param_1[0x3f1] = 0;
    param_1[0x3f4] = 1;
    FUN_004b71e0();
    return 1;
  }
  return 0;
}

// 00AADAD0  Em0111::Em0111  size=67  [class]
undefined4 * __fastcall Em0111::Em0111(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  param_1[0x370] = 0;
  FUN_00a7c930();
  iVar1 = 0xd;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00AADB20  Em0111::vf04  size=6  [class]
undefined * Em0111::vf04(void)

{
  return &DAT_01b34e94;
}

// 00AADB30  Em0111::vf2F8  size=1  [class]
void Em0111::vf2F8(void)

{
  return;
}

// 00AB7230  Em0111::vf00  size=30  [class]
undefined4 __thiscall Em0111::vf00(undefined4 param_1,byte param_2)

{
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

