// src/boss/bm0403/Bm0403.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00413030..00AB9140, 5 functions

#include "mgrr.h"
#include "Bm0403.h"

// 00413030  Bm0403::vf50  size=2378  [class]
void __fastcall Bm0403::vf50(int *param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  int iStack_58;
  undefined1 local_54 [4];
  undefined1 auStack_50 [4];
  float fStack_4c;
  
  Bm0201::vf50();
  if (((param_1[0x221] != 0) && ((float)param_1[0x2d2] <= 0.0)) &&
     (fVar10 = (float10)FUN_00928de0(),
     fVar10 < (float10)(float)(undefined *)0x0 != (fVar10 == (float10)(float)(undefined *)0x0))) {
    if (param_1[0x2d0] == 0) {
      param_1[0x2d2] = 0x3f000000;
      (**(code **)(*(int *)param_1[0x1ec] + 0x14))(local_54,0);
      if ((*(uint *)param_1[0x221] & 0x4000000) != 0) {
        if (param_1[300] != 0xd0300) {
          FUN_00aa92c0(3);
        }
        FUN_00a8c9b0(0,2,0,0);
        iStack_58 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar8 = 0;
          do {
            pbVar3 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar8) + 0x40);
            if (pbVar3 != (byte *)0x0) {
              pbVar6 = &DAT_0163cd7c;
              do {
                bVar2 = *pbVar3;
                bVar9 = bVar2 < *pbVar6;
                if (bVar2 != *pbVar6) {
LAB_00413136:
                  iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                  goto LAB_0041313b;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar3[1];
                bVar9 = bVar2 < pbVar6[1];
                if (bVar2 != pbVar6[1]) goto LAB_00413136;
                pbVar3 = pbVar3 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar2 != 0);
              iVar4 = 0;
LAB_0041313b:
              if (iVar4 == 0) {
                puVar1 = (uint *)(param_1[200] + 0x38 + iVar8);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
            }
            iStack_58 = iStack_58 + 1;
            iVar8 = iVar8 + 0x70;
          } while (iStack_58 < (short)param_1[0xc9]);
        }
        iVar8 = 0;
        iStack_58 = 0;
        if (0 < (short)param_1[0xc9]) {
          do {
            pbVar3 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar8) + 0x40);
            if (pbVar3 != (byte *)0x0) {
              pbVar6 = &DAT_0163cd70;
              do {
                bVar2 = *pbVar3;
                bVar9 = bVar2 < *pbVar6;
                if (bVar2 != *pbVar6) {
LAB_004131a2:
                  iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                  goto LAB_004131a7;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar3[1];
                bVar9 = bVar2 < pbVar6[1];
                if (bVar2 != pbVar6[1]) goto LAB_004131a2;
                pbVar3 = pbVar3 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar2 != 0);
              iVar4 = 0;
LAB_004131a7:
              if (iVar4 == 0) {
                puVar1 = (uint *)(param_1[200] + 0x38 + iVar8);
                *puVar1 = *puVar1 | 1;
              }
            }
            iStack_58 = iStack_58 + 1;
            iVar8 = iVar8 + 0x70;
          } while (iStack_58 < (short)param_1[0xc9]);
        }
        iVar8 = 0;
        iStack_58 = 0;
        if (0 < (short)param_1[0xc9]) {
          do {
            pbVar3 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar8) + 0x40);
            if (pbVar3 != (byte *)0x0) {
              pbVar6 = &DAT_0163cd64;
              do {
                bVar2 = *pbVar3;
                bVar9 = bVar2 < *pbVar6;
                if (bVar2 != *pbVar6) {
LAB_00413210:
                  iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                  goto LAB_00413215;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar3[1];
                bVar9 = bVar2 < pbVar6[1];
                if (bVar2 != pbVar6[1]) goto LAB_00413210;
                pbVar3 = pbVar3 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar2 != 0);
              iVar4 = 0;
LAB_00413215:
              if (iVar4 == 0) {
                puVar1 = (uint *)(param_1[200] + 0x38 + iVar8);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
            }
            iStack_58 = iStack_58 + 1;
            iVar8 = iVar8 + 0x70;
          } while (iStack_58 < (short)param_1[0xc9]);
        }
        iVar8 = 0;
        iStack_58 = 0;
        if (0 < (short)param_1[0xc9]) {
          do {
            pbVar3 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar8) + 0x40);
            if (pbVar3 != (byte *)0x0) {
              pcVar7 = "bm0300_koware";
              do {
                bVar2 = *pbVar3;
                bVar9 = bVar2 < (byte)*pcVar7;
                if (bVar2 != *pcVar7) {
LAB_00413280:
                  iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                  goto LAB_00413285;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar3[1];
                bVar9 = bVar2 < (byte)pcVar7[1];
                if (bVar2 != pcVar7[1]) goto LAB_00413280;
                pbVar3 = pbVar3 + 2;
                pcVar7 = pcVar7 + 2;
              } while (bVar2 != 0);
              iVar4 = 0;
LAB_00413285:
              if (iVar4 == 0) {
                puVar1 = (uint *)(param_1[200] + 0x38 + iVar8);
                *puVar1 = *puVar1 | 1;
              }
            }
            iStack_58 = iStack_58 + 1;
            iVar8 = iVar8 + 0x70;
          } while (iStack_58 < (short)param_1[0xc9]);
        }
        if (param_1[300] == 0xd0421) {
          iVar8 = 0;
          iStack_58 = 0;
          if (0 < (short)param_1[0xc9]) {
            do {
              pbVar3 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar8) + 0x40);
              if (pbVar3 != (byte *)0x0) {
                pbVar6 = &DAT_0163cd4c;
                do {
                  bVar2 = *pbVar3;
                  bVar9 = bVar2 < *pbVar6;
                  if (bVar2 != *pbVar6) {
LAB_00413300:
                    iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_00413305;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar3[1];
                  bVar9 = bVar2 < pbVar6[1];
                  if (bVar2 != pbVar6[1]) goto LAB_00413300;
                  pbVar3 = pbVar3 + 2;
                  pbVar6 = pbVar6 + 2;
                } while (bVar2 != 0);
                iVar4 = 0;
LAB_00413305:
                if (iVar4 == 0) {
                  puVar1 = (uint *)(param_1[200] + 0x38 + iVar8);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
              }
              iStack_58 = iStack_58 + 1;
              iVar8 = iVar8 + 0x70;
            } while (iStack_58 < (short)param_1[0xc9]);
          }
          iVar8 = 0;
          iStack_58 = 0;
          if (0 < (short)param_1[0xc9]) {
            do {
              pbVar3 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar8) + 0x40);
              if (pbVar3 != (byte *)0x0) {
                pbVar6 = &DAT_0163cd3c;
                do {
                  bVar2 = *pbVar3;
                  bVar9 = bVar2 < *pbVar6;
                  if (bVar2 != *pbVar6) {
LAB_00413370:
                    iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_00413375;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar3[1];
                  bVar9 = bVar2 < pbVar6[1];
                  if (bVar2 != pbVar6[1]) goto LAB_00413370;
                  pbVar3 = pbVar3 + 2;
                  pbVar6 = pbVar6 + 2;
                } while (bVar2 != 0);
                iVar4 = 0;
LAB_00413375:
                if (iVar4 == 0) {
                  puVar1 = (uint *)(param_1[200] + 0x38 + iVar8);
                  *puVar1 = *puVar1 | 1;
                }
              }
              iStack_58 = iStack_58 + 1;
              iVar8 = iVar8 + 0x70;
            } while (iStack_58 < (short)param_1[0xc9]);
          }
        }
        if (param_1[300] == 0xd0422) {
          iVar8 = 0;
          iStack_58 = 0;
          if (0 < (short)param_1[0xc9]) {
            do {
              pbVar3 = *(byte **)(*(int *)(iVar8 + 0x60 + param_1[200]) + 0x40);
              if (pbVar3 != (byte *)0x0) {
                pbVar6 = &DAT_0163cd34;
                do {
                  bVar2 = *pbVar3;
                  bVar9 = bVar2 < *pbVar6;
                  if (bVar2 != *pbVar6) {
LAB_004133f0:
                    iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_004133f5;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar3[1];
                  bVar9 = bVar2 < pbVar6[1];
                  if (bVar2 != pbVar6[1]) goto LAB_004133f0;
                  pbVar3 = pbVar3 + 2;
                  pbVar6 = pbVar6 + 2;
                } while (bVar2 != 0);
                iVar4 = 0;
LAB_004133f5:
                if (iVar4 == 0) {
                  puVar1 = (uint *)(iVar8 + param_1[200] + 0x38);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
              }
              iStack_58 = iStack_58 + 1;
              iVar8 = iVar8 + 0x70;
            } while (iStack_58 < (short)param_1[0xc9]);
          }
          iVar8 = 0;
          iStack_58 = 0;
          if (0 < (short)param_1[0xc9]) {
            do {
              pbVar3 = *(byte **)(*(int *)(iVar8 + 0x60 + param_1[200]) + 0x40);
              if (pbVar3 != (byte *)0x0) {
                pcVar7 = "bm0422_koware";
                do {
                  bVar2 = *pbVar3;
                  bVar9 = bVar2 < (byte)*pcVar7;
                  if (bVar2 != *pcVar7) {
LAB_00413460:
                    iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_00413465;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar3[1];
                  bVar9 = bVar2 < (byte)pcVar7[1];
                  if (bVar2 != pcVar7[1]) goto LAB_00413460;
                  pbVar3 = pbVar3 + 2;
                  pcVar7 = pcVar7 + 2;
                } while (bVar2 != 0);
                iVar4 = 0;
LAB_00413465:
                if (iVar4 == 0) {
                  puVar1 = (uint *)(iVar8 + param_1[200] + 0x38);
                  *puVar1 = *puVar1 | 1;
                }
              }
              iStack_58 = iStack_58 + 1;
              iVar8 = iVar8 + 0x70;
            } while (iStack_58 < (short)param_1[0xc9]);
          }
        }
        (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
        param_1[0x2d1] = 1;
      }
      FUN_0091a1c0();
    }
    param_1[0x2d0] = 1;
  }
  if (((param_1[0x2d0] != 0) && (param_1[0x2d1] == 0)) &&
     ((param_1[0x1ec] != 0 && ((float)param_1[0x2d2] <= 0.0)))) {
    FUN_004066f0();
    (**(code **)(*(int *)param_1[0x1ec] + 0x14))(&iStack_58,0);
    fStack_4c = 0.0;
    FUN_00915860(auStack_50);
    if (fStack_4c != 0.0) {
      if (param_1[300] != 0xd0300) {
        FUN_00aa92c0(3);
      }
      FUN_00a8c9b0(0,2,0,0);
      iVar8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar4 = 0;
        do {
          pbVar3 = *(byte **)(*(int *)(iVar4 + 0x60 + param_1[200]) + 0x40);
          if (pbVar3 != (byte *)0x0) {
            pbVar6 = &DAT_0163cd7c;
            do {
              bVar2 = *pbVar3;
              bVar9 = bVar2 < *pbVar6;
              if (bVar2 != *pbVar6) {
LAB_004135c0:
                iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_004135c5;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar3[1];
              bVar9 = bVar2 < pbVar6[1];
              if (bVar2 != pbVar6[1]) goto LAB_004135c0;
              pbVar3 = pbVar3 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar2 != 0);
            iVar5 = 0;
LAB_004135c5:
            if (iVar5 == 0) {
              puVar1 = (uint *)(iVar4 + param_1[200] + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 0x70;
        } while (iVar8 < (short)param_1[0xc9]);
      }
      iVar8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar4 = 0;
        do {
          pbVar3 = *(byte **)(*(int *)(iVar4 + 0x60 + param_1[200]) + 0x40);
          if (pbVar3 != (byte *)0x0) {
            pbVar6 = &DAT_0163cd70;
            do {
              bVar2 = *pbVar3;
              bVar9 = bVar2 < *pbVar6;
              if (bVar2 != *pbVar6) {
LAB_00413630:
                iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_00413635;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar3[1];
              bVar9 = bVar2 < pbVar6[1];
              if (bVar2 != pbVar6[1]) goto LAB_00413630;
              pbVar3 = pbVar3 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar2 != 0);
            iVar5 = 0;
LAB_00413635:
            if (iVar5 == 0) {
              puVar1 = (uint *)(iVar4 + param_1[200] + 0x38);
              *puVar1 = *puVar1 | 1;
            }
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 0x70;
        } while (iVar8 < (short)param_1[0xc9]);
      }
      iVar8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar4 = 0;
        do {
          pbVar3 = *(byte **)(*(int *)(iVar4 + 0x60 + param_1[200]) + 0x40);
          if (pbVar3 != (byte *)0x0) {
            pbVar6 = &DAT_0163cd64;
            do {
              bVar2 = *pbVar3;
              bVar9 = bVar2 < *pbVar6;
              if (bVar2 != *pbVar6) {
LAB_00413698:
                iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_0041369d;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar3[1];
              bVar9 = bVar2 < pbVar6[1];
              if (bVar2 != pbVar6[1]) goto LAB_00413698;
              pbVar3 = pbVar3 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar2 != 0);
            iVar5 = 0;
LAB_0041369d:
            if (iVar5 == 0) {
              puVar1 = (uint *)(iVar4 + param_1[200] + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 0x70;
        } while (iVar8 < (short)param_1[0xc9]);
      }
      iVar8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar4 = 0;
        do {
          pbVar3 = *(byte **)(*(int *)(iVar4 + 0x60 + param_1[200]) + 0x40);
          if (pbVar3 != (byte *)0x0) {
            pcVar7 = "bm0300_koware";
            do {
              bVar2 = *pbVar3;
              bVar9 = bVar2 < (byte)*pcVar7;
              if (bVar2 != *pcVar7) {
LAB_00413700:
                iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_00413705;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar3[1];
              bVar9 = bVar2 < (byte)pcVar7[1];
              if (bVar2 != pcVar7[1]) goto LAB_00413700;
              pbVar3 = pbVar3 + 2;
              pcVar7 = pcVar7 + 2;
            } while (bVar2 != 0);
            iVar5 = 0;
LAB_00413705:
            if (iVar5 == 0) {
              puVar1 = (uint *)(iVar4 + param_1[200] + 0x38);
              *puVar1 = *puVar1 | 1;
            }
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 0x70;
        } while (iVar8 < (short)param_1[0xc9]);
      }
      if (param_1[300] == 0xd0421) {
        iVar8 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar4 = 0;
          do {
            pbVar3 = *(byte **)(*(int *)(iVar4 + 0x60 + param_1[200]) + 0x40);
            if (pbVar3 != (byte *)0x0) {
              pbVar6 = &DAT_0163cd4c;
              do {
                bVar2 = *pbVar3;
                bVar9 = bVar2 < *pbVar6;
                if (bVar2 != *pbVar6) {
LAB_00413778:
                  iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                  goto LAB_0041377d;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar3[1];
                bVar9 = bVar2 < pbVar6[1];
                if (bVar2 != pbVar6[1]) goto LAB_00413778;
                pbVar3 = pbVar3 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar2 != 0);
              iVar5 = 0;
LAB_0041377d:
              if (iVar5 == 0) {
                puVar1 = (uint *)(iVar4 + param_1[200] + 0x38);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
            }
            iVar8 = iVar8 + 1;
            iVar4 = iVar4 + 0x70;
          } while (iVar8 < (short)param_1[0xc9]);
        }
        iVar8 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar4 = 0;
          do {
            pbVar3 = *(byte **)(*(int *)(iVar4 + 0x60 + param_1[200]) + 0x40);
            if (pbVar3 != (byte *)0x0) {
              pbVar6 = &DAT_0163cd3c;
              do {
                bVar2 = *pbVar3;
                bVar9 = bVar2 < *pbVar6;
                if (bVar2 != *pbVar6) {
LAB_004137e0:
                  iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                  goto LAB_004137e5;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar3[1];
                bVar9 = bVar2 < pbVar6[1];
                if (bVar2 != pbVar6[1]) goto LAB_004137e0;
                pbVar3 = pbVar3 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar2 != 0);
              iVar5 = 0;
LAB_004137e5:
              if (iVar5 == 0) {
                puVar1 = (uint *)(iVar4 + param_1[200] + 0x38);
                *puVar1 = *puVar1 | 1;
              }
            }
            iVar8 = iVar8 + 1;
            iVar4 = iVar4 + 0x70;
          } while (iVar8 < (short)param_1[0xc9]);
        }
      }
      if (param_1[300] == 0xd0422) {
        iVar8 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar4 = 0;
          do {
            pbVar3 = *(byte **)(*(int *)(iVar4 + 0x60 + param_1[200]) + 0x40);
            if (pbVar3 != (byte *)0x0) {
              pbVar6 = &DAT_0163cd34;
              do {
                bVar2 = *pbVar3;
                bVar9 = bVar2 < *pbVar6;
                if (bVar2 != *pbVar6) {
LAB_00413858:
                  iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                  goto LAB_0041385d;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar3[1];
                bVar9 = bVar2 < pbVar6[1];
                if (bVar2 != pbVar6[1]) goto LAB_00413858;
                pbVar3 = pbVar3 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar2 != 0);
              iVar5 = 0;
LAB_0041385d:
              if (iVar5 == 0) {
                puVar1 = (uint *)(iVar4 + param_1[200] + 0x38);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
            }
            iVar8 = iVar8 + 1;
            iVar4 = iVar4 + 0x70;
          } while (iVar8 < (short)param_1[0xc9]);
        }
        iVar8 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar4 = 0;
          do {
            pbVar3 = *(byte **)(*(int *)(iVar4 + 0x60 + param_1[200]) + 0x40);
            if (pbVar3 != (byte *)0x0) {
              pcVar7 = "bm0422_koware";
              do {
                bVar2 = *pbVar3;
                bVar9 = bVar2 < (byte)*pcVar7;
                if (bVar2 != *pcVar7) {
LAB_004138c0:
                  iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                  goto LAB_004138c5;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar3[1];
                bVar9 = bVar2 < (byte)pcVar7[1];
                if (bVar2 != pcVar7[1]) goto LAB_004138c0;
                pbVar3 = pbVar3 + 2;
                pcVar7 = pcVar7 + 2;
              } while (bVar2 != 0);
              iVar5 = 0;
LAB_004138c5:
              if (iVar5 == 0) {
                puVar1 = (uint *)(iVar4 + param_1[200] + 0x38);
                *puVar1 = *puVar1 | 1;
              }
            }
            iVar8 = iVar8 + 1;
            iVar4 = iVar4 + 0x70;
          } while (iVar8 < (short)param_1[0xc9]);
        }
      }
      FUN_0091a1c0();
      (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
      param_1[0x2d1] = 1;
    }
    FUN_00406760();
  }
  if ((0.0 < (float)param_1[0x2d2]) && (param_1[0x2d1] == 0)) {
    fVar10 = (float10)(**(code **)(*param_1 + 0x24))();
    param_1[0x2d2] = (int)(float)((float10)(float)param_1[0x2d2] - fVar10 * (float10)0.016666668);
    (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(1);
    if ((float)param_1[0x2d2] <= 0.0) {
      param_1[0x2d2] = 0;
      return;
    }
  }
  return;
}

// 00413990  Bm0403::vf40  size=358  [class]
undefined4 __fastcall Bm0403::vf40(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  
  iVar3 = Bm6041::vf40();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x884) != 0) {
    FUN_00928d50(8);
  }
  *(undefined4 *)(param_1 + 0xb48) = 0;
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb44) = 0;
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f18c0(0x200000);
    FUN_008f1600(0x40000000);
    FUN_008f1600(0x20);
  }
  if ((*(int *)(param_1 + 0x4b0) == 0xd0300) && (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f1600(2);
  }
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar8 = 0;
    do {
      pbVar4 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar8) + 0x40);
      if (pbVar4 != (byte *)0x0) {
        pbVar6 = &DAT_0163cd70;
        do {
          bVar2 = *pbVar4;
          bVar9 = bVar2 < *pbVar6;
          if (bVar2 != *pbVar6) {
LAB_00413a60:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00413a65;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar9 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_00413a60;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_00413a65:
        if (iVar5 == 0) {
          puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar8);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + 0x70;
    } while (iVar3 < *(short *)(param_1 + 0x324));
  }
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar8 = 0;
    do {
      pbVar4 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar8) + 0x40);
      if (pbVar4 != (byte *)0x0) {
        pcVar7 = "bm0300_koware";
        do {
          bVar2 = *pbVar4;
          bVar9 = bVar2 < (byte)*pcVar7;
          if (bVar2 != *pcVar7) {
LAB_00413ad0:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00413ad5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar9 = bVar2 < (byte)pcVar7[1];
          if (bVar2 != pcVar7[1]) goto LAB_00413ad0;
          pbVar4 = pbVar4 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_00413ad5:
        if (iVar5 == 0) {
          puVar1 = (uint *)(*(int *)(param_1 + 800) + iVar8 + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + 0x70;
    } while (iVar3 < *(short *)(param_1 + 0x324));
  }
  return 1;
}

// 00AB0500  Bm0403::Bm0403  size=18  [class]
undefined4 * __fastcall Bm0403::Bm0403(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB0520  Bm0403::vf04  size=6  [class]
undefined * Bm0403::vf04(void)

{
  return &DAT_01b34bd8;
}

// 00AB9140  Bm0403::vf00  size=43  [class]
undefined4 __thiscall Bm0403::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

