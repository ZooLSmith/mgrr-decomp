// src/unsorted/unit_0081E660.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0081E660..0081E660, 1 functions

#include "types.h"

// 0081E660  FUN_0081e660  size=2706  [run]
void __fastcall FUN_0081e660(int *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  undefined *puVar15;
  
  iVar3 = param_1[0x186];
  uVar12 = 0;
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    puVar15 = &DAT_01be9db8;
    (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar15);
    uVar12 = -(uint)(iVar4 != 0) & (uint)piVar5;
  }
  if (param_1[0x187] == 0) {
    return;
  }
  if ((*(int *)(uVar12 + 0x3e18) == 0) && (*(int *)(uVar12 + 0x3e1c) == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x314))();
  iVar4 = FUN_00a81330();
  bVar14 = iVar4 == 0;
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
LAB_0081e758:
    if (!bVar14) {
      FUN_00a81330();
      FUN_00a7c8a0();
      FUN_009fdde0();
      if (param_1[0x3a4] == 0x12) {
        iVar13 = 0;
        iVar4 = 0;
        if (0 < (short)param_1[0xc9]) {
          do {
            pbVar7 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar4) + 0x40);
            if (pbVar7 != (byte *)0x0) {
              pcVar10 = "head_top";
              do {
                bVar2 = *pbVar7;
                bVar14 = bVar2 < (byte)*pcVar10;
                if (bVar2 != *pcVar10) {
LAB_0081e7d0:
                  iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_0081e7d5;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar14 = bVar2 < (byte)pcVar10[1];
                if (bVar2 != pcVar10[1]) goto LAB_0081e7d0;
                pbVar7 = pbVar7 + 2;
                pcVar10 = pcVar10 + 2;
              } while (bVar2 != 0);
              iVar8 = 0;
LAB_0081e7d5:
              if (iVar8 == 0) {
                puVar1 = (uint *)(param_1[200] + iVar4 + 0x38);
                *puVar1 = *puVar1 | 1;
              }
            }
            iVar13 = iVar13 + 1;
            iVar4 = iVar4 + 0x70;
          } while (iVar13 < (short)param_1[0xc9]);
        }
        iVar4 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar13 = 0;
          do {
            pbVar7 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar13) + 0x40);
            if (pbVar7 != (byte *)0x0) {
              pcVar10 = "in_head_top";
              do {
                bVar2 = *pbVar7;
                bVar14 = bVar2 < (byte)*pcVar10;
                if (bVar2 != *pcVar10) {
LAB_0081e836:
                  iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_0081e83b;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar14 = bVar2 < (byte)pcVar10[1];
                if (bVar2 != pcVar10[1]) goto LAB_0081e836;
                pbVar7 = pbVar7 + 2;
                pcVar10 = pcVar10 + 2;
              } while (bVar2 != 0);
              iVar8 = 0;
LAB_0081e83b:
              if (iVar8 == 0) {
                puVar1 = (uint *)(param_1[200] + 0x38 + iVar13);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
            }
            iVar4 = iVar4 + 1;
            iVar13 = iVar13 + 0x70;
          } while (iVar4 < (short)param_1[0xc9]);
        }
      }
      if (param_1[0x3a4] == 0x88) {
        iVar4 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar13 = 0;
          do {
            pbVar7 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar13) + 0x40);
            if (pbVar7 != (byte *)0x0) {
              pcVar10 = "head_down";
              do {
                bVar2 = *pbVar7;
                bVar14 = bVar2 < (byte)*pcVar10;
                if (bVar2 != *pcVar10) {
LAB_0081e8a8:
                  iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_0081e8ad;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar14 = bVar2 < (byte)pcVar10[1];
                if (bVar2 != pcVar10[1]) goto LAB_0081e8a8;
                pbVar7 = pbVar7 + 2;
                pcVar10 = pcVar10 + 2;
              } while (bVar2 != 0);
              iVar8 = 0;
LAB_0081e8ad:
              if (iVar8 == 0) {
                puVar1 = (uint *)(param_1[200] + 0x38 + iVar13);
                *puVar1 = *puVar1 | 1;
              }
            }
            iVar4 = iVar4 + 1;
            iVar13 = iVar13 + 0x70;
          } while (iVar4 < (short)param_1[0xc9]);
        }
        iVar4 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar13 = 0;
          do {
            pbVar7 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar13) + 0x40);
            if (pbVar7 != (byte *)0x0) {
              pcVar10 = "in_head_down";
              do {
                bVar2 = *pbVar7;
                bVar14 = bVar2 < (byte)*pcVar10;
                if (bVar2 != *pcVar10) {
LAB_0081e920:
                  iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_0081e925;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar14 = bVar2 < (byte)pcVar10[1];
                if (bVar2 != pcVar10[1]) goto LAB_0081e920;
                pbVar7 = pbVar7 + 2;
                pcVar10 = pcVar10 + 2;
              } while (bVar2 != 0);
              iVar8 = 0;
LAB_0081e925:
              if (iVar8 == 0) {
                puVar1 = (uint *)(param_1[200] + iVar13 + 0x38);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
            }
            iVar4 = iVar4 + 1;
            iVar13 = iVar13 + 0x70;
          } while (iVar4 < (short)param_1[0xc9]);
        }
      }
      if (param_1[0x3a4] == 0x15) {
        iVar4 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar13 = 0;
          do {
            iVar8 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar13) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"back_tail"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar8 + 0x38 + iVar13);
              *puVar1 = *puVar1 | 1;
            }
            iVar4 = iVar4 + 1;
            iVar13 = iVar13 + 0x70;
          } while (iVar4 < (short)param_1[0xc9]);
        }
        iVar4 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar13 = 0;
          do {
            iVar8 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar13) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"front_tail"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar8 + 0x38 + iVar13);
              *puVar1 = *puVar1 | 1;
            }
            iVar4 = iVar4 + 1;
            iVar13 = iVar13 + 0x70;
          } while (iVar4 < (short)param_1[0xc9]);
        }
      }
      if (param_1[0x3a4] == 0x16) {
        iVar4 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar13 = 0;
          do {
            pbVar7 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar13) + 0x40);
            if (pbVar7 != (byte *)0x0) {
              pbVar11 = (byte *)0x16413a4;
              do {
                bVar2 = *pbVar7;
                bVar14 = bVar2 < *pbVar11;
                if (bVar2 != *pbVar11) {
LAB_0081ea40:
                  iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_0081ea45;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar14 = bVar2 < pbVar11[1];
                if (bVar2 != pbVar11[1]) goto LAB_0081ea40;
                pbVar7 = pbVar7 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar2 != 0);
              iVar8 = 0;
LAB_0081ea45:
              if (iVar8 == 0) {
                puVar1 = (uint *)(param_1[200] + 0x38 + iVar13);
                *puVar1 = *puVar1 | 1;
              }
            }
            iVar4 = iVar4 + 1;
            iVar13 = iVar13 + 0x70;
          } while (iVar4 < (short)param_1[0xc9]);
        }
        iVar4 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar13 = 0;
          do {
            pbVar7 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar13) + 0x40);
            if (pbVar7 != (byte *)0x0) {
              pcVar10 = "in_L_reg";
              do {
                bVar2 = *pbVar7;
                bVar14 = bVar2 < (byte)*pcVar10;
                if (bVar2 != *pcVar10) {
LAB_0081eaa6:
                  iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_0081eaab;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar14 = bVar2 < (byte)pcVar10[1];
                if (bVar2 != pcVar10[1]) goto LAB_0081eaa6;
                pbVar7 = pbVar7 + 2;
                pcVar10 = pcVar10 + 2;
              } while (bVar2 != 0);
              iVar8 = 0;
LAB_0081eaab:
              if (iVar8 == 0) {
                puVar1 = (uint *)(param_1[200] + 0x38 + iVar13);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
            }
            iVar4 = iVar4 + 1;
            iVar13 = iVar13 + 0x70;
          } while (iVar4 < (short)param_1[0xc9]);
        }
      }
      if (param_1[0x3a4] == 0x18) {
        iVar4 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar13 = 0;
          do {
            pbVar7 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar13) + 0x40);
            if (pbVar7 != (byte *)0x0) {
              pcVar10 = "R_reg";
              do {
                bVar2 = *pbVar7;
                bVar14 = bVar2 < (byte)*pcVar10;
                if (bVar2 != *pcVar10) {
LAB_0081eb20:
                  iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_0081eb25;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar14 = bVar2 < (byte)pcVar10[1];
                if (bVar2 != pcVar10[1]) goto LAB_0081eb20;
                pbVar7 = pbVar7 + 2;
                pcVar10 = pcVar10 + 2;
              } while (bVar2 != 0);
              iVar8 = 0;
LAB_0081eb25:
              if (iVar8 == 0) {
                puVar1 = (uint *)(param_1[200] + iVar13 + 0x38);
                *puVar1 = *puVar1 | 1;
              }
            }
            iVar4 = iVar4 + 1;
            iVar13 = iVar13 + 0x70;
          } while (iVar4 < (short)param_1[0xc9]);
        }
        iVar4 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar13 = 0;
          do {
            pbVar7 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar13) + 0x40);
            if (pbVar7 != (byte *)0x0) {
              pcVar10 = "in_R_reg";
              do {
                bVar2 = *pbVar7;
                bVar14 = bVar2 < (byte)*pcVar10;
                if (bVar2 != *pcVar10) {
LAB_0081eb86:
                  iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_0081eb8b;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar14 = bVar2 < (byte)pcVar10[1];
                if (bVar2 != pcVar10[1]) goto LAB_0081eb86;
                pbVar7 = pbVar7 + 2;
                pcVar10 = pcVar10 + 2;
              } while (bVar2 != 0);
              iVar8 = 0;
LAB_0081eb8b:
              if (iVar8 == 0) {
                puVar1 = (uint *)(param_1[200] + 0x38 + iVar13);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
            }
            iVar4 = iVar4 + 1;
            iVar13 = iVar13 + 0x70;
          } while (iVar4 < (short)param_1[0xc9]);
        }
      }
      goto LAB_0081f0bb;
    }
  }
  else {
    FUN_00a81330();
    iVar4 = FUN_00a7c8a0();
    if (iVar4 == 0) goto LAB_0081e758;
    FUN_00a81330();
    uVar6 = FUN_00a7c8a0();
    iVar4 = FUN_00549f60(uVar6);
    if ((iVar4 == 0) ||
       (bVar14 = *(int *)(iVar4 + 0xa80) != 0 || bVar14, (*(byte *)(iVar4 + 0x4c8) & 2) == 0))
    goto LAB_0081e758;
  }
  iVar4 = 0;
  if (param_1[0x3a4] == 0x12) {
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar13 = 0;
      do {
        iVar8 = param_1[200];
        iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar13) + 0x40);
        if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_01641490), iVar9 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38 + iVar13);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar13 = iVar13 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    iVar4 = FUN_00a12210(6);
    FUN_0081a3d0(0x36,iVar4 + 0x40);
    *(ushort *)(param_1 + 0x3a5) = *(ushort *)(param_1 + 0x3a5) | 1;
    iVar4 = param_1[0x82f];
  }
  if (param_1[0x3a4] == 0x88) {
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar13 = 0;
      do {
        iVar8 = param_1[200];
        iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar13) + 0x40);
        if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_01641424), iVar9 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38 + iVar13);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar13 = iVar13 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    iVar4 = FUN_00a12210(6);
    FUN_0081a3d0(0x36,iVar4 + 0x40);
    *(ushort *)(param_1 + 0x3a5) = *(ushort *)(param_1 + 0x3a5) | 0x100;
    iVar4 = param_1[0x82f];
  }
  if (param_1[0x3a4] == 0x16) {
    iVar4 = FUN_00a12210(0x20);
    FUN_0081a3d0(0x36,iVar4 + 0x40);
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar13 = 0;
      do {
        iVar8 = param_1[200];
        iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar13) + 0x40);
        if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_0164148c), iVar9 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38 + iVar13);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar13 = iVar13 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    *(ushort *)(param_1 + 0x3a5) = *(ushort *)(param_1 + 0x3a5) | 0x10;
    iVar4 = param_1[0x831];
  }
  if (param_1[0x3a4] == 0x18) {
    iVar4 = FUN_00a12210(0x2b);
    FUN_0081a3d0(0x36,iVar4 + 0x40);
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar13 = 0;
      do {
        iVar8 = param_1[200];
        iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar13) + 0x40);
        if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_01641488), iVar9 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38 + iVar13);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar13 = iVar13 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    *(ushort *)(param_1 + 0x3a5) = *(ushort *)(param_1 + 0x3a5) | 0x40;
    iVar4 = param_1[0x831];
  }
  if (param_1[0x3a4] == 0x15) {
    param_1[0x775] = 1;
    FUN_00c81b30(0x56);
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar13 = 0;
      do {
        iVar8 = param_1[200];
        iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar13) + 0x40);
        if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"back_tail"), iVar9 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38 + iVar13);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar13 = iVar13 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar13 = 0;
      do {
        iVar8 = param_1[200];
        iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar13) + 0x40);
        if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"front_tail"), iVar9 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38 + iVar13);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar13 = iVar13 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    FUN_00a93780("_tail_f");
    FUN_00a93780("_tail_b");
    FUN_00a93780("_c1tail");
    FUN_00a93780("_c2tail");
    FUN_00a8c420(0,"_tail_f");
    FUN_00a8c420(0,"_tail_b");
    FUN_00a8c420(0,"_c1tail");
    FUN_00a8c420(0,"_c2tail");
    *(ushort *)(param_1 + 0x3a5) = *(ushort *)(param_1 + 0x3a5) | 8;
    iVar4 = param_1[0x830];
  }
  if (param_1[0x3a4] == 0x13) {
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar13 = 0;
      do {
        iVar8 = param_1[200];
        iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar13) + 0x40);
        if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"wp_ar"), iVar9 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38 + iVar13);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar13 = iVar13 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    iVar4 = param_1[0x832];
  }
  if (param_1[0x3a4] == 0x14) {
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar13 = 0;
      do {
        iVar8 = param_1[200];
        iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar13) + 0x40);
        if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"wp_al"), iVar9 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38 + iVar13);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar13 = iVar13 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    iVar4 = param_1[0x832];
  }
  if (param_1[0x3a4] == 0x19) {
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar13 = 0;
      do {
        iVar8 = param_1[200];
        iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar13) + 0x40);
        if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"wp_rr"), iVar9 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38 + iVar13);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar13 = iVar13 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    iVar4 = param_1[0x831];
  }
  if (param_1[0x3a4] == 0x17) {
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar13 = 0;
      do {
        iVar8 = param_1[200];
        iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar13) + 0x40);
        if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"wp_rl"), iVar9 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38 + iVar13);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar13 = iVar13 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    iVar4 = param_1[0x831];
  }
  (**(code **)(*param_1 + 0x30c))(iVar4,0);
  if ((param_1[0x21c] < 1) && (DAT_018b9174 == 0xc30)) {
    param_1[0x139] = 1;
    if (param_1[0x3a4] == 0x15) {
      FUN_00d5ea40("PC30_RAY_DEAD",1,0);
    }
    else {
      DAT_01bea060 = DAT_01bea060 | 0x2000000;
      FUN_00a8caf0(0x100065,0,0,0);
      (**(code **)(*param_1 + 0x220))(0x41200000);
    }
  }
LAB_0081f0bb:
  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_2(0x2c209);
  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_2(0x2c202);
  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_2(0x2c207);
  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_2(0x2c206);
  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_2(0x2c20c);
  FUN_00a8caf0(0x27,0,0,0);
  if (iVar3 != 0x35) {
    if (iVar3 == 0x36) {
      FUN_00a8caf0(0x28,0,0,0);
    }
    return;
  }
  FUN_00a8caf0(0x29,0,0,0);
  return;
}

