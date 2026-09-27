// src/player/pl0012/Pl0012.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA6040..00C12120, 13 functions

#include "mgrr.h"
#include "Pl0012.h"

// 00AA6040  Pl0012::Pl0012  size=29  [class]
undefined4 * __fastcall Pl0012::Pl0012(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  cEspControler::cEspControler();
  return param_1;
}

// 00AA6060  Pl0012::vf04  size=6  [class]
undefined * Pl0012::vf04(void)

{
  return &DAT_01be9f20;
}

// 00AB64E0  Pl0012::destruct  size=30  [class]
undefined4 __thiscall Pl0012::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C11A80  Pl0012::vf44  size=23  [class]
void Pl0012::vf44(void)

{
  FUN_00a944d0();
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 00C11AA0  Pl0012::vf50  size=27  [class]
void Pl0012::vf50(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8c240();
  if (iVar1 != 0) {
    FUN_00a93170();
  }
  Behavior::vf50();
  return;
}

// 00C11AC0  FUN_00c11ac0  size=276  [between]
void __fastcall FUN_00c11ac0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x930) != 0) {
    (**(code **)(*(int *)(param_1 + 0x880) + 8))(0x3f800000,0,0);
  }
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x930) = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
      if (iVar3 != 0) {
        iVar3 = FUN_00fdbbd0(iVar3,&DAT_016a2d1c);
        if (iVar3 != 0) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x70;
    } while (iVar5 < *(short *)(param_1 + 0x324));
  }
  iVar4 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
      if (iVar3 != 0) {
        iVar3 = FUN_00fdbbd0(iVar3,&DAT_016a2d18);
        if (iVar3 != 0) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar4 < *(short *)(param_1 + 0x324));
  }
  iVar4 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
      if (iVar3 != 0) {
        iVar3 = FUN_00fdbbd0(iVar3,&DAT_016a2d14);
        if (iVar3 != 0) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar4 < *(short *)(param_1 + 0x324));
  }
  return;
}

// 00C11BE0  FUN_00c11be0  size=308  [between]
void __fastcall FUN_00c11be0(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x930) != 0) {
    (**(code **)(*(int *)(param_1 + 0x880) + 8))(0x3f800000,0,0);
  }
  pcVar2 = *(code **)(*(int *)(param_1 + 0x880) + 8);
  *(undefined4 *)(param_1 + 0x930) = 0;
  (*pcVar2)(0x3f800000,0,0);
  iVar6 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      iVar3 = *(int *)(param_1 + 800);
      iVar4 = *(int *)(*(int *)(iVar3 + 0x60 + iVar5) + 0x40);
      if (iVar4 != 0) {
        iVar4 = FUN_00fdbbd0(iVar4,&DAT_016a2d1c);
        if (iVar4 != 0) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar6 < *(short *)(param_1 + 0x324));
  }
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(param_1 + 800);
      iVar4 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
      if (iVar4 != 0) {
        iVar4 = FUN_00fdbbd0(iVar4,&DAT_016a2d18);
        if (iVar4 != 0) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
          *puVar1 = *puVar1 | 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar5 < *(short *)(param_1 + 0x324));
  }
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(param_1 + 800);
      iVar4 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
      if (iVar4 != 0) {
        iVar4 = FUN_00fdbbd0(iVar4,&DAT_016a2d14);
        if (iVar4 != 0) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
          *puVar1 = *puVar1 | 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar5 < *(short *)(param_1 + 0x324));
  }
  return;
}

// 00C11D20  FUN_00c11d20  size=23  [between]
void FUN_00c11d20(int param_1)

{
  if (param_1 != 0) {
    FUN_00c11ac0();
    return;
  }
  FUN_00c11be0();
  return;
}

// 00C11D40  FUN_00c11d40  size=388  [between]
void __fastcall FUN_00c11d40(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  FUN_00a92fb0();
  fVar3 = (float10)FUN_00e049b0();
  switch(param_1[0x186]) {
  case 0:
    param_1[0x186] = 1;
    FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  case 1:
    fVar1 = (float)param_1[0x24d];
    param_1[0x24d] = (int)(fVar1 - (float)fVar3);
    if (fVar1 - (float)fVar3 < 0.0) {
      param_1[0x186] = 2;
    }
    break;
  case 2:
    param_1[0x186] = 3;
    FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  case 3:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x186] = 4;
    }
    break;
  case 4:
    param_1[0x186] = 5;
    FUN_00a9e290(&DAT_0163bbb8,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    break;
  case 6:
    param_1[0x186] = 7;
    FUN_00a9e290(&DAT_0163b5e8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  case 7:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x186] = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00c11ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 00C11EF0  Pl0012::vf4C  size=147  [class]
void __fastcall Pl0012::vf4C(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  Behavior::vf4C();
  if (param_1[300] == 0x13002) {
    FUN_00c11d40();
  }
  iVar1 = FUN_00dd9400(0x57);
  if ((iVar1 != 0) && (param_1[0x21d] != 0)) {
    (**(code **)(*param_1 + 0x20))();
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
    uVar3 = param_1[0x21c] + 1U & 0x80000001;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
    }
    param_1[0x21c] = uVar3;
    if (uVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00c11f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c))();
      return;
    }
    if (uVar3 == 1) {
      piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00c11f75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x1c))();
      return;
    }
  }
  return;
}

// 00C11F90  FUN_00c11f90  size=51  [between]
void __fastcall FUN_00c11f90(int param_1)

{
  if (*(int *)(param_1 + 0x4b0) == 0x13002) {
    if ((1 < *(int *)(param_1 + 0x618)) && (*(int *)(param_1 + 0x618) < 6)) {
      *(undefined4 *)(param_1 + 0x618) = 6;
    }
    *(undefined4 *)(param_1 + 0x934) = 0x43700000;
  }
  return;
}

// 00C11FD0  FUN_00c11fd0  size=332  [between]
void __fastcall FUN_00c11fd0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_164;
  undefined1 local_160 [348];
  
  iVar4 = 0;
  local_164 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
      if (iVar3 != 0) {
        iVar3 = FUN_00fdbbd0(iVar3,&DAT_016a2d1c);
        if (iVar3 != 0) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
          *puVar1 = *puVar1 | 1;
        }
      }
      local_164 = local_164 + 1;
      iVar4 = iVar4 + 0x70;
    } while (local_164 < *(short *)(param_1 + 0x324));
  }
  iVar4 = 0;
  local_164 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
      if (iVar3 != 0) {
        iVar3 = FUN_00fdbbd0(iVar3,&DAT_016a2d18);
        if (iVar3 != 0) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      local_164 = local_164 + 1;
      iVar4 = iVar4 + 0x70;
    } while (local_164 < *(short *)(param_1 + 0x324));
  }
  iVar4 = 0;
  local_164 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
      if (iVar3 != 0) {
        iVar3 = FUN_00fdbbd0(iVar3,&DAT_016a2d14);
        if (iVar3 != 0) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      local_164 = local_164 + 1;
      iVar4 = iVar4 + 0x70;
    } while (local_164 < *(short *)(param_1 + 0x324));
  }
  if (*(int *)(param_1 + 0x930) == 0) {
    FUN_004039a0(5,param_1,0);
    FUN_00dffb20(param_1 + 0x880);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x930) = 1;
  }
  return;
}

// 00C12120  Pl0012::startup  size=567  [class]
undefined4 __fastcall Pl0012::startup(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x874) = 0;
      *(undefined4 *)(param_1 + 0x870) = 0;
      local_16c = 1;
      local_168 = 1;
      local_164 = 1;
      iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
              StaticArray<Behavior::EffectIntegrationContainer,32>(&local_16c);
      if (iVar1 != 0) {
        FUN_004039a0(0,param_1,0);
        FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
        *(undefined4 *)(param_1 + 0x930) = 0;
        FUN_00c11be0();
        piVar2 = (int *)FUN_00c13920();
        iVar1 = (**(code **)(*piVar2 + 0x28))(0);
        if (iVar1 != 0) {
          uVar3 = FUN_00a7c8a0();
          iVar1 = FUN_00412580(uVar3);
          if ((iVar1 != 0) && (*(int *)(iVar1 + 0xb74) != 0)) {
            FUN_00c11ac0();
          }
        }
        FUN_00c11ac0();
        if (*(int *)(param_1 + 0x4b0) == 0x11012) {
          FUN_00e5e0c0("core_se_set_state_wep1_pl1012",param_1,0xffffffff,0);
        }
        if (*(int *)(param_1 + 0x4b0) == 0x10102) {
          FUN_00e5e0c0("core_se_set_state_wep1_pl0102",param_1,0xffffffff,0);
        }
        if (*(int *)(param_1 + 0x4b0) == 0x13000) {
          FUN_00e5e0c0("core_se_set_state_wep1_pl3000",param_1,0xffffffff,0);
        }
        if (*(int *)(param_1 + 0x4b0) == 0x13001) {
          FUN_00e5e0c0("core_se_set_state_wep1_pl3001",param_1,0xffffffff,0);
        }
        if (*(int *)(param_1 + 0x4b0) == 0x13002) {
          FUN_00e5e0c0("core_se_set_state_wep1_pl3002",param_1,0xffffffff,0);
        }
        if (*(int *)(param_1 + 0x4b0) == 0x13003) {
          FUN_00e5e0c0("core_se_set_state_wep1_pl3003",param_1,0xffffffff,0);
        }
        if (*(int *)(param_1 + 0x4b0) == 0x13004) {
          FUN_00e5e0c0("core_se_set_state_wep1_pl3004",param_1,0xffffffff,0);
        }
        if (*(int *)(param_1 + 0x4b0) == 0x13005) {
          FUN_00e5e0c0("core_se_set_state_wep1_pl3005",param_1,0xffffffff,0);
        }
        if (*(int *)(param_1 + 0x4b0) == 0x13006) {
          FUN_00e5e0c0("core_se_set_state_wep1_pl3006",param_1,0xffffffff,0);
        }
        if (*(int *)(param_1 + 0x4b0) == 0x11301) {
          FUN_00e5e0c0("core_se_set_state_wep1_pl3006",param_1,0xffffffff,0);
        }
        if (*(int *)(param_1 + 0x4b0) == 0x13007) {
          FUN_00e5e0c0("core_se_set_state_wep1_pl3007",param_1,0xffffffff,0);
        }
        *(undefined4 *)(param_1 + 0x934) = 0x43700000;
        return 1;
      }
    }
  }
  return 0;
}

