// src/managers/scenariomanager/ScenarioManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6D6F0..00A7BCB0, 47 functions

#include "types.h"

// 00A6D6F0  ScenarioManagerImplement::vf04  size=216  [class]
void __thiscall ScenarioManagerImplement::vf04(int param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  char acStack_10 [16];
  
  iVar2 = 0;
  piVar6 = (int *)(param_1 + 0x74);
  while (*piVar6 != 0) {
    iVar2 = iVar2 + 1;
    piVar6 = piVar6 + 2;
    if (7 < iVar2) {
      return;
    }
  }
  piVar5 = &DAT_018a1438;
  uVar3 = 0;
  do {
    if (*piVar5 == *param_2) goto LAB_00a6d73f;
    uVar3 = uVar3 + 8;
    piVar5 = piVar5 + 2;
  } while (uVar3 < 0xf8);
  piVar5 = (int *)&DAT_018a1528;
LAB_00a6d73f:
  puVar4 = (undefined4 *)(*(code *)piVar5[1])(param_3);
  if (puVar4 != (undefined4 *)0x0) {
    *piVar6 = (int)puVar4;
    piVar6[1] = 0;
    puVar4[2] = *param_2;
    pcVar1 = *(code **)*puVar4;
    puVar4[3] = piVar5;
    (*pcVar1)();
    piVar6[1] = 1;
    _sprintf_s(acStack_10,0x10,"bgm_r%03x_start",puVar4[2]);
    FUN_00e5e1b0(acStack_10);
    _sprintf_s(acStack_10,0x10,"se_r%03x_start",puVar4[2]);
    FUN_00e5e050(acStack_10,0);
  }
  return;
}

// 00A6D7D0  ScenarioManagerImplement::vf0C  size=61  [class]
void __thiscall ScenarioManagerImplement::vf0C(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x74);
  iVar3 = 8;
  do {
    piVar1 = (int *)*piVar2;
    if ((piVar1 != (int *)0x0) && (piVar1[2] == *param_2)) {
      (**(code **)(*piVar1 + 0xc))();
    }
    piVar2 = piVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00d89e90(0x38,*param_2);
  return;
}

// 00A6D810  ScenarioManagerImplement::vf08  size=135  [class]
void __thiscall ScenarioManagerImplement::vf08(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char acStack_10 [16];
  
  iVar1 = *param_2;
  piVar4 = (int *)(param_1 + 0x74);
  iVar3 = 8;
  do {
    piVar2 = (int *)*piVar4;
    if ((piVar2 != (int *)0x0) && (piVar2[2] == iVar1)) {
      (**(code **)(*piVar2 + 8))();
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0x14))(1);
        *piVar4 = 0;
      }
      _sprintf_s(acStack_10,0x10,"bgm_r%03x_end",iVar1);
      FUN_00e5e1b0(acStack_10);
      _sprintf_s(acStack_10,0x10,"se_r%03x_end",iVar1);
      FUN_00e5e050(acStack_10,0);
    }
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 00A6D8A0  ScenarioManagerImplement::onStartupRoom  size=107  [class]
void __thiscall ScenarioManagerImplement::onStartupRoom(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00d44eb0(param_2);
  if (iVar1 != 0) {
    iVar2 = (**(code **)(iVar1 + 4))(&DAT_01b7bd48);
    if (iVar2 == 0) {
      FUN_00dd5650("ScenarioManagerImplement::onStartupRoom Phase Object creater error");
      return;
    }
    *(int *)(param_1 + 0xb4) = iVar2;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(iVar2 + 4) = param_2;
    *(int *)(*(int *)(param_1 + 0xb4) + 8) = iVar1;
    (**(code **)(**(int **)(param_1 + 0xb4) + 4))();
  }
  return;
}

// 00A6D910  ScenarioManagerImplement::vf14  size=34  [class]
void __fastcall ScenarioManagerImplement::vf14(int param_1)

{
  if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb4) + 8))();
    *(undefined4 *)(param_1 + 0xb8) = 1;
  }
  return;
}

// 00A6D940  ScenarioManagerImplement::vf18  size=74  [class]
void __thiscall ScenarioManagerImplement::vf18(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xb4);
  if ((piVar1 != (int *)0x0) && (piVar1[1] == param_2)) {
    (**(code **)(*piVar1 + 0x10))();
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x2c))();
    if (*(undefined4 **)(param_1 + 0xb4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xb4))(1);
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
  }
  return;
}

// 00A6D990  ScenarioManagerImplement::vf1C  size=42  [class]
void __thiscall
ScenarioManagerImplement::vf1C(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xb4);
  if ((piVar1 != (int *)0x0) && (piVar1[1] == param_2)) {
    (**(code **)(*piVar1 + 0x14))(param_2,param_3,param_4);
  }
  return;
}

// 00A6D9C0  ScenarioManagerImplement::vf20  size=37  [class]
void __thiscall ScenarioManagerImplement::vf20(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xb4);
  if ((piVar1 != (int *)0x0) && (piVar1[1] == param_2)) {
    (**(code **)(*piVar1 + 0x1c))(param_2,param_3);
  }
  return;
}

// 00A6D9F0  ScenarioManagerImplement::vf24  size=25  [class]
void __fastcall ScenarioManagerImplement::vf24(int param_1)

{
  if (*(int *)(param_1 + 0xb4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a6da04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x20))();
    return;
  }
  return;
}

// 00A6DA10  ScenarioManagerImplement::vf28  size=25  [class]
void __fastcall ScenarioManagerImplement::vf28(int param_1)

{
  if (*(int *)(param_1 + 0xb4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a6da24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x24))();
    return;
  }
  return;
}

// 00A6DA30  ScenarioManagerImplement::vf2C  size=34  [class]
void __fastcall ScenarioManagerImplement::vf2C(int param_1)

{
  if ((DAT_01be8e44 == 2) && (*(int *)(param_1 + 0xb4) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00a6da4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x28))();
    return;
  }
  return;
}

// 00A6DA60  ScenarioManagerImplement::vf30  size=19  [class]
undefined4 __fastcall ScenarioManagerImplement::vf30(int param_1)

{
  if (*(int *)(param_1 + 0xb8) != 0) {
    return *(undefined4 *)(param_1 + 0xb4);
  }
  return 0;
}

// 00A6DA80  ScenarioManagerImplement::vf34  size=12  [class]
bool ScenarioManagerImplement::vf34(void)

{
  return DAT_01be8e54 != 0;
}

// 00A6DA90  ScenarioManagerImplement::vf38  size=89  [class]
void __thiscall ScenarioManagerImplement::vf38(int param_1,uint param_2)

{
  DAT_01bea060 = DAT_01bea060 | 0x80000000;
  DAT_01bea070 = DAT_01bea070 | 0x2200000;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  if ((param_2 & 0x8000000) == 0) {
    FUN_00db21e0();
  }
  if ((param_2 & 0x4000000) != 0) {
    cFade::set(0xfffffffd,0,0xff000000,0xf,1,0,0x68);
  }
  return;
}

// 00A6DAF0  ScenarioManagerImplement::vf3C  size=68  [class]
void __thiscall ScenarioManagerImplement::vf3C(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 0x20000000) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x34))();
    while (iVar1 == 0) {
      (**(code **)(*param_1 + 0x50))(1);
      iVar1 = (**(code **)(*param_1 + 0x34))();
    }
  }
  (**(code **)(*param_1 + 0x38))(param_2);
  return;
}

// 00A6DB40  ScenarioManagerImplement::vf40  size=58  [class]
void __thiscall ScenarioManagerImplement::vf40(int param_1,uint param_2)

{
  DAT_01bea060 = DAT_01bea060 & 0x7fffffff;
  DAT_01bea070 = DAT_01bea070 & 0xfddfffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((param_2 & 0x4000000) == 0) {
    FUN_00ebdd50();
    return;
  }
  return;
}

// 00A6DB80  ScenarioManagerImplement::vf9C  size=42  [class]
int __thiscall ScenarioManagerImplement::vf9C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x74);
  while ((iVar1 = *piVar2, iVar1 == 0 || (*(int *)(iVar1 + 8) != param_2))) {
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 2;
    if (7 < iVar3) {
      return 0;
    }
  }
  return iVar1;
}

// 00A6DBE0  ScenarioManagerImplement::vf78  size=79  [class]
void __thiscall ScenarioManagerImplement::vf78(int *param_1,undefined4 param_2,uint param_3)

{
  if ((DAT_01bea060 & 0x20000000) == 0) {
    (**(code **)(*param_1 + 0x38))(param_3);
    (**(code **)(*param_1 + 0x40))(0);
    if ((param_3 & 0x4000000) != 0) {
      cFade::set(0xfffffffd,0xff000000,0,0xf,0,0,0x68);
    }
  }
  return;
}

// 00A6DC30  ScenarioManagerImplement::vf7C  size=95  [class]
void __thiscall
ScenarioManagerImplement::vf7C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  cFade::set(0xfffffffd,0,param_2,param_3,param_4 != 0,0,0x68);
  iVar1 = FUN_00eb4340(0xfffffffd);
  while (iVar1 == 0) {
    (**(code **)(*param_1 + 0x50))(1);
    iVar1 = FUN_00eb4340(0xfffffffd);
  }
  return;
}

// 00A6DC90  ScenarioManagerImplement::vf80  size=95  [class]
void __thiscall
ScenarioManagerImplement::vf80(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  cFade::set(0xfffffffd,param_2,0,param_3,param_4 != 0,0,0x68);
  iVar1 = FUN_00eb4340(0xfffffffd);
  while (iVar1 == 0) {
    (**(code **)(*param_1 + 0x50))(1);
    iVar1 = FUN_00eb4340(0xfffffffd);
  }
  return;
}

// 00A6DCF0  ScenarioManagerImplement::vf84  size=95  [class]
void __thiscall
ScenarioManagerImplement::vf84(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  cFade::set(0xfffffffd,param_2,param_2,param_3,param_4 != 0,0,0x68);
  iVar1 = FUN_00eb4340(0xfffffffd);
  while (iVar1 == 0) {
    (**(code **)(*param_1 + 0x50))(1);
    iVar1 = FUN_00eb4340(0xfffffffd);
  }
  return;
}

// 00A6DD50  ScenarioManagerImplement::vf88  size=13  [class]
void ScenarioManagerImplement::vf88(void)

{
  FUN_00ebdd50(0xfffffffd);
  return;
}

// 00A6DD60  ScenarioManagerImplement::vf8C  size=5  [class]
undefined4 ScenarioManagerImplement::vf8C(void)

{
  return 0;
}

// 00A6DD70  ScenarioManagerImplement::vf90  size=5  [class]
undefined4 ScenarioManagerImplement::vf90(void)

{
  return 0;
}

// 00A6F440  ScenarioManagerImplement::vf00  size=155  [class]
void __fastcall ScenarioManagerImplement::vf00(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  (**(code **)(*DAT_01be9a34 + 4))();
  if ((*(int **)(param_1 + 0xb4) != (int *)0x0) && (*(int *)(param_1 + 0xb8) != 0)) {
    (**(code **)(**(int **)(param_1 + 0xb4) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x18))();
  }
  piVar3 = (int *)(param_1 + 0x74);
  iVar2 = 8;
  do {
    if (((int *)*piVar3 != (int *)0x0) && (piVar3[1] != 0)) {
      (**(code **)(*(int *)*piVar3 + 4))();
    }
    piVar3 = piVar3 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)FUN_00401110();
  puVar1 = (undefined4 *)*puVar1;
  fVar4 = (float10)FUN_00e049b0();
  (*(code *)*puVar1)((float)(fVar4 * (float10)0.016666668));
  if (*(int *)(param_1 + 0xbc) == 0) {
    FUN_00cad2a0();
  }
  FUN_00dd8da0();
  return;
}

// 00A6F4E0  ScenarioManagerImplement::vf70  size=8  [class]
void ScenarioManagerImplement::vf70(void)

{
  FUN_00dd73f0();
  return;
}

// 00A6F4F0  ScenarioManagerImplement::vf4C  size=8  [class]
void ScenarioManagerImplement::vf4C(void)

{
  FUN_00dd8520();
  return;
}

// 00A6F500  ScenarioManagerImplement::vf50  size=8  [class]
void ScenarioManagerImplement::vf50(void)

{
  FUN_00dd8570();
  return;
}

// 00A6F510  ScenarioManagerImplement::vf5C  size=8  [class]
void ScenarioManagerImplement::vf5C(void)

{
  FUN_00a6e770();
  return;
}

// 00A6F520  ScenarioManagerImplement::vf60  size=8  [class]
void ScenarioManagerImplement::vf60(void)

{
  FUN_00a6e7c0();
  return;
}

// 00A6F530  ScenarioManagerImplement::vf64  size=44  [class]
void __fastcall ScenarioManagerImplement::vf64(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_00dd8760();
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x28)) = 0;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x138;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return;
}

// 00A6F560  ScenarioManagerImplement::vf68  size=55  [class]
int * __thiscall ScenarioManagerImplement::vf68(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    piVar2 = *(int **)(param_1 + 0x28);
    do {
      if (*piVar2 == param_2) {
        return *(int **)(param_1 + 0x28) + uVar1 * 0x4e;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x4e;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return (int *)0x0;
}

// 00A6F5A0  ScenarioManagerImplement::vf6C  size=64  [class]
int * __fastcall ScenarioManagerImplement::vf6C(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = FUN_00dd7500();
  uVar2 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    piVar3 = *(int **)(param_1 + 0x28);
    do {
      if (*piVar3 == iVar1) {
        return *(int **)(param_1 + 0x28) + uVar2 * 0x4e;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x4e;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return (int *)0x0;
}

// 00A6F5E0  ScenarioManagerImplement::vf74  size=8  [class]
void ScenarioManagerImplement::vf74(void)

{
  FUN_00dd7510();
  return;
}

// 00A71770  FUN_00a71770  size=181  [callgraph]
undefined1 __thiscall FUN_00a71770(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar3 = FUN_00d466f0();
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x78) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  }
  puVar1 = param_3;
  uVar4 = 0;
  iVar3 = FUN_00a6f3c0(param_3);
  if (iVar3 == 0) {
    param_3 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
    if (param_3 == (undefined4 *)0x0) {
      param_3 = (undefined4 *)0x0;
    }
    else {
      *param_3 = 0;
      param_3[1] = 0;
    }
    *param_3 = param_2;
    param_3[1] = puVar1;
    cVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 8))(&param_3);
    if (cVar2 == '\0') {
      uVar4 = 0;
      if (param_3 != (undefined4 *)0x0) {
        FUN_00a6f360(1);
      }
    }
    else {
      uVar4 = 1;
    }
  }
  iVar3 = FUN_00d466f0();
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x78) != 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  }
  return uVar4;
}

// 00A71830  FUN_00a71830  size=306  [callgraph]
undefined4 __thiscall FUN_00a71830(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = FUN_00d466f0();
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x78) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  }
  puVar5 = *(undefined4 **)(param_1 + 0x14);
  if (puVar5 != puVar5 + *(int *)(param_1 + 0x18)) {
    do {
      piVar1 = (int *)*puVar5;
      if (piVar1[1] == param_3) {
        if (*piVar1 != 0) {
          FUN_00eaa6e0(param_2,0);
          if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar1)(1);
            *piVar1 = 0;
          }
        }
        if ((int *)*piVar1 != (int *)0x0) {
          (**(code **)(*(int *)*piVar1 + 8))(0x41200000,0,1);
          if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar1)(1);
            *piVar1 = 0;
          }
        }
        piVar1[1] = 0;
        FUN_00dd4920(piVar1);
        uVar2 = *(uint *)(param_1 + 0x18);
        iVar3 = *(int *)(param_1 + 0x14);
        puVar6 = (undefined4 *)(iVar3 + uVar2 * 4);
        if ((((puVar5 != puVar6) && (iVar3 != 0)) && (uVar2 != 0)) &&
           ((uint)((int)puVar5 - iVar3 >> 2) < uVar2)) {
          for (puVar4 = puVar5; puVar4 != puVar6 + -1; puVar4 = puVar4 + 1) {
            *puVar4 = puVar4[1];
          }
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
          puVar6 = puVar5;
        }
      }
      else {
        puVar6 = puVar5 + 1;
      }
      puVar5 = puVar6;
    } while (puVar6 != (undefined4 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18) * 4));
  }
  iVar3 = FUN_00d466f0();
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x78) != 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  }
  return 1;
}

// 00A71970  FUN_00a71970  size=192  [callgraph]
void __fastcall FUN_00a71970(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_00d466f0();
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x78) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  }
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (puVar3 = *(undefined4 **)(param_1 + 0x14), puVar3 != puVar3 + *(int *)(param_1 + 0x18))) {
    do {
      piVar1 = (int *)*puVar3;
      if (piVar1 != (int *)0x0) {
        if ((int *)*piVar1 != (int *)0x0) {
          (**(code **)(*(int *)*piVar1 + 8))(0x41200000,0,1);
          if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar1)(1);
            *piVar1 = 0;
          }
        }
        piVar1[1] = 0;
        FUN_00dd4920(piVar1);
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined4 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18) * 4));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar2 = FUN_00d466f0();
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x78) != 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  }
  return;
}

// 00A71A30  ScenarioManagerImplement::vfA4  size=72  [class]
undefined4 ScenarioManagerImplement::vfA4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*DAT_01be9a30 + 0x9c))(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00e03ea0(param_2);
    uVar2 = FUN_00a71830(param_1,uVar2);
    return uVar2;
  }
  return 0;
}

// 00A71A80  ScenarioManagerImplement::vf48  size=8  [class]
void ScenarioManagerImplement::vf48(void)

{
  FUN_00a701f0();
  return;
}

// 00A71A90  ScenarioManagerImplement::vf54  size=8  [class]
void ScenarioManagerImplement::vf54(void)

{
  FUN_00a70290();
  return;
}

// 00A71AA0  ScenarioManagerImplement::vf58  size=73  [class]
void __thiscall ScenarioManagerImplement::vf58(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  FUN_00dd85c0(param_2);
  uVar1 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    piVar2 = *(int **)(param_1 + 0x28);
    while (*piVar2 != param_2) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x4e;
      if (*(uint *)(param_1 + 8) <= uVar1) {
        return;
      }
    }
    piVar2 = *(int **)(param_1 + 0x28) + uVar1 * 0x4e;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
    }
  }
  return;
}

// 00A73280  ScenarioManagerImplement::vfA0  size=181  [class]
undefined4 ScenarioManagerImplement::vfA0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*DAT_01be9a30 + 0x9c))(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)cEspControler::cEspControler();
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      uVar3 = FUN_00e01eb0(puVar2);
      iVar1 = FUN_00e01540(param_1,param_2,uVar3);
      if (iVar1 != 0) {
        uVar3 = FUN_00e03ea0(param_3);
        uVar3 = FUN_00a71770(puVar2,uVar3);
        return uVar3;
      }
      (**(code **)*puVar2)(1);
      return 0;
    }
  }
  return 0;
}

// 00A7BAB0  ScenarioManagerImplement::ScenarioManagerImplement  size=238  [class]
undefined4 * __thiscall
ScenarioManagerImplement::ScenarioManagerImplement(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = vftable;
  param_1[1] = param_2;
  FUN_00dd6df0();
  param_1[10] = 0;
  FUN_0092d400();
  param_1[0x2f] = 1;
  iVar1 = FUN_00dd3580(0x1380,&DAT_01b7bd48);
  param_1[10] = iVar1;
  if (iVar1 != 0) {
    uVar2 = 0;
    do {
      *(undefined4 *)(uVar2 + param_1[10]) = 0;
      uVar2 = uVar2 + 0x138;
    } while (uVar2 < 0x1380);
    param_1[2] = 0x10;
    FUN_00dd8a10(0x10,0x10000,&DAT_01b7bd48);
  }
  _memset(param_1 + 0x1d,0,0x40);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0xb] = 0;
  iVar1 = FUN_00dd3500(0x14434,&DAT_01b7bd48);
  if (iVar1 != 0) {
    DAT_01be9a34 = ScenarioRegionManagerImplement::ScenarioRegionManagerImplement(&DAT_01b7bd48);
    return param_1;
  }
  DAT_01be9a34 = 0;
  return param_1;
}

// 00A7BBA0  ScenarioManagerImplement::vf44  size=13  [class]
void __thiscall ScenarioManagerImplement::vf44(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xbc) = param_2;
  return;
}

// 00A7BBB0  ScenarioManagerImplement::vf94  size=4  [class]
undefined4 __fastcall ScenarioManagerImplement::vf94(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}

// 00A7BBC0  ScenarioManagerImplement::vf98  size=4  [class]
int __fastcall ScenarioManagerImplement::vf98(int param_1)

{
  return param_1 + 0x30;
}

// 00A7BCB0  ScenarioManagerImplement::vfA8  size=30  [class]
undefined4 __thiscall ScenarioManagerImplement::vfA8(undefined4 param_1,byte param_2)

{
  ScenarioManager::ScenarioManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

