// src/unsorted/unit_004D7B30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004D7B30..004D7FF0, 2 functions

#include "mgrr.h"

// 004D7B30  FUN_004d7b30  size=1216  [run]
undefined4 __fastcall FUN_004d7b30(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iStack_4;
  
  iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00a82090("Em0111",0x20111,0);
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar2,0,0xffffffff);
    FUN_00a8c5f0(1,*(undefined4 *)(param_1 + 0x4f0),iVar2,2,2);
    FUN_00a8c5f0(2,*(undefined4 *)(param_1 + 0x4f0),iVar2,3,3);
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      *(int *)(iVar2 + 0x518) = param_1;
    }
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar9 = &DAT_01b34e94;
      (**(code **)(*piVar4 + 4))(&DAT_01b34e94);
      iVar2 = FUN_00dd6d80(puVar9);
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x4f0) != 0) {
          uVar3 = FUN_00a7c7f0();
          FUN_00a7c960(uVar3);
        }
        uVar3 = FUN_009f8b40();
        FUN_009f8ae0(uVar3);
        lib::StaticArray<Collision*,8>::StaticArray<Collision*,8>();
      }
    }
  }
  iVar2 = FUN_00a82090("Em0112",0x20112,0);
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    FUN_00a8c5f0(3,*(undefined4 *)(param_1 + 0x4f0),iVar2,0x700,0xffffffff);
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar9 = &DAT_01b34e84;
      (**(code **)(*piVar4 + 4))(&DAT_01b34e84);
      iVar2 = FUN_00dd6d70(puVar9);
      if (iVar2 != 0) {
        FUN_004cbe70(0,param_1 + 0xe90);
        piVar4[0x146] = param_1;
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        puVar5 = (undefined4 *)FUN_009f8b60();
        FUN_009f8ae0(*puVar5);
      }
    }
  }
  iVar2 = FUN_00a82090("Em0117",0x20117,0);
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    FUN_00a8c5f0(5,*(undefined4 *)(param_1 + 0x4f0),iVar2,0x700,0xffffffff);
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x20))();
    }
  }
  if (*(int *)(param_1 + 0x4a0) != 1) {
    iVar2 = FUN_00a82090("Em011d",0x2011d,0);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      FUN_00a8c5f0(7,*(undefined4 *)(param_1 + 0x4f0),iVar2,0xffffffff,0xffffffff);
      FUN_00a8c5f0(8,*(undefined4 *)(param_1 + 0x4f0),iVar2,0,0);
      FUN_00a8c5f0(9,*(undefined4 *)(param_1 + 0x4f0),iVar2,1,1);
      FUN_00a8c5f0(10,*(undefined4 *)(param_1 + 0x4f0),iVar2,2,2);
      FUN_00a8c5f0(0xb,*(undefined4 *)(param_1 + 0x4f0),iVar2,3,3);
      FUN_00a8c5f0(0xc,*(undefined4 *)(param_1 + 0x4f0),iVar2,4,4);
      FUN_00a8c5f0(0xd,*(undefined4 *)(param_1 + 0x4f0),iVar2,5,5);
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iStack_4 = 0;
        do {
          iVar8 = *(int *)(param_1 + 800) + iStack_4;
          iVar6 = *(int *)(*(int *)(iVar8 + 0x60) + 0x40);
          if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0163ef94), iVar6 != 0)) {
            puVar1 = (uint *)(iVar8 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iStack_4 = iStack_4 + 0x70;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      FUN_00ac9300("eye_kage_DEC");
      FUN_00ac9300("matuge_DEC");
      *(undefined4 *)(param_1 + 0x1254) = 1;
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        iVar2 = FUN_00a7c8a0();
        *(int *)(iVar2 + 0x518) = param_1;
      }
    }
    return 1;
  }
  iVar2 = FUN_00a82090("Em01c1",0x201c1,0);
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    FUN_00a8c5f0(7,*(undefined4 *)(param_1 + 0x4f0),iVar2,0xffffffff,0xffffffff);
    FUN_00a8c5f0(0xc,*(undefined4 *)(param_1 + 0x4f0),iVar2,4,4);
    FUN_00a8c5f0(0xd,*(undefined4 *)(param_1 + 0x4f0),iVar2,5,5);
    iVar2 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iStack_4 = 0;
      do {
        iVar8 = *(int *)(param_1 + 800) + iStack_4;
        iVar6 = *(int *)(*(int *)(iVar8 + 0x60) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0163ef94), iVar6 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iStack_4 = iStack_4 + 0x70;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(short *)(param_1 + 0x324));
    }
    *(undefined4 *)(param_1 + 0x1254) = 1;
    iVar2 = FUN_00a7c8a0();
    iVar6 = 0;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x518) = param_1;
      iStack_4 = 0;
      if (0 < *(short *)(iVar2 + 0x324)) {
        do {
          iVar8 = *(int *)(iVar2 + 800);
          iVar7 = *(int *)(*(int *)(iVar8 + 0x60 + iVar6) + 0x40);
          if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_0163ef44), iVar7 != 0)) {
            puVar1 = (uint *)(iVar8 + 0x38 + iVar6);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iStack_4 = iStack_4 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iStack_4 < *(short *)(iVar2 + 0x324));
      }
    }
  }
  FUN_00ac9300("eye_kage_DEC");
  FUN_00ac9300("matuge_DEC");
  FUN_00ac9300("Head_hair_dam0_CBODY_DEC");
  return 1;
}

// 004D7FF0  FUN_004d7ff0  size=253  [run]
undefined4 __thiscall FUN_004d7ff0(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>(param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_00a7c970(*(undefined4 *)(iVar3 + 0x4f0));
  fVar1 = *(float *)(iVar3 + 0x40) - *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(iVar3 + 0x48) - *(float *)(param_1 + 0x48);
  if (fVar2 * fVar2 + fVar1 * fVar1 < 4.0) {
    FUN_004beea0(0x70002);
    return 1;
  }
  uVar5 = 0x70001;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c8a0();
    if ((iVar4 != 0) && ((*(uint *)(iVar4 + 0x4c0) & 1) != 0)) {
      uVar5 = 0x70000;
    }
  }
  fVar6 = (float10)FUN_00a8ec30(iVar3 + 0x40);
  fVar6 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar6));
  if ((float10)2.1816616 < ABS(ABS(fVar6))) {
    FUN_004beea0(0x10004);
    *(undefined4 *)(param_1 + 0x1014) = uVar5;
    return 1;
  }
  FUN_004beea0(uVar5);
  return 1;
}

