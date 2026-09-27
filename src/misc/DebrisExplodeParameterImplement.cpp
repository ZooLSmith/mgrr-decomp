// src/misc/DebrisExplodeParameterImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093DDB0..009445C0, 13 functions

#include "types.h"

// 0093DDB0  DebrisExplodeParameterImplement::vf28  size=3  [class]
void DebrisExplodeParameterImplement::vf28(void)

{
  return;
}

// 009441F0  DebrisExplodeParameterImplement::DebrisExplodeParameterImplement  size=143  [class]
undefined4 * __thiscall
DebrisExplodeParameterImplement::DebrisExplodeParameterImplement
          (undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int unaff_EDI;
  int local_74;
  
  *param_1 = vftable;
  param_1[1] = param_2;
  param_1[2] = 0;
  if (param_3 != 0) {
    lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4();
    FUN_00e91420(param_3);
    cVar1 = (**(code **)(local_74 + 0x10))(&DAT_0164a448,0);
    FUN_00944180(&stack0xffffff84,"debrisExplodeParameter",param_1);
    if (cVar1 != '\0') {
      (**(code **)(unaff_EDI + 0x14))(&DAT_0164a448,0);
    }
    cXml::cXml_5();
  }
  return param_1;
}

// 00944290  DebrisExplodeParameterImplement::vf2C  size=31  [class]
undefined4 * __thiscall DebrisExplodeParameterImplement::vf2C(undefined4 *param_1,byte param_2)

{
  *param_1 = DebrisExplodeParameter::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00944300  DebrisExplodeParameterImplement::vf00  size=63  [class]
int __thiscall DebrisExplodeParameterImplement::vf00(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 10) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return *piVar3;
      }
      piVar3 = piVar3 + 10;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 10);
  }
  return *piVar2;
}

// 00944340  DebrisExplodeParameterImplement::vf04  size=65  [class]
float10 __thiscall DebrisExplodeParameterImplement::vf04(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 10) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[1];
      }
      piVar3 = piVar3 + 10;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 10);
  }
  return (float10)(float)piVar2[1];
}

// 00944390  DebrisExplodeParameterImplement::vf08  size=65  [class]
float10 __thiscall DebrisExplodeParameterImplement::vf08(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 10) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[2];
      }
      piVar3 = piVar3 + 10;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 10);
  }
  return (float10)(float)piVar2[2];
}

// 009443E0  DebrisExplodeParameterImplement::vf0C  size=65  [class]
int __thiscall DebrisExplodeParameterImplement::vf0C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 10) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[3];
      }
      piVar3 = piVar3 + 10;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 10);
  }
  return piVar2[3];
}

// 00944430  DebrisExplodeParameterImplement::vf10  size=65  [class]
int __thiscall DebrisExplodeParameterImplement::vf10(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 10) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[4];
      }
      piVar3 = piVar3 + 10;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 10);
  }
  return piVar2[4];
}

// 00944480  DebrisExplodeParameterImplement::vf14  size=65  [class]
float10 __thiscall DebrisExplodeParameterImplement::vf14(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 10) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[5];
      }
      piVar3 = piVar3 + 10;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 10);
  }
  return (float10)(float)piVar2[5];
}

// 009444D0  DebrisExplodeParameterImplement::vf18  size=65  [class]
int __thiscall DebrisExplodeParameterImplement::vf18(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 10) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[6];
      }
      piVar3 = piVar3 + 10;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 10);
  }
  return piVar2[6];
}

// 00944520  DebrisExplodeParameterImplement::vf1C  size=65  [class]
float10 __thiscall DebrisExplodeParameterImplement::vf1C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 10) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[7];
      }
      piVar3 = piVar3 + 10;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 10);
  }
  return (float10)(float)piVar2[7];
}

// 00944570  DebrisExplodeParameterImplement::vf20  size=65  [class]
float10 __thiscall DebrisExplodeParameterImplement::vf20(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 10) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[8];
      }
      piVar3 = piVar3 + 10;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 10);
  }
  return (float10)(float)piVar2[8];
}

// 009445C0  DebrisExplodeParameterImplement::vf24  size=65  [class]
float10 __thiscall DebrisExplodeParameterImplement::vf24(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 10) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[9];
      }
      piVar3 = piVar3 + 10;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 10);
  }
  return (float10)(float)piVar2[9];
}

