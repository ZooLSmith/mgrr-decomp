// src/behavior/BehaviorDebrisZangekiBonus.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D8E80..00AC13A0, 10 functions

#include "types.h"

// 005D8E80  BehaviorDebrisZangekiBonus::vf1D0  size=16  [class]
void __thiscall BehaviorDebrisZangekiBonus::vf1D0(undefined4 param_1,undefined4 param_2)

{
  FUN_00a8e5d0(param_1,param_2,0);
  return;
}

// 005D8E90  BehaviorDebrisZangekiBonus::vf44  size=42  [class]
void __fastcall BehaviorDebrisZangekiBonus::vf44(int param_1)

{
  RayCastManager::getWork(param_1 + 0x980);
  *(undefined4 *)(param_1 + 0x984) = 0;
  *(undefined4 *)(param_1 + 0x988) = 0;
  BehaviorDebrisBase::vf44();
  return;
}

// 005DBA60  BehaviorDebrisZangekiBonus::vf1BC  size=165  [class]
void __thiscall BehaviorDebrisZangekiBonus::vf1BC(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  if (((*(uint *)(param_1 + 0x9a0) & 0x40000000) != 0) &&
     (*(uint *)(param_1 + 0x9a0) = *(uint *)(param_1 + 0x9a0) & 0xbfffffff, param_2 != (int *)0x0))
  {
    puVar3 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00a7c940(param_2 + 0x21c);
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
        uVar2 = FUN_00a7c8a0();
        iVar1 = FUN_004ddcd0(uVar2);
        if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0xdd4) & 0x200000) != 0)) {
          *(int *)(param_1 + 0x9ac) = (int)*(char *)(iVar1 + 0xba8);
          *(uint *)(param_1 + 0x9a0) = *(uint *)(param_1 + 0x9a0) | 0x40000000;
        }
      }
    }
  }
  return;
}

// 005DE1E0  BehaviorDebrisZangekiBonus::vf4C  size=306  [class]
void __fastcall BehaviorDebrisZangekiBonus::vf4C(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined *puVar5;
  
  BehaviorDebrisObject::vf4C();
  piVar4 = (int *)0x0;
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar5 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d80(puVar5);
        piVar4 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar2);
      }
    }
  }
  if ((*(uint *)(param_1 + 0x9a0) & 0x80000000) == 0) {
    uVar3 = 0;
    if (piVar4 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar4 + 0x32c))();
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x9a0) = *(uint *)(param_1 + 0x9a0) | 0x80000000;
        uVar3 = 1;
        piVar4 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar4 + 0x60))(*(undefined4 *)(param_1 + 0x9a4));
        if ((*(int *)(param_1 + 0x9a4) == 0) &&
           ((*(int *)(param_1 + 0x330) == 0 || (*(int *)(*(int *)(param_1 + 0x330) + 0xcc) < 2)))) {
          piVar4 = (int *)FUN_00c1b9a0();
          (**(code **)(*piVar4 + 0x68))();
        }
      }
    }
    FUN_00cd1970(param_1,*(undefined4 *)(param_1 + 0x9a4),*(undefined4 *)(param_1 + 0x9a8),uVar3);
    if ((*(uint *)(param_1 + 0x9a0) & 0x40000000) != 0) {
      iVar1 = FUN_00a12210(0xd);
      if (iVar1 != 0) {
        FUN_00957ab0(iVar1 + 0x40,*(undefined4 *)(param_1 + 0x9ac));
        FUN_009fdde0();
        return;
      }
      FUN_00957ab0(param_1 + 0x40,*(undefined4 *)(param_1 + 0x9ac));
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 005DF2C0  BehaviorDebrisZangekiBonus::thunk_vf50  size=5  [class]
void __fastcall BehaviorDebrisZangekiBonus::thunk_vf50(int param_1)

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
  int iStack_468;
  int iStack_464;
  undefined **ppuStack_420;
  int *piStack_41c;
  int iStack_418;
  undefined4 uStack_414;
  int aiStack_410 [259];
  
  BehaviorDebrisBase::vf50();
  if (*(int *)(param_1 + 0x4b4) != 0x20044) {
    return;
  }
  if (*(int *)(param_1 + 0x7b4) != 0) {
    return;
  }
  piStack_41c = aiStack_410;
  iStack_464 = 0;
  iStack_468 = 0;
  iStack_418 = 0;
  uStack_414 = 0x100;
  ppuStack_420 = lib::StaticArray<Entity*,256>::vftable;
  FUN_00a7f440(0x42000,&ppuStack_420);
  piVar18 = piStack_41c;
  if (piStack_41c != piStack_41c + iStack_418) {
    do {
      iVar15 = *piVar18;
      iVar9 = FUN_00a7c8a0();
      iVar12 = iStack_464;
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
                   (iVar12 = iVar15, iStack_464 != 0)) {
                  iStack_468 = iVar15;
                  iVar12 = iStack_464;
                }
                break;
              }
            }
            iVar14 = iVar14 + 1;
            piVar17 = piVar17 + 0x1c;
          } while (iVar14 < *(short *)(iVar9 + 0x324));
        }
      }
      iStack_464 = iVar12;
      piVar18 = piVar18 + 1;
    } while (piVar18 != piStack_41c + iStack_418);
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
            iStack_464 = iStack_468;
          }
          uVar22 = FUN_00a7f290(iStack_464);
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
      iStack_464 = iStack_468;
    }
    uVar22 = FUN_00a7f290(iStack_464);
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
      iStack_464 = iStack_468;
    }
    uVar22 = FUN_00a7f290(iStack_464);
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

// 005E16E0  BehaviorDebrisZangekiBonus::vf40  size=68  [class]
void __fastcall BehaviorDebrisZangekiBonus::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorDebrisObject::vf40();
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x9a0) = 0;
  iVar1 = **(int **)(param_1 + 0x330);
  *(int *)(param_1 + 0x9a4) = iVar1;
  *(int *)(param_1 + 0x9a8) = (*(int **)(param_1 + 0x330))[1];
  if (iVar1 == 1) {
    *(uint *)(param_1 + 0x9a0) = *(uint *)(param_1 + 0x9a0) | 0x40000000;
  }
  return;
}

// 005E2C10  BehaviorDebrisZangekiBonus::thunk_vf54  size=5  [class]
/* WARNING: Removing unreachable block (ram,0x005e2956) */
/* WARNING: Removing unreachable block (ram,0x005e2958) */
/* WARNING: Removing unreachable block (ram,0x005e295a) */
/* WARNING: Removing unreachable block (ram,0x005e295c) */
/* WARNING: Removing unreachable block (ram,0x005e295e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall BehaviorDebrisZangekiBonus::thunk_vf54(int param_1)

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
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_d8 [4];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float afStack_c0 [6];
  undefined1 auStack_a8 [4];
  float fStack_a4;
  undefined1 auStack_a0 [28];
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
    fStack_110 = 0.0;
    fStack_10c = 0.0;
    fStack_108 = 0.0;
    pfStack_124 = (float *)0x5e29f2;
    fVar5 = (float10)FUN_00916de0();
    fStack_a4 = (float)fVar5;
    fVar5 = fVar5 * (float10)-2.0;
    pfStack_124 = (float *)auStack_a0;
    fStack_f0 = (float)fVar5;
    fStack_ec = (float)fVar5;
    fStack_e8 = (float)fVar5;
    pfStack_128 = (float *)0x5e2a17;
    pfVar2 = (float *)FUN_005d95e0();
    fStack_110 = *pfVar2 * fStack_f0;
    fStack_10c = pfVar2[1] * fStack_ec;
    fStack_108 = pfVar2[2] * fStack_e8;
    fStack_104 = pfVar2[3] * fStack_e4;
    pfStack_124 = (float *)0x5e2a49;
    fVar5 = (float10)FUN_00a93060();
    if ((float10)0 != fVar5) {
      pfStack_124 = &fStack_110;
      pfStack_128 = (float *)0x5e2a6a;
      FUN_0091ab40();
    }
    if (0.0 < fStack_108 * 0.0 + (fStack_110 * 0.0 - fStack_10c * 1.0)) {
      pfStack_124 = &DAT_01d61860;
      afStack_c0[0] = 1.0;
      pfStack_128 = afStack_c0;
      afStack_c0[1] = 0.0;
      pfStack_12c = &fStack_f0;
      afStack_c0[2] = 0.0;
      pfStack_130 = (float *)0x5e2ab3;
      D3DXVec3TransformNormal();
      fStack_d4 = -4.0;
      if (*(int *)(param_1 + 0x4b4) == 0x20030) {
        fStack_d4 = -10.0;
      }
      pfStack_124 = (float *)0x5e2ada;
      fVar5 = (float10)FUN_00a93060();
      if ((float10)0 != fVar5) {
        pfStack_124 = &fStack_d0;
        fStack_d0 = fStack_f0 * fStack_d4 * fStack_a4;
        fStack_cc = fStack_ec * fStack_d4 * fStack_a4;
        fStack_c8 = fStack_e8 * fStack_d4 * fStack_a4;
        fStack_c4 = fStack_e4 * fStack_d4 * fStack_a4;
        pfStack_128 = (float *)0x5e2b34;
        FUN_0091ab40();
      }
    }
    if (DAT_01d61850 == 0) goto LAB_005e2bf3;
    pfStack_124 = (float *)auStack_a0;
    pfStack_128 = (float *)0x5e2b5a;
    FUN_00916d50();
    pfStack_124 = (float *)-(_DAT_01d61868 /
                            SQRT(_DAT_01d61888 * _DAT_01d61888 +
                                 _DAT_01d61880 * _DAT_01d61880 + _DAT_01d61884 * _DAT_01d61884));
    pfStack_128 = (float *)0x5e2b89;
    FUN_00ddbaa0();
    fStack_f0 = 0.0;
    fStack_ec = 0.0;
    fStack_e4 = 1.0;
    fStack_e8 = 0.5235988;
    if (0.0 < fStack_108 * 0.0 + (fStack_110 * 0.0 - fStack_10c * 1.0)) {
      fStack_e8 = 1.5707964;
    }
    pfStack_124 = (float *)0x5e2bd8;
    fVar5 = (float10)FUN_00a93060();
    if ((float10)0 == fVar5) goto LAB_005e2bf3;
    pfStack_124 = &fStack_f0;
  }
  else {
    if ((((iVar4 != 0x20031) && (iVar4 != 0x20034)) && ((iVar4 != 0x20036 && (iVar4 != 0x2006f))))
       || ((*(int *)(param_1 + 0x588) == 0 || (*(int *)(*(int *)(param_1 + 0x588) + 0xb8) != 0))))
    goto LAB_005e2bf3;
    fStack_f0 = 0.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    pfStack_124 = (float *)0x5e257a;
    fVar5 = (float10)FUN_00916de0();
    fStack_d4 = (float)fVar5;
    fVar5 = fVar5 * (float10)-2.0;
    pfStack_124 = afStack_c0;
    fStack_110 = (float)fVar5;
    fStack_10c = (float)fVar5;
    fStack_108 = (float)fVar5;
    pfStack_128 = (float *)0x5e259c;
    pfVar2 = (float *)FUN_005d95e0();
    fStack_f0 = fStack_110 * *pfVar2;
    fStack_ec = pfVar2[1] * fStack_10c;
    fStack_e8 = pfVar2[2] * fStack_108;
    fStack_e4 = pfVar2[3] * fStack_104;
    pfStack_124 = (float *)0x5e25ce;
    fVar5 = (float10)FUN_00a93060();
    if ((float10)0 != fVar5) {
      pfStack_124 = &fStack_f0;
      pfStack_128 = (float *)0x5e25ef;
      FUN_0091ab40();
    }
    if (0.0 < fStack_e8 * 0.0 + (fStack_f0 * 0.0 - fStack_ec * 1.0)) {
      pfStack_124 = &DAT_01d61860;
      fStack_d0 = 1.0;
      pfStack_128 = &fStack_d0;
      fStack_cc = 0.0;
      pfStack_12c = &fStack_110;
      fStack_c8 = 0.0;
      pfStack_130 = (float *)0x5e2638;
      D3DXVec3TransformNormal();
      pfStack_124 = (float *)0x5e263f;
      fVar5 = (float10)FUN_00a93060();
      if ((float10)0 != fVar5) {
        pfStack_124 = &fStack_d0;
        fStack_d0 = fStack_110 * -4.0 * fStack_d4;
        fStack_cc = fStack_10c * -4.0 * fStack_d4;
        fStack_c8 = fStack_108 * -4.0 * fStack_d4;
        fStack_c4 = fStack_104 * -4.0 * fStack_d4;
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
          pfStack_124 = &fStack_110;
          pfStack_128 = (float *)0x5e26d6;
          FUN_00a925a0();
          fVar1 = fStack_d4 + fStack_d4;
          fStack_110 = fVar1 * fStack_110;
          fStack_10c = fVar1 * fStack_10c;
          fStack_108 = fVar1 * fStack_108;
          fStack_104 = afStack_c0[3] * fStack_104;
          pfStack_124 = (float *)0x5e270d;
          fVar5 = (float10)FUN_00a93060();
          if ((float10)0 != fVar5) {
            pfStack_124 = &fStack_110;
            pfStack_128 = (float *)0x5e2728;
            FUN_0091ab40();
          }
        }
      }
    }
    if (DAT_01d61850 == 0) goto LAB_005e2bf3;
    pfStack_124 = (float *)auStack_a0;
    pfStack_128 = (float *)0x5e2748;
    FUN_00916d50();
    fStack_d0 = SQRT(_DAT_01d61868 * _DAT_01d61868 +
                     DAT_01d61860 * DAT_01d61860 + DAT_01d61864 * DAT_01d61864);
    fStack_cc = SQRT(_DAT_01d61878 * _DAT_01d61878 +
                     _DAT_01d61870 * _DAT_01d61870 + _DAT_01d61874 * _DAT_01d61874);
    pfStack_124 = (float *)-(_DAT_01d61868 /
                            SQRT(_DAT_01d61888 * _DAT_01d61888 +
                                 _DAT_01d61880 * _DAT_01d61880 + _DAT_01d61884 * _DAT_01d61884));
    pfStack_128 = (float *)0x5e27bb;
    FUN_00ddbaa0();
    pfStack_128 = afStack_50;
    fVar5 = (float10)fpatan((float10)DAT_01d61864 / (float10)fStack_cc,
                            (float10)DAT_01d61860 / (float10)fStack_d0);
    pfStack_124 = (float *)(float)fVar5;
    pfStack_12c = (float *)0x5e27e3;
    D3DXMatrixRotationZ();
    fStack_c8 = 0.0;
    pfStack_12c = &DAT_01d61860;
    pfStack_130 = &fStack_c8;
    fStack_c4 = 1.0;
    puStack_134 = auStack_d8;
    afStack_c0[0] = 0.0;
    D3DXVec3TransformNormal();
    pfStack_124 = (float *)0xbf060a92;
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(0);
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (iVar4 = FUN_00412580(iVar4), iVar4 != 0)) {
      pfVar2 = (float *)FUN_005d9b40(&fStack_e8);
      fVar5 = (float10)fpatan((float10)*(float *)(iVar4 + 0x40) - (float10)*pfVar2,
                              (float10)*(float *)(iVar4 + 0x48) - (float10)pfVar2[2]);
      D3DXMatrixRotationY(auStack_a8,(float)fVar5);
    }
    D3DXVec3TransformNormal(&pfStack_128,&pfStack_128,auStack_a8);
    puStack_134 = (undefined1 *)((float)puStack_134 + fStack_84);
    pfStack_130 = (float *)(fStack_80 + (float)pfStack_130);
    pfStack_12c = (float *)(fStack_7c + (float)pfStack_12c);
    D3DXVec3TransformNormal(&puStack_134,&puStack_134,auStack_74);
    fStack_110 = fStack_20 + fStack_110;
    fStack_10c = fStack_1c + fStack_10c;
    fStack_108 = fStack_18 + fStack_108;
    pfStack_124 = (float *)0x5e2979;
    fVar5 = (float10)FUN_00a93060();
    if ((float10)0 == fVar5) goto LAB_005e2bf3;
    pfStack_124 = &fStack_d0;
    fStack_d0 = fStack_110 * fStack_d4;
    fStack_cc = fStack_10c * fStack_d4;
    fStack_c8 = fStack_108 * fStack_d4;
    fStack_c4 = fStack_d4 * fStack_104;
  }
  pfStack_128 = (float *)0x5e2bf3;
  FUN_0091ac60();
LAB_005e2bf3:
  pfStack_124 = (float *)0x5e2bfc;
  FUN_00406760();
  return;
}

// 00AC10E0  BehaviorDebrisZangekiBonus::BehaviorDebrisZangekiBonus  size=18  [class]
undefined4 * __fastcall BehaviorDebrisZangekiBonus::BehaviorDebrisZangekiBonus(undefined4 *param_1)

{
  BehaviorDebrisBase::BehaviorDebrisBase_3();
  *param_1 = vftable;
  return param_1;
}

// 00AC1100  BehaviorDebrisZangekiBonus::vf04  size=6  [class]
undefined * BehaviorDebrisZangekiBonus::vf04(void)

{
  return &DAT_01b3531c;
}

// 00AC13A0  BehaviorDebrisZangekiBonus::vf00  size=30  [class]
undefined4 __thiscall BehaviorDebrisZangekiBonus::vf00(undefined4 param_1,byte param_2)

{
  FUN_005d8930();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

