// src/unsorted/unit_009DCDC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009DCDC0..009DE380, 20 functions

#include "mgrr.h"

// 009DCDC0  FUN_009dcdc0  size=76  [run]
undefined4 __thiscall FUN_009dcdc0(int *param_1,int param_2)

{
  int *piVar1;
  
  if ((((((int *)*param_1 == (int *)0x0) || (piVar1 = *(int **)*param_1, piVar1 == (int *)0x0)) ||
       (*piVar1 != *(int *)(param_2 + 8))) &&
      ((((int *)param_1[1] == (int *)0x0 || (piVar1 = *(int **)param_1[1], piVar1 == (int *)0x0)) ||
       (*piVar1 != *(int *)(param_2 + 8))))) &&
     ((((int *)param_1[2] == (int *)0x0 || (piVar1 = *(int **)param_1[2], piVar1 == (int *)0x0)) ||
      (*piVar1 != *(int *)(param_2 + 8))))) {
    return 0;
  }
  return 1;
}

// 009DCE10  FUN_009dce10  size=301  [run]
void __thiscall FUN_009dce10(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0xf) & 0x40) == 0) {
    *(undefined4 *)(param_2 + 4) = *param_1;
    *(undefined4 *)(param_2 + 8) = param_1[1];
    *(undefined4 *)(param_2 + 0xc) = param_1[2];
    *(undefined4 *)(param_2 + 0x10) = param_1[3];
    *(undefined4 *)(param_2 + 0x14) = param_1[4];
    *(undefined4 *)(param_2 + 0x18) = param_1[5];
    *(undefined4 *)(param_2 + 0x1c) = param_1[6];
    *(undefined4 *)(param_2 + 0x20) = param_1[7];
    *(undefined4 *)(param_2 + 0x24) = param_1[8];
    *(undefined4 *)(param_2 + 0x2c) = param_1[0xc];
    *(undefined4 *)(param_2 + 0x30) = param_1[0xe];
    *(undefined4 *)(param_2 + 0x34) = param_1[0x11];
    *(undefined4 *)(param_2 + 0x28) = param_1[9];
    if ((*(int *)(param_1[0xc] + 0x58) == 0) ||
       (puVar1 = (uint *)(*(int *)(param_1[0xc] + 0x58) + 0x140), puVar1 == (uint *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
      if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
        uVar3 = FUN_00f59ed0(0x14);
        FUN_00dd5650(&DAT_016597b4,uVar3);
      }
    }
    *(uint *)(param_2 + 0x3c) = uVar2;
    if ((*(int *)(param_1[0xc] + 0x58) == 0) ||
       (puVar1 = (uint *)(*(int *)(param_1[0xc] + 0x58) + 0x130), puVar1 == (uint *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
      if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
        uVar3 = FUN_00f59ed0(0x13);
        FUN_00dd5650(&DAT_016597b4,uVar3);
      }
    }
    *(uint *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1[0xc] + 0x84);
    uVar3 = FUN_009d5b00(param_1[0xc]);
    *(undefined4 *)(param_2 + 0x48) = uVar3;
    *(undefined4 *)(param_2 + 0x38) = 0;
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      uVar3 = FUN_00a7c800();
      *(undefined4 *)(param_2 + 0x38) = uVar3;
    }
    if (*(int *)(param_1[0xc] + 0x50) != 0) {
      *(int *)(param_2 + 0x4c) = *(int *)(param_1[0xc] + 0x50) + 0x10;
      return;
    }
    *(undefined4 *)(param_2 + 0x4c) = 0;
  }
  return;
}

// 009DCF40  FUN_009dcf40  size=388  [run]
undefined4 __fastcall FUN_009dcf40(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_34 [52];
  
  iVar7 = *(int *)(param_1 + 0x38);
  if (iVar7 == 0) {
    return 0;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 0x58);
  if ((iVar3 != 0) && (puVar1 = (uint *)(iVar3 + 0xf0), puVar1 != (uint *)0x0)) {
    uVar5 = *puVar1;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar2 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar2);
    }
    if (uVar5 != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 0x58);
      if ((iVar3 == 0) || (puVar1 = (uint *)(iVar3 + 0x130), puVar1 == (uint *)0x0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar1;
        if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
          uVar2 = FUN_00f59ed0(0x13);
          FUN_00dd5650(&DAT_016597b4,uVar2);
        }
      }
      iVar3 = FUN_009d25b0(local_34,uVar5,uVar6);
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 0x44);
        uVar5 = (uint)*(byte *)(param_1 + 0x42);
        if (iVar3 == 0) {
          uVar6 = (uint)*(byte *)(param_1 + 0x41);
          if (uVar6 <= uVar5) {
            iVar7 = uVar6 * 0x70 + iVar7;
            do {
              iVar3 = FUN_00fae930(iVar7,local_34);
              if (iVar3 == 0) {
                FUN_009cca90(*(undefined4 *)(param_1 + 0x30),&DAT_0165a4f0);
                return 0;
              }
              uVar6 = uVar6 + 1;
              iVar7 = iVar7 + 0x70;
            } while ((int)uVar6 <= (int)uVar5);
            return 1;
          }
        }
        else {
          uVar6 = (uint)*(byte *)(param_1 + 0x41);
          if (uVar6 <= uVar5) {
            do {
              iVar4 = FUN_00fae930((uint)*(byte *)(uVar6 + iVar3) * 0x70 + iVar7,local_34);
              if (iVar4 == 0) {
                FUN_009cca90(*(undefined4 *)(param_1 + 0x30),&DAT_0165a4f0);
                return 0;
              }
              uVar6 = uVar6 + 1;
            } while ((int)uVar6 <= (int)uVar5);
          }
        }
        return 1;
      }
      FUN_009cca90(*(undefined4 *)(param_1 + 0x30),&DAT_0165a554);
      return 0;
    }
  }
  FUN_009cca90(*(undefined4 *)(param_1 + 0x30),&DAT_0165a57c);
  return 0;
}

// 009DD0D0  FUN_009dd0d0  size=373  [run]
void __fastcall FUN_009dd0d0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  
  *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x50;
  iVar6 = *(int *)(*(int *)(param_1 + 0x30) + 0x58);
  if ((iVar6 != 0) && (piVar3 = (int *)(iVar6 + 0xf0), piVar3 != (int *)0x0)) {
    puVar1 = (uint *)*piVar3;
    if ((uint *)((int)puVar1 + 0xfU & 0xfffffff0) != puVar1) {
      uVar4 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (puVar1 != (uint *)0x0) {
      if ((((*puVar1 & 0x80000000) != 0) &&
          (iVar6 = *(int *)(*(int *)(param_1 + 0x30) + 0x58), iVar6 != 0)) &&
         (puVar5 = (uint *)(iVar6 + 0x100), puVar5 != (uint *)0x0)) {
        uVar2 = *puVar5;
        if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
          uVar4 = FUN_00f59ed0(0x10);
          FUN_00dd5650(&DAT_016597b4,uVar4);
        }
        if (uVar2 != 0) {
          *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x20;
          iVar6 = FUN_00f8ee60();
          if (iVar6 != 0) {
            *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x30;
            *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 1;
          }
        }
      }
      if ((((*puVar1 & 0x40000000) != 0) &&
          (iVar6 = *(int *)(*(int *)(param_1 + 0x30) + 0x58), iVar6 != 0)) &&
         (puVar5 = (uint *)(iVar6 + 0x110), puVar5 != (uint *)0x0)) {
        uVar2 = *puVar5;
        if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
          uVar4 = FUN_00f59ed0(0x11);
          FUN_00dd5650(&DAT_016597b4,uVar4);
        }
        if (uVar2 != 0) {
          *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x20;
          iVar6 = FUN_00f8ee60();
          if (iVar6 != 0) {
            *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x30;
            *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 2;
          }
        }
      }
      if ((((*puVar1 & 0x20000000) != 0) &&
          (iVar6 = *(int *)(*(int *)(param_1 + 0x30) + 0x58), iVar6 != 0)) &&
         (puVar5 = (uint *)(iVar6 + 0x120), puVar5 != (uint *)0x0)) {
        uVar2 = *puVar5;
        if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
          uVar4 = FUN_00f59ed0(0x12);
          FUN_00dd5650(&DAT_016597b4,uVar4);
        }
        if (uVar2 != 0) {
          *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x20;
          iVar6 = FUN_00f8ee60();
          if (iVar6 != 0) {
            *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x30;
            *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 4;
          }
        }
      }
      if ((*puVar1 & 0x8000000) != 0) {
        *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x40;
      }
      if ((*puVar1 & 0x4000000) != 0) {
        *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x40;
      }
    }
  }
  return;
}

// 009DD250  FUN_009dd250  size=142  [run]
void __fastcall FUN_009dd250(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  iVar1 = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x41);
    if (*(byte *)(param_1 + 0x42) < uVar2) goto LAB_009dd2c5;
    piVar4 = (int *)(uVar2 * 0x70 + 0x34 + iVar3);
    iVar3 = (*(byte *)(param_1 + 0x42) - uVar2) + 1;
    do {
      iVar1 = iVar1 + *piVar4;
      piVar4 = piVar4 + 0x1c;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + 0x41);
    if (*(byte *)(param_1 + 0x42) < uVar2) goto LAB_009dd2c5;
    do {
      iVar1 = iVar1 + *(int *)(iVar3 + 0x34 +
                              (uint)*(byte *)(uVar2 + *(int *)(param_1 + 0x44)) * 0x70);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 <= (int)(uint)*(byte *)(param_1 + 0x42));
  }
  if (0x100 < iVar1) {
    FUN_009cca90(*(undefined4 *)(param_1 + 0x30),&DAT_0165a5b0,iVar1);
    return;
  }
LAB_009dd2c5:
  *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + ((short)iVar1 * 4 + 0xfU & 0xfff0);
  *(short *)(param_1 + 0x28) = (short)iVar1;
  return;
}

// 009DD2E0  FUN_009dd2e0  size=336  [run]
void __thiscall FUN_009dd2e0(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FID_conflict__memcpy(param_2,&DAT_016593d0,0x30);
  if (*(int *)(param_1 + 0x14) != 0) {
    param_2[9] = *(uint *)(*(int *)(param_1 + 0x14) + 0x24);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_2[10] = *(uint *)(*(int *)(param_1 + 0x18) + 0x24);
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && ((float)param_2[10] == 0.0)) {
    param_2[10] = *(uint *)(*(int *)(param_1 + 0x1c) + 0x24);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x58);
  if ((iVar1 != 0) && (puVar2 = (uint *)(iVar1 + 0xf0), puVar2 != (uint *)0x0)) {
    uVar4 = *puVar2;
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar3 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (uVar4 != 0) {
      param_2[6] = (uint)*(byte *)(uVar4 + 0x16);
    }
  }
  puVar2 = *(uint **)(*(int *)(param_1 + 0x30) + 0x58);
  if (puVar2 == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar3 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  uVar4 = (uint)*(char *)(uVar4 + 0x16);
  if ((*(uint *)(*(int *)(param_1 + 0x30) + 0x3c) & 0x2000000) == 0) {
    if ((int)uVar4 < -0x3f) {
      param_2[8] = 9999;
      goto LAB_009dd3ba;
    }
    if (0x3e < (int)uVar4) {
      param_2[8] = 0xffffd8f1;
      goto LAB_009dd3ba;
    }
  }
  else if ((int)uVar4 < 0x14) {
    param_2[7] = 1;
  }
  else {
    param_2[7] = 2;
    uVar4 = uVar4 - 0x14;
  }
  param_2[8] = uVar4;
LAB_009dd3ba:
  *param_2 = *(uint *)(*(int *)(param_1 + 0x30) + 0x38) >> 10 & 1;
  param_2[2] = ~(*(uint *)(*(int *)(param_1 + 0x30) + 0x38) >> 4) & 1;
  param_2[3] = *(uint *)(*(int *)(param_1 + 0x30) + 0x3c) >> 0x1f;
  param_2[4] = *(uint *)(*(int *)(param_1 + 0x30) + 0x3c) >> 0xd & 1;
  param_2[5] = *(uint *)(*(int *)(param_1 + 0x30) + 0x3c) >> 0xc & 1;
  return;
}

// 009DD430  FUN_009dd430  size=348  [run]
void __fastcall FUN_009dd430(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_009dd2e0(&local_40);
    iVar2 = *(int *)(param_1 + 0x24);
    if (iVar2 != 0) {
      uVar1 = *(ushort *)(param_1 + 0x2a);
      iVar5 = 0;
      if (uVar1 != 0) {
        do {
          iVar3 = *(int *)(iVar2 + iVar5 * 4);
          *(undefined4 *)(iVar3 + 0x488) = local_1c;
          *(undefined4 *)(iVar3 + 0x514) = local_28;
          *(undefined4 *)(iVar3 + 0x508) = local_24;
          *(undefined4 *)(iVar3 + 0x48c) = local_18;
          *(undefined4 *)(iVar3 + 0x50c) = local_20;
          if (local_40 == 0) {
            *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) & 0xffffdfff;
          }
          else {
            *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) | 0x2000;
          }
          if (local_3c == 0) {
            *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) & 0xffff7fff;
          }
          else {
            *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) | 0x8000;
          }
          if (local_38 == 0) {
            *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) & 0xfffeffff;
          }
          else {
            *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) | 0x10000;
          }
          if ((*(int *)(iVar3 + 0x490) != 0) &&
             ((*(byte *)(*(int *)(iVar3 + 0x490) + 0x1e) & 8) != 0)) {
            if (local_30 == 0) {
              *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) & 0xff7fffff;
            }
            else {
              *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) | 0x800000;
            }
          }
          uVar4 = 0x3f800000;
          if (local_2c != 0) {
            uVar4 = 0;
          }
          *(undefined4 *)(iVar3 + 0x504) = uVar4;
          if (local_34 != 0) {
            *(uint *)(iVar3 + 0x518) = 2 - (uint)((*(uint *)(iVar3 + 0x51c) & 0x1000) != 0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(uint)uVar1);
      }
    }
  }
  return;
}

// 009DD5B0  FUN_009dd5b0  size=176  [run]
void __fastcall FUN_009dd5b0(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x38);
  if (iVar7 != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x42);
    iVar2 = *(int *)(param_1 + 0x44);
    uVar6 = *(uint *)(param_1 + 0x3c) >> 5 & 1;
    if (iVar2 == 0) {
      uVar4 = (uint)*(byte *)(param_1 + 0x41);
      if (uVar4 <= uVar3) {
        puVar5 = (uint *)(uVar4 * 0x70 + 0x38 + iVar7);
        iVar7 = (uVar3 - uVar4) + 1;
        do {
          if (uVar6 == 0) {
            *puVar5 = *puVar5 & 0xfffffffe;
          }
          puVar5 = puVar5 + 0x1c;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      uVar4 = (uint)*(byte *)(param_1 + 0x41);
      if (uVar4 <= uVar3) {
        do {
          if (uVar6 == 0) {
            puVar5 = (uint *)((uint)*(byte *)(uVar4 + iVar2) * 0x70 + 0x38 + iVar7);
            *puVar5 = *puVar5 & 0xfffffffe;
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 <= (int)uVar3);
      }
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x2a);
      iVar7 = 0;
      if (uVar1 != 0) {
        do {
          FUN_00a08e70(1);
          FUN_00a08e70(5);
          FUN_00a08e70(10);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)uVar1);
      }
    }
  }
  return;
}

// 009DD660  FUN_009dd660  size=316  [run]
void __thiscall FUN_009dd660(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
    fVar1 = *(float *)(*(int *)(param_2 + 0x2c) + 0x118);
    fVar2 = *(float *)(*(int *)(param_2 + 0x2c) + 0x110);
    if (fVar2 != fVar1) {
      if (*(int *)(param_2 + 4) != 0) {
        FUN_00ec6e40(fVar2,fVar1);
      }
      if (*(int *)(param_2 + 8) != 0) {
        FUN_00ec6e40(fVar2,fVar1);
      }
      if (*(int *)(param_2 + 0xc) != 0) {
        FUN_00ec6e40(fVar2,fVar1);
      }
      if (*(int *)(param_2 + 0x18) != 0) {
        FUN_00ec9530(fVar2);
      }
      if (*(int *)(param_2 + 0x1c) != 0) {
        FUN_00ec9530(fVar2);
      }
      if (*(int *)(param_2 + 0x20) != 0) {
        FUN_00ec9530(fVar2);
      }
      if (*(int *)(param_2 + 0x10) != 0) {
        FUN_00eca680(*(undefined4 *)(param_2 + 0x3c),fVar1,fVar2);
        if (*(int *)(param_2 + 0x24) != 0) {
          *(undefined4 *)(*(int *)(param_2 + 0x24) + 8) = **(undefined4 **)(param_2 + 0x10);
        }
      }
      if (*(int *)(param_2 + 0x14) != 0) {
        FUN_00eca490(*(undefined4 *)(param_2 + 0x40),fVar1,fVar2);
        if (*(int *)(param_2 + 0x24) != 0) {
          *(undefined4 *)(*(int *)(param_2 + 0x24) + 4) = **(undefined4 **)(param_2 + 0x14);
          return;
        }
      }
    }
  }
  return;
}

// 009DD7A0  FUN_009dd7a0  size=96  [run]
undefined4 __thiscall FUN_009dd7a0(int *param_1,int param_2)

{
  int *piVar1;
  
  if ((((((int *)*param_1 == (int *)0x0) || (piVar1 = *(int **)*param_1, piVar1 == (int *)0x0)) ||
       (*piVar1 != *(int *)(param_2 + 8))) &&
      (((((int *)param_1[1] == (int *)0x0 || (piVar1 = *(int **)param_1[1], piVar1 == (int *)0x0))
        || (*piVar1 != *(int *)(param_2 + 8))) &&
       ((((int *)param_1[2] == (int *)0x0 || (piVar1 = *(int **)param_1[2], piVar1 == (int *)0x0))
        || (*piVar1 != *(int *)(param_2 + 8))))))) &&
     ((((int *)param_1[3] == (int *)0x0 || (piVar1 = *(int **)param_1[3], piVar1 == (int *)0x0)) ||
      (*piVar1 != *(int *)(param_2 + 8))))) {
    return 0;
  }
  return 1;
}

// 009DD800  FUN_009dd800  size=307  [run]
void __thiscall FUN_009dd800(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x13) & 0x40) == 0) {
    *(undefined4 *)(param_2 + 4) = *param_1;
    *(undefined4 *)(param_2 + 8) = param_1[1];
    *(undefined4 *)(param_2 + 0xc) = param_1[2];
    *(undefined4 *)(param_2 + 0x10) = param_1[3];
    *(undefined4 *)(param_2 + 0x14) = param_1[4];
    *(undefined4 *)(param_2 + 0x18) = param_1[5];
    *(undefined4 *)(param_2 + 0x1c) = param_1[6];
    *(undefined4 *)(param_2 + 0x20) = param_1[7];
    *(undefined4 *)(param_2 + 0x24) = param_1[8];
    *(undefined4 *)(param_2 + 0x28) = param_1[0xc];
    *(undefined4 *)(param_2 + 0x30) = param_1[0x10];
    *(undefined4 *)(param_2 + 0x34) = param_1[0x12];
    *(undefined4 *)(param_2 + 0x38) = param_1[0x15];
    *(undefined4 *)(param_2 + 0x2c) = param_1[0xd];
    if ((*(int *)(param_1[0x10] + 0x58) == 0) ||
       (puVar1 = (uint *)(*(int *)(param_1[0x10] + 0x58) + 0x140), puVar1 == (uint *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
      if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
        uVar3 = FUN_00f59ed0(0x14);
        FUN_00dd5650(&DAT_016597b4,uVar3);
      }
    }
    *(uint *)(param_2 + 0x40) = uVar2;
    if ((*(int *)(param_1[0x10] + 0x58) == 0) ||
       (puVar1 = (uint *)(*(int *)(param_1[0x10] + 0x58) + 0x130), puVar1 == (uint *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
      if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
        uVar3 = FUN_00f59ed0(0x13);
        FUN_00dd5650(&DAT_016597b4,uVar3);
      }
    }
    *(uint *)(param_2 + 0x44) = uVar2;
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1[0x10] + 0x84);
    uVar3 = FUN_009d5b00(param_1[0x10]);
    *(undefined4 *)(param_2 + 0x4c) = uVar3;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      uVar3 = FUN_00a7c800();
      *(undefined4 *)(param_2 + 0x3c) = uVar3;
    }
    if (*(int *)(param_1[0x10] + 0x50) != 0) {
      *(int *)(param_2 + 0x50) = *(int *)(param_1[0x10] + 0x50) + 0x10;
      return;
    }
    *(undefined4 *)(param_2 + 0x50) = 0;
  }
  return;
}

// 009DD940  FUN_009dd940  size=533  [run]
undefined4 __fastcall FUN_009dd940(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_4c;
  undefined1 local_44 [68];
  
  iVar8 = *(int *)(param_1 + 0x48);
  uVar5 = 0;
  if (iVar8 == 0) {
    return 0;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x58);
  if ((iVar3 != 0) && (puVar1 = (uint *)(iVar3 + 0xf0), puVar1 != (uint *)0x0)) {
    uVar7 = *puVar1;
    if ((uVar7 + 0xf & 0xfffffff0) != uVar7) {
      uVar2 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar2);
    }
    if (uVar7 != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x58);
      if ((iVar3 == 0) || (puVar1 = (uint *)(iVar3 + 0x30), puVar1 == (uint *)0x0)) {
        local_4c = 0;
      }
      else {
        local_4c = *puVar1;
        if ((local_4c + 0xf & 0xfffffff0) != local_4c) {
          uVar2 = FUN_00f59ed0(3);
          FUN_00dd5650(&DAT_016597b4,uVar2);
        }
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x58);
      if (((iVar3 != 0) && (puVar1 = (uint *)(iVar3 + 0x80), puVar1 != (uint *)0x0)) &&
         (uVar5 = *puVar1, (uVar5 + 0xf & 0xfffffff0) != uVar5)) {
        uVar2 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar2);
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x58);
      if ((iVar3 == 0) || (puVar1 = (uint *)(iVar3 + 0x130), puVar1 == (uint *)0x0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar1;
        if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
          uVar2 = FUN_00f59ed0(0x13);
          FUN_00dd5650(&DAT_016597b4,uVar2);
        }
      }
      iVar3 = FUN_009d26e0(local_44,uVar7,uVar6,uVar5,local_4c);
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 0x54);
        uVar5 = (uint)*(byte *)(param_1 + 0x52);
        if (iVar3 == 0) {
          uVar7 = (uint)*(byte *)(param_1 + 0x51);
          if (uVar7 <= uVar5) {
            iVar8 = uVar7 * 0x70 + iVar8;
            do {
              iVar3 = FUN_00faebb0(iVar8,local_44,*(uint *)(param_1 + 0x4c) >> 7 & 1);
              if (iVar3 == 0) {
                FUN_009cca90(*(undefined4 *)(param_1 + 0x40),&DAT_0165a5d0);
                return 0;
              }
              uVar7 = uVar7 + 1;
              iVar8 = iVar8 + 0x70;
            } while ((int)uVar7 <= (int)uVar5);
            return 1;
          }
        }
        else {
          uVar7 = (uint)*(byte *)(param_1 + 0x51);
          if (uVar7 <= uVar5) {
            do {
              iVar4 = FUN_00faebb0((uint)*(byte *)(uVar7 + iVar3) * 0x70 + iVar8,local_44,
                                   *(uint *)(param_1 + 0x4c) >> 7 & 1);
              if (iVar4 == 0) {
                FUN_009cca90(*(undefined4 *)(param_1 + 0x40),&DAT_0165a5d0);
                return 0;
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 <= (int)uVar5);
          }
        }
        return 1;
      }
      FUN_009cca90(*(undefined4 *)(param_1 + 0x40),&DAT_0165a634);
      return 0;
    }
  }
  FUN_009cca90(*(undefined4 *)(param_1 + 0x40),&DAT_0165a57c);
  return 0;
}

// 009DDB60  FUN_009ddb60  size=440  [run]
void __fastcall FUN_009ddb60(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  
  *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 0x80;
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x58);
  if ((iVar5 != 0) && (piVar2 = (int *)(iVar5 + 0xf0), piVar2 != (int *)0x0)) {
    puVar6 = (uint *)*piVar2;
    if ((uint *)((int)puVar6 + 0xfU & 0xfffffff0) != puVar6) {
      uVar3 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (puVar6 != (uint *)0x0) {
      if ((((*puVar6 & 0x80000000) != 0) &&
          (iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x58), iVar5 != 0)) &&
         (puVar4 = (uint *)(iVar5 + 0x100), puVar4 != (uint *)0x0)) {
        uVar1 = *puVar4;
        if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
          uVar3 = FUN_00f59ed0(0x10);
          FUN_00dd5650(&DAT_016597b4,uVar3);
        }
        if (uVar1 != 0) {
          *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 0x20;
          iVar5 = FUN_00f8ee60();
          if (iVar5 != 0) {
            *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 0x30;
            *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
          }
        }
      }
      if ((((*puVar6 & 0x40000000) != 0) &&
          (iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x58), iVar5 != 0)) &&
         (puVar4 = (uint *)(iVar5 + 0x110), puVar4 != (uint *)0x0)) {
        uVar1 = *puVar4;
        if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
          uVar3 = FUN_00f59ed0(0x11);
          FUN_00dd5650(&DAT_016597b4,uVar3);
        }
        if (uVar1 != 0) {
          *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 0x20;
          iVar5 = FUN_00f8ee60();
          if (iVar5 != 0) {
            *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 0x30;
            *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 2;
          }
        }
      }
      if ((((*puVar6 & 0x20000000) != 0) &&
          (iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x58), iVar5 != 0)) &&
         (puVar4 = (uint *)(iVar5 + 0x120), puVar4 != (uint *)0x0)) {
        uVar1 = *puVar4;
        if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
          uVar3 = FUN_00f59ed0(0x12);
          FUN_00dd5650(&DAT_016597b4,uVar3);
        }
        if (uVar1 != 0) {
          *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 0x20;
          iVar5 = FUN_00f8ee60();
          if (iVar5 != 0) {
            *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 0x30;
            *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 4;
          }
        }
      }
      if ((*puVar6 & 0x8000000) != 0) {
        *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 0x40;
      }
      if ((*puVar6 & 0x4000000) != 0) {
        *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 0x40;
      }
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x58);
      if ((iVar5 != 0) && (puVar6 = (uint *)(iVar5 + 0x30), puVar6 != (uint *)0x0)) {
        uVar1 = *puVar6;
        if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
          uVar3 = FUN_00f59ed0(3);
          FUN_00dd5650(&DAT_016597b4,uVar3);
        }
        if ((uVar1 != 0) && (*(char *)(uVar1 + 0x2f) != '\0')) {
          *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 0x20;
        }
      }
    }
  }
  return;
}

// 009DDD20  FUN_009ddd20  size=142  [run]
void __fastcall FUN_009ddd20(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0x48);
  iVar1 = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x51);
    if (*(byte *)(param_1 + 0x52) < uVar2) goto LAB_009ddd95;
    piVar4 = (int *)(uVar2 * 0x70 + 0x34 + iVar3);
    iVar3 = (*(byte *)(param_1 + 0x52) - uVar2) + 1;
    do {
      iVar1 = iVar1 + *piVar4;
      piVar4 = piVar4 + 0x1c;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + 0x51);
    if (*(byte *)(param_1 + 0x52) < uVar2) goto LAB_009ddd95;
    do {
      iVar1 = iVar1 + *(int *)(iVar3 + 0x34 +
                              (uint)*(byte *)(uVar2 + *(int *)(param_1 + 0x54)) * 0x70);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 <= (int)(uint)*(byte *)(param_1 + 0x52));
  }
  if (0x100 < iVar1) {
    FUN_009cca90(*(undefined4 *)(param_1 + 0x40),&DAT_0165a5b0,iVar1);
    return;
  }
LAB_009ddd95:
  *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + ((short)iVar1 * 4 + 0xfU & 0xfff0);
  *(short *)(param_1 + 0x38) = (short)iVar1;
  return;
}

// 009DDDB0  FUN_009dddb0  size=436  [run]
void __thiscall FUN_009dddb0(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FID_conflict__memcpy(param_2,&DAT_0188f6d0,0x50);
  if (*(int *)(param_1 + 0x18) != 0) {
    param_2[9] = *(uint *)(*(int *)(param_1 + 0x18) + 0x24);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    param_2[10] = *(uint *)(*(int *)(param_1 + 0x1c) + 0x24);
  }
  if ((*(int *)(param_1 + 0x20) != 0) && ((float)param_2[10] == 0.0)) {
    param_2[10] = *(uint *)(*(int *)(param_1 + 0x20) + 0x24);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x58);
  if ((iVar1 != 0) && (puVar2 = (uint *)(iVar1 + 0xf0), puVar2 != (uint *)0x0)) {
    uVar4 = *puVar2;
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar3 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (uVar4 != 0) {
      param_2[6] = (uint)*(byte *)(uVar4 + 0x16);
    }
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x58);
  if ((iVar1 != 0) && (puVar2 = (uint *)(iVar1 + 0x70), puVar2 != (uint *)0x0)) {
    uVar4 = *puVar2;
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar3 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (uVar4 != 0) {
      param_2[0xc] = *(uint *)(uVar4 + 0x24);
      param_2[0xd] = *(uint *)(uVar4 + 0x28);
      param_2[0xe] = *(uint *)(uVar4 + 0x2c);
      param_2[0xf] = *(uint *)(uVar4 + 0xc);
      param_2[0x10] = *(uint *)(uVar4 + 0x30);
      param_2[0x11] = *(uint *)(uVar4 + 0x34);
      param_2[0x12] = *(uint *)(uVar4 + 0x38);
      param_2[0x13] = *(uint *)(uVar4 + 0x10);
    }
  }
  puVar2 = *(uint **)(*(int *)(param_1 + 0x40) + 0x58);
  if (puVar2 == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar3 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  uVar4 = (uint)*(char *)(uVar4 + 0x16);
  if ((*(uint *)(*(int *)(param_1 + 0x40) + 0x3c) & 0x2000000) == 0) {
    if ((int)uVar4 < -0x3f) {
      param_2[8] = 9999;
      goto LAB_009ddeee;
    }
    if (0x3e < (int)uVar4) {
      param_2[8] = 0xffffd8f1;
      goto LAB_009ddeee;
    }
  }
  else if ((int)uVar4 < 0x14) {
    param_2[7] = 1;
  }
  else {
    param_2[7] = 2;
    uVar4 = uVar4 - 0x14;
  }
  param_2[8] = uVar4;
LAB_009ddeee:
  *param_2 = *(uint *)(*(int *)(param_1 + 0x40) + 0x38) >> 10 & 1;
  param_2[2] = ~(*(uint *)(*(int *)(param_1 + 0x40) + 0x38) >> 4) & 1;
  param_2[3] = *(uint *)(*(int *)(param_1 + 0x40) + 0x3c) >> 0x1f;
  param_2[4] = *(uint *)(*(int *)(param_1 + 0x40) + 0x3c) >> 0xd & 1;
  param_2[5] = *(uint *)(*(int *)(param_1 + 0x40) + 0x3c) >> 0xc & 1;
  return;
}

// 009DDF70  FUN_009ddf70  size=446  [run]
void __fastcall FUN_009ddf70(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_009dddb0(&local_60);
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 != 0) {
      uVar1 = *(ushort *)(param_1 + 0x3a);
      iVar5 = 0;
      if (uVar1 != 0) {
        do {
          iVar3 = *(int *)(iVar2 + iVar5 * 4);
          *(undefined4 *)(iVar3 + 0x488) = local_3c;
          *(undefined4 *)(iVar3 + 0x514) = local_48;
          *(undefined4 *)(iVar3 + 0x48c) = local_38;
          *(undefined4 *)(iVar3 + 0x508) = local_44;
          *(undefined4 *)(iVar3 + 0x50c) = local_40;
          if (local_60 == 0) {
            *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) & 0xffffdfff;
          }
          else {
            *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) | 0x2000;
          }
          if (local_5c == 0) {
            *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) & 0xffff7fff;
          }
          else {
            *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) | 0x8000;
          }
          if (local_58 == 0) {
            *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) & 0xfffeffff;
          }
          else {
            *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) | 0x10000;
          }
          if ((*(int *)(iVar3 + 0x490) != 0) &&
             ((*(byte *)(*(int *)(iVar3 + 0x490) + 0x1e) & 8) != 0)) {
            if (local_50 == 0) {
              *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) & 0xff7fffff;
            }
            else {
              *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) | 0x800000;
            }
          }
          uVar4 = 0x3f800000;
          if (local_4c != 0) {
            uVar4 = 0;
          }
          *(undefined4 *)(iVar3 + 0x504) = uVar4;
          if (local_54 != 0) {
            *(uint *)(iVar3 + 0x518) = 2 - (uint)((*(uint *)(iVar3 + 0x51c) & 0x1000) != 0);
          }
          if (0.0 < local_24) {
            *(undefined4 *)(iVar3 + 0xb0) = local_30;
            *(undefined4 *)(iVar3 + 0xb4) = local_2c;
            *(undefined4 *)(iVar3 + 0xb8) = local_28;
            *(float *)(iVar3 + 0xbc) = local_24;
          }
          *(undefined4 *)(iVar3 + 0xa0) = local_20;
          *(undefined4 *)(iVar3 + 0xa4) = local_1c;
          iVar5 = iVar5 + 1;
          *(undefined4 *)(iVar3 + 0xa8) = local_18;
          *(undefined4 *)(iVar3 + 0xac) = local_14;
        } while (iVar5 < (int)(uint)uVar1);
      }
    }
  }
  return;
}

// 009DE150  FUN_009de150  size=185  [run]
void __fastcall FUN_009de150(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x48);
  if (iVar7 != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x52);
    iVar2 = *(int *)(param_1 + 0x54);
    uVar6 = *(uint *)(param_1 + 0x4c) >> 5 & 1;
    if (iVar2 == 0) {
      uVar4 = (uint)*(byte *)(param_1 + 0x51);
      if (uVar4 <= uVar3) {
        puVar5 = (uint *)(uVar4 * 0x70 + 0x38 + iVar7);
        iVar7 = (uVar3 - uVar4) + 1;
        do {
          if (uVar6 == 0) {
            *puVar5 = *puVar5 & 0xfffffffe;
          }
          puVar5 = puVar5 + 0x1c;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      uVar4 = (uint)*(byte *)(param_1 + 0x51);
      if (uVar4 <= uVar3) {
        do {
          if (uVar6 == 0) {
            puVar5 = (uint *)((uint)*(byte *)(uVar4 + iVar2) * 0x70 + 0x38 + iVar7);
            *puVar5 = *puVar5 & 0xfffffffe;
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 <= (int)uVar3);
      }
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x3a);
      iVar7 = 0;
      if (uVar1 != 0) {
        do {
          FUN_00a08e70(1);
          FUN_00a08e70(5);
          FUN_00a08e70(2);
          FUN_00a08e70(10);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)uVar1);
      }
    }
  }
  return;
}

// 009DE210  FUN_009de210  size=346  [run]
void __thiscall FUN_009de210(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  if ((*(byte *)(param_1 + 0x4c) & 0x40) == 0) {
    fVar1 = *(float *)(*(int *)(param_2 + 0x30) + 0x118);
    fVar2 = *(float *)(*(int *)(param_2 + 0x30) + 0x110);
    if (fVar2 != fVar1) {
      if (*(int *)(param_2 + 4) != 0) {
        FUN_00ec6e40(fVar2,fVar1);
      }
      if (*(int *)(param_2 + 8) != 0) {
        FUN_00ec6e40(fVar2,fVar1);
      }
      if (*(int *)(param_2 + 0xc) != 0) {
        FUN_00ec6e40(fVar2,fVar1);
      }
      if (*(int *)(param_2 + 0x10) != 0) {
        FUN_00ec6e40(fVar2,fVar1);
      }
      if (*(int *)(param_2 + 0x1c) != 0) {
        FUN_00ec9530(fVar2);
      }
      if (*(int *)(param_2 + 0x20) != 0) {
        FUN_00ec9530(fVar2);
      }
      if (*(int *)(param_2 + 0x24) != 0) {
        FUN_00ec9530(fVar2);
      }
      if (*(int *)(param_2 + 0x14) != 0) {
        FUN_00eca680(*(undefined4 *)(param_2 + 0x40),fVar1,fVar2);
        if (*(int *)(param_2 + 0x28) != 0) {
          *(undefined4 *)(*(int *)(param_2 + 0x28) + 8) = **(undefined4 **)(param_2 + 0x14);
        }
      }
      if (*(int *)(param_2 + 0x18) != 0) {
        FUN_00eca490(*(undefined4 *)(param_2 + 0x44),fVar1,fVar2);
        if (*(int *)(param_2 + 0x28) != 0) {
          *(undefined4 *)(*(int *)(param_2 + 0x28) + 4) = **(undefined4 **)(param_2 + 0x18);
          return;
        }
      }
    }
  }
  return;
}

// 009DE370  FUN_009de370  size=1  [run]
void FUN_009de370(void)

{
  return;
}

// 009DE380  FUN_009de380  size=53  [run]
undefined4 FUN_009de380(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((((*(byte *)(iVar1 + 0x3c) & 8) != 0) && (*(int *)(iVar1 + 0x120) == 0)) &&
     (*(char *)(param_1[1] + 0x470) != '\0')) {
    *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) | 0x80000000;
    return 0;
  }
  return 1;
}

