// src/misc/TelegraphNetContents.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DC430..008DF470, 20 functions

#include "mgrr.h"
#include "TelegraphNetContents.h"

// 008DC430  TelegraphNetContents::RoomReadySlot::vf10  size=1  [class]
void TelegraphNetContents::RoomReadySlot::vf10(void)

{
  return;
}

// 008DC440  TelegraphNetContents::RoomReadySlot::vf14  size=1  [class]
void TelegraphNetContents::RoomReadySlot::vf14(void)

{
  return;
}

// 008DC460  FUN_008dc460  size=171  [between]
char * FUN_008dc460(int param_1)

{
  int iVar1;
  uint uVar2;
  char *local_38 [14];
  
  local_38[0] = (char *)0xd0103;
  local_38[1] = "pole1";
  local_38[2] = (char *)0xd0101;
  local_38[3] = "pole2";
  local_38[4] = (char *)0xd0102;
  local_38[5] = "pole3";
  local_38[6] = (char *)0xd002c;
  local_38[7] = "pole4";
  local_38[8] = (char *)0xd0124;
  local_38[9] = "wire";
  local_38[10] = (char *)0xd0249;
  local_38[0xb] = "wire1";
  local_38[0xc] = (char *)0xd024a;
  local_38[0xd] = "wire2";
  uVar2 = 0;
  do {
    iVar1 = FUN_00e03ea0(local_38[uVar2 * 2 + 1]);
    if (iVar1 == param_1) {
      return local_38[uVar2 * 2];
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  return (char *)0xffffffff;
}

// 008DC510  FUN_008dc510  size=89  [between]
/* WARNING: Type propagation algorithm not settling */

float10 FUN_008dc510(float param_1)

{
  uint uVar1;
  float local_18 [6];
  
  local_18[1] = 15.0;
  local_18[2] = 1.194681e-39;
  local_18[3] = 30.0;
  local_18[4] = 1.194683e-39;
  local_18[5] = 30.0;
  uVar1 = 0;
  do {
    if (local_18[uVar1 * 2] == param_1) {
      return (float10)local_18[uVar1 * 2 + 1];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return (float10)-1.0;
}

// 008DC570  FUN_008dc570  size=37  [between]
undefined4 __fastcall FUN_008dc570(undefined4 param_1)

{
  int iVar1;
  
  FUN_00a7c930();
  iVar1 = 1;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 008DC5D0  TelegraphNetContents::vf00  size=6  [class]
undefined * TelegraphNetContents::vf00(void)

{
  return &DAT_01b35d6c;
}

// 008DD210  TelegraphNetContents::RoomReadySlot::vf00  size=31  [class]
undefined4 * __thiscall TelegraphNetContents::RoomReadySlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DD230  FUN_008dd230  size=500  [between]
undefined4 FUN_008dd230(float *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  float local_f0 [4];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b0 [12];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_f0[0] = -19.5;
  uVar3 = 0;
  local_5c = 2;
  local_f0[1] = 0.0;
  local_40 = 2;
  local_f0[2] = 74.59;
  local_e0 = 0x3fef5c29;
  local_b0[4] = 0.0;
  local_b0[5] = -NAN;
  local_dc = 0;
  local_80 = 0;
  local_7c = 1;
  local_d8 = 0x42952e14;
  local_60 = 1;
  local_3c = 3;
  local_d0 = 0x41b9999a;
  local_20 = 3;
  local_1c = 0xffffffff;
  pfVar2 = local_b0;
  local_cc = 0;
  local_c8 = 0x4295cccd;
  local_c0 = 0x423428f6;
  local_bc = 0;
  local_b8 = 0x425ceb85;
  local_b0[0] = -19.41;
  local_b0[1] = 0.0;
  local_b0[2] = 75.55;
  local_b0[8] = 1.94;
  local_b0[9] = 0.0;
  local_b0[10] = 75.55;
  local_70 = 0x41baa3d7;
  local_6c = 0;
  local_68 = 0x4297199a;
  local_50 = 0x41bc6666;
  local_4c = 0;
  local_48 = 0x425951ec;
  local_30 = 0x4233c28f;
  local_2c = 0;
  local_28 = 0x425951ec;
  while ((1.0 <= SQRT((param_1[2] - pfVar2[2]) * (param_1[2] - pfVar2[2]) +
                      (*param_1 - *pfVar2) * (*param_1 - *pfVar2)) ||
         ((1.0 <= SQRT((param_2[2] - local_f0[(int)pfVar2[4] * 4 + 2]) *
                       (param_2[2] - local_f0[(int)pfVar2[4] * 4 + 2]) +
                       (*param_2 - local_f0[(int)pfVar2[4] * 4]) *
                       (*param_2 - local_f0[(int)pfVar2[4] * 4])) &&
          ((fVar1 = pfVar2[5], fVar1 == -NAN ||
           (1.0 <= SQRT((param_2[2] - local_f0[(int)fVar1 * 4 + 2]) *
                        (param_2[2] - local_f0[(int)fVar1 * 4 + 2]) +
                        (*param_2 - local_f0[(int)fVar1 * 4]) *
                        (*param_2 - local_f0[(int)fVar1 * 4]))))))))) {
    uVar3 = uVar3 + 1;
    pfVar2 = pfVar2 + 8;
    if (4 < uVar3) {
      return 0;
    }
  }
  return 1;
}

// 008DD430  TelegraphNetContents::vf10  size=174  [class]
void __fastcall TelegraphNetContents::vf10(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  if (iVar2 != *(int *)(*(int *)(param_1 + 0x1c) + 8) * 0x40 + iVar2) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a805f0();
      }
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a805f0();
      }
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a805f0();
      }
      FUN_00a00bd0(*(undefined4 *)(iVar2 + 4),0);
      iVar2 = iVar2 + 0x40;
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x1c) + 8) * 0x40 +
                      *(int *)(*(int *)(param_1 + 0x1c) + 4));
  }
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  FUN_00d8a1d0(0x38,*(undefined4 *)(param_1 + 0x14));
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))(1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

// 008DD4E0  TelegraphNetContents::vf04  size=31  [class]
undefined4 * __thiscall TelegraphNetContents::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = ContentsBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DD740  TelegraphNetContents::TelegraphNetContents  size=271  [class]
undefined4 * TelegraphNetContents::TelegraphNetContents(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_01b35d60 + 0x10))();
  switch(param_1) {
  case 0:
    iVar2 = FUN_00dd3500(0x1c,param_2);
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
    puVar3 = (undefined4 *)BrokenBridgeContents::BrokenBridgeContents(param_2,uVar1);
    break;
  case 1:
    puVar3 = (undefined4 *)FUN_00dd3500(0x20,param_2);
    if (puVar3 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar3[1] = param_2;
    puVar3[2] = uVar1;
    puVar3[3] = 0xffffffff;
    puVar3[4] = 0xffffffff;
    *puVar3 = vftable;
    puVar3[6] = 0;
    puVar3[7] = 0;
    break;
  case 2:
    iVar2 = FUN_00dd3500(0x50,param_2);
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
    puVar3 = (undefined4 *)KogekkoWallContents::KogekkoWallContents(param_2,uVar1);
    break;
  case 3:
    puVar3 = (undefined4 *)FUN_00dd3500(0x18,param_2);
    if (puVar3 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar3[1] = param_2;
    puVar3[2] = uVar1;
    puVar3[3] = 0xffffffff;
    puVar3[4] = 0xffffffff;
    *puVar3 = KogekkoShootingContents::vftable;
    puVar3[5] = 0;
    break;
  case 4:
    iVar2 = FUN_00dd3500(0x20,param_2);
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
    puVar3 = (undefined4 *)SlashTestContents::SlashTestContents_2(param_2,uVar1);
    break;
  default:
    goto switchD_008dd760_default;
  }
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)(*DAT_01b35d60 + 8))(puVar3);
  }
switchD_008dd760_default:
  return puVar3;
}

// 008DDAC0  TelegraphNetContents::vf0C  size=832  [class]
void __fastcall TelegraphNetContents::vf0C(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  float10 fVar12;
  undefined *puVar13;
  int local_9c;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar11 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  if (iVar11 != *(int *)(*(int *)(param_1 + 0x1c) + 8) * 0x40 + iVar11) {
    puVar10 = (undefined4 *)(iVar11 + 0x18);
    do {
      if (((puVar10[6] == 0) && (iVar3 = FUN_00a00f80(puVar10[-5],0), iVar3 != 0)) &&
         (iVar3 = FUN_00a00ca0(puVar10[-5],0), iVar3 != 0)) {
        FUN_0040b190();
        local_40 = puVar10[-2];
        local_3c = puVar10[-1];
        local_38 = *puVar10;
        local_34 = puVar10[2];
        local_30 = puVar10[3];
        local_2c = puVar10[4];
        puVar10[6] = 1;
        uVar4 = FUN_00a82090("postObject",puVar10[-5],local_90);
        FUN_00a7c970(uVar4);
      }
      iVar11 = iVar11 + 0x40;
      puVar10 = puVar10 + 0x10;
    } while (iVar11 != *(int *)(*(int *)(param_1 + 0x1c) + 8) * 0x40 +
                       *(int *)(*(int *)(param_1 + 0x1c) + 4));
  }
  local_9c = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  if (local_9c != *(int *)(*(int *)(param_1 + 0x1c) + 8) * 0x40 + local_9c) {
    iVar11 = local_9c + 0x34;
    do {
      if (((*(int *)(iVar11 + -4) != 0) && (iVar3 = *(int *)(iVar11 + -0x30), iVar3 != 0xd0124)) &&
         ((iVar3 != 0xd0249 && (iVar3 != 0xd024a)))) {
        iVar3 = FUN_00a81330();
        if ((iVar3 == 0) || (iVar3 = FUN_00a7c8a0(), (*(byte *)(iVar3 + 0x4c0) & 1) == 0)) {
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            piVar9 = (int *)FUN_00a7c8a0();
            if (piVar9 != (int *)0x0) {
              puVar13 = &DAT_01be9c54;
              (**(code **)(*piVar9 + 4))(&DAT_01be9c54);
              FUN_00dd6d80(puVar13);
            }
            FUN_00ac3e30(1);
          }
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            piVar9 = (int *)FUN_00a7c8a0();
            if (piVar9 != (int *)0x0) {
              puVar13 = &DAT_01be9c54;
              (**(code **)(*piVar9 + 4))(&DAT_01be9c54);
              FUN_00dd6d80(puVar13);
            }
            FUN_00ac3e30(1);
          }
          FUN_00a7c950();
          FUN_00a7c950();
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
          if (iVar3 != *(int *)(*(int *)(param_1 + 0x1c) + 8) * 0x40 + iVar3) {
            do {
              if ((*(int *)(iVar3 + 0x30) != 0) &&
                 (((iVar5 = *(int *)(iVar3 + 4), iVar5 == 0xd0124 || (iVar5 == 0xd0249)) ||
                  (iVar5 == 0xd024a)))) {
                if (*(int *)(iVar11 + -0x30) == 0xd002c) {
                  iVar5 = FUN_00a81330();
                  if (iVar5 != 0) {
                    uVar4 = FUN_00a7c8b0();
                    FUN_00a81330(uVar4);
                    uVar6 = FUN_00a7c8b0();
                    iVar7 = FUN_008dd230(uVar6,uVar4);
                    if (iVar7 != 0) {
                      iVar7 = FUN_00a81330();
                      if (iVar7 == 0) {
                        FUN_00a7c970(iVar5);
                      }
                      else {
LAB_008ddd11:
                        iVar7 = FUN_00a81330();
                        if (iVar7 == 0) goto LAB_008ddd20;
                      }
                    }
                  }
                }
                else {
                  iVar5 = FUN_00a81330();
                  if (iVar5 != 0) {
                    iVar7 = FUN_00a7c8a0();
                    iVar8 = FUN_00a7c8a0();
                    fVar1 = *(float *)(iVar8 + 0x40) - *(float *)(iVar7 + 0x40);
                    fVar2 = *(float *)(iVar8 + 0x48) - *(float *)(iVar7 + 0x48);
                    fVar12 = (float10)FUN_008dc510(*(undefined4 *)(iVar3 + 4));
                    if ((float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= fVar12) {
                      iVar7 = FUN_00a81330();
                      if (iVar7 != 0) goto LAB_008ddd11;
LAB_008ddd20:
                      FUN_00a7c970(iVar5);
                    }
                  }
                }
              }
              iVar3 = iVar3 + 0x40;
            } while (iVar3 != *(int *)(*(int *)(param_1 + 0x1c) + 8) * 0x40 +
                              *(int *)(*(int *)(param_1 + 0x1c) + 4));
          }
        }
      }
      local_9c = local_9c + 0x40;
      iVar11 = iVar11 + 0x40;
    } while (local_9c !=
             *(int *)(*(int *)(param_1 + 0x1c) + 8) * 0x40 + *(int *)(*(int *)(param_1 + 0x1c) + 4))
    ;
  }
  return;
}

// 008DF010  TelegraphNetContents::RoomReadySlot::vf18  size=26  [class]
void TelegraphNetContents::RoomReadySlot::vf18(undefined4 param_1,int param_2)

{
  if ((param_2 != 0) && (param_2 == 0x115)) {
    lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_4();
  }
  return;
}

// 008DF030  FUN_008df030  size=102  [between]
void __fastcall FUN_008df030(int param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((piVar2 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar2 + 1), LVar3 == 0)) {
      (**(code **)(*piVar2 + 4))();
      LVar3 = InterlockedDecrement(piVar2 + 2);
      if (LVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x008df090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 8))();
        return;
      }
    }
  }
  return;
}

// 008DF0A0  FUN_008df0a0  size=102  [between]
void __fastcall FUN_008df0a0(int param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((piVar2 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar2 + 1), LVar3 == 0)) {
      (**(code **)(*piVar2 + 4))();
      LVar3 = InterlockedDecrement(piVar2 + 2);
      if (LVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x008df100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 8))();
        return;
      }
    }
  }
  return;
}

// 008DF110  FUN_008df110  size=102  [between]
void __fastcall FUN_008df110(int param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((piVar2 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar2 + 1), LVar3 == 0)) {
      (**(code **)(*piVar2 + 4))();
      LVar3 = InterlockedDecrement(piVar2 + 2);
      if (LVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x008df170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 8))();
        return;
      }
    }
  }
  return;
}

// 008DF180  FUN_008df180  size=239  [between]
undefined4 __thiscall FUN_008df180(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_008df030();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 << 6);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3ffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 008DF270  FUN_008df270  size=256  [between]
undefined4 __thiscall FUN_008df270(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_008df0a0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 0x70);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = (uint)(param_2 * 0x70) / 0x70;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 008DF370  FUN_008df370  size=244  [between]
undefined4 __thiscall FUN_008df370(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_008df110();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 008DF470  TelegraphNetContents::vf08  size=138  [class]
undefined4 __fastcall TelegraphNetContents::vf08(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_4;
  
  local_4 = param_1;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = lib::AllocatedArray<TelegraphNetContents::PostObject>::vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  local_4 = &DAT_01b7bd48;
  FUN_008df180(0x80,&local_4);
  param_1[7] = puVar1;
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = RoomReadySlot::vftable;
    puVar1[1] = param_1;
  }
  param_1[5] = puVar1;
  FUN_00d89ec0(0x38,puVar1);
  return 1;
}

