// src/misc/esp106.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CFEB0..009DF460, 5 functions

#include "types.h"

// 009CFEB0  esp106::vf04  size=5  [class]
undefined4 esp106::vf04(void)

{
  return 0;
}

// 009CFEC0  esp106::vf14  size=18  [class]
void __fastcall esp106::vf14(int param_1)

{
  if (*(int *)(param_1 + 0x450) != 0) {
    thunk_FUN_00dfbaa0(*(int *)(param_1 + 0x450));
  }
  return;
}

// 009D4270  esp106::esp106  size=48  [class]
undefined4 * __fastcall esp106::esp106(undefined4 *param_1)

{
  int iVar1;
  
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  iVar1 = 3;
  do {
    Hw::cTexture::cTexture_6();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 009D8930  esp106::vf10  size=335  [class]
void __fastcall esp106::vf10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (((*(uint *)(param_1 + 0x30) & 0x200000) == 0) &&
     (iVar2 = FUN_00dfc0b0(param_1 + 0x454,*(undefined4 *)(param_1 + 0x450)), iVar2 != 0)) {
    iVar2 = FUN_00dd7ad0();
    FUN_00efed20();
    if ((0.01 < *(float *)(param_1 + 0x124)) &&
       ((DAT_01edd490 != 0 &&
        (puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0xd0,0x20), puVar3 != (undefined4 *)0x0)))) {
      *puVar3 = cEspDrawWork::vftable;
      puVar3[9] = 0;
      *(undefined1 *)(puVar3 + 4) = 0;
      FUN_00edfcd0(param_1 + 0x3c8);
      FUN_00f26b40(puVar3);
      uVar4 = FUN_00fa0740(0);
      puVar3[6] = uVar4;
      FUN_00f204b0(puVar3,puVar3,*(undefined4 *)(DAT_01b78870 + 0x1e74),param_1 + 0x3c8,DAT_01b78870
                  );
      if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
        uVar5 = FUN_009cc5a0(*(short *)(param_1 + 0x4e));
        uVar1 = *(uint *)(param_1 + 0x3c);
        uVar6 = uVar5 >> 5;
        uVar5 = 0x80000000 >> ((byte)uVar5 & 0x1f);
        (&DAT_01eddb60)[uVar6 + iVar2] = (&DAT_01eddb60)[uVar6 + iVar2] | uVar5;
        if ((uVar1 >> 0x16 & 1) == 0) {
          (&DAT_01eddb4c)[uVar6 + iVar2] = (&DAT_01eddb4c)[uVar6 + iVar2] & ~uVar5;
        }
        else {
          (&DAT_01eddb4c)[uVar6 + iVar2] = (&DAT_01eddb4c)[uVar6 + iVar2] | uVar5;
        }
        if ((uVar1 >> 7 & 1) != 0) {
          (&DAT_01eddb38)[uVar6 + iVar2] = (&DAT_01eddb38)[uVar6 + iVar2] | uVar5;
          return;
        }
        (&DAT_01eddb38)[uVar6 + iVar2] = (&DAT_01eddb38)[uVar6 + iVar2] & ~uVar5;
      }
    }
  }
  return;
}

// 009DF460  esp106::vf00  size=60  [class]
undefined4 __thiscall esp106::vf00(undefined4 param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = 3;
  do {
    Hw::cTexture::cTexture_5();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

