// src/collision/RigidBodyCollision.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008EC9E0..008F7760, 60 functions

#include "mgrr.h"
#include "HkRemovePhysicsSystem.h"
#include "RigidBodyCollision.h"

// 008EC9E0  RigidBodyCollision::vf08  size=26  [class]
undefined4 __fastcall RigidBodyCollision::vf08(int *param_1)

{
  int iVar1;
  
  if (param_1[5] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 008F0A10  RigidBodyCollision::vf0C  size=38  [class]
undefined4 __fastcall RigidBodyCollision::vf0C(int *param_1)

{
  int iVar1;
  
  if (param_1[5] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x1c))();
      return *(undefined4 *)(iVar1 + 0xc);
    }
  }
  return 0;
}

// 008F0A40  RigidBodyCollision::vf14  size=69  [class]
undefined4 __thiscall RigidBodyCollision::vf14(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 == 0) {
    FUN_00910a40(0);
    return param_2;
  }
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  FUN_00910a40(*(undefined4 *)(*(int *)(iVar1 + 8) + param_3 * 4));
  return param_2;
}

// 008F0A90  RigidBodyCollision::vf12C  size=87  [class]
undefined4 __thiscall RigidBodyCollision::vf12C(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (param_3 < *(int *)(iVar1 + 0xc)) {
      iVar1 = (**(code **)(*param_1 + 0x1c))();
      FUN_00910a40(*(undefined4 *)(*(int *)(iVar1 + 8) + param_3 * 4));
      return param_2;
    }
  }
  FUN_00910a40(0);
  return param_2;
}

// 008F0AF0  RigidBodyCollision::vf10  size=145  [class]
undefined4 * __thiscall
RigidBodyCollision::vf10(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 == 0) {
    FUN_00910a40(0);
    return param_2;
  }
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (0 < *(int *)(iVar1 + 0xc)) {
    do {
      iVar1 = (**(code **)(*param_1 + 0x1c))();
      FUN_00910a40(*(undefined4 *)(*(int *)(iVar1 + 8) + iVar2 * 4));
      iVar1 = FUN_00916410(param_3);
      if (iVar1 != 0) {
        *param_2 = param_3;
        return param_2;
      }
      iVar2 = iVar2 + 1;
      iVar1 = (**(code **)(*param_1 + 0x1c))();
    } while (iVar2 < *(int *)(iVar1 + 0xc));
  }
  FUN_00910a40(0);
  return param_2;
}

// 008F0B90  FUN_008f0b90  size=252  [between]
undefined4 __fastcall FUN_008f0b90(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_004066f0();
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 == 0) {
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008f0bc7:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 0xc)) {
    do {
      FUN_00910a40(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar4 * 4));
      iVar3 = FUN_009124b0();
      if (iVar3 == 0) {
        if (DAT_01885d68 == 1) {
          return 0;
        }
        iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
        goto LAB_008f0bc7;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + 0xc));
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return 1;
}

// 008F0C90  FUN_008f0c90  size=265  [between]
undefined4 __fastcall FUN_008f0c90(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_004066f0();
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 == 0) {
LAB_008f0caf:
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008f0cc7:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 0xc)) {
    do {
      FUN_00910a40(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar4 * 4));
      iVar3 = FUN_009124b0();
      if (iVar3 != 0) {
        if (DAT_01885d68 == 1) {
          return 0;
        }
        iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
        goto LAB_008f0cc7;
      }
      iVar3 = FUN_0091a9e0();
      if (iVar3 != 0) goto LAB_008f0caf;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + 0xc));
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return 1;
}

// 008F0DA0  FUN_008f0da0  size=252  [between]
undefined4 __fastcall FUN_008f0da0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_004066f0();
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 == 0) {
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008f0dd7:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 0xc)) {
    do {
      FUN_00910a40(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar4 * 4));
      iVar3 = FUN_0091a9e0();
      if (iVar3 == 0) {
        if (DAT_01885d68 == 1) {
          return 0;
        }
        iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
        goto LAB_008f0dd7;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + 0xc));
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return 1;
}

// 008F0EA0  FUN_008f0ea0  size=94  [between]
void FUN_008f0ea0(void)

{
  int *piVar1;
  
  FUN_004066f0();
  FUN_00904650(DAT_01885d20);
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 008F0F00  FUN_008f0f00  size=99  [between]
void FUN_008f0f00(int param_1)

{
  int *piVar1;
  
  FUN_004066f0();
  if (param_1 != 0) {
    FUN_00904680();
  }
  FUN_00904370();
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008F0FA0  FUN_008f0fa0  size=156  [between]
void __thiscall FUN_008f0fa0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_0091d410(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F1040  FUN_008f1040  size=156  [between]
void __thiscall FUN_008f1040(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_00917f30(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F10E0  FUN_008f10e0  size=156  [between]
void __thiscall FUN_008f10e0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_00917fe0(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F1220  FUN_008f1220  size=170  [between]
uint __thiscall FUN_008f1220(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    uVar4 = 1;
    iVar5 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        uVar3 = FUN_00912a90(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar5 * 4),param_2);
        uVar4 = uVar4 & uVar3;
        iVar5 = iVar5 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar5 < *(int *)(iVar2 + 0xc));
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    return uVar4;
  }
  return 0;
}

// 008F12D0  FUN_008f12d0  size=156  [between]
void __thiscall FUN_008f12d0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_0091d480(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F1370  FUN_008f1370  size=156  [between]
void __thiscall FUN_008f1370(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_00917f30(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F1410  FUN_008f1410  size=156  [between]
void __thiscall FUN_008f1410(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_00918100(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F1550  FUN_008f1550  size=170  [between]
uint __thiscall FUN_008f1550(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    uVar4 = 1;
    iVar5 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        uVar3 = FUN_00912ac0(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar5 * 4),param_2);
        uVar4 = uVar4 & uVar3;
        iVar5 = iVar5 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar5 < *(int *)(iVar2 + 0xc));
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    return uVar4;
  }
  return 0;
}

// 008F1600  FUN_008f1600  size=156  [between]
void __thiscall FUN_008f1600(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_00917bd0(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F16A0  FUN_008f16a0  size=186  [between]
void __thiscall FUN_008f16a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(*param_1 + 0x1c))();
  if (iVar3 != 0) {
    FUN_004066f0();
    iVar4 = 0;
    iVar3 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar3 + 0xc)) {
      do {
        iVar3 = (**(code **)(*param_1 + 0x1c))();
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 8) + iVar4 * 4);
        FUN_00910a40(uVar2);
        iVar3 = FUN_00916410(param_2);
        if (iVar3 != 0) {
          FUN_00917bd0(uVar2,param_3);
        }
        iVar4 = iVar4 + 1;
        iVar3 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar4 < *(int *)(iVar3 + 0xc));
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

// 008F1760  FUN_008f1760  size=156  [between]
void __thiscall FUN_008f1760(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_00917c50(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F1800  FUN_008f1800  size=186  [between]
void __thiscall FUN_008f1800(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(*param_1 + 0x1c))();
  if (iVar3 != 0) {
    FUN_004066f0();
    iVar4 = 0;
    iVar3 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar3 + 0xc)) {
      do {
        iVar3 = (**(code **)(*param_1 + 0x1c))();
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 8) + iVar4 * 4);
        FUN_00910a40(uVar2);
        iVar3 = FUN_00916410(param_2);
        if (iVar3 != 0) {
          FUN_00917c50(uVar2,param_3);
        }
        iVar4 = iVar4 + 1;
        iVar3 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar4 < *(int *)(iVar3 + 0xc));
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

// 008F18C0  FUN_008f18c0  size=156  [between]
void __thiscall FUN_008f18c0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_00917cf0(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F1960  FUN_008f1960  size=156  [between]
void __thiscall FUN_008f1960(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_00917d70(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F1A00  FUN_008f1a00  size=156  [between]
void __thiscall FUN_008f1a00(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_0091d330(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F1B40  FUN_008f1b40  size=170  [between]
uint __thiscall FUN_008f1b40(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    uVar4 = 1;
    iVar5 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        uVar3 = FUN_00912a30(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar5 * 4),param_2);
        uVar4 = uVar4 & uVar3;
        iVar5 = iVar5 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar5 < *(int *)(iVar2 + 0xc));
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    return uVar4;
  }
  return 0;
}

// 008F1BF0  FUN_008f1bf0  size=156  [between]
void __thiscall FUN_008f1bf0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_00917e10(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F1C90  FUN_008f1c90  size=156  [between]
void __thiscall FUN_008f1c90(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_00917e90(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F1D30  FUN_008f1d30  size=156  [between]
void __thiscall FUN_008f1d30(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_0091d3a0(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4),param_2);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar3 < *(int *)(iVar2 + 0xc));
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

// 008F1E70  FUN_008f1e70  size=170  [between]
uint __thiscall FUN_008f1e70(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 != 0) {
    FUN_004066f0();
    uVar4 = 1;
    iVar5 = 0;
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        uVar3 = FUN_00912a60(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar5 * 4),param_2);
        uVar4 = uVar4 & uVar3;
        iVar5 = iVar5 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar5 < *(int *)(iVar2 + 0xc));
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    return uVar4;
  }
  return 0;
}

// 008F1F20  RigidBodyCollision::vfD8  size=95  [class]
float10 __fastcall RigidBodyCollision::vfD8(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uStack_4;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  fVar3 = (float10)0;
  if (iVar1 != 0) {
    uStack_4 = (float)fVar3;
    iVar2 = 0;
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar1 + 0xc)) {
      do {
        (**(code **)(*param_1 + 0x1c))();
        fVar3 = (float10)FUN_011a2a30();
        uStack_4 = (float)(fVar3 + (float10)uStack_4);
        iVar2 = iVar2 + 1;
        iVar1 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar2 < *(int *)(iVar1 + 0xc));
    }
    fVar3 = (float10)uStack_4;
  }
  return fVar3;
}

// 008F1F80  HkRemovePhysicsSystem::HkRemovePhysicsSystem  size=169  [between]
void __fastcall HkRemovePhysicsSystem::HkRemovePhysicsSystem(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined **ppuStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  if (iVar1 != 0) {
    FUN_004066f0();
    iVar1 = FUN_009043e0();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_0092c170();
      iStack_8 = param_1[2];
      iStack_4 = param_1[3];
      ppuStack_c = vftable;
      (**(code **)(*piVar2 + 0x14))(&ppuStack_c);
    }
    FUN_009043f0();
    param_1[5] = 0;
    if (DAT_01885d68 != 1) {
      piVar2 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar2 = *piVar2 + -1;
      if (((*piVar2 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
        return;
      }
    }
  }
  return;
}

// 008F2030  RigidBodyCollision::startupPhysicsSystem  size=38  [class]
undefined4 RigidBodyCollision::startupPhysicsSystem(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = RigidBodyCollection::startupPhysicsSystem(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00904840();
  return 1;
}

// 008F3CB0  FUN_008f3cb0  size=194  [callgraph]
void __thiscall FUN_008f3cb0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uStack_4;
  
  if ((param_1[5] != 0) &&
     (uStack_4 = param_1, iVar3 = (**(code **)(*param_1 + 0x1c))(), iVar3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0x1c))();
    iVar5 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      do {
        if (*(int *)(*(int *)(iVar3 + 8) + iVar5 * 4) != 0) {
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 8) + iVar5 * 4);
          pcVar4 = (char *)FUN_0118fae0((int)&uStack_4 + 3);
          if (*pcVar4 == '\0') {
            FUN_0118fe70();
          }
          FUN_008f33d0(param_2,uVar2,"applyTransformFromObject");
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar3 + 0xc));
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

// 008F3D80  FUN_008f3d80  size=219  [callgraph]
void __thiscall FUN_008f3d80(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_4;
  
  if ((param_1[5] != 0) &&
     (uStack_4 = param_1, iVar3 = (**(code **)(*param_1 + 0x1c))(), iVar3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0x1c))();
    iVar6 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      do {
        if (*(int *)(*(int *)(iVar3 + 8) + iVar6 * 4) != 0) {
          iVar2 = *(int *)(*(int *)(iVar3 + 8) + iVar6 * 4);
          pcVar4 = (char *)FUN_0118fae0((int)&uStack_4 + 3);
          if (*pcVar4 == '\0') {
            FUN_0118fe70();
          }
          iVar5 = FUN_00fdbbd0(*(uint *)(iVar2 + 0x78) & 0xfffffffe,param_3);
          if (iVar5 != 0) {
            FUN_008f33d0(param_2,iVar2,"applyTransformFromObject");
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar3 + 0xc));
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

// 008F3E60  FUN_008f3e60  size=97  [callgraph]
void __thiscall FUN_008f3e60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (((param_1[5] != 0) && (iVar1 = (**(code **)(*param_1 + 0x1c))(), iVar1 != 0)) &&
     (iVar1 = (**(code **)(*param_1 + 0x1c))(), *(int *)(iVar1 + 0xc) != 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    iVar1 = **(int **)(iVar1 + 8);
    iVar2 = FUN_00fdbbd0(*(uint *)(iVar1 + 0x78) & 0xfffffffe,param_3);
    if (iVar2 == 0) {
      FUN_008f3840(param_2,iVar1,"mappingHk2PartsNullOnly");
    }
  }
  return;
}

// 008F3ED0  FUN_008f3ed0  size=71  [callgraph]
void __thiscall FUN_008f3ed0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[5] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x1c))();
      if (*(int *)(iVar1 + 0xc) != 0) {
        iVar1 = (**(code **)(*param_1 + 0x1c))();
        FUN_008f3840(param_2,**(undefined4 **)(iVar1 + 8),"mappingHk2PartsNullOnly");
      }
    }
  }
  return;
}

// 008F3F20  FUN_008f3f20  size=188  [callgraph]
void FUN_008f3f20(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  FUN_004066f0();
  iVar3 = param_3;
  iVar5 = 0;
  if (0 < *(int *)(param_3 + 0xc)) {
    do {
      iVar2 = *(int *)(iVar3 + 8);
      if (*(int *)(iVar2 + iVar5 * 4) != 0) {
        iVar2 = *(int *)(iVar2 + iVar5 * 4);
        pcVar4 = (char *)FUN_0118fae0(&param_3);
        if ((*pcVar4 == '\0') && (param_2 != 0)) {
          FUN_0118fe70();
        }
        if (*(int *)(iVar2 + 8) == 0) {
          FUN_011929d0(iVar2,1);
        }
        FUN_008f33d0(param_1,iVar2,"setAllTransformFromObject");
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar3 + 0xc));
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

// 008F3FE0  FUN_008f3fe0  size=51  [callgraph]
void __thiscall FUN_008f3fe0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[5] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (iVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x1c))();
      FUN_008f3f20(param_2,param_3,uVar2);
    }
  }
  return;
}

// 008F4020  FUN_008f4020  size=201  [callgraph]
void __thiscall FUN_008f4020(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uStack_4;
  
  if ((param_1[5] != 0) &&
     (uStack_4 = param_1, iVar3 = (**(code **)(*param_1 + 0x1c))(), iVar3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0x1c))();
    iVar5 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      do {
        if (*(int *)(*(int *)(iVar3 + 8) + iVar5 * 4) != 0) {
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 8) + iVar5 * 4);
          pcVar4 = (char *)FUN_0118fae0((int)&uStack_4 + 3);
          if ((*pcVar4 == '\0') && (param_3 != 0)) {
            FUN_0118fe70();
          }
          FUN_008f3840(param_2,uVar2,"setAllTransformToObject");
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar3 + 0xc));
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

// 008F40F0  FUN_008f40f0  size=209  [callgraph]
void __thiscall FUN_008f40f0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[5] != 0) {
    iVar3 = (**(code **)(*param_1 + 0x1c))();
    if (iVar3 != 0) {
      FUN_004066f0();
      iVar3 = (**(code **)(*param_1 + 0x1c))();
      iVar4 = (**(code **)(*param_1 + 0x1c))();
      if (0 < *(int *)(iVar3 + 0xc)) {
        iVar5 = 0;
        do {
          if (*(int *)(*(int *)(iVar4 + 8) + iVar5 * 4) != 0) {
            iVar2 = *(int *)(*(int *)(iVar4 + 8) + iVar5 * 4);
            if (*(char *)(iVar2 + 0xe8) == '\x01') {
              FUN_008f3840(param_2,iVar2,"setAllTransform");
            }
            else {
              FUN_008f33d0(param_2,iVar2,"setAllTransForm");
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar3 + 0xc));
      }
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
  }
  return;
}

// 008F41D0  FUN_008f41d0  size=61  [callgraph]
void __fastcall FUN_008f41d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008F4230  FUN_008f4230  size=955  [callgraph]
void FUN_008f4230(undefined4 *param_1,float *param_2)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 in_XMM3 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float local_110 [5];
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float afStack_a0 [12];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  local_b0 = param_2[0xc];
  local_ac = param_2[0xd];
  local_a8 = param_2[0xe];
  local_110[0] = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]);
  local_110[1] = SQRT(param_2[4] * param_2[4] + param_2[5] * param_2[5] + param_2[6] * param_2[6]);
  fVar5 = SQRT(param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8]);
  local_fc = param_2[6] / fVar5;
  local_f8 = param_2[10] / fVar5;
  fVar2 = (float10)FUN_00ddbaa0(-(param_2[2] / fVar5));
  local_f4 = (float)fVar2;
  fVar3 = (float10)fpatan((float10)local_fc,(float10)local_f8);
  local_60 = (float)fVar3;
  fVar4 = (float10)fpatan((float10)param_2[1] / (float10)local_110[1],
                          (float10)*param_2 / (float10)local_110[0]);
  fVar3 = (float10)0;
  local_b8 = (float)fVar3;
  local_bc = (float)fVar3;
  local_c0 = (float)fVar3;
  local_c4 = (float)fVar3;
  local_cc = (float)fVar3;
  local_d0 = (float)fVar3;
  local_d4 = (float)fVar3;
  local_d8 = (float)fVar3;
  local_e0 = (float)fVar3;
  local_e4 = (float)fVar3;
  local_e8 = (float)fVar3;
  local_ec = (float)fVar3;
  local_b4 = 0x3f800000;
  local_c8 = 0x3f800000;
  local_dc = 0x3f800000;
  local_f0 = 0x3f800000;
  if (fVar3 != fVar4) {
    D3DXMatrixRotationZ(local_50,(float)fVar4);
    D3DXMatrixMultiply(&local_f8,auStack_58,&local_f8);
    fVar2 = (float10)local_f4;
  }
  if ((float10)0 != fVar2) {
    D3DXMatrixRotationY(local_50,(float)fVar2);
    D3DXMatrixMultiply(&local_f8,auStack_58,&local_f8);
  }
  if (local_60 != 0.0) {
    D3DXMatrixRotationX(local_50,local_60);
    D3DXMatrixMultiply(&local_f8,auStack_58,&local_f8);
  }
  local_c0 = local_b0;
  local_bc = local_ac;
  local_b8 = local_a8;
  FUN_01005190(&local_f0);
  fVar5 = afStack_a0[5] + afStack_a0[0] + afStack_a0[10];
  if (fVar5 <= 0.0) {
    local_110[0] = 1.4013e-45;
    local_110[1] = 2.8026e-45;
    local_110[2] = 0.0;
    uVar1 = (uint)(afStack_a0[0] < afStack_a0[5]);
    if (afStack_a0[uVar1 * 5] < afStack_a0[10]) {
      uVar1 = 2;
    }
    fVar5 = local_110[uVar1];
    fVar6 = local_110[(int)fVar5];
    fVar7 = SQRT((afStack_a0[uVar1 * 5] - (afStack_a0[(int)fVar6 * 5] + afStack_a0[(int)fVar5 * 5]))
                 + 1.0);
    fVar8 = 0.5 / fVar7;
    local_110[uVar1] = fVar7 * 0.5;
    local_110[3] = (afStack_a0[(int)fVar6 + (int)fVar5 * 4] -
                   afStack_a0[(int)fVar5 + (int)fVar6 * 4]) * fVar8;
    local_110[(int)fVar5] =
         (afStack_a0[uVar1 + (int)fVar5 * 4] + afStack_a0[(int)fVar5 + uVar1 * 4]) * fVar8;
    local_110[(int)fVar6] =
         (afStack_a0[uVar1 + (int)fVar6 * 4] + afStack_a0[(int)fVar6 + uVar1 * 4]) * fVar8;
  }
  else {
    local_110[3] = SQRT(fVar5 + 1.0);
    local_110[2] = 0.5 / local_110[3];
    local_110[0] = (afStack_a0[6] - afStack_a0[9]) * local_110[2];
    local_110[1] = (afStack_a0[8] - afStack_a0[2]) * local_110[2];
    local_110[2] = (afStack_a0[1] - afStack_a0[4]) * local_110[2];
    local_110[3] = local_110[3] * 0.5;
  }
  fVar5 = local_110[2] * local_110[2] + local_110[0] * local_110[0];
  fVar6 = local_110[3] * local_110[3] + local_110[1] * local_110[1];
  fVar7 = local_110[0] * local_110[0] + local_110[2] * local_110[2];
  fVar8 = local_110[1] * local_110[1] + local_110[3] * local_110[3];
  fVar9 = fVar6 + fVar5;
  fVar5 = fVar5 + fVar6;
  fVar6 = fVar8 + fVar7;
  fVar7 = fVar7 + fVar8;
  auVar10._4_4_ = fVar5;
  auVar10._0_4_ = fVar9;
  auVar10._8_4_ = fVar6;
  auVar10._12_4_ = fVar7;
  auVar10 = rsqrtps(in_XMM3,auVar10);
  fVar8 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar13 = auVar10._12_4_;
  param_1[4] = (3.0 - fVar8 * fVar9 * fVar8) * fVar8 * 0.5 * local_110[0];
  param_1[5] = (3.0 - fVar11 * fVar5 * fVar11) * fVar11 * 0.5 * local_110[1];
  param_1[6] = (3.0 - fVar12 * fVar6 * fVar12) * fVar12 * 0.5 * local_110[2];
  param_1[7] = (3.0 - fVar13 * fVar7 * fVar13) * fVar13 * 0.5 * local_110[3];
  *param_1 = uStack_70;
  param_1[1] = uStack_6c;
  param_1[2] = uStack_68;
  param_1[3] = uStack_64;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  return;
}

// 008F45F0  FUN_008f45f0  size=60  [callgraph]
void __fastcall FUN_008f45f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008F4630  FUN_008f4630  size=61  [callgraph]
void __fastcall FUN_008f4630(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008F4670  RigidBodyCollision::RigidBodyCollision  size=61  [class]
undefined4 * __fastcall RigidBodyCollision::RigidBodyCollision(undefined4 *param_1)

{
  *param_1 = RigidBodyCollection::vftable;
  HkPhysicsSystemContainer::HkPhysicsSystemContainer();
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x80000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80000000;
  param_1[0xe] = 0;
  return param_1;
}

// 008F46B0  RigidBodyCollision::vf00  size=6  [class]
undefined * RigidBodyCollision::vf00(void)

{
  return &DAT_01b35da4;
}

// 008F46C0  RigidBodyCollision::vf120  size=15  [class]
undefined4 __fastcall RigidBodyCollision::vf120(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = FUN_009f8b40();
    return uVar1;
  }
  return 0;
}

// 008F4760  FUN_008f4760  size=2166  [callgraph]
void __thiscall FUN_008f4760(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  void *pvVar3;
  short sVar4;
  uint *puVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 in_XMM3 [16];
  undefined1 auVar19 [16];
  float fVar22;
  undefined4 uStack_18c;
  float fStack_188;
  int *local_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_170;
  int local_16c;
  float local_168 [3];
  int iStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined4 uStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  int *piStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  float afStack_114 [12];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  undefined1 auStack_cc [8];
  undefined1 auStack_c4 [64];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [48];
  int *piStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  fVar14 = (float)param_1[0xd];
  local_184 = param_1;
  local_168[0] = fVar14;
  if (fVar14 == 0.0) {
    local_16c = 1;
  }
  else {
    local_16c = FUN_009f8b40();
  }
  uStack_158 = (**(code **)(*param_1 + 0x1c))();
  iVar10 = _tls_index;
  if (param_3 != 0) {
    FUN_004066f0();
    puVar5 = (uint *)(-(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc));
    *puVar5 = *puVar5 | 0x10;
    puVar5[6] = 1;
    iVar10 = _tls_index;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_008f7f00(param_3,*(undefined4 *)((int)fVar14 + 0x4f0));
  bVar2 = *(byte *)(param_3 + 0xe8);
  FUN_004066f0();
  puVar5 = (uint *)(-(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc));
  *puVar5 = *puVar5 | 0x1000;
  puVar5[0xe] = (uint)bVar2;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar10 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  fVar11 = (float10)FUN_011a2a30();
  fStack_188 = (float)fVar11;
  FUN_004066f0();
  uVar6 = -(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc);
  puVar5 = (uint *)(uVar6 + 4);
  *puVar5 = *puVar5 | 2;
  *(float *)(uVar6 + 0x8c) = fStack_188;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar10 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  fVar11 = (float10)FUN_011a2a30();
  fStack_188 = (float)fVar11;
  FUN_004066f0();
  uVar6 = -(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc);
  puVar5 = (uint *)(uVar6 + 4);
  *puVar5 = *puVar5 | 4;
  *(float *)(uVar6 + 0x90) = fStack_188;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar10 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  fVar11 = (float10)FUN_011a2a30();
  fStack_188 = (float)fVar11;
  FUN_004066f0();
  pvVar3 = ThreadLocalStoragePointer;
  uVar6 = -(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc);
  puVar5 = (uint *)(uVar6 + 4);
  *puVar5 = *puVar5 | 8;
  *(float *)(uVar6 + 0x94) = fStack_188;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar10 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  uVar6 = *(uint *)(param_3 + 0xc);
  if (uVar6 != 0) {
    puVar5 = (uint *)(-(uint)(uVar6 != 0) & uVar6);
    *puVar5 = *puVar5 | 0x400;
    puVar5[0xc] = puVar5[0xc] | 0x200000;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar10 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_008f92a0(param_3,param_2);
  FUN_008f8c50(param_3,&uStack_154);
  piVar1 = local_184;
  FUN_008f32a0(param_3,uStack_154,local_16c);
  pcVar7 = (char *)FUN_0118fae0((int)&uStack_18c + 3);
  if (*pcVar7 == '\0') {
    FUN_0118fe70();
  }
  hkpConvexTranslateShape::hkpConvexTranslateShape_2
            (param_3,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)((int)local_168[0] + 0x70),
             *(undefined4 *)((int)local_168[0] + 0x74),*(undefined4 *)((int)local_168[0] + 0x78));
  sVar4 = (**(code **)(*piVar1 + 0x20))(param_3);
  uVar6 = (uint)sVar4;
  FUN_004066f0();
  puVar5 = (uint *)(-(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc));
  *puVar5 = *puVar5 | 0x4000;
  puVar5[0x10] = uVar6;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar10 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  uVar8 = lib::AllocatedArray<ImpactHistory::Unit>::AllocatedArray<ImpactHistory::Unit>
                    (&DAT_01b7c218);
  FUN_004066f0();
  puVar5 = (uint *)(-(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc));
  *puVar5 = *puVar5 | 0x40000000;
  puVar5[0x20] = uVar8;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  iVar10 = local_16c;
  if ((uVar6 != 0xffffffff) && (iVar9 = FUN_00a12210(uVar6), iVar9 != 0)) {
    local_184 = *(int **)(iVar9 + 0x40);
    fStack_180 = *(float *)(iVar9 + 0x44);
    fStack_17c = *(float *)(iVar9 + 0x48);
    local_168[0] = SQRT(*(float *)(iVar9 + 0x14) * *(float *)(iVar9 + 0x14) +
                        *(float *)(iVar9 + 0x10) * *(float *)(iVar9 + 0x10) +
                        *(float *)(iVar9 + 0x18) * *(float *)(iVar9 + 0x18));
    local_168[1] = SQRT(*(float *)(iVar9 + 0x20) * *(float *)(iVar9 + 0x20) +
                        *(float *)(iVar9 + 0x24) * *(float *)(iVar9 + 0x24) +
                        *(float *)(iVar9 + 0x28) * *(float *)(iVar9 + 0x28));
    fVar14 = SQRT(*(float *)(iVar9 + 0x38) * *(float *)(iVar9 + 0x38) +
                  *(float *)(iVar9 + 0x34) * *(float *)(iVar9 + 0x34) +
                  *(float *)(iVar9 + 0x30) * *(float *)(iVar9 + 0x30));
    fStack_188 = *(float *)(iVar9 + 0x28) / fVar14;
    uStack_18c = *(float *)(iVar9 + 0x38) / fVar14;
    fVar12 = (float10)FUN_00ddbaa0(-(*(float *)(iVar9 + 0x18) / fVar14));
    fStack_170 = (float)fVar12;
    fVar11 = (float10)fpatan((float10)fStack_188,(float10)uStack_18c);
    fStack_d4 = (float)fVar11;
    fVar13 = (float10)fpatan((float10)*(float *)(iVar9 + 0x14) / (float10)local_168[1],
                             (float10)*(float *)(iVar9 + 0x10) / (float10)local_168[0]);
    fVar11 = (float10)0;
    fStack_11c = (float)fVar11;
    fStack_120 = (float)fVar11;
    piStack_124 = (int *)(float)fVar11;
    fStack_128 = (float)fVar11;
    fStack_130 = (float)fVar11;
    fStack_134 = (float)fVar11;
    fStack_138 = (float)fVar11;
    fStack_13c = (float)fVar11;
    fStack_144 = (float)fVar11;
    fStack_148 = (float)fVar11;
    fStack_14c = (float)fVar11;
    fStack_150 = (float)fVar11;
    uStack_118 = 0x3f800000;
    uStack_12c = 0x3f800000;
    uStack_140 = 0x3f800000;
    uStack_154 = 0x3f800000;
    if (fVar11 != fVar13) {
      D3DXMatrixRotationZ(auStack_c4,(float)fVar13);
      D3DXMatrixMultiply(&iStack_15c,auStack_cc,&iStack_15c);
      fVar12 = (float10)fStack_170;
    }
    if ((float10)0 != fVar12) {
      D3DXMatrixRotationY(auStack_c4,(float)fVar12);
      D3DXMatrixMultiply(&iStack_15c,auStack_cc,&iStack_15c);
    }
    if (fStack_d4 != 0.0) {
      D3DXMatrixRotationX(auStack_c4,fStack_d4);
      D3DXMatrixMultiply(&iStack_15c,auStack_cc,&iStack_15c);
    }
    piStack_124 = local_184;
    fStack_120 = fStack_180;
    fStack_11c = fStack_17c;
    FUN_01005190(&uStack_154);
    iVar9 = local_16c;
    fVar14 = afStack_114[5] + afStack_114[0] + afStack_114[10];
    if (fVar14 <= 0.0) {
      local_168[0] = 1.4013e-45;
      local_168[1] = 2.8026e-45;
      local_168[2] = 0.0;
      uVar6 = (uint)(afStack_114[0] < afStack_114[5]);
      if (afStack_114[uVar6 * 5] < afStack_114[10]) {
        uVar6 = 2;
      }
      fVar14 = local_168[uVar6];
      fVar15 = local_168[(int)fVar14];
      fVar16 = SQRT((afStack_114[uVar6 * 5] -
                    (afStack_114[(int)local_168[(int)fVar14] * 5] + afStack_114[(int)fVar14 * 5])) +
                    1.0);
      fVar17 = 0.5 / fVar16;
      (&local_184)[uVar6] = (int *)(fVar16 * 0.5);
      fStack_178 = (afStack_114[(int)fVar15 + (int)fVar14 * 4] -
                   afStack_114[(int)fVar14 + (int)fVar15 * 4]) * fVar17;
      (&local_184)[(int)fVar14] =
           (int *)((afStack_114[uVar6 + (int)fVar14 * 4] + afStack_114[(int)fVar14 + uVar6 * 4]) *
                  fVar17);
      (&local_184)[(int)fVar15] =
           (int *)((afStack_114[uVar6 + (int)fVar15 * 4] + afStack_114[(int)fVar15 + uVar6 * 4]) *
                  fVar17);
    }
    else {
      fStack_178 = SQRT(fVar14 + 1.0);
      fStack_17c = 0.5 / fStack_178;
      local_184 = (int *)((afStack_114[6] - afStack_114[9]) * fStack_17c);
      fStack_180 = (afStack_114[8] - afStack_114[2]) * fStack_17c;
      fStack_17c = (afStack_114[1] - afStack_114[4]) * fStack_17c;
      fStack_178 = fStack_178 * 0.5;
      iVar9 = iVar10;
    }
    fVar14 = fStack_17c * fStack_17c + (float)local_184 * (float)local_184;
    fVar15 = fStack_178 * fStack_178 + fStack_180 * fStack_180;
    fVar16 = (float)local_184 * (float)local_184 + fStack_17c * fStack_17c;
    fVar17 = fStack_180 * fStack_180 + fStack_178 * fStack_178;
    fVar18 = fVar15 + fVar14;
    fVar14 = fVar14 + fVar15;
    fVar15 = fVar17 + fVar16;
    fVar16 = fVar16 + fVar17;
    auVar19._4_4_ = fVar14;
    auVar19._0_4_ = fVar18;
    auVar19._8_4_ = fVar15;
    auVar19._12_4_ = fVar16;
    auVar19 = rsqrtps(in_XMM3,auVar19);
    fVar17 = auVar19._0_4_;
    fVar20 = auVar19._4_4_;
    fVar21 = auVar19._8_4_;
    fVar22 = auVar19._12_4_;
    fStack_74 = (3.0 - fVar17 * fVar18 * fVar17) * fVar17 * 0.5 * (float)local_184;
    fStack_70 = (3.0 - fVar20 * fVar14 * fVar20) * fVar20 * 0.5 * fStack_180;
    fStack_6c = (3.0 - fVar21 * fVar15 * fVar21) * fVar21 * 0.5 * fStack_17c;
    fStack_68 = (3.0 - fVar22 * fVar16 * fVar22) * fVar22 * 0.5 * fStack_178;
    uStack_84 = uStack_e4;
    uStack_80 = uStack_e0;
    uStack_7c = uStack_dc;
    uStack_78 = uStack_d8;
    uStack_64 = 0x3f800000;
    uStack_60 = 0x3f800000;
    uStack_5c = 0x3f800000;
    uStack_58 = 0x3f800000;
    FUN_0100a440(auStack_54);
    fStack_178 = (float)uStack_18;
    local_184 = (int *)(((float)piStack_24 - *(float *)(iVar9 + 0x50)) * *(float *)(iVar9 + 0x70) +
                       *(float *)(iVar9 + 0x50));
    fStack_180 = (fStack_20 - *(float *)(iVar9 + 0x54)) * *(float *)(iVar9 + 0x74) +
                 *(float *)(iVar9 + 0x54);
    fStack_17c = (fStack_1c - *(float *)(iVar9 + 0x58)) * *(float *)(iVar9 + 0x78) +
                 *(float *)(iVar9 + 0x58);
    piStack_24 = local_184;
    fStack_20 = fStack_180;
    fStack_1c = fStack_17c;
    FUN_011a0170(auStack_54);
  }
  FUN_01271cb0(*(undefined4 *)(iStack_15c + 0x14),*(undefined4 *)(iStack_15c + 0x18),param_3,
               0x3fc00000);
  return;
}

// 008F4FE0  FUN_008f4fe0  size=2466  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_008f4fe0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint *puVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  float fVar19;
  float local_1d0 [4];
  undefined4 uStack_1c0;
  float local_1bc [16];
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  undefined1 auStack_170 [12];
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  float local_128 [2];
  undefined1 auStack_120 [12];
  undefined4 local_114;
  float afStack_110 [12];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [64];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [76];
  
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 == 0) {
    local_164 = 1;
  }
  else {
    local_164 = FUN_009f8b40();
  }
  iVar4 = _tls_index;
  if (param_3 != 0) {
    FUN_004066f0();
    puVar6 = (uint *)(-(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc));
    *puVar6 = *puVar6 | 0x10;
    puVar6[6] = 1;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar4 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  if (iVar3 != 0) {
    FUN_008f7f00(param_3,*(undefined4 *)(iVar3 + 0x4f0));
  }
  bVar2 = *(byte *)(param_3 + 0xe8);
  FUN_004066f0();
  puVar6 = (uint *)(-(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc));
  *puVar6 = *puVar6 | 0x1000;
  puVar6[0xe] = (uint)bVar2;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar4 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = (uint *)(-(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc));
  *puVar6 = *puVar6 | 0x4000;
  puVar6[0x10] = 0xffffffff;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar4 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  fVar8 = (float10)FUN_011a2a30();
  FUN_004066f0();
  uVar7 = -(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc);
  puVar6 = (uint *)(uVar7 + 4);
  *puVar6 = *puVar6 | 2;
  *(float *)(uVar7 + 0x8c) = (float)fVar8;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar4 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  fVar8 = (float10)FUN_011a2a30();
  FUN_004066f0();
  uVar7 = -(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc);
  puVar6 = (uint *)(uVar7 + 4);
  *puVar6 = *puVar6 | 4;
  *(float *)(uVar7 + 0x90) = (float)fVar8;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar4 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  fVar8 = (float10)FUN_011a2a30();
  FUN_004066f0();
  pvVar5 = ThreadLocalStoragePointer;
  uVar7 = -(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc);
  puVar6 = (uint *)(uVar7 + 4);
  *puVar6 = *puVar6 | 8;
  *(float *)(uVar7 + 0x94) = (float)fVar8;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar4 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  uVar7 = *(uint *)(param_3 + 0xc);
  if (uVar7 != 0) {
    puVar6 = (uint *)(-(uint)(uVar7 != 0) & uVar7);
    *puVar6 = *puVar6 | 0x400;
    puVar6[0xc] = puVar6[0xc] | 0x200000;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar4 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_008f92a0(param_3,param_2);
  FUN_008f8c50(param_3,&local_114);
  FUN_008f32a0(param_3,local_114,local_164);
  if (iVar3 != 0) {
    hkpConvexTranslateShape::hkpConvexTranslateShape_2
              (param_3,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(iVar3 + 0x70),
               *(undefined4 *)(iVar3 + 0x74),*(undefined4 *)(iVar3 + 0x78));
  }
  uVar7 = lib::AllocatedArray<ImpactHistory::Unit>::AllocatedArray<ImpactHistory::Unit>
                    (&DAT_01b7c218);
  FUN_004066f0();
  puVar6 = (uint *)(-(uint)(*(uint *)(param_3 + 0xc) != 0) & *(uint *)(param_3 + 0xc));
  *puVar6 = *puVar6 | 0x40000000;
  puVar6[0x20] = uVar7;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar4 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  if (iVar3 == 0) {
    local_128[0] = 0.0;
    local_12c = 0.0;
    local_130 = 0.0;
    local_134 = 0;
    local_13c = 0.0;
    local_140 = 0.0;
    local_144 = 0;
    local_148 = 0.0;
    local_150 = 0.0;
    local_154 = 0;
    local_158 = 0.0;
    local_15c = 0.0;
    local_128[1] = 1.0;
    local_138 = 1.0;
    local_14c = 1.0;
    local_160 = 1.0;
  }
  else {
    D3DXMatrixTranslation
              (&local_160,*(undefined4 *)(iVar3 + 0x50),*(undefined4 *)(iVar3 + 0x54),
               *(undefined4 *)(iVar3 + 0x58));
    local_1bc[0xd] = 0.0;
    local_1bc[0xc] = 0.0;
    local_1bc[0xb] = 0.0;
    local_1bc[10] = 0.0;
    local_1bc[8] = 0.0;
    local_1bc[7] = 0.0;
    local_1bc[6] = 0.0;
    local_1bc[5] = 0.0;
    local_1bc[3] = 0.0;
    local_1bc[2] = 0.0;
    local_1bc[1] = 0.0;
    local_1bc[0] = 0.0;
    local_1bc[0xe] = 1.0;
    local_1bc[9] = 1.0;
    local_1bc[4] = 1.0;
    uStack_1c0 = 0x3f800000;
    if (*(float *)(iVar3 + 0x98) != 0.0) {
      D3DXMatrixRotationZ(auStack_120,*(undefined4 *)(iVar3 + 0x98));
      D3DXMatrixMultiply(local_1d0 + 2,local_128,local_1d0 + 2);
    }
    if (*(float *)(iVar3 + 0x94) != 0.0) {
      D3DXMatrixRotationY(auStack_120,*(undefined4 *)(iVar3 + 0x94));
      D3DXMatrixMultiply(local_1d0 + 2,local_128,local_1d0 + 2);
    }
    if (*(float *)(iVar3 + 0x90) != 0.0) {
      D3DXMatrixRotationX(auStack_120,*(undefined4 *)(iVar3 + 0x90));
      D3DXMatrixMultiply(local_1d0 + 2,local_128,local_1d0 + 2);
    }
    D3DXMatrixMultiply(auStack_170,&uStack_1c0,auStack_170);
  }
  local_1d0[0] = local_130;
  local_1d0[1] = local_12c;
  local_1d0[2] = local_128[0];
  local_1bc[0] = SQRT(local_158 * local_158 + local_160 * local_160 + local_15c * local_15c);
  local_1bc[1] = SQRT(local_148 * local_148 + local_150 * local_150 + local_14c * local_14c);
  fVar13 = SQRT(local_138 * local_138 + local_140 * local_140 + local_13c * local_13c);
  fVar12 = local_148 / fVar13;
  fVar11 = local_138 / fVar13;
  fVar9 = (float10)FUN_00ddbaa0(-(local_158 / fVar13));
  fVar8 = (float10)fpatan((float10)fVar12,(float10)fVar11);
  fStack_d0 = (float)fVar8;
  fVar10 = (float10)fpatan((float10)local_15c / (float10)local_1bc[1],
                           (float10)local_160 / (float10)local_1bc[0]);
  fVar8 = (float10)0;
  fStack_178 = (float)fVar8;
  fStack_17c = (float)fVar8;
  local_1bc[0xf] = (float)fVar8;
  local_1bc[0xe] = (float)fVar8;
  local_1bc[0xc] = (float)fVar8;
  local_1bc[0xb] = (float)fVar8;
  local_1bc[10] = (float)fVar8;
  local_1bc[9] = (float)fVar8;
  local_1bc[7] = (float)fVar8;
  local_1bc[6] = (float)fVar8;
  local_1bc[5] = (float)fVar8;
  local_1bc[4] = (float)fVar8;
  uStack_174 = 0x3f800000;
  local_1bc[0xd] = 1.0;
  local_1bc[8] = 1.0;
  local_1bc[3] = 1.0;
  if (fVar8 != fVar10) {
    D3DXMatrixRotationZ(auStack_c0,(float)fVar10);
    D3DXMatrixMultiply(local_1bc + 1,auStack_c8,local_1bc + 1);
    fVar9 = (float10)(float)fVar9;
  }
  if ((float10)0 != fVar9) {
    D3DXMatrixRotationY(auStack_c0,(float)fVar9);
    D3DXMatrixMultiply(local_1bc + 1,auStack_c8,local_1bc + 1);
  }
  if (fStack_d0 != 0.0) {
    D3DXMatrixRotationX(auStack_c0,fStack_d0);
    D3DXMatrixMultiply(local_1bc + 1,auStack_c8,local_1bc + 1);
  }
  local_1bc[0xf] = local_1d0[0];
  fStack_17c = local_1d0[1];
  fStack_178 = local_1d0[2];
  FUN_01005190(local_1bc + 3);
  fVar11 = afStack_110[5] + afStack_110[0] + afStack_110[10];
  if (fVar11 <= 0.0) {
    local_1bc[0] = 1.4013e-45;
    local_1bc[1] = 2.8026e-45;
    local_1bc[2] = 0.0;
    uVar7 = (uint)(afStack_110[0] < afStack_110[5]);
    if (afStack_110[uVar7 * 5] < afStack_110[10]) {
      uVar7 = 2;
    }
    fVar11 = local_1bc[uVar7];
    fVar12 = local_1bc[(int)fVar11];
    fVar13 = SQRT((afStack_110[uVar7 * 5] -
                  (afStack_110[(int)local_1bc[(int)fVar11] * 5] + afStack_110[(int)fVar11 * 5])) +
                  1.0);
    fVar14 = 0.5 / fVar13;
    local_1d0[uVar7] = fVar13 * 0.5;
    local_1d0[3] = (afStack_110[(int)fVar12 + (int)fVar11 * 4] -
                   afStack_110[(int)fVar11 + (int)fVar12 * 4]) * fVar14;
    local_1d0[(int)fVar11] =
         (afStack_110[uVar7 + (int)fVar11 * 4] + afStack_110[(int)fVar11 + uVar7 * 4]) * fVar14;
    local_1d0[(int)fVar12] =
         (afStack_110[uVar7 + (int)fVar12 * 4] + afStack_110[(int)fVar12 + uVar7 * 4]) * fVar14;
  }
  else {
    local_1d0[3] = SQRT(fVar11 + 1.0);
    local_1d0[2] = 0.5 / local_1d0[3];
    local_1d0[0] = (afStack_110[6] - afStack_110[9]) * local_1d0[2];
    local_1d0[1] = (afStack_110[8] - afStack_110[2]) * local_1d0[2];
    local_1d0[2] = (afStack_110[1] - afStack_110[4]) * local_1d0[2];
    local_1d0[3] = local_1d0[3] * 0.5;
  }
  fVar11 = local_1d0[2] * local_1d0[2] + local_1d0[0] * local_1d0[0];
  fVar12 = local_1d0[3] * local_1d0[3] + local_1d0[1] * local_1d0[1];
  fVar13 = local_1d0[0] * local_1d0[0] + local_1d0[2] * local_1d0[2];
  fVar14 = local_1d0[1] * local_1d0[1] + local_1d0[3] * local_1d0[3];
  fVar15 = fVar12 + fVar11;
  fVar11 = fVar11 + fVar12;
  fVar12 = fVar14 + fVar13;
  fVar13 = fVar13 + fVar14;
  auVar16._4_4_ = fVar11;
  auVar16._0_4_ = fVar15;
  auVar16._8_4_ = fVar12;
  auVar16._12_4_ = fVar13;
  auVar16 = rsqrtps(in_XMM3,auVar16);
  fVar14 = auVar16._0_4_;
  fVar17 = auVar16._4_4_;
  fVar18 = auVar16._8_4_;
  fVar19 = auVar16._12_4_;
  fStack_70 = local_1d0[0] * (3.0 - fVar14 * fVar15 * fVar14) * fVar14 * 0.5;
  fStack_6c = local_1d0[1] * (3.0 - fVar17 * fVar11 * fVar17) * fVar17 * 0.5;
  fStack_68 = local_1d0[2] * (3.0 - fVar18 * fVar12 * fVar18) * fVar18 * 0.5;
  fStack_64 = local_1d0[3] * (3.0 - fVar19 * fVar13 * fVar19) * fVar19 * 0.5;
  uStack_80 = uStack_e0;
  uStack_7c = uStack_dc;
  uStack_78 = uStack_d8;
  uStack_74 = uStack_d4;
  uStack_60 = 0x3f800000;
  uStack_5c = 0x3f800000;
  uStack_58 = 0x3f800000;
  uStack_54 = 0x3f800000;
  FUN_0100a440(auStack_50);
  FUN_011a0170(auStack_50);
  return;
}

// 008F5990  FUN_008f5990  size=823  [callgraph]
void __thiscall FUN_008f5990(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  int iStack_30;
  int iStack_2c;
  float local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  uint uStack_4;
  
  fVar8 = (float10)FUN_00e049b0();
  iVar7 = 0;
  local_28 = (float)(fVar8 * (float10)0.016666668);
  if (((param_1[5] != 0) && ((float10)0 != fVar8 * (float10)0.016666668)) &&
     (iVar3 = (**(code **)(*param_1 + 0x1c))(), iVar3 != 0)) {
    uVar1 = *(uint *)(iVar3 + 0xc);
    iStack_1c = *(int *)(iVar3 + 8);
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0x80000000;
    iStack_c = 0;
    uStack_8 = 0;
    uStack_4 = 0x80000000;
    if (0 < (int)uVar1) {
      FUN_0100a210(&PTR_vftable_018e9b94,&iStack_18,((int)uVar1 < 0) - 1 & uVar1,0x10);
    }
    if ((int)(uStack_4 & 0x3fffffff) < (int)uVar1) {
      uVar4 = (uStack_4 & 0x3fffffff) * 2;
      if ((int)uVar4 <= (int)uVar1) {
        uVar4 = uVar1;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,&iStack_c,uVar4,0x10);
    }
    if ((int)(uStack_10 & 0x3fffffff) < (int)uVar1) {
      uVar4 = (uStack_10 & 0x3fffffff) * 2;
      if ((int)uVar4 <= (int)uVar1) {
        uVar4 = uVar1;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,&iStack_18,uVar4,0x10);
    }
    uStack_14 = uVar1;
    if ((int)(uStack_4 & 0x3fffffff) < (int)uVar1) {
      uVar4 = (uStack_4 & 0x3fffffff) * 2;
      if ((int)uVar4 <= (int)uVar1) {
        uVar4 = uVar1;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,&iStack_c,uVar4,0x10);
    }
    iStack_24 = iStack_18;
    iStack_20 = iStack_c;
    iStack_30 = iStack_18;
    iStack_2c = iStack_c;
    uStack_8 = uVar1;
    if (0 < (int)uVar1) {
      do {
        iVar3 = *(int *)(iStack_1c + iVar7 * 4);
        fVar12 = local_28;
        if (iVar3 == 0) {
          iVar5 = 0;
LAB_008f5b28:
          piVar11 = &iStack_2c;
          piVar10 = &iStack_30;
          uVar6 = FUN_00a12210(iVar5);
          uVar9 = 0;
LAB_008f5b45:
          FUN_008fa810(iVar3,uVar9,uVar6,piVar10,piVar11,fVar12);
        }
        else {
          uVar4 = *(uint *)(iVar3 + 0xc);
          if (uVar4 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)((-(uint)(uVar4 != 0) & uVar4) + 0x40);
          }
          if (iVar5 == -1) {
            piVar11 = &iStack_2c;
            piVar10 = &iStack_30;
            uVar6 = 0;
            uVar9 = param_2;
            goto LAB_008f5b45;
          }
          if (iVar5 != 0xfff) goto LAB_008f5b28;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar1);
    }
    iVar7 = iStack_30 - iStack_24;
    iVar5 = iStack_2c - iStack_20 >> 4;
    FUN_004066f0();
    iVar3 = iStack_24;
    for (iVar7 = iVar7 >> 4; iVar2 = iStack_20, iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar2 = *(int *)(iVar3 + 0xc);
      FUN_0118fe70();
      (**(code **)(*(int *)(iVar2 + 0xe0) + 0x40))(iVar3);
      iVar3 = iVar3 + 0x10;
    }
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      iVar7 = *(int *)(iVar2 + 0xc);
      FUN_0118fe70();
      (**(code **)(*(int *)(iVar7 + 0xe0) + 0x44))(iVar2);
      iVar2 = iVar2 + 0x10;
    }
    if (DAT_01885d68 != 1) {
      piVar11 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar11 = *piVar11 + -1;
      if (((*piVar11 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    uStack_14 = 0;
    if (-1 < (int)uStack_10) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(iStack_18,uStack_10 << 4);
    }
    iStack_18 = 0;
    uStack_8 = 0;
    uStack_10 = -0x80000000;
    if (-1 < (int)uStack_4) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(iStack_c,uStack_4 << 4);
    }
    uStack_8 = 0;
    iStack_c = 0;
    uStack_4 = 0x80000000;
    uStack_14 = 0;
    if (-1 < (int)uStack_10) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(iStack_18,uStack_10 << 4);
      return;
    }
  }
  return;
}

// 008F5CD0  FUN_008f5cd0  size=1598  [callgraph]
void FUN_008f5cd0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float local_170 [4];
  undefined4 local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  undefined4 local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined4 local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float afStack_110 [12];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  undefined1 auStack_c8 [8];
  undefined1 local_c0 [64];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [76];
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    if (uVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((-(uint)(uVar2 != 0) & uVar2) + 0x40);
    }
    if (iVar1 == -1) {
      local_120 = *(undefined4 *)(param_1 + 0x40);
      local_11c = *(undefined4 *)(param_1 + 0x44);
      local_118 = *(undefined4 *)(param_1 + 0x48);
      local_170[0] = SQRT(*(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
                          *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
                          *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18));
      local_170[1] = SQRT(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
                          *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                          *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28));
      fVar8 = SQRT(*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
                   *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
                   *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30));
      fVar6 = *(float *)(param_1 + 0x28);
      fVar7 = *(float *)(param_1 + 0x38);
      fVar3 = (float10)FUN_00ddbaa0(-(*(float *)(param_1 + 0x18) / fVar8));
      fVar4 = (float10)fpatan((float10)(fVar6 / fVar8),(float10)(fVar7 / fVar8));
      local_d0 = (float)fVar4;
      fVar5 = (float10)fpatan((float10)*(float *)(param_1 + 0x14) / (float10)local_170[1],
                              (float10)*(float *)(param_1 + 0x10) / (float10)local_170[0]);
      fVar4 = (float10)0;
      local_128 = (float)fVar4;
      local_12c = (float)fVar4;
      local_130 = (float)fVar4;
      local_134 = (float)fVar4;
      local_13c = (float)fVar4;
      local_140 = (float)fVar4;
      local_144 = (float)fVar4;
      local_148 = (float)fVar4;
      local_150 = (float)fVar4;
      local_154 = (float)fVar4;
      local_158 = (float)fVar4;
      local_15c = (float)fVar4;
      local_124 = 0x3f800000;
      local_138 = 0x3f800000;
      local_14c = 0x3f800000;
      local_160 = 0x3f800000;
      if (fVar4 != fVar5) {
        D3DXMatrixRotationZ(local_c0,(float)fVar5);
        D3DXMatrixMultiply(local_170 + 2,auStack_c8,local_170 + 2);
        fVar3 = (float10)(float)fVar3;
      }
      if ((float10)0 != fVar3) {
        D3DXMatrixRotationY(local_c0,(float)fVar3);
        D3DXMatrixMultiply(local_170 + 2,auStack_c8,local_170 + 2);
      }
      if (local_d0 != 0.0) {
        D3DXMatrixRotationX(local_c0,local_d0);
        D3DXMatrixMultiply(local_170 + 2,auStack_c8,local_170 + 2);
      }
      local_130 = (float)local_120;
      local_12c = (float)local_11c;
      local_128 = (float)local_118;
      FUN_01005190(&local_160);
      FUN_011a0170(auStack_50);
      return;
    }
  }
  iVar1 = FUN_00a12210(iVar1);
  if (iVar1 != 0) {
    local_120 = *(undefined4 *)(iVar1 + 0x40);
    local_11c = *(undefined4 *)(iVar1 + 0x44);
    local_118 = *(undefined4 *)(iVar1 + 0x48);
    local_170[0] = SQRT(*(float *)(iVar1 + 0x14) * *(float *)(iVar1 + 0x14) +
                        *(float *)(iVar1 + 0x10) * *(float *)(iVar1 + 0x10) +
                        *(float *)(iVar1 + 0x18) * *(float *)(iVar1 + 0x18));
    local_170[1] = SQRT(*(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) +
                        *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                        *(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28));
    fVar8 = SQRT(*(float *)(iVar1 + 0x38) * *(float *)(iVar1 + 0x38) +
                 *(float *)(iVar1 + 0x34) * *(float *)(iVar1 + 0x34) +
                 *(float *)(iVar1 + 0x30) * *(float *)(iVar1 + 0x30));
    fVar6 = *(float *)(iVar1 + 0x28);
    fVar7 = *(float *)(iVar1 + 0x38);
    fVar3 = (float10)FUN_00ddbaa0(-(*(float *)(iVar1 + 0x18) / fVar8));
    fVar4 = (float10)fpatan((float10)(fVar6 / fVar8),(float10)(fVar7 / fVar8));
    local_d0 = (float)fVar4;
    fVar5 = (float10)fpatan((float10)*(float *)(iVar1 + 0x14) / (float10)local_170[1],
                            (float10)*(float *)(iVar1 + 0x10) / (float10)local_170[0]);
    fVar4 = (float10)0;
    local_128 = (float)fVar4;
    local_12c = (float)fVar4;
    local_130 = (float)fVar4;
    local_134 = (float)fVar4;
    local_13c = (float)fVar4;
    local_140 = (float)fVar4;
    local_144 = (float)fVar4;
    local_148 = (float)fVar4;
    local_150 = (float)fVar4;
    local_154 = (float)fVar4;
    local_158 = (float)fVar4;
    local_15c = (float)fVar4;
    local_124 = 0x3f800000;
    local_138 = 0x3f800000;
    local_14c = 0x3f800000;
    local_160 = 0x3f800000;
    if (fVar4 != fVar5) {
      D3DXMatrixRotationZ(local_c0,(float)fVar5);
      D3DXMatrixMultiply(local_170 + 2,auStack_c8,local_170 + 2);
      fVar3 = (float10)(float)fVar3;
    }
    if ((float10)0 != fVar3) {
      D3DXMatrixRotationY(local_c0,(float)fVar3);
      D3DXMatrixMultiply(local_170 + 2,auStack_c8,local_170 + 2);
    }
    if (local_d0 != 0.0) {
      D3DXMatrixRotationX(local_c0,local_d0);
      D3DXMatrixMultiply(local_170 + 2,auStack_c8,local_170 + 2);
    }
    local_130 = (float)local_120;
    local_12c = (float)local_11c;
    local_128 = (float)local_118;
    FUN_01005190(&local_160);
    fVar6 = afStack_110[5] + afStack_110[0] + afStack_110[10];
    if (fVar6 <= 0.0) {
      local_170[0] = 1.4013e-45;
      local_170[1] = 2.8026e-45;
      local_170[2] = 0.0;
      uVar2 = (uint)(afStack_110[0] < afStack_110[5]);
      if (afStack_110[uVar2 * 5] < afStack_110[10]) {
        uVar2 = 2;
      }
      fVar6 = local_170[uVar2];
      fVar7 = local_170[(int)fVar6];
      fVar8 = SQRT((afStack_110[uVar2 * 5] -
                   (afStack_110[(int)fVar7 * 5] + afStack_110[(int)fVar6 * 5])) + 1.0);
      fVar9 = 0.5 / fVar8;
      local_170[uVar2] = fVar8 * 0.5;
      local_170[3] = (afStack_110[(int)fVar7 + (int)fVar6 * 4] -
                     afStack_110[(int)fVar6 + (int)fVar7 * 4]) * fVar9;
      local_170[(int)fVar6] =
           (afStack_110[uVar2 + (int)fVar6 * 4] + afStack_110[(int)fVar6 + uVar2 * 4]) * fVar9;
      local_170[(int)fVar7] =
           (afStack_110[uVar2 + (int)fVar7 * 4] + afStack_110[(int)fVar7 + uVar2 * 4]) * fVar9;
    }
    else {
      local_170[3] = SQRT(fVar6 + 1.0);
      local_170[2] = 0.5 / local_170[3];
      local_170[0] = (afStack_110[6] - afStack_110[9]) * local_170[2];
      local_170[1] = (afStack_110[8] - afStack_110[2]) * local_170[2];
      local_170[2] = (afStack_110[1] - afStack_110[4]) * local_170[2];
      local_170[3] = local_170[3] * 0.5;
    }
    fVar6 = local_170[2] * local_170[2] + local_170[0] * local_170[0];
    fVar7 = local_170[3] * local_170[3] + local_170[1] * local_170[1];
    fVar8 = local_170[0] * local_170[0] + local_170[2] * local_170[2];
    fVar9 = local_170[1] * local_170[1] + local_170[3] * local_170[3];
    fVar10 = fVar7 + fVar6;
    fVar6 = fVar6 + fVar7;
    fVar7 = fVar9 + fVar8;
    fVar8 = fVar8 + fVar9;
    auVar11._4_4_ = fVar6;
    auVar11._0_4_ = fVar10;
    auVar11._8_4_ = fVar7;
    auVar11._12_4_ = fVar8;
    auVar11 = rsqrtps(in_XMM3,auVar11);
    fVar9 = auVar11._0_4_;
    fVar12 = auVar11._4_4_;
    fVar13 = auVar11._8_4_;
    fVar14 = auVar11._12_4_;
    fStack_70 = (3.0 - fVar9 * fVar10 * fVar9) * fVar9 * 0.5 * local_170[0];
    fStack_6c = (3.0 - fVar12 * fVar6 * fVar12) * fVar12 * 0.5 * local_170[1];
    fStack_68 = (3.0 - fVar13 * fVar7 * fVar13) * fVar13 * 0.5 * local_170[2];
    fStack_64 = (3.0 - fVar14 * fVar8 * fVar14) * fVar14 * 0.5 * local_170[3];
    uStack_80 = uStack_e0;
    uStack_7c = uStack_dc;
    uStack_78 = uStack_d8;
    uStack_74 = uStack_d4;
    uStack_60 = 0x3f800000;
    uStack_5c = 0x3f800000;
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    FUN_0100a440(auStack_50);
    FUN_011a0170(auStack_50);
  }
  FUN_00918520(param_2);
  return;
}

// 008F6310  FUN_008f6310  size=221  [callgraph]
void FUN_008f6310(uint param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = param_2;
  iVar2 = param_1;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      iVar4 = *(int *)(*(int *)(iVar2 + 0x14) + iVar5 * 4);
      if (iVar4 != 0) {
        iVar1 = *(int *)(iVar4 + 0x14);
        if ((*(int *)(iVar4 + 0x18) != 0) && (iVar1 != 0)) {
          uVar6 = *(uint *)(*(int *)(iVar4 + 0x18) + 0xc);
          if (uVar6 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)((-(uint)(uVar6 != 0) & uVar6) + 0x40);
          }
          if (iVar4 == param_3) {
            uVar6 = *(uint *)(iVar1 + 0xc);
            if (uVar6 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(uint *)((-(uint)(uVar6 != 0) & uVar6) + 0x40);
            }
            param_1 = uVar6 & 0xffff;
            iVar4 = FUN_00fdbbd0(*(uint *)(iVar1 + 0x78) & 0xfffffffe,"_Phantom");
            if (iVar4 != 0) {
              FUN_00dd56a0("ASSERT:!strstr( rbC->getName(), \"_Phantom\" )\nd:\\project\\prj_020\\p1\\common\\src\\havok\\collision\\rigidBodyCollision.cpp\nline:%d"
                           ,0x802);
            }
            cFixedList::insert(&param_2,iVar3 + 0x18,&param_1);
            FUN_008f6310(iVar2,iVar3,uVar6);
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar2 + 0x18));
  }
  return;
}

// 008F63F0  RigidBodyCollision::vf04  size=30  [class]
undefined4 __thiscall RigidBodyCollision::vf04(undefined4 param_1,byte param_2)

{
  RigidBodyCollection::RigidBodyCollection();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008F6410  FUN_008f6410  size=3070  [between]
undefined4 __thiscall FUN_008f6410(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  void *pvVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  LPVOID pvVar7;
  int iVar8;
  undefined4 uVar9;
  int *unaff_ESI;
  int *unaff_EDI;
  int unaff_retaddr;
  int *local_18 [5];
  int iStack_4;
  
  if (param_4 != 0) {
    local_18[0] = param_1;
    FUN_004066f0();
    iVar5 = (**(code **)(*param_1 + 0x18))(param_3);
    if (iVar5 != 0) {
      if (unaff_retaddr == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_00a7c800();
      }
      param_1[0xd] = iVar5;
      iVar6 = (**(code **)(*param_1 + 0x1c))();
      pvVar3 = ThreadLocalStoragePointer;
      iVar5 = _tls_index;
      if (0 < *(int *)(iVar6 + 0xc)) {
        do {
          iVar6 = (**(code **)(*unaff_ESI + 0x1c))();
          iVar6 = **(int **)(iVar6 + 8);
          FUN_008f8ac0(iVar6);
          if (iVar6 != 0) {
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 1) == 0)) {
              *puVar2 = *puVar2 | 1;
              puVar2[2] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 2) == 0)) {
              *puVar2 = *puVar2 | 2;
              puVar2[3] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 4) == 0)) {
              *puVar2 = *puVar2 | 4;
              puVar2[4] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 8) == 0)) {
              *puVar2 = *puVar2 | 8;
              puVar2[5] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x10) == 0)) {
              *puVar2 = *puVar2 | 0x10;
              puVar2[6] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x20) == 0)) {
              *puVar2 = *puVar2 | 0x20;
              puVar2[7] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x40) == 0)) {
              *puVar2 = *puVar2 | 0x40;
              puVar2[8] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x200) == 0)) {
              *puVar2 = *puVar2 | 0x200;
              puVar2[0xb] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x400) == 0)) {
              *puVar2 = *puVar2 | 0x400;
              puVar2[0xc] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x8000) == 0)) {
              *puVar2 = *puVar2 | 0x8000;
              puVar2[0x11] = 0xffffffff;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x800) == 0)) {
              *puVar2 = *puVar2 | 0x800;
              puVar2[0xd] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x1000) == 0)) {
              *puVar2 = *puVar2 | 0x1000;
              puVar2[0xe] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x2000) == 0)) {
              *puVar2 = *puVar2 | 0x2000;
              puVar2[0xf] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x4000) == 0)) {
              *puVar2 = *puVar2 | 0x4000;
              puVar2[0x10] = 0xffffffff;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x20000) == 0)) {
              *puVar2 = *puVar2 | 0x20000;
              puVar2[0x13] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x40000) == 0)) {
              *puVar2 = *puVar2 | 0x40000;
              puVar2[0x14] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x80000) == 0)) {
              *puVar2 = *puVar2 | 0x80000;
              puVar2[0x15] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x100000) == 0)) {
              local_18[0] = (int *)0x0;
              *puVar2 = *puVar2 | 0x100000;
              puVar2[0x16] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x800000) == 0)) {
              *puVar2 = *puVar2 | 0x800000;
              puVar2[0x19] = 0;
            }
            if (DAT_01885d68 != 1) {
              piVar1 = (int *)(*(int *)((int)pvVar3 + iVar5 * 4) + 4);
              *piVar1 = *piVar1 + -1;
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x200000) == 0)) {
              *puVar2 = *puVar2 | 0x200000;
              puVar2[0x17] = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x400000) == 0)) {
              *puVar2 = *puVar2 | 0x400000;
              puVar2[0x18] = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x1000000) == 0)) {
              local_18[0] = (int *)0x0;
              *puVar2 = *puVar2 | 0x1000000;
              puVar2[0x1a] = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x2000000) == 0)) {
              local_18[0] = (int *)0x0;
              *puVar2 = *puVar2 | 0x2000000;
              puVar2[0x1b] = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x4000000) == 0)) {
              local_18[0] = (int *)0x0;
              *puVar2 = *puVar2 | 0x4000000;
              puVar2[0x1c] = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x8000000) == 0)) {
              local_18[0] = (int *)0x0;
              *puVar2 = *puVar2 | 0x8000000;
              puVar2[0x1d] = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x10000000) == 0)) {
              local_18[0] = (int *)0x0;
              *puVar2 = *puVar2 | 0x10000000;
              puVar2[0x1e] = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x20000000) == 0)) {
              local_18[0] = (int *)0x0;
              *puVar2 = *puVar2 | 0x20000000;
              puVar2[0x1f] = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x40000000) == 0)) {
              *puVar2 = *puVar2 | 0x40000000;
              puVar2[0x20] = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            iVar8 = *(int *)(iVar6 + 0xc);
            if ((iVar8 != 0) && ((*(uint *)(iVar8 + 4) & 1) == 0)) {
              *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) | 1;
              *(undefined4 *)(iVar8 + 0x88) = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            iVar8 = *(int *)(iVar6 + 0xc);
            if ((iVar8 != 0) && ((*(uint *)(iVar8 + 4) >> 1 & 1) == 0)) {
              *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) | 2;
              local_18[0] = (int *)0x0;
              *(undefined4 *)(iVar8 + 0x8c) = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            iVar8 = *(int *)(iVar6 + 0xc);
            if ((iVar8 != 0) && ((*(uint *)(iVar8 + 4) >> 2 & 1) == 0)) {
              *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) | 4;
              local_18[0] = (int *)0x0;
              *(undefined4 *)(iVar8 + 0x90) = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            iVar8 = *(int *)(iVar6 + 0xc);
            if ((iVar8 != 0) && ((*(uint *)(iVar8 + 4) >> 3 & 1) == 0)) {
              *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) | 8;
              local_18[0] = (int *)0x0;
              *(undefined4 *)(iVar8 + 0x94) = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            iVar8 = *(int *)(iVar6 + 0xc);
            if ((iVar8 != 0) && ((*(uint *)(iVar8 + 4) >> 6 & 1) == 0)) {
              *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) | 0x40;
              *(undefined4 *)(iVar8 + 0xa0) = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            iVar8 = *(int *)(iVar6 + 0xc);
            if ((iVar8 != 0) && ((*(uint *)(iVar8 + 4) >> 7 & 1) == 0)) {
              *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) | 0x80;
              *(undefined4 *)(iVar8 + 0xa4) = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            iVar8 = *(int *)(iVar6 + 0xc);
            if ((iVar8 != 0) && ((*(uint *)(iVar8 + 4) >> 4 & 1) == 0)) {
              *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) | 0x10;
              *(undefined4 *)(iVar8 + 0x98) = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            puVar2 = *(uint **)(iVar6 + 0xc);
            if ((puVar2 != (uint *)0x0) && (-1 < (int)*puVar2)) {
              local_18[0] = (int *)0x0;
              *puVar2 = *puVar2 | 0x80000000;
              puVar2[0x21] = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            iVar8 = *(int *)(iVar6 + 0xc);
            if ((iVar8 != 0) && ((*(uint *)(iVar8 + 4) >> 5 & 1) == 0)) {
              *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) | 0x20;
              *(undefined4 *)(iVar8 + 0x9c) = 0;
            }
            FUN_00406760();
            FUN_004066f0();
            iVar8 = *(int *)(iVar6 + 0xc);
            if ((iVar8 != 0) && ((*(uint *)(iVar8 + 4) >> 8 & 1) == 0)) {
              *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) | 0x100;
              *(undefined4 *)(iVar8 + 0xa8) = 0;
            }
            FUN_00406760();
          }
          pvVar7 = TlsGetValue(DAT_01f8fc4c);
          iVar8 = (**(code **)(**(int **)((int)pvVar7 + 0x2c) + 4))(8);
          if (iVar8 != 0) {
            RigidBodyCollisionListener::RigidBodyCollisionListener(iVar6);
          }
          if (unaff_EDI[0xd] == 0) {
            unaff_EDI[0xc] = 1;
          }
          else {
            sVar4 = FUN_00912c40(iVar6);
            if (sVar4 == 0xfff) {
              unaff_EDI[0xc] = -1;
            }
            else {
              unaff_EDI[0xc] = (uint)(sVar4 == -1);
            }
          }
          iVar8 = unaff_EDI[0xc];
          if (iVar8 == -1) {
            if (iStack_4 == 0) {
              uVar9 = 0x700000;
            }
            else {
              uVar9 = *(undefined4 *)(iStack_4 + 0x24);
            }
            FUN_009f8ea0(local_18,0x10,uVar9,0);
            FUN_00dd5650(&DAT_0164b93c,local_18);
LAB_008f6f87:
            FUN_008f4fe0(unaff_retaddr,iVar6);
          }
          else if (iVar8 == 0) {
            FUN_008f4760(unaff_retaddr,iVar6);
          }
          else if (iVar8 == 1) goto LAB_008f6f87;
          param_2 = param_2 + 1;
          iVar6 = (**(code **)(*unaff_EDI + 0x1c))();
        } while (param_2 < *(int *)(iVar6 + 0xc));
      }
      if (unaff_ESI[0xd] != 0) {
        FUN_008f3cb0(unaff_ESI[0xd]);
      }
      if ((unaff_retaddr != 0) &&
         (iVar5 = FUN_009f9320(*(undefined4 *)(unaff_retaddr + 0x24)), iVar5 == 0)) {
        (**(code **)(*unaff_ESI + 0x88))();
      }
      FUN_00904650(DAT_01885d20);
      FUN_00406760();
      return 1;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return 0;
}

// 008F7020  RigidBodyCollision::applyTransForm  size=439  [class]
void __thiscall RigidBodyCollision::applyTransForm(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_64;
  undefined1 auStack_50 [76];
  
  if (param_1[5] != 0) {
    FUN_004066f0();
    iVar4 = (**(code **)(*param_1 + 0x1c))();
    if (iVar4 == 0) {
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    else {
      iVar2 = *(int *)(iVar4 + 0xc);
      iVar4 = *(int *)(iVar4 + 8);
      D3DXMatrixScaling(auStack_50,*(undefined4 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x74),
                        *(undefined4 *)(param_2 + 0x78));
      iStack_64 = 0;
      if (0 < iVar2) {
        do {
          iVar6 = *(int *)(iVar4 + iStack_64 * 4);
          iVar5 = FUN_00fdbbd0(*(uint *)(iVar6 + 0x78) & 0xfffffffe,param_3);
          if (iVar5 == 0) {
            uVar3 = *(uint *)(iVar6 + 0xc);
            if ((uVar3 == 0) || ((*(uint *)((-(uint)(uVar3 != 0) & uVar3) + 8) & 1) == 0)) {
              if (uVar3 == 0) {
                iVar6 = 0;
LAB_008f7150:
                iVar5 = FUN_00a12210(iVar6);
                if (iVar5 == 0) {
                  FUN_00dd5650(&DAT_0164b970,iVar6);
                }
                else {
                  *(ushort *)(iVar5 + 0xa2) = *(ushort *)(iVar5 + 0xa2) | 4;
                  FUN_01005140(iVar5 + 0x10);
                }
              }
              else {
                iVar6 = *(int *)((-(uint)(uVar3 != 0) & uVar3) + 0x40);
                if (iVar6 == -1) {
                  FUN_01005140(param_2 + 0x10);
                  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_2 + 0x40);
                  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x44);
                  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x48);
                  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_2 + 0x4c);
                }
                else if (iVar6 != 0xfff) goto LAB_008f7150;
              }
            }
            else {
              FUN_008f5cd0(param_2,iVar6,"mappingHk2Parts");
            }
          }
          iStack_64 = iStack_64 + 1;
        } while (iStack_64 < iVar2);
      }
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    piVar1 = (int *)(iVar4 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008F71E0  RigidBodyCollision::applyTransForm_2  size=406  [class]
void __thiscall RigidBodyCollision::applyTransForm_2(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_64;
  undefined1 auStack_50 [76];
  
  if (param_1[5] != 0) {
    FUN_004066f0();
    iVar4 = (**(code **)(*param_1 + 0x1c))();
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 0xc);
      iVar4 = *(int *)(iVar4 + 8);
      D3DXMatrixScaling(auStack_50,*(undefined4 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x74),
                        *(undefined4 *)(param_2 + 0x78));
      iStack_64 = 0;
      if (0 < iVar2) {
        do {
          iVar6 = *(int *)(iVar4 + iStack_64 * 4);
          if (((iVar6 == 0) || (uVar3 = *(uint *)(iVar6 + 0xc), uVar3 == 0)) ||
             ((*(uint *)((-(uint)(uVar3 != 0) & uVar3) + 8) & 1) == 0)) {
            if (iVar6 == 0) {
              iVar6 = 0;
LAB_008f72f5:
              iVar5 = FUN_00a12210(iVar6);
              if (iVar5 == 0) {
                FUN_00dd5650(&DAT_0164b970,iVar6);
              }
              else {
                *(ushort *)(iVar5 + 0xa2) = *(ushort *)(iVar5 + 0xa2) | 4;
                FUN_01005140(iVar5 + 0x10);
              }
            }
            else {
              uVar3 = *(uint *)(iVar6 + 0xc);
              if (uVar3 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)((-(uint)(uVar3 != 0) & uVar3) + 0x40);
              }
              if (iVar6 == -1) {
                FUN_01005140(param_2 + 0x10);
                *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_2 + 0x40);
                *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x44);
                *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x48);
                *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_2 + 0x4c);
              }
              else if (iVar6 != 0xfff) goto LAB_008f72f5;
            }
          }
          else {
            FUN_008f5cd0(param_2,iVar6,"mappingHk2Parts");
          }
          iStack_64 = iStack_64 + 1;
        } while (iStack_64 < iVar2);
      }
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

// 008F7380  FUN_008f7380  size=808  [callgraph]
void __thiscall FUN_008f7380(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int unaff_EDI;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  undefined2 *puStack_14;
  undefined2 *puStack_10;
  int iStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  if ((param_1[5] != 0) && ((**(code **)(*param_1 + 0x28))(&local_20,param_2), iStack_28 != 0)) {
    FUN_004066f0();
    iVar4 = (**(code **)(*param_1 + 0x1c))();
    iStack_2c = 0;
    if (0 < *(int *)(iVar4 + 0x18)) {
      do {
        iVar5 = 0;
        iVar7 = *(int *)(*(int *)(iVar4 + 0x14) + iStack_2c * 4);
        if (iVar7 != 0) {
          iVar6 = *(int *)(iVar7 + 0x14);
          if (iVar6 != 0) {
            uVar3 = *(uint *)(iVar6 + 0xc);
            if (uVar3 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)((-(uint)(uVar3 != 0) & uVar3) + 0x40);
            }
          }
          iVar6 = FUN_00fdbbd0(*(uint *)(iVar6 + 0x78) & 0xfffffffe,"_Phantom");
          if (iVar6 != 0) {
            FUN_00dd56a0("ASSERT:!strstr( pRb->getName(), \"_Phantom\")\nd:\\project\\prj_020\\p1\\common\\src\\havok\\collision\\rigidBodyCollision.cpp\nline:%d"
                         ,0x79f);
          }
          if ((iVar5 == (short)uStack_4) && (*(int *)(iVar7 + 8) != 0)) {
            FUN_01197e40(&stack0xffffffcf,iVar7);
            if (iVar5 == -1) {
              iVar7 = param_1[0xd];
            }
            else {
              iVar7 = FUN_00a12210(iVar5);
            }
            if (iVar7 != 0) {
              *(ushort *)(iVar7 + 0xa2) = *(ushort *)(iVar7 + 0xa2) | 0x100;
            }
          }
        }
        iStack_2c = iStack_2c + 1;
      } while (iStack_2c < *(int *)(iVar4 + 0x18));
    }
    uStack_24 = 0;
    local_20 = 0;
    puStack_14 = (undefined2 *)0x0;
    puStack_10 = (undefined2 *)0x0;
    iStack_c = 0;
    FUN_00a1d5c0();
    if ((local_20 == 0) && (local_20 = FUN_00dd29b0(0x264,0x20,0,0), local_20 != 0)) {
      iStack_c = local_20 + 600;
      iStack_1c = 0x32;
      iStack_18 = 0;
      FUN_008f28a0();
    }
    cFixedList::insert(&iStack_2c,&iStack_c,&uStack_4);
    FUN_008f6310(iVar4,&uStack_24,uStack_4);
    iVar7 = FUN_0092f750(*(undefined4 *)(param_1[0xd] + 0x4b0));
    param_1[0xe] = iVar7;
    puVar8 = puStack_14;
    if (puStack_14 != puStack_10) {
      do {
        (**(code **)(*param_1 + 0x28))(&stack0xffffffcc,*puVar8);
        if (unaff_EDI != 0) {
          uVar3 = *(uint *)(unaff_EDI + 0xc);
          if (uVar3 == 0) {
            iVar7 = 0;
LAB_008f755c:
            iVar7 = FUN_00a12210(iVar7);
          }
          else {
            iVar7 = *(int *)((-(uint)(uVar3 != 0) & uVar3) + 0x40);
            if (iVar7 != -1) goto LAB_008f755c;
            iVar7 = param_1[0xd];
          }
          if (iVar7 != 0) {
            *(ushort *)(iVar7 + 0xa2) = *(ushort *)(iVar7 + 0xa2) | 0x100;
          }
          FUN_00915ef0(0x3f000000);
          FUN_00915f40(0x3ecccccd);
          FUN_00915e60(param_2);
          FUN_00915ea0(param_3);
          iVar7 = FUN_009f8b40();
          FUN_00916540(1);
          FUN_009164e0(iVar7 << 0x10 | 0xb);
        }
        puVar1 = (undefined4 *)(puVar8 + 4);
        puVar8 = (undefined2 *)*puVar1;
      } while ((undefined2 *)*puVar1 != puStack_10);
    }
    (**(code **)(*param_1 + 0x28))(&iStack_8,iStack_8);
    if ((puStack_10 != (undefined2 *)0x0) && (iStack_8 != 0)) {
      FUN_009160d0(iStack_8);
    }
    if (iStack_2c != 0) {
      FUN_00dd48d0(iStack_2c,0);
      iStack_2c = 0;
      iStack_28 = 0;
      uStack_24 = 0;
      local_20 = iVar4;
      iStack_1c = iVar4;
      iStack_18 = iVar4;
    }
    if (DAT_01885d68 != 1) {
      piVar2 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar2 = *piVar2 + -1;
      if (((*piVar2 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008F7700  FUN_008f7700  size=95  [callgraph]
void __thiscall FUN_008f7700(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[0xc] == 0) {
    RigidBodyCollision::applyTransForm_2(param_2);
  }
  else if ((param_1[0xc] == 1) && (param_1[5] != 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x1c))();
      if (*(int *)(iVar1 + 0xc) != 0) {
        iVar1 = (**(code **)(*param_1 + 0x1c))();
        FUN_008f3840(param_2,**(undefined4 **)(iVar1 + 8),"mappingHk2PartsNullOnly");
        return;
      }
    }
  }
  return;
}

// 008F7760  FUN_008f7760  size=24  [callgraph]
void __fastcall FUN_008f7760(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    RigidBodyCollision::applyTransForm();
    return;
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_008f3e60();
    return;
  }
  return;
}

