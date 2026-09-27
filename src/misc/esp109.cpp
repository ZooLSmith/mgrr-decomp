// src/misc/esp109.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CFF50..009DF4C0, 5 functions

#include "mgrr.h"
#include "esp109.h"

// 009CFF50  esp109::preTrans  size=75  [class]
undefined4 __thiscall
esp109::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x428) = 0x7b;
  if ((*(uint *)(param_1 + 0x38) & 0x8000000) != 0) {
    *(undefined2 *)(param_1 + 0x428) = 0x7c;
  }
  return 1;
}

// 009CFFA0  esp109::vf08  size=5  [class]
void __fastcall esp109::vf08(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) != 0) {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
    FUN_00efb130(piVar1);
    FUN_00efbd40(piVar1);
    return;
  }
  *piVar1 = 0;
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  return;
}

// 009CFFB0  esp109::addOtTransList  size=5  [class]
void __fastcall esp109::addOtTransList(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
    iVar2 = FUN_00dd7ad0();
    if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
      uVar4 = -(int)*(short *)(param_1 + 0x4e) - 4;
    }
    else {
      FUN_00dd5650(&DAT_01659438);
      uVar4 = 0;
    }
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar5 = uVar4 >> 5;
    uVar4 = 0x80000000 >> ((byte)uVar4 & 0x1f);
    (&DAT_01eddb60)[uVar5 + iVar2] = (&DAT_01eddb60)[uVar5 + iVar2] | uVar4;
    if ((uVar1 >> 0x16 & 1) == 0) {
      (&DAT_01eddb4c)[uVar5 + iVar2] = (&DAT_01eddb4c)[uVar5 + iVar2] & ~uVar4;
    }
    else {
      (&DAT_01eddb4c)[uVar5 + iVar2] = (&DAT_01eddb4c)[uVar5 + iVar2] | uVar4;
    }
    if ((uVar1 >> 7 & 1) == 0) {
      (&DAT_01eddb38)[uVar5 + iVar2] = (&DAT_01eddb38)[uVar5 + iVar2] & ~uVar4;
    }
    else {
      (&DAT_01eddb38)[uVar5 + iVar2] = (&DAT_01eddb38)[uVar5 + iVar2] | uVar4;
    }
  }
  esp107::vf10();
  if (*(float *)(param_1 + 0x124) <= 0.01) {
    return;
  }
  if ((DAT_01edd490 != 0) &&
     (puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0xd0,0x20), puVar3 != (undefined4 *)0x0)) {
    *puVar3 = cEspDrawWork::vftable;
    puVar3[9] = 0;
    FUN_00edfcd0(param_1 + 0x3c8);
    FUN_00f26b40(puVar3);
    FUN_00f204b0(puVar3,puVar3,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1e74),param_1 + 0x3c8,
                 *(int *)(param_1 + 0x28));
    return;
  }
  FUN_009cca90(param_1,&DAT_016da558);
  return;
}

// 009D42D0  esp109::esp109  size=18  [class]
undefined4 * __fastcall esp109::esp109(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 009DF4C0  esp109::vf00  size=30  [class]
undefined4 __thiscall esp109::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

