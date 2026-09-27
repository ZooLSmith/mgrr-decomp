// src/misc/esp17.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD420..00F32110, 5 functions

#include "mgrr.h"
#include "esp17.h"

// 00ECD420  esp17::esp17  size=18  [class]
undefined4 * __fastcall esp17::esp17(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 00ED0900  esp17::vf00  size=30  [class]
undefined4 __thiscall esp17::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F04160  esp17::addOtTransList  size=639  [class]
void __fastcall esp17::addOtTransList(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  esp107::vf10();
  pfVar3 = (float *)FUN_00e9fe70();
  local_20 = *(float *)(param_1 + 400) - *pfVar3;
  local_1c = *(float *)(param_1 + 0x194) - pfVar3[1];
  local_18 = *(float *)(param_1 + 0x198) - pfVar3[2];
  fVar5 = (float10)FUN_00fdef70();
  fVar1 = (float)fVar5;
  local_38 = 1.0;
  if (0.0 < *(float *)(param_1 + 0x468)) {
    if (*(float *)(param_1 + 0x468) < fVar1) {
      local_38 = 0.0;
    }
    else if (*(float *)(param_1 + 0x464) < fVar1 != (*(float *)(param_1 + 0x464) == fVar1)) {
      local_38 = 1.0 - (fVar1 - *(float *)(param_1 + 0x464)) /
                       (*(float *)(param_1 + 0x468) - *(float *)(param_1 + 0x464));
    }
  }
  iVar4 = *(int *)(param_1 + 0x450);
  fVar1 = *(float *)(param_1 + 0x25c) * local_38 * *(float *)(param_1 + 0x124);
  local_28 = 1.0 - fVar1;
  local_30 = local_28 + *(float *)(param_1 + 0x250) * fVar1;
  local_2c = *(float *)(param_1 + 0x254) * fVar1 + local_28;
  local_28 = local_28 + *(float *)(param_1 + 600) * fVar1;
  local_24 = 1.0;
  if (iVar4 <= *(int *)(param_1 + 0x454)) {
    do {
      FUN_00eacf00(iVar4,&local_30);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= *(int *)(param_1 + 0x454));
  }
  if ((*(int *)(param_1 + 0x458) != 0) &&
     (*(float *)(param_1 + 0x110) != *(float *)(param_1 + 0x118))) {
    local_30 = 1.0;
    local_2c = 1.0;
    local_28 = 1.0;
    fVar1 = *(float *)(param_1 + 0x118) + 1.0;
    if (fVar1 <= 0.0001) {
      fVar1 = 0.0001;
    }
    fVar2 = (float)*(int *)(param_1 + 0x45c);
    if (*(int *)(param_1 + 0x45c) < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    if (fVar2 - 0.0 != 0.0) {
      local_24 = 1.0 - ((fVar1 - 0.0) / (fVar2 - 0.0)) * *(float *)(param_1 + 0x460);
      if (0.0 < local_24) {
        FUN_00eacfb0(&local_30);
        return;
      }
      local_24 = 0.0;
      FUN_00eacfb0(&local_30);
      return;
    }
    local_24 = 0.0;
    FUN_00eacfb0(&local_30);
    return;
  }
  return;
}

// 00F23380  esp17::vf08  size=80  [class]
void __fastcall esp17::vf08(int param_1)

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

// 00F32110  esp17::preTrans  size=343  [class]
undefined4 __thiscall
esp17::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined4 *)(param_1 + 0x454) = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar3 != (undefined4 *)0x0)) {
    psVar1 = (short *)*puVar3;
    if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
      uVar4 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (psVar1 != (short *)0x0) {
      *(int *)(param_1 + 0x450) = (int)*psVar1;
      *(int *)(param_1 + 0x454) = (int)psVar1[1];
      *(int *)(param_1 + 0x45c) = (int)psVar1[3];
      if (psVar1[2] == 0) {
        *(undefined4 *)(param_1 + 0x458) = 0;
      }
      else if (psVar1[2] == 1) {
        *(undefined4 *)(param_1 + 0x458) = 1;
      }
      else {
        FUN_009cca90(param_1,&DAT_016db8dc);
      }
      if (*(int *)(param_1 + 0x450) < 0) {
        FUN_009cca90(param_1,&DAT_016db904);
        return 0;
      }
      if (*(int *)(param_1 + 0x454) < *(int *)(param_1 + 0x450)) {
        FUN_009cca90(param_1,&DAT_016db930);
        return 0;
      }
    }
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar3 != (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)*puVar3;
    if ((undefined4 *)((int)puVar3 + 0xfU & 0xfffffff0) != puVar3) {
      uVar4 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x468) = *puVar3;
      *(undefined4 *)(param_1 + 0x464) = puVar3[1];
    }
  }
  *(undefined4 *)(param_1 + 0x460) = 0x3f800000;
  return 1;
}

