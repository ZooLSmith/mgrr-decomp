// src/unsorted/unit_00AFFFF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AFFFF0..00AFFFF0, 1 functions

#include "mgrr.h"

// 00AFFFF0  FUN_00affff0  size=2638  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00affff0(int *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined *puVar14;
  int iVar15;
  
  param_1[0x374] = 0;
  switch(param_1[0x186]) {
  case 0:
    FUN_00af91b0();
    return;
  case 1:
    FUN_00aebd10();
    return;
  default:
    return;
  case 3:
    if (((param_1[0x2a1] != 0) && (param_1[0x187] == 4)) &&
       ((3 < param_1[0x7e7] || ((1.5707964 < (float)param_1[0x2a8] || (0x3c < param_1[0x7eb])))))) {
      param_1[0x187] = 5;
    }
    return;
  case 0xb:
    if (param_1[0x187] != 0) {
      FUN_00a8c760(4);
      FUN_00a8c760(4);
    }
    return;
  case 0x12:
    FUN_00aec5e0();
    return;
  case 0x13:
    FUN_00aec6d0();
    return;
  case 0x14:
    FUN_00aec7c0();
    return;
  case 0x16:
    if (param_1[0x187] == 0) {
      return;
    }
    FUN_00a8c760(4);
    return;
  case 0x18:
    FUN_00aec860();
    return;
  case 0x19:
    FUN_00aec8d0();
    return;
  case 0x1a:
    FUN_00aeca00();
    return;
  case 0x1b:
  case 0x1c:
    FUN_00aeca80();
    return;
  case 0x1d:
    FUN_00af5240();
    return;
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
    break;
  }
  iVar15 = param_1[0x186];
  uVar12 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar14 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar14);
    uVar12 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  if (param_1[0x187] == 0) {
    return;
  }
  if ((*(int *)(uVar12 + 0x3e18) == 0) && (*(int *)(uVar12 + 0x3e1c) == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a81330();
  bVar13 = iVar3 == 0;
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
LAB_00aff57e:
    if (!bVar13) {
      FUN_00a81330();
      FUN_00a7c8a0();
      FUN_009fdde0();
      if (param_1[0x370] == 0x12) {
        iVar3 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            pbVar6 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
            if (pbVar6 != (byte *)0x0) {
              pcVar9 = "head_top";
              do {
                bVar2 = *pbVar6;
                bVar13 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_00aff600:
                  iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                  goto LAB_00aff605;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar6[1];
                bVar13 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_00aff600;
                pbVar6 = pbVar6 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              iVar7 = 0;
LAB_00aff605:
              if (iVar7 == 0) {
                puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                *puVar1 = *puVar1 | 1;
              }
            }
            iVar3 = iVar3 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar3 < (short)param_1[0xc9]);
        }
        iVar3 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            pbVar6 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
            if (pbVar6 != (byte *)0x0) {
              pcVar9 = "in_head_top";
              do {
                bVar2 = *pbVar6;
                bVar13 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_00aff670:
                  iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                  goto LAB_00aff675;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar6[1];
                bVar13 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_00aff670;
                pbVar6 = pbVar6 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              iVar7 = 0;
LAB_00aff675:
              if (iVar7 == 0) {
                puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
            }
            iVar3 = iVar3 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar3 < (short)param_1[0xc9]);
        }
      }
      if (param_1[0x370] == 0x15) {
        iVar3 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar7 = param_1[200];
            iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar11) + 0x40);
            if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"back_tail"), iVar8 != 0)) {
              puVar1 = (uint *)(iVar7 + 0x38 + iVar11);
              *puVar1 = *puVar1 | 1;
            }
            iVar3 = iVar3 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar3 < (short)param_1[0xc9]);
        }
        iVar3 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar7 = param_1[200];
            iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar11) + 0x40);
            if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"front_tail"), iVar8 != 0)) {
              puVar1 = (uint *)(iVar7 + 0x38 + iVar11);
              *puVar1 = *puVar1 | 1;
            }
            iVar3 = iVar3 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar3 < (short)param_1[0xc9]);
        }
      }
      if (param_1[0x370] == 0x16) {
        iVar3 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            pbVar6 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
            if (pbVar6 != (byte *)0x0) {
              pbVar10 = (byte *)0x16413a4;
              do {
                bVar2 = *pbVar6;
                bVar13 = bVar2 < *pbVar10;
                if (bVar2 != *pbVar10) {
LAB_00aff790:
                  iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                  goto LAB_00aff795;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar6[1];
                bVar13 = bVar2 < pbVar10[1];
                if (bVar2 != pbVar10[1]) goto LAB_00aff790;
                pbVar6 = pbVar6 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar2 != 0);
              iVar7 = 0;
LAB_00aff795:
              if (iVar7 == 0) {
                puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                *puVar1 = *puVar1 | 1;
              }
            }
            iVar3 = iVar3 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar3 < (short)param_1[0xc9]);
        }
        iVar3 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            pbVar6 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
            if (pbVar6 != (byte *)0x0) {
              pcVar9 = "in_L_reg";
              do {
                bVar2 = *pbVar6;
                bVar13 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_00aff800:
                  iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                  goto LAB_00aff805;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar6[1];
                bVar13 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_00aff800;
                pbVar6 = pbVar6 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              iVar7 = 0;
LAB_00aff805:
              if (iVar7 == 0) {
                puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
            }
            iVar3 = iVar3 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar3 < (short)param_1[0xc9]);
        }
      }
      if (param_1[0x370] == 0x18) {
        iVar3 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            pbVar6 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
            if (pbVar6 != (byte *)0x0) {
              pcVar9 = "R_reg";
              do {
                bVar2 = *pbVar6;
                bVar13 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_00aff880:
                  iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                  goto LAB_00aff885;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar6[1];
                bVar13 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_00aff880;
                pbVar6 = pbVar6 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              iVar7 = 0;
LAB_00aff885:
              if (iVar7 == 0) {
                puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                *puVar1 = *puVar1 | 1;
              }
            }
            iVar3 = iVar3 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar3 < (short)param_1[0xc9]);
        }
        iVar3 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            pbVar6 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
            if (pbVar6 != (byte *)0x0) {
              pcVar9 = "in_R_reg";
              do {
                bVar2 = *pbVar6;
                bVar13 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_00aff8f0:
                  iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                  goto LAB_00aff8f5;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar6[1];
                bVar13 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_00aff8f0;
                pbVar6 = pbVar6 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              iVar7 = 0;
LAB_00aff8f5:
              if (iVar7 == 0) {
                puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
            }
            iVar3 = iVar3 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar3 < (short)param_1[0xc9]);
        }
      }
      goto LAB_00affddd;
    }
  }
  else {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 == 0) goto LAB_00aff57e;
    FUN_00a81330();
    uVar5 = FUN_00a7c8a0();
    iVar3 = FUN_00549f60(uVar5);
    if ((iVar3 == 0) ||
       (bVar13 = *(int *)(iVar3 + 0xa80) != 0 || bVar13, (*(byte *)(iVar3 + 0x4c8) & 2) == 0))
    goto LAB_00aff57e;
  }
  iVar3 = FUN_00fdbc60();
  if (param_1[0x370] == 0x12) {
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar11 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar11) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_01641490), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar11);
          *puVar1 = *puVar1 | 1;
        }
        iVar3 = iVar3 + 1;
        iVar11 = iVar11 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    iVar3 = FUN_00a12210(6);
    FUN_00afaf90(0x36,iVar3 + 0x40);
    *(ushort *)(param_1 + 0x371) = *(ushort *)(param_1 + 0x371) | 1;
    iVar3 = param_1[0x7f6];
    _DAT_01b77cd4 = _DAT_01b77cd4 | 2;
  }
  if (param_1[0x370] == 0x16) {
    iVar3 = FUN_00a12210(0x20);
    FUN_00afaf90(0x36,iVar3 + 0x40);
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar11 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar11) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_0164148c), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar11);
          *puVar1 = *puVar1 | 1;
        }
        iVar3 = iVar3 + 1;
        iVar11 = iVar11 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    iVar3 = param_1[0x7f8];
    *(ushort *)(param_1 + 0x371) = *(ushort *)(param_1 + 0x371) | 0x10;
    _DAT_01b77cd4 = _DAT_01b77cd4 | 0x10;
  }
  if (param_1[0x370] == 0x18) {
    iVar3 = FUN_00a12210(0x2b);
    FUN_00afaf90(0x36,iVar3 + 0x40);
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar11 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar11) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_01641488), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar11);
          *puVar1 = *puVar1 | 1;
        }
        iVar3 = iVar3 + 1;
        iVar11 = iVar11 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    *(ushort *)(param_1 + 0x371) = *(ushort *)(param_1 + 0x371) | 0x40;
    iVar3 = param_1[0x7f8];
    _DAT_01b77cd4 = _DAT_01b77cd4 | 8;
  }
  if (param_1[0x370] == 0x15) {
    FUN_009c6540(9);
    param_1[0x741] = 1;
    FUN_00c81b30(0x56);
    _DAT_01b77cd4 = _DAT_01b77cd4 | 1;
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar11 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar11) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"back_tail"), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar11);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar3 = iVar3 + 1;
        iVar11 = iVar11 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar11 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar11) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"front_tail"), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar11);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar3 = iVar3 + 1;
        iVar11 = iVar11 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    FUN_00a93780("_tail_f");
    FUN_00a93780("_tail_b");
    FUN_00a93780("_c1tail");
    FUN_00a93780("_c2tail");
    FUN_00a8c420(0,"_tail_f");
    FUN_00a8c420(0,"_tail_b");
    FUN_00a8c420(0,"_c1tail");
    FUN_00a8c420(0,"_c2tail");
    *(ushort *)(param_1 + 0x371) = *(ushort *)(param_1 + 0x371) | 8;
    iVar3 = param_1[0x7f7];
  }
  if (param_1[0x370] == 0x13) {
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar11 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar11) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_ar"), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar11);
          *puVar1 = *puVar1 | 1;
        }
        iVar3 = iVar3 + 1;
        iVar11 = iVar11 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    iVar3 = param_1[0x7f9];
  }
  if (param_1[0x370] == 0x14) {
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar11 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar11) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_al"), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar11);
          *puVar1 = *puVar1 | 1;
        }
        iVar3 = iVar3 + 1;
        iVar11 = iVar11 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    iVar3 = param_1[0x7f9];
  }
  if (param_1[0x370] == 0x19) {
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar11 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar11) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_rr"), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar11);
          *puVar1 = *puVar1 | 1;
        }
        iVar3 = iVar3 + 1;
        iVar11 = iVar11 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    iVar3 = param_1[0x7f8];
  }
  if (param_1[0x370] == 0x17) {
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar11 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar11) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_rl"), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar11);
          *puVar1 = *puVar1 | 1;
        }
        iVar3 = iVar3 + 1;
        iVar11 = iVar11 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    iVar3 = param_1[0x7f8];
  }
  (**(code **)(*param_1 + 0x30c))(iVar3,0);
  if (param_1[0x21c] < 2) {
    FUN_00c81b30(0x14);
    param_1[0xbe4] = 1;
    param_1[0x21c] = 1;
    if (param_1[0xbe5] == 0) {
      param_1[0xbe5] = 1;
      FUN_00aa4080(0xdb,6,0,0x3f800000,0x8040200,0,0x3f800000);
    }
  }
LAB_00affddd:
  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_7(0x20209);
  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_7(0x20202);
  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_7(0x20207);
  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_7(0x20206);
  FUN_00a8caf0(0x27,0,0,0);
  if (iVar15 != 0x34) {
    if (iVar15 == 0x35) {
      FUN_00a8caf0(0x28,0,0,0);
    }
    return;
  }
  FUN_00a8caf0(0x29,0,0,0);
  return;
}

