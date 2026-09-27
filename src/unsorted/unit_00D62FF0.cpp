// src/unsorted/unit_00D62FF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D62FF0..00D63860, 3 functions

#include "types.h"

// 00D62FF0  FUN_00d62ff0  size=1022  [run]
undefined4 __fastcall FUN_00d62ff0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40 [16];
  
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_44 = 0;
  local_48 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x138);
  iVar4 = 6;
  do {
    FUN_00a7c950();
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2 = puVar2 + 0x10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_00a814d0(&local_54,0xf5000);
  if (local_48 != 1) {
LAB_00d633cc:
    if ((local_50 != (int *)0x0) && (local_48 = 0, local_44 != 0)) {
      FUN_00dd48d0(local_50,0);
    }
    return 0;
  }
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  FUN_00a81330();
  puVar2 = (undefined4 *)FUN_00a7c8b0();
  *(undefined4 *)(param_1 + 0x130) = *puVar2;
  *(undefined4 *)(param_1 + 0x134) = puVar2[1];
  *(undefined4 *)(param_1 + 0x138) = puVar2[2];
  *(undefined4 *)(param_1 + 0x13c) = puVar2[3];
  FUN_00a81330();
  iVar4 = FUN_00a7c8a0();
  if (iVar4 != 0) {
    FUN_00406380(*(undefined4 *)(param_1 + 0x360),*(undefined4 *)(param_1 + 0x364),
                 *(undefined4 *)(param_1 + 0x368));
  }
  local_48 = 0;
  FUN_00a814d0(&local_54,0xf5001);
  if (local_48 != 1) goto LAB_00d633cc;
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  FUN_00a81330();
  puVar2 = (undefined4 *)FUN_00a7c8b0();
  *(undefined4 *)(param_1 + 0x170) = *puVar2;
  *(undefined4 *)(param_1 + 0x174) = puVar2[1];
  *(undefined4 *)(param_1 + 0x178) = puVar2[2];
  local_48 = 0;
  *(undefined4 *)(param_1 + 0x17c) = puVar2[3];
  iVar4 = FUN_00e03ea0("ev_hang");
  FUN_00a814d0(&local_54,0xf5002);
  iVar5 = 0;
  if (0 < local_48) {
    do {
      if ((local_50[iVar5] != 0) && (iVar3 = FUN_00a7c8a0(), *(int *)(iVar3 + 0x4ec) == iVar4)) {
        uVar1 = FUN_00a7c7f0();
        FUN_00a7c960(uVar1);
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_48);
  }
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar5 = 0;
    local_48 = 0;
    iVar4 = FUN_00e03ea0("explosion");
    FUN_00a814d0(&local_54,0xd0013);
    if (0 < local_48) {
      do {
        if ((local_50[iVar5] != 0) && (iVar3 = FUN_00a7c8a0(), *(int *)(iVar3 + 0x4ec) == iVar4)) {
          uVar1 = FUN_00a7c7f0();
          FUN_00a7c960(uVar1);
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_48);
    }
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      uVar1 = FUN_00e03ea0("liftup_00");
      iVar4 = FUN_00a18cf0(uVar1);
      if (iVar4 != 0) {
        uVar1 = FUN_00a7c7f0();
        FUN_00a7c960(uVar1);
        iVar4 = FUN_00d45980();
        uVar1 = *(undefined4 *)(param_1 + 4);
        iVar5 = FUN_00d45860(uVar1,"P458_DEAD");
        if ((iVar4 == iVar5) || (iVar5 = FUN_00d45860(uVar1,"P458_END"), iVar4 == iVar5)) {
          FUN_00a7c950();
LAB_00d6339a:
          *(undefined4 *)(param_1 + 0x380) = 0;
          if ((local_50 != (int *)0x0) && (local_48 = 0, local_44 != 0)) {
            FUN_00dd48d0(local_50,0);
          }
          return 1;
        }
        local_48 = 0;
        FUN_00a814d0(&local_54,0xd5400);
        if (local_48 < 1) goto LAB_00d633cc;
        if (*local_50 != 0) {
          uVar1 = FUN_00a7c7f0();
          FUN_00a7c960(uVar1);
          uVar1 = *(undefined4 *)(param_1 + 4);
          iVar5 = FUN_00d45860(uVar1,"P458_START");
          if ((iVar4 < iVar5) || (iVar5 = FUN_00d45860(uVar1,"P458_BTL_01"), iVar5 <= iVar4)) {
            uVar1 = 3;
            FUN_00a7c8a0(3);
            FUN_00a8cb50(uVar1);
          }
          else {
            uVar1 = 2;
            FUN_00a7c8a0(2);
            FUN_00a8cb50(uVar1);
          }
          goto LAB_00d6339a;
        }
        goto LAB_00d631e7;
      }
    }
  }
  if (local_50 == (int *)0x0) {
    return 0;
  }
LAB_00d631e7:
  local_48 = 0;
  if (local_44 == 0) {
    return 0;
  }
  FUN_00dd48d0(local_50,0);
  return 0;
}

// 00D63480  FUN_00d63480  size=965  [run]
undefined4 __fastcall FUN_00d63480(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ushort uVar8;
  ushort extraout_var;
  ushort extraout_var_00;
  int iVar7;
  undefined2 uVar9;
  char *pcVar10;
  
  iVar4 = FUN_00a81330();
  if (((iVar4 != 0) && (iVar4 = FUN_00a81330(), iVar4 != 0)) && (iVar4 = FUN_00a81330(), iVar4 != 0)
     ) {
    FUN_00a81330();
    iVar4 = FUN_00a7c8a0();
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x310);
      iVar4 = *(int *)(iVar4 + 0xb6c);
      *(float *)(param_1 + 0x310) = (float)iVar4;
      if ((float)iVar4 < 0.0) {
        *(undefined4 *)(param_1 + 0x310) = 0;
      }
      if (*(float *)(param_1 + 0x314) != *(float *)(param_1 + 0x310)) {
        uVar5 = FUN_00e01ca0();
        uVar5 = FUN_00a4d610(0x1e,uVar5);
        FUN_00e01540(uVar5);
      }
      FUN_00a81330();
      iVar6 = FUN_00a7c8a0();
      iVar7 = 0;
      if (iVar6 != 0) {
        uVar8 = (ushort)((uint)iVar6 >> 0x10);
        if ((*(float *)(param_1 + 0x314) == 0.0) && (*(float *)(param_1 + 0x310) != 0.0)) {
          FUN_00a8cb70(3);
          uVar8 = extraout_var;
        }
        else if ((*(float *)(param_1 + 0x314) != 0.0) && (*(float *)(param_1 + 0x310) == 0.0)) {
          FUN_00a8cb70(4);
          uVar8 = extraout_var_00;
        }
        iVar7 = (uint)uVar8 << 0x10;
        if (*(float *)(param_1 + 0x314) != *(float *)(param_1 + 0x310)) {
          FUN_00a81330();
          uVar5 = FUN_00a7c8a0();
          iVar6 = FUN_00b05850(uVar5);
          iVar7 = 0;
          if (iVar6 != 0) {
            iVar6 = FUN_00a12210(0xf01);
            iVar7 = 0;
            if (iVar6 != 0) {
              puVar1 = (undefined4 *)(param_1 + 0x370);
              *puVar1 = *(undefined4 *)(iVar6 + 0x40);
              *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(iVar6 + 0x44);
              *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(iVar6 + 0x48);
              *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(iVar6 + 0x4c);
              if (iVar4 == 0) {
                FUN_00a81330(0xffffffff,0);
                uVar5 = FUN_00a7c8a0();
                iVar7 = FUN_00e5e080("Stop_ba5000_se_freighter_brake",puVar1,uVar5);
                *(undefined4 *)(param_1 + 0x380) = 0;
              }
              else {
                iVar7 = iVar4 + -1;
                switch(iVar7) {
                case 0:
                  FUN_00a81330(0xffffffff,0);
                  uVar5 = FUN_00a7c8a0();
                  pcVar10 = "ba5000_se_freighter_brake_c01";
                  break;
                case 1:
                  if (*(int *)(param_1 + 0x380) == 0) {
                    FUN_00a81330(0xffffffff,0);
                    uVar5 = FUN_00a7c8a0();
                    uVar5 = FUN_00e5e080("ba5000_se_freighter_brake_c01",puVar1,uVar5);
                    *(undefined4 *)(param_1 + 0x380) = uVar5;
                  }
                  FUN_00a81330(0xffffffff,0);
                  uVar5 = FUN_00a7c8a0();
                  pcVar10 = "ba5000_se_freighter_brake_c02";
                  break;
                case 2:
                  if (*(int *)(param_1 + 0x380) == 0) {
                    FUN_00a81330(0xffffffff,0);
                    uVar5 = FUN_00a7c8a0();
                    uVar5 = FUN_00e5e080("ba5000_se_freighter_brake_c01",puVar1,uVar5);
                    *(undefined4 *)(param_1 + 0x380) = uVar5;
                  }
                  FUN_00a81330(0xffffffff,0);
                  uVar5 = FUN_00a7c8a0();
                  pcVar10 = "ba5000_se_freighter_brake_c03";
                  break;
                case 3:
                  if (*(int *)(param_1 + 0x380) == 0) {
                    FUN_00a81330(0xffffffff,0);
                    uVar5 = FUN_00a7c8a0();
                    uVar5 = FUN_00e5e080("ba5000_se_freighter_brake_c01",puVar1,uVar5);
                    *(undefined4 *)(param_1 + 0x380) = uVar5;
                  }
                  FUN_00a81330(0xffffffff,0);
                  uVar5 = FUN_00a7c8a0();
                  pcVar10 = "ba5000_se_freighter_brake_c04";
                  break;
                case 4:
                  if (*(int *)(param_1 + 0x380) == 0) {
                    FUN_00a81330(0xffffffff,0);
                    uVar5 = FUN_00a7c8a0();
                    uVar5 = FUN_00e5e080("ba5000_se_freighter_brake_c01",puVar1,uVar5);
                    *(undefined4 *)(param_1 + 0x380) = uVar5;
                  }
                  FUN_00a81330(0xffffffff,0);
                  uVar5 = FUN_00a7c8a0();
                  pcVar10 = "ba5000_se_freighter_brake_c05";
                  break;
                default:
                  goto switchD_00d63673_default;
                }
                iVar7 = FUN_00e5e080(pcVar10,puVar1,uVar5);
                *(int *)(param_1 + 0x380) = iVar7;
              }
            }
          }
        }
      }
switchD_00d63673_default:
      fVar2 = *(float *)(param_1 + 0x314);
      fVar3 = *(float *)(param_1 + 0x310);
      uVar9 = (undefined2)((uint)iVar7 >> 0x10);
      uVar5 = CONCAT22(uVar9,(ushort)(fVar3 < fVar2) << 8 | (ushort)(NAN(fVar3) || NAN(fVar2)) << 10
                             | (ushort)(fVar3 == fVar2) << 0xe);
      if (fVar3 != fVar2) {
        fVar2 = *(float *)(param_1 + 0x310);
        fVar3 = *(float *)(param_1 + 0x314);
        uVar5 = CONCAT22(uVar9,(ushort)(fVar2 < fVar3) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                               (ushort)(fVar2 == fVar3) << 0xe);
        if (fVar2 < fVar3 == 0 && (fVar2 == fVar3) == 0) {
          *(float *)(param_1 + 0x340) =
               (*(float *)(param_1 + 0x310) - *(float *)(param_1 + 0x314)) +
               *(float *)(param_1 + 0x340);
        }
      }
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  return 0;
}

// 00D63860  FUN_00d63860  size=169  [run]
undefined4 __fastcall FUN_00d63860(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x1c))(0);
  while (iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x1c))(iVar1);
    FUN_00dd4920(iVar1);
    iVar1 = iVar2;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = 2;
  FUN_00a81330(2);
  FUN_00a7c8a0();
  FUN_00a8cb50(uVar3);
  uVar3 = 4;
  FUN_00a81330(4);
  FUN_00a7c8a0();
  FUN_00a8cb60(uVar3);
  DAT_01bea070 = DAT_01bea070 | 0x200000;
  DAT_018b9128 = 3;
  return 1;
}

