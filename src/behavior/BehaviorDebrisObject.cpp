// src/behavior/BehaviorDebrisObject.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D8900..005E24B0, 9 functions

#include "mgrr.h"
#include "BehaviorDebrisObject.h"

// 005D8900  BehaviorDebrisObject::vf44  size=42  [class]
void __fastcall BehaviorDebrisObject::vf44(int param_1)

{
  RayCastManager::getWork(param_1 + 0x980);
  *(undefined4 *)(param_1 + 0x984) = 0;
  *(undefined4 *)(param_1 + 0x988) = 0;
  BehaviorDebrisBase::vf44();
  return;
}

// 005DA770  BehaviorDebrisObject::vf30  size=86  [class]
void __fastcall BehaviorDebrisObject::vf30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  BehaviorDebrisBase::vf30();
  iVar2 = *(int *)(param_1 + 0x588);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0xbc) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x990);
      *(undefined4 *)(iVar2 + 0xbc) = 1;
      *(undefined4 *)(iVar2 + 0xc0) = uVar1;
      return;
    }
    if (*(int *)(param_1 + 0x994) != 0) {
      *(undefined4 *)(iVar2 + 0xbc) = 1;
      *(undefined4 *)(iVar2 + 0xc0) = *(undefined4 *)(iVar2 + 0xc0);
    }
  }
  return;
}

// 005DA7D0  BehaviorDebrisObject::BehaviorDebrisObject  size=91  [class]
undefined4 * __fastcall BehaviorDebrisObject::BehaviorDebrisObject(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = BehaviorDebrisBase::vftable;
  FUN_009003e0();
  param_1[0x227] = 0;
  param_1[0x241] = 0;
  param_1[0x242] = 0;
  FUN_00a7c930();
  param_1[599] = 0;
  param_1[0x24f] = 0;
  *param_1 = vftable;
  FUN_00904d60();
  return param_1;
}

// 005DA830  BehaviorDebrisObject::vf04  size=6  [class]
undefined * BehaviorDebrisObject::vf04(void)

{
  return &DAT_01b35308;
}

// 005DA840  BehaviorDebrisObject::destruct  size=43  [class]
undefined4 __thiscall BehaviorDebrisObject::destruct(undefined4 param_1,byte param_2)

{
  FUN_00905ce0();
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 005DDE10  BehaviorDebrisObject::vf4C  size=154  [class]
void __fastcall BehaviorDebrisObject::vf4C(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  BehaviorDebrisBase::vf4C();
  iVar2 = *(int *)(param_1 + 0x4b4);
  if ((((iVar2 == 0x20010) || (iVar2 == 0x20140)) || (iVar2 == 0x20030)) &&
     (*(int *)(param_1 + 0x880) != 0)) {
    FUN_005dcde0();
  }
  if (((*(int *)(param_1 + 0x890) != 0) &&
      (fVar1 = *(float *)(param_1 + 0x884),
      !NAN(fVar1) && 0.16666667 < fVar1 != (fVar1 == 0.16666667))) &&
     ((*(int *)(param_1 + 0x4b4) == 0x30330 && (*(int *)(param_1 + 0x7b4) != 0)))) {
    iVar2 = FUN_00916970();
    if (iVar2 == 0) {
      fVar3 = (float10)FUN_00dde300(0,0x3f800000);
      *(float *)(param_1 + 0x900) =
           (float)(fVar3 * (float10)0.1 + (float10)*(float *)(param_1 + 0x884));
    }
  }
  return;
}

// 005DE890  BehaviorDebrisObject::vf50  size=2501  [class]
void __fastcall BehaviorDebrisObject::vf50(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  short sVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar19;
  bool bVar20;
  float10 fVar21;
  undefined4 uVar22;
  int local_468;
  int local_464;
  undefined **local_420;
  int *local_41c;
  int local_418;
  undefined4 local_414;
  int local_410 [259];
  
  BehaviorDebrisBase::vf50();
  if (*(int *)(param_1 + 0x4b4) != 0x20044) {
    return;
  }
  if (*(int *)(param_1 + 0x7b4) != 0) {
    return;
  }
  local_41c = local_410;
  local_464 = 0;
  local_468 = 0;
  local_418 = 0;
  local_414 = 0x100;
  local_420 = lib::StaticArray<Entity*,256>::vftable;
  FUN_00a7f440(0x42000,&local_420);
  piVar18 = local_41c;
  if (local_41c != local_41c + local_418) {
    do {
      iVar15 = *piVar18;
      iVar9 = FUN_00a7c8a0();
      iVar12 = local_464;
      if (*(int *)(iVar9 + 0x4b4) == 0x20044) {
        iVar9 = FUN_00a7c8a0();
        iVar14 = 0;
        if (0 < *(short *)(iVar9 + 0x324)) {
          piVar17 = (int *)(*(int *)(iVar9 + 800) + 0x60);
          do {
            pbVar13 = *(byte **)(*piVar17 + 0x40);
            if (pbVar13 != (byte *)0x0) {
              pcVar10 = "hontai";
              do {
                bVar7 = *pcVar10;
                bVar20 = bVar7 < *pbVar13;
                if (bVar7 != *pbVar13) {
LAB_005de985:
                  iVar11 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                  goto LAB_005de98a;
                }
                if (bVar7 == 0) break;
                bVar7 = pcVar10[1];
                bVar20 = bVar7 < pbVar13[1];
                if (bVar7 != pbVar13[1]) goto LAB_005de985;
                pcVar10 = pcVar10 + 2;
                pbVar13 = pbVar13 + 2;
              } while (bVar7 != 0);
              iVar11 = 0;
LAB_005de98a:
              if (iVar11 == 0) {
                if (((iVar14 != -1) && (iVar14 * 0x70 + *(int *)(iVar9 + 800) != 0)) &&
                   (iVar12 = iVar15, local_464 != 0)) {
                  local_468 = iVar15;
                  iVar12 = local_464;
                }
                break;
              }
            }
            iVar14 = iVar14 + 1;
            piVar17 = piVar17 + 0x1c;
          } while (iVar14 < *(short *)(iVar9 + 0x324));
        }
      }
      local_464 = iVar12;
      piVar18 = piVar18 + 1;
    } while (piVar18 != local_41c + local_418);
  }
  fVar21 = (float10)FUN_00a93060();
  fVar21 = fVar21 + (float10)*(float *)(param_1 + 0x91c);
  *(float *)(param_1 + 0x91c) = (float)fVar21;
  if (fVar21 <= (float10)0.16666667) {
    return;
  }
  sVar8 = *(short *)(param_1 + 0x324);
  iVar15 = 0;
  if (0 < sVar8) {
    piVar18 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar13 = *(byte **)(*piVar18 + 0x40);
      if (pbVar13 != (byte *)0x0) {
        pcVar10 = "kogecko_arms9";
        do {
          bVar7 = *pcVar10;
          bVar20 = bVar7 < *pbVar13;
          if (bVar7 != *pbVar13) {
LAB_005dea60:
            iVar12 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_005dea65;
          }
          if (bVar7 == 0) break;
          bVar7 = pcVar10[1];
          bVar20 = bVar7 < pbVar13[1];
          if (bVar7 != pbVar13[1]) goto LAB_005dea60;
          pcVar10 = pcVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar7 != 0);
        iVar12 = 0;
LAB_005dea65:
        if (iVar12 == 0) {
          if ((iVar15 != -1) && (iVar15 * 0x70 + *(int *)(param_1 + 800) != 0)) goto LAB_005df0e0;
          break;
        }
      }
      iVar15 = iVar15 + 1;
      piVar18 = piVar18 + 0x1c;
    } while (iVar15 < *(short *)(param_1 + 0x324));
  }
  iVar15 = 0;
  if (0 < sVar8) {
    piVar18 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar13 = *(byte **)(*piVar18 + 0x40);
      if (pbVar13 != (byte *)0x0) {
        pcVar10 = "kogecko_arms3";
        do {
          bVar7 = *pcVar10;
          bVar20 = bVar7 < *pbVar13;
          if (bVar7 != *pbVar13) {
LAB_005dead1:
            iVar12 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_005dead6;
          }
          if (bVar7 == 0) break;
          bVar7 = pcVar10[1];
          bVar20 = bVar7 < pbVar13[1];
          if (bVar7 != pbVar13[1]) goto LAB_005dead1;
          pcVar10 = pcVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar7 != 0);
        iVar12 = 0;
LAB_005dead6:
        if (iVar12 == 0) {
          if ((iVar15 != -1) && (iVar15 * 0x70 + *(int *)(param_1 + 800) != 0)) goto LAB_005df0e0;
          break;
        }
      }
      iVar15 = iVar15 + 1;
      piVar18 = piVar18 + 0x1c;
    } while (iVar15 < *(short *)(param_1 + 0x324));
  }
  iVar15 = 0;
  if (0 < sVar8) {
    piVar18 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar13 = *(byte **)(*piVar18 + 0x40);
      if (pbVar13 != (byte *)0x0) {
        pcVar10 = "kogecko_arms2";
        do {
          bVar7 = *pcVar10;
          bVar20 = bVar7 < *pbVar13;
          if (bVar7 != *pbVar13) {
LAB_005deb42:
            iVar12 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_005deb47;
          }
          if (bVar7 == 0) break;
          bVar7 = pcVar10[1];
          bVar20 = bVar7 < pbVar13[1];
          if (bVar7 != pbVar13[1]) goto LAB_005deb42;
          pcVar10 = pcVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar7 != 0);
        iVar12 = 0;
LAB_005deb47:
        if (iVar12 == 0) {
          if ((iVar15 != -1) && (iVar15 * 0x70 + *(int *)(param_1 + 800) != 0)) goto LAB_005df0e0;
          break;
        }
      }
      iVar15 = iVar15 + 1;
      piVar18 = piVar18 + 0x1c;
    } while (iVar15 < *(short *)(param_1 + 0x324));
  }
  iVar15 = 0;
  if (0 < sVar8) {
    piVar18 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar13 = *(byte **)(*piVar18 + 0x40);
      if (pbVar13 != (byte *)0x0) {
        pcVar10 = "kogecko_arms10";
        do {
          bVar7 = *pcVar10;
          bVar20 = bVar7 < *pbVar13;
          if (bVar7 != *pbVar13) {
LAB_005debb3:
            iVar12 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_005debb8;
          }
          if (bVar7 == 0) break;
          bVar7 = pcVar10[1];
          bVar20 = bVar7 < pbVar13[1];
          if (bVar7 != pbVar13[1]) goto LAB_005debb3;
          pcVar10 = pcVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar7 != 0);
        iVar12 = 0;
LAB_005debb8:
        if (iVar12 == 0) {
          if ((iVar15 != -1) && (iVar15 * 0x70 + *(int *)(param_1 + 800) != 0)) goto LAB_005def82;
          break;
        }
      }
      iVar15 = iVar15 + 1;
      piVar18 = piVar18 + 0x1c;
    } while (iVar15 < *(short *)(param_1 + 0x324));
  }
  iVar15 = 0;
  if (0 < sVar8) {
    piVar18 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar13 = *(byte **)(*piVar18 + 0x40);
      if (pbVar13 != (byte *)0x0) {
        pcVar10 = "kogecko_arms17";
        do {
          bVar7 = *pcVar10;
          bVar20 = bVar7 < *pbVar13;
          if (bVar7 != *pbVar13) {
LAB_005dec24:
            iVar12 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_005dec29;
          }
          if (bVar7 == 0) break;
          bVar7 = pcVar10[1];
          bVar20 = bVar7 < pbVar13[1];
          if (bVar7 != pbVar13[1]) goto LAB_005dec24;
          pcVar10 = pcVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar7 != 0);
        iVar12 = 0;
LAB_005dec29:
        if (iVar12 == 0) {
          if ((iVar15 != -1) && (iVar15 * 0x70 + *(int *)(param_1 + 800) != 0)) goto LAB_005def82;
          break;
        }
      }
      iVar15 = iVar15 + 1;
      piVar18 = piVar18 + 0x1c;
    } while (iVar15 < *(short *)(param_1 + 0x324));
  }
  iVar15 = 0;
  if (0 < sVar8) {
    piVar18 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar13 = *(byte **)(*piVar18 + 0x40);
      if (pbVar13 != (byte *)0x0) {
        pcVar10 = "kogecko_arms18";
        do {
          bVar7 = *pcVar10;
          bVar20 = bVar7 < *pbVar13;
          if (bVar7 != *pbVar13) {
LAB_005dec95:
            iVar12 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_005dec9a;
          }
          if (bVar7 == 0) break;
          bVar7 = pcVar10[1];
          bVar20 = bVar7 < pbVar13[1];
          if (bVar7 != pbVar13[1]) goto LAB_005dec95;
          pcVar10 = pcVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar7 != 0);
        iVar12 = 0;
LAB_005dec9a:
        if (iVar12 == 0) {
          if ((iVar15 != -1) && (iVar15 * 0x70 + *(int *)(param_1 + 800) != 0)) goto LAB_005def82;
          break;
        }
      }
      iVar15 = iVar15 + 1;
      piVar18 = piVar18 + 0x1c;
    } while (iVar15 < *(short *)(param_1 + 0x324));
  }
  iVar15 = 0;
  if (0 < sVar8) {
    piVar18 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar13 = *(byte **)(*piVar18 + 0x40);
      if (pbVar13 != (byte *)0x0) {
        pcVar10 = "kogecko_arms5";
        do {
          bVar7 = *pcVar10;
          bVar20 = bVar7 < *pbVar13;
          if (bVar7 != *pbVar13) {
LAB_005ded06:
            iVar12 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_005ded0b;
          }
          if (bVar7 == 0) break;
          bVar7 = pcVar10[1];
          bVar20 = bVar7 < pbVar13[1];
          if (bVar7 != pbVar13[1]) goto LAB_005ded06;
          pcVar10 = pcVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar7 != 0);
        iVar12 = 0;
LAB_005ded0b:
        if (iVar12 == 0) {
          if ((iVar15 != -1) && (iVar15 * 0x70 + *(int *)(param_1 + 800) != 0)) goto LAB_005dee28;
          break;
        }
      }
      iVar15 = iVar15 + 1;
      piVar18 = piVar18 + 0x1c;
    } while (iVar15 < *(short *)(param_1 + 0x324));
  }
  iVar15 = 0;
  if (0 < sVar8) {
    piVar18 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar13 = *(byte **)(*piVar18 + 0x40);
      if (pbVar13 != (byte *)0x0) {
        pcVar10 = "kogecko_arms6";
        do {
          bVar7 = *pcVar10;
          bVar20 = bVar7 < *pbVar13;
          if (bVar7 != *pbVar13) {
LAB_005ded80:
            iVar12 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_005ded85;
          }
          if (bVar7 == 0) break;
          bVar7 = pcVar10[1];
          bVar20 = bVar7 < pbVar13[1];
          if (bVar7 != pbVar13[1]) goto LAB_005ded80;
          pcVar10 = pcVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar7 != 0);
        iVar12 = 0;
LAB_005ded85:
        if (iVar12 == 0) {
          if ((iVar15 != -1) && (iVar15 * 0x70 + *(int *)(param_1 + 800) != 0)) goto LAB_005dee28;
          break;
        }
      }
      iVar15 = iVar15 + 1;
      piVar18 = piVar18 + 0x1c;
    } while (iVar15 < *(short *)(param_1 + 0x324));
  }
  iVar15 = 0;
  if (sVar8 < 1) {
    return;
  }
  piVar18 = (int *)(*(int *)(param_1 + 800) + 0x60);
  do {
    pbVar13 = *(byte **)(*piVar18 + 0x40);
    if (pbVar13 != (byte *)0x0) {
      pcVar10 = "kogecko_arms11";
      do {
        bVar7 = *pcVar10;
        bVar20 = bVar7 < *pbVar13;
        if (bVar7 != *pbVar13) {
LAB_005dedf1:
          iVar12 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
          goto LAB_005dedf6;
        }
        if (bVar7 == 0) break;
        bVar7 = pcVar10[1];
        bVar20 = bVar7 < pbVar13[1];
        if (bVar7 != pbVar13[1]) goto LAB_005dedf1;
        pcVar10 = pcVar10 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar7 != 0);
      iVar12 = 0;
LAB_005dedf6:
      if (iVar12 == 0) {
        if (iVar15 == -1) {
          return;
        }
        if (iVar15 * 0x70 + *(int *)(param_1 + 800) == 0) {
          return;
        }
LAB_005dee28:
        iVar15 = FUN_00a81330();
        if ((iVar15 == 0) && (*(int *)(param_1 + 0x918) == 0)) {
          iVar15 = FUN_00a12210(0x24);
          fVar1 = *(float *)(iVar15 + 0x40);
          fVar2 = *(float *)(iVar15 + 0x44);
          uVar22 = 0x24;
          fVar3 = *(float *)(iVar15 + 0x48);
          FUN_00a7c8a0(0x24);
          iVar15 = FUN_00a12210(uVar22);
          fVar4 = *(float *)(iVar15 + 0x40);
          fVar5 = *(float *)(iVar15 + 0x44);
          uVar22 = 0x24;
          fVar6 = *(float *)(iVar15 + 0x48);
          FUN_00a7c8a0(0x24);
          iVar15 = FUN_00a12210(uVar22);
          fVar4 = fVar4 - fVar1;
          fVar5 = fVar5 - fVar2;
          fVar6 = fVar6 - fVar3;
          fVar1 = *(float *)(iVar15 + 0x40) - fVar1;
          fVar2 = *(float *)(iVar15 + 0x44) - fVar2;
          fVar3 = *(float *)(iVar15 + 0x48) - fVar3;
          if (SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) <
              SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6)) {
            local_464 = local_468;
          }
          uVar22 = FUN_00a7f290(local_464);
          FUN_00a7c960(uVar22);
          *(undefined4 *)(param_1 + 0x918) = 1;
        }
        iVar15 = FUN_00a81330();
        if (iVar15 == 0) {
          return;
        }
        uVar22 = 0x24;
        FUN_00a81330(0x24);
        FUN_00a7c8a0();
        iVar15 = FUN_00a12210(uVar22);
        puVar16 = (undefined4 *)(iVar15 + 0x10);
        iVar15 = FUN_00a12210(0x24);
        uVar22 = 0x24;
        goto LAB_005df235;
      }
    }
    iVar15 = iVar15 + 1;
    piVar18 = piVar18 + 0x1c;
    if (*(short *)(param_1 + 0x324) <= iVar15) {
      return;
    }
  } while( true );
LAB_005df0e0:
  iVar15 = FUN_00a81330();
  if ((iVar15 == 0) && (*(int *)(param_1 + 0x918) == 0)) {
    iVar15 = FUN_00a12210(0x14);
    fVar1 = *(float *)(iVar15 + 0x40);
    fVar2 = *(float *)(iVar15 + 0x44);
    uVar22 = 0x14;
    fVar3 = *(float *)(iVar15 + 0x48);
    FUN_00a7c8a0(0x14);
    iVar15 = FUN_00a12210(uVar22);
    fVar4 = *(float *)(iVar15 + 0x40);
    fVar5 = *(float *)(iVar15 + 0x44);
    uVar22 = 0x14;
    fVar6 = *(float *)(iVar15 + 0x48);
    FUN_00a7c8a0(0x14);
    iVar15 = FUN_00a12210(uVar22);
    fVar4 = fVar4 - fVar1;
    fVar5 = fVar5 - fVar2;
    fVar6 = fVar6 - fVar3;
    fVar1 = *(float *)(iVar15 + 0x40) - fVar1;
    fVar2 = *(float *)(iVar15 + 0x44) - fVar2;
    fVar3 = *(float *)(iVar15 + 0x48) - fVar3;
    if (SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) <
        SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6)) {
      local_464 = local_468;
    }
    uVar22 = FUN_00a7f290(local_464);
    FUN_00a7c960(uVar22);
    *(undefined4 *)(param_1 + 0x918) = 1;
  }
  iVar15 = FUN_00a81330();
  if (iVar15 == 0) {
    return;
  }
  uVar22 = 0x14;
  FUN_00a81330(0x14);
  FUN_00a7c8a0();
  iVar15 = FUN_00a12210(uVar22);
  puVar16 = (undefined4 *)(iVar15 + 0x10);
  iVar15 = FUN_00a12210(0x14);
  uVar22 = 0x14;
  goto LAB_005df235;
LAB_005def82:
  iVar15 = FUN_00a81330();
  if ((iVar15 == 0) && (*(int *)(param_1 + 0x918) == 0)) {
    iVar15 = FUN_00a12210(4);
    fVar1 = *(float *)(iVar15 + 0x40);
    fVar2 = *(float *)(iVar15 + 0x44);
    uVar22 = 4;
    fVar3 = *(float *)(iVar15 + 0x48);
    FUN_00a7c8a0(4);
    iVar15 = FUN_00a12210(uVar22);
    fVar4 = *(float *)(iVar15 + 0x40);
    fVar5 = *(float *)(iVar15 + 0x44);
    uVar22 = 4;
    fVar6 = *(float *)(iVar15 + 0x48);
    FUN_00a7c8a0(4);
    iVar15 = FUN_00a12210(uVar22);
    fVar4 = fVar4 - fVar1;
    fVar5 = fVar5 - fVar2;
    fVar6 = fVar6 - fVar3;
    fVar1 = *(float *)(iVar15 + 0x40) - fVar1;
    fVar2 = *(float *)(iVar15 + 0x44) - fVar2;
    fVar3 = *(float *)(iVar15 + 0x48) - fVar3;
    if (SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) <
        SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6)) {
      local_464 = local_468;
    }
    uVar22 = FUN_00a7f290(local_464);
    FUN_00a7c960(uVar22);
    *(undefined4 *)(param_1 + 0x918) = 1;
  }
  iVar15 = FUN_00a81330();
  if (iVar15 == 0) {
    return;
  }
  uVar22 = 4;
  FUN_00a81330(4);
  FUN_00a7c8a0();
  iVar15 = FUN_00a12210(uVar22);
  puVar16 = (undefined4 *)(iVar15 + 0x10);
  iVar15 = FUN_00a12210(4);
  uVar22 = 4;
LAB_005df235:
  puVar19 = (undefined4 *)(iVar15 + 0x10);
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar19 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar19 = puVar19 + 1;
  }
  iVar15 = FUN_00a12210(uVar22);
  *(ushort *)(iVar15 + 0xa2) = *(ushort *)(iVar15 + 0xa2) | 4;
  return;
}

// 005E04A0  BehaviorDebrisObject::startup  size=1665  [class]
undefined4 __fastcall BehaviorDebrisObject::startup(int *param_1)

{
  uint *puVar1;
  float *pfVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar4 = BehaviorDebrisBase::startup();
  if (iVar4 == 0) {
    return 0;
  }
  FUN_009fd240();
  iVar4 = param_1[0x12d];
  if ((((iVar4 == 0xe0040) || (iVar4 == 0xe00d4)) || (iVar4 == 0xe0048)) ||
     ((iVar4 == 0xe005c || (iVar4 == 0xe0121)))) {
    piVar5 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar5 + 0x28))(0);
    if (iVar4 != 0) {
      bVar3 = true;
      piVar5 = (int *)FUN_00c13920();
      (**(code **)(*piVar5 + 0x28))(0);
      iVar4 = FUN_00a7c8a0();
      if ((iVar4 != 0) && (iVar4 = FUN_00b8c050(), iVar4 != 0)) {
        bVar3 = false;
      }
      iVar4 = param_1[0x12d];
      if (((iVar4 == 0xe0121) && (param_1[0xcc] != 0)) && (1 < *(int *)(param_1[0xcc] + 0xcc))) {
        bVar3 = false;
      }
      if (((iVar4 != 0xe0048) && (iVar4 != 0xe005c)) && (bVar3)) {
        param_1[0x224] = 0;
        FUN_00910ac0(0);
        param_1[0x221] = 0;
        (**(code **)(*param_1 + 0x20))();
        return 1;
      }
    }
  }
  iVar4 = FUN_009f94a0(param_1[0x12d]);
  if (((iVar4 != 0) || (iVar4 = FUN_009f9460(param_1[0x12d]), iVar4 != 0)) ||
     (iVar4 = FUN_009f9480(param_1[0x12d]), iVar4 != 0)) {
    param_1[0x225] = 1;
  }
  param_1[0x25d] = 0;
  param_1[0x263] = 0;
  param_1[0x25e] = 0x47435000;
  param_1[0x25f] = 0x47435000;
  param_1[0x1a4] = (uint)(param_1[0x12d] == 0x20010);
  iVar4 = FUN_009f8d30();
  if (iVar4 != 0) {
    if (param_1[0x1ed] != 0) {
      iVar4 = param_1[0x12d];
      if (((((iVar4 == 0xf0085) || (iVar4 == 0xf0086)) || (iVar4 == 0xf0087)) ||
          ((iVar4 == 0xf0088 || (iVar4 == 0xf0089)))) || (iVar4 == 0xf008a)) {
        FUN_0091adf0(8);
        FUN_0091adf0(0x40);
      }
      if (param_1[0x12d] == 0xf6020) {
        FUN_0091adf0(8);
        FUN_0091adf0(0x40);
      }
      if (param_1[0x12d] == 0xe0187) {
        FUN_0091adf0(1);
        FUN_0091adf0(0x20);
      }
      if (param_1[0x12d] == 0xd0304) {
        FUN_0091adf0(1);
        FUN_0091adf0(0x20);
      }
    }
    iVar4 = param_1[0x162];
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0xbc) != 0)) {
      param_1[0x265] = 1;
      param_1[0x264] = *(int *)(iVar4 + 0xc0);
    }
  }
  if (param_1[0x12d] == 0x20040) {
    FUN_00a9e290(&DAT_0163d4d4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x222] = 1;
  }
  if (param_1[0x12d] == 0x21010) {
    iVar4 = FUN_00a12210(1);
    iStack_44 = FUN_00a12210(2);
    iStack_4c = FUN_00a12210(3);
    pfVar6 = (float *)(**(code **)(*param_1 + 0x84))();
    fStack_30 = *pfVar6;
    fStack_2c = pfVar6[1];
    pfVar2 = (float *)(iVar4 + 0x90);
    fStack_28 = pfVar6[2];
    fStack_24 = pfVar6[3];
    fStack_50 = 0.0;
    uStack_48 = 0;
    thunk_FUN_00ddfff0(pfVar2,iVar4 + 0x10);
    fStack_20 = *(float *)(iVar4 + 0x40);
    fStack_1c = *(float *)(iVar4 + 0x44);
    fStack_18 = *(float *)(iVar4 + 0x48);
    fStack_14 = *(float *)(iVar4 + 0x4c);
    fStack_40 = *(float *)(iVar4 + 0x30) + fStack_20;
    fStack_3c = *(float *)(iVar4 + 0x34) + fStack_1c;
    fStack_38 = *(float *)(iVar4 + 0x38) + fStack_18;
    fStack_34 = *(float *)(iVar4 + 0x3c) + fStack_14;
    thunk_FUN_00dde510(&fStack_50,&uStack_48,&fStack_40,&fStack_20);
    iVar8 = iStack_44;
    *pfVar2 = fStack_50;
    *pfVar2 = *pfVar2 * -1.0;
    *(float *)(iVar4 + 0x94) = *(float *)(iVar4 + 0x94) * -1.0;
    *(float *)(iVar4 + 0x98) = *(float *)(iVar4 + 0x98) * -1.0;
    *(float *)(iVar4 + 0x9c) = *(float *)(iVar4 + 0x9c) * -1.0;
    *pfVar2 = *pfVar2 - fStack_30;
    *(float *)(iVar4 + 0x94) = *(float *)(iVar4 + 0x94) - fStack_2c;
    *(float *)(iVar4 + 0x98) = *(float *)(iVar4 + 0x98) - fStack_28;
    *(float *)(iVar4 + 0x9c) = *(float *)(iVar4 + 0x9c) - fStack_24;
    pfVar2 = (float *)(iStack_44 + 0x90);
    thunk_FUN_00ddfff0(pfVar2,iStack_44 + 0x10);
    fStack_20 = *(float *)(iVar8 + 0x40);
    fStack_1c = *(float *)(iVar8 + 0x44);
    fStack_18 = *(float *)(iVar8 + 0x48);
    fStack_14 = *(float *)(iVar8 + 0x4c);
    fStack_40 = *(float *)(iVar8 + 0x30) + fStack_20;
    fStack_3c = *(float *)(iVar8 + 0x34) + fStack_1c;
    fStack_38 = *(float *)(iVar8 + 0x38) + fStack_18;
    fStack_34 = *(float *)(iVar8 + 0x3c) + fStack_14;
    thunk_FUN_00dde510(&fStack_50,&uStack_48,&fStack_40,&fStack_20);
    iVar4 = iStack_4c;
    *pfVar2 = fStack_50;
    *pfVar2 = *pfVar2 * -1.0;
    *(float *)(iVar8 + 0x94) = *(float *)(iVar8 + 0x94) * -1.0;
    *(float *)(iVar8 + 0x98) = *(float *)(iVar8 + 0x98) * -1.0;
    *(float *)(iVar8 + 0x9c) = *(float *)(iVar8 + 0x9c) * -1.0;
    *pfVar2 = *pfVar2 - fStack_30;
    *(float *)(iVar8 + 0x94) = *(float *)(iVar8 + 0x94) - fStack_2c;
    *(float *)(iVar8 + 0x98) = *(float *)(iVar8 + 0x98) - fStack_28;
    *(float *)(iVar8 + 0x9c) = *(float *)(iVar8 + 0x9c) - fStack_24;
    pfVar6 = (float *)(iStack_4c + 0x90);
    thunk_FUN_00ddfff0(pfVar6,iStack_4c + 0x10);
    fStack_20 = *(float *)(iStack_4c + 0x40);
    fStack_1c = *(float *)(iStack_4c + 0x44);
    fStack_18 = *(float *)(iStack_4c + 0x48);
    fStack_14 = *(float *)(iStack_4c + 0x4c);
    fStack_40 = *(float *)(iStack_4c + 0x30) + fStack_20;
    fStack_3c = *(float *)(iStack_4c + 0x34) + fStack_1c;
    fStack_38 = *(float *)(iStack_4c + 0x38) + fStack_18;
    fStack_34 = *(float *)(iStack_4c + 0x3c) + fStack_14;
    thunk_FUN_00dde510(&fStack_50,&uStack_48,&fStack_40,&fStack_20);
    *pfVar6 = fStack_50;
    *pfVar6 = *pfVar6 * -1.0;
    *(float *)(iVar4 + 0x94) = *(float *)(iVar4 + 0x94) * -1.0;
    *(float *)(iVar4 + 0x98) = *(float *)(iVar4 + 0x98) * -1.0;
    *(float *)(iVar4 + 0x9c) = *(float *)(iVar4 + 0x9c) * -1.0;
    *pfVar6 = *pfVar6 - fStack_30;
    *(float *)(iVar4 + 0x94) = *(float *)(iVar4 + 0x94) - fStack_2c;
    *(float *)(iVar4 + 0x98) = *(float *)(iVar4 + 0x98) - fStack_28;
    *(float *)(iVar4 + 0x9c) = *(float *)(iVar4 + 0x9c) - fStack_24;
    *pfVar6 = *pfVar6 - *pfVar2;
    *(float *)(iVar4 + 0x94) = *(float *)(iVar4 + 0x94) - *(float *)(iVar8 + 0x94);
    *(float *)(iVar4 + 0x98) = *(float *)(iVar4 + 0x98) - *(float *)(iVar8 + 0x98);
    *(float *)(iVar4 + 0x9c) = *(float *)(iVar4 + 0x9c) - *(float *)(iVar8 + 0x9c);
  }
  iVar4 = param_1[0x12d];
  if (((((iVar4 == 0xf0085) || (iVar4 == 0xf0086)) || (iVar4 == 0xf0087)) ||
      ((iVar4 == 0xf0088 || (iVar4 == 0xf0089)))) || ((iVar4 == 0xf008a || (iVar4 == 0x71000)))) {
    param_1[0x248] = 1;
  }
  iVar4 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar8 = 0;
    while ((iVar7 = *(int *)(*(int *)(iVar8 + 0x60 + param_1[200]) + 0x40), iVar7 == 0 ||
           (iVar7 = FUN_00fdbbd0(iVar7,"nr_navi_obj"), iVar7 == 0))) {
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + 0x70;
      if ((short)param_1[0xc9] <= iVar4) {
        param_1[0x25c] = 1;
        return 1;
      }
    }
    if ((iVar4 != -1) && (iVar4 = iVar4 * 0x70 + param_1[200], iVar4 != 0)) {
      puVar1 = (uint *)(iVar4 + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  param_1[0x25c] = 1;
  return 1;
}

// 005E24B0  BehaviorDebrisObject::vf54  size=1874  [class]
/* WARNING: Removing unreachable block (ram,0x005e2956) */
/* WARNING: Removing unreachable block (ram,0x005e2958) */
/* WARNING: Removing unreachable block (ram,0x005e295a) */
/* WARNING: Removing unreachable block (ram,0x005e295c) */
/* WARNING: Removing unreachable block (ram,0x005e295e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall BehaviorDebrisObject::vf54(int param_1)

{
  float fVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined1 *puStack_134;
  float *pfStack_130;
  float *pfStack_12c;
  float *pfStack_128;
  float *pfStack_124;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined1 auStack_d8 [4];
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0 [6];
  undefined1 auStack_a8 [4];
  float local_a4;
  undefined1 local_a0 [28];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_74 [36];
  float afStack_50 [12];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  pfStack_124 = (float *)0x5e24c5;
  BehaviorDebrisBase::vf54();
  if (*(int *)(param_1 + 0x7b4) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x880) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x970) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x970) = 0;
  pfStack_124 = (float *)0x5e24ff;
  FUN_004066f0();
  iVar4 = *(int *)(param_1 + 0x4b4);
  if (((iVar4 == 0x20071) || (iVar4 == 0x21000)) || (iVar4 == 0x2004a)) {
    if ((*(int *)(param_1 + 0x588) == 0) || (*(int *)(*(int *)(param_1 + 0x588) + 0xb8) != 0))
    goto LAB_005e2bf3;
    local_110 = 0.0;
    local_10c = 0.0;
    local_108 = 0.0;
    pfStack_124 = (float *)0x5e29f2;
    fVar5 = (float10)FUN_00916de0();
    local_a4 = (float)fVar5;
    fVar5 = fVar5 * (float10)-2.0;
    pfStack_124 = (float *)local_a0;
    local_f0 = (float)fVar5;
    local_ec = (float)fVar5;
    local_e8 = (float)fVar5;
    pfStack_128 = (float *)0x5e2a17;
    pfVar2 = (float *)FUN_005d95e0();
    local_110 = *pfVar2 * local_f0;
    local_10c = pfVar2[1] * local_ec;
    local_108 = pfVar2[2] * local_e8;
    local_104 = pfVar2[3] * local_e4;
    pfStack_124 = (float *)0x5e2a49;
    fVar5 = (float10)FUN_00a93060();
    if ((float10)0 != fVar5) {
      pfStack_124 = &local_110;
      pfStack_128 = (float *)0x5e2a6a;
      FUN_0091ab40();
    }
    if (0.0 < local_108 * 0.0 + (local_110 * 0.0 - local_10c * 1.0)) {
      pfStack_124 = &DAT_01d61860;
      local_c0[0] = 1.0;
      pfStack_128 = local_c0;
      local_c0[1] = 0.0;
      pfStack_12c = &local_f0;
      local_c0[2] = 0.0;
      pfStack_130 = (float *)0x5e2ab3;
      D3DXVec3TransformNormal();
      local_d4 = -4.0;
      if (*(int *)(param_1 + 0x4b4) == 0x20030) {
        local_d4 = -10.0;
      }
      pfStack_124 = (float *)0x5e2ada;
      fVar5 = (float10)FUN_00a93060();
      if ((float10)0 != fVar5) {
        pfStack_124 = &local_d0;
        local_d0 = local_f0 * local_d4 * local_a4;
        local_cc = local_ec * local_d4 * local_a4;
        local_c8 = local_e8 * local_d4 * local_a4;
        fStack_c4 = local_e4 * local_d4 * local_a4;
        pfStack_128 = (float *)0x5e2b34;
        FUN_0091ab40();
      }
    }
    if (DAT_01d61850 == 0) goto LAB_005e2bf3;
    pfStack_124 = (float *)local_a0;
    pfStack_128 = (float *)0x5e2b5a;
    FUN_00916d50();
    pfStack_124 = (float *)-(_DAT_01d61868 /
                            SQRT(_DAT_01d61888 * _DAT_01d61888 +
                                 _DAT_01d61880 * _DAT_01d61880 + _DAT_01d61884 * _DAT_01d61884));
    pfStack_128 = (float *)0x5e2b89;
    FUN_00ddbaa0();
    local_f0 = 0.0;
    local_ec = 0.0;
    local_e4 = 1.0;
    local_e8 = 0.5235988;
    if (0.0 < local_108 * 0.0 + (local_110 * 0.0 - local_10c * 1.0)) {
      local_e8 = 1.5707964;
    }
    pfStack_124 = (float *)0x5e2bd8;
    fVar5 = (float10)FUN_00a93060();
    if ((float10)0 == fVar5) goto LAB_005e2bf3;
    pfStack_124 = &local_f0;
  }
  else {
    if ((((iVar4 != 0x20031) && (iVar4 != 0x20034)) && ((iVar4 != 0x20036 && (iVar4 != 0x2006f))))
       || ((*(int *)(param_1 + 0x588) == 0 || (*(int *)(*(int *)(param_1 + 0x588) + 0xb8) != 0))))
    goto LAB_005e2bf3;
    local_f0 = 0.0;
    local_ec = 0.0;
    local_e8 = 0.0;
    pfStack_124 = (float *)0x5e257a;
    fVar5 = (float10)FUN_00916de0();
    local_d4 = (float)fVar5;
    fVar5 = fVar5 * (float10)-2.0;
    pfStack_124 = local_c0;
    local_110 = (float)fVar5;
    local_10c = (float)fVar5;
    local_108 = (float)fVar5;
    pfStack_128 = (float *)0x5e259c;
    pfVar2 = (float *)FUN_005d95e0();
    local_f0 = local_110 * *pfVar2;
    local_ec = pfVar2[1] * local_10c;
    local_e8 = pfVar2[2] * local_108;
    local_e4 = pfVar2[3] * local_104;
    pfStack_124 = (float *)0x5e25ce;
    fVar5 = (float10)FUN_00a93060();
    if ((float10)0 != fVar5) {
      pfStack_124 = &local_f0;
      pfStack_128 = (float *)0x5e25ef;
      FUN_0091ab40();
    }
    if (0.0 < local_e8 * 0.0 + (local_f0 * 0.0 - local_ec * 1.0)) {
      pfStack_124 = &DAT_01d61860;
      local_d0 = 1.0;
      pfStack_128 = &local_d0;
      local_cc = 0.0;
      pfStack_12c = &local_110;
      local_c8 = 0.0;
      pfStack_130 = (float *)0x5e2638;
      D3DXVec3TransformNormal();
      pfStack_124 = (float *)0x5e263f;
      fVar5 = (float10)FUN_00a93060();
      if ((float10)0 != fVar5) {
        pfStack_124 = &local_d0;
        local_d0 = local_110 * -4.0 * local_d4;
        local_cc = local_10c * -4.0 * local_d4;
        local_c8 = local_108 * -4.0 * local_d4;
        fStack_c4 = local_104 * -4.0 * local_d4;
        pfStack_128 = (float *)0x5e2698;
        FUN_0091ab40();
      }
    }
    pfStack_124 = (float *)0x5e26a3;
    piVar3 = (int *)FUN_00c13920();
    pfStack_124 = (float *)0x0;
    pfStack_128 = (float *)0x5e26ae;
    iVar4 = (**(code **)(*piVar3 + 0x28))();
    if (iVar4 != 0) {
      pfStack_124 = (float *)0x5e26b9;
      pfStack_124 = (float *)FUN_00a7c8a0();
      if (pfStack_124 != (float *)0x0) {
        pfStack_128 = (float *)0x5e26c3;
        iVar4 = FUN_00412580();
        if (iVar4 != 0) {
          pfStack_124 = &local_110;
          pfStack_128 = (float *)0x5e26d6;
          FUN_00a925a0();
          fVar1 = local_d4 + local_d4;
          local_110 = fVar1 * local_110;
          local_10c = fVar1 * local_10c;
          local_108 = fVar1 * local_108;
          local_104 = local_c0[3] * local_104;
          pfStack_124 = (float *)0x5e270d;
          fVar5 = (float10)FUN_00a93060();
          if ((float10)0 != fVar5) {
            pfStack_124 = &local_110;
            pfStack_128 = (float *)0x5e2728;
            FUN_0091ab40();
          }
        }
      }
    }
    if (DAT_01d61850 == 0) goto LAB_005e2bf3;
    pfStack_124 = (float *)local_a0;
    pfStack_128 = (float *)0x5e2748;
    FUN_00916d50();
    local_d0 = SQRT(_DAT_01d61868 * _DAT_01d61868 +
                    DAT_01d61860 * DAT_01d61860 + DAT_01d61864 * DAT_01d61864);
    local_cc = SQRT(_DAT_01d61878 * _DAT_01d61878 +
                    _DAT_01d61870 * _DAT_01d61870 + _DAT_01d61874 * _DAT_01d61874);
    pfStack_124 = (float *)-(_DAT_01d61868 /
                            SQRT(_DAT_01d61888 * _DAT_01d61888 +
                                 _DAT_01d61880 * _DAT_01d61880 + _DAT_01d61884 * _DAT_01d61884));
    pfStack_128 = (float *)0x5e27bb;
    FUN_00ddbaa0();
    pfStack_128 = afStack_50;
    fVar5 = (float10)fpatan((float10)DAT_01d61864 / (float10)local_cc,
                            (float10)DAT_01d61860 / (float10)local_d0);
    pfStack_124 = (float *)(float)fVar5;
    pfStack_12c = (float *)0x5e27e3;
    D3DXMatrixRotationZ();
    local_c8 = 0.0;
    pfStack_12c = &DAT_01d61860;
    pfStack_130 = &local_c8;
    fStack_c4 = 1.0;
    puStack_134 = auStack_d8;
    local_c0[0] = 0.0;
    D3DXVec3TransformNormal();
    pfStack_124 = (float *)0xbf060a92;
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(0);
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (iVar4 = FUN_00412580(iVar4), iVar4 != 0)) {
      pfVar2 = (float *)FUN_005d9b40(&local_e8);
      fVar5 = (float10)fpatan((float10)*(float *)(iVar4 + 0x40) - (float10)*pfVar2,
                              (float10)*(float *)(iVar4 + 0x48) - (float10)pfVar2[2]);
      D3DXMatrixRotationY(auStack_a8,(float)fVar5);
    }
    D3DXVec3TransformNormal(&pfStack_128,&pfStack_128,auStack_a8);
    puStack_134 = (undefined1 *)((float)puStack_134 + fStack_84);
    pfStack_130 = (float *)(fStack_80 + (float)pfStack_130);
    pfStack_12c = (float *)(fStack_7c + (float)pfStack_12c);
    D3DXVec3TransformNormal(&puStack_134,&puStack_134,auStack_74);
    local_110 = fStack_20 + local_110;
    local_10c = fStack_1c + local_10c;
    local_108 = fStack_18 + local_108;
    pfStack_124 = (float *)0x5e2979;
    fVar5 = (float10)FUN_00a93060();
    if ((float10)0 == fVar5) goto LAB_005e2bf3;
    pfStack_124 = &local_d0;
    local_d0 = local_110 * local_d4;
    local_cc = local_10c * local_d4;
    local_c8 = local_108 * local_d4;
    fStack_c4 = local_d4 * local_104;
  }
  pfStack_128 = (float *)0x5e2bf3;
  FUN_0091ac60();
LAB_005e2bf3:
  pfStack_124 = (float *)0x5e2bfc;
  FUN_00406760();
  return;
}

