// src/unsorted/unit_00D1E780.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D1E780..00D1E780, 1 functions

#include "mgrr.h"

// 00D1E780  FUN_00d1e780  size=4316  [run]
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00d1e780(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  float fVar9;
  int *piVar10;
  ushort *puVar11;
  float *pfVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  int iVar24;
  uint uVar25;
  ushort *puVar26;
  undefined8 uVar27;
  float *local_3d4;
  uint local_3d0;
  float local_3c8;
  float local_3c4;
  uint local_3bc;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  int *local_3ac;
  int local_3a8;
  float local_3a4;
  int *local_39c;
  int local_398;
  uint local_390;
  int local_38c;
  int local_380;
  int local_37c;
  float local_378;
  int local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  undefined4 local_35c;
  float local_358;
  float local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  float local_340 [16];
  int local_300 [192];
  
  local_340[0] = 0.0;
  local_37c = 0;
  local_380 = -1;
  _memset(local_340 + 1,0,0x3c);
  piVar10 = *(int **)(param_1 + 4);
  local_36c = 0.0;
  local_368 = 1.0;
  uVar4 = 0;
  local_3d0 = 0;
  local_3bc = 0;
  local_364 = 0.0;
  *(undefined4 *)(param_1 + 0x30) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x34) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (piVar10 != (int *)0x0) {
    iVar21 = param_2[1];
    iVar15 = *param_2;
    if (*piVar10 == 0) {
      iVar19 = 0;
    }
    else {
      iVar19 = *piVar10 + (int)piVar10;
    }
    if ((((-1 < iVar15) && (iVar15 < piVar10[1])) &&
        (piVar14 = (int *)(iVar15 * 0x10 + iVar19), piVar14 != (int *)0x0)) &&
       ((-1 < iVar21 && (iVar21 < piVar14[1])))) {
      if (*piVar14 == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = *piVar14 + (int)piVar10;
      }
      piVar14 = (int *)(iVar15 + iVar21 * 0x14);
      if (((piVar14 != (int *)0x0) && (*piVar14 != 0)) &&
         ((iVar21 = *piVar14 + (int)piVar10, iVar21 != 0 &&
          (local_3d4 = (float *)(iVar21 + 0xc), 1 < *(int *)(iVar21 + 0xc))))) {
        iVar15 = piVar14[1];
        iVar20 = 0;
        iVar24 = 0;
        iVar19 = 0;
        local_3b8 = 1.4013e-45;
        if (1 < iVar15) {
          iVar16 = (iVar15 - 2U >> 1) + 1;
          piVar10 = (int *)(iVar21 + 0x24);
          iVar19 = iVar16 * 2;
          do {
            iVar20 = iVar20 + piVar10[-6];
            iVar24 = iVar24 + *piVar10;
            piVar10 = piVar10 + 0xc;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
        if (iVar19 < iVar15) {
          local_3b8 = (float)(*(int *)(iVar21 + 0xc + iVar19 * 0x18) + 1);
        }
        uVar25 = (int)local_3b8 + iVar20 + iVar24;
        piVar10 = (int *)FUN_00dd3580(-(uint)((int)((ulonglong)uVar25 * 0x50 >> 0x20) != 0) |
                                      (uint)((ulonglong)uVar25 * 0x50),&DAT_01b7be50);
        local_38c = FUN_00dd3580(-(uint)((int)((ulonglong)uVar25 * 0x70 >> 0x20) != 0) |
                                 (uint)((ulonglong)uVar25 * 0x70),&DAT_01b7be50);
        if (local_38c == 0) {
          local_38c = 0;
        }
        else {
          iVar21 = uVar25 - 1;
          if (-1 < iVar21) {
            puVar18 = (undefined4 *)(local_38c + 0x14);
            do {
              puVar18[-1] = 0;
              puVar18[-5] = 0;
              *puVar18 = 0;
              puVar18[0x14] = 0;
              puVar18[1] = 0;
              iVar21 = iVar21 + -1;
              puVar18[3] = 0;
              puVar18[4] = 0;
              puVar18[7] = 0;
              puVar18[8] = 0;
              puVar18[9] = 0;
              puVar18[10] = 0;
              puVar18[2] = 0x3f800000;
              puVar18[0xc] = 0x3f800000;
              puVar18[0xd] = 0x3f800000;
              puVar18[0xe] = 0x3f800000;
              puVar18[0xf] = 0x3f800000;
              puVar18[0x10] = 0x3f800000;
              puVar18[0x11] = 0x3f800000;
              puVar18[0x12] = 0x3f800000;
              puVar18[0x13] = 0x3f800000;
              puVar18 = puVar18 + 0x1c;
            } while (-1 < iVar21);
          }
        }
        local_3b0 = 0.0;
        bVar8 = 0 < param_2[0x2d];
        iVar21 = piVar14[1];
        if (0 < iVar21) {
          local_3ac = param_2 + 0x32;
          do {
            if (local_3d4[-3] == 0.0) {
              puVar26 = (ushort *)0x0;
            }
            else {
              puVar26 = (ushort *)(*(int *)(param_1 + 4) + (int)local_3d4[-3]);
            }
            fVar3 = (float)(int)local_3d4[1];
            local_3a4 = 0.0;
            if ((bVar8) && (iVar15 = param_2[0x30], iVar15 < iVar21)) {
              if ((float)iVar15 == local_3b0) {
                local_3a4 = (float)param_2[0x31];
              }
              else if ((int)local_3b0 < iVar15) goto LAB_00d1ea00;
            }
            else {
LAB_00d1ea00:
              local_3a4 = *local_3d4;
            }
            local_398 = 0;
            if (0 < (int)local_3a4) {
              piVar22 = piVar10 + local_3d0 * 0x14;
              do {
                if (bVar8) {
                  if ((*puVar26 & 0x8000) != 0) {
                    iVar21 = param_2[0x17];
                    goto LAB_00d1eb17;
                  }
                  if (param_2[0x43] <= *local_3ac - (local_398 + 1) * param_2[0x42]) {
                    iVar21 = param_2[0x17];
                    goto LAB_00d1eb17;
                  }
                  iVar21 = *local_3ac + local_398;
                  iVar21 = iVar21 - (iVar21 / ((int)*local_3d4 + -1)) * ((int)*local_3d4 + -1);
                  puVar11 = puVar26;
                  do {
                    if (puVar11 == (ushort *)0x0) {
switchD_00d1eaa3_caseD_0:
                      puVar11 = (ushort *)0x0;
                    }
                    else {
                      if ((*puVar11 & 0x8000) != 0) {
                        switch(*puVar11 & 0x7fff) {
                        case 0:
                          goto switchD_00d1eaa3_caseD_0;
                        case 1:
                        case 2:
                        case 3:
                        case 6:
                        case 8:
                          break;
                        default:
                          puVar11 = puVar11 + 1;
                          goto LAB_00d1eab2;
                        }
                      }
                      puVar11 = puVar11 + 2;
                    }
LAB_00d1eab2:
                    if ((*puVar11 & 0x7fff) == 0) {
                      if (local_3d4[-3] == 0.0) {
                        puVar11 = (ushort *)0x0;
                      }
                      else {
                        puVar11 = (ushort *)(*(int *)(param_1 + 4) + (int)local_3d4[-3]);
                      }
                    }
                    iVar21 = iVar21 + -1;
                  } while ((0 < iVar21) ||
                          (((*puVar11 & 0x7fff) != 3 && ((*puVar11 & 0x8000) != 0))));
                  FUN_00d11c90(piVar22,puVar11,param_2[0x17]);
                }
                else {
                  iVar21 = param_2[0x17];
LAB_00d1eb17:
                  FUN_00d11c90(piVar22,puVar26,iVar21);
                }
                if ((*piVar22 != -1) && (*piVar22 != 2)) {
                  local_3d0 = local_3d0 + 1;
                  piVar22 = piVar22 + 0x14;
                }
                if ((int)uVar25 <= (int)local_3d0) break;
                if (puVar26 == (ushort *)0x0) {
switchD_00d1eb59_caseD_0:
                  puVar26 = (ushort *)0x0;
                }
                else {
                  if ((*puVar26 & 0x8000) != 0) {
                    switch(*puVar26 & 0x7fff) {
                    case 0:
                      goto switchD_00d1eb59_caseD_0;
                    case 1:
                    case 2:
                    case 3:
                    case 6:
                    case 8:
                      break;
                    default:
                      puVar26 = puVar26 + 1;
                      goto LAB_00d1eb68;
                    }
                  }
                  puVar26 = puVar26 + 2;
                }
LAB_00d1eb68:
                if ((puVar26 == (ushort *)0x0) ||
                   (local_398 = local_398 + 1, (int)local_3a4 <= local_398)) break;
              } while( true );
            }
            if ((bVar8) && ((int)local_3a4 < (int)*local_3d4)) {
              piVar10[local_3d0 * 0x14] = 0;
              local_3d0 = local_3d0 + 1;
            }
            iVar21 = piVar14[1];
            local_3ac = local_3ac + 1;
            local_3d4 = local_3d4 + 6;
            local_3b0 = (float)((int)local_3b0 + 1);
          } while ((int)local_3b0 < iVar21);
          if (0.0 < fVar3) {
            local_3b8 = 0.0;
            local_360 = 0.0;
            local_3b4 = 0.0;
            local_3c8 = 0.0;
            local_3c4 = 0.0;
            local_35c = 0;
            local_378 = 0.0;
            local_3ac = (int *)0x0;
            local_3b0 = 1.1754944e-38;
            param_2[0x2b] = *piVar10;
            local_3d4 = (float *)0x0;
            param_2[0x2c] = piVar10[(local_3d0 - 2 & ((int)(local_3d0 - 2) < 0) - 1) * 0x14];
            piVar14 = (int *)0.0;
            if (0 < (int)local_3d0) {
              fVar1 = 0.0;
              fVar2 = 0.0;
              pfVar17 = (float *)(piVar10 + 8);
              local_39c = param_2 + 0x17;
              fVar7 = local_364;
              fVar5 = local_368;
              local_3a8 = local_3d0 - 1;
              do {
                fVar9 = local_360;
                switch(pfVar17[-8]) {
                case 0.0:
                  local_340[local_37c] = fVar1;
                  local_39c[1] = (int)fVar1;
                  local_37c = local_37c + 1;
                  local_39c = local_39c + 1;
                  param_2[0x29] = param_2[2];
                  param_2[0x2a] = param_2[3];
                  param_2[0x28] = local_37c;
                  local_3b8 = 0.0;
                  local_3b4 = local_3b4 + fVar3 + (float)param_2[3];
                  fVar1 = 0.0;
                  break;
                case 1.4013e-45:
                  if (*(char *)(param_1 + 0x2d) == '\0') {
                    fVar1 = pfVar17[-1] + fVar1 + (float)param_2[2];
                    local_3b8 = fVar1;
                    fVar9 = fVar1;
                    if (local_360 <= fVar1) break;
                  }
                  else {
                    if ((float *)param_2[0x12] == local_3d4) {
                      param_2[0x12] = param_2[0x12] + 1;
                    }
                    fVar1 = pfVar17[-1];
                    pfVar17[-1] = fVar5 * fVar1;
                    *pfVar17 = *pfVar17 * fVar5;
                    local_378 = pfVar17[-5] * fVar5 + local_378;
                    pfVar17[-4] = ((local_3a4 * 0.5 + local_3c8) - fVar2 * 0.5) + local_378;
                    pfVar17[-3] = local_3c4 - local_36c;
                    local_378 = local_378 + fVar7 + fVar5 * fVar1;
                  }
LAB_00d1ed9d:
                  fVar1 = local_3b8;
                  fVar9 = local_360;
                  break;
                case 4.2039e-45:
                case 7.00649e-45:
                  if (*(char *)(param_1 + 0x2d) == '\0') {
                    pfVar17[-4] = pfVar17[-5] + fVar1;
                    fVar9 = pfVar17[-2] + local_3b4;
                    pfVar17[-3] = fVar9;
                    if (pfVar17[-8] != 4.2039e-45) {
                      if (fVar9 < (float)local_3ac) {
                        local_3ac = (int *)fVar9;
                      }
                      if (local_3b0 <= fVar9) {
                        local_3b0 = fVar9;
                      }
                    }
                    local_3b8 = pfVar17[-6] + pfVar17[-1] + pfVar17[-5] + fVar1;
                    if (*(char *)(param_1 + 0x2c) != '\0') {
                      local_3a4 = local_3a4 + pfVar17[-1];
                    }
                    if ((((int)local_3d4 < (int)(local_3d0 - 1)) && (pfVar17[0xc] != 0.0)) &&
                       ((local_3b8 = local_3b8 + (float)param_2[2],
                        *(char *)(param_1 + 0x2c) != '\0' && (pfVar17[0xc] != 1.26117e-44)))) {
                      local_3a4 = (float)param_2[2] + local_3a4;
                    }
                    if (local_360 <= local_3b8) {
                      local_360 = local_3b8;
                    }
                  }
                  else {
                    if ((float *)param_2[0x12] == local_3d4) {
                      param_2[0x12] = param_2[0x12] + 1;
                    }
                    fVar1 = pfVar17[-1];
                    pfVar17[-1] = fVar5 * fVar1;
                    *pfVar17 = *pfVar17 * fVar5;
                    local_378 = pfVar17[-5] * fVar5 + local_378;
                    pfVar17[-4] = ((local_3a4 * 0.5 + local_3c8) - fVar2 * 0.5) + local_378;
                    pfVar17[-3] = local_3c4 - local_36c;
                    local_378 = local_378 + fVar7 + fVar5 * fVar1;
                  }
                  if (*(char *)(param_1 + 0x2e) == '\0') goto LAB_00d1ed9d;
                  *(undefined2 *)(pfVar17 + 8) = uVar4;
                  fVar1 = local_3b8;
                  fVar9 = local_360;
                  break;
                case 8.40779e-45:
                  *(undefined1 *)(param_1 + 0x2e) = 1;
                  uVar4 = *(undefined2 *)(pfVar17 + 8);
                  break;
                case 9.80909e-45:
                  *(undefined1 *)(param_1 + 0x2e) = 0;
                  break;
                case 1.12104e-44:
                  local_350 = 0;
                  local_34c = 0;
                  local_3a4 = 0.0;
                  piVar14 = *(int **)(param_1 + 8);
                  local_3c8 = local_3b8;
                  *(undefined1 *)(param_1 + 0x2c) = 1;
                  local_3c4 = local_3b4;
                  if (piVar14 != (int *)0x0) {
                    piVar22 = piVar14 + 1;
                    iVar21 = 0;
                    if (0 < *piVar14) {
                      do {
                        if (*piVar22 == (int)*(short *)((int)pfVar17 + 0x22)) goto LAB_00d1efa5;
                        iVar21 = iVar21 + 1;
                        piVar22 = piVar22 + 4;
                      } while (iVar21 < *piVar14);
                    }
                    piVar22 = &DAT_018b570c;
LAB_00d1efa5:
                    local_36c = (float)piVar22[1];
                    local_370 = *piVar22;
                    fVar7 = (float)piVar22[3];
                    fVar5 = (float)piVar22[2];
                    local_368 = fVar5;
                    local_364 = fVar7;
                  }
                  break;
                case 1.26117e-44:
                  *(undefined2 *)(param_1 + 0x2c) = 0x100;
                  local_348 = 0;
                  local_344 = 0;
                  local_358 = 0.0;
                  local_378 = 0.0;
                  local_354 = 0.0;
                  iVar21 = (int)local_3d4 + 1;
                  fVar2 = 0.0;
                  if (iVar21 < (int)local_3d0) {
                    if (3 < local_3a8) {
                      pfVar12 = pfVar17 + 0x20;
                      do {
                        fVar6 = pfVar12[-0x14];
                        if (fVar6 == 1.4013e-44) goto switchD_00d1ecde_caseD_2;
                        if ((fVar6 == 7.00649e-45) || (fVar6 == 1.4013e-45)) {
                          fVar2 = (pfVar12[-0xd] + pfVar12[-0x11]) * fVar5 + fVar2;
                          if (*pfVar12 == 1.4013e-44) goto switchD_00d1ecde_caseD_2;
                          fVar2 = fVar2 + fVar7;
                        }
                        fVar6 = *pfVar12;
                        if (fVar6 == 1.4013e-44) goto switchD_00d1ecde_caseD_2;
                        if (((fVar6 == 7.00649e-45) || (fVar6 == 1.4013e-45)) &&
                           (fVar2 = (pfVar12[7] + pfVar12[3]) * fVar5 + fVar2,
                           pfVar12[0x14] != 1.4013e-44)) {
                          fVar2 = fVar2 + fVar7;
                        }
                        fVar6 = pfVar12[0x14];
                        if (fVar6 == 1.4013e-44) goto switchD_00d1ecde_caseD_2;
                        if (((fVar6 == 7.00649e-45) || (fVar6 == 1.4013e-45)) &&
                           (fVar2 = (pfVar12[0x1b] + pfVar12[0x17]) * fVar5 + fVar2,
                           pfVar12[0x28] != 1.4013e-44)) {
                          fVar2 = fVar2 + fVar7;
                        }
                        fVar6 = pfVar12[0x28];
                        if (fVar6 == 1.4013e-44) goto switchD_00d1ecde_caseD_2;
                        if (((fVar6 == 7.00649e-45) || (fVar6 == 1.4013e-45)) &&
                           (fVar2 = (pfVar12[0x2f] + pfVar12[0x2b]) * fVar5 + fVar2,
                           pfVar12[0x3c] != 1.4013e-44)) {
                          fVar2 = fVar2 + fVar7;
                        }
                        iVar21 = iVar21 + 4;
                        pfVar12 = pfVar12 + 0x50;
                      } while (iVar21 < (int)(local_3d0 - 3));
                    }
                    if (iVar21 < (int)local_3d0) {
                      piVar14 = piVar10 + iVar21 * 0x14;
                      do {
                        iVar15 = *piVar14;
                        if (iVar15 == 10) break;
                        if (((iVar15 == 5) || (iVar15 == 1)) &&
                           (fVar2 = ((float)piVar14[7] + (float)piVar14[3]) * fVar5 + fVar2,
                           piVar14[0x14] != 10)) {
                          fVar2 = fVar2 + fVar7;
                        }
                        iVar21 = iVar21 + 1;
                        piVar14 = piVar14 + 0x14;
                      } while (iVar21 < (int)local_3d0);
                    }
                  }
                  break;
                case 1.4013e-44:
                  *(undefined1 *)(param_1 + 0x2d) = 0;
                }
switchD_00d1ecde_caseD_2:
                local_360 = fVar9;
                local_3a8 = local_3a8 + -1;
                local_3d4 = (float *)((int)local_3d4 + 1);
                pfVar17 = pfVar17 + 0x14;
                piVar14 = local_3ac;
              } while ((int)local_3d4 < (int)local_3d0);
            }
            fVar1 = 0.0;
            local_3b0 = local_3b0 - (float)piVar14;
            if (0.0 <= (float)piVar14) {
              local_3b0 = local_3b0 * -1.0;
            }
            local_3b0 = local_3b0 - fVar3;
            iVar21 = 0;
            if (3 < local_37c) {
              fVar3 = (float)param_2[0x10];
              do {
                if (fVar3 < local_340[iVar21]) {
                  fVar3 = local_340[iVar21];
                }
                if (fVar3 < local_340[iVar21 + 1]) {
                  fVar3 = local_340[iVar21 + 1];
                }
                if (fVar3 < local_340[iVar21 + 2]) {
                  fVar3 = local_340[iVar21 + 2];
                }
                if (fVar3 < local_340[iVar21 + 3]) {
                  fVar3 = local_340[iVar21 + 3];
                }
                iVar21 = iVar21 + 4;
              } while (iVar21 < local_37c + -3);
              param_2[0x10] = (int)fVar3;
            }
            if (iVar21 < local_37c) {
              fVar3 = (float)param_2[0x10];
              do {
                if (fVar3 < local_340[iVar21]) {
                  fVar3 = local_340[iVar21];
                }
                iVar21 = iVar21 + 1;
              } while (iVar21 < local_37c);
              param_2[0x10] = (int)fVar3;
            }
            param_2[0x11] = (int)ABS(local_3b0);
            *(int *)(param_1 + 0x38) = param_2[0x10];
            *(int *)(param_1 + 0x3c) = param_2[0x11];
            fVar3 = local_358;
            switch(param_2[0xe]) {
            case 0:
              fVar3 = fVar1;
              break;
            case 1:
              fVar3 = local_340[0] * -0.5;
              break;
            case 2:
              fVar3 = -local_340[0];
              break;
            case 3:
              fVar3 = (float)param_2[0x10] * -0.5;
            }
            iVar21 = param_2[0xf];
            fVar2 = fVar1;
            if (iVar21 != 0) {
              if (iVar21 == 1) {
                fVar2 = local_3b0 * 0.5;
              }
              else {
                fVar2 = local_3b0;
                if (iVar21 != 2) {
                  fVar2 = local_354;
                }
              }
            }
            if (0 < (int)local_3d0) {
              pfVar17 = local_340;
              pfVar12 = (float *)(piVar10 + 5);
              uVar25 = local_3d0;
              do {
                fVar7 = pfVar12[-5];
                fVar5 = fVar3;
                if (fVar7 == 0.0) {
                  iVar21 = param_2[0xe];
                  pfVar17 = pfVar17 + 1;
                  fVar5 = fVar1;
                  if (iVar21 != 0) {
                    if (iVar21 == 1) {
                      fVar5 = *pfVar17 * -0.5;
                    }
                    else {
                      fVar5 = fVar3;
                      if (iVar21 == 2) {
                        fVar5 = -*pfVar17;
                      }
                    }
                  }
                }
                else if ((fVar7 == 4.2039e-45) || (fVar7 == 7.00649e-45)) {
                  pfVar12[-1] = fVar3 + pfVar12[-1];
                  *pfVar12 = fVar2 + *pfVar12;
                }
                pfVar12 = pfVar12 + 0x14;
                uVar25 = uVar25 - 1;
                fVar3 = fVar5;
              } while (uVar25 != 0);
            }
            iVar21 = 0;
            if (3 < (int)local_3d0) {
              fVar3 = *(float *)(param_1 + 0x30);
              fVar1 = *(float *)(param_1 + 0x34);
              pfVar17 = (float *)(piVar10 + 5);
              iVar15 = (local_3d0 - 4 >> 2) + 1;
              iVar21 = iVar15 * 4;
              do {
                if (pfVar17[-1] < fVar3) {
                  fVar3 = pfVar17[-1];
                  *(float *)(param_1 + 0x30) = fVar3;
                }
                if (*pfVar17 < fVar1) {
                  fVar1 = *pfVar17;
                  *(float *)(param_1 + 0x34) = fVar1;
                }
                if (pfVar17[0x13] < fVar3) {
                  fVar3 = pfVar17[0x13];
                  *(float *)(param_1 + 0x30) = fVar3;
                }
                if (pfVar17[0x14] < fVar1) {
                  fVar1 = pfVar17[0x14];
                  *(float *)(param_1 + 0x34) = fVar1;
                }
                if (pfVar17[0x27] < fVar3) {
                  fVar3 = pfVar17[0x27];
                  *(float *)(param_1 + 0x30) = fVar3;
                }
                if (pfVar17[0x28] < fVar1) {
                  fVar1 = pfVar17[0x28];
                  *(float *)(param_1 + 0x34) = fVar1;
                }
                if (pfVar17[0x3b] < fVar3) {
                  fVar3 = pfVar17[0x3b];
                  *(float *)(param_1 + 0x30) = fVar3;
                }
                if (pfVar17[0x3c] < fVar1) {
                  fVar1 = pfVar17[0x3c];
                  *(float *)(param_1 + 0x34) = fVar1;
                }
                pfVar17 = pfVar17 + 0x50;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            if (iVar21 < (int)local_3d0) {
              fVar3 = *(float *)(param_1 + 0x30);
              fVar1 = *(float *)(param_1 + 0x34);
              pfVar17 = (float *)(piVar10 + iVar21 * 0x14 + 5);
              iVar21 = local_3d0 - iVar21;
              do {
                if (pfVar17[-1] < fVar3) {
                  fVar3 = pfVar17[-1];
                  *(float *)(param_1 + 0x30) = fVar3;
                }
                if (*pfVar17 < fVar1) {
                  fVar1 = *pfVar17;
                  *(float *)(param_1 + 0x34) = fVar1;
                }
                pfVar17 = pfVar17 + 0x14;
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
            }
            iVar21 = 0;
            iVar15 = 0;
            iVar19 = 0;
            if (0 < (int)local_3d0) {
              piVar14 = local_300 + 2;
              piVar22 = local_300 + 1;
              piVar23 = local_300;
              local_3d4 = (float *)piVar10;
              do {
                iVar20 = (int)*local_3d4;
                if (iVar20 == 0) {
                  if (local_380 != 0) {
                    local_3bc = local_3bc + 1;
                    *piVar23 = iVar21;
                    *piVar14 = iVar15;
                    *piVar22 = iVar19 - iVar21;
                    piVar23 = piVar23 + 3;
                    piVar22 = piVar22 + 3;
                    piVar14 = piVar14 + 3;
                    iVar21 = iVar19 + 1;
                    iVar15 = 0;
                  }
                }
                else if ((iVar20 == 3) || (iVar20 == 5)) {
                  if (((iVar15 != 0) && ((float)iVar15 != local_3d4[9])) || (local_380 == 3)) {
                    local_3bc = local_3bc + 1;
                    *piVar23 = iVar21;
                    *piVar22 = iVar19 - iVar21;
                    *piVar14 = iVar15;
                    piVar23 = piVar23 + 3;
                    piVar22 = piVar22 + 3;
                    piVar14 = piVar14 + 3;
                    iVar21 = iVar19;
                  }
                  iVar15 = (int)local_3d4[9];
                }
                local_380 = (int)*local_3d4;
                local_3d4 = local_3d4 + 0x14;
                iVar19 = iVar19 + 1;
              } while (iVar19 < (int)local_3d0);
            }
            if (0 < (int)local_3bc) {
              piVar14 = local_300 + 1;
              local_390 = local_3bc;
              do {
                iVar21 = piVar14[-1];
                if (iVar21 < *piVar14 + iVar21) {
                  piVar22 = (int *)(iVar21 * 0x70 + 0x38 + local_38c);
                  iVar15 = (*piVar14 + iVar21) - iVar21;
                  piVar23 = piVar10 + iVar21 * 0x14 + 0xe;
                  do {
                    iVar21 = piVar23[2];
                    piVar22[-10] = piVar23[-10];
                    piVar22[-9] = piVar23[-9];
                    piVar22[-6] = piVar23[-7];
                    piVar22[-5] = piVar23[-6];
                    piVar22[-2] = piVar23[-2];
                    piVar22[-1] = piVar23[-1];
                    *piVar22 = *piVar23;
                    piVar22[1] = piVar23[1];
                    piVar22[0xb] = param_2[0xd];
                    if ((short)iVar21 == -1) {
                      piVar22[3] = param_2[5];
                      piVar22[4] = param_2[6];
                      piVar22[5] = param_2[7];
                      fVar3 = (float)param_2[8];
                    }
                    else {
                      uVar27 = FUN_00ccd840(&local_370,(int)(short)iVar21);
                      piVar22 = (int *)((ulonglong)uVar27 >> 0x20);
                      piVar13 = (int *)uVar27;
                      piVar22[3] = *piVar13;
                      piVar22[4] = piVar13[1];
                      piVar22[5] = piVar13[2];
                      piVar22[6] = piVar13[3];
                      fVar3 = (float)param_2[8] * (float)piVar22[6];
                    }
                    piVar22[6] = (int)fVar3;
                    piVar22[7] = param_2[9];
                    piVar22[8] = param_2[10];
                    piVar22[9] = param_2[0xb];
                    piVar22[10] = param_2[0xc];
                    if ((piVar23[-0xe] == 3) || (piVar23[-0xe] == 5)) {
                      piVar22[-0xe] = 1;
                    }
                    piVar23 = piVar23 + 0x14;
                    piVar22 = piVar22 + 0x1c;
                    iVar15 = iVar15 + -1;
                  } while (iVar15 != 0);
                }
                piVar14 = piVar14 + 3;
                local_390 = local_390 - 1;
              } while (local_390 != 0);
            }
            if (param_2[0x13] != local_3bc) {
              if (param_2[0x14] != 0) {
                FUN_00dd4940(param_2[0x14]);
                param_2[0x14] = 0;
              }
              param_2[0x13] = local_3bc;
              if (0 < (int)local_3bc) {
                iVar21 = FUN_00dd3580(-(uint)((int)((ulonglong)local_3bc * 0xc >> 0x20) != 0) |
                                      (uint)((ulonglong)local_3bc * 0xc),&DAT_01b7be50);
                param_2[0x14] = iVar21;
              }
            }
            iVar21 = 0;
            if (0 < param_2[0x13]) {
              iVar15 = 0;
              do {
                iVar19 = param_2[0x14];
                *(undefined4 *)(iVar19 + iVar15) = *(undefined4 *)((int)local_300 + iVar15);
                *(undefined4 *)(iVar19 + 4 + iVar15) = *(undefined4 *)((int)local_300 + iVar15 + 4);
                *(undefined4 *)(iVar19 + 8 + iVar15) = *(undefined4 *)((int)local_300 + iVar15 + 8);
                iVar21 = iVar21 + 1;
                iVar15 = iVar15 + 0xc;
              } while (iVar21 < param_2[0x13]);
            }
            if (param_2[0x15] != local_3d0) {
              if (param_2[0x16] != 0) {
                FUN_00dd4940(param_2[0x16]);
                param_2[0x16] = 0;
              }
              param_2[0x15] = local_3d0;
              if (0 < (int)local_3d0) {
                iVar21 = FUN_00dd3580(-(uint)((int)((ulonglong)local_3d0 * 0x70 >> 0x20) != 0) |
                                      (uint)((ulonglong)local_3d0 * 0x70),&DAT_01b7be50);
                if (iVar21 == 0) {
                  iVar21 = 0;
                }
                else {
                  iVar15 = local_3d0 - 1;
                  if (-1 < iVar15) {
                    puVar18 = (undefined4 *)(iVar21 + 0x14);
                    do {
                      puVar18[-1] = 0;
                      puVar18[-5] = 0;
                      *puVar18 = 0;
                      puVar18[0x14] = 0;
                      puVar18[1] = 0;
                      iVar15 = iVar15 + -1;
                      puVar18[3] = 0;
                      puVar18[4] = 0;
                      puVar18[7] = 0;
                      puVar18[8] = 0;
                      puVar18[9] = 0;
                      puVar18[10] = 0;
                      puVar18[2] = 0x3f800000;
                      puVar18[0xc] = 0x3f800000;
                      puVar18[0xd] = 0x3f800000;
                      puVar18[0xe] = 0x3f800000;
                      puVar18[0xf] = 0x3f800000;
                      puVar18[0x10] = 0x3f800000;
                      puVar18[0x11] = 0x3f800000;
                      puVar18[0x12] = 0x3f800000;
                      puVar18[0x13] = 0x3f800000;
                      puVar18 = puVar18 + 0x1c;
                    } while (-1 < iVar15);
                  }
                }
                param_2[0x16] = iVar21;
              }
            }
            iVar21 = 0;
            if (0 < param_2[0x15]) {
              puVar18 = (undefined4 *)(local_38c + 0x18);
              do {
                iVar15 = param_2[0x16] + (-0x18 - local_38c);
                *(undefined4 *)(iVar15 + (int)puVar18) = puVar18[-6];
                *(undefined4 *)(iVar15 + 0x10 + (int)puVar18) = puVar18[-2];
                iVar21 = iVar21 + 1;
                *(undefined4 *)((int)puVar18 + iVar15 + 0x14) = puVar18[-1];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x18) = *puVar18;
                *(undefined4 *)((int)puVar18 + iVar15 + 0x1c) = puVar18[1];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x20) = puVar18[2];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x24) = puVar18[3];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x30) = puVar18[6];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x34) = puVar18[7];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x38) = puVar18[8];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x3c) = puVar18[9];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x40) = puVar18[10];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x44) = puVar18[0xb];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x48) = puVar18[0xc];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x4c) = puVar18[0xd];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x50) = puVar18[0xe];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x54) = puVar18[0xf];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x58) = puVar18[0x10];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x5c) = puVar18[0x11];
                *(undefined4 *)((int)puVar18 + iVar15 + 0x60) = puVar18[0x12];
                *(undefined4 *)((int)puVar18 + iVar15 + 100) = puVar18[0x13];
                puVar18 = puVar18 + 0x1c;
              } while (iVar21 < param_2[0x15]);
            }
            FUN_00dd4940(piVar10);
            FUN_00dd4940(local_38c);
            return;
          }
        }
      }
    }
  }
  return;
}

