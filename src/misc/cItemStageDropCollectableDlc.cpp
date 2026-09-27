// src/misc/cItemStageDropCollectableDlc.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094E3E0..00952130, 37 functions

#include "mgrr.h"
#include "cItemStageDropCollectableDlc.h"

// 0094E3E0  FUN_0094e3e0  size=114  [callgraph]
void __thiscall FUN_0094e3e0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 != piVar4 + *(int *)(param_1 + 8)) {
    do {
      piVar1 = (int *)*piVar4;
      if ((*piVar1 == param_2) &&
         (piVar1[0x13] = piVar1[0x13] | 1, (piVar1[0x13] & 0x80000000U) != 0)) {
        iVar3 = 0;
        uVar2 = 0x20cc;
        do {
          if (*(int *)(&DAT_01b73860 + uVar2) == -1) {
            (&DAT_01b7592c)[iVar3] = *piVar1;
            goto LAB_0094e433;
          }
          uVar2 = uVar2 + 4;
          iVar3 = iVar3 + 1;
        } while (uVar2 < 0x210c);
        FUN_00dd5650(&DAT_016504d4);
      }
LAB_0094e433:
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  return;
}

// 0094E460  FUN_0094e460  size=138  [callgraph]
void __thiscall FUN_0094e460(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 != piVar4 + *(int *)(param_1 + 8)) {
    do {
      piVar1 = (int *)*piVar4;
      if (*piVar1 == param_2) {
        iVar2 = piVar1[0x1f];
        if (iVar2 != 0) {
          *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
          *(undefined4 *)(iVar2 + 0x58) = 0;
          piVar1[0x1f] = 0;
        }
        iVar3 = piVar1[0x1c];
        if (iVar3 != 0) {
          FUN_00a805f0();
          piVar1[0x1c] = 0;
        }
        if (piVar1[0x1d] == 0) {
          if (iVar3 == 0 && iVar2 == 0) {
            piVar1[0x13] = piVar1[0x13] | 0x10;
          }
        }
        else {
          FUN_00a805f0();
          piVar1[0x1d] = 0;
        }
        piVar1[0x13] = piVar1[0x13] & 0xefffffffU | 1;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  return;
}

// 0094E550  FUN_0094e550  size=96  [callgraph]
void __thiscall FUN_0094e550(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 != piVar4 + *(int *)(param_1 + 8)) {
    do {
      piVar1 = (int *)*piVar4;
      if (*piVar1 == param_2) {
        iVar2 = piVar1[0x1f];
        if (iVar2 != 0) {
          piVar1[0x1f] = 0;
        }
        iVar3 = piVar1[0x1c];
        if (iVar3 != 0) {
          piVar1[0x1c] = 0;
        }
        if (piVar1[0x1d] == 0) {
          if (iVar3 == 0 && iVar2 == 0) {
            piVar1[0x13] = piVar1[0x13] | 0x10;
          }
        }
        else {
          piVar1[0x1d] = 0;
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  return;
}

// 0094E5E0  FUN_0094e5e0  size=47  [callgraph]
int __thiscall FUN_0094e5e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  piVar1 = piVar3 + *(int *)(param_1 + 8);
  iVar2 = 0;
  if (piVar3 != piVar1) {
    while (iVar2 = *piVar3, *(int *)(iVar2 + 0x10) != param_2) {
      piVar3 = piVar3 + 1;
      if (piVar3 == piVar1) {
        return 0;
      }
    }
  }
  return iVar2;
}

// 0094E6B0  FUN_0094e6b0  size=246  [callgraph]
void FUN_0094e6b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (DAT_01bea030 == 8) {
    uVar2 = 0xb;
    iVar4 = 9;
  }
  else if (DAT_01bea030 == 9) {
    uVar2 = 0x14;
    iVar4 = 7;
  }
  else {
    uVar2 = 0;
    iVar4 = 0xb;
  }
  uVar1 = iVar4 + uVar2;
  if (uVar2 < uVar1) {
    do {
      iVar4 = (&DAT_01886950)[uVar2];
      if (iVar4 == 0) {
        (&DAT_01b758ac)[uVar2] = 0xffffffff;
      }
      else {
        iVar3 = FUN_0094dfd0(iVar4);
        if (iVar3 != 0) {
          if (param_1 == 10) {
            if (*(int *)(iVar3 + 4) == 2) goto LAB_0094e740;
          }
          else if (param_1 == 0xb) {
            if (*(int *)(iVar3 + 4) == 0xe) {
LAB_0094e740:
              uVar5 = 0;
              iVar4 = FUN_0094dfd0(iVar4);
              if (iVar4 != 0) {
                iVar3 = *(int *)(iVar4 + 4);
                if (iVar3 == 2) {
                  bVar8 = param_1 == 10;
                }
                else if (iVar3 == 0xe) {
                  bVar8 = param_1 == 0xb;
                }
                else {
                  if (iVar3 != 0) goto LAB_0094e779;
                  bVar8 = param_1 == 0xc;
                }
                if (bVar8) {
                  uVar5 = *(undefined4 *)(iVar4 + 0x44);
                }
                else {
                  uVar5 = *(undefined4 *)(iVar4 + 0x10);
                }
              }
LAB_0094e779:
              (&DAT_01b758ac)[uVar2] = uVar5;
            }
          }
          else if ((param_1 == 0xc) && (*(int *)(iVar3 + 4) == 0)) goto LAB_0094e740;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)uVar1);
  }
  puVar6 = &DAT_01b758ac;
  puVar7 = &DAT_018869d0;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  return;
}

// 0094E7B0  FUN_0094e7b0  size=16  [callgraph]
void FUN_0094e7b0(undefined4 param_1)

{
  FUN_0094e390(param_1);
  return;
}

// 0094E7C0  FUN_0094e7c0  size=99  [callgraph]
void FUN_0094e7c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0094b7b0(param_1,param_2);
  iVar1 = thunk_FUN_009c5800();
  if (iVar1 == 0) {
    FUN_0094b850(param_1,param_2);
  }
  iVar1 = thunk_FUN_009c5800();
  if (iVar1 == 0) {
    FUN_0094b9d0(param_1,param_2);
  }
  iVar1 = thunk_FUN_009c5800();
  if (iVar1 == 0) {
    FUN_0094e060(DAT_018b91a0,DAT_018b9148);
  }
  return;
}

// 0094E830  FUN_0094e830  size=63  [callgraph]
undefined4 FUN_0094e830(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_018871c0 != 0) {
    return 1;
  }
  uVar2 = 0;
  do {
    iVar1 = FUN_00a00f80(*(undefined4 *)((int)&DAT_0164fa10 + uVar2),0);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x50);
  return 1;
}

// 0094E930  FUN_0094e930  size=57  [callgraph]
undefined4 FUN_0094e930(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0094b8d0(param_1,param_2);
  iVar2 = FUN_0094ba40(param_1,param_2);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    return 1;
  }
  return 0;
}

// 0094E970  FUN_0094e970  size=57  [callgraph]
undefined4 FUN_0094e970(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0094b970(param_1,param_2);
  iVar2 = FUN_0094bb20(param_1,param_2);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    return 1;
  }
  return 0;
}

// 0094E9B0  FUN_0094e9b0  size=16  [callgraph]
void FUN_0094e9b0(undefined4 param_1)

{
  FUN_0094c150(param_1);
  return;
}

// 0094E9C0  FUN_0094e9c0  size=21  [callgraph]
void FUN_0094e9c0(undefined4 param_1,undefined4 param_2)

{
  FUN_0094c060(param_1,param_2);
  return;
}

// 0094E9E0  FUN_0094e9e0  size=16  [callgraph]
void FUN_0094e9e0(undefined4 param_1)

{
  FUN_0094e460(param_1);
  return;
}

// 0094E9F0  FUN_0094e9f0  size=101  [callgraph]
undefined4 FUN_0094e9f0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  uVar2 = 0;
  for (piVar1 = (int *)PTR_DAT_01886b24; piVar1 != (int *)(PTR_DAT_01886b24 + DAT_01886b28 * 4);
      piVar1 = piVar1 + 1) {
    if (((*(uint *)(*piVar1 + 4) & 0x10000) != 0) && (*(int *)(*piVar1 + 0x68) == param_1)) {
      uVar2 = 1;
    }
  }
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return uVar2;
}

// 0094EA60  FUN_0094ea60  size=21  [callgraph]
void FUN_0094ea60(undefined4 param_1,undefined4 param_2)

{
  FUN_0094bbd0(param_1,param_2);
  return;
}

// 0094EA80  FUN_0094ea80  size=16  [callgraph]
void FUN_0094ea80(undefined4 param_1)

{
  FUN_0094bc80(param_1);
  return;
}

// 0094EA90  FUN_0094ea90  size=70  [callgraph]
void FUN_0094ea90(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  uVar1 = FUN_0094bc80(param_1);
  FUN_0094bde0(param_1,uVar1);
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return;
}

// 0094EAE0  FUN_0094eae0  size=6  [callgraph]
undefined4 FUN_0094eae0(void)

{
  return DAT_01886b28;
}

// 0094EC20  FUN_0094ec20  size=70  [callgraph]
undefined4 __fastcall FUN_0094ec20(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != puVar2 + *(int *)(param_1 + 8)) {
    do {
      iVar1 = FUN_00a00f80(*puVar2,0);
      if (iVar1 == 0) {
        return 0;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  return 1;
}

// 0094EC70  FUN_0094ec70  size=251  [callgraph]
void FUN_0094ec70(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 - 1U < 0x20) {
    bVar1 = (byte)(param_2 - 1U);
    if (param_1 == 0x15e901d6) {
      DAT_01b6f3a0 = DAT_01b6f3a0 | 1 << (bVar1 & 0x1f);
      FUN_009c8c00();
      return;
    }
    if (param_1 == 0x6f2396e8) {
      DAT_01b6f3b4 = DAT_01b6f3b4 | 1 << (bVar1 & 0x1f);
      FUN_009c8c00();
      return;
    }
    if (param_1 == 0x75d75fe5) {
      DAT_01b6f3b0 = DAT_01b6f3b0 | 1 << (bVar1 & 0x1f);
      FUN_009c8c00();
      return;
    }
    if (param_1 == -0x21524111) {
      DAT_01b6f3b8 = DAT_01b6f3b8 | 1 << (bVar1 & 0x1f);
      FUN_009c8c00();
      return;
    }
    if (param_1 == 0x3855170f) {
      DAT_01b758a8 = DAT_01b758a8 | 1 << (bVar1 & 0x1f);
      FUN_009c8c00();
      return;
    }
  }
  return;
}

// 0094ED90  FUN_0094ed90  size=480  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0094ed90(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  piVar2 = (int *)PTR_DAT_01886ea4;
  if (PTR_DAT_01886ea4 == PTR_DAT_01886ea4 + DAT_01886ea8 * 4) {
    return;
  }
  while (piVar1 = (int *)*piVar2, piVar1[4] != param_3) {
    piVar2 = piVar2 + 1;
    if (piVar2 == (int *)(PTR_DAT_01886ea4 + DAT_01886ea8 * 4)) {
      return;
    }
  }
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar5 = -1;
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 7:
    iVar5 = 6;
    iVar3 = piVar1[0x15];
    iVar4 = 0x18;
    break;
  case 5:
  case 6:
    iVar5 = 0;
    iVar3 = (**(code **)(*piVar1 + 0x4c))();
    bVar6 = param_1[1] != 0x19;
    param_1[1] = 0x19;
    goto LAB_0094ee0d;
  case 8:
  case 9:
    iVar5 = 0xd;
    iVar3 = piVar1[0x15];
    iVar4 = 0x17;
    break;
  case 10:
    if (piVar1[0x15] < 1) {
      return;
    }
    FUN_00c82240(7);
    return;
  default:
    goto switchD_0094ede7_default;
  }
  bVar6 = param_1[1] != iVar4;
  param_1[1] = iVar4;
LAB_0094ee0d:
  if ((1 << (sbyte)iVar5 & param_1[3]) == 0) {
    if (iVar3 >= 1) {
switchD_0094ede7_default:
      *param_1 = 1;
      if (iVar5 == 0xd) {
        if ((DAT_018b9174 & 0xf00) == 0x200) {
          _DAT_01d61384 = param_1[1];
          _DAT_01d61388 = 1;
          _DAT_01d6138c = 0;
          param_1[2] = 0;
          param_1[3] = param_1[3] | 0x2000;
          return;
        }
      }
      else if (iVar5 == 6) {
        if ((DAT_018b9174 & 0xf00) == 0x100) {
          _DAT_01d61384 = param_1[1];
          _DAT_01d61388 = 1;
          _DAT_01d6138c = 0;
          param_1[2] = 0;
          param_1[3] = param_1[3] | 0x40;
          return;
        }
      }
      else if ((iVar5 == 0) && ((DAT_018b9174 & 0xf00) == 0x100)) {
        _DAT_01d61384 = param_1[1];
        _DAT_01d61388 = 1;
        _DAT_01d6138c = 0;
        param_1[3] = param_1[3] | 1;
      }
      param_1[2] = 0;
      return;
    }
  }
  else if (((bVar6) || (iVar3 < 1)) && (*param_1 != 0)) {
    _DAT_01d61384 = -1;
    *param_1 = 0;
    param_1[1] = -1;
  }
  return;
}

// 0094EF90  FUN_0094ef90  size=69  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0094ef90(int *param_1)

{
  float10 fVar1;
  
  if (*param_1 != 0) {
    fVar1 = (float10)FUN_00e03a90(0);
    fVar1 = fVar1 * (float10)0.016666668 + (float10)(float)param_1[2];
    param_1[2] = (int)(float)fVar1;
    if (((float10)10.0 <= fVar1) && (*param_1 != 0)) {
      _DAT_01d61384 = 0xffffffff;
      *param_1 = 0;
      param_1[1] = -1;
    }
  }
  return;
}

// 0094F040  FUN_0094f040  size=78  [callgraph]
void __fastcall FUN_0094f040(int param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  pfVar1 = (float *)(param_1 + 4);
  iVar2 = 0x10;
  do {
    if (0.0 < *pfVar1) {
      fVar3 = (float10)FUN_00e03a90(0);
      fVar3 = (float10)*pfVar1 - fVar3 * (float10)0.016666668;
      *pfVar1 = (float)fVar3;
      if (fVar3 <= (float10)0) {
        *pfVar1 = (float)(float10)0;
        pfVar1[-1] = 0.0;
      }
    }
    pfVar1 = pfVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 0094F090  FUN_0094f090  size=99  [callgraph]
void __thiscall FUN_0094f090(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = 4;
  do {
    if (piVar1[-4] == param_2) {
      piVar3 = piVar1 + -4;
    }
    if (piVar1[-2] == param_2) {
      piVar3 = piVar1 + -2;
    }
    if (*piVar1 == param_2) {
      piVar3 = piVar1;
    }
    if (piVar1[2] == param_2) {
      piVar3 = piVar1 + 2;
    }
    piVar1 = piVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0x41f00000;
    return;
  }
  piVar1 = (int *)FUN_0094bfe0(0);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_2;
    piVar1[1] = 0x41f00000;
  }
  return;
}

// 0094F150  FUN_0094f150  size=85  [callgraph]
undefined4 __thiscall FUN_0094f150(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)0x0;
  piVar1 = (int *)(param_1 + 0x10);
  iVar3 = 4;
  do {
    if (piVar1[-4] == param_2) {
      piVar2 = piVar1 + -4;
    }
    if (piVar1[-2] == param_2) {
      piVar2 = piVar1 + -2;
    }
    if (*piVar1 == param_2) {
      piVar2 = piVar1;
    }
    if (piVar1[2] == param_2) {
      piVar2 = piVar1 + 2;
    }
    piVar1 = piVar1 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if ((piVar2 != (int *)0x0) && (0.0 < (float)piVar2[1])) {
    return 1;
  }
  return 0;
}

// 0094F1B0  cItemStageDropCollectableDlc::cItemStageDropCollectableDlc  size=73  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cItemStageDropCollectableDlc::cItemStageDropCollectableDlc(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  *param_1 = cItemStageDrop::vftable;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = &DAT_01b37438;
  param_1[0x16] = _DAT_01b37448;
  uVar1 = _DAT_01b37444;
  param_1[0x19] = 0xffffffff;
  param_1[0x17] = uVar1;
  param_1[0x1a] = 0xffffffff;
  *param_1 = vftable;
  param_1[0x24] = 0;
  param_1[1] = 0x5100;
  return;
}

// 0094F200  cItemStageDropCollectableDlc::vf00  size=6  [class]
char * cItemStageDropCollectableDlc::vf00(void)

{
  return "cItemStageDropCollectableDlc";
}

// 0094F210  cItemStageDropCollectableDlc::vf10  size=6  [class]
char * cItemStageDropCollectableDlc::vf10(void)

{
  return "cItemStageDrop";
}

// 0094F2A0  cItemStageDropCollectableDlc::vf2C  size=83  [class]
void __thiscall cItemStageDropCollectableDlc::vf2C(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if (((param_2 != 0) &&
      (*(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x5c),
      *(int *)(param_1 + 0x50) != 0)) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar3 = &DAT_01b35390;
    (**(code **)(*piVar1 + 4))(&DAT_01b35390);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      FUN_005ea350(*(undefined4 *)(param_1 + 0x90));
    }
  }
  return;
}

// 00951D60  FUN_00951d60  size=61  [callgraph]
void FUN_00951d60(undefined4 param_1,undefined4 param_2)

{
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  FUN_0094ec70(param_1,param_2);
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return;
}

// 00951DA0  FUN_00951da0  size=120  [callgraph]
undefined4 FUN_00951da0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar4 = 1;
    if ((uVar1 != 0) && (*(int *)((-(uint)(uVar1 != 0) & uVar1) + 0x20) != 0)) {
      return 0;
    }
    iVar3 = FUN_008f7780(param_1);
    if (iVar3 != 0) {
      uVar2 = *(undefined4 *)(iVar3 + 0x4b4);
      iVar3 = FUN_009f9480(uVar2);
      if ((((iVar3 != 0) || (iVar3 = FUN_009f94a0(uVar2), iVar3 != 0)) ||
          (iVar3 = FUN_009f9460(uVar2), iVar3 != 0)) || (iVar3 = FUN_009f94c0(uVar2), iVar3 != 0)) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// 00951E20  FUN_00951e20  size=16  [callgraph]
void FUN_00951e20(undefined4 param_1)

{
  FUN_0094f150(param_1);
  return;
}

// 00951E30  FUN_00951e30  size=250  [callgraph]
void FUN_00951e30(void)

{
  bool bVar1;
  int *piVar2;
  
  if (DAT_01b37360 != (int *)0x0) {
    bVar1 = false;
    piVar2 = (int *)PTR_DAT_01886b24;
    if (PTR_DAT_01886b24 == PTR_DAT_01886b24 + DAT_01886b28 * 4) {
LAB_00951e66:
      (**(code **)(*DAT_01b37360 + 4))(1);
    }
    else {
      do {
        if ((int *)*piVar2 == DAT_01b37360) {
          bVar1 = true;
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != (int *)(PTR_DAT_01886b24 + DAT_01886b28 * 4));
      if (!bVar1) goto LAB_00951e66;
      FUN_00950c70(DAT_01b37360);
    }
    DAT_01b37360 = (int *)0x0;
  }
  if (DAT_01b37364 == (int *)0x0) goto LAB_00951ed0;
  bVar1 = false;
  piVar2 = (int *)PTR_DAT_01886b24;
  if (PTR_DAT_01886b24 == PTR_DAT_01886b24 + DAT_01886b28 * 4) {
LAB_00951eb4:
    (**(code **)(*DAT_01b37364 + 4))(1);
  }
  else {
    do {
      if ((int *)*piVar2 == DAT_01b37364) {
        bVar1 = true;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(PTR_DAT_01886b24 + DAT_01886b28 * 4));
    if (!bVar1) goto LAB_00951eb4;
    FUN_00950c70(DAT_01b37364);
  }
  DAT_01b37364 = (int *)0x0;
LAB_00951ed0:
  if (DAT_01b37368 == (int *)0x0) {
    return;
  }
  bVar1 = false;
  piVar2 = (int *)PTR_DAT_01886b24;
  if (PTR_DAT_01886b24 != PTR_DAT_01886b24 + DAT_01886b28 * 4) {
    do {
      if ((int *)*piVar2 == DAT_01b37368) {
        bVar1 = true;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(PTR_DAT_01886b24 + DAT_01886b28 * 4));
    if (bVar1) {
      FUN_00950c70(DAT_01b37368);
      DAT_01b37368 = (int *)0x0;
      return;
    }
  }
  (**(code **)(*DAT_01b37368 + 4))(1);
  DAT_01b37368 = (int *)0x0;
  return;
}

// 00951F30  FUN_00951f30  size=96  [callgraph]
void FUN_00951f30(void)

{
  bool bVar1;
  int *piVar2;
  
  if (DAT_01b3736c == (int *)0x0) {
    return;
  }
  bVar1 = false;
  piVar2 = (int *)PTR_DAT_01886b24;
  if (PTR_DAT_01886b24 != PTR_DAT_01886b24 + DAT_01886b28 * 4) {
    do {
      if ((int *)*piVar2 == DAT_01b3736c) {
        bVar1 = true;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(PTR_DAT_01886b24 + DAT_01886b28 * 4));
    if (bVar1) {
      FUN_00950c70(DAT_01b3736c);
      DAT_01b3736c = (int *)0x0;
      return;
    }
  }
  (**(code **)(*DAT_01b3736c + 4))(1);
  DAT_01b3736c = (int *)0x0;
  return;
}

// 00951FB0  FUN_00951fb0  size=158  [callgraph]
void __fastcall FUN_00951fb0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != puVar1 + *(int *)(param_1 + 8)) {
    do {
      FUN_00a00bd0(*puVar1,0);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  uVar2 = 0;
  do {
    FUN_00a00bd0(*(undefined4 *)((int)&DAT_0164fa10 + uVar2),0);
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x50);
  uVar2 = 0;
  do {
    FUN_00a00bd0(*(undefined4 *)((int)&DAT_0164fa60 + uVar2),0);
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x18);
  uVar2 = 0;
  do {
    FUN_00a00bd0(*(undefined4 *)((int)&DAT_0164fa78 + uVar2),0);
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x14);
  return;
}

// 009520F0  cItemStageDropCollectableDlc::vf04  size=57  [class]
undefined4 * __thiscall cItemStageDropCollectableDlc::vf04(undefined4 *param_1,byte param_2)

{
  param_1[0x18] = 0;
  *param_1 = cItemBase::vftable;
  if (param_1[0x14] != 0) {
    FUN_00a805f0();
    param_1[0x14] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00952130  cItemStageDropCollectableDlc::vf1C  size=574  [class]
void __fastcall cItemStageDropCollectableDlc::vf1C(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_00e5e050("core_se_sys_item_get",0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (((iVar1 == 0x3855170f) || (iVar1 == 0x4cbfda41)) && (iVar2 = FUN_00d46780(), iVar2 != 0)) {
    if (iVar1 == 0x3855170f) {
      FUN_00cbac80(0xffffffff,0x94,0);
      goto LAB_009521c0;
    }
    if (iVar1 != 0x4cbfda41) goto LAB_009521b4;
    FUN_00cbac80(0xffffffff,0x95,0);
  }
  else {
    uVar6 = FUN_0094aa20(iVar1,0);
    FUN_00cbac80(0xffffffff,uVar6);
LAB_009521b4:
    if (iVar1 == 0x3855170f) {
LAB_009521c0:
      piVar3 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
          puVar5 = &DAT_01be9c38;
          (**(code **)(*piVar3 + 4))(&DAT_01be9c38);
          iVar2 = FUN_00dd6d80(puVar5);
          if (iVar2 != 0) {
            FUN_00b7ca60();
            uVar6 = 0;
            fVar4 = (float10)FUN_00bc2f00(0);
            FUN_00bda060((float)fVar4,uVar6);
          }
        }
        FUN_00cc1250(4,0,0);
      }
      iVar2 = FUN_00d46780();
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x90) == 6) {
          uVar6 = 0x13;
        }
        else {
          if (*(int *)(param_1 + 0x90) != 8) goto LAB_00952253;
          uVar6 = 0x15;
        }
        FUN_00c82550(uVar6);
      }
LAB_00952253:
      iVar2 = FUN_00d467a0();
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x90) == 7) {
          FUN_00c82950(0xf);
        }
        else if (*(int *)(param_1 + 0x90) == 9) {
          FUN_00c82950(0x11);
        }
      }
      goto LAB_009522e8;
    }
    if (iVar1 != 0x4cbfda41) goto LAB_009522e8;
  }
  piVar3 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar5 = &DAT_01be9c38;
      (**(code **)(*piVar3 + 4))(&DAT_01be9c38);
      iVar2 = FUN_00dd6d80(puVar5);
      if (iVar2 != 0) {
        FUN_00bd9f60();
      }
    }
    FUN_00cc1250(5,0,0);
  }
LAB_009522e8:
  uVar6 = *(undefined4 *)(param_1 + 0x90);
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  FUN_0094f460(iVar1,uVar6);
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  if ((iVar1 == 0x263b6dae) || (iVar1 == 0x513c5d38)) {
    uVar7 = 0;
    uVar6 = FUN_0094c150(iVar1);
    FUN_00cc1250(3,uVar6,uVar7);
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  if ((*(uint *)(param_1 + 4) & 0x10000) != 0) {
    FUN_0094e3e0(*(undefined4 *)(param_1 + 0x68));
  }
  return;
}

