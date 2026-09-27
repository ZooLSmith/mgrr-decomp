// src/havok/RigidBodyCollection.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008EC770..008F46D0, 81 functions

#include "mgrr.h"
#include "RigidBodyCollection.h"

// 008EC770  RigidBodyCollection::RigidBodyCollection_3  size=29  [class]
undefined4 * __fastcall RigidBodyCollection::RigidBodyCollection_3(undefined4 *param_1)

{
  *param_1 = vftable;
  HkPhysicsSystemContainer::HkPhysicsSystemContainer_2();
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}

// 008EC790  RigidBodyCollection::vf00  size=6  [class]
undefined * RigidBodyCollection::vf00(void)

{
  return &DAT_01b35da0;
}

// 008EC7B0  RigidBodyCollection::vf1C  size=4  [class]
undefined4 __fastcall RigidBodyCollection::vf1C(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 008EC7C0  RigidBodyCollection::vf04  size=39  [class]
undefined4 * __thiscall RigidBodyCollection::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  HkPhysicsSystemContainer::HkPhysicsSystemContainer_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008EC7F0  RigidBodyCollection::vf20  size=16  [class]
void RigidBodyCollection::vf20(undefined4 param_1)

{
  FUN_00912c40(param_1);
  return;
}

// 008EC800  RigidBodyCollection::vf2C  size=185  [class]
undefined4 * __thiscall RigidBodyCollection::vf2C(int *param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  pbVar2 = param_3;
  pbVar6 = &DAT_016416fa;
  pbVar3 = param_3;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_008ec830:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_008ec835;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_008ec830;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_008ec835:
  if ((iVar4 != 0) && (iVar4 = (**(code **)(*param_1 + 8))(), iVar4 != 0)) {
    iVar4 = (**(code **)(*param_1 + 0xc))();
    iVar7 = 0;
    if (0 < iVar4) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_3,iVar7);
        iVar5 = FUN_00916410(pbVar2);
        if (iVar5 != 0) {
          *param_2 = param_3;
          return param_2;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar4);
    }
    FUN_00910a40(0);
    return param_2;
  }
  FUN_00910a40(0);
  return param_2;
}

// 008EC8C0  RigidBodyCollection::vf30  size=137  [class]
undefined4 * __thiscall
RigidBodyCollection::vf30(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 == 0) {
    FUN_00910a40(0);
    return param_2;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))();
  uVar1 = param_3;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x14))(&param_3,iVar4);
      iVar3 = FUN_00916410(uVar1);
      if (iVar3 == 0) {
        *param_2 = param_3;
        return param_2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_00910a40(0);
  return param_2;
}

// 008EC950  RigidBodyCollection::vf34  size=137  [class]
undefined4 * __thiscall
RigidBodyCollection::vf34(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 == 0) {
    FUN_00910a40(0);
    return param_2;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))();
  uVar1 = param_3;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x14))(&param_3,iVar4);
      iVar3 = FUN_00916440(uVar1);
      if (iVar3 != 0) {
        *param_2 = param_3;
        return param_2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_00910a40(0);
  return param_2;
}

// 008ED030  RigidBodyCollection::vf24  size=27  [class]
undefined4 __thiscall RigidBodyCollection::vf24(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0xfff;
  }
  uVar1 = (**(code **)(*param_1 + 0x20))(param_2);
  return uVar1;
}

// 008ED050  RigidBodyCollection::vf28  size=144  [class]
int * __thiscall RigidBodyCollection::vf28(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  if (iVar1 == 0) {
    FUN_00910a40(0);
    return param_2;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))();
  iVar1 = param_3;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x14))(&param_3,iVar4);
      if ((param_3 != 0) && (iVar3 = FUN_0091a900(iVar1), iVar3 != 0)) {
        *param_2 = param_3;
        return param_2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_00910a40(0);
  return param_2;
}

// 008ED0E0  RigidBodyCollection::vf38  size=242  [class]
short __fastcall RigidBodyCollection::vf38(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int *piStack_4;
  
  piStack_4 = param_1;
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 == 0) {
    return -1;
  }
  FUN_004066f0();
  iVar2 = (**(code **)(*param_1 + 0xc))();
  sVar4 = 0;
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      (**(code **)(*param_1 + 0x14))(&piStack_4,iVar3);
      if (piStack_4 != (int *)0x0) {
        iVar3 = FUN_00910af0(&stack0x00000004);
        if (iVar3 == 0) {
          if (DAT_01885d68 != 1) {
            piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
            *piVar1 = *piVar1 + -1;
            if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
          return sVar4;
        }
      }
      sVar4 = sVar4 + 1;
      iVar3 = (int)sVar4;
    } while (iVar3 < iVar2);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return -1;
}

// 008ED1E0  RigidBodyCollection::vfE8  size=264  [class]
int __thiscall RigidBodyCollection::vfE8(int *param_1,undefined4 param_2,uint *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iStack_8;
  uint uStack_4;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004066f0();
  iVar2 = (**(code **)(*param_1 + 0xc))();
  iVar5 = 0;
  iVar6 = 0;
  uStack_4 = 1;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x14))(&iStack_8,iVar6);
      if ((iStack_8 != 0) && (iVar3 = FUN_00916410(param_2), iVar3 != 0)) {
        iVar5 = 1;
        uVar4 = FUN_00916340();
        if (param_4 != 0) {
          *param_3 = uVar4;
          if (DAT_01885d68 == 1) {
            return 1;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008ed2b8;
        }
        uStack_4 = uStack_4 & uVar4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
    if (iVar5 != 0) {
      *param_3 = uStack_4;
      goto LAB_008ed29f;
    }
  }
  *param_3 = 0;
LAB_008ed29f:
  if (DAT_01885d68 != 1) {
    iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008ed2b8:
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return iVar5;
}

// 008ED2F0  RigidBodyCollection::vfEC  size=20  [class]
undefined4 __thiscall RigidBodyCollection::vfEC(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piStack_4;
  
  piStack_4 = param_1;
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004066f0();
  iVar2 = (**(code **)(*param_1 + 0xc))();
  uVar4 = 0;
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x14))(&piStack_4,iVar5);
      if (piStack_4 != (int *)0x0) {
        uVar4 = 1;
        iVar3 = FUN_00916340();
        if (iVar3 != 0) {
          *param_2 = 1;
          goto LAB_008ed361;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  *param_2 = 0;
LAB_008ed361:
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return uVar4;
}

// 008ED304  FUN_008ed304  size=171  [between]
undefined4 FUN_008ed304(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_EDI;
  
  FUN_004066f0();
  iVar2 = (**(code **)(*unaff_EDI + 0xc))();
  uVar4 = 0;
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*unaff_EDI + 0x14))(&param_1,iVar5);
      if (param_1 != 0) {
        uVar4 = 1;
        iVar3 = FUN_00916340();
        if (iVar3 != 0) {
          *param_3 = 1;
          goto LAB_008ed361;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  *param_3 = 0;
LAB_008ed361:
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return uVar4;
}

// 008ED3B0  RigidBodyCollection::vfDC  size=165  [class]
void __thiscall RigidBodyCollection::vfDC(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_2;
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_2,iVar4);
        if (param_2 != 0) {
          if (iVar2 == 0) {
            FUN_00916370();
          }
          else {
            FUN_0091a8b0();
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008ED460  RigidBodyCollection::vfE4  size=20  [class]
int __thiscall RigidBodyCollection::vfE4(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piStack_4;
  
  piStack_4 = param_1;
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004066f0();
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x14))(&piStack_4,iVar5);
      if ((piStack_4 != (int *)0x0) && (iVar3 = FUN_0091a900(param_3), iVar3 != 0)) {
        if (param_2 == 0) {
          FUN_00916370();
        }
        else {
          FUN_0091a8b0();
        }
        iVar4 = iVar4 + 1;
        if (param_4 != 0) {
          if (DAT_01885d68 == 1) {
            return iVar4;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008ed4f7;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  if (DAT_01885d68 != 1) {
    iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008ed4f7:
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return iVar4;
}

// 008ED474  FUN_008ed474  size=204  [between]
int FUN_008ed474(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_EDI;
  
  FUN_004066f0();
  iVar4 = 0;
  iVar2 = (**(code **)(*unaff_EDI + 0xc))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*unaff_EDI + 0x14))(&param_1,iVar5);
      if ((param_1 != 0) && (iVar3 = FUN_0091a900(param_4), iVar3 != 0)) {
        if (param_3 == 0) {
          FUN_00916370();
        }
        else {
          FUN_0091a8b0();
        }
        iVar4 = iVar4 + 1;
        if (param_5 != 0) {
          if (DAT_01885d68 == 1) {
            return iVar4;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008ed4f7;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  if (DAT_01885d68 != 1) {
    iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008ed4f7:
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return iVar4;
}

// 008ED540  RigidBodyCollection::vfE0  size=252  [class]
int __thiscall
RigidBodyCollection::vfE0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piStack_4;
  
  piStack_4 = param_1;
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 == 0) || (param_3 == 0)) {
    return 0;
  }
  FUN_004066f0();
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x14))(&piStack_4,iVar5);
      if (piStack_4 != (int *)0x0) {
        if (param_5 == 0) {
          iVar3 = FUN_00916410(param_3);
        }
        else {
          iVar3 = FUN_00916460(param_3);
        }
        if (iVar3 != 0) {
          if (param_2 == 0) {
            FUN_00916370();
          }
          else {
            FUN_0091a8b0();
          }
          iVar4 = iVar4 + 1;
          if (param_4 != 0) {
            FUN_00406760();
            return iVar4;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return iVar4;
}

// 008ED640  RigidBodyCollection::vfF0  size=20  [class]
uint __thiscall RigidBodyCollection::vfF0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piStack_4;
  
  piStack_4 = param_1;
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004066f0();
  iVar2 = (**(code **)(*param_1 + 0xc))();
  iVar6 = 0;
  uVar5 = 1;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x14))(&piStack_4,iVar6);
      if (piStack_4 != (int *)0x0) {
        iVar3 = FUN_00916410(param_2);
        if (iVar3 != 0) {
          uVar4 = FUN_009163a0();
          if (param_3 != 0) {
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            return uVar4;
          }
          uVar5 = uVar5 & uVar4;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return uVar5;
}

// 008ED654  FUN_008ed654  size=240  [between]
uint FUN_008ed654(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_EDI;
  
  FUN_004066f0();
  iVar2 = (**(code **)(*unaff_EDI + 0xc))();
  iVar6 = 0;
  uVar5 = 1;
  if (0 < iVar2) {
    do {
      (**(code **)(*unaff_EDI + 0x14))(&param_1,iVar6);
      if (param_1 != 0) {
        iVar3 = FUN_00916410(param_3);
        if (iVar3 != 0) {
          uVar4 = FUN_009163a0();
          if (param_4 != 0) {
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            return uVar4;
          }
          uVar5 = uVar5 & uVar4;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return uVar5;
}

// 008ED750  RigidBodyCollection::vfF4  size=231  [class]
undefined4 __fastcall RigidBodyCollection::vfF4(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_4;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004066f0();
  iVar2 = (**(code **)(*param_1 + 0xc))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x14))(&iStack_4,iVar4);
      if (iStack_4 != 0) {
        iVar3 = FUN_009163a0();
        if (iVar3 != 0) {
          if (DAT_01885d68 != 1) {
            piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
            *piVar1 = *piVar1 + -1;
            if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
          return 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return 0;
}

// 008ED840  RigidBodyCollection::vfF8  size=155  [class]
void __thiscall RigidBodyCollection::vfF8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_2;
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_2,iVar4);
        if (param_2 != 0) {
          FUN_00912480(iVar2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008ED8E0  RigidBodyCollection::vfD4  size=85  [class]
void __thiscall RigidBodyCollection::vfD4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piStack_4;
  
  piStack_4 = param_1;
  iVar1 = (**(code **)(*param_1 + 8))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        (**(code **)(*param_1 + 0x14))(&piStack_4,iVar2);
        if (piStack_4 != (int *)0x0) {
          FUN_009234e0(param_2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return;
}

// 008ED940  RigidBodyCollection::vfD8  size=123  [class]
float10 __fastcall RigidBodyCollection::vfD8(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    fVar3 = (float10)0;
    if (iVar1 != 0) {
      fStack_c = (float)fVar3;
      iVar2 = 0;
      iStack_4 = iVar1;
      if (0 < iVar1) {
        do {
          (**(code **)(*param_1 + 0x14))(&iStack_8,iVar2);
          if (iStack_8 != 0) {
            fVar3 = (float10)FUN_00916030();
            fStack_c = (float)(fVar3 + (float10)fStack_c);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
      fVar3 = (float10)fStack_c / (float10)iStack_4;
    }
    return fVar3;
  }
  return (float10)0;
}

// 008ED9C0  RigidBodyCollection::vf3C  size=204  [class]
void __thiscall RigidBodyCollection::vf3C(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_24,iVar3);
        if (iStack_24 != 0) {
          FUN_00915da0(&uStack_20);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EDA90  RigidBodyCollection::vf44  size=253  [class]
void __thiscall
RigidBodyCollection::vf44(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_24,iVar4);
        if (((iStack_24 != 0) && (iVar3 = FUN_0091a900(param_3), iVar3 != 0)) &&
           (FUN_00915da0(&uStack_20), param_4 != 0)) {
          if (DAT_01885d68 == 1) {
            return;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008edb49;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008edb49:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EDB90  RigidBodyCollection::vf40  size=252  [class]
void __thiscall RigidBodyCollection::vf40(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_3 != 0)) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_24,iVar4);
        if (iStack_24 != 0) {
          iVar3 = FUN_00916410(param_3);
          if (iVar3 != 0) {
            FUN_00915da0(&uStack_20);
            if (param_4 != 0) {
              FUN_00406760();
              return;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EDC90  RigidBodyCollection::vf48  size=198  [class]
void __thiscall RigidBodyCollection::vf48(int *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_24,iVar3);
        if (iStack_24 != 0) {
          FUN_00915d60(&fStack_20);
          fStack_20 = param_2 * fStack_20;
          fStack_1c = param_2 * fStack_1c;
          fStack_18 = param_2 * fStack_18;
          fStack_14 = param_2 * fStack_14;
          FUN_00915da0(&fStack_20);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EDD60  RigidBodyCollection::vf54  size=241  [class]
void __thiscall RigidBodyCollection::vf54(int *param_1,float param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    fStack_20 = *param_3;
    fStack_1c = param_3[1];
    fStack_18 = param_3[2];
    fStack_14 = param_3[3];
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_34,iVar3);
        if (iStack_34 != 0) {
          FUN_00915d60(&fStack_30);
          fStack_30 = param_2 * fStack_30 + fStack_20;
          fStack_2c = param_2 * fStack_2c + fStack_1c;
          fStack_28 = param_2 * fStack_28 + fStack_18;
          fStack_24 = param_2 * fStack_24 + fStack_14;
          FUN_00915da0(&fStack_30);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EDE60  RigidBodyCollection::vf50  size=247  [class]
void __thiscall RigidBodyCollection::vf50(int *param_1,float param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_24,iVar4);
        if ((iStack_24 != 0) && (iVar3 = FUN_0091a900(param_3), iVar3 != 0)) {
          FUN_00915d60(&fStack_20);
          fStack_20 = param_2 * fStack_20;
          fStack_1c = param_2 * fStack_1c;
          fStack_18 = param_2 * fStack_18;
          fStack_14 = param_2 * fStack_14;
          FUN_00915da0(&fStack_20);
          if (param_4 != 0) {
            if (DAT_01885d68 == 1) {
              return;
            }
            iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
            goto LAB_008edf10;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008edf10:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EDF60  RigidBodyCollection::vf4C  size=249  [class]
void __thiscall RigidBodyCollection::vf4C(int *param_1,float param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_3 != 0)) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_24,iVar4);
        if (iStack_24 != 0) {
          iVar3 = FUN_00916410(param_3);
          if (iVar3 != 0) {
            FUN_00915d60(&fStack_20);
            fStack_20 = param_2 * fStack_20;
            fStack_1c = param_2 * fStack_1c;
            fStack_18 = param_2 * fStack_18;
            fStack_14 = param_2 * fStack_14;
            FUN_00915da0(&fStack_20);
            if (param_4 != 0) {
              FUN_00406760();
              return;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EE060  RigidBodyCollection::vf58  size=159  [class]
void __thiscall RigidBodyCollection::vf58(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piStack_4;
  
  piStack_4 = param_1;
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&piStack_4,iVar3);
        if (piStack_4 != (int *)0x0) {
          FUN_00915e80(param_2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EE100  RigidBodyCollection::vf60  size=211  [class]
void __thiscall
RigidBodyCollection::vf60(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_0091a900(param_3), iVar4 != 0)) &&
           (FUN_00915e80(param_2), iVar2 != 0)) {
          if (DAT_01885d68 == 1) {
            return;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008ee18d;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008ee18d:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EE1E0  RigidBodyCollection::vf5C  size=214  [class]
void __thiscall RigidBodyCollection::vf5C(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_00916410(param_3), iVar4 != 0)) &&
           (FUN_00915e80(param_2), iVar2 != 0)) {
          FUN_00406760();
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EE2C0  RigidBodyCollection::vf64  size=204  [class]
void __thiscall RigidBodyCollection::vf64(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_24,iVar3);
        if (iStack_24 != 0) {
          FUN_00915e00(&uStack_20);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EE390  RigidBodyCollection::vf6C  size=253  [class]
void __thiscall
RigidBodyCollection::vf6C(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_24,iVar4);
        if (((iStack_24 != 0) && (iVar3 = FUN_0091a900(param_3), iVar3 != 0)) &&
           (FUN_00915e00(&uStack_20), param_4 != 0)) {
          if (DAT_01885d68 == 1) {
            return;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008ee449;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008ee449:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EE490  RigidBodyCollection::vf68  size=252  [class]
void __thiscall RigidBodyCollection::vf68(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_3 != 0)) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_24,iVar4);
        if (iStack_24 != 0) {
          iVar3 = FUN_00916410(param_3);
          if (iVar3 != 0) {
            FUN_00915e00(&uStack_20);
            if (param_4 != 0) {
              FUN_00406760();
              return;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EE590  RigidBodyCollection::vf70  size=198  [class]
void __thiscall RigidBodyCollection::vf70(int *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_24,iVar3);
        if (iStack_24 != 0) {
          FUN_00915d80(&fStack_20);
          fStack_20 = param_2 * fStack_20;
          fStack_1c = param_2 * fStack_1c;
          fStack_18 = param_2 * fStack_18;
          fStack_14 = param_2 * fStack_14;
          FUN_00915e00(&fStack_20);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EE660  RigidBodyCollection::vf78  size=247  [class]
void __thiscall RigidBodyCollection::vf78(int *param_1,float param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_24,iVar4);
        if ((iStack_24 != 0) && (iVar3 = FUN_0091a900(param_3), iVar3 != 0)) {
          FUN_00915d80(&fStack_20);
          fStack_20 = param_2 * fStack_20;
          fStack_1c = param_2 * fStack_1c;
          fStack_18 = param_2 * fStack_18;
          fStack_14 = param_2 * fStack_14;
          FUN_00915e00(&fStack_20);
          if (param_4 != 0) {
            if (DAT_01885d68 == 1) {
              return;
            }
            iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
            goto LAB_008ee710;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008ee710:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EE760  RigidBodyCollection::vf74  size=249  [class]
void __thiscall RigidBodyCollection::vf74(int *param_1,float param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_3 != 0)) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_24,iVar4);
        if (iStack_24 != 0) {
          iVar3 = FUN_00916410(param_3);
          if (iVar3 != 0) {
            FUN_00915d80(&fStack_20);
            fStack_20 = param_2 * fStack_20;
            fStack_1c = param_2 * fStack_1c;
            fStack_18 = param_2 * fStack_18;
            fStack_14 = param_2 * fStack_14;
            FUN_00915e00(&fStack_20);
            if (param_4 != 0) {
              FUN_00406760();
              return;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EE860  RigidBodyCollection::vf7C  size=159  [class]
void __thiscall RigidBodyCollection::vf7C(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piStack_4;
  
  piStack_4 = param_1;
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&piStack_4,iVar3);
        if (piStack_4 != (int *)0x0) {
          FUN_00915ec0(param_2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EE900  RigidBodyCollection::vf84  size=211  [class]
void __thiscall
RigidBodyCollection::vf84(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_0091a900(param_3), iVar4 != 0)) &&
           (FUN_00915ec0(param_2), iVar2 != 0)) {
          if (DAT_01885d68 == 1) {
            return;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008ee98d;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008ee98d:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EE9E0  RigidBodyCollection::vf80  size=214  [class]
void __thiscall RigidBodyCollection::vf80(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_00916410(param_3), iVar4 != 0)) &&
           (FUN_00915ec0(param_2), iVar2 != 0)) {
          FUN_00406760();
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EEAC0  RigidBodyCollection::vf88  size=156  [class]
void __fastcall RigidBodyCollection::vf88(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iStack_4;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_4,iVar3);
        if (iStack_4 != 0) {
          FUN_0091a490();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
        return;
      }
    }
  }
  return;
}

// 008EEB60  RigidBodyCollection::vf8C  size=256  [class]
void __thiscall RigidBodyCollection::vf8C(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    iVar4 = 0;
    uStack_28 = param_3[2];
    uStack_24 = param_3[3];
    uStack_2c = param_3[1];
    uStack_30 = *param_3;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_34,iVar4);
        if (iStack_34 != 0) {
          iVar3 = FUN_0091a9e0();
          if (iVar3 == 0) {
            FUN_00915cb0(&uStack_20,&uStack_30);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EEC60  RigidBodyCollection::vf94  size=297  [class]
void __thiscall
RigidBodyCollection::vf94
          (int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    iVar4 = 0;
    uStack_28 = param_3[2];
    uStack_24 = param_3[3];
    uStack_2c = param_3[1];
    uStack_30 = *param_3;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_34,iVar4);
        if (iStack_34 != 0) {
          iVar3 = FUN_0091a9e0();
          if (iVar3 == 0) {
            iVar3 = FUN_0091a900(param_4);
            if (iVar3 != 0) {
              FUN_00915cb0(&uStack_20,&uStack_30);
              if (param_5 != 0) {
                FUN_00406760();
                return;
              }
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EED90  RigidBodyCollection::vf90  size=313  [class]
void __thiscall
RigidBodyCollection::vf90
          (int *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_4 != 0)) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    iVar4 = 0;
    uStack_28 = param_3[2];
    uStack_24 = param_3[3];
    uStack_2c = param_3[1];
    uStack_30 = *param_3;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_34,iVar4);
        if ((((iStack_34 != 0) && (iVar3 = FUN_0091a9e0(), iVar3 == 0)) &&
            (iVar3 = FUN_00916410(param_4), iVar3 != 0)) &&
           (FUN_00915cb0(&uStack_20,&uStack_30), param_5 != 0)) {
          FUN_00406760();
          return;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EEED0  RigidBodyCollection::vf98  size=169  [class]
void __thiscall RigidBodyCollection::vf98(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piStack_4;
  
  piStack_4 = param_1;
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&piStack_4,iVar3);
        if (piStack_4 != (int *)0x0) {
          FUN_00915d20(param_2,param_3);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EEF80  RigidBodyCollection::vfA0  size=221  [class]
void __thiscall
RigidBodyCollection::vfA0
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_5;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_5,iVar5);
        if (((param_5 != 0) && (iVar4 = FUN_0091a900(param_4), iVar4 != 0)) &&
           (FUN_00915d20(param_2,param_3), iVar2 != 0)) {
          if (DAT_01885d68 == 1) {
            return;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008ef017;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008ef017:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EF060  RigidBodyCollection::vf9C  size=224  [class]
void __thiscall
RigidBodyCollection::vf9C
          (int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_4 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_5;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_5,iVar5);
        if (((param_5 != 0) && (iVar4 = FUN_00916410(param_4), iVar4 != 0)) &&
           (FUN_00915d20(param_2,param_3), iVar2 != 0)) {
          FUN_00406760();
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EF140  RigidBodyCollection::vfA4  size=159  [class]
void __thiscall RigidBodyCollection::vfA4(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piStack_4;
  
  piStack_4 = param_1;
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&piStack_4,iVar3);
        if (piStack_4 != (int *)0x0) {
          FUN_00915f10(param_2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EF1E0  RigidBodyCollection::vfAC  size=211  [class]
void __thiscall
RigidBodyCollection::vfAC(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_0091a900(param_3), iVar4 != 0)) &&
           (FUN_00915f10(param_2), iVar2 != 0)) {
          if (DAT_01885d68 == 1) {
            return;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008ef26d;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008ef26d:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EF2C0  RigidBodyCollection::vfA8  size=214  [class]
void __thiscall RigidBodyCollection::vfA8(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_00916410(param_3), iVar4 != 0)) &&
           (FUN_00915f10(param_2), iVar2 != 0)) {
          FUN_00406760();
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EF3A0  RigidBodyCollection::vfB0  size=159  [class]
void __thiscall RigidBodyCollection::vfB0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piStack_4;
  
  piStack_4 = param_1;
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&piStack_4,iVar3);
        if (piStack_4 != (int *)0x0) {
          FUN_00915f60(param_2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EF440  RigidBodyCollection::vfB8  size=211  [class]
void __thiscall
RigidBodyCollection::vfB8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_0091a900(param_3), iVar4 != 0)) &&
           (FUN_00915f60(param_2), iVar2 != 0)) {
          if (DAT_01885d68 == 1) {
            return;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008ef4cd;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008ef4cd:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EF520  RigidBodyCollection::vfB4  size=214  [class]
void __thiscall RigidBodyCollection::vfB4(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_00916410(param_3), iVar4 != 0)) &&
           (FUN_00915f60(param_2), iVar2 != 0)) {
          FUN_00406760();
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EF600  RigidBodyCollection::vfBC  size=159  [class]
void __thiscall RigidBodyCollection::vfBC(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piStack_4;
  
  piStack_4 = param_1;
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&piStack_4,iVar3);
        if (piStack_4 != (int *)0x0) {
          FUN_00915fb0(param_2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EF6A0  RigidBodyCollection::vfC4  size=211  [class]
void __thiscall
RigidBodyCollection::vfC4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_0091a900(param_3), iVar4 != 0)) &&
           (FUN_00915fb0(param_2), iVar2 != 0)) {
          if (DAT_01885d68 == 1) {
            return;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008ef72d;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008ef72d:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EF780  RigidBodyCollection::vfC0  size=214  [class]
void __thiscall RigidBodyCollection::vfC0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_00916410(param_3), iVar4 != 0)) &&
           (FUN_00915fb0(param_2), iVar2 != 0)) {
          FUN_00406760();
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EF860  RigidBodyCollection::vfC8  size=30  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall RigidBodyCollection::vfC8(int *param_1)

{
  if (_DAT_01885d24 != 0.0) {
                    /* WARNING: Could not recover jumptable at 0x008ef879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xcc))();
    return;
  }
  return;
}

// 008EF880  RigidBodyCollection::vfCC  size=368  [class]
void __thiscall
RigidBodyCollection::vfCC(int *param_1,float *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0xc))();
    uStack_20 = *param_3;
    uStack_1c = param_3[1];
    uStack_18 = param_3[2];
    uStack_14 = param_3[3];
    iVar4 = 0;
    if (param_4 == 0) {
      fStack_30 = *param_2;
      fStack_2c = param_2[1];
      fStack_28 = param_2[2];
      fStack_24 = param_2[3];
      if (0 < iVar2) {
        do {
          (**(code **)(*param_1 + 0x14))(&iStack_34,iVar4);
          if ((iStack_34 != 0) && (iVar3 = FUN_0091aa30(), iVar3 == 0)) {
            FUN_00916190(&fStack_30,&uStack_20);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
      }
    }
    else if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&iStack_34,iVar4);
        if ((iStack_34 != 0) && (iVar3 = FUN_0091aa30(), iVar3 == 0)) {
          fVar5 = (float10)FUN_00916030();
          fStack_30 = (float)((float10)*param_2 * fVar5);
          fStack_2c = (float)((float10)param_2[1] * fVar5);
          fStack_28 = (float)(fVar5 * (float10)param_2[2]);
          FUN_00916190(&fStack_30,&uStack_20);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EF9F0  RigidBodyCollection::vfD0  size=155  [class]
void __thiscall RigidBodyCollection::vfD0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_2;
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_2,iVar4);
        if (param_2 != 0) {
          FUN_00911ce0(iVar2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EFA90  RigidBodyCollection::vfFC  size=155  [class]
void __thiscall RigidBodyCollection::vfFC(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_2;
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_2,iVar4);
        if (param_2 != 0) {
          FUN_00916500(iVar2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EFB30  RigidBodyCollection::vf104  size=174  [class]
void __thiscall RigidBodyCollection::vf104(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_2;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_2,iVar5);
        if ((param_2 != 0) && (iVar4 = FUN_0091a900(param_3), iVar4 != 0)) {
          FUN_00916500(iVar2);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EFBE0  RigidBodyCollection::vf100  size=187  [class]
void __thiscall RigidBodyCollection::vf100(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_2;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_2,iVar5);
        if ((param_2 != 0) && (iVar4 = FUN_00916410(param_3), iVar4 != 0)) {
          FUN_00916500(iVar2);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EFCA0  RigidBodyCollection::vf108  size=155  [class]
void __thiscall RigidBodyCollection::vf108(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_2;
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_2,iVar4);
        if (param_2 != 0) {
          FUN_0091a950(iVar2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EFD40  RigidBodyCollection::vf110  size=208  [class]
void __thiscall
RigidBodyCollection::vf110(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_0091a900(param_3), iVar4 != 0)) &&
           (FUN_0091a950(param_2), iVar2 != 0)) {
          if (DAT_01885d68 == 1) {
            return;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008efdcb;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008efdcb:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EFE10  RigidBodyCollection::vf10C  size=210  [class]
void __thiscall RigidBodyCollection::vf10C(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_00916410(param_3), iVar4 != 0)) &&
           (FUN_0091a950(param_2), iVar2 != 0)) {
          FUN_00406760();
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EFEF0  RigidBodyCollection::vf114  size=155  [class]
void __thiscall RigidBodyCollection::vf114(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_2;
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_2,iVar4);
        if (param_2 != 0) {
          FUN_0091a9a0(iVar2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008EFF90  RigidBodyCollection::vf11C  size=208  [class]
void __thiscall
RigidBodyCollection::vf11C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_0091a900(param_3), iVar4 != 0)) &&
           (FUN_0091a9a0(param_2), iVar2 != 0)) {
          if (DAT_01885d68 == 1) {
            return;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008f001b;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008f001b:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008F0060  RigidBodyCollection::vf118  size=210  [class]
void __thiscall RigidBodyCollection::vf118(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 != 0) && (param_3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_00916410(param_3), iVar4 != 0)) &&
           (FUN_0091a9a0(param_2), iVar2 != 0)) {
          FUN_00406760();
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008F0140  RigidBodyCollection::vf124  size=147  [class]
void __thiscall RigidBodyCollection::vf124(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  
  FUN_004066f0();
  iVar4 = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  uVar2 = param_2;
  if (0 < iVar3) {
    do {
      (**(code **)(*param_1 + 0x14))(&param_2,iVar4);
      if (unaff_ESI != 0) {
        FUN_00915bb0(0xf,uVar2);
      }
      iVar4 = iVar4 + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (iVar4 < iVar3);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008F01E0  FUN_008f01e0  size=153  [between]
void __fastcall FUN_008f01e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  int iVar3;
  int *piStack_4;
  
  piStack_4 = param_1;
  FUN_004066f0();
  iVar3 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x14))(&piStack_4,iVar3);
      if (unaff_EDI != 0) {
        FUN_00915c00(0x1f,piStack_4);
      }
      iVar3 = iVar3 + 1;
      iVar2 = (**(code **)(*param_1 + 0xc))();
    } while (iVar3 < iVar2);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008F0280  FUN_008f0280  size=168  [between]
void __thiscall FUN_008f0280(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  undefined4 unaff_retaddr;
  
  FUN_004066f0();
  iVar4 = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  uVar2 = param_2;
  if (0 < iVar3) {
    do {
      (**(code **)(*param_1 + 0x14))(&param_2,iVar4);
      if ((unaff_ESI != 0) && (iVar3 = FUN_00916410(uVar2), iVar3 != 0)) {
        FUN_00915c00(0x1f,unaff_retaddr);
      }
      iVar4 = iVar4 + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (iVar4 < iVar3);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008F0330  FUN_008f0330  size=97  [between]
void __thiscall FUN_008f0330(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  undefined4 unaff_retaddr;
  
  iVar3 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  uVar1 = param_2;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x14))(&param_2,iVar3);
      if ((unaff_ESI != 0) && (iVar2 = FUN_0091a900(uVar1), iVar2 != 0)) {
        FUN_00915c00(0x1f,unaff_retaddr);
      }
      iVar3 = iVar3 + 1;
      iVar2 = (**(code **)(*param_1 + 0xc))();
    } while (iVar3 < iVar2);
  }
  return;
}

// 008F03A0  FUN_008f03a0  size=171  [between]
void __thiscall FUN_008f03a0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_2;
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_2,iVar4);
        if (param_2 != 0) {
          if (param_3 == 0) {
            FUN_00915930(10,iVar2);
          }
          else {
            FUN_009158d0(10,iVar2);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008F0450  FUN_008f0450  size=190  [between]
void __thiscall FUN_008f0450(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_3;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_3,iVar5);
        if ((param_3 != 0) && (iVar4 = FUN_00916410(param_2), iVar4 != 0)) {
          if (param_4 == 0) {
            FUN_00915930(10,iVar2);
          }
          else {
            FUN_009158d0(10,iVar2);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008F05D0  RigidBodyCollection::vf128  size=358  [class]
bool __thiscall RigidBodyCollection::vf128(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 == 0) {
    return false;
  }
  FUN_004066f0();
  iVar2 = (**(code **)(*param_1 + 0xc))();
  iVar5 = 0;
  if (param_2 != 0) {
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_2,iVar5);
        if (param_2 != 0) {
          iVar3 = FUN_0091a9e0();
          if (iVar3 != 0) {
            iVar4 = iVar4 + 1;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    return iVar4 == iVar2;
  }
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x14))(&param_2,iVar5);
      if (param_2 != 0) {
        iVar4 = FUN_0091a9e0();
        if (iVar4 != 0) {
          if (DAT_01885d68 != 1) {
            piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
            *piVar1 = *piVar1 + -1;
            if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
          return true;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return false;
}

// 008F0770  RigidBodyCollection::startupPhysicsSystem  size=137  [class]
bool __thiscall RigidBodyCollection::startupPhysicsSystem(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_0092c060();
  iVar2 = (**(code **)(*piVar1 + 0x18))(param_2);
  param_1[4] = iVar2;
  if (iVar2 == 0) {
    return false;
  }
  uVar4 = 0;
  uVar3 = FUN_010093a0(0);
  iVar2 = FUN_010d8fb0(uVar3,uVar4);
  param_1[5] = iVar2;
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x10))) {
    if (*(int *)(iVar2 + 0x10) != 1) {
      FUN_00dd5650("[RigidBodyCollection::startupPhysicsSystem]: Physic System Num != 1 !!");
    }
    uVar3 = (**(code **)(*(int *)**(undefined4 **)(iVar2 + 0xc) + 0xc))();
    FUN_009043a0(uVar3);
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    return iVar2 != 0;
  }
  return false;
}

// 008F4670  RigidBodyCollection::RigidBodyCollection_2  size=61  [class]
undefined4 * __fastcall RigidBodyCollection::RigidBodyCollection_2(undefined4 *param_1)

{
  *param_1 = vftable;
  HkPhysicsSystemContainer::HkPhysicsSystemContainer_2();
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = RigidBodyCollision::vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x80000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80000000;
  param_1[0xe] = 0;
  return param_1;
}

// 008F46D0  RigidBodyCollection::RigidBodyCollection  size=133  [class]
void __fastcall RigidBodyCollection::RigidBodyCollection(undefined4 *param_1)

{
  *param_1 = RigidBodyCollision::vftable;
  HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  param_1[10] = 0;
  if (-1 < (int)param_1[0xb]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[9],param_1[0xb] * 4);
  }
  param_1[9] = 0;
  param_1[0xb] = 0x80000000;
  param_1[7] = 0;
  if (-1 < (int)param_1[8]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[6],param_1[8] * 4);
  }
  param_1[6] = 0;
  param_1[8] = 0x80000000;
  *param_1 = vftable;
  HkPhysicsSystemContainer::HkPhysicsSystemContainer_3();
  return;
}

