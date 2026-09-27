// src/unsorted/unit_009F6260.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F6260..009F65D0, 2 functions

#include "types.h"

// 009F6260  FUN_009f6260  size=854  [run]
undefined4 __thiscall FUN_009f6260(int param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar6 = FUN_00a7c800();
  if (iVar6 == 0) {
    return 0;
  }
  if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0) {
    *(undefined4 *)(iVar6 + 0x480) = 1;
  }
  if (100 < *(short *)(iVar6 + 0x324)) {
    FUN_009ccaa0(*(undefined4 *)(param_1 + 0x30),&DAT_0165bc00,100,(int)*(short *)(iVar6 + 0x324));
  }
  *(int *)(param_1 + 0x30) = param_2;
  FUN_00a7c970(param_3);
  if (*(short *)(iVar6 + 0x324) < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(iVar6 + 800);
  }
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  uVar5 = *(ushort *)(iVar6 + 0x324);
  if (100 < uVar5) {
    uVar5 = 100;
  }
  *(char *)(param_1 + 0x40) = (char)uVar5;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(char *)(param_1 + 0x42) = (char)uVar5 + -1;
  if (param_4 != (int *)0x0) {
    if (param_4[8] != 0) {
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x40;
      *(undefined2 *)(param_1 + 0x41) = 0;
      *(undefined1 *)(param_1 + 0x40) = 1;
      return 1;
    }
    if ((param_4[6] != 0) && (param_4[7] != 0)) {
      *(int *)(param_1 + 0x44) = param_4[6];
      *(char *)(param_1 + 0x42) = (char)param_4[7] + -1;
    }
    iVar12 = *param_4;
    if (iVar12 != -1) {
      if (iVar12 == -2) {
        uVar4 = FUN_00dde2a0(0,*(undefined1 *)(param_1 + 0x42));
        *(undefined1 *)(param_1 + 0x41) = uVar4;
      }
      else {
        if ((iVar12 < 0) || ((int)(uint)*(byte *)(param_1 + 0x42) < iVar12)) {
          if (*(int *)(param_1 + 0x44) == 0) {
            FUN_009cca90(*(undefined4 *)(param_1 + 0x30),&DAT_0165bbbc,iVar12);
            return 0;
          }
          FUN_009cca90(*(undefined4 *)(param_1 + 0x30),&DAT_0165bbdc,iVar12);
          return 0;
        }
        *(char *)(param_1 + 0x41) = (char)iVar12;
      }
      iVar12 = param_4[1];
      if (iVar12 == -2) {
        uVar4 = FUN_00dde2a0(*(undefined1 *)(param_1 + 0x41),*(undefined1 *)(param_1 + 0x42));
        *(undefined1 *)(param_1 + 0x42) = uVar4;
      }
      else {
        if ((iVar12 < (int)(uint)*(byte *)(param_1 + 0x41)) ||
           ((int)(uint)*(byte *)(param_1 + 0x42) < iVar12)) {
          if (*(int *)(param_1 + 0x44) == 0) {
            FUN_009cca90(*(undefined4 *)(param_1 + 0x30),&DAT_0165bbbc,iVar12);
            return 0;
          }
          FUN_009cca90(*(undefined4 *)(param_1 + 0x30),&DAT_0165bbdc,iVar12);
          return 0;
        }
        *(char *)(param_1 + 0x42) = (char)iVar12;
      }
    }
    if (param_4[2] != 0) {
      iVar12 = *(int *)(param_1 + 0x44);
      iVar3 = *(int *)(param_1 + 0x38);
      if (iVar12 == 0) {
        uVar11 = (uint)*(byte *)(param_1 + 0x41);
        if (uVar11 != 0) {
          puVar9 = (uint *)(iVar3 + 0x38);
          do {
            *puVar9 = *puVar9 & 0xfffffffe;
            puVar9 = puVar9 + 0x1c;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        iVar12 = *(byte *)(param_1 + 0x42) + 1;
        if (iVar12 < *(short *)(iVar6 + 0x324)) {
          puVar9 = (uint *)(iVar12 * 0x70 + 0x38 + iVar3);
          iVar12 = *(short *)(iVar6 + 0x324) - iVar12;
          do {
            *puVar9 = *puVar9 & 0xfffffffe;
            puVar9 = puVar9 + 0x1c;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x41);
        iVar10 = 0;
        if (bVar1 != 0) {
          do {
            puVar9 = (uint *)((uint)*(byte *)(iVar10 + iVar12) * 0x70 + 0x38 + iVar3);
            *puVar9 = *puVar9 & 0xfffffffe;
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)(uint)bVar1);
        }
        uVar11 = (uint)*(byte *)(param_1 + 0x42);
        sVar2 = *(short *)(iVar6 + 0x324);
        while (uVar11 = uVar11 + 1, (int)uVar11 < (int)sVar2) {
          puVar9 = (uint *)((uint)*(byte *)(uVar11 + iVar12) * 0x70 + 0x38 + iVar3);
          *puVar9 = *puVar9 & 0xfffffffe;
        }
      }
    }
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffff7;
    if (((param_4[5] != 0) && (iVar6 = *(int *)(*(int *)(param_1 + 0x30) + 0x58), iVar6 != 0)) &&
       (piVar8 = (int *)(iVar6 + 0xf0), piVar8 != (int *)0x0)) {
      puVar9 = (uint *)*piVar8;
      if ((uint *)((int)puVar9 + 0xfU & 0xfffffff0) != puVar9) {
        uVar7 = FUN_00f59ed0(0xf);
        FUN_00dd5650(&DAT_016597b4,uVar7);
      }
      if ((puVar9 != (uint *)0x0) && ((*puVar9 & 0x800000) != 0)) {
        *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x10;
      }
    }
  }
  if ((*(uint *)(*(int *)(param_1 + 0x30) + 0x3c) & 0x1000) != 0) {
    FUN_009ccaa0(*(int *)(param_1 + 0x30),&DAT_0165bb8c);
  }
  iVar6 = FUN_009dcf40();
  if (iVar6 != 0) {
    FUN_009dd0d0();
    FUN_009dd250();
    if (*(short *)(param_1 + 0x4e) != 0) {
      iVar6 = FUN_00dd29b0(*(short *)(param_1 + 0x4e),0x10,0,0);
      *(int *)(param_1 + 0x48) = iVar6;
      if (iVar6 == 0) {
        FUN_009cca90(*(undefined4 *)(param_1 + 0x30),&DAT_0165ada8,*(undefined2 *)(param_1 + 0x4e));
        return 0;
      }
    }
    iVar6 = FixedSplineLoop<float>::FixedSplineLoop<float>_2();
    if ((iVar6 != 0) && (iVar6 = FUN_009e6ab0(), iVar6 != 0)) {
      FUN_009dd430();
      return 1;
    }
  }
  return 0;
}

// 009F65D0  FUN_009f65d0  size=831  [run]
undefined4 __thiscall FUN_009f65d0(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar6 = FUN_00a7c800();
  if (iVar6 == 0) {
    return 0;
  }
  if (100 < *(short *)(iVar6 + 0x324)) {
    FUN_009ccaa0(*(undefined4 *)(param_1 + 0x40),&DAT_0165bc00,100,(int)*(short *)(iVar6 + 0x324));
  }
  *(undefined4 *)(param_1 + 0x40) = param_2;
  FUN_00a7c970(param_3);
  uVar7 = 0;
  if (0 < *(short *)(iVar6 + 0x324)) {
    uVar7 = *(undefined4 *)(iVar6 + 800);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar7;
  uVar5 = *(ushort *)(iVar6 + 0x324);
  if (100 < uVar5) {
    uVar5 = 100;
  }
  *(char *)(param_1 + 0x50) = (char)uVar5;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(char *)(param_1 + 0x52) = (char)uVar5 + -1;
  if (param_4 != (int *)0x0) {
    if (param_4[8] != 0) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x40;
      *(undefined2 *)(param_1 + 0x51) = 0;
      *(undefined1 *)(param_1 + 0x50) = 1;
      return 1;
    }
    if ((param_4[6] != 0) && (param_4[7] != 0)) {
      *(int *)(param_1 + 0x54) = param_4[6];
      *(char *)(param_1 + 0x52) = (char)param_4[7] + -1;
    }
    iVar12 = *param_4;
    if (iVar12 != -1) {
      if (iVar12 == -2) {
        uVar4 = FUN_00dde2a0(0,*(undefined1 *)(param_1 + 0x52));
        *(undefined1 *)(param_1 + 0x51) = uVar4;
      }
      else {
        if ((iVar12 < 0) || ((int)(uint)*(byte *)(param_1 + 0x52) < iVar12)) {
          if (*(int *)(param_1 + 0x54) == 0) {
            FUN_009cca90(*(undefined4 *)(param_1 + 0x40),&DAT_0165bbbc,iVar12);
            return 0;
          }
          FUN_009cca90(*(undefined4 *)(param_1 + 0x40),&DAT_0165bbdc,iVar12);
          return 0;
        }
        *(char *)(param_1 + 0x51) = (char)iVar12;
      }
      iVar12 = param_4[1];
      if (iVar12 == -2) {
        uVar4 = FUN_00dde2a0((uint)*(byte *)(param_1 + 0x51),*(undefined1 *)(param_1 + 0x52));
        *(undefined1 *)(param_1 + 0x52) = uVar4;
      }
      else {
        if ((iVar12 < (int)(uint)*(byte *)(param_1 + 0x51)) ||
           ((int)(uint)*(byte *)(param_1 + 0x52) < iVar12)) {
          if (*(int *)(param_1 + 0x54) == 0) {
            FUN_009cca90(*(undefined4 *)(param_1 + 0x40),&DAT_0165bbbc,iVar12);
            return 0;
          }
          FUN_009cca90(*(undefined4 *)(param_1 + 0x40),&DAT_0165bbdc,iVar12);
          return 0;
        }
        *(char *)(param_1 + 0x52) = (char)iVar12;
      }
    }
    if (param_4[2] != 0) {
      iVar12 = *(int *)(param_1 + 0x54);
      iVar3 = *(int *)(param_1 + 0x48);
      if (iVar12 == 0) {
        uVar11 = (uint)*(byte *)(param_1 + 0x51);
        if (uVar11 != 0) {
          puVar8 = (uint *)(iVar3 + 0x38);
          do {
            *puVar8 = *puVar8 & 0xfffffffe;
            puVar8 = puVar8 + 0x1c;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        iVar12 = *(byte *)(param_1 + 0x52) + 1;
        if (iVar12 < *(short *)(iVar6 + 0x324)) {
          puVar8 = (uint *)(iVar12 * 0x70 + 0x38 + iVar3);
          iVar12 = *(short *)(iVar6 + 0x324) - iVar12;
          do {
            *puVar8 = *puVar8 & 0xfffffffe;
            puVar8 = puVar8 + 0x1c;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x51);
        iVar10 = 0;
        if (bVar1 != 0) {
          do {
            puVar8 = (uint *)((uint)*(byte *)(iVar10 + iVar12) * 0x70 + 0x38 + iVar3);
            *puVar8 = *puVar8 & 0xfffffffe;
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)(uint)bVar1);
        }
        uVar11 = (uint)*(byte *)(param_1 + 0x52);
        sVar2 = *(short *)(iVar6 + 0x324);
        while (uVar11 = uVar11 + 1, (int)uVar11 < (int)sVar2) {
          puVar8 = (uint *)((uint)*(byte *)(uVar11 + iVar12) * 0x70 + 0x38 + iVar3);
          *puVar8 = *puVar8 & 0xfffffffe;
        }
      }
    }
    if (param_4[4] == 0) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff7;
    }
    else {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 8;
    }
    if (((param_4[5] != 0) && (iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x58), iVar6 != 0)) &&
       (piVar9 = (int *)(iVar6 + 0xf0), piVar9 != (int *)0x0)) {
      puVar8 = (uint *)*piVar9;
      if ((uint *)((int)puVar8 + 0xfU & 0xfffffff0) != puVar8) {
        uVar7 = FUN_00f59ed0(0xf);
        FUN_00dd5650(&DAT_016597b4,uVar7);
      }
      if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x800000) != 0)) {
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x10;
      }
    }
    if (param_4[9] == 0) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xffffff7f;
    }
    else {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x80;
    }
  }
  iVar6 = FUN_009dd940();
  if (iVar6 != 0) {
    FUN_009ddb60();
    FUN_009ddd20();
    if (*(short *)(param_1 + 0x5e) != 0) {
      iVar6 = FUN_00dd29b0(*(short *)(param_1 + 0x5e),0x10,0,0);
      *(int *)(param_1 + 0x58) = iVar6;
      if (iVar6 == 0) {
        FUN_009cca90(*(undefined4 *)(param_1 + 0x40),&DAT_0165ada8,*(undefined2 *)(param_1 + 0x5e));
        return 0;
      }
    }
    iVar6 = FixedSplineLoop<float>::FixedSplineLoop<float>();
    if ((iVar6 != 0) && (iVar6 = FUN_009e7070(), iVar6 != 0)) {
      FUN_009ddf70();
      return 1;
    }
  }
  return 0;
}

