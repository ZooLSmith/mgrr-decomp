// src/phase/app/dlc/pc20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4B2D0..00D708A0, 12 functions

#include "mgrr.h"
#include "cPc20.h"

// 00D4B2D0  cPc20::vf08  size=312  [class]
void __fastcall cPc20::vf08(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  char local_20 [32];
  
  DAT_01dc51c8 = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  uVar1 = FUN_00e03ea0("PC20_WOLF");
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  uVar1 = FUN_00e03ea0("PC20_WOLF_DEAD");
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  uVar1 = FUN_00e03ea0("pc20_LIFT_UP");
  *(undefined4 *)(param_1 + 0x1fc) = uVar1;
  uVar1 = FUN_00e03ea0("pc20_LIFT_STOP");
  *(undefined4 *)(param_1 + 0x200) = uVar1;
  uVar2 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x130);
  do {
    uVar2 = uVar2 + 1;
    local_20[0] = '\0';
    local_20[1] = '\0';
    local_20[2] = '\0';
    local_20[3] = '\0';
    local_20[4] = '\0';
    local_20[5] = '\0';
    local_20[6] = '\0';
    local_20[7] = '\0';
    local_20[8] = '\0';
    local_20[9] = '\0';
    local_20[10] = '\0';
    local_20[0xb] = '\0';
    local_20[0xc] = '\0';
    local_20[0xd] = '\0';
    local_20[0xe] = '\0';
    local_20[0xf] = '\0';
    local_20[0x10] = '\0';
    local_20[0x11] = '\0';
    local_20[0x12] = '\0';
    local_20[0x13] = '\0';
    local_20[0x14] = '\0';
    local_20[0x15] = '\0';
    local_20[0x16] = '\0';
    local_20[0x17] = '\0';
    local_20[0x18] = '\0';
    local_20[0x19] = '\0';
    local_20[0x1a] = '\0';
    local_20[0x1b] = '\0';
    local_20[0x1c] = '\0';
    local_20[0x1d] = '\0';
    local_20[0x1e] = '\0';
    local_20[0x1f] = '\0';
    _sprintf_s(local_20,0x20,"appear%02d",uVar2);
    uVar1 = FUN_00e03ea0(local_20);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 3;
  } while (uVar2 < 0xd);
  uVar2 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x1cc);
  do {
    uVar2 = uVar2 + 1;
    local_20[0] = '\0';
    local_20[1] = '\0';
    local_20[2] = '\0';
    local_20[3] = '\0';
    local_20[4] = '\0';
    local_20[5] = '\0';
    local_20[6] = '\0';
    local_20[7] = '\0';
    local_20[8] = '\0';
    local_20[9] = '\0';
    local_20[10] = '\0';
    local_20[0xb] = '\0';
    local_20[0xc] = '\0';
    local_20[0xd] = '\0';
    local_20[0xe] = '\0';
    local_20[0xf] = '\0';
    local_20[0x10] = '\0';
    local_20[0x11] = '\0';
    local_20[0x12] = '\0';
    local_20[0x13] = '\0';
    local_20[0x14] = '\0';
    local_20[0x15] = '\0';
    local_20[0x16] = '\0';
    local_20[0x17] = '\0';
    local_20[0x18] = '\0';
    local_20[0x19] = '\0';
    local_20[0x1a] = '\0';
    local_20[0x1b] = '\0';
    local_20[0x1c] = '\0';
    local_20[0x1d] = '\0';
    local_20[0x1e] = '\0';
    local_20[0x1f] = '\0';
    _sprintf_s(local_20,0x20,"vanish%02d",uVar2);
    uVar1 = FUN_00e03ea0(local_20);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 3;
  } while (uVar2 < 3);
  return;
}

// 00D4B410  cPc20::vf10  size=1  [class]
void cPc20::vf10(void)

{
  return;
}

// 00D4B430  FUN_00d4b430  size=273  [callgraph]
void __fastcall FUN_00d4b430(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(DAT_01dc51c8) {
  case 1:
    uVar2 = FUN_00a7c8a0(0,0);
    uVar2 = FUN_00e5e0c0("ba5000_se_freighter_start",uVar2);
    *(undefined4 *)(param_1 + 300) = uVar2;
    DAT_01dc51c8 = 2;
    return;
  case 2:
    iVar1 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 300));
    if (iVar1 == 0) {
      uVar2 = FUN_00a7c8a0(0,0);
      uVar2 = FUN_00e5e0c0("ba5000_se_freighter_loop",uVar2);
      *(undefined4 *)(param_1 + 300) = uVar2;
      DAT_01dc51c8 = 3;
      return;
    }
    break;
  case 4:
    if (*(int *)(param_1 + 300) != 0) {
      FUN_00e5ca30(*(int *)(param_1 + 300),0x40400000);
      *(undefined4 *)(param_1 + 300) = 0;
    }
    DAT_01dc51c8 = 5;
    return;
  case 5:
    uVar2 = FUN_00a7c8a0(0,0);
    FUN_00e5e0c0("Stop_ba5000_se_freighter_loop",uVar2);
    uVar2 = FUN_00a7c8a0(0,0);
    FUN_00e5e0c0("ba5001_se_freighter_end",uVar2);
    DAT_01dc51c8 = 6;
    return;
  case 6:
    DAT_01dc51c8 = 7;
  }
  return;
}

// 00D55C90  cPc20::vf14  size=784  [class]
void __thiscall cPc20::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  pcVar6 = "PC20_WOLF_DEAD";
  pbVar2 = param_3;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00d55cc8:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00d55ccd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_00d55cc8;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d55ccd:
  if ((iVar3 == 0) && (*(int *)(param_1 + 0x11c) != -1)) {
    FUN_009412f0(*(int *)(param_1 + 0x11c));
    local_20 = 0;
    iVar3 = 0;
    local_1c = 0;
    local_18 = 0;
    do {
      iVar4 = FUN_0093e4a0(iVar3);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x14) == *(int *)(param_1 + 0x11c))) {
        FUN_0093ea30(&local_20);
        FUN_0093dda0(0x3f800000);
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    lib::StaticArray<Hw::cVec3,32>::StaticArray<Hw::cVec3,32>(&local_20,0x3855170f,7);
    *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  }
  pcVar6 = "PC20_LIFT_UP";
  pbVar2 = param_3;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00d55d80:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00d55d85;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_00d55d80;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d55d85:
  if (iVar3 == 0) {
    FUN_00950d10();
  }
  pcVar6 = "PC20_IN";
  uVar8 = 1;
  uVar5 = FUN_00e03ea0("PC20_IN",1,"PC20_IN");
  iVar3 = FUN_00d4f0b0(uVar5,uVar8,pcVar6);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x1f0) = 1;
  }
  pcVar6 = "PC20_LIFT_UP";
  uVar8 = 0;
  uVar5 = FUN_00e03ea0("PC20_LIFT_UP",0,"PC20_LIFT_UP");
  iVar3 = FUN_00d4f0b0(uVar5,uVar8,pcVar6);
  if (iVar3 == 0) {
    FUN_00956850(9,0xc05,0);
    FUN_00956850(10,0xc05,0);
    FUN_00956850(0xb,0xc05,0);
    FUN_00956850(0xc,0xc05,0);
    FUN_00956850(0xd,0xc05,0);
    FUN_00956850(0xe,0xc05,0);
    FUN_00956850(0xf,0xc05,0);
    FUN_00956850(0x10,0xc05,0);
  }
  pcVar6 = "PC20_LIFT_UP";
  uVar8 = 1;
  uVar5 = FUN_00e03ea0("PC20_LIFT_UP",1,"PC20_LIFT_UP");
  iVar3 = FUN_00d4f0b0(uVar5,uVar8,pcVar6);
  if (iVar3 != 0) {
    FUN_00956850(0,0xc05,0);
    FUN_00956850(1,0xc05,0);
    FUN_00956850(2,0xc05,0);
    FUN_00956850(3,0xc05,0);
    FUN_00956850(4,0xc05,0);
    FUN_00956850(5,0xc05,0);
    FUN_00956850(6,0xc05,0);
    FUN_00956850(7,0xc05,0);
  }
  pcVar6 = "PC20_LIFT_STOP";
  do {
    bVar1 = *param_3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00d55f18:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00d55f1d;
    }
    if (bVar1 == 0) break;
    bVar1 = param_3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_00d55f18;
    param_3 = param_3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d55f1d:
  if (iVar3 == 0) {
    FUN_00956850(9,0xc05,1);
    FUN_00956850(10,0xc05,1);
    FUN_00956850(0xb,0xc05,1);
    FUN_00956850(0xc,0xc05,1);
    FUN_00956850(0xd,0xc05,1);
    FUN_00956850(0xe,0xc05,1);
    FUN_00956850(0xf,0xc05,1);
    FUN_00956850(0x10,0xc05,1);
  }
  return;
}

// 00D55FA0  FUN_00d55fa0  size=443  [between]
void FUN_00d55fa0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar5 = &DAT_01b34b38;
    (**(code **)(*piVar1 + 4))(&DAT_01b34b38);
    iVar2 = FUN_00dd6d80(puVar5);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00a6e640();
      iVar2 = (**(code **)(*piVar1 + 0x24))(20000,1,1);
      if (iVar2 == 0) {
        piVar1 = (int *)FUN_00a6e640();
        iVar2 = (**(code **)(*piVar1 + 0x24))(0x4e2a,1,1);
        if (iVar2 == 0) {
          piVar1 = (int *)FUN_00a6e640();
          iVar2 = (**(code **)(*piVar1 + 0x24))(0x4e2b,1,1);
          if (iVar2 == 0) {
            piVar1 = (int *)FUN_00a6e640();
            iVar2 = (**(code **)(*piVar1 + 0x24))(0x4e34,1,1);
            if (iVar2 == 0) {
              uVar3 = 0;
              do {
                switch(uVar3) {
                case 0:
                  piVar1 = (int *)FUN_00a6e640();
                  iVar2 = (**(code **)(*piVar1 + 0x2c))(&stack0xffffffd4,20000,1);
                  uVar4 = 0;
                  break;
                case 1:
                  piVar1 = (int *)FUN_00a6e640();
                  iVar2 = (**(code **)(*piVar1 + 0x2c))(&stack0xffffffd4,0x4e2a,1);
                  if (iVar2 == 0) {
                    piVar1 = (int *)FUN_00a6e640();
                    iVar2 = (**(code **)(*piVar1 + 0x2c))(&stack0xffffffd4,0x4e2b,1);
                  }
                  uVar4 = 1;
                  break;
                case 2:
                  piVar1 = (int *)FUN_00a6e640();
                  iVar2 = (**(code **)(*piVar1 + 0x2c))(&stack0xffffffd4,0x4e34,1);
                  uVar4 = 2;
                  break;
                case 3:
                  iVar2 = 0;
                  uVar4 = 3;
                  break;
                default:
                  goto switchD_00d5608c_default;
                }
                FUN_004063b0(uVar4,iVar2);
switchD_00d5608c_default:
                uVar3 = uVar3 + 1;
                if (3 < uVar3) {
                  return;
                }
              } while( true );
            }
          }
        }
      }
      FUN_004063b0(0,0);
      FUN_004063b0(1,0);
      FUN_004063b0(2,0);
      FUN_004063b0(3,0);
    }
  }
  return;
}

// 00D56170  FUN_00d56170  size=513  [between]
void __fastcall FUN_00d56170(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x1f0) != 0) {
    if (*(int *)(param_1 + 500) == 0) {
      uVar6 = 0;
      piVar3 = (int *)(param_1 + 0x1d0);
      iVar5 = 3;
      do {
        iVar1 = FUN_00a18cf0(piVar3[-1]);
        if (iVar1 != 0) {
          *piVar3 = iVar1;
          uVar6 = uVar6 + 1;
        }
        piVar3 = piVar3 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (2 < uVar6) {
        *(undefined4 *)(param_1 + 500) = 1;
      }
    }
    if (*(int *)(param_1 + 0x1f8) == 0) {
      uVar6 = 0;
      piVar3 = (int *)(param_1 + 0x134);
      iVar5 = 0xd;
      do {
        iVar1 = FUN_00a18cf0(piVar3[-1]);
        if (iVar1 != 0) {
          *piVar3 = iVar1;
          uVar6 = uVar6 + 1;
        }
        piVar3 = piVar3 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (0xc < uVar6) {
        *(undefined4 *)(param_1 + 0x1f8) = 1;
      }
    }
  }
  if ((*(int *)(param_1 + 500) != 0) &&
     (iVar5 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x1fc),1), iVar5 != 0)) {
    piVar3 = (int *)(param_1 + 0x1d0);
    iVar5 = 3;
    do {
      if (*piVar3 != 0) {
        iVar1 = FUN_00a7c7e0();
        if (iVar1 == 0) {
          *piVar3 = 0;
        }
        else {
          piVar2 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar2 + 0x20))();
        }
      }
      piVar3 = piVar3 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0x1f8) == 0) {
    return;
  }
  if (DAT_018b9258 != 0) {
    iVar5 = 0;
    if (0 < *(int *)(DAT_018b9258 + 4)) {
      piVar3 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
      do {
        if (*piVar3 == *(int *)(param_1 + 0x200)) {
          if (-1 < iVar5) {
            iVar1 = FUN_00e03ea0(&DAT_018b917c);
            if (DAT_018b9258 == 0) goto LAB_00d5630e;
            iVar4 = 0;
            if (*(int *)(DAT_018b9258 + 4) < 1) goto LAB_00d5630e;
            piVar3 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
            goto LAB_00d56302;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        piVar3 = piVar3 + 0xb;
      } while (iVar5 < *(int *)(DAT_018b9258 + 4));
    }
  }
  FUN_00dd5650(&DAT_016bcbc4,*(int *)(param_1 + 0x200));
  goto LAB_00d562a0;
  while( true ) {
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 0xb;
    if (*(int *)(DAT_018b9258 + 4) <= iVar4) break;
LAB_00d56302:
    if (*piVar3 == iVar1) goto LAB_00d56311;
  }
LAB_00d5630e:
  iVar4 = -1;
LAB_00d56311:
  if ((iVar4 == iVar5) || (iVar5 < iVar4)) {
    piVar3 = (int *)(param_1 + 0x134);
    iVar5 = 0xd;
    do {
      if (*piVar3 != 0) {
        iVar1 = FUN_00a7c7e0();
        if (iVar1 == 0) {
          *piVar3 = 0;
        }
        else if (piVar3[1] == 0) {
          piVar2 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar2 + 0x1c))();
          piVar3[1] = 1;
        }
      }
      piVar3 = piVar3 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
  }
LAB_00d562a0:
  piVar3 = (int *)(param_1 + 0x134);
  iVar5 = 0xd;
  do {
    if (*piVar3 != 0) {
      iVar1 = FUN_00a7c7e0();
      if (iVar1 == 0) {
        *piVar3 = 0;
      }
      else {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x20))();
      }
    }
    piVar3 = piVar3 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

// 00D56380  cPc20::vf30  size=145  [class]
undefined1 * cPc20::vf30(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = "startElvFunction";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00d563b0:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d563b5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00d563b0;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d563b5:
  if (iVar3 == 0) {
    return &LAB_00d4b560;
  }
  pcVar4 = "endElvFunction";
  while( true ) {
    bVar1 = *param_1;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) break;
    if (bVar1 == 0) {
      return &DAT_00d4b580;
    }
    bVar1 = param_1[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) break;
    param_1 = param_1 + 2;
    pcVar4 = pcVar4 + 2;
    if (bVar1 == 0) {
      return &DAT_00d4b580;
    }
  }
  return (undefined1 *)(~-(uint)(1 - bVar5 != (uint)(bVar5 != 0)) & 0xd4b580);
}

// 00D5D240  cPc20::vf18  size=118  [class]
void __fastcall cPc20::vf18(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x120),1);
  if (iVar1 != 0) {
    iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x124),1);
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x11c) == -1)) {
      iVar1 = FUN_00c19c00(0,0,0);
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4b0) == 0x2c220)) {
          *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(iVar1 + 0x83c);
        }
      }
    }
  }
  FUN_00d56170();
  return;
}

// 00D5D2C0  cPc20::vf2C  size=20  [class]
void cPc20::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D5D2E0  FUN_00d5d2e0  size=75  [callgraph]
void __fastcall FUN_00d5d2e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x128) == 0) {
    uVar1 = FUN_00a7f600(0xf5000);
    *(undefined4 *)(param_1 + 0x128) = uVar1;
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    iVar2 = FUN_00a7c7e0();
    if (iVar2 != 0) {
      FUN_00d4b430();
      FUN_00d55fa0();
      return;
    }
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return;
}

// 00D64B60  cPc20::vf0C  size=75  [class]
void __fastcall cPc20::vf0C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x128) == 0) {
    uVar1 = FUN_00a7f600(0xf5000);
    *(undefined4 *)(param_1 + 0x128) = uVar1;
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    iVar2 = FUN_00a7c7e0();
    if (iVar2 != 0) {
      FUN_00d4b430();
      FUN_00d55fa0();
      return;
    }
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return;
}

// 00D708A0  cPc20::vf00  size=54  [class]
undefined4 * __thiscall cPc20::vf00(undefined4 *param_1,byte param_2)

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

