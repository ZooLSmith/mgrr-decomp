// src/misc/cMeshPattern.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A09C60..00A0A360, 5 functions

#include "mgrr.h"

// 00A09C60  cMeshPattern::getPatternElem  size=121  [class]
int __fastcall cMeshPattern::getPatternElem(int *param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  iVar2 = (**(code **)(*param_1 + 0x18))(iVar1,"PatternList");
  if (iVar2 == -1) {
    iVar2 = iVar1;
    if (unaff_EBX == -1) {
      return -1;
    }
  }
  else if (unaff_EBX == -1) {
    iVar2 = (**(code **)(*param_1 + 0x18))(iVar1,"Default");
    return iVar2;
  }
  iVar2 = (**(code **)(*param_1 + 0x14))(iVar2,unaff_EBX);
  if (iVar2 == -1) {
    FUN_00dd5650(&DAT_0165c6b4,unaff_EBX);
  }
  return iVar2;
}

// 00A09CE0  FUN_00a09ce0  size=604  [callgraph]
void __thiscall FUN_00a09ce0(int *param_1,byte *param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int *unaff_EBP;
  bool bVar11;
  int unaff_retaddr;
  int *local_10;
  int iStack_c;
  
  iVar3 = (**(code **)(*param_1 + 8))();
  if (((iVar3 != 0) && (iStack_c = cMeshPattern::getPatternElem(param_3), iStack_c != -1)) &&
     (iVar3 = (**(code **)(*param_1 + 0x10))(iStack_c), local_10 = param_1, 0 < iVar3)) {
    do {
      uVar4 = (**(code **)(*param_1 + 0x14))(iStack_c,local_10);
      iVar5 = (**(code **)(*param_1 + 0x9c))(uVar4,&DAT_0164d4cc);
      if (iVar5 == -1) {
        iStack_c = 0;
      }
      else {
        iStack_c = (**(code **)(*param_1 + 0x138))(iVar5);
      }
      iVar5 = (**(code **)(*param_1 + 0x9c))(uVar4,"visible");
      if (iVar5 == -1) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = (char *)(**(code **)(*param_1 + 0x138))(iVar5);
      }
      pbVar10 = &DAT_0165c704;
      pbVar8 = param_2;
      do {
        bVar2 = *pbVar8;
        bVar11 = bVar2 < *pbVar10;
        if (bVar2 != *pbVar10) {
LAB_00a09de0:
          iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00a09de5;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar8[1];
        bVar11 = bVar2 < pbVar10[1];
        if (bVar2 != pbVar10[1]) goto LAB_00a09de0;
        pbVar8 = pbVar8 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_00a09de5:
      if (iVar5 == 0) {
        iVar5 = 0;
        if (*pcVar6 == '0') {
          if (0 < *(short *)(unaff_retaddr + 0x324)) {
            iVar9 = 0;
            iVar5 = 0;
            do {
              puVar1 = (uint *)(*(int *)(unaff_retaddr + 800) + 0x38 + iVar9);
              *puVar1 = *puVar1 & 0xfffffffe;
              iVar5 = iVar5 + 1;
              iVar9 = iVar9 + 0x70;
            } while (iVar5 < *(short *)(unaff_retaddr + 0x324));
          }
        }
        else if (0 < *(short *)(unaff_retaddr + 0x324)) {
          iVar9 = 0;
          do {
            puVar1 = (uint *)(*(int *)(unaff_retaddr + 800) + 0x38 + iVar5);
            *puVar1 = *puVar1 | 1;
            iVar9 = iVar9 + 1;
            iVar5 = iVar5 + 0x70;
          } while (iVar9 < *(short *)(unaff_retaddr + 0x324));
        }
      }
      else {
        iVar5 = 0;
        param_1 = unaff_EBP;
        if (*pcVar6 == '0') {
          if (0 < *(short *)(unaff_retaddr + 0x324)) {
            iVar9 = 0;
            do {
              pbVar8 = *(byte **)(*(int *)(*(int *)(unaff_retaddr + 800) + 0x60 + iVar9) + 0x40);
              pbVar10 = param_2;
              if (pbVar8 != (byte *)0x0) {
                do {
                  bVar2 = *pbVar8;
                  bVar11 = bVar2 < *pbVar10;
                  if (bVar2 != *pbVar10) {
LAB_00a09f08:
                    iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_00a09f0d;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar11 = bVar2 < pbVar10[1];
                  if (bVar2 != pbVar10[1]) goto LAB_00a09f08;
                  pbVar8 = pbVar8 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar2 != 0);
                iVar7 = 0;
LAB_00a09f0d:
                if (iVar7 == 0) {
                  puVar1 = (uint *)(*(int *)(unaff_retaddr + 800) + 0x38 + iVar9);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
              }
              iVar5 = iVar5 + 1;
              iVar9 = iVar9 + 0x70;
            } while (iVar5 < *(short *)(unaff_retaddr + 0x324));
          }
        }
        else if (0 < *(short *)(unaff_retaddr + 0x324)) {
          iVar9 = 0;
          do {
            pbVar8 = *(byte **)(*(int *)(*(int *)(unaff_retaddr + 800) + 0x60 + iVar9) + 0x40);
            pbVar10 = param_2;
            if (pbVar8 != (byte *)0x0) {
              do {
                bVar2 = *pbVar8;
                bVar11 = bVar2 < *pbVar10;
                if (bVar2 != *pbVar10) {
LAB_00a09ea8:
                  iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00a09ead;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar8[1];
                bVar11 = bVar2 < pbVar10[1];
                if (bVar2 != pbVar10[1]) goto LAB_00a09ea8;
                pbVar8 = pbVar8 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar2 != 0);
              iVar7 = 0;
LAB_00a09ead:
              if (iVar7 == 0) {
                puVar1 = (uint *)(*(int *)(unaff_retaddr + 800) + iVar9 + 0x38);
                *puVar1 = *puVar1 | 1;
              }
            }
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + 0x70;
          } while (iVar5 < *(short *)(unaff_retaddr + 0x324));
        }
      }
      local_10 = (int *)((int)local_10 + 1);
    } while ((int)local_10 < iVar3);
  }
  return;
}

// 00A09F50  FUN_00a09f50  size=604  [callgraph]
void __thiscall FUN_00a09f50(int *param_1,byte *param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int *unaff_EBP;
  bool bVar11;
  int unaff_retaddr;
  int *local_10;
  int iStack_c;
  
  iVar3 = (**(code **)(*param_1 + 8))();
  if (((iVar3 != 0) && (iStack_c = cMeshPattern::getPatternElem(param_3), iStack_c != -1)) &&
     (iVar3 = (**(code **)(*param_1 + 0x10))(iStack_c), local_10 = param_1, 0 < iVar3)) {
    do {
      uVar4 = (**(code **)(*param_1 + 0x14))(iStack_c,local_10);
      iVar5 = (**(code **)(*param_1 + 0x9c))(uVar4,&DAT_0164d4cc);
      if (iVar5 == -1) {
        iStack_c = 0;
      }
      else {
        iStack_c = (**(code **)(*param_1 + 0x138))(iVar5);
      }
      iVar5 = (**(code **)(*param_1 + 0x9c))(uVar4,"visible");
      if (iVar5 == -1) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = (char *)(**(code **)(*param_1 + 0x138))(iVar5);
      }
      pbVar10 = &DAT_0165c704;
      pbVar8 = param_2;
      do {
        bVar2 = *pbVar8;
        bVar11 = bVar2 < *pbVar10;
        if (bVar2 != *pbVar10) {
LAB_00a0a050:
          iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00a0a055;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar8[1];
        bVar11 = bVar2 < pbVar10[1];
        if (bVar2 != pbVar10[1]) goto LAB_00a0a050;
        pbVar8 = pbVar8 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_00a0a055:
      if (iVar5 == 0) {
        iVar5 = 0;
        if (*pcVar6 == '0') {
          if (0 < *(short *)(unaff_retaddr + 0x324)) {
            iVar9 = 0;
            iVar5 = 0;
            do {
              puVar1 = (uint *)(*(int *)(unaff_retaddr + 800) + 0x38 + iVar9);
              *puVar1 = *puVar1 | 1;
              iVar5 = iVar5 + 1;
              iVar9 = iVar9 + 0x70;
            } while (iVar5 < *(short *)(unaff_retaddr + 0x324));
          }
        }
        else if (0 < *(short *)(unaff_retaddr + 0x324)) {
          iVar9 = 0;
          do {
            puVar1 = (uint *)(*(int *)(unaff_retaddr + 800) + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
            iVar9 = iVar9 + 1;
            iVar5 = iVar5 + 0x70;
          } while (iVar9 < *(short *)(unaff_retaddr + 0x324));
        }
      }
      else {
        iVar5 = 0;
        param_1 = unaff_EBP;
        if (*pcVar6 == '0') {
          if (0 < *(short *)(unaff_retaddr + 0x324)) {
            iVar9 = 0;
            do {
              pbVar8 = *(byte **)(*(int *)(*(int *)(unaff_retaddr + 800) + 0x60 + iVar9) + 0x40);
              pbVar10 = param_2;
              if (pbVar8 != (byte *)0x0) {
                do {
                  bVar2 = *pbVar8;
                  bVar11 = bVar2 < *pbVar10;
                  if (bVar2 != *pbVar10) {
LAB_00a0a178:
                    iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_00a0a17d;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar11 = bVar2 < pbVar10[1];
                  if (bVar2 != pbVar10[1]) goto LAB_00a0a178;
                  pbVar8 = pbVar8 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar2 != 0);
                iVar7 = 0;
LAB_00a0a17d:
                if (iVar7 == 0) {
                  puVar1 = (uint *)(*(int *)(unaff_retaddr + 800) + 0x38 + iVar9);
                  *puVar1 = *puVar1 | 1;
                }
              }
              iVar5 = iVar5 + 1;
              iVar9 = iVar9 + 0x70;
            } while (iVar5 < *(short *)(unaff_retaddr + 0x324));
          }
        }
        else if (0 < *(short *)(unaff_retaddr + 0x324)) {
          iVar9 = 0;
          do {
            pbVar8 = *(byte **)(*(int *)(*(int *)(unaff_retaddr + 800) + 0x60 + iVar9) + 0x40);
            pbVar10 = param_2;
            if (pbVar8 != (byte *)0x0) {
              do {
                bVar2 = *pbVar8;
                bVar11 = bVar2 < *pbVar10;
                if (bVar2 != *pbVar10) {
LAB_00a0a118:
                  iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00a0a11d;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar8[1];
                bVar11 = bVar2 < pbVar10[1];
                if (bVar2 != pbVar10[1]) goto LAB_00a0a118;
                pbVar8 = pbVar8 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar2 != 0);
              iVar7 = 0;
LAB_00a0a11d:
              if (iVar7 == 0) {
                puVar1 = (uint *)(*(int *)(unaff_retaddr + 800) + iVar9 + 0x38);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
            }
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + 0x70;
          } while (iVar5 < *(short *)(unaff_retaddr + 0x324));
        }
      }
      local_10 = (int *)((int)local_10 + 1);
    } while ((int)local_10 < iVar3);
  }
  return;
}

// 00A0A1C0  FUN_00a0a1c0  size=387  [callgraph]
void __thiscall FUN_00a0a1c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int *piVar11;
  int unaff_ESI;
  bool bVar12;
  int unaff_retaddr;
  int *piStack_10;
  
  iVar3 = (**(code **)(*param_1 + 8))();
  if ((iVar3 != 0) &&
     (piVar4 = (int *)cMeshPattern::getPatternElem(param_3), piVar4 != (int *)0xffffffff)) {
    iVar3 = 0;
    piStack_10 = (int *)0x0;
    iVar5 = (**(code **)(*param_1 + 0x10))(piVar4);
    piVar11 = piVar4;
    if (0 < iVar5) {
      do {
        uVar6 = (**(code **)(*param_1 + 0x14))(piVar11,iVar3);
        iVar7 = (**(code **)(*param_1 + 0x9c))(uVar6,&DAT_0164d4cc);
        if (iVar7 == -1) {
          param_2 = (byte *)0x0;
        }
        else {
          param_2 = (byte *)(**(code **)(*param_1 + 0x138))(iVar7);
        }
        pbVar10 = &DAT_0165c704;
        pbVar8 = param_2;
        do {
          bVar2 = *pbVar8;
          bVar12 = bVar2 < *pbVar10;
          if (bVar2 != *pbVar10) {
LAB_00a0a290:
            iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00a0a295;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar8[1];
          bVar12 = bVar2 < pbVar10[1];
          if (bVar2 != pbVar10[1]) goto LAB_00a0a290;
          pbVar8 = pbVar8 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar2 != 0);
        iVar7 = 0;
LAB_00a0a295:
        if (iVar7 == 0) {
          iVar7 = 0;
          if (0 < *(short *)(unaff_retaddr + 0x324)) {
            iVar9 = 0;
            do {
              puVar1 = (uint *)(*(int *)(unaff_retaddr + 800) + 0x38 + iVar7);
              *puVar1 = *puVar1 | 1;
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 0x70;
            } while (iVar9 < *(short *)(unaff_retaddr + 0x324));
          }
        }
        else {
          iVar7 = 0;
          if (0 < *(short *)(unaff_retaddr + 0x324)) {
            iVar9 = 0;
            do {
              pbVar8 = *(byte **)(*(int *)(*(int *)(unaff_retaddr + 800) + 0x60 + iVar9) + 0x40);
              pbVar10 = param_2;
              if (pbVar8 != (byte *)0x0) {
                do {
                  bVar2 = *pbVar8;
                  bVar12 = bVar2 < *pbVar10;
                  if (bVar2 != *pbVar10) {
LAB_00a0a315:
                    iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                    goto LAB_00a0a31a;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar12 = bVar2 < pbVar10[1];
                  if (bVar2 != pbVar10[1]) goto LAB_00a0a315;
                  pbVar8 = pbVar8 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar2 != 0);
                iVar3 = 0;
LAB_00a0a31a:
                if (iVar3 == 0) {
                  puVar1 = (uint *)(*(int *)(unaff_retaddr + 800) + 0x38 + iVar9);
                  *puVar1 = *puVar1 | 1;
                }
              }
              iVar7 = iVar7 + 1;
              iVar9 = iVar9 + 0x70;
              param_1 = piVar4;
              iVar3 = unaff_ESI;
            } while (iVar7 < *(short *)(unaff_retaddr + 0x324));
          }
        }
        iVar3 = iVar3 + 1;
        piVar11 = piStack_10;
        unaff_ESI = iVar3;
      } while (iVar3 < iVar5);
    }
  }
  return;
}

// 00A0A360  FUN_00a0a360  size=387  [callgraph]
void __thiscall FUN_00a0a360(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  int unaff_ESI;
  bool bVar12;
  int unaff_retaddr;
  int *piStack_10;
  
  iVar3 = (**(code **)(*param_1 + 8))();
  if ((iVar3 != 0) &&
     (piVar4 = (int *)cMeshPattern::getPatternElem(param_3), piVar4 != (int *)0xffffffff)) {
    iVar11 = 0;
    piStack_10 = (int *)0x0;
    iVar3 = (**(code **)(*param_1 + 0x10))(piVar4);
    piVar10 = piVar4;
    if (0 < iVar3) {
      do {
        uVar5 = (**(code **)(*param_1 + 0x14))(piVar10,iVar11);
        iVar11 = (**(code **)(*param_1 + 0x9c))(uVar5,&DAT_0164d4cc);
        if (iVar11 == -1) {
          param_2 = (byte *)0x0;
        }
        else {
          param_2 = (byte *)(**(code **)(*param_1 + 0x138))(iVar11);
        }
        pbVar9 = &DAT_0165c704;
        pbVar6 = param_2;
        do {
          bVar2 = *pbVar6;
          bVar12 = bVar2 < *pbVar9;
          if (bVar2 != *pbVar9) {
LAB_00a0a430:
            iVar11 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00a0a435;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar12 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_00a0a430;
          pbVar6 = pbVar6 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar2 != 0);
        iVar11 = 0;
LAB_00a0a435:
        if (iVar11 == 0) {
          iVar11 = 0;
          if (0 < *(short *)(unaff_retaddr + 0x324)) {
            iVar7 = 0;
            do {
              puVar1 = (uint *)(*(int *)(unaff_retaddr + 800) + 0x38 + iVar11);
              *puVar1 = *puVar1 & 0xfffffffe;
              iVar7 = iVar7 + 1;
              iVar11 = iVar11 + 0x70;
            } while (iVar7 < *(short *)(unaff_retaddr + 0x324));
          }
        }
        else {
          iVar11 = 0;
          if (0 < *(short *)(unaff_retaddr + 0x324)) {
            iVar7 = 0;
            do {
              pbVar6 = *(byte **)(*(int *)(*(int *)(unaff_retaddr + 800) + 0x60 + iVar7) + 0x40);
              pbVar9 = param_2;
              if (pbVar6 != (byte *)0x0) {
                do {
                  bVar2 = *pbVar6;
                  bVar12 = bVar2 < *pbVar9;
                  if (bVar2 != *pbVar9) {
LAB_00a0a4b5:
                    iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                    goto LAB_00a0a4ba;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar6[1];
                  bVar12 = bVar2 < pbVar9[1];
                  if (bVar2 != pbVar9[1]) goto LAB_00a0a4b5;
                  pbVar6 = pbVar6 + 2;
                  pbVar9 = pbVar9 + 2;
                } while (bVar2 != 0);
                iVar8 = 0;
LAB_00a0a4ba:
                if (iVar8 == 0) {
                  puVar1 = (uint *)(*(int *)(unaff_retaddr + 800) + 0x38 + iVar7);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
              }
              iVar11 = iVar11 + 1;
              iVar7 = iVar7 + 0x70;
              param_1 = piVar4;
            } while (iVar11 < *(short *)(unaff_retaddr + 0x324));
          }
        }
        iVar11 = unaff_ESI + 1;
        piVar10 = piStack_10;
        unaff_ESI = iVar11;
      } while (iVar11 < iVar3);
    }
  }
  return;
}

