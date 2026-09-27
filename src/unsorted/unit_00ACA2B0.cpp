// src/unsorted/unit_00ACA2B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ACA2B0..00ACA460, 2 functions

#include "mgrr.h"

// 00ACA2B0  FUN_00aca2b0  size=419  [run]
bool __fastcall FUN_00aca2b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  iVar2 = BehaviorAppBase::vf40();
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c890();
    iVar3 = FUN_00de4500("pl0010_0000.mot");
    if ((iVar3 != 0) && (iVar2 != 0)) {
      FUN_00e26e50(1);
      *(uint *)(iVar2 + 0x94) = *(uint *)(iVar2 + 0x94) | 2;
      iVar2 = Animation::Unit::setAnimation
                        (iVar3,&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      if (iVar2 != -1) {
        fVar4 = (float10)FUN_0043f390(iVar2);
        fVar4 = (float10)FUN_00dde300(0,(float)fVar4);
        FUN_00407b10(iVar2,(float)fVar4);
      }
    }
    uVar5 = 3;
    FUN_00a7c800(3);
    iVar2 = FUN_00a12210(uVar5);
    *(int *)(param_1 + 0xb00) = iVar2;
    if (iVar2 != 0) {
      uVar5 = 4;
      FUN_00a7c800(4);
      iVar2 = FUN_00a12210(uVar5);
      *(int *)(param_1 + 0xb04) = iVar2;
      if (iVar2 != 0) {
        puVar1 = (undefined4 *)(param_1 + 0xa00);
        *(undefined4 *)(param_1 + 0xa40) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xa44) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xa48) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xa4c) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xa38) = 0;
        *(undefined4 *)(param_1 + 0xa34) = 0;
        *(undefined4 *)(param_1 + 0xa30) = 0;
        *(undefined4 *)(param_1 + 0xa2c) = 0;
        *(undefined4 *)(param_1 + 0xa24) = 0;
        *(undefined4 *)(param_1 + 0xa20) = 0;
        *(undefined4 *)(param_1 + 0xa1c) = 0;
        *(undefined4 *)(param_1 + 0xa18) = 0;
        *(undefined4 *)(param_1 + 0xa10) = 0;
        *(undefined4 *)(param_1 + 0xa0c) = 0;
        *(undefined4 *)(param_1 + 0xa08) = 0;
        *(undefined4 *)(param_1 + 0xa04) = 0;
        *(undefined4 *)(param_1 + 0xa3c) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xa28) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xa14) = 0x3f800000;
        *puVar1 = 0x3f800000;
        D3DXMatrixRotationY(local_50,0x40490fdb);
        D3DXMatrixMultiply(puVar1,auStack_58,puVar1);
        *(undefined4 **)(*(int *)(param_1 + 0xb04) + 0xa4) = puVar1;
        iVar2 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
                StaticArray<Behavior::EffectIntegrationContainer,32>(&stack0xffffff90);
        return iVar2 != 0;
      }
    }
  }
  return false;
}

// 00ACA460  FUN_00aca460  size=38  [run]
void __fastcall FUN_00aca460(int param_1)

{
  int *piVar1;
  
  BehaviorAppBase::vf50();
  if (*(int *)(param_1 + 0x4f0) != 0) {
    piVar1 = (int *)FUN_00a7c800();
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00aca483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x18))();
      return;
    }
  }
  return;
}

