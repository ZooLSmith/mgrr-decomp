// src/misc/DoorBehaviorBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004090F0..00ABAB00, 20 functions

#include "mgrr.h"
#include "DoorBehaviorBase.h"

// 004090F0  DoorBehaviorBase::vf94  size=7  [class]
undefined4 __fastcall DoorBehaviorBase::vf94(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb44);
}

// 00409110  FUN_00409110  size=41  [between]
void __thiscall FUN_00409110(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x10;
      return;
    }
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xffffffef;
  }
  return;
}

// 00409140  DoorBehaviorBase::vf44  size=54  [class]
void __fastcall DoorBehaviorBase::vf44(int param_1)

{
  *(undefined4 *)(param_1 + 0xb30) = 0;
  if (*(char *)(param_1 + 0xb34) == '\0') {
    FUN_00c48070(*(undefined4 *)(param_1 + 0x4f0));
  }
  FUN_00a944d0();
  BehaviorBgBase::vf44();
  return;
}

// 00409180  DoorBehaviorBase::vf0C  size=27  [class]
void __fastcall DoorBehaviorBase::vf0C(int param_1)

{
  if (*(char *)(param_1 + 0xb34) == '\0') {
    FUN_00c48070(*(undefined4 *)(param_1 + 0x4f0));
  }
  return;
}

// 004091A0  DoorBehaviorBase::vf48  size=178  [class]
void __fastcall DoorBehaviorBase::vf48(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xb35) == '\0') {
    FUN_00c47e40(*(undefined4 *)(param_1 + 0x4f0));
    if ((DAT_018b9174 == 0xd40) && (*(int *)(param_1 + 0x4b0) == 0xf0d60)) {
      FUN_00c47a30(*(undefined4 *)(param_1 + 0x4ec),0);
    }
    *(undefined1 *)(param_1 + 0xb35) = 1;
  }
  if (((*(int *)(param_1 + 0x4b0) == 0xf0d42) && (*(char *)(param_1 + 0xb40) == '\0')) &&
     (DAT_018b9174 == 0x420)) {
    iVar1 = FUN_00d4f120("P420_GATE_OPEN",1);
    if (iVar1 != 0) {
      FUN_00a8ca50(1,0,0);
      FUN_00aa92c0(2);
      *(undefined1 *)(param_1 + 0xb40) = 1;
    }
  }
  BehaviorBgBase::vf48();
  return;
}

// 00409260  FUN_00409260  size=505  [between]
void __fastcall FUN_00409260(int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_4;
  
  local_4 = param_1;
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_00d467a0();
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x4b0) == 0xf0d60) {
        FUN_00a8ca80(0,0x3f800000,0);
        FUN_00aa92c0(0xb);
      }
      if (*(int *)(param_1 + 0x4b0) == 0xf0d61) {
        FUN_00a8ca80(0,0x3f800000,0);
      }
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00a9e290(&DAT_0163b5e8,0,0,0x3f800000,0x8000000,*(undefined4 *)(param_1 + 0xb38),0x3f800000)
    ;
    fVar2 = (float10)0;
    if (*(int *)(param_1 + 0x628) == 2) {
      fVar2 = (float10)FUN_00a95680(0);
      fVar2 = fVar2 - (float10)*(float *)(param_1 + 0xb38);
    }
    FUN_00a95e60(0,(float)fVar2);
    fVar2 = (float10)FUN_00a958c0(0);
    *(float *)(param_1 + 0xb38) = (float)fVar2;
    if ((*(int **)(param_1 + 0x7b0) != (int *)0x0) && (*(int *)(param_1 + 0x4b0) != 0xf0d60)) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x2c))(&local_4,"_000_closed");
      FUN_00916360();
    }
    *(undefined4 *)(param_1 + 0xb3c) = 1;
    *(undefined4 *)(param_1 + 0x624) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x61c) == 1) {
    fVar2 = (float10)FUN_00a958c0(0);
    *(float *)(param_1 + 0xb38) = (float)fVar2;
    if (((*(int *)(param_1 + 0x4b0) == 0xf0d60) && (*(int *)(param_1 + 0x624) == 0)) &&
       (*(int *)(param_1 + 0x7b0) != 0)) {
      fVar2 = (float10)FUN_00a958c0(0);
      if ((float10)1.0 <= fVar2) {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 0x2c))(&local_4,"_000_closed");
        FUN_00916360();
        *(undefined4 *)(param_1 + 0x624) = 1;
      }
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 1) {
      fVar2 = (float10)FUN_00a958c0(0);
      *(float *)(param_1 + 0xb38) = (float)fVar2;
      FUN_00a8caf0(0,0,0,0);
      FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0,0);
    }
  }
  *(undefined4 *)(param_1 + 0xb3c) = 1;
  return;
}

// 00409460  FUN_00409460  size=479  [between]
void __fastcall FUN_00409460(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x187] == 1) {
      fVar3 = (float10)FUN_00a958c0(0);
      param_1[0x2ce] = (int)(float)fVar3;
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 1) {
        fVar3 = (float10)FUN_00a958c0(0);
        param_1[0x2ce] = (int)(float)fVar3;
        FUN_00a8caf0(0,0,0,0);
        FUN_00a9e290(&DAT_0163bbb8,0,0,0x3f800000,0,0,0);
      }
    }
    goto LAB_00409633;
  }
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    if (param_1[300] == 0xf0d60) {
      FUN_00a8ca80(0,0,0);
      if (DAT_018b9174 == 0xd50) {
        piVar2 = (int *)FUN_00a6e640();
        iVar1 = (**(code **)(*piVar2 + 0x24))(0xd,1,2);
        if (iVar1 == 0) goto LAB_004094d7;
        uVar4 = 0xc;
      }
      else {
LAB_004094d7:
        uVar4 = 10;
      }
      FUN_00aa92c0(uVar4);
    }
    if (param_1[300] == 0xf0d61) {
      FUN_00a8ca80(0,0,0);
      FUN_00aa92c0(0xc);
    }
  }
  if (param_1[300] == 0xf0d09) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x3f800000;
    (**(code **)(*param_1 + 0x6c))(&local_20);
  }
  param_1[0x187] = param_1[0x187] + 1;
  FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,param_1[0x2ce],0x3f800000);
  fVar3 = (float10)0;
  if (param_1[0x18a] == 1) {
    fVar3 = (float10)FUN_00a95680(0);
    fVar3 = fVar3 - (float10)(float)param_1[0x2ce];
  }
  FUN_00a95e60(0,(float)fVar3);
  fVar3 = (float10)FUN_00a958c0(0);
  param_1[0x2ce] = (int)(float)fVar3;
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1ec] + 0x2c))(auStack_24,"_000_closed");
    FUN_0091a8a0();
    param_1[0x2cf] = 0;
    return;
  }
LAB_00409633:
  param_1[0x2cf] = 0;
  return;
}

// 00409640  DoorBehaviorBase::vf1C  size=98  [class]
void __fastcall DoorBehaviorBase::vf1C(int param_1)

{
  int iVar1;
  int local_4;
  
  local_4 = param_1;
  Bh0056::vf1C();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    iVar1 = FUN_00c47c30(*(undefined4 *)(param_1 + 0x4ec));
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x2c))(&local_4);
      FUN_0091a8a0();
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x2c))(&local_4,"_000_closed");
    FUN_00916360();
  }
  return;
}

// 004096B0  FUN_004096b0  size=216  [between]
void __fastcall FUN_004096b0(int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_4;
  
  local_4 = param_1;
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x4b0) == 0xf0d60) {
      FUN_00a8ca80(0,0,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0xf0d61) {
      FUN_00a8ca80(0,0,0);
    }
  }
  fVar2 = (float10)FUN_00a958c0(0);
  *(float *)(param_1 + 0xb38) = (float)fVar2;
  FUN_00a8caf0(0,0,0,0);
  FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x2c))(&local_4,"_000_closed");
    FUN_00916360();
  }
  *(undefined4 *)(param_1 + 0xb3c) = 1;
  return;
}

// 00409790  FUN_00409790  size=357  [between]
void __fastcall FUN_00409790(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_00d467a0();
  if (iVar1 == 0) goto LAB_00409843;
  if (param_1[300] == 0xf0d60) {
    FUN_00a8ca80(0,0,0);
    FUN_00a8ca80(0,0,0);
    if (DAT_018b9174 == 0xd50) {
      piVar2 = (int *)FUN_00a6e640();
      iVar1 = (**(code **)(*piVar2 + 0x24))(0xd,1,2);
      if (iVar1 == 0) goto LAB_00409810;
      uVar4 = 0xc;
    }
    else {
LAB_00409810:
      uVar4 = 10;
    }
    FUN_00aa92c0(uVar4);
  }
  if (param_1[300] == 0xf0d61) {
    FUN_00a8ca80(0,0,0);
    FUN_00aa92c0(0xc);
  }
LAB_00409843:
  if (param_1[300] == 0xf0d09) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x3f800000;
    (**(code **)(*param_1 + 0x6c))(&local_20);
  }
  fVar3 = (float10)FUN_00a958c0(0);
  param_1[0x2ce] = (int)(float)fVar3;
  FUN_00a8caf0(0,0,0,0);
  FUN_00a9e290(&DAT_0163bbb8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1ec] + 0x2c))(auStack_24,"_000_closed");
    FUN_0091a8a0();
  }
  param_1[0x2cf] = 0;
  return;
}

// 00409900  DoorBehaviorBase::vf30  size=44  [class]
void __fastcall DoorBehaviorBase::vf30(int param_1)

{
  if ((*(int *)(param_1 + 0xb3c) == 0) && (*(int *)(param_1 + 0x4b0) == 0xf0d46)) {
    FUN_00c81e40(0x2b);
  }
  Bh0056::vf30();
  return;
}

// 00409930  FUN_00409930  size=227  [between]
void __fastcall FUN_00409930(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00d46780();
  iVar3 = FUN_00d467a0();
  if (((iVar2 != 0) || (iVar3 != 0)) &&
     (((((iVar1 = *(int *)(param_1 + 0x4b0), iVar1 == 0xf0d50 ||
         ((((iVar1 == 0xf0d51 || (iVar1 == 0xf0d52)) || (iVar1 == 0xf0d53)) ||
          ((iVar1 == 0xf0d54 || (iVar1 == 0xf0d55)))))) || (iVar1 == 0xf0d56)) ||
       (((iVar1 == 0xf0d57 || (iVar1 == 0xf0d58)) ||
        ((iVar1 == 0xf0d59 || (((iVar1 == 0xf0d5a || (iVar1 == 0xf0d5b)) || (iVar1 == 0xf0d5c)))))))
       ) || (((iVar1 == 0xf0d5d || (iVar1 == 0xf0d5e)) ||
             ((iVar1 == 0xf0d5f || ((iVar1 == 0xf0d60 || (iVar1 == 0xf0d61)))))))))) {
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xb44) = 2;
    }
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xb44) = 3;
    }
  }
  return;
}

// 00409A20  DoorBehaviorBase::startup  size=1188  [class]
undefined4 __fastcall DoorBehaviorBase::startup(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  undefined4 uVar11;
  int local_4;
  
  local_4 = param_1;
  iVar3 = BehaviorBa::startup();
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb44) = 0;
  FUN_00409930();
  *(undefined4 *)(param_1 + 0xb38) = 0;
  *(undefined4 *)(param_1 + 0xb30) = 0;
  *(undefined2 *)(param_1 + 0xb34) = 0;
  *(undefined4 *)(param_1 + 0xb3c) = 0;
  FUN_00a8caf0(3,0,0,0);
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x2c))(&local_4,"_000_closed");
    FUN_00916360();
  }
  iVar3 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x4b0) == 0xf0d01) {
    if (DAT_018b9174 == 0x140) {
      pcVar7 = "P140_BAD_OPEN";
      pbVar4 = &DAT_018b917c;
      do {
        bVar2 = *pbVar4;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) {
LAB_00409ae6:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00409aeb;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar10 = bVar2 < (byte)pcVar7[1];
        if (bVar2 != pcVar7[1]) goto LAB_00409ae6;
        pbVar4 = pbVar4 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_00409aeb:
      iVar8 = 0;
      if (iVar3 == 0) {
        if (0 < *(short *)(param_1 + 0x324)) {
          piVar9 = (int *)(*(int *)(param_1 + 800) + 0x60);
          do {
            pbVar4 = *(byte **)(*piVar9 + 0x40);
            if (pbVar4 != (byte *)0x0) {
              pbVar5 = &DAT_0163bc14;
              do {
                bVar2 = *pbVar5;
                bVar10 = bVar2 < *pbVar4;
                if (bVar2 != *pbVar4) {
LAB_00409c15:
                  iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_00409c1a;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar5[1];
                bVar10 = bVar2 < pbVar4[1];
                if (bVar2 != pbVar4[1]) goto LAB_00409c15;
                pbVar5 = pbVar5 + 2;
                pbVar4 = pbVar4 + 2;
              } while (bVar2 != 0);
              iVar3 = 0;
LAB_00409c1a:
              if (iVar3 == 0) {
                if ((iVar8 != -1) && (iVar3 = iVar8 * 0x70 + *(int *)(param_1 + 800), iVar3 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38);
                  *puVar1 = *puVar1 | 1;
                }
                break;
              }
            }
            iVar8 = iVar8 + 1;
            piVar9 = piVar9 + 0x1c;
          } while (iVar8 < *(short *)(param_1 + 0x324));
        }
        iVar3 = 0;
        if (0 < *(short *)(param_1 + 0x324)) {
          piVar9 = (int *)(*(int *)(param_1 + 800) + 0x60);
          do {
            pbVar4 = *(byte **)(*piVar9 + 0x40);
            if (pbVar4 != (byte *)0x0) {
              pbVar5 = &DAT_0163bc0c;
              do {
                bVar2 = *pbVar5;
                bVar10 = bVar2 < *pbVar4;
                if (bVar2 != *pbVar4) {
LAB_00409c90:
                  iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_00409c95;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar5[1];
                bVar10 = bVar2 < pbVar4[1];
                if (bVar2 != pbVar4[1]) goto LAB_00409c90;
                pbVar5 = pbVar5 + 2;
                pbVar4 = pbVar4 + 2;
              } while (bVar2 != 0);
              iVar8 = 0;
LAB_00409c95:
              if (iVar8 == 0) {
                if ((iVar3 != -1) && (iVar3 = iVar3 * 0x70 + *(int *)(param_1 + 800), iVar3 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38);
                  *puVar1 = *puVar1 | 1;
                }
                break;
              }
            }
            iVar3 = iVar3 + 1;
            piVar9 = piVar9 + 0x1c;
          } while (iVar3 < *(short *)(param_1 + 0x324));
        }
      }
      else {
        if (0 < *(short *)(param_1 + 0x324)) {
          piVar9 = (int *)(*(int *)(param_1 + 800) + 0x60);
          do {
            pbVar4 = *(byte **)(*piVar9 + 0x40);
            if (pbVar4 != (byte *)0x0) {
              pbVar5 = &DAT_0163bc14;
              do {
                bVar2 = *pbVar5;
                bVar10 = bVar2 < *pbVar4;
                if (bVar2 != *pbVar4) {
LAB_00409b40:
                  iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_00409b45;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar5[1];
                bVar10 = bVar2 < pbVar4[1];
                if (bVar2 != pbVar4[1]) goto LAB_00409b40;
                pbVar5 = pbVar5 + 2;
                pbVar4 = pbVar4 + 2;
              } while (bVar2 != 0);
              iVar3 = 0;
LAB_00409b45:
              if (iVar3 == 0) {
                if ((iVar8 != -1) && (iVar3 = iVar8 * 0x70 + *(int *)(param_1 + 800), iVar3 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
                break;
              }
            }
            iVar8 = iVar8 + 1;
            piVar9 = piVar9 + 0x1c;
          } while (iVar8 < *(short *)(param_1 + 0x324));
        }
        iVar3 = 0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar8 = *(int *)(param_1 + 800);
          piVar9 = (int *)(iVar8 + 0x60);
          do {
            pbVar4 = *(byte **)(*piVar9 + 0x40);
            if (pbVar4 != (byte *)0x0) {
              pbVar5 = &DAT_0163bc0c;
              do {
                bVar2 = *pbVar5;
                bVar10 = bVar2 < *pbVar4;
                if (bVar2 != *pbVar4) {
LAB_00409bb4:
                  iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_00409bb9;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar5[1];
                bVar10 = bVar2 < pbVar4[1];
                if (bVar2 != pbVar4[1]) goto LAB_00409bb4;
                pbVar5 = pbVar5 + 2;
                pbVar4 = pbVar4 + 2;
              } while (bVar2 != 0);
              iVar6 = 0;
LAB_00409bb9:
              if (iVar6 == 0) goto LAB_00409d9a;
            }
            iVar3 = iVar3 + 1;
            piVar9 = piVar9 + 0x1c;
          } while (iVar3 < *(short *)(param_1 + 0x324));
        }
      }
    }
    else {
      iVar3 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        piVar9 = (int *)(*(int *)(param_1 + 800) + 0x60);
        do {
          pbVar4 = *(byte **)(*piVar9 + 0x40);
          if (pbVar4 != (byte *)0x0) {
            pbVar5 = &DAT_0163bc14;
            do {
              bVar2 = *pbVar5;
              bVar10 = bVar2 < *pbVar4;
              if (bVar2 != *pbVar4) {
LAB_00409d10:
                iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_00409d15;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar5[1];
              bVar10 = bVar2 < pbVar4[1];
              if (bVar2 != pbVar4[1]) goto LAB_00409d10;
              pbVar5 = pbVar5 + 2;
              pbVar4 = pbVar4 + 2;
            } while (bVar2 != 0);
            iVar8 = 0;
LAB_00409d15:
            if (iVar8 == 0) {
              if ((iVar3 != -1) && (iVar3 = iVar3 * 0x70 + *(int *)(param_1 + 800), iVar3 != 0)) {
                puVar1 = (uint *)(iVar3 + 0x38);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              break;
            }
          }
          iVar3 = iVar3 + 1;
          piVar9 = piVar9 + 0x1c;
        } while (iVar3 < *(short *)(param_1 + 0x324));
      }
      iVar3 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar8 = *(int *)(param_1 + 800);
        piVar9 = (int *)(iVar8 + 0x60);
        do {
          pbVar4 = *(byte **)(*piVar9 + 0x40);
          if (pbVar4 != (byte *)0x0) {
            pbVar5 = &DAT_0163bc0c;
            do {
              bVar2 = *pbVar5;
              bVar10 = bVar2 < *pbVar4;
              if (bVar2 != *pbVar4) {
LAB_00409d80:
                iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_00409d85;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar5[1];
              bVar10 = bVar2 < pbVar4[1];
              if (bVar2 != pbVar4[1]) goto LAB_00409d80;
              pbVar5 = pbVar5 + 2;
              pbVar4 = pbVar4 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_00409d85:
            if (iVar6 == 0) goto LAB_00409d9a;
          }
          iVar3 = iVar3 + 1;
          piVar9 = piVar9 + 0x1c;
        } while (iVar3 < *(short *)(param_1 + 0x324));
      }
    }
  }
LAB_00409dae:
  *(undefined1 *)(param_1 + 0xb40) = 0;
  if (*(int *)(param_1 + 0x4b0) == 0xf0d42) {
    if (DAT_018b9174 == 0x420) {
      iVar3 = FUN_00d4f120("P420_GATE_OPEN",1);
      if (iVar3 != 0) {
        FUN_00aa92c0(2);
        *(undefined1 *)(param_1 + 0xb40) = 1;
        goto LAB_00409e0f;
      }
      uVar11 = 1;
    }
    else {
      if (DAT_018b9174 != 0x430) goto LAB_00409e0f;
      *(undefined1 *)(param_1 + 0xb40) = 1;
      uVar11 = 2;
    }
    FUN_00aa92c0(uVar11);
  }
LAB_00409e0f:
  iVar3 = FUN_00d45a70("P430_RUN_SECOND_HALF");
  if (((((iVar3 != 0) || (iVar3 = FUN_00d45a70("P430_RUN_FIRST_HALF"), iVar3 != 0)) ||
       (DAT_018b9174 == 0x420)) || (DAT_018b9174 == 0x430)) &&
     (((iVar3 = FUN_009fd850(&DAT_0163bbd8), iVar3 != 0 ||
       (iVar3 = FUN_009fd850(&DAT_0163bbd0), iVar3 != 0)) ||
      ((iVar3 = FUN_009fd850(&DAT_0163bbc8), iVar3 != 0 ||
       (iVar3 = FUN_009fd850(&DAT_0163bbc0), iVar3 != 0)))))) {
    FUN_00a8cb50(5);
  }
  iVar3 = FUN_00a92f90();
  if ((iVar3 != 0) && (iVar8 = FUN_00e26e90(), iVar8 != 0)) {
    *(uint *)(iVar3 + 0x94) = *(uint *)(iVar3 + 0x94) | 0x10;
  }
  *(undefined4 *)(param_1 + 0xb48) = 0;
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  return 1;
LAB_00409d9a:
  if ((iVar3 != -1) && (iVar8 = iVar3 * 0x70 + iVar8, iVar8 != 0)) {
    puVar1 = (uint *)(iVar8 + 0x38);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  goto LAB_00409dae;
}

// 00409EE0  FUN_00409ee0  size=480  [between]
void __thiscall FUN_00409ee0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = (int *)FUN_00a6dd90();
  iVar2 = (**(code **)(*piVar1 + 0x9c))(0xc00);
  if (iVar2 != 0) {
    if (param_2 == 0) {
      FUN_00a71830(0,*(undefined4 *)(param_1 + 0x4ec));
    }
    else {
      iVar2 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)cEspControler::cEspControler();
        if (puVar3 != (undefined4 *)0x0) {
          iVar2 = *(int *)(param_1 + 0x4ec);
          uVar6 = 10;
          iVar4 = FUN_00e03ea0(&DAT_0163bc9c);
          if (iVar2 != iVar4) {
            iVar2 = *(int *)(param_1 + 0x4ec);
            iVar4 = FUN_00e03ea0(&DAT_0163bc94);
            if (iVar2 == iVar4) {
              uVar6 = 0xb;
            }
            else {
              iVar2 = *(int *)(param_1 + 0x4ec);
              iVar4 = FUN_00e03ea0(&DAT_0163bc8c);
              if (iVar2 == iVar4) {
                uVar6 = 0xc;
              }
              else {
                iVar2 = *(int *)(param_1 + 0x4ec);
                iVar4 = FUN_00e03ea0(&DAT_0163bc84);
                if (iVar2 == iVar4) {
                  uVar6 = 0xd;
                }
                else {
                  iVar2 = *(int *)(param_1 + 0x4ec);
                  iVar4 = FUN_00e03ea0(&DAT_0163bc7c);
                  if (iVar2 == iVar4) {
                    uVar6 = 0xe;
                  }
                  else {
                    iVar2 = *(int *)(param_1 + 0x4ec);
                    iVar4 = FUN_00e03ea0(&DAT_0163bc74);
                    if (iVar2 == iVar4) {
                      uVar6 = 0xf;
                    }
                    else {
                      iVar2 = *(int *)(param_1 + 0x4ec);
                      iVar4 = FUN_00e03ea0(&DAT_0163bc6c);
                      if (iVar2 == iVar4) {
                        uVar6 = 0x10;
                      }
                      else {
                        iVar2 = *(int *)(param_1 + 0x4ec);
                        iVar4 = FUN_00e03ea0(&DAT_0163bc64);
                        if (iVar2 == iVar4) {
                          uVar6 = 0x11;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar5 = FUN_00e01eb0(puVar3);
          iVar2 = FUN_00e01540(0xc00,uVar6,uVar5);
          if (iVar2 == 1) {
            FUN_00a71770(puVar3,*(undefined4 *)(param_1 + 0x4ec));
            return;
          }
          (**(code **)*puVar3)(1);
          FUN_00dd5650(&DAT_0163bc2c,*(undefined4 *)(param_1 + 0x4ec));
          return;
        }
      }
    }
  }
  return;
}

// 0040A0C0  FUN_0040a0c0  size=467  [between]
void __fastcall FUN_0040a0c0(int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  local_4 = param_1;
  if (iVar1 == 0) {
    if ((DAT_018b9174 == 0xc40) && (*(int *)(param_1 + 0x4b0) == 0xf0d58)) {
      FUN_00409ee0(1);
      FUN_00e5e0c0("ba0d58_se_elevator_bell",param_1,0xffffffff,0);
    }
    fVar2 = (float10)FUN_00a92ff0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xb3c) = 1;
    *(float *)(param_1 + 0xb4c) =
         (float)(fVar2 * (float10)0.016666668 + (float10)*(float *)(param_1 + 0xb4c));
    return;
  }
  if (iVar1 == 1) {
    fVar2 = (float10)FUN_00a92ff0();
    *(undefined4 *)(param_1 + 0xb3c) = 1;
    fVar2 = fVar2 * (float10)0.016666668 + (float10)*(float *)(param_1 + 0xb4c);
    *(float *)(param_1 + 0xb4c) = (float)fVar2;
    if ((float10)*(float *)(param_1 + 0xb48) <= fVar2) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0xb4c) = 0;
      return;
    }
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x61c) = 3;
      FUN_00a9e290(&DAT_0163b5e8,0,0,0x3f800000,0x8000000,*(undefined4 *)(param_1 + 0xb38),
                   0x3f800000);
      fVar2 = (float10)0;
      if ((*(int *)(param_1 + 0x628) == 2) || (*(int *)(param_1 + 0x628) == 7)) {
        fVar2 = (float10)FUN_00a95680(0);
        fVar2 = fVar2 - (float10)*(float *)(param_1 + 0xb38);
      }
      FUN_00a95e60(0,(float)fVar2);
      fVar2 = (float10)FUN_00a958c0(0);
      *(float *)(param_1 + 0xb38) = (float)fVar2;
      if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 0x2c))(&local_4,"_000_closed");
        FUN_00916360();
        *(undefined4 *)(param_1 + 0xb3c) = 1;
        return;
      }
    }
    else if (iVar1 == 3) {
      fVar2 = (float10)FUN_00a958c0(0);
      *(float *)(param_1 + 0xb38) = (float)fVar2;
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 1) {
        fVar2 = (float10)FUN_00a958c0(0);
        *(float *)(param_1 + 0xb38) = (float)fVar2;
        FUN_00a8caf0(0,0,0,0);
        FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0,0);
      }
    }
    *(undefined4 *)(param_1 + 0xb3c) = 1;
  }
  return;
}

// 0040A2A0  FUN_0040a2a0  size=517  [between]
void __fastcall FUN_0040a2a0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    fVar2 = (float10)FUN_00a92ff0();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x2cf] = 0;
    param_1[0x2d3] = (int)(float)(fVar2 * (float10)0.016666668 + (float10)(float)param_1[0x2d3]);
    return;
  }
  if (iVar1 == 1) {
    fVar2 = (float10)FUN_00a92ff0();
    fVar2 = fVar2 * (float10)0.016666668 + (float10)(float)param_1[0x2d3];
    param_1[0x2d3] = (int)(float)fVar2;
    if ((float10)(float)param_1[0x2d2] <= fVar2) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x2d3] = 0;
      param_1[0x2cf] = 0;
      return;
    }
  }
  else if (iVar1 == 2) {
    if (param_1[300] == 0xf0d09) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x3f800000;
      (**(code **)(*param_1 + 0x6c))(&local_20);
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,param_1[0x2ce],0x3f800000);
    fVar2 = (float10)0;
    if (param_1[0x18a] == 1) {
      fVar2 = (float10)FUN_00a95680(0);
      fVar2 = fVar2 - (float10)(float)param_1[0x2ce];
    }
    FUN_00a95e60(0,(float)fVar2);
    fVar2 = (float10)FUN_00a958c0(0);
    param_1[0x2ce] = (int)(float)fVar2;
    if ((int *)param_1[0x1ec] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1ec] + 0x2c))(auStack_24,"_000_closed");
      FUN_0091a8a0();
      param_1[0x2cf] = 0;
      return;
    }
  }
  else if (iVar1 == 3) {
    fVar2 = (float10)FUN_00a958c0(0);
    param_1[0x2ce] = (int)(float)fVar2;
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 1) {
      fVar2 = (float10)FUN_00a958c0(0);
      param_1[0x2ce] = (int)(float)fVar2;
      FUN_00a8caf0(0,0,0,0);
      FUN_00a9e290(&DAT_0163bbb8,0,0,0x3f800000,0,0,0);
      if ((DAT_018b9174 == 0xc40) && (param_1[300] == 0xf0d58)) {
        FUN_00409ee0(0);
      }
    }
  }
  param_1[0x2cf] = 0;
  return;
}

// 0040A4B0  DoorBehaviorBase::vf4C  size=241  [class]
void __fastcall DoorBehaviorBase::vf4C(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 1) {
    FUN_00409260();
    (**(code **)(*param_1 + 100))();
    BehaviorBgBase::vf4C();
    return;
  }
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 2) {
    FUN_00409460();
    (**(code **)(*param_1 + 100))();
    BehaviorBgBase::vf4C();
    return;
  }
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 3) {
    FUN_004096b0();
    (**(code **)(*param_1 + 100))();
    BehaviorBgBase::vf4C();
    return;
  }
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 4) {
    FUN_00409790();
    (**(code **)(*param_1 + 100))();
    BehaviorBgBase::vf4C();
    return;
  }
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 5) {
    (**(code **)(*param_1 + 100))();
    switchD_0080dbae::default();
    BehaviorBgBase::vf4C();
    return;
  }
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 6) {
    FUN_0040a0c0();
    (**(code **)(*param_1 + 100))();
    BehaviorBgBase::vf4C();
    return;
  }
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 7) {
    FUN_0040a2a0();
    (**(code **)(*param_1 + 100))();
  }
  BehaviorBgBase::vf4C();
  return;
}

// 00AB6370  DoorBehaviorBase::DoorBehaviorBase  size=18  [class]
undefined4 * __fastcall DoorBehaviorBase::DoorBehaviorBase(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB6390  DoorBehaviorBase::vf04  size=6  [class]
undefined * DoorBehaviorBase::vf04(void)

{
  return &DAT_01b34b48;
}

// 00ABAB00  DoorBehaviorBase::destruct  size=43  [class]
undefined4 __thiscall DoorBehaviorBase::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

