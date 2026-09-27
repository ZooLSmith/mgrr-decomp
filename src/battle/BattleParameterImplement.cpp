// src/battle/BattleParameterImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D727B0..00D767A0, 40 functions

#include "types.h"

// 00D727B0  BattleParameterImplement::vf94  size=3  [class]
void BattleParameterImplement::vf94(void)

{
  return;
}

// 00D752D0  BattleParameterImplement::vf98  size=59  [class]
undefined4 * __thiscall BattleParameterImplement::vf98(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  *param_1 = BattleParameter::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D753A0  BattleParameterImplement::vf00  size=56  [class]
int __thiscall BattleParameterImplement::vf00(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return *piVar3;
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return *piVar2;
}

// 00D753E0  BattleParameterImplement::vf04  size=58  [class]
int __thiscall BattleParameterImplement::vf04(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[1];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return piVar2[1];
}

// 00D75420  BattleParameterImplement::vf08  size=59  [class]
undefined4 __thiscall BattleParameterImplement::vf08(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return *(undefined4 *)(iVar3 + 4);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return *(undefined4 *)(iVar2 + 4);
}

// 00D75460  BattleParameterImplement::vf0C  size=58  [class]
int __thiscall BattleParameterImplement::vf0C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[2];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return piVar2[2];
}

// 00D754A0  BattleParameterImplement::vf10  size=59  [class]
undefined4 __thiscall BattleParameterImplement::vf10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return *(undefined4 *)(iVar3 + 8);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return *(undefined4 *)(iVar2 + 8);
}

// 00D754E0  BattleParameterImplement::vf14  size=58  [class]
int __thiscall BattleParameterImplement::vf14(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[3];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return piVar2[3];
}

// 00D75520  BattleParameterImplement::vf18  size=59  [class]
undefined4 __thiscall BattleParameterImplement::vf18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return *(undefined4 *)(iVar3 + 0xc);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return *(undefined4 *)(iVar2 + 0xc);
}

// 00D75560  BattleParameterImplement::vf1C  size=58  [class]
int __thiscall BattleParameterImplement::vf1C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[4];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return piVar2[4];
}

// 00D755A0  BattleParameterImplement::vf20  size=59  [class]
undefined4 __thiscall BattleParameterImplement::vf20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return *(undefined4 *)(iVar3 + 0x10);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return *(undefined4 *)(iVar2 + 0x10);
}

// 00D755E0  BattleParameterImplement::vf24  size=58  [class]
int __thiscall BattleParameterImplement::vf24(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[5];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return piVar2[5];
}

// 00D75620  BattleParameterImplement::vf28  size=59  [class]
undefined4 __thiscall BattleParameterImplement::vf28(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return *(undefined4 *)(iVar3 + 0x14);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return *(undefined4 *)(iVar2 + 0x14);
}

// 00D75660  BattleParameterImplement::vf2C  size=58  [class]
int __thiscall BattleParameterImplement::vf2C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[6];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return piVar2[6];
}

// 00D756A0  BattleParameterImplement::vf30  size=59  [class]
undefined4 __thiscall BattleParameterImplement::vf30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return *(undefined4 *)(iVar3 + 0x18);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return *(undefined4 *)(iVar2 + 0x18);
}

// 00D756E0  BattleParameterImplement::vf34  size=58  [class]
float10 __thiscall BattleParameterImplement::vf34(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[7];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return (float10)(float)piVar2[7];
}

// 00D75720  BattleParameterImplement::vf38  size=59  [class]
float10 __thiscall BattleParameterImplement::vf38(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return (float10)*(float *)(iVar3 + 0x1c);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return (float10)*(float *)(iVar2 + 0x1c);
}

// 00D75760  BattleParameterImplement::vf3C  size=58  [class]
float10 __thiscall BattleParameterImplement::vf3C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[8];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return (float10)(float)piVar2[8];
}

// 00D757A0  BattleParameterImplement::vf40  size=59  [class]
float10 __thiscall BattleParameterImplement::vf40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return (float10)*(float *)(iVar3 + 0x20);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return (float10)*(float *)(iVar2 + 0x20);
}

// 00D757E0  BattleParameterImplement::vf44  size=58  [class]
float10 __thiscall BattleParameterImplement::vf44(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[9];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return (float10)(float)piVar2[9];
}

// 00D75820  BattleParameterImplement::vf48  size=59  [class]
float10 __thiscall BattleParameterImplement::vf48(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return (float10)*(float *)(iVar3 + 0x24);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return (float10)*(float *)(iVar2 + 0x24);
}

// 00D75860  BattleParameterImplement::vf4C  size=58  [class]
float10 __thiscall BattleParameterImplement::vf4C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[10];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return (float10)(float)piVar2[10];
}

// 00D758A0  BattleParameterImplement::vf50  size=59  [class]
float10 __thiscall BattleParameterImplement::vf50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return (float10)*(float *)(iVar3 + 0x28);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return (float10)*(float *)(iVar2 + 0x28);
}

// 00D758E0  BattleParameterImplement::vf54  size=58  [class]
int __thiscall BattleParameterImplement::vf54(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[0xb];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return piVar2[0xb];
}

// 00D75920  BattleParameterImplement::vf58  size=59  [class]
undefined4 __thiscall BattleParameterImplement::vf58(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return *(undefined4 *)(iVar3 + 0x2c);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return *(undefined4 *)(iVar2 + 0x2c);
}

// 00D75960  BattleParameterImplement::vf5C  size=58  [class]
float10 __thiscall BattleParameterImplement::vf5C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[0xc];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return (float10)(float)piVar2[0xc];
}

// 00D759A0  BattleParameterImplement::vf60  size=59  [class]
float10 __thiscall BattleParameterImplement::vf60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return (float10)*(float *)(iVar3 + 0x30);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return (float10)*(float *)(iVar2 + 0x30);
}

// 00D759E0  BattleParameterImplement::vf64  size=58  [class]
float10 __thiscall BattleParameterImplement::vf64(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[0xd];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return (float10)(float)piVar2[0xd];
}

// 00D75A20  BattleParameterImplement::vf68  size=59  [class]
float10 __thiscall BattleParameterImplement::vf68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return (float10)*(float *)(iVar3 + 0x34);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return (float10)*(float *)(iVar2 + 0x34);
}

// 00D75A60  BattleParameterImplement::vf6C  size=58  [class]
float10 __thiscall BattleParameterImplement::vf6C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[0xe];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return (float10)(float)piVar2[0xe];
}

// 00D75AA0  BattleParameterImplement::vf70  size=59  [class]
float10 __thiscall BattleParameterImplement::vf70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return (float10)*(float *)(iVar3 + 0x38);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return (float10)*(float *)(iVar2 + 0x38);
}

// 00D75AE0  BattleParameterImplement::vf74  size=58  [class]
float10 __thiscall BattleParameterImplement::vf74(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return (float10)(float)piVar3[0xf];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return (float10)(float)piVar2[0xf];
}

// 00D75B20  BattleParameterImplement::vf78  size=59  [class]
float10 __thiscall BattleParameterImplement::vf78(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return (float10)*(float *)(iVar3 + 0x3c);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return (float10)*(float *)(iVar2 + 0x3c);
}

// 00D75B60  BattleParameterImplement::vf7C  size=58  [class]
int __thiscall BattleParameterImplement::vf7C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[0x10];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return piVar2[0x10];
}

// 00D75BA0  BattleParameterImplement::vf80  size=59  [class]
undefined4 __thiscall BattleParameterImplement::vf80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return *(undefined4 *)(iVar3 + 0x40);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return *(undefined4 *)(iVar2 + 0x40);
}

// 00D75BE0  BattleParameterImplement::vf84  size=58  [class]
int __thiscall BattleParameterImplement::vf84(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[0x11];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return piVar2[0x11];
}

// 00D75C20  BattleParameterImplement::vf88  size=59  [class]
undefined4 __thiscall BattleParameterImplement::vf88(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return *(undefined4 *)(iVar3 + 0x44);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return *(undefined4 *)(iVar2 + 0x44);
}

// 00D75C60  BattleParameterImplement::vf8C  size=58  [class]
int __thiscall BattleParameterImplement::vf8C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x13) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[0x12];
      }
      piVar3 = piVar3 + 0x13;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 0x13);
  }
  return piVar2[0x12];
}

// 00D75CA0  BattleParameterImplement::vf90  size=59  [class]
undefined4 __thiscall BattleParameterImplement::vf90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x4c + iVar2) {
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x2c) == param_2) {
        return *(undefined4 *)(iVar3 + 0x48);
      }
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(iVar1 + 8) * 0x4c + iVar2);
  }
  return *(undefined4 *)(iVar2 + 0x48);
}

// 00D767A0  BattleParameterImplement::BattleParameterImplement  size=143  [class]
undefined4 * __thiscall
BattleParameterImplement::BattleParameterImplement
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
    FUN_00d76720(&stack0xffffff84,"battleParameter",param_1);
    if (cVar1 != '\0') {
      (**(code **)(unaff_EDI + 0x14))(&DAT_0164a448,0);
    }
    cXml::cXml_5();
  }
  return param_1;
}

