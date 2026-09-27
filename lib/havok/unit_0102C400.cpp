// lib/havok/unit_0102C400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0102C400..0102CC60, 37 functions

#include "mgrr.h"
#include "hkBsdSocket.h"
#include "hkSolverAllocator.h"
#include "hkStreamReader.h"

// 0102C400  FUN_0102c400  size=38  [run]
void FUN_0102c400(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0102C430  hkBsdSocket::vf00  size=52  [run]
int __thiscall hkBsdSocket::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_202();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0102C470  hkStreamReader::vf14  size=78  [run]
int __thiscall hkStreamReader::vf14(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_204 [512];
  
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - iVar1) {
    iVar1 = 0x200;
    if (iVar2 < 0x201) {
      iVar1 = iVar2;
    }
    iVar1 = (**(code **)(*param_1 + 0x10))(local_204,iVar1);
    if (iVar1 == 0) break;
  }
  return param_2 - iVar2;
}

// 0102C4D0  FUN_0102c4d0  size=36  [run]
int __fastcall FUN_0102c4d0(int *param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x10))((int)&uStack_8 + 3,1);
  if (iVar1 != 0) {
    return (int)uStack_8._3_1_;
  }
  return -1;
}

// 0102C500  hkStreamReader::vf1C  size=8  [run]
undefined4 hkStreamReader::vf1C(void)

{
  return 1;
}

// 0102C510  hkStreamReader::vf20  size=6  [run]
undefined4 hkStreamReader::vf20(void)

{
  return 1;
}

// 0102C520  hkStreamReader::vf28  size=8  [run]
undefined4 hkStreamReader::vf28(void)

{
  return 1;
}

// 0102C530  hkStreamReader::vf2C  size=4  [run]
undefined4 hkStreamReader::vf2C(void)

{
  return 0xffffffff;
}

// 0102C540  hkStreamReader::vf18  size=13  [run]
void hkStreamReader::vf18(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}

// 0102C550  hkStreamReader::vf24  size=13  [run]
void hkStreamReader::vf24(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}

// 0102C560  FUN_0102c560  size=11  [run]
int FUN_0102c560(int param_1,int param_2)

{
  return param_2 - param_1;
}

// 0102C580  hkSolverAllocator::vf08  size=38  [run]
void __thiscall hkSolverAllocator::vf08(int *param_1,int param_2,int param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    (**(code **)(*param_1 + 0x10))(param_2,param_3 + 0x7fU & 0xffffff80);
  }
  return;
}

// 0102C5B0  FUN_0102c5b0  size=21  [run]
undefined4 __thiscall FUN_0102c5b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),param_2 <= iVar1);
}

// 0102C5D0  hkSolverAllocator::vf20  size=42  [run]
void __thiscall hkSolverAllocator::vf20(int param_1,int *param_2)

{
  *param_2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  param_2[3] = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
  param_2[1] = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
  param_2[2] = *(int *)(param_1 + 0x14);
  return;
}

// 0102C600  hkSolverAllocator::vf28  size=10  [run]
void __fastcall hkSolverAllocator::vf28(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
  return;
}

// 0102C610  hkSolverAllocator::hkSolverAllocator  size=58  [run]
undefined4 * __fastcall hkSolverAllocator::hkSolverAllocator(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_1 + 9;
  param_1[7] = 0;
  param_1[8] = 0x80000040;
  FUN_01015ac0(0);
  return param_1;
}

// 0102C650  hkSolverAllocator::~hkSolverAllocator  size=30  [run]
void __fastcall hkSolverAllocator::~hkSolverAllocator(undefined4 *param_1)

{
  *param_1 = vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x89));
  hkMemoryAllocator::~hkMemoryAllocator();
  return;
}

// 0102C670  FUN_0102c670  size=346  [run]
int __thiscall FUN_0102c670(int param_1,int *param_2,char param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *local_c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x224);
  EnterCriticalSection(lpCriticalSection);
  iVar5 = *param_2;
  iVar8 = -1;
  if (*(int *)(param_1 + 0x10) + 1 <
      (int)((*(uint *)(param_1 + 0x20) & 0x3fffffff) * 2 - *(int *)(param_1 + 0x1c))) {
    iVar3 = *(int *)(param_1 + 0x1c) + -1;
    if (-1 < iVar3) {
      iVar7 = 0x7ffffff;
      local_c = (int *)(*(int *)(param_1 + 0x18) + 4 + iVar3 * 8);
      do {
        iVar2 = *local_c;
        if ((iVar5 <= iVar2) && (iVar2 < iVar7)) {
          iVar7 = iVar2;
          iVar8 = iVar3;
        }
        local_c = local_c + -2;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      if (-1 < iVar8) {
        iVar3 = iVar8 * 8;
        iVar2 = *(int *)(iVar3 + *(int *)(param_1 + 0x18));
        if (((param_3 == '\0') || (iVar7 == iVar5)) && ((iVar7 * 2 <= iVar5 * 3 || (iVar5 < 0x401)))
           ) {
          *param_2 = *(int *)(iVar3 + 4 + *(int *)(param_1 + 0x18));
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
          puVar6 = (undefined4 *)(iVar3 + *(int *)(param_1 + 0x18));
          iVar5 = (*(int *)(param_1 + 0x1c) - iVar8) * 8;
          if (0 < iVar5) {
            iVar5 = (iVar5 - 1U >> 2) + 1;
            do {
              *puVar6 = puVar6[2];
              puVar6 = puVar6 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else {
          iVar8 = *(int *)(param_1 + 0x18);
          piVar1 = (int *)(iVar3 + 4 + iVar8);
          *piVar1 = *piVar1 - iVar5;
          *(int *)(iVar3 + iVar8) = iVar2 + iVar5;
        }
        uVar4 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        if (*(uint *)(param_1 + 0x14) < uVar4) {
          *(uint *)(param_1 + 0x14) = uVar4;
        }
        LeaveCriticalSection(lpCriticalSection);
        return iVar2;
      }
    }
    iVar8 = *(int *)(param_1 + 0xc);
    if (iVar5 <= *(int *)(param_1 + 8) - iVar8) {
      *(int *)(param_1 + 0xc) = iVar8 + iVar5;
      *param_2 = iVar5;
      uVar4 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      if (*(uint *)(param_1 + 0x14) < uVar4) {
        *(uint *)(param_1 + 0x14) = uVar4;
      }
      LeaveCriticalSection(lpCriticalSection);
      return iVar8;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

// 0102C7D0  hkSolverAllocator::vf10  size=443  [run]
void __thiscall hkSolverAllocator::vf10(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x224);
  EnterCriticalSection(lpCriticalSection);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  iVar6 = param_2 + param_3;
  if (iVar6 == *(int *)(param_1 + 0xc)) {
    iVar6 = *(int *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - param_3;
    while ((iVar6 != 0 &&
           (piVar2 = (int *)(*(int *)(param_1 + 0x18) + -8 + *(int *)(param_1 + 0x1c) * 8),
           piVar2[1] + *piVar2 == param_2))) {
      *(int *)(param_1 + 0xc) = *piVar2;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      iVar6 = *(int *)(param_1 + 0x1c);
    }
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    puVar7 = *(uint **)(param_1 + 0x18);
    *puVar7 = param_2;
    puVar7[1] = param_3;
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  iVar4 = *(int *)(param_1 + 0x1c) + -1;
  iVar5 = iVar4;
  if (-1 < iVar4) {
    iVar3 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(iVar3 + iVar4 * 8);
    do {
      if (*puVar7 < param_2) {
        if (-1 < iVar5) {
          iVar9 = *(int *)(iVar3 + 4 + iVar5 * 8);
          piVar2 = (int *)(iVar3 + 4 + iVar5 * 8);
          if (*(int *)(iVar3 + iVar5 * 8) + iVar9 == param_2) {
            iVar9 = iVar9 + param_3;
            *piVar2 = iVar9;
            if ((iVar5 < *(int *)(param_1 + 0x1c) + -1) &&
               (iVar6 == *(int *)(*(int *)(param_1 + 0x18) + 8 + iVar5 * 8))) {
              *piVar2 = *(int *)(*(int *)(param_1 + 0x18) + iVar5 * 8 + 0xc) + iVar9;
              *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
              iVar6 = (*(int *)(param_1 + 0x1c) - (iVar5 + 1)) * 8;
              puVar8 = (undefined4 *)(*(int *)(param_1 + 0x18) + (iVar5 + 1) * 8);
              if (0 < iVar6) {
                iVar6 = (iVar6 - 1U >> 2) + 1;
                do {
                  *puVar8 = puVar8[2];
                  puVar8 = puVar8 + 1;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
                LeaveCriticalSection(lpCriticalSection);
                return;
              }
            }
            goto LAB_0102c978;
          }
        }
        break;
      }
      puVar7 = puVar7 + -2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  if ((iVar5 < iVar4) &&
     (puVar7 = (uint *)(*(int *)(param_1 + 0x18) + 8 + iVar5 * 8),
     *(int *)(*(int *)(param_1 + 0x18) + 8 + iVar5 * 8) == iVar6)) {
    puVar1 = puVar7 + 1;
    *puVar1 = *puVar1 + param_3;
    *puVar7 = param_2;
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  iVar6 = *(int *)(param_1 + 0x1c);
  while (iVar6 = iVar6 + -1, iVar5 + 1 < iVar6) {
    puVar8 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar6 * 8);
    *puVar8 = *(undefined4 *)(*(int *)(param_1 + 0x18) + -8 + iVar6 * 8);
    puVar8[1] = puVar8[-1];
  }
  iVar6 = *(int *)(param_1 + 0x18);
  *(uint *)(iVar6 + 8 + iVar5 * 8) = param_2;
  *(uint *)(iVar6 + 0xc + iVar5 * 8) = param_3;
LAB_0102c978:
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// 0102C990  FUN_0102c990  size=79  [run]
void __thiscall FUN_0102c990(int param_1,int param_2,int param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x224));
  *(int *)(param_1 + 0x18) = param_1 + 0x24;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x80000040;
  if (param_2 == 0) {
    param_3 = 0;
  }
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 8) = param_2 + param_3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x224));
  return;
}

// 0102C9E0  hkSolverAllocator::vf04  size=40  [run]
undefined4 hkSolverAllocator::vf04(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    param_1 = param_1 + 0x7f & 0xffffff80;
    uVar1 = FUN_0102c670(&param_1,1);
    return uVar1;
  }
  return 0;
}

// 0102CA10  hkSolverAllocator::vf0C  size=18  [run]
void hkSolverAllocator::vf0C(undefined4 param_1)

{
  FUN_0102c670(param_1,0);
  return;
}

// 0102CA30  FUN_0102ca30  size=32  [run]
void __thiscall FUN_0102ca30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0102CA60  FUN_0102ca60  size=15  [run]
int __thiscall FUN_0102ca60(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0102CAC0  FUN_0102cac0  size=24  [run]
void __thiscall
FUN_0102cac0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0102CAF0  hkSolverAllocator::vf24  size=10  [run]
undefined4 hkSolverAllocator::vf24(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0102CB00  FUN_0102cb00  size=56  [run]
void __thiscall FUN_0102cb00(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = param_1[1] + -1;
  iVar1 = (param_1[1] - param_2) * 8;
  puVar2 = (undefined4 *)(*param_1 + param_2 * 8);
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[2];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 0102CB40  FUN_0102cb40  size=13  [run]
void __thiscall FUN_0102cb40(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 0102CB50  FUN_0102cb50  size=23  [run]
int __thiscall FUN_0102cb50(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = param_2 + iVar1;
  return *param_1 + iVar1 * 8;
}

// 0102CB70  FUN_0102cb70  size=24  [run]
void __thiscall
FUN_0102cb70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0102CB90  hkSolverAllocator::vf00  size=14  [run]
undefined4 __fastcall hkSolverAllocator::vf00(undefined4 param_1)

{
  ~hkSolverAllocator();
  return param_1;
}

// 0102CBA0  FUN_0102cba0  size=29  [run]
void __thiscall FUN_0102cba0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0102CBC0  FUN_0102cbc0  size=27  [run]
void __thiscall FUN_0102cbc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(param_2,param_3);
  }
  return;
}

// 0102CBE0  FUN_0102cbe0  size=27  [run]
void __thiscall FUN_0102cbe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(param_2,param_3);
  }
  return;
}

// 0102CC00  FUN_0102cc00  size=23  [run]
void __thiscall FUN_0102cc00(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
  }
  return;
}

// 0102CC20  FUN_0102cc20  size=22  [run]
undefined4 __fastcall FUN_0102cc20(undefined4 param_1)

{
  FUN_0100b3c0(&stack0x00000004);
  return param_1;
}

// 0102CC60  FUN_0102cc60  size=33  [run]
void __thiscall
FUN_0102cc60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  return;
}

