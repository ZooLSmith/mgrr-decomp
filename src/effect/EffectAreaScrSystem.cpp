// src/effect/EffectAreaScrSystem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D806C0..00D81F30, 11 functions

#include "types.h"

// 00D806C0  FUN_00d806c0  size=120  [callgraph]
undefined4 __thiscall FUN_00d806c0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00D807F0  FUN_00d807f0  size=55  [callgraph]
void __fastcall FUN_00d807f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0x7f;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}

// 00D80840  FUN_00d80840  size=131  [callgraph]
undefined4 __thiscall FUN_00d80840(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"EffectAreaScrCustomData");
  if (iVar1 == -1) {
    return 0;
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(iVar1,"CustomFlag");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar2,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(iVar1,"WitchTimeAreaNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 4);
  }
  return 1;
}

// 00D80C30  FUN_00d80c30  size=425  [callgraph]
void FUN_00d80c30(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int local_3c;
  int local_38;
  uint local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  param_1[0x30] = param_1[0x30] | 0xa0000000;
  iVar1 = FUN_00932720();
  local_30 = (uint)*(ushort *)(param_1 + 0xc08);
  if (local_30 != 0) {
    local_3c = 0;
    do {
      local_14 = 0;
      iVar5 = *param_1 + local_3c;
      puVar6 = (uint *)(param_1 + ((uint)*(ushort *)(iVar5 + 0xe) * 3 + 3) * 0x10);
      if ((*puVar6 & 0x8000000) == 0) {
        if ((*(uint *)(iVar5 + 0x10) & 0x80000000) == 0) {
          local_20 = DAT_01bea380;
          local_1c = DAT_01bea384;
          local_18 = DAT_01bea388;
          local_14 = DAT_01bea38c;
        }
        else if (DAT_01be8e54 == 0) {
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
        }
        else {
          local_20 = *(undefined4 *)(DAT_01be8e54 + 0x50);
          local_1c = *(undefined4 *)(DAT_01be8e54 + 0x54);
          local_18 = *(undefined4 *)(DAT_01be8e54 + 0x58);
          local_14 = *(undefined4 *)(DAT_01be8e54 + 0x5c);
        }
        local_38 = 0;
        if (*(ushort *)(param_1 + 0xc05) != 0) {
          piVar7 = (int *)(param_1[0xc04] + 0x10);
          do {
            if (*(ushort *)((int)piVar7 + -0xe) == *(ushort *)(iVar5 + 0xe)) {
              iVar3 = *piVar7;
              if (iVar3 < 1) {
LAB_00d80d72:
                iVar3 = FUN_00d900c0(*(undefined4 *)(iVar5 + 4),&local_20);
                if (iVar3 != 0) {
                  if ((*(uint *)(iVar5 + 0x10) & 0x40000000) == 0) {
                    if ((*puVar6 & 0x10000000) == 0) {
                      *puVar6 = *puVar6 | 0xa0000000;
                    }
                  }
                  else {
                    *puVar6 = *puVar6 & 0x7fffffff;
                    *puVar6 = *puVar6 | 0x30000000;
                  }
                  goto LAB_00d80dc6;
                }
                break;
              }
              iVar2 = 0;
              if (0 < iVar3) {
                piVar4 = (int *)piVar7[-2];
                do {
                  if (*piVar4 == iVar1) goto LAB_00d80d72;
                  iVar2 = iVar2 + 1;
                  piVar4 = piVar4 + 1;
                } while (iVar2 < iVar3);
              }
            }
            local_38 = local_38 + 1;
            piVar7 = piVar7 + 6;
          } while (local_38 < (int)(uint)*(ushort *)(param_1 + 0xc05));
        }
        if ((*puVar6 & 0x20000000) == 0) {
          *puVar6 = *puVar6 & 0x7fffffff;
        }
      }
LAB_00d80dc6:
      local_3c = local_3c + 0x1c;
      local_30 = local_30 - 1;
    } while (local_30 != 0);
  }
  return;
}

// 00D80DE0  EffectAreaScrSystem::Startup  size=87  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 EffectAreaScrSystem::Startup(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  _DAT_01dc5380 = param_2;
  DAT_01dc5384 = param_1;
  iVar1 = FUN_00d806c0(param_2,param_1);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016c1920);
    return 0;
  }
  iVar1 = FUN_00dd7240();
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016c18d0);
    return 0;
  }
  return 1;
}

// 00D81B80  EffectAreaScrSystem::RequestStart  size=270  [class]
undefined4 EffectAreaScrSystem::RequestStart(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_108;
  undefined1 local_104 [4];
  char local_100 [256];
  
  _memset(local_100,0,0x100);
  _sprintf_s(local_100,0x100,"r%03x_EffectArea.bxm",param_1);
  iVar1 = FUN_00de4500(local_100);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_00dd3500(0x3030,DAT_01dc5384);
  if (iVar1 == 0) {
    local_108 = 0;
  }
  else {
    iVar1 = FUN_00d81880();
    local_108 = iVar1;
    if (iVar1 != 0) goto LAB_00d81c13;
  }
  iVar1 = local_108;
  FUN_00dd5650(&DAT_016c1b08);
LAB_00d81c13:
  *(undefined4 *)(iVar1 + 0x3024) = param_1;
  iVar2 = cXmlBinary::cXmlBinary_85(param_2);
  if (iVar2 == 0) {
    iVar2 = 0x3f;
    do {
      cEspControler::~cEspControler();
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    FUN_00dd4920(iVar1);
  }
  else if (DAT_01dc5394 < DAT_01dc5390) {
    FUN_00d81260(local_104,&local_108);
    return 1;
  }
  return 0;
}

// 00D81CD0  FUN_00d81cd0  size=110  [between]
void __thiscall FUN_00d81cd0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = (uint *)(param_1 + 0xb0);
  do {
    uVar1 = *puVar2;
    if ((int)uVar1 < 0) {
      if ((uVar1 & 0x40000000) == 0) {
        *puVar2 = *puVar2 | 0x40000000;
        FUN_00d817c0(param_2,iVar3);
      }
    }
    else if ((uVar1 & 0x40000000) != 0) {
      FUN_00eaa6e0(0x41f00000,0);
      *puVar2 = *puVar2 & 0xbfffffff;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x30;
  } while ((ushort)iVar3 < 0x40);
  return;
}

// 00D81DE0  FUN_00d81de0  size=56  [between]
void __fastcall FUN_00d81de0(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  
  FUN_00d80c30(param_1);
  iVar2 = 0x40;
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 0x30;
    *puVar1 = *puVar1 & 0xcfffffff;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00d81cd0(param_1[0xc09]);
  return;
}

// 00D81E20  FUN_00d81e20  size=101  [between]
void FUN_00d81e20(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = DAT_01dc538c;
  if (DAT_01dc538c != DAT_01dc538c + DAT_01dc5394) {
    do {
      puVar1 = (uint *)*puVar4;
      FUN_00d80c30(puVar1);
      iVar3 = 0x40;
      puVar2 = puVar1;
      do {
        puVar2 = puVar2 + 0x30;
        *puVar2 = *puVar2 & 0xcfffffff;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      FUN_00d81cd0(puVar1[0xc09]);
      puVar4 = puVar4 + 1;
    } while (puVar4 != DAT_01dc538c + DAT_01dc5394);
  }
  return;
}

// 00D81E90  EffectAreaScrSystem::SetEffectAreaEnable  size=157  [class]
void EffectAreaScrSystem::SetEffectAreaEnable(int param_1,ushort param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  
  if (0x3f < param_2) {
    FUN_00dd5650(&DAT_016c1b60);
    return;
  }
  piVar2 = DAT_01dc538c;
  if (DAT_01dc538c != DAT_01dc538c + DAT_01dc5394) {
    while (iVar1 = *piVar2, *(int *)(iVar1 + 0x3024) != param_1) {
      piVar2 = piVar2 + 1;
      if (piVar2 == DAT_01dc538c + DAT_01dc5394) {
        return;
      }
    }
    if (iVar1 != 0) {
      if (DAT_01dc53b8 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dc53a0);
      }
      iVar3 = ((uint)param_2 * 3 + 3) * 0x40;
      puVar4 = (uint *)(iVar3 + iVar1);
      *puVar4 = *puVar4 | 0x8000000;
      puVar4 = (uint *)(iVar3 + iVar1);
      if (param_3 == 0) {
        *puVar4 = *puVar4 & 0x5fffffff;
      }
      else {
        *puVar4 = *puVar4 | 0xa0000000;
      }
      if (DAT_01dc53b8 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dc53a0);
      }
    }
  }
  return;
}

// 00D81F30  EffectAreaScrSystem::SetEffectAreaEnable_2  size=134  [class]
void EffectAreaScrSystem::SetEffectAreaEnable_2(int param_1,ushort param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  
  if (0x3f < param_2) {
    FUN_00dd5650(&DAT_016c1b60);
    return;
  }
  piVar3 = DAT_01dc538c;
  if (DAT_01dc538c != DAT_01dc538c + DAT_01dc5394) {
    while (iVar2 = *piVar3, *(int *)(iVar2 + 0x3024) != param_1) {
      piVar3 = piVar3 + 1;
      if (piVar3 == DAT_01dc538c + DAT_01dc5394) {
        return;
      }
    }
    if (iVar2 != 0) {
      if (DAT_01dc53b8 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dc53a0);
      }
      puVar1 = (uint *)(((uint)param_2 * 3 + 3) * 0x40 + iVar2);
      *puVar1 = *puVar1 & 0xf7ffffff;
      if (DAT_01dc53b8 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dc53a0);
      }
    }
  }
  return;
}

