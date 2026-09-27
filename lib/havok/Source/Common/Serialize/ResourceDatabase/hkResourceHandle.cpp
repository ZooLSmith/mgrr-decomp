// lib/havok/Source/Common/Serialize/ResourceDatabase/hkResourceHandle.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 011108E0..01111200, 11 functions

#include "mgrr.h"
#include "hkMemoryResourceContainer.h"
#include "hkMemoryResourceHandle.h"
#include "hkResourceContainer.h"
#include "hkResourceHandle.h"

// 011108E0  hkMemoryResourceHandle::vf2C  size=521  [__FILE__]
void __thiscall hkMemoryResourceHandle::vf2C(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 local_434 [512];
  undefined1 local_234 [544];
  uint *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0x14);
  local_c = param_1;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar3) {
    iVar1 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar1 <= iVar3) {
      iVar1 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar1,0x10);
  }
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      puVar2 = (uint *)(param_2[1] * 0x10 + *param_2);
      param_2[1] = param_2[1] + 1;
      local_10 = *(int *)(param_1 + 8);
      uVar5 = *(uint *)(*(int *)(param_1 + 0x10) + local_8 * 8) & 0xfffffffe;
      local_14 = puVar2;
      FUN_01441a80();
      iVar3 = FUN_01015d60(uVar5,0x2e);
      while (iVar3 != 0) {
        iVar3 = iVar3 - uVar5;
        FUN_01015e80(local_234,uVar5,iVar3);
        local_234[iVar3] = 0;
        uVar5 = uVar5 + 1 + iVar3;
        iVar3 = FUN_01009660(local_234);
        if (iVar3 == 0) goto LAB_01110a72;
        if (*(char *)(iVar3 + 0xc) != '\x19') {
          hkErrStream::hkErrStream(local_434,0x200);
          puVar6 = local_234;
          FUN_01018d00("Member is not of type struct : ");
          FUN_01018d00(puVar6);
          (**(code **)(*DAT_01f8fc58 + 0xc))
                    (1,0xf032edfe,local_434,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\ResourceDatabase\\hkResourceHandle.cpp"
                     ,0x80);
          hkBaseObject::hkBaseObject_38();
          goto LAB_01110a72;
        }
        FUN_01016300();
        local_10 = local_10 + (uint)*(ushort *)(iVar3 + 0x12);
        iVar3 = FUN_01015d60(uVar5,0x2e);
        puVar2 = local_14;
      }
      iVar3 = FUN_01009660(uVar5);
      if (iVar3 == 0) {
LAB_01110a72:
        param_2[1] = param_2[1] + -1;
        hkErrStream::hkErrStream(local_434,0x200);
        FUN_01018d00("Cannot find member : ");
        FUN_01018d00(uVar5);
        (**(code **)(*DAT_01f8fc58 + 0xc))
                  (1,0xf032edf1,local_434,
                   "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\ResourceDatabase\\hkResourceHandle.cpp"
                   ,0x92);
        hkBaseObject::hkBaseObject_38();
      }
      else {
        *puVar2 = uVar5;
        puVar4 = (uint *)FUN_0143e7a0(local_10,iVar3);
        puVar2[2] = *puVar4;
        puVar2[3] = puVar4[1];
        puVar2[1] = *(uint *)(*(int *)(local_c + 0x10) + 4 + local_8 * 8) & 0xfffffffe;
      }
      local_8 = local_8 + 1;
      param_1 = local_c;
    } while (local_8 < *(int *)(local_c + 0x14));
  }
  return;
}

// 01110AF0  FUN_01110af0  size=149  [between]
void __thiscall FUN_01110af0(int *param_1,int *param_2)

{
  int iVar1;
  
  for (iVar1 = (**(code **)(*param_1 + 0x34))(0,0); iVar1 != 0;
      iVar1 = (**(code **)(*param_1 + 0x34))(0,iVar1)) {
    FUN_01110af0(param_2);
  }
  for (iVar1 = (**(code **)(*param_1 + 0x20))(0,0,0); iVar1 != 0;
      iVar1 = (**(code **)(*param_1 + 0x20))(0,0,iVar1)) {
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
    }
    *(int *)(*param_2 + param_2[1] * 4) = iVar1;
    param_2[1] = param_2[1] + 1;
  }
  return;
}

// 01110B90  FUN_01110b90  size=105  [between]
void __thiscall FUN_01110b90(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
  }
  *(int **)(*param_2 + param_2[1] * 4) = param_1;
  param_2[1] = param_2[1] + 1;
  for (iVar1 = (**(code **)(*param_1 + 0x34))(0,0); iVar1 != 0;
      iVar1 = (**(code **)(*param_1 + 0x34))(0,iVar1)) {
    FUN_01110b90(param_2);
  }
  return;
}

// 01110C00  hkMemoryResourceHandle::vf30  size=49  [between]
undefined4 __fastcall hkMemoryResourceHandle::vf30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x14);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    uVar2 = FUN_01006770();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return uVar2;
}

// 01110C40  hkMemoryResourceHandle::vf28  size=132  [between]
void __thiscall hkMemoryResourceHandle::vf28(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    while (iVar1 = FUN_01015b90(*(uint *)(*(int *)(param_1 + 0x10) + iVar3 * 8) & 0xfffffffe,param_2
                               ), iVar1 != 0) {
      iVar3 = iVar3 + 1;
      if (*(int *)(param_1 + 0x14) <= iVar3) {
        return;
      }
    }
    FUN_01006770();
    FUN_01006770();
    iVar1 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 != iVar3) {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 8);
      iVar3 = (*(int *)(param_1 + 0x10) + iVar1 * 8) - (int)puVar2;
      iVar1 = 2;
      do {
        *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
        puVar2 = puVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

// 01110CD0  hkResourceHandle::vf34  size=418  [__FILE__]
void __thiscall hkResourceHandle::vf34(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined *puVar8;
  undefined1 local_234 [524];
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_15;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = -0x80000000;
  local_28 = param_1;
  (**(code **)(*param_1 + 0x2c))(&local_14);
  local_20 = local_10 + -1;
  if (-1 < local_20) {
    local_1c = local_20 * 0x10;
    do {
      local_24 = (**(code **)*param_2)(*(undefined4 *)(local_1c + local_14 + 4),&local_8);
      if (local_24 != 0) {
        puVar2 = (undefined4 *)FUN_0143e9e0();
        iVar3 = FUN_01016300();
        pcVar4 = (char *)FUN_010093e0(&local_15,local_8);
        piVar1 = local_28;
        if ((*pcVar4 == '\0') && (local_8 != iVar3)) {
          hkErrStream::hkErrStream(local_234,0x200);
          uVar5 = FUN_010093a0();
          puVar8 = &DAT_017dacfc;
          uVar6 = FUN_010093a0(&DAT_017dacfc,uVar5);
          FUN_01018d00("Class mismatch, cannot resolve link: ");
          FUN_01018d00(uVar6);
          FUN_01018d00(puVar8);
          FUN_01018d00(uVar5);
          (**(code **)(*DAT_01f8fc58 + 0xc))
                    (1,0xf034ed21,local_234,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\ResourceDatabase\\hkResourceHandle.cpp"
                     ,0xb2);
          hkBaseObject::hkBaseObject_38();
        }
        else {
          iVar3 = (**(code **)(*local_28 + 0x18))();
          if (local_24 == iVar3) break;
          piVar7 = (int *)FUN_0143e850(0);
          *piVar7 = local_24;
          (**(code **)(*piVar1 + 0x28))(*puVar2);
        }
      }
      local_20 = local_20 + -1;
      local_1c = local_1c + -0x10;
    } while (-1 < local_20);
  }
  if (-1 < local_c) {
    local_10 = 0;
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c << 4);
  }
  return;
}

// 01110E80  hkResourceContainer::vf3C  size=120  [between]
void hkResourceContainer::vf3C(undefined4 param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  FUN_01110af0(&local_10);
  iVar1 = 0;
  if (0 < local_c) {
    do {
      (**(code **)(**(int **)(local_10 + iVar1 * 4) + 0x34))(param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_c);
  }
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
  }
  return;
}

// 01110F00  hkMemoryResourceContainer::vf20  size=452  [__FILE__]
int * __thiscall hkMemoryResourceContainer::vf20(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined1 local_2a0 [512];
  undefined1 *local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined1 local_94 [140];
  int local_8;
  
  iVar2 = 0;
  do {
    if ((param_4 == 0) || (*(int *)(param_1 + 0x14) <= iVar2)) break;
    iVar4 = iVar2 * 4;
    iVar2 = iVar2 + 1;
  } while (*(int *)(*(int *)(param_1 + 0x10) + iVar4) != param_4);
  if (iVar2 < *(int *)(param_1 + 0x14)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x10) + iVar2 * 4);
      local_8 = iVar2;
      if (param_2 == 0) {
LAB_01110fe1:
        if (((param_3 == 0) || (iVar2 = (**(code **)(*piVar1 + 0x1c))(), param_3 == iVar2)) ||
           (pcVar5 = (char *)FUN_010093e0((int)&param_4 + 3,iVar2), *pcVar5 != '\0')) {
          return piVar1;
        }
        iVar2 = local_8;
        if (param_2 != 0) {
          hkErrStream::hkErrStream(local_2a0,0x200);
          uVar3 = FUN_010093a0();
          puVar7 = &DAT_017dacfc;
          uVar6 = FUN_010093a0(&DAT_017dacfc,uVar3);
          FUN_01018d00("Class mismatch, cannot resolve link: ");
          FUN_01018d00(uVar6);
          FUN_01018d00(puVar7);
          FUN_01018d00(uVar3);
          (**(code **)(*DAT_01f8fc58 + 0xc))
                    (1,0xf034ed22,local_2a0,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\ResourceDatabase\\hkResourceHandle.cpp"
                     ,0x138);
          hkBaseObject::hkBaseObject_38();
          return (int *)0x0;
        }
      }
      else {
        local_a0 = local_94;
        local_98 = 0x80000080;
        local_9c = 1;
        local_94[0] = 0;
        uVar3 = (**(code **)(*piVar1 + 0x10))(&local_a0);
        iVar4 = FUN_01015b90(param_2,uVar3);
        local_9c = 0;
        if (iVar4 == 0) {
          if (-1 < (int)local_98) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_a0,local_98 & 0x3fffffff);
          }
          goto LAB_01110fe1;
        }
        if (-1 < (int)local_98) {
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_a0,local_98 & 0x3fffffff);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return (int *)0x0;
}

// 011110D0  hkMemoryResourceContainer::vf18  size=158  [between]
void __thiscall hkMemoryResourceContainer::vf18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar2 = param_2;
  if (param_2 != 0) {
    FUN_01006000();
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar4 = *(int **)(param_1 + 0x10);
    do {
      if (*piVar4 == param_2) goto LAB_01111108;
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  param_2 = -1;
  iVar1 = param_2;
LAB_01111108:
  param_2 = iVar1;
  if (iVar2 != 0) {
    FUN_010060a0();
  }
  if (-1 < param_2) {
    iVar2 = param_2 * 4;
    iVar1 = *(int *)(param_1 + 0x10);
    if (*(int *)(iVar1 + iVar2) != 0) {
      FUN_010060a0();
    }
    *(undefined4 *)(iVar1 + iVar2) = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    iVar1 = (*(int *)(param_1 + 0x14) - param_2) * 4;
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar2);
    if (0 < iVar1) {
      iVar2 = (iVar1 - 1U >> 2) + 1;
      do {
        *puVar3 = puVar3[1];
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

// 01111170  hkMemoryResourceContainer::vf2C  size=132  [between]
void __thiscall hkMemoryResourceContainer::vf2C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    FUN_01006000();
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    piVar4 = *(int **)(param_1 + 0x1c);
    do {
      if (*piVar4 == param_2) goto LAB_011111a1;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  iVar2 = -1;
LAB_011111a1:
  if (param_2 != 0) {
    FUN_010060a0();
  }
  if (-1 < iVar2) {
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar1 = iVar2 * 4;
    if (*(int *)(iVar3 + iVar1) != 0) {
      FUN_010060a0();
    }
    *(undefined4 *)(iVar3 + iVar1) = 0;
    iVar3 = *(int *)(param_1 + 0x20) + -1;
    *(int *)(param_1 + 0x20) = iVar3;
    if (iVar3 != iVar2) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1) =
           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3 * 4);
    }
  }
  return;
}

// 01111200  hkMemoryResourceContainer::vf38  size=436  [__FILE__]
undefined4 __thiscall hkMemoryResourceContainer::vf38(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_218 [524];
  int local_c;
  int local_8;
  
  for (piVar2 = param_2; piVar2 != (int *)0x0; piVar2 = (int *)(**(code **)(*piVar2 + 0x24))()) {
    if (piVar2 == param_1) {
      hkErrStream::hkErrStream(local_218,0x200);
      pcVar6 = "\' as this would create a circular dependency ";
      param_2 = param_2 + 2;
      pcVar5 = "\' to \'";
      param_1 = param_1 + 2;
      FUN_01018d00("Cannot parent \'");
      FUN_010192a0(param_1);
      FUN_01018d00(pcVar5);
      FUN_010192a0(param_2);
      FUN_01018d00(pcVar6);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (1,0xabba4554,local_218,
                 "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\ResourceDatabase\\hkResourceHandle.cpp"
                 ,0x198);
      hkBaseObject::hkBaseObject_38();
      return 1;
    }
  }
  FUN_01006000();
  if (param_1 != (int *)0x0) {
    FUN_01006000();
  }
  iVar3 = *(int *)(param_1[3] + 0x20);
  local_8 = 0;
  if (0 < iVar3) {
    puVar4 = *(undefined4 **)(param_1[3] + 0x1c);
    do {
      if ((int *)*puVar4 == param_1) goto LAB_01111267;
      local_8 = local_8 + 1;
      puVar4 = puVar4 + 1;
    } while (local_8 < iVar3);
  }
  local_8 = -1;
LAB_01111267:
  FUN_010060a0();
  iVar3 = param_1[3];
  local_c = local_8 * 4;
  puVar4 = (undefined4 *)(*(int *)(iVar3 + 0x1c) + local_c);
  if (*(int *)(*(int *)(iVar3 + 0x1c) + local_c) != 0) {
    FUN_010060a0();
  }
  *puVar4 = 0;
  *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + -1;
  iVar1 = (*(int *)(iVar3 + 0x20) - local_8) * 4;
  puVar4 = (undefined4 *)(*(int *)(iVar3 + 0x1c) + local_c);
  if (0 < iVar1) {
    iVar3 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar4 = puVar4[1];
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_01006000();
  if (param_2[8] == (param_2[9] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_2 + 7,4);
  }
  puVar4 = (undefined4 *)(param_2[7] + param_2[8] * 4);
  if (puVar4 != (undefined4 *)0x0) {
    FUN_01006000();
    *puVar4 = param_1;
  }
  param_2[8] = param_2[8] + 1;
  FUN_010060a0();
  param_1[3] = (int)param_2;
  FUN_010060a0();
  return 0;
}

