// src/unsorted/unit_009DB440.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009DB440..009DBA90, 8 functions

#include "mgrr.h"

// 009DB440  FUN_009db440  size=129  [run]
undefined4 FUN_009db440(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01be9c78;
        (**(code **)(*piVar2 + 4))(&DAT_01be9c78);
        iVar1 = FUN_00dd6d80(puVar4);
        if (iVar1 != 0) {
          iVar1 = FUN_00a81330();
          if (iVar1 != 0) goto LAB_009db498;
        }
      }
    }
  }
  iVar1 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
LAB_009db498:
      uVar3 = FUN_00a7c800();
      return uVar3;
    }
  }
  return 0;
}

// 009DB4D0  FUN_009db4d0  size=32  [run]
void __fastcall FUN_009db4d0(undefined4 *param_1)

{
  FUN_00dd7270();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00dd7270();
  return;
}

// 009DB4F0  FUN_009db4f0  size=85  [run]
void __thiscall FUN_009db4f0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    FUN_009d15b0(param_2);
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    return;
  }
  FUN_00dd5650(&DAT_01659cb0);
  FUN_009d15b0(param_2);
  return;
}

// 009DB5D0  FUN_009db5d0  size=220  [run]
undefined4 __fastcall FUN_009db5d0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(uint **)(param_1 + 0x58) != (uint *)0x0) {
    uVar1 = **(uint **)(param_1 + 0x58);
    if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
      uVar2 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar2);
    }
    if (uVar1 != 0) {
      if ((*(uint *)(param_1 + 0x3c) & 0x2000000) == 0) {
        *(undefined4 *)(param_1 + 0x490) = 0x51;
        if ('>' < *(char *)(uVar1 + 0x16)) {
          *(undefined4 *)(param_1 + 0x494) = 99999;
          return 1;
        }
        *(int *)(param_1 + 0x494) = (int)*(char *)(uVar1 + 0x16);
        return 1;
      }
      if (*(char *)(uVar1 + 0x16) < '\x14') {
        *(undefined4 *)(param_1 + 0x490) = 0x4b;
        *(int *)(param_1 + 0x494) = (int)*(char *)(uVar1 + 0x16);
        return 1;
      }
      if (*(char *)(uVar1 + 0x16) < '\x1e') {
        *(undefined4 *)(param_1 + 0x490) = 0x4c;
        *(int *)(param_1 + 0x494) = *(char *)(uVar1 + 0x16) + -0x14;
        return 1;
      }
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x490) = 0x51;
  *(undefined4 *)(param_1 + 0x494) = 0;
  return 1;
}

// 009DB6B0  FUN_009db6b0  size=92  [run]
void __thiscall FUN_009db6b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(short *)(param_2 + 4) == 0;
  }
  if (bVar2) {
    *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x488) | 8;
  }
  else {
    *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x488) & 0xfffffff7;
  }
  iVar1 = (int)*(short *)(param_3 + 0x324);
  if (100 < iVar1) {
    iVar1 = 100;
  }
  *(short *)(param_1 + 0x486) = *(short *)(param_1 + 0x486) + ((short)iVar1 + 0xfU & 0xfff0);
  *(int *)(param_1 + 0x474) = iVar1;
  return;
}

// 009DB710  FUN_009db710  size=742  [run]
undefined4 __thiscall FUN_009db710(int param_1,short *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint local_18;
  uint local_14;
  int local_10;
  char local_4 [4];
  
  local_18 = 0;
  local_14 = 0;
  if (param_2 != (short *)0x0) {
    local_18 = (uint)*param_2;
    local_14 = (uint)param_2[1];
    if ((int)local_14 <= (int)local_18) {
      local_14 = local_18;
    }
  }
  *(uint *)(param_1 + 0x470) = (uint)*(ushort *)(param_1 + 0x484) + *(int *)(param_1 + 0x480);
  *(ushort *)(param_1 + 0x484) =
       (*(short *)(param_1 + 0x474) + 0xfU & 0xfff0) + *(ushort *)(param_1 + 0x484);
  if ((*(byte *)(param_1 + 0x488) & 8) == 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x474)) {
      do {
        *(undefined1 *)(iVar1 + *(int *)(param_1 + 0x470)) = 0;
        if ((local_18 == 0xffffffff) ||
           (((int)local_18 <= iVar1 && ((local_14 == 0xffffffff || (iVar1 <= (int)local_14)))))) {
          *(undefined1 *)(iVar1 + *(int *)(param_1 + 0x470)) = 1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x474));
    }
  }
  else {
    param_2 = (short *)0x0;
    if (0 < *(int *)(param_1 + 0x474)) {
      local_10 = 0;
      do {
        *(undefined1 *)((int)param_2 + *(int *)(param_1 + 0x470)) = 0;
        if ((((-1 < (int)param_2) && ((int)param_2 < (int)*(short *)(param_3 + 0x324))) &&
            (iVar1 = *(int *)(param_3 + 800) + local_10, iVar1 != 0)) &&
           (iVar1 = FUN_00e05f70(*(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x40),&DAT_01659d48),
           iVar1 != 0)) {
          uVar3 = (uint)(byte)(&DAT_016caad0)[*(byte *)(iVar1 + 4)];
          bVar5 = uVar3 == 0xff;
          if (bVar5) {
            uVar3 = 0;
          }
          uVar4 = (uint)(byte)(&DAT_016caad0)[*(byte *)(iVar1 + 5)];
          bVar6 = uVar4 == 0xff;
          if (bVar6) {
            uVar4 = 0;
          }
          uVar2 = (uint)(byte)(&DAT_016caad0)[*(byte *)(iVar1 + 6)];
          bVar7 = uVar2 == 0xff;
          if (bVar7) {
            uVar2 = 0;
          }
          if (((bVar5) || (bVar6)) || (bVar7)) {
            _strncpy_s(local_4,4,(char *)(iVar1 + 4),3);
            FUN_009cca90(param_1,&DAT_01659d24,local_4);
          }
          else {
            uVar2 = uVar2 + (uVar4 + uVar3 * 10) * 10;
            if ((local_18 == 0xffffffff) ||
               ((local_18 <= uVar2 && ((local_14 == 0xffffffff || (uVar2 <= local_14)))))) {
              *(undefined1 *)((int)param_2 + *(int *)(param_1 + 0x470)) = 1;
            }
          }
        }
        local_10 = local_10 + 0x70;
        param_2 = (short *)((int)param_2 + 1);
      } while ((int)param_2 < *(int *)(param_1 + 0x474));
    }
  }
  uVar3 = FUN_00a12810(*(undefined4 *)(param_1 + 0x470),*(undefined4 *)(param_1 + 0x474));
  if ((int)uVar3 < 1) {
    if ((*(int *)(param_3 + 0x330) != 0) && (0 < *(int *)(*(int *)(param_3 + 0x330) + 0xcc))) {
      *(undefined4 *)(param_1 + 0x478) = 0;
      *(undefined4 *)(param_1 + 0x47c) = 0;
      return 1;
    }
    FUN_009cca90(param_1,&DAT_01659d00,local_18,local_14);
  }
  else {
    iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar3 * 0x38 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar3 * 0x38),&DAT_01b7bdf8);
    *(int *)(param_1 + 0x478) = iVar1;
    if (iVar1 != 0) {
      if (0 < (int)uVar3) {
        iVar1 = 0;
        uVar4 = uVar3;
        do {
          *(undefined4 *)(iVar1 + 0x28 + *(int *)(param_1 + 0x478)) = 0xffffffff;
          iVar1 = iVar1 + 0x38;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      *(uint *)(param_1 + 0x47c) = uVar3;
      return 1;
    }
  }
  return 0;
}

// 009DBA00  FUN_009dba00  size=129  [run]
undefined4 FUN_009dba00(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01be9c78;
        (**(code **)(*piVar2 + 4))(&DAT_01be9c78);
        iVar1 = FUN_00dd6d80(puVar4);
        if (iVar1 != 0) {
          iVar1 = FUN_00a81330();
          if (iVar1 != 0) goto LAB_009dba58;
        }
      }
    }
  }
  iVar1 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
LAB_009dba58:
      uVar3 = FUN_00a7c800();
      return uVar3;
    }
  }
  return 0;
}

// 009DBA90  FUN_009dba90  size=183  [run]
void __thiscall FUN_009dba90(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  FUN_00f0b530(*(undefined4 *)(param_2 + 0x24));
  FUN_00efd260(*(undefined4 *)(param_2 + 0x24));
  FUN_009d16e0(param_2);
  iVar3 = *(int *)(*(int *)(param_2 + 0x24) + 8);
  uVar1 = *(undefined4 *)(iVar3 + 0xc);
  iVar4 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(iVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  fVar5 = (float10)FUN_00edbf30(iVar4 + 0x40,param_1 + 400,uVar1,uVar2);
  fVar5 = fVar5 * (float10)*(float *)(param_1 + 0x124);
  *(float *)(param_1 + 0x124) = (float)fVar5;
  if ((*(byte *)(param_1 + 0x30) & 0x10) == 0) {
    fVar6 = (float10)1;
  }
  else {
    fVar6 = (float10)0;
    if (fVar6 != (float10)*(float *)(param_1 + 0x90)) {
      fVar6 = (float10)*(float *)(param_1 + 0x9c) / (float10)*(float *)(param_1 + 0x90);
    }
  }
  fVar6 = fVar6 * fVar5;
  *(float *)(param_1 + 0x124) = (float)fVar6;
  if ((*(byte *)(param_1 + 0x3e) & 1) == 0) {
    return;
  }
  *(float *)(param_1 + 0x124) = (float)(fVar6 * (float10)*(float *)(param_1 + 0x128));
  return;
}

