// src/phase/app/p230.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D48260..00D70280, 7 functions

#include "mgrr.h"
#include "cP230.h"

// 00D48260  cP230::vf08  size=416  [class]
void __fastcall cP230::vf08(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  uVar1 = FUN_00e03ea0("P230_KOGECKO_ED");
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  uVar1 = FUN_00e03ea0("P230_KEVIN_RADIO");
  *(undefined4 *)(param_1 + 300) = uVar1;
  uVar1 = FUN_00e03ea0("P230_KEVIN_RADIO_ED");
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  FUN_00a55990();
  *(undefined4 *)(param_1 + 0x11c) = 0;
  puVar2 = (undefined4 *)FUN_00e678d0(2,0xcf06,0xffffffff);
  *(undefined4 *)(param_1 + 0x134) = *puVar2;
  *(undefined4 *)(param_1 + 0x138) = puVar2[1];
  *(undefined4 *)(param_1 + 0x13c) = puVar2[2];
  puVar2 = (undefined4 *)FUN_00e678d0(2,52999,0xffffffff);
  *(undefined4 *)(param_1 + 0x140) = *puVar2;
  *(undefined4 *)(param_1 + 0x144) = puVar2[1];
  *(undefined4 *)(param_1 + 0x148) = puVar2[2];
  *(undefined4 *)(param_1 + 0x120) = 0;
  piVar3 = (int *)FUN_00c14bb0();
  iVar4 = (**(code **)(*piVar3 + 0x20))("rap_scr3",0x204);
  if (iVar4 != 0) {
    iVar4 = FUN_00c81c60(0x43);
    if (iVar4 == 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      pcVar5 = *(code **)(*piVar3 + 0x1c);
    }
    else {
      piVar3 = (int *)FUN_00a7c8a0();
      pcVar5 = *(code **)(*piVar3 + 0x20);
    }
    (*pcVar5)();
  }
  piVar3 = (int *)FUN_00c14bb0();
  iVar4 = (**(code **)(*piVar3 + 0x20))("rap_scr2",0x204);
  if (iVar4 != 0) {
    iVar4 = FUN_00c81c60(0x44);
    if (iVar4 == 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      pcVar5 = *(code **)(*piVar3 + 0x1c);
    }
    else {
      piVar3 = (int *)FUN_00a7c8a0();
      pcVar5 = *(code **)(*piVar3 + 0x20);
    }
    (*pcVar5)();
  }
  piVar3 = (int *)FUN_00c14bb0();
  iVar4 = (**(code **)(*piVar3 + 0x20))("rap_scr1",0x204);
  if (iVar4 != 0) {
    iVar4 = FUN_00c81c60(0x45);
    if (iVar4 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00d483e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar3 + 0x20))();
      return;
    }
    piVar3 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00d483f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 0x1c))();
    return;
  }
  return;
}

// 00D48400  cP230::vf1C  size=70  [class]
void cP230::vf1C(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = "P230_KEVIN_RADIO_ED";
  do {
    bVar1 = *param_2;
    bVar4 = bVar1 < (byte)*pcVar3;
    if (bVar1 != *pcVar3) {
LAB_00d48430:
      iVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      goto LAB_00d48435;
    }
    if (bVar1 == 0) break;
    bVar1 = param_2[1];
    bVar4 = bVar1 < (byte)pcVar3[1];
    if (bVar1 != pcVar3[1]) goto LAB_00d48430;
    param_2 = param_2 + 2;
    pcVar3 = pcVar3 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00d48435:
  if (iVar2 == 0) {
    thunk_FUN_00dd7270();
  }
  return;
}

// 00D52950  cP230::vf10  size=82  [class]
void __fastcall cP230::vf10(int param_1)

{
  int iVar1;
  
  DAT_01bea094 = DAT_01bea094 & 0xfffdffff;
  DAT_01dc0868 = 0;
  thunk_FUN_00dd7270();
  iVar1 = FUN_00eb4300(0xffffffff);
  if (iVar1 != 0) {
    FUN_00ebdd50(0xffffffff);
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  }
  return;
}

// 00D529B0  cP230::vf14  size=651  [class]
void cP230::vf14(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  int iStack_4;
  
  puVar11 = &DAT_016bcfa8;
  uVar10 = 0;
  uVar2 = FUN_00e03ea0(&DAT_016bcfa8,0,&DAT_016bcfa8);
  iVar3 = FUN_00d4f0b0(uVar2,uVar10,puVar11);
  if (iVar3 == 0) {
    FUN_00c81e90(0x46);
    FUN_00c81e90(0x47);
    FUN_00c81e90(0x48);
    FUN_00c81e90(0x49);
    FUN_00c81e90(0x4a);
  }
  puVar11 = &DAT_016bcfa8;
  uVar10 = 1;
  uVar2 = FUN_00e03ea0(&DAT_016bcfa8,1,&DAT_016bcfa8);
  iVar3 = FUN_00d4f0b0(uVar2,uVar10,puVar11);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00c14bb0();
    iVar3 = (**(code **)(*piVar4 + 0x20))("kgk_pl",0x204);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar4 + 0x20))();
    }
  }
  pcVar12 = "P230_KOGECKO_ST";
  uVar10 = 1;
  uVar2 = FUN_00e03ea0("P230_KOGECKO_ST",1,"P230_KOGECKO_ST");
  iVar3 = FUN_00d4f0b0(uVar2,uVar10,pcVar12);
  if (iVar3 == 0) goto LAB_00d52ba9;
  pbVar7 = &DAT_016bcfa8;
  pbVar5 = param_2;
  do {
    bVar1 = *pbVar5;
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00d52ab0:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00d52ab5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00d52ab0;
    pbVar5 = pbVar5 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d52ab5:
  bVar9 = false;
  iStack_4 = 0;
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_00c14bb0();
    iVar3 = (**(code **)(*piVar4 + 0x28))(&iStack_4,0x204);
    if ((iVar3 != 0) && (iVar8 = 0, 0 < iStack_4)) {
      do {
        piVar4 = *(int **)(iVar3 + iVar8 * 4);
        if ((piVar4 != (int *)0x0) &&
           ((iVar6 = (**(code **)(*piVar4 + 8))(), iVar6 != 0 &&
            (iVar6 = (**(code **)(**(int **)(iVar3 + iVar8 * 4) + 0xe0))(0,"rdn_ATARI_COL",0,0),
            iVar6 != 0)))) {
          bVar9 = true;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iStack_4);
LAB_00d52b90:
      if (bVar9) goto LAB_00d52ba9;
    }
  }
  else {
    piVar4 = (int *)FUN_00c14bb0();
    iVar3 = (**(code **)(*piVar4 + 0x28))(&iStack_4,0x204);
    if ((iVar3 != 0) && (iVar8 = 0, 0 < iStack_4)) {
      do {
        piVar4 = *(int **)(iVar3 + iVar8 * 4);
        if ((piVar4 != (int *)0x0) &&
           ((iVar6 = (**(code **)(*piVar4 + 8))(), iVar6 != 0 &&
            (iVar6 = (**(code **)(**(int **)(iVar3 + iVar8 * 4) + 0xe0))(1,"rdn_ATARI_COL",0,0),
            iVar6 != 0)))) {
          bVar9 = true;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iStack_4);
      goto LAB_00d52b90;
    }
  }
  FUN_00dd5650(&DAT_016bcf5c,"rdn_ATARI_COL");
LAB_00d52ba9:
  pcVar12 = "P230_RADIO";
  uVar10 = 1;
  uVar2 = FUN_00e03ea0("P230_RADIO",1,"P230_RADIO");
  iVar3 = FUN_00d4f0b0(uVar2,uVar10,pcVar12);
  if (iVar3 != 0) {
    puVar11 = &DAT_016bcfa8;
    uVar10 = 0;
    uVar2 = FUN_00e03ea0(&DAT_016bcfa8,0,&DAT_016bcfa8);
    iVar3 = FUN_00d4f0b0(uVar2,uVar10,puVar11);
    if (iVar3 == 0) {
      FUN_00a55c90();
    }
  }
  pcVar12 = "P230_KEVIN_RADIO_ED";
  do {
    bVar1 = *param_2;
    bVar9 = bVar1 < (byte)*pcVar12;
    if (bVar1 != *pcVar12) {
LAB_00d52c22:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00d52c27;
    }
    if (bVar1 == 0) break;
    bVar1 = param_2[1];
    bVar9 = bVar1 < (byte)pcVar12[1];
    if (bVar1 != pcVar12[1]) goto LAB_00d52c22;
    param_2 = param_2 + 2;
    pcVar12 = pcVar12 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d52c27:
  if (iVar3 == 0) {
    FUN_00c434a0(1);
  }
  return;
}

// 00D52C40  cP230::vf18  size=34  [class]
void __fastcall cP230::vf18(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 300),1);
  if (iVar1 != 0) {
    FUN_00a559d0();
    return;
  }
  return;
}

// 00D61DB0  cP230::vf0C  size=1092  [class]
void __fastcall cP230::vf0C(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined *puVar8;
  
  if (((DAT_01bea094 & 0x20000) == 0) && ((DAT_01bea060 & 0x48040000) == 0)) {
    iVar2 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x128),0);
    if (iVar2 == 0) {
      piVar3 = (int *)FUN_00a6e640();
      iVar2 = (**(code **)(*piVar3 + 0x24))(0xd,1,2);
      if (iVar2 != 0) {
        iVar2 = FUN_00c78580(3,&stack0xffffffd4);
        if (iVar2 != 0) {
          FUN_00cbc480(0x99999999,&stack0xffffffd4);
        }
      }
      piVar3 = (int *)FUN_00a6e640();
      iVar2 = (**(code **)(*piVar3 + 0x24))(4,1,2);
      if (iVar2 != 0) {
        iVar2 = FUN_00416d50(0x24);
        if (iVar2 == 0) {
          piVar3 = (int *)FUN_00c13920();
          iVar2 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
          iVar4 = FUN_00c19c00(10,0,0);
          if ((iVar2 != 0) && (iVar4 != 0)) {
            uVar5 = FUN_00a7c8a0();
            piVar3 = (int *)FUN_00412580(uVar5);
            if (piVar3 != (int *)0x0) {
              iVar2 = (**(code **)(*piVar3 + 0x380))();
              if (iVar2 != 0) {
                DAT_01dc1300 = 1;
                DAT_01dc12fc = 4;
                if ((piVar3[0x33f] & piVar3[0x38e]) != 0) {
                  piVar3 = (int *)FUN_00c14bb0();
                  iVar2 = (**(code **)(*piVar3 + 0x20))("kgk_pl",0x204);
                  piVar3 = (int *)FUN_00a7c8a0();
                  (**(code **)(*piVar3 + 0x1c))();
                  if (iVar2 != 0) {
                    piVar3 = (int *)FUN_00a7c8a0();
                    (**(code **)(*piVar3 + 0x20))();
                  }
                  pcVar7 = "P230_KOGECKO_ST";
                  uVar6 = 1;
                  uVar5 = FUN_00e03ea0("P230_KOGECKO_ST",1,"P230_KOGECKO_ST");
                  iVar2 = FUN_00d4f0b0(uVar5,uVar6,pcVar7);
                  if (iVar2 == 0) {
                    FUN_00d5ea40("P230_KOGECKO_ST",1,0);
                  }
                  DAT_01dc0868 = 1;
                  FUN_00e80d00(param_1 + 0x134);
                  *(undefined4 *)(param_1 + 0x11c) = 1;
                  DAT_01bea070 = DAT_01bea070 | 0x200000;
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    iVar2 = FUN_00e7a5f0(param_1 + 0x134);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
      piVar3 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
          puVar8 = &DAT_01be9db8;
          (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
          iVar2 = FUN_00dd6d80(puVar8);
          if (iVar2 != 0) {
            FUN_00bd9590(1);
            FUN_00b7aa80();
          }
        }
      }
      iVar2 = FUN_00eb4300(0xffffffff);
      if (iVar2 != 0) {
        cFade::set(0xffffffff,0xff000000,0,0x3c,0,0,0x68);
      }
      DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
    }
  }
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar3 = (int *)FUN_00a6e640();
    iVar2 = (**(code **)(*piVar3 + 0x24))(0xe,1,2);
    if (iVar2 != 0) {
      iVar2 = FUN_00c78580(4,&stack0xffffffd4);
      if (iVar2 != 0) {
        FUN_00cbc480(0x99999999,&stack0xffffffd4);
      }
    }
    piVar3 = (int *)FUN_00a6e640();
    iVar2 = (**(code **)(*piVar3 + 0x24))(5,1,2);
    if ((iVar2 != 0) && ((DAT_01bea094 & 0x8000000) == 0)) {
      piVar3 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar3 + 0x28))(1);
      if (iVar2 != 0) {
        FUN_00a7c8a0();
        iVar2 = FUN_00a8cab0();
        if ((((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) || (iVar2 == 3)) {
          uVar5 = FUN_00a7c8a0();
          FUN_005f57d0(uVar5);
          DAT_01dc1300 = 1;
          DAT_01dc12fc = 4;
          cVar1 = FUN_005f4530();
          if (cVar1 != '\0') {
            FUN_00c193e0(3);
            FUN_00c193e0(2);
            FUN_00c193e0(6);
            FUN_00c193e0(7);
            FUN_00c193e0(8);
            FUN_00c193e0(9);
            FUN_00d5ea40("P230_KOGECKO_ED",1,0);
            FUN_00a8caf0(0x1b,0,0,0);
            FUN_00e80d00(param_1 + 0x140);
            DAT_01dc0868 = 0;
            *(undefined4 *)(param_1 + 0x120) = 1;
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    iVar2 = FUN_00e7a5f0(param_1 + 0x140);
    if (iVar2 == 0) {
      iVar2 = FUN_00eb4300(0xffffffff);
      if (iVar2 != 0) {
        cFade::set(0xffffffff,0xff000000,0,0x3c,0,0,0x68);
      }
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
  }
  return;
}

// 00D70280  cP230::vf00  size=54  [class]
undefined4 * __thiscall cP230::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

