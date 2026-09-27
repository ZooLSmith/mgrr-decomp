// src/misc/cItemTreasureBox.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E8A90..00AB9810, 14 functions

#include "mgrr.h"
#include "cItemTreasureBox.h"

// 005E8A90  cItemTreasureBox::vf2C  size=66  [class]
void __fastcall cItemTreasureBox::vf2C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  Bh0064::vf2C();
  if (*(int *)(param_1 + 0x588) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7bc);
    iVar2 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar2 + 0x2c) = 1;
    *(undefined4 *)(iVar2 + 0x30) = uVar1;
    iVar2 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(param_1 + 0x7c0);
    *(undefined4 *)(iVar2 + 0x98) = 1;
  }
  return;
}

// 005E8AE0  cItemTreasureBox::vf44  size=54  [class]
void __fastcall cItemTreasureBox::vf44(int param_1)

{
  if (*(int *)(param_1 + 0xa78) != 0) {
    FUN_00a805f0();
  }
  FUN_00a934c0();
  FUN_00dd7270();
  *(undefined4 *)(param_1 + 0xa80) = 0;
  BehaviorBgBase::vf44();
  return;
}

// 005E8B20  cItemTreasureBox::vf4C  size=29  [class]
void __fastcall cItemTreasureBox::vf4C(int *param_1)

{
  BehaviorBgBase::vf4C();
  if ((char)param_1[0x29c] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x005e8b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  }
  return;
}

// 005E8B40  cItemTreasureBox::vf50  size=497  [class]
void __fastcall cItemTreasureBox::vf50(int *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (((param_1[0xd9] & 0x40000U) == 0) || ((char)param_1[0x29c] != '\0')) {
    FUN_00a93170();
    BehaviorBgBase::vf50();
    if (((char)param_1[0x29c] != '\0') &&
       ((iVar2 = FUN_00a94ce0(0), iVar2 != 0 &&
        (*(undefined1 *)(param_1 + 0x29c) = 0, param_1[0x2a0] != 0)))) {
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
      uStack_30 = *puVar3;
      uStack_28 = puVar3[2];
      uStack_24 = puVar3[3];
      uStack_20 = 0;
      uStack_18 = 0;
      uStack_14 = 0x3f800000;
      fStack_1c = (float)param_1[0x25];
      iVar2 = *(int *)(param_1[0x2a0] + 0x48);
      if ((iVar2 == 0x3800cb76) || (iVar2 == 0x7089ed6c)) {
        fStack_1c = fStack_1c + 1.5707964;
      }
      fStack_2c = (float)puVar3[1] + 1.0;
      piVar4 = (int *)FUN_009555e0(*(undefined4 *)(param_1[0x2a0] + 0x48),&uStack_30);
      if (piVar4 == (int *)0x0) {
        *(undefined1 *)((int)param_1 + 0xa72) = 1;
      }
      else {
        if (param_1[0x2a8] != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2a2));
        }
        FUN_00949490(1);
        FUN_009494b0(1);
        FUN_0094d000(1);
        (**(code **)(*piVar4 + 0x24))();
        (**(code **)(*piVar4 + 0x2c))(param_1[0x2a0]);
        FUN_009494f0(*(undefined4 *)(param_1[0x2a0] + 4));
        FUN_0094d000(1);
        FUN_00949510(*(undefined4 *)param_1[0x2a0]);
        iVar2 = FUN_00949270();
        if (iVar2 != 0) {
          puVar3 = &uStack_24;
          FUN_00949280(puVar3);
          FUN_00a7cf00(puVar3);
        }
        FUN_00949530(0);
        iVar2 = FUN_00949320();
        if ((iVar2 == 8) && (0 < *(int *)(param_1[0x2a0] + 0x5c))) {
          FUN_00949690(*(int *)(param_1[0x2a0] + 0x5c));
        }
        if (param_1[0x2a8] != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2a2));
        }
      }
      *(undefined1 *)((int)param_1 + 0xa71) = 1;
    }
  }
  if (((*(char *)((int)param_1 + 0xa71) != '\0') && (1 < (short)param_1[0xc9])) &&
     (param_1[200] != -0x70)) {
    puVar1 = (uint *)(param_1[200] + 0xa8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return;
}

// 005E8D40  FUN_005e8d40  size=7  [between]
undefined1 __fastcall FUN_005e8d40(int param_1)

{
  return *(undefined1 *)(param_1 + 0xa71);
}

// 005E8D80  cItemTreasureBox::vf94  size=7  [class]
undefined4 __fastcall cItemTreasureBox::vf94(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa7c);
}

// 005EAD20  cItemTreasureBox::startup  size=649  [class]
undefined4 __fastcall cItemTreasureBox::startup(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = BehaviorBgBase::startup();
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xa78) = 0;
    *(undefined4 *)(param_1 + 0xa80) = 0;
    FUN_00dd7240();
    iVar2 = *(int *)(param_1 + 0x4b4);
    if (((iVar2 == 0x71000) || (iVar2 == 0x71002)) || (iVar2 == 0x71004)) {
      if (1 < *(short *)(param_1 + 0x324)) {
        puVar1 = (uint *)(*(int *)(param_1 + 800) + 0xa8);
        *puVar1 = *puVar1 | 8;
      }
      iVar2 = 0;
      if (0 < *(int *)(*(int *)(param_1 + 800) + 0xa4)) {
        do {
          if ((iVar2 < 0) || (*(int *)(*(int *)(param_1 + 800) + 0xa4) <= iVar2)) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 800) + 0xa0) + iVar2 * 4);
          }
          *(undefined4 *)(iVar3 + 0x460) = 1;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(*(int *)(param_1 + 800) + 0xa4));
      }
    }
    *(undefined4 *)(param_1 + 0xa7c) = 0;
    if (*(int *)(param_1 + 0x4b0) == 0x71002) {
      *(undefined4 *)(param_1 + 0xa7c) = 2;
    }
    else {
      *(uint *)(param_1 + 0xa7c) = (*(int *)(param_1 + 0x4b0) != 0x71004) - 1 & 3;
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
    uVar5 = 1;
    FUN_00a92f90(1);
    FUN_00e26e50(uVar5);
    iVar2 = FUN_00a92f90();
    *(uint *)(iVar2 + 0x94) = *(uint *)(iVar2 + 0x94) | 2;
    *(undefined4 *)(param_1 + 0x640) = 1;
    FUN_00410540(1,&DAT_01b7bd48);
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
    uVar5 = FUN_00a8d2a0();
    puVar4 = (undefined4 *)FUN_009f8b60();
    iVar2 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x3fc90fdb;
      local_14 = 0x3f800000;
      FUN_00d77cc0(&local_20);
      local_20 = 0x3ecccccd;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x3f800000;
      FUN_00d77c90(&local_20);
      *(undefined4 *)(iVar2 + 0x594) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0x590) = 0x3f19999a;
      _strncpy_s((char *)(iVar2 + 0x394),0x20,"TreasureBody",0x1f);
      FUN_00a93a00(iVar2,uVar5);
      FUN_00d7b0f0();
      FUN_00d7b890();
      *(undefined4 *)(param_1 + 0x9f8) = 1;
      if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(1);
        FUN_008f03a0(0x100,1);
      }
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
        **(undefined4 **)(param_1 + 0x370) = 1;
      }
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 0;
      }
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
      }
      *(undefined4 *)(param_1 + 0xa70) = 0;
      *(undefined4 *)(param_1 + 0xa74) = 0;
      return 1;
    }
  }
  return 0;
}

// 005EBE20  cItemTreasureBox::vf19C  size=215  [class]
void __thiscall cItemTreasureBox::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
  }
  else {
    (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  }
  if (param_1[0x2a0] != 0) {
    iVar4 = FUN_0094a210();
    if (iVar4 != 0) {
      FUN_00a8c9b0(0,2,0,0);
    }
  }
  return;
}

// 005EBF10  FUN_005ebf10  size=63  [between]
void __fastcall FUN_005ebf10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x60);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 005EBF50  FUN_005ebf50  size=284  [between]
undefined4 __fastcall FUN_005ebf50(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  param_1[0x1a1] = 0;
  if (((param_1[0x2a0] != 0) && (iVar1 = FUN_0094a210(), iVar1 != 0)) || (param_1[0x139] != 0)) {
    return 0;
  }
  FUN_00ac2080(0);
  piVar3 = (int *)param_1[0x19f];
  piVar2 = piVar3 + param_1[0x1a1] * 0x54;
  if (piVar3 == piVar2) {
    return 0;
  }
  do {
    iVar1 = *piVar3;
    if ((((iVar1 != 0) && (iVar1 != 1)) && ((iVar1 != 2 && ((iVar1 != 0x1b0 && (iVar1 != 0x147))))))
       && ((iVar1 = FUN_00d46780(), iVar1 == 0 || (*piVar3 != 0x1b0)))) {
      iVar4 = 0;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar4 = FUN_00a7c8a0();
      }
      if (((*piVar3 != 0x146) && (iVar4 != 0)) &&
         (iVar1 = FUN_009f9350(*(undefined4 *)(iVar4 + 0x4b0)), iVar1 != 0)) {
        (**(code **)(*param_1 + 0x198))(iVar4,piVar3,1);
        (**(code **)(*param_1 + 0x21c))(iVar4,(char)piVar3[4],0x3c23d70a,0);
        param_1[0x139] = 1;
        return 1;
      }
    }
    piVar3 = piVar3 + 0x54;
    if (piVar3 == piVar2) {
      return 0;
    }
  } while( true );
}

// 005EC070  cItemTreasureBox::vf48  size=402  [class]
void __fastcall cItemTreasureBox::vf48(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  BehaviorBgBase::vf48();
  if (*(char *)(param_1 + 0xa71) == '\0') {
LAB_005ec0a6:
    if (*(char *)(param_1 + 0xa72) == '\0') goto LAB_005ec1ae;
  }
  else if (*(char *)(param_1 + 0xa72) == '\0') {
    iVar2 = FUN_0094e9f0(**(undefined4 **)(param_1 + 0xa80));
    *(bool *)(param_1 + 0xa72) = iVar2 == 0;
    goto LAB_005ec0a6;
  }
  fVar4 = (float10)FUN_00a92ff0();
  fVar4 = fVar4 * (float10)0.016666668 + (float10)*(float *)(param_1 + 0xa74);
  *(float *)(param_1 + 0xa74) = (float)fVar4;
  if ((float10)1 < fVar4 == ((float10)1 == fVar4)) {
LAB_005ec1ae:
    iVar2 = FUN_005ebf50();
    if ((iVar2 != 0) || (*(char *)(param_1 + 0xa73) != '\0')) {
      *(undefined1 *)(param_1 + 0xa73) = 0;
      *(undefined1 *)(param_1 + 0xa70) = 1;
      FUN_00a9e290(&DAT_01641bdc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    return;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1f);
  }
  *(undefined4 *)(param_1 + 0xa74) = 0x3f800000;
  if (*(short *)(param_1 + 0x324) < 1) {
    FUN_00dd5650(&DAT_0164524c);
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(*(int *)(param_1 + 800) + 0x1c);
  }
  iVar3 = 0;
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      *(float *)(iVar3 + 0x1c + *(int *)(param_1 + 800)) = fVar1 - 0.02;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar2 < *(short *)(param_1 + 0x324));
  }
  if (*(short *)(param_1 + 0x324) < 1) {
    FUN_00dd5650(&DAT_0164524c);
  }
  else if (0.0 < *(float *)(*(int *)(param_1 + 800) + 0x1c)) goto LAB_005ec1ae;
  iVar3 = 0;
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      *(undefined4 *)(iVar3 + 0x1c + *(int *)(param_1 + 800)) = 0;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar2 < *(short *)(param_1 + 0x324));
  }
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 00AA6E70  cItemTreasureBox::cItemTreasureBox  size=28  [class]
undefined4 * __fastcall cItemTreasureBox::cItemTreasureBox(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  param_1[0x2a8] = 0;
  return param_1;
}

// 00AA6E90  cItemTreasureBox::vf04  size=6  [class]
undefined * cItemTreasureBox::vf04(void)

{
  return &DAT_01b353b4;
}

// 00AB9810  cItemTreasureBox::destruct  size=43  [class]
undefined4 __thiscall cItemTreasureBox::destruct(undefined4 param_1,byte param_2)

{
  FUN_00dd7270();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

