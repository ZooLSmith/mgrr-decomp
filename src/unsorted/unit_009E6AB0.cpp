// src/unsorted/unit_009E6AB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E6AB0..009E7660, 7 functions

#include "types.h"

// 009E6AB0  FUN_009e6ab0  size=436  [run]
undefined4 __fastcall FUN_009e6ab0(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_18;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_1 + 0x4c);
  uVar3 = (uint)*(ushort *)(param_1 + 0x28) * 4 + 0xf & 0xfffffff0;
  uVar4 = (uint)*(ushort *)(param_1 + 0x4e) - (uint)uVar1;
  if (uVar4 < uVar3) {
    FUN_00dd5650(&DAT_0165a690,uVar3,uVar4);
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x48) + (uint)uVar1;
    *(ushort *)(param_1 + 0x4c) = uVar1 + (short)uVar3;
  }
  iVar11 = *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x24) = iVar5;
  uVar3 = (uint)*(byte *)(param_1 + 0x42);
  *(undefined2 *)(param_1 + 0x2a) = 0;
  if (iVar11 == 0) {
    uVar4 = (uint)*(byte *)(param_1 + 0x41);
    if (uVar4 <= uVar3) {
      piVar7 = (int *)(uVar4 * 0x70 + 0x34 + iVar2);
      local_14 = (uVar3 - uVar4) + 1;
      do {
        iVar2 = *piVar7;
        iVar5 = 0;
        if (0 < iVar2) {
          do {
            if ((iVar5 < 0) || (*piVar7 <= iVar5)) {
              iVar11 = 0;
            }
            else {
              iVar11 = *(int *)(piVar7[-1] + iVar5 * 4);
            }
            iVar10 = 0;
            if (-1 < (int)(*(ushort *)(param_1 + 0x2a) - 1)) {
              piVar8 = *(int **)(param_1 + 0x24);
              do {
                if (*piVar8 == iVar11) {
                  if (iVar10 != -1) goto LAB_009e6c48;
                  break;
                }
                iVar10 = iVar10 + 1;
                piVar8 = piVar8 + 1;
              } while (iVar10 <= (int)(*(ushort *)(param_1 + 0x2a) - 1));
            }
            *(int *)(*(int *)(param_1 + 0x24) + (uint)*(ushort *)(param_1 + 0x2a) * 4) = iVar11;
            *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + 1;
LAB_009e6c48:
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar2);
        }
        piVar7 = piVar7 + 0x1c;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  else {
    uVar4 = (uint)*(byte *)(param_1 + 0x41);
    if (uVar4 <= uVar3) {
      do {
        iVar10 = (uint)*(byte *)(uVar4 + iVar11) * 0x70;
        iVar5 = *(int *)(iVar10 + 0x34 + iVar2);
        iVar10 = iVar10 + iVar2;
        local_18 = 0;
        if (0 < iVar5) {
          do {
            if ((local_18 < 0) || (*(int *)(iVar10 + 0x34) <= local_18)) {
              iVar9 = 0;
            }
            else {
              iVar9 = *(int *)(*(int *)(iVar10 + 0x30) + local_18 * 4);
            }
            iVar6 = 0;
            if (-1 < (int)(*(ushort *)(param_1 + 0x2a) - 1)) {
              piVar7 = *(int **)(param_1 + 0x24);
              do {
                if (*piVar7 == iVar9) {
                  if (iVar6 != -1) goto LAB_009e6ba9;
                  break;
                }
                iVar6 = iVar6 + 1;
                piVar7 = piVar7 + 1;
              } while (iVar6 <= (int)(*(ushort *)(param_1 + 0x2a) - 1));
            }
            *(int *)(*(int *)(param_1 + 0x24) + (uint)*(ushort *)(param_1 + 0x2a) * 4) = iVar9;
            *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + 1;
LAB_009e6ba9:
            local_18 = local_18 + 1;
          } while (local_18 < iVar5);
        }
        uVar4 = uVar4 + 1;
        if ((int)uVar3 < (int)uVar4) {
          return 1;
        }
      } while( true );
    }
  }
  return 1;
}

// 009E6C70  FUN_009e6c70  size=80  [run]
undefined4 * __fastcall FUN_009e6c70(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  FUN_00a7c930();
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}

// 009E6CC0  FUN_009e6cc0  size=942  [run]
undefined4 __thiscall FUN_009e6cc0(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *(float *)(*(int *)(param_3 + 0x2c) + 0x25c) *
          *(float *)(*(int *)(param_3 + 0x2c) + 0x124);
  if ((fVar4 < 0.01 == (fVar4 == 0.01)) && (*(int *)(param_3 + 0x48) != 0)) {
    FID_conflict__memcpy(param_2,&DAT_0188f620,0x60);
    if (*(int *)(param_3 + 4) != 0) {
      param_2[0x10] = *(float *)(*(int *)(param_3 + 4) + 4);
      param_2[0x11] = (float)(uint)*(ushort *)(*(int *)(param_3 + 4) + 0xc);
    }
    if (*(int *)(param_3 + 8) != 0) {
      param_2[0x12] = *(float *)(*(int *)(param_3 + 8) + 4);
      param_2[0x13] = (float)(uint)*(ushort *)(*(int *)(param_3 + 8) + 0xc);
    }
    if (*(int *)(param_3 + 0xc) != 0) {
      param_2[0x14] = *(float *)(*(int *)(param_3 + 0xc) + 4);
      param_2[0x15] = (float)(uint)*(ushort *)(*(int *)(param_3 + 0xc) + 0xc);
    }
    fVar1 = 1.0;
    pfVar2 = *(float **)(param_3 + 0x4c);
    fVar5 = fVar1;
    fVar9 = fVar1;
    if (pfVar2 != (float *)0x0) {
      fVar5 = SQRT(*pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1] + pfVar2[2] * pfVar2[2]);
      fVar9 = SQRT(pfVar2[5] * pfVar2[5] + pfVar2[4] * pfVar2[4] + pfVar2[6] * pfVar2[6]);
    }
    fVar5 = *(float *)(*(int *)(param_3 + 0x2c) + 0x100) * fVar5;
    fVar9 = fVar9 * *(float *)(*(int *)(param_3 + 0x2c) + 0x104);
    pfVar2 = *(float **)(param_3 + 0x18);
    fVar7 = -1.0;
    fVar6 = 0.0;
    fVar8 = 0.0;
    if (pfVar2 != (float *)0x0) {
      if (((uint)pfVar2[6] & 1) != 0) {
        fVar1 = *pfVar2;
        fVar7 = -pfVar2[1];
      }
      param_2[0xc] = fVar1;
      param_2[0xd] = fVar7;
      param_2[0xe] = *(float *)(*(int *)(param_3 + 0x18) + 0x10);
      param_2[0xf] = *(float *)(*(int *)(param_3 + 0x18) + 0x14);
      fVar6 = fVar1;
      fVar8 = fVar7;
    }
    if ((*(byte *)(param_1 + 0x3c) & 0x80) != 0) {
      if ((fVar6 == 0.0) && (fVar8 == 0.0)) {
        param_2[0xc] = fVar5;
      }
      else {
        param_2[0xc] = param_2[0xc] * fVar5;
      }
    }
    if ((*(uint *)(param_1 + 0x3c) & 0x100) != 0) {
      if ((fVar6 == 0.0) && (fVar8 == 0.0)) {
        param_2[0xd] = fVar9;
      }
      else {
        param_2[0xd] = fVar9 * param_2[0xd];
      }
    }
    fVar1 = 1.0;
    fVar6 = 0.0;
    pfVar2 = *(float **)(param_3 + 0x1c);
    fVar8 = fVar6;
    fVar7 = fVar6;
    if (pfVar2 != (float *)0x0) {
      fVar7 = -1.0;
      fVar8 = fVar1;
      if (((uint)pfVar2[6] & 1) != 0) {
        fVar7 = -pfVar2[1];
        fVar8 = *pfVar2;
      }
      *param_2 = fVar8;
      param_2[1] = fVar7;
      param_2[2] = *(float *)(*(int *)(param_3 + 0x1c) + 0x10);
      param_2[3] = *(float *)(*(int *)(param_3 + 0x1c) + 0x14);
    }
    if ((*(uint *)(param_1 + 0x3c) & 0x200) != 0) {
      if ((fVar8 == 0.0) && (fVar7 == 0.0)) {
        *param_2 = fVar5;
      }
      else {
        *param_2 = *param_2 * fVar5;
      }
    }
    if ((*(uint *)(param_1 + 0x3c) & 0x400) != 0) {
      if ((fVar8 == 0.0) && (fVar7 == 0.0)) {
        param_2[1] = fVar9;
      }
      else {
        param_2[1] = param_2[1] * fVar9;
      }
    }
    pfVar2 = *(float **)(param_3 + 0x20);
    fVar7 = fVar6;
    if (pfVar2 != (float *)0x0) {
      fVar6 = -1.0;
      if (((uint)pfVar2[6] & 1) != 0) {
        fVar1 = *pfVar2;
        fVar6 = -pfVar2[1];
      }
      param_2[4] = fVar1;
      param_2[5] = fVar6;
      param_2[6] = *(float *)(*(int *)(param_3 + 0x20) + 0x10);
      param_2[7] = *(float *)(*(int *)(param_3 + 0x20) + 0x14);
      fVar7 = fVar1;
    }
    if ((*(uint *)(param_1 + 0x3c) & 0x800) != 0) {
      if ((fVar7 == 0.0) && (fVar6 == 0.0)) {
        param_2[4] = fVar5;
      }
      else {
        param_2[4] = param_2[4] * fVar5;
      }
    }
    if ((*(uint *)(param_1 + 0x3c) & 0x800) != 0) {
      if ((fVar7 == 0.0) && (fVar6 == 0.0)) {
        param_2[5] = fVar9;
      }
      else {
        param_2[5] = fVar9 * param_2[5];
      }
    }
    param_2[8] = *(float *)(*(int *)(param_3 + 0x2c) + 0x250);
    param_2[9] = *(float *)(*(int *)(param_3 + 0x2c) + 0x254);
    param_2[10] = *(float *)(*(int *)(param_3 + 0x2c) + 600);
    param_2[0xb] = fVar4;
    iVar3 = *(int *)(param_3 + 0x44);
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x68) & 8) != 0)) {
      param_2[8] = param_2[8] * *(float *)(iVar3 + 0x30);
      param_2[9] = *(float *)(iVar3 + 0x34) * param_2[9];
      param_2[10] = *(float *)(iVar3 + 0x38) * param_2[10];
      param_2[0xb] = *(float *)(iVar3 + 0x3c) * param_2[0xb];
    }
    param_2[0x16] = *(float *)(param_3 + 0x24);
    return 1;
  }
  return 0;
}

// 009E7070  FUN_009e7070  size=436  [run]
undefined4 __fastcall FUN_009e7070(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_18;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_1 + 0x5c);
  uVar3 = (uint)*(ushort *)(param_1 + 0x38) * 4 + 0xf & 0xfffffff0;
  uVar4 = (uint)*(ushort *)(param_1 + 0x5e) - (uint)uVar1;
  if (uVar4 < uVar3) {
    FUN_00dd5650(&DAT_0165a6c4,uVar3,uVar4);
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x58) + (uint)uVar1;
    *(ushort *)(param_1 + 0x5c) = uVar1 + (short)uVar3;
  }
  iVar11 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x34) = iVar5;
  uVar3 = (uint)*(byte *)(param_1 + 0x52);
  *(undefined2 *)(param_1 + 0x3a) = 0;
  if (iVar11 == 0) {
    uVar4 = (uint)*(byte *)(param_1 + 0x51);
    if (uVar4 <= uVar3) {
      piVar7 = (int *)(uVar4 * 0x70 + 0x34 + iVar2);
      local_14 = (uVar3 - uVar4) + 1;
      do {
        iVar2 = *piVar7;
        iVar5 = 0;
        if (0 < iVar2) {
          do {
            if ((iVar5 < 0) || (*piVar7 <= iVar5)) {
              iVar11 = 0;
            }
            else {
              iVar11 = *(int *)(piVar7[-1] + iVar5 * 4);
            }
            iVar10 = 0;
            if (-1 < (int)(*(ushort *)(param_1 + 0x3a) - 1)) {
              piVar8 = *(int **)(param_1 + 0x34);
              do {
                if (*piVar8 == iVar11) {
                  if (iVar10 != -1) goto LAB_009e7208;
                  break;
                }
                iVar10 = iVar10 + 1;
                piVar8 = piVar8 + 1;
              } while (iVar10 <= (int)(*(ushort *)(param_1 + 0x3a) - 1));
            }
            *(int *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x3a) * 4) = iVar11;
            *(short *)(param_1 + 0x3a) = *(short *)(param_1 + 0x3a) + 1;
LAB_009e7208:
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar2);
        }
        piVar7 = piVar7 + 0x1c;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  else {
    uVar4 = (uint)*(byte *)(param_1 + 0x51);
    if (uVar4 <= uVar3) {
      do {
        iVar10 = (uint)*(byte *)(uVar4 + iVar11) * 0x70;
        iVar5 = *(int *)(iVar10 + 0x34 + iVar2);
        iVar10 = iVar10 + iVar2;
        local_18 = 0;
        if (0 < iVar5) {
          do {
            if ((local_18 < 0) || (*(int *)(iVar10 + 0x34) <= local_18)) {
              iVar9 = 0;
            }
            else {
              iVar9 = *(int *)(*(int *)(iVar10 + 0x30) + local_18 * 4);
            }
            iVar6 = 0;
            if (-1 < (int)(*(ushort *)(param_1 + 0x3a) - 1)) {
              piVar7 = *(int **)(param_1 + 0x34);
              do {
                if (*piVar7 == iVar9) {
                  if (iVar6 != -1) goto LAB_009e7169;
                  break;
                }
                iVar6 = iVar6 + 1;
                piVar7 = piVar7 + 1;
              } while (iVar6 <= (int)(*(ushort *)(param_1 + 0x3a) - 1));
            }
            *(int *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x3a) * 4) = iVar9;
            *(short *)(param_1 + 0x3a) = *(short *)(param_1 + 0x3a) + 1;
LAB_009e7169:
            local_18 = local_18 + 1;
          } while (local_18 < iVar5);
        }
        uVar4 = uVar4 + 1;
        if ((int)uVar3 < (int)uVar4) {
          return 1;
        }
      } while( true );
    }
  }
  return 1;
}

// 009E7230  FUN_009e7230  size=83  [run]
undefined4 * __fastcall FUN_009e7230(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  FUN_00a7c930();
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 0x52) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}

// 009E7290  FUN_009e7290  size=970  [run]
undefined4 __thiscall FUN_009e7290(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *(float *)(*(int *)(param_3 + 0x30) + 0x25c) *
          *(float *)(*(int *)(param_3 + 0x30) + 0x124);
  if ((fVar4 < 0.01 == (fVar4 == 0.01)) && (*(int *)(param_3 + 0x4c) != 0)) {
    FID_conflict__memcpy(param_2,&DAT_0188f720,0x70);
    if (*(int *)(param_3 + 4) != 0) {
      param_2[0x10] = *(float *)(*(int *)(param_3 + 4) + 4);
      param_2[0x11] = (float)(uint)*(ushort *)(*(int *)(param_3 + 4) + 0xc);
    }
    if (*(int *)(param_3 + 8) != 0) {
      param_2[0x12] = *(float *)(*(int *)(param_3 + 8) + 4);
      param_2[0x13] = (float)(uint)*(ushort *)(*(int *)(param_3 + 8) + 0xc);
    }
    if (*(int *)(param_3 + 0xc) != 0) {
      param_2[0x14] = *(float *)(*(int *)(param_3 + 0xc) + 4);
      param_2[0x15] = (float)(uint)*(ushort *)(*(int *)(param_3 + 0xc) + 0xc);
    }
    if (*(int *)(param_3 + 0x10) != 0) {
      param_2[0x16] = *(float *)(*(int *)(param_3 + 0x10) + 4);
      param_2[0x17] = (float)(uint)*(ushort *)(*(int *)(param_3 + 0x10) + 0xc);
    }
    fVar1 = 1.0;
    pfVar2 = *(float **)(param_3 + 0x50);
    fVar5 = fVar1;
    fVar9 = fVar1;
    if (pfVar2 != (float *)0x0) {
      fVar5 = SQRT(*pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1] + pfVar2[2] * pfVar2[2]);
      fVar9 = SQRT(pfVar2[5] * pfVar2[5] + pfVar2[4] * pfVar2[4] + pfVar2[6] * pfVar2[6]);
    }
    fVar5 = *(float *)(*(int *)(param_3 + 0x30) + 0x100) * fVar5;
    fVar9 = fVar9 * *(float *)(*(int *)(param_3 + 0x30) + 0x104);
    pfVar2 = *(float **)(param_3 + 0x1c);
    fVar7 = -1.0;
    fVar6 = 0.0;
    fVar8 = 0.0;
    if (pfVar2 != (float *)0x0) {
      if (((uint)pfVar2[6] & 1) != 0) {
        fVar1 = *pfVar2;
        fVar7 = -pfVar2[1];
      }
      param_2[0xc] = fVar1;
      param_2[0xd] = fVar7;
      param_2[0xe] = *(float *)(*(int *)(param_3 + 0x1c) + 0x10);
      param_2[0xf] = *(float *)(*(int *)(param_3 + 0x1c) + 0x14);
      fVar6 = fVar1;
      fVar8 = fVar7;
    }
    if ((*(uint *)(param_1 + 0x4c) & 0x100) != 0) {
      if ((fVar6 == 0.0) && (fVar8 == 0.0)) {
        param_2[0xc] = fVar5;
      }
      else {
        param_2[0xc] = param_2[0xc] * fVar5;
      }
    }
    if ((*(uint *)(param_1 + 0x4c) & 0x200) != 0) {
      if ((fVar6 == 0.0) && (fVar8 == 0.0)) {
        param_2[0xd] = fVar9;
      }
      else {
        param_2[0xd] = param_2[0xd] * fVar9;
      }
    }
    fVar1 = 1.0;
    fVar6 = 0.0;
    pfVar2 = *(float **)(param_3 + 0x20);
    fVar8 = fVar6;
    fVar7 = fVar6;
    if (pfVar2 != (float *)0x0) {
      fVar7 = -1.0;
      fVar8 = fVar1;
      if (((uint)pfVar2[6] & 1) != 0) {
        fVar7 = -pfVar2[1];
        fVar8 = *pfVar2;
      }
      *param_2 = fVar8;
      param_2[1] = fVar7;
      param_2[2] = *(float *)(*(int *)(param_3 + 0x20) + 0x10);
      param_2[3] = *(float *)(*(int *)(param_3 + 0x20) + 0x14);
    }
    if ((*(uint *)(param_1 + 0x4c) & 0x400) != 0) {
      if ((fVar8 == 0.0) && (fVar7 == 0.0)) {
        *param_2 = fVar5;
      }
      else {
        *param_2 = *param_2 * fVar5;
      }
    }
    if ((*(uint *)(param_1 + 0x4c) & 0x800) != 0) {
      if ((fVar8 == 0.0) && (fVar7 == 0.0)) {
        param_2[1] = fVar9;
      }
      else {
        param_2[1] = param_2[1] * fVar9;
      }
    }
    pfVar2 = *(float **)(param_3 + 0x24);
    fVar7 = fVar6;
    if (pfVar2 != (float *)0x0) {
      fVar6 = -1.0;
      if (((uint)pfVar2[6] & 1) != 0) {
        fVar1 = *pfVar2;
        fVar6 = -pfVar2[1];
      }
      param_2[4] = fVar1;
      param_2[5] = fVar6;
      param_2[6] = *(float *)(*(int *)(param_3 + 0x24) + 0x10);
      param_2[7] = *(float *)(*(int *)(param_3 + 0x24) + 0x14);
      fVar7 = fVar1;
    }
    if ((*(uint *)(param_1 + 0x4c) & 0x1000) != 0) {
      if ((fVar7 == 0.0) && (fVar6 == 0.0)) {
        param_2[4] = fVar5;
      }
      else {
        param_2[4] = param_2[4] * fVar5;
      }
    }
    if ((*(uint *)(param_1 + 0x4c) & 0x1000) != 0) {
      if ((fVar7 == 0.0) && (fVar6 == 0.0)) {
        param_2[5] = fVar9;
      }
      else {
        param_2[5] = fVar9 * param_2[5];
      }
    }
    param_2[8] = *(float *)(*(int *)(param_3 + 0x30) + 0x250);
    param_2[9] = *(float *)(*(int *)(param_3 + 0x30) + 0x254);
    param_2[10] = *(float *)(*(int *)(param_3 + 0x30) + 600);
    param_2[0xb] = fVar4;
    iVar3 = *(int *)(param_3 + 0x48);
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x68) & 8) != 0)) {
      param_2[8] = param_2[8] * *(float *)(iVar3 + 0x30);
      param_2[9] = *(float *)(iVar3 + 0x34) * param_2[9];
      param_2[10] = *(float *)(iVar3 + 0x38) * param_2[10];
      param_2[0xb] = *(float *)(iVar3 + 0x3c) * param_2[0xb];
    }
    param_2[0x18] = *(float *)(param_3 + 0x28);
    return 1;
  }
  return 0;
}

// 009E7660  FUN_009e7660  size=183  [run]
void FUN_009e7660(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_14;
  int local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (iVar4 = FUN_00a7c800(), iVar4 != 0)) {
    local_14 = 0;
    local_10 = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_009d2880(&local_14,1);
    iVar2 = local_10;
    switchD_0080dbae::default();
    uVar3 = local_8;
    iVar4 = local_14;
    if (((*(uint *)(local_14 + 0x3c) >> 0x14 & 1) != 0) ||
       ((*(uint *)(local_14 + 0x3c) >> 0x11 & 1) != 0)) {
      iVar1 = iVar2 + 0x10;
      FUN_00efda00(iVar1,local_4,local_8);
      FUN_00efde00(iVar1,local_4,uVar3);
    }
    if ((((*(byte *)(iVar4 + 0x3c) & 8) != 0) && (*(int *)(iVar4 + 0x120) == 0)) &&
       (*(char *)(iVar2 + 0x470) != '\0')) {
      *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) | 0x80000000;
    }
  }
  return;
}

