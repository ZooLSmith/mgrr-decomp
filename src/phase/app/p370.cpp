// src/phase/app/p370.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D48B50..00D703E0, 7 functions

#include "mgrr.h"
#include "cP370.h"

// 00D48B50  cP370::vf1C  size=3  [class]
void cP370::vf1C(void)

{
  return;
}

// 00D53E50  cP370::vf08  size=166  [class]
void __fastcall cP370::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 0x44))(1,"r30b_gate_col");
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 0x44))(1,"r30b_gate_col1");
  piVar1 = (int *)FUN_00c14bb0();
  iVar2 = (**(code **)(*piVar1 + 0x20))("r30b_gate",0x30b);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar1 + 0x1c))();
  }
  piVar1 = (int *)FUN_00c14bb0();
  iVar2 = (**(code **)(*piVar1 + 0x20))("floor_after",0x30b);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar1 + 0x20))();
  }
  uVar3 = cDepressionScreenDisp::cDepressionScreenDisp_2();
  *(undefined4 *)(param_1 + 0x120) = uVar3;
  DAT_01bea070 = DAT_01bea070 | 0x20000000;
  *(undefined4 *)(param_1 + 0x124) = 0;
  return;
}

// 00D53F00  cP370::vf0C  size=36  [class]
void __fastcall cP370::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_00d2cf70();
  }
  DAT_01bea070 = DAT_01bea070 | 0x200000;
  DAT_01bea064 = DAT_01bea064 | 0x1000;
  return;
}

// 00D53F30  cP370::vf10  size=89  [class]
void __fastcall cP370::vf10(int param_1)

{
  int *piVar1;
  
  DAT_01bea094 = DAT_01bea094 & 0xfffff7ff;
  DAT_01bea070 = DAT_01bea070 & 0xdfdfffff;
  DAT_01bea064 = DAT_01bea064 & 0xffffefff;
  DAT_01bea060 = DAT_01bea060 & 0xffefffff;
  if (*(undefined4 **)(param_1 + 0x120) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x120))(1);
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  piVar1 = (int *)FUN_00c13920();
                    /* WARNING: Could not recover jumptable at 0x00d53f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x84))();
  return;
}

// 00D53F90  cP370::vf14  size=54  [class]
void cP370::vf14(void)

{
  int iVar1;
  
  DAT_01bea094 = DAT_01bea094 & 0xfffff7ff;
  DAT_01bea060 = DAT_01bea060 & 0xffefffff;
  iVar1 = FUN_00e03ea0("P370_IN");
  if (DAT_018b9178 == iVar1) {
    DAT_01bea070 = DAT_01bea070 & 0xdfffffff;
  }
  return;
}

// 00D53FD0  cP370::thunk_vf18  size=5  [class]
void __fastcall cP370::thunk_vf18(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  if (*(int *)(param_1 + 0x124) == 0) {
    uVar8 = 0xf5010;
    uVar3 = FUN_00e03ea0("emblem",0xf5010);
    iVar4 = FUN_00a18d70(uVar3,uVar8);
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      iVar7 = 0;
      if (0 < *(short *)(iVar4 + 0x324)) {
        iVar6 = 0;
        do {
          iVar2 = *(int *)(iVar4 + 800);
          iVar5 = *(int *)(*(int *)(iVar2 + 0x60 + iVar6) + 0x40);
          if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,&DAT_01640d84), iVar5 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar6);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iVar7 < *(short *)(iVar4 + 0x324));
      }
      *(undefined4 *)(param_1 + 0x124) = 1;
    }
  }
  return;
}

// 00D703E0  cP370::vf00  size=54  [class]
undefined4 * __thiscall cP370::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

