// src/misc/P310PillerObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00415830..00AB9030, 7 functions

#include "mgrr.h"
#include "P310PillerObj.h"

// 00415830  P310PillerObj::vf40  size=30  [class]
undefined4 __fastcall P310PillerObj::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = Bm6041::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0xb40) = 0;
  return 1;
}

// 00415850  FUN_00415850  size=8  [between]
void __fastcall FUN_00415850(int param_1)

{
  *(undefined1 *)(param_1 + 0xb40) = 1;
  return;
}

// 00415860  FUN_00415860  size=512  [between]
void __fastcall FUN_00415860(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  int iStack_70;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_44;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar6 = param_1[0x13b];
  iVar5 = FUN_00e03ea0("bridge_09");
  if (iVar6 == iVar5) {
    if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
      (**(code **)(*param_1 + 0x20))();
      FUN_00aa92c0(1);
      return;
    }
  }
  else {
    FUN_004066f0();
    iVar6 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
    iStack_70 = 0;
    if (0 < iVar6) {
      do {
        piVar7 = (int *)(**(code **)(*(int *)param_1[0x1ec] + 300))(auStack_64,iStack_70);
        iVar5 = *piVar7;
        uVar9 = uStack_50 | 0x20000000;
        puVar8 = (uint *)(**(code **)(*param_1 + 0x68))();
        uStack_30 = *puVar8;
        uStack_2c = puVar8[1];
        uStack_28 = puVar8[2];
        puVar8 = (uint *)FUN_00a925a0(auStack_60);
        uVar1 = *puVar8;
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        if ((iVar5 != 0) && (uVar4 = *(uint *)(iVar5 + 0xc), uVar4 != 0)) {
          puVar8 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
          *puVar8 = *puVar8 | 0x80000;
          puVar8[0x15] = 0x18e;
          *puVar8 = *puVar8 | 0x100000;
          puVar8[0x16] = 0x47c34f80;
          *puVar8 = *puVar8 | 0x800000;
          puVar8[0x19] = 100;
          *puVar8 = *puVar8 | 0x200000;
          puVar8[0x17] = uVar9;
          *puVar8 = *puVar8 | 0x400000;
          puVar8[0x18] = uStack_44;
          *puVar8 = *puVar8 | 0x1000000;
          puVar8[0x1a] = uStack_30;
          *puVar8 = *puVar8 | 0x2000000;
          puVar8[0x1b] = uStack_2c;
          *puVar8 = *puVar8 | 0x4000000;
          puVar8[0x1c] = uStack_28;
          *puVar8 = *puVar8 | 0x8000000;
          puVar8[0x1d] = uVar1;
          *puVar8 = *puVar8 | 0x10000000;
          puVar8[0x1e] = uVar2;
          *puVar8 = *puVar8 | 0x20000000;
          puVar8[0x1f] = uVar3;
        }
        iStack_70 = iStack_70 + 1;
      } while (iStack_70 < iVar6);
    }
    if (DAT_01885d68 != 1) {
      piVar7 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar7 = *piVar7 + -1;
      if (((*piVar7 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 00415A60  P310PillerObj::vf4C  size=42  [class]
void __fastcall P310PillerObj::vf4C(int param_1)

{
  BehaviorBgBase::vf4C();
  if ((*(char *)(param_1 + 0xb40) != '\0') && (*(char *)(param_1 + 0xb41) == '\0')) {
    FUN_00415860();
    *(undefined1 *)(param_1 + 0xb41) = 1;
  }
  return;
}

// 00AB0370  P310PillerObj::P310PillerObj  size=18  [class]
undefined4 * __fastcall P310PillerObj::P310PillerObj(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB0390  P310PillerObj::vf04  size=6  [class]
undefined * P310PillerObj::vf04(void)

{
  return &DAT_01b34c14;
}

// 00AB9030  P310PillerObj::vf00  size=43  [class]
undefined4 __thiscall P310PillerObj::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

