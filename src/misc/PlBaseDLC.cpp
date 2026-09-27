// src/misc/PlBaseDLC.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8FCC0..00AC3830, 52 functions

#include "types.h"

// 00A8FCC0  PlBaseDLC::vf104  size=90  [class]
void __fastcall PlBaseDLC::vf104(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  Pl0000::vf104();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x104))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00a8fd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x414))();
  return;
}

// 00A8FD20  PlBaseDLC::vf410  size=135  [class]
void __fastcall PlBaseDLC::vf410(int param_1)

{
  *(undefined4 *)(param_1 + 0x25b4) = 0;
  *(undefined4 *)(param_1 + 0x25bc) = 0;
  *(undefined4 *)(param_1 + 0x25b8) = 0;
  *(undefined4 *)(param_1 + 0x25b0) = 0;
  *(undefined4 *)(param_1 + 0x2568) = 0;
  *(undefined4 *)(param_1 + 0x256c) = 0;
  *(undefined4 *)(param_1 + 0x2570) = 0;
  *(undefined4 *)(param_1 + 0x2580) = 0;
  *(undefined4 *)(param_1 + 0x2598) = 0;
  *(undefined4 *)(param_1 + 0x2574) = 0;
  *(undefined4 *)(param_1 + 0x2584) = 0;
  *(undefined4 *)(param_1 + 0x2578) = 0;
  *(undefined4 *)(param_1 + 0x2588) = 0;
  *(undefined4 *)(param_1 + 0x25a4) = 0;
  *(undefined4 *)(param_1 + 0x25ac) = 0;
  *(undefined4 *)(param_1 + 0xe70) = 0;
  *(undefined4 *)(param_1 + 0x2590) = 0;
  *(undefined4 *)(param_1 + 0x2594) = 0;
  *(undefined4 *)(param_1 + 0xe74) = 0;
  *(undefined4 *)(param_1 + 0xe78) = 0;
  *(undefined4 *)(param_1 + 0xe7c) = 0;
  *(undefined4 *)(param_1 + 0x25a8) = 0;
  return;
}

// 00A8FDB0  PlBaseDLC::vf414  size=1  [class]
void PlBaseDLC::vf414(void)

{
  return;
}

// 00A8FDC0  PlBaseDLC::vf418  size=5  [class]
undefined4 PlBaseDLC::vf418(void)

{
  return 0;
}

// 00A8FDD0  PlBaseDLC::vf41C  size=142  [class]
undefined4 __fastcall PlBaseDLC::vf41C(int *param_1)

{
  int iVar1;
  
  if (((((DAT_01bea060 & 0x2000000) == 0) && ((DAT_01bea060 & 0x40000000) == 0)) &&
      ((DAT_01bea060 & 0x8000000) == 0)) && ((DAT_01bea060 & 0x400) == 0)) {
    iVar1 = FUN_00c17700();
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x368))();
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*param_1 + 0x36c))();
        if (iVar1 == 0) {
          iVar1 = FUN_00416910(6);
          if ((iVar1 == 0) && (param_1[0x3d4] != 0)) {
            iVar1 = (**(code **)(*param_1 + 0x32c))();
            if (iVar1 == 0) {
              iVar1 = (**(code **)(*param_1 + 0x354))();
              if (iVar1 == 0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00A8FE60  PlBaseDLC::vf390  size=1  [class]
void PlBaseDLC::vf390(void)

{
  return;
}

// 00A8FE70  FUN_00a8fe70  size=113  [between]
float10 __fastcall FUN_00a8fe70(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  fVar2 = (float10)0;
  if (*(int *)(param_1 + 0x754) != 0) {
    uVar1 = FUN_00b7ec80();
    switch(uVar1) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00a8fea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x5c))();
      return fVar2;
    default:
      fVar2 = (float10)(float)fVar2;
      break;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x00a8fec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 100))();
      return fVar2;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x00a8feb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x6c))();
      return fVar2;
    case 4:
                    /* WARNING: Could not recover jumptable at 0x00a8fed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x74))();
      return fVar2;
    }
  }
  return fVar2;
}

// 00A8FF00  PlBaseDLC::vf3B0  size=35  [class]
float10 __fastcall PlBaseDLC::vf3B0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bc3340();
  if (iVar1 == 0) {
    return (float10)*(float *)(param_1 + 0x3410);
  }
  return (float10)1.0;
}

// 00A9A410  FUN_00a9a410  size=143  [callgraph]
int __thiscall FUN_00a9a410(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x754) == 0) {
    return 0;
  }
  iVar3 = 0;
  switch(param_2) {
  case 0:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x24);
    break;
  case 1:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x2c);
    break;
  case 2:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x7c);
    break;
  case 3:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x84);
    break;
  case 4:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x8c);
    break;
  default:
    goto switchD_00a9a433_default;
  }
  iVar3 = (*pcVar2)(param_3);
switchD_00a9a433_default:
  FUN_00a8fe70(param_3);
  iVar1 = FUN_00fdbc60();
  if (iVar1 != 0) {
    iVar3 = iVar1;
  }
  return iVar3;
}

// 00A9A4C0  PlBaseDLC::vf3C0  size=2386  [class]
void __fastcall PlBaseDLC::vf3C0(int *param_1)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if ((DAT_01bea070 & 0x200000) != 0) {
    _memset(param_1 + 0x33e,0,0x30);
    goto LAB_00a9a54a;
  }
  if (param_1[0x959] == 0) {
    piVar7 = (int *)&DAT_01b7b910;
LAB_00a9a50b:
    piVar8 = param_1 + 0x33e;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
  }
  else if (param_1[0x959] == 1) {
    piVar7 = &DAT_01b7b940;
    goto LAB_00a9a50b;
  }
  param_1[0xef5] = param_1[0x342];
  param_1[0xef6] = param_1[0x343];
  param_1[0xef7] = param_1[0x344];
  param_1[0xef8] = param_1[0x345];
LAB_00a9a54a:
  if (((DAT_01bea070 & 0x200000) != 0) || ((DAT_01bea060 & 0x48000000) != 0)) {
    _memset(param_1 + 0x33e,0,0x30);
  }
  if ((DAT_01bea070 & 0x100000) != 0) {
    param_1[0x342] = 0;
    param_1[0x33e] = param_1[0x33e] & 0xffffffef;
    param_1[0x343] = 0;
    param_1[0x33f] = param_1[0x33f] & 0xffffffef;
    param_1[0x341] = param_1[0x341] & 0xffffffef;
  }
  if ((DAT_01bea070 & 0x20000) != 0) {
    param_1[0x344] = 0;
    param_1[0x345] = 0;
    param_1[0xef5] = 0;
    param_1[0xef6] = 0;
  }
  if ((DAT_01bea070 & 0x80000) != 0) {
    param_1[0xef7] = 0;
    param_1[0x33e] = param_1[0x33e] & 0xffffff1f;
    param_1[0xef8] = 0;
    param_1[0x33f] = param_1[0x33f] & 0xffffff1f;
    param_1[0x341] = param_1[0x341] & 0xffffff1f;
  }
  if ((DAT_01bea094 & 0x20000) != 0) {
    param_1[0x342] = 0;
    param_1[0x33e] = 0;
    param_1[0x343] = 0;
    param_1[0x33f] = 0;
    param_1[0xef7] = 0;
    param_1[0x341] = 0;
    param_1[0xef8] = 0;
  }
  if ((DAT_01bea094 & 2) != 0) {
    uVar3 = ~param_1[0x389];
    uVar6 = ~param_1[0x388];
    param_1[0x33e] = param_1[0x33e] & uVar3 & uVar6;
    param_1[0x33f] = param_1[0x33f] & uVar3 & uVar6;
    param_1[0x341] = param_1[0x341] & uVar3 & uVar6;
  }
  if (param_1[0xef3] != 0) {
    param_1[0xef7] = 0;
    uVar3 = ~param_1[0x394];
    param_1[0xef8] = 0;
    param_1[0x33e] = param_1[0x33e] & uVar3;
    param_1[0x33f] = param_1[0x33f] & uVar3;
    param_1[0x341] = param_1[0x341] & uVar3;
  }
  iVar4 = (**(code **)(*param_1 + 0x32c))();
  if (iVar4 == 0) {
    param_1[0xef3] = 0;
  }
  FUN_00b7a260(param_1 + 0x350);
  fVar9 = (float10)FUN_00b7a430();
  param_1[0x34d] = (int)(float)fVar9;
  fVar1 = (float)param_1[0x343] * (float)param_1[0x343] +
          (float)param_1[0x342] * (float)param_1[0x342];
  param_1[0x34a] = (int)fVar1;
  if (param_1[0xdfa] < 1) {
    param_1[0x34c] = param_1[0x25];
    if (0.0 < fVar1) {
      fVar9 = (float10)fpatan(-(float10)(float)param_1[0x342],-(float10)(float)param_1[0x343]);
      param_1[0x34b] = (int)(float)fVar9;
      fStack_20 = (float)-(float10)(float)param_1[0x342];
      fStack_1c = (float)-(float10)(float)param_1[0x343];
      fStack_18 = 0.0;
      D3DXVec3TransformNormal(&fStack_20,&fStack_20,param_1 + 0x350);
      fStack_20 = (float)param_1[0x14] + fStack_20;
      fStack_1c = (float)param_1[0x15] + fStack_1c;
      fStack_18 = (float)param_1[0x16] + fStack_18;
      fStack_14 = (float)param_1[0x17] + fStack_14;
      fVar9 = (float10)FUN_00a8ec30(&fStack_20);
      param_1[0x34c] = (int)(float)fVar9;
    }
  }
  else if (fVar1 <= 0.0) {
    param_1[0xdfa] = 0;
  }
  else {
    fVar9 = (float10)fpatan(-(float10)(float)param_1[0x342],-(float10)(float)param_1[0x343]);
    param_1[0x34b] = (int)(float)fVar9;
  }
  if (-1 < param_1[0xdfa]) {
    param_1[0xdfa] = param_1[0xdfa] + -1;
  }
  FUN_00b84e50();
  if (param_1[0x96d] != 0) {
    param_1[0x96d] = param_1[0x96d] + -1;
  }
  if (param_1[0x96f] != 0) {
    param_1[0x96f] = param_1[0x96f] + -1;
  }
  if (param_1[0x96e] != 0) {
    param_1[0x96e] = param_1[0x96e] + -1;
  }
  if (param_1[0x96c] != 0) {
    param_1[0x96c] = param_1[0x96c] + -1;
  }
  if (param_1[0x95a] != 0) {
    param_1[0x95a] = param_1[0x95a] + -1;
  }
  if (param_1[0x95b] != 0) {
    param_1[0x95b] = param_1[0x95b] + -1;
  }
  if (param_1[0x95c] != 0) {
    param_1[0x95c] = param_1[0x95c] + -1;
  }
  if (param_1[0x960] != 0) {
    param_1[0x960] = param_1[0x960] + -1;
  }
  if (param_1[0x966] != 0) {
    param_1[0x966] = param_1[0x966] + -1;
  }
  if (param_1[0x95d] != 0) {
    param_1[0x95d] = param_1[0x95d] + -1;
  }
  if (param_1[0x961] != 0) {
    param_1[0x961] = param_1[0x961] + -1;
  }
  if (param_1[0x95e] != 0) {
    param_1[0x95e] = param_1[0x95e] + -1;
  }
  if (param_1[0x962] != 0) {
    param_1[0x962] = param_1[0x962] + -1;
  }
  if (param_1[0x969] != 0) {
    param_1[0x969] = param_1[0x969] + -1;
  }
  if (param_1[0x96b] != 0) {
    param_1[0x96b] = param_1[0x96b] + -1;
  }
  if (param_1[0x39c] != 0) {
    param_1[0x39c] = param_1[0x39c] + -1;
  }
  if (param_1[0x964] != 0) {
    param_1[0x964] = param_1[0x964] + -1;
  }
  if (param_1[0x965] != 0) {
    param_1[0x965] = param_1[0x965] + -1;
  }
  if (param_1[0x39d] != 0) {
    param_1[0x39d] = param_1[0x39d] + -1;
  }
  if (param_1[0x39e] != 0) {
    param_1[0x39e] = param_1[0x39e] + -1;
  }
  if (param_1[0x39f] != 0) {
    param_1[0x39f] = param_1[0x39f] + -1;
  }
  if (param_1[0x96a] != 0) {
    param_1[0x96a] = param_1[0x96a] + -1;
  }
  uVar3 = param_1[0x33f];
  if ((((uVar3 & param_1[0x388]) != 0) && (param_1[0x95a] = 10, param_1[0x186] == 0x4e)) &&
     ((*(byte *)(param_1 + 0x1e4) & 4) != 0)) {
    param_1[0x95a] = 0xe;
  }
  if ((((uVar3 & param_1[0x389]) != 0) && (param_1[0x95b] = 10, param_1[0x186] == 0x4e)) &&
     ((*(byte *)(param_1 + 0x1e4) & 4) != 0)) {
    param_1[0x95b] = 0xe;
  }
  if ((param_1[0x398] & uVar3) != 0) {
    param_1[0x39e] = 0xf;
  }
  if ((param_1[0x39a] & uVar3) != 0) {
    param_1[0x964] = 0xf;
  }
  if ((param_1[0x33e] & param_1[0x389]) == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)param_1[0x244] + (float)param_1[0x3a0];
  }
  param_1[0x3a0] = (int)fVar1;
  if ((param_1[0x33e] & param_1[0x388]) == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)param_1[0x244] + (float)param_1[0x3a1];
  }
  param_1[0x3a1] = (int)fVar1;
  param_1[0x14fa] = 0;
  if ((((DAT_01bea060 & 0x68000000) == 0) && (iVar4 = (**(code **)(*param_1 + 0x354))(), iVar4 == 0)
      ) && ((iVar4 = (**(code **)(*param_1 + 0x1fc))(), iVar4 == 0 &&
            (iVar4 = FUN_00416910(6), iVar4 == 0)))) {
    iVar4 = param_1[0x14fb];
    if ((iVar4 != 0) && ((*(byte *)(param_1 + 0x33f) & 8) != 0)) {
      param_1[0x14fa] = param_1[0x14fa] ^ 1;
    }
    iVar5 = FUN_00416d50(0x19);
    if ((iVar5 != 0) && (iVar4 == 0)) {
      param_1[0x14fa] = param_1[0x14fa] ^ 1;
    }
  }
  param_1[0x14fb] = 0;
  if ((param_1[0x397] & param_1[0x33f]) != 0) {
    param_1[0x39f] = 0xf;
  }
  iVar4 = param_1[0x982];
  if ((float)param_1[0x34a] <= 90000.0) {
    param_1[0x95f] = 0;
  }
  else {
    param_1[0x95f] = param_1[0x95f] + 1;
  }
  bVar2 = false;
  iVar5 = FUN_009c5640();
  if ((iVar5 != 0) &&
     (((param_1[0x388] & param_1[0x33f]) != 0 || ((param_1[0x389] & param_1[0x33f]) != 0)))) {
    bVar2 = true;
  }
  iVar5 = FUN_009c5640();
  if ((iVar5 != 0) && (!bVar2)) {
    FUN_00d46780();
  }
  if ((((param_1[0x33f] & param_1[0x38a]) != 0) && (param_1[0x95d] == 0)) &&
     ((param_1[0x33e] & param_1[0x386]) == 0)) {
    param_1[0x95e] = 8;
    if ((param_1[0x95f] != 0) && (param_1[0x95f] < 0xf)) {
      param_1[0x41c] = param_1[0x34c];
      param_1[0x95c] = 10;
      param_1[0x95d] = 0;
      param_1[0x413] = 0;
      param_1[0x95e] = 0;
    }
  }
  if ((bVar2) ||
     (((param_1[0x95e] != 0 && (param_1[0x95f] != 0)) && ((param_1[0x95f] < 0xf && (iVar4 != 0))))))
  {
    param_1[0x95c] = 10;
    param_1[0x41c] = param_1[0x34c];
    param_1[0x95d] = 0;
    param_1[0x413] = 0;
    param_1[0x95e] = 0;
  }
  uVar3 = param_1[0x33f];
  if (((param_1[0x38c] & uVar3) != 0) && (param_1[0x961] == 0)) {
    param_1[0x960] = 10;
    param_1[0x963] = param_1[0x34c];
    param_1[0x961] = 0;
    param_1[0x962] = 0;
  }
  if (((param_1[0x962] != 0) && (90000.0 < (float)param_1[0x34a])) && (iVar4 != 0)) {
    param_1[0x960] = 10;
    param_1[0x963] = param_1[0x34c];
    param_1[0x961] = 0;
    param_1[0x962] = 0;
  }
  if ((param_1[0x38e] & uVar3) != 0) {
    param_1[0x96a] = 10;
  }
  if ((param_1[0x38d] & uVar3) != 0) {
    param_1[0x969] = 10;
  }
  if ((param_1[0x38f] & uVar3) != 0) {
    param_1[0x96b] = 10;
  }
  if ((param_1[0xaee] != 0) ||
     (fVar1 = (float)param_1[0xaf6], !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))) {
    param_1[0x95a] = 0;
  }
  if ((uVar3 & param_1[0x399]) != 0) {
    param_1[0x965] = 0xf;
  }
  uVar6 = param_1[0x33e];
  if (((param_1[0x392] & uVar6) == 0) || ((float)param_1[0x34a] <= 90000.0)) {
    param_1[0x1033] = 0;
  }
  else {
    param_1[0x1033] = 1;
  }
  param_1[900] = 0;
  if (((DAT_01bea094 & 0x400) == 0) && ((param_1[0x382] & uVar3) != 0)) {
    param_1[900] = 1;
    param_1[899] = (uint)(param_1[899] == 0);
  }
  if ((uVar6 & param_1[0x399]) == 0) {
    param_1[0x965] = 0;
  }
  if ((param_1[0x39a] & uVar6) == 0) {
    param_1[0x964] = 0;
  }
  if (((0 < param_1[0x964]) && (0 < param_1[0x965])) || (iVar4 = FUN_00a1d280(0x15), iVar4 != 0)) {
    param_1[0x965] = 0;
    param_1[0x964] = 0;
    param_1[0x39c] = 0xc;
  }
  if ((param_1[0x397] & param_1[0x33e]) == 0) {
    param_1[0x39f] = 0;
  }
  if ((param_1[0x398] & param_1[0x33e]) == 0) {
    param_1[0x39e] = 0;
  }
  if (((0 < param_1[0x39e]) && (0 < param_1[0x39f])) || (iVar4 = FUN_00a1d280(0x14), iVar4 != 0)) {
    param_1[0x39f] = 0;
    param_1[0x39e] = 0;
    param_1[0x39d] = 0xc;
  }
  if ((param_1[0x33f] & param_1[0x385]) != 0) {
    param_1[0x96c] = 10;
  }
  if ((param_1[0x96c] != 0) && ((float)param_1[0x34a] <= 90000.0)) {
    param_1[0x96d] = param_1[0x970];
    param_1[0x96f] = 0;
    param_1[0x96c] = 0;
  }
  param_1[0x970] = 0xf;
  if ((param_1[0x96d] != 0) && (90000.0 < (float)param_1[0x34a])) {
    param_1[0x96d] = 0;
  }
  return;
}

// 00A9AE20  FUN_00a9ae20  size=111  [callgraph]
undefined4 __fastcall FUN_00a9ae20(int param_1)

{
  int iVar1;
  uint local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = local_20 | 0x80000000;
  local_8 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_4 = 0;
  local_1c = 0;
  local_1a = 0;
  iVar1 = FUN_00c3d9d0(param_1 + 0x40,&local_20);
  if ((iVar1 != 0) && ((local_18 & 0x200000) != 0)) {
    return 1;
  }
  return 0;
}

// 00AA2060  PlBaseDLC::vf48  size=1092  [class]
void __fastcall PlBaseDLC::vf48(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  
  FUN_00bc3690();
  if ((DAT_01bea094 & 0x20000) != 0) {
    return;
  }
  param_1[0x106c] = param_1[0x24];
  param_1[0x106d] = param_1[0x25];
  param_1[0x106e] = param_1[0x26];
  param_1[0x106f] = param_1[0x27];
  param_1[0x34a] =
       (int)((float)param_1[0x343] * (float)param_1[0x343] +
            (float)param_1[0x342] * (float)param_1[0x342]);
  Pl0010::GroundTest();
  FUN_00bc3dc0();
  param_1[0x9f0] = 0;
  param_1[0x9f5] = 0;
  FUN_00bc2bd0();
  if ((DAT_01bea070 & 0x40000000) != 0) {
    return;
  }
  (**(code **)(*param_1 + 0x420))();
  iVar3 = (**(code **)(*param_1 + 0x32c))();
  if (iVar3 != 0) {
    param_1[0xeea] = 0;
    param_1[0xee9] = 1;
  }
  if ((param_1[0x1d9] == 0) || (param_1[0xeea] == 0)) goto LAB_00aa21f9;
  param_1[0xeeb] = *(int *)(param_1[0x1d9] + 0xf8);
  if (param_1[0xee8] != 0) {
    FUN_008e0b70(1);
    param_1[0xee9] = 1;
    goto LAB_00aa21f9;
  }
  FUN_008e0b70(0);
  if (param_1[0xee9] == 0) goto LAB_00aa21f9;
  fVar1 = (float)param_1[0xeec];
  if ((float)param_1[0xeec] <= (float)param_1[0xeeb]) {
    if (((float)param_1[0xeec] <= (float)param_1[0xeeb]) &&
       (fVar1 = (float)param_1[0xeeb] - 0.05,
       fVar1 < (float)param_1[0xeec] != (fVar1 == (float)param_1[0xeec]))) goto LAB_00aa21dc;
  }
  else {
    fVar1 = (float)param_1[0xeeb] + 0.05;
    if ((float)param_1[0xeec] <= fVar1) {
LAB_00aa21dc:
      param_1[0xee9] = 0;
      fVar1 = (float)param_1[0xeec];
    }
  }
  CharacterControl::setHeight(fVar1);
LAB_00aa21f9:
  param_1[0xee8] = 0;
  param_1[0xeea] = 1;
  BehaviorDebrisActor::vf48();
  (**(code **)(*param_1 + 0x328))(0x3f800000);
  param_1[0x462] = param_1[0x13c];
  if (param_1[0x13c] == 0) {
    return;
  }
  iVar3 = FUN_00a7c890();
  param_1[0x463] = iVar3;
  if (param_1[0x13c] != 0) {
    FUN_00a7c910();
  }
  fVar4 = (float10)FUN_00e049b0();
  param_1[0x244] = (int)(float)fVar4;
  (**(code **)(*param_1 + 0x3d0))();
  (**(code **)(*param_1 + 0x3d4))();
  fVar1 = (float)param_1[0xafc];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0xafc] = (int)((float)param_1[0xafc] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xafd] != ((float)param_1[0xafd] == 0.0)) {
    param_1[0xafd] = (int)((float)param_1[0xafd] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xd06] != ((float)param_1[0xd06] == 0.0)) {
    param_1[0xd06] = (int)((float)param_1[0xd06] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x435] != ((float)param_1[0x435] == 0.0)) {
    param_1[0x435] = (int)((float)param_1[0x435] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x436] != ((float)param_1[0x436] == 0.0)) {
    param_1[0x436] = (int)((float)param_1[0x436] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xb0f] != ((float)param_1[0xb0f] == 0.0)) {
    param_1[0xb0f] = (int)((float)param_1[0xb0f] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xc6a] != ((float)param_1[0xc6a] == 0.0)) {
    param_1[0xc6a] = (int)((float)param_1[0xc6a] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xe79] != ((float)param_1[0xe79] == 0.0)) {
    param_1[0xe79] = (int)((float)param_1[0xe79] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xe15] != ((float)param_1[0xe15] == 0.0)) {
    param_1[0xe15] = (int)((float)param_1[0xe15] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xb04] != ((float)param_1[0xb04] == 0.0)) {
    param_1[0xb04] = (int)((float)param_1[0xb04] - (float)param_1[0x244]);
  }
  if (0 < param_1[0x2e4]) {
    param_1[0x2e4] = param_1[0x2e4] + -1;
  }
  fVar1 = (float)param_1[0xc68];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0xc68] = (int)((float)param_1[0xc68] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0xc69] != ((float)param_1[0xc69] == 0.0)) {
    param_1[0xc69] = (int)((float)param_1[0xc69] - (float)param_1[0x244]);
  }
  FUN_00b8f340();
  fVar1 = (float)param_1[0x9f9];
  if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) &&
     (fVar1 = (float)param_1[0x9f9], param_1[0x9f9] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] < 0.0)) {
    param_1[0x9f8] = 0;
  }
  if ((param_1[0xe16] != 0) && ((param_1[0x33e] & param_1[0x392]) == 0)) {
    param_1[0xe16] = 0;
  }
  if (((*(byte *)(param_1 + 0x1e4) & 0x10) != 0) && (FUN_00a8d280(), param_1[0x463] != 0)) {
    FUN_0041cc40(0x3f800000);
  }
  FUN_00be7f50();
  pcVar2 = *(code **)(*param_1 + 0x3cc);
  param_1[0x9fa] = 0;
  (*pcVar2)();
  FUN_00b7f530();
  return;
}

// 00AA24B0  PlBaseDLC::vf50  size=208  [class]
void __fastcall PlBaseDLC::vf50(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  FUN_00b88e20();
  (**(code **)(*param_1 + 0x3fc))();
  BehaviorAppBase::vf50();
  iVar1 = FUN_00a9ae20();
  if ((((iVar1 != 0) && (0.0 < (float)param_1[0xd07])) &&
      (iVar1 = (**(code **)(*param_1 + 0x32c))(), iVar1 != 0)) &&
     (iVar1 = param_1[0x1d9], iVar1 != 0)) {
    fVar2 = (float10)FUN_00e049b0();
    *(float *)(iVar1 + 0x170) = (float)fVar2;
  }
  if ((DAT_01bea060 & 0x48000000) != 0) {
    if ((DAT_01bea070 & 0x40000000) != 0) {
      return;
    }
    (**(code **)(*param_1 + 0x400))();
  }
  if (((DAT_01bea070 & 0x40000000) == 0) && (param_1[0x462] = param_1[0x13c], param_1[0x13c] != 0))
  {
    iVar1 = FUN_00a7c890();
    param_1[0x463] = iVar1;
    (**(code **)(*param_1 + 0x128))();
    if (param_1[0x1ec] != 0) {
      FUN_008f3cb0(param_1);
    }
    FUN_00b93330();
    return;
  }
  return;
}

// 00AA2580  PlBaseDLC::vf54  size=500  [class]
void __fastcall PlBaseDLC::vf54(int *param_1)

{
  int iVar1;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  FUN_00b84bf0();
  iVar1 = FUN_00b8bb10();
  if (iVar1 == 0) {
    if ((param_1[0x1e5] & 0x8000U) != 0) {
      iVar1 = (**(code **)(*param_1 + 0x32c))();
      if (iVar1 == 0) {
        iVar1 = FUN_00a81330();
        if (iVar1 != 0) {
          iVar1 = FUN_00a7c8a0();
          if (iVar1 != 0) {
            FUN_00a8ce90(&fStack_40,auStack_20);
            D3DXVec3TransformNormal(&fStack_40,&fStack_40,iVar1 + 0x10);
            fStack_40 = *(float *)(iVar1 + 0x40) + fStack_40;
            fStack_3c = *(float *)(iVar1 + 0x44) + fStack_3c;
            fStack_38 = *(float *)(iVar1 + 0x48) + fStack_38;
            fStack_30 = fStack_40 - (float)param_1[0x10];
            fStack_2c = fStack_3c - (float)param_1[0x11];
            fStack_28 = fStack_38 - (float)param_1[0x12];
            fStack_24 = fStack_34 - (float)param_1[0x13];
            FUN_00a12310(&fStack_30);
          }
        }
        goto LAB_00aa2707;
      }
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0x794) & 0x20) != 0)) &&
         ((param_1[0xf89] != 0 || (param_1[0xf90] != 0)))) {
        FUN_00a12210(0xffffffff);
        *(int *)(iVar1 + 0x860) = param_1[0xf8c];
        *(int *)(iVar1 + 0x864) = param_1[0xf8d];
        *(int *)(iVar1 + 0x868) = param_1[0xf8e];
        *(int *)(iVar1 + 0x86c) = param_1[0xf8f];
        *(int *)(iVar1 + 0x850) = param_1[0xf94];
        *(int *)(iVar1 + 0x854) = param_1[0xf95];
        *(int *)(iVar1 + 0x858) = param_1[0xf96];
        *(int *)(iVar1 + 0x85c) = param_1[0xf97];
      }
    }
  }
LAB_00aa2707:
  Behavior::vf54();
  param_1[0x158] = (int)((float)param_1[0x10] - (float)param_1[0x150]);
  param_1[0x159] = (int)((float)param_1[0x11] - (float)param_1[0x151]);
  param_1[0x15a] = (int)((float)param_1[0x12] - (float)param_1[0x152]);
  param_1[0x15b] = (int)((float)param_1[0x13] - (float)param_1[0x153]);
  param_1[0x150] = param_1[0x10];
  param_1[0x151] = param_1[0x11];
  param_1[0x152] = param_1[0x12];
  param_1[0x153] = param_1[0x13];
  return;
}

// 00AA5570  PlBaseDLC::vf3DC  size=142  [class]
void __thiscall PlBaseDLC::vf3DC(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_160 [324];
  undefined4 local_1c;
  
  uVar3 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar3);
  local_1c = param_3;
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  iVar2 = FUN_00b7d050();
  if (iVar2 != 0) {
    FUN_00e03080(iVar2,1);
  }
  iVar2 = FUN_00b7d0b0();
  if (iVar2 != 0) {
    FUN_00e03080(iVar2,2);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00AA5600  PlBaseDLC::vf3E0  size=145  [class]
void __thiscall PlBaseDLC::vf3E0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_160 [348];
  
  uVar3 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar3);
  FUN_00dffb20(param_3);
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  iVar2 = FUN_00b7d050();
  if (iVar2 != 0) {
    FUN_00e03080(iVar2,1);
  }
  iVar2 = FUN_00b7d0b0();
  if (iVar2 != 0) {
    FUN_00e03080(iVar2,2);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00ABB300  PlBaseDLC::vf4C  size=2075  [class]
void __fastcall PlBaseDLC::vf4C(int *param_1)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 extraout_ECX;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  float fStack_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  undefined1 auStack_190 [396];
  
  (**(code **)(*param_1 + 0x3c0))();
  (**(code **)(*param_1 + 0x218))();
  if ((param_1[0x1cd] < 1) && (0 < param_1[0x1cc])) {
    param_1[0x1cc] = param_1[0x1cc] + -1;
  }
  if ((param_1[499] != 0) && (param_1[500] != 0)) {
    FUN_00d82990(param_1[500]);
  }
  if (((byte)DAT_01bea090 & 0x40) != 0) {
    FUN_00c5bbb0(0x4000);
  }
  if ((DAT_01bea070 & 0x40000000) == 0) {
    param_1[0x9a5] = 0;
    param_1[0x9a7] = 0;
    param_1[0x9a8] = 0;
    param_1[0xed9] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_004066f0();
      uStack_1ac = 0x7f7fffee;
      puStack_1a0 = auStack_190;
      ppuStack_1b0 = hkpAllCdPointCollector::vftable;
      uStack_198 = 0x80000008;
      iStack_19c = 0;
      hkpCdPointCollector::hkpCdPointCollector_13(param_1 + 0x14,0,1,&ppuStack_1b0);
      if (0 < iStack_19c) {
        FUN_0112bcf0();
        iStack_210 = 0;
        if (0 < iStack_19c) {
          iVar7 = 0;
          puVar6 = puStack_1a0;
          do {
            if ((*(float *)(puVar6 + iVar7 + 4) <= (float)param_1[0x11] + 0.5) ||
               (0.25 <= *(float *)(puVar6 + iVar7 + 0x14) * *(float *)(puVar6 + iVar7 + 0x14))) {
              iVar8 = *(int *)(puVar6 + iVar7 + 0x28);
              if ((*(char *)(iVar8 + 0x18) == '\x01') &&
                 (iVar8 = *(char *)(iVar8 + 0x10) + iVar8, iVar8 != 0)) {
                FUN_00910a40(iVar8);
                uVar4 = FUN_00917cd0(uStack_20c);
                puVar6 = puStack_1a0;
                if ((uVar4 & 0x30000000) != 0) {
                  param_1[0xed9] = 1;
                }
              }
            }
            else {
              iVar8 = *(int *)(puVar6 + iVar7 + 0x28);
              fVar10 = (float10)fpatan((float10)*(float *)(puVar6 + iVar7 + 0x10),
                                       (float10)*(float *)(puVar6 + iVar7 + 0x18));
              if ((*(char *)(iVar8 + 0x18) == '\x01') &&
                 (iVar8 = *(char *)(iVar8 + 0x10) + iVar8, iVar8 != 0)) {
                FUN_00910a40(iVar8);
                uVar4 = FUN_00917cd0(uStack_204);
                if ((uVar4 & 0x30000000) != 0) {
                  param_1[0xed9] = 1;
                }
                uVar4 = *(uint *)(iVar8 + 0xc);
                if ((uVar4 == 0) ||
                   (puVar6 = puStack_1a0,
                   (*(uint *)((-(uint)(uVar4 != 0) & uVar4) + 8) & 0x10000) == 0)) {
                  FUN_00910a40(iVar8);
                  uVar4 = FUN_00917cd0(uStack_208);
                  puVar6 = puStack_1a0;
                  if ((uVar4 & 4) == 0) {
                    fVar9 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)fVar10);
                    param_1[0x9a6] = (int)(float)fVar10;
                    if ((float10)5.5516524 < fVar9 * fVar9) {
                      param_1[0x9a5] = 1;
                    }
                    iVar8 = FUN_008f7780(iVar8);
                    puVar6 = puStack_1a0;
                    if (((iVar8 != 0) && ((*(byte *)(iVar8 + 0x4c0) & 0x20) != 0)) &&
                       (param_1[0x9a7] = 1, (float)(fVar9 * fVar9) < 0.6168503)) {
                      param_1[0x9a8] = 1;
                    }
                  }
                }
              }
            }
            iStack_210 = iStack_210 + 1;
            iVar7 = iVar7 + 0x30;
          } while (iStack_210 < iStack_19c);
        }
      }
      hkpCdPointCollector::hkpCdPointCollector_4();
      FUN_00406760();
    }
    if ((param_1[0x1e4] & 0x4000U) != 0) {
      FUN_00b7ab80(0x40000000,0x3c23d70a);
    }
    if ((param_1[0x1e4] & 0x8000U) != 0) {
      FUN_00b7ab80(0x40000000,0x3d4ccccd);
    }
    if ((param_1[0x1e4] & 0x10000U) != 0) {
      FUN_00b7ab80(0x40000000,0x3dcccccd);
    }
    param_1[0x462] = param_1[0x13c];
    if (param_1[0x13c] != 0) {
      iVar7 = FUN_00a7c890();
      param_1[0x463] = iVar7;
      (**(code **)(*param_1 + 0x414))();
      (**(code **)(*param_1 + 0x134))();
      FUN_00b7c720();
      pfVar1 = (float *)(param_1 + 0x14);
      param_1[0x240] = param_1[0x14];
      param_1[0x241] = param_1[0x15];
      param_1[0x242] = param_1[0x16];
      param_1[0x243] = param_1[0x17];
      if (param_1[0x13c] != 0) {
        FUN_00a7c910();
      }
      fVar10 = (float10)FUN_00e049b0();
      param_1[0x244] = (int)(float)fVar10;
      fVar2 = (float)param_1[0xb17];
      if (!NAN(fVar2) && 0.0 < fVar2 != (fVar2 == 0.0)) {
        param_1[0xb17] = (int)(float)((float10)(float)param_1[0xb17] - fVar10);
      }
      param_1[0xb10] = 0;
      if (0.0 < (float)param_1[0x2ed] != ((float)param_1[0x2ed] == 0.0)) {
        param_1[0x2ed] = (int)(float)((float10)(float)param_1[0x2ed] - fVar10);
      }
      if (0.0 < (float)param_1[0x2ed]) {
        FUN_00b7d630();
      }
      if (0.0 < (float)param_1[0x2ee] != ((float)param_1[0x2ee] == 0.0)) {
        param_1[0x2ee] = (int)((float)param_1[0x2ee] - (float)param_1[0x244]);
      }
      if (0.0 < (float)param_1[0x2ee]) {
        FUN_00b7d640(param_1[0x2ef]);
      }
      FUN_00b93700();
      (**(code **)(*param_1 + 0x3c4))();
      pcVar3 = *(code **)(*param_1 + 0x3c8);
      param_1[0x9fa] = 0;
      (*pcVar3)();
      if ((param_1[0xed9] != 0) && (param_1[0xeda] != 0)) {
        fStack_1e0 = *pfVar1;
        iStack_1dc = param_1[0x15];
        iStack_1d8 = param_1[0x16];
        iStack_1d4 = param_1[0x17];
        fStack_1f0 = *pfVar1 - (float)param_1[0x240];
        fStack_1ec = (float)param_1[0x15] - (float)param_1[0x241];
        fStack_1e8 = (float)param_1[0x16] - (float)param_1[0x242];
        fStack_1e4 = (float)param_1[0x17] - (float)param_1[0x243];
        iVar7 = hkpCdPointCollector::hkpCdPointCollector_14(&fStack_1f0,&fStack_1e0,1,0,0x3c23d70a);
        if (iVar7 == 0) {
          FUN_008e4580(pfVar1,1);
          uStack_1c0 = 0;
          uStack_1bc = 0xbe4ccccd;
          uStack_1b8 = 0;
          fStack_200 = *pfVar1;
          iStack_1fc = param_1[0x15];
          iStack_1f8 = param_1[0x16];
          iStack_1f4 = param_1[0x17];
          iVar7 = hkpCdPointCollector::hkpCdPointCollector_14
                            (&uStack_1c0,&fStack_200,1,0,0x3c23d70a);
          if (iVar7 != 0) {
            param_1[0x15] = iStack_1fc;
            *(undefined4 *)(param_1[0x1d9] + 0x124) = 0;
          }
        }
      }
      param_1[0xeda] = 0;
      lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>_3();
      FUN_00bc27a0();
      if (((param_1[0x1e5] & 0x1000000U) != 0) && (iVar7 = FUN_00a8b590(), iVar7 != 0)) {
        *(undefined4 *)(iVar7 + 0x870) = 1;
      }
      fVar2 = (float)param_1[0x244];
      *pfVar1 = *pfVar1 + (float)param_1[0x408] * fVar2;
      param_1[0x15] = (int)(fVar2 * (float)param_1[0x409] + (float)param_1[0x15]);
      param_1[0x16] = (int)(fVar2 * (float)param_1[0x40a] + (float)param_1[0x16]);
      param_1[0x17] = (int)(fVar2 * (float)param_1[0x40b] + (float)param_1[0x17]);
      fVar10 = (float10)FUN_00fdc1f0();
      param_1[0x408] = (int)(float)((float10)(float)param_1[0x408] * fVar10);
      param_1[0x409] = (int)(float)(fVar10 * (float10)(float)param_1[0x409]);
      param_1[0x40a] = (int)(float)(fVar10 * (float10)(float)param_1[0x40a]);
      param_1[0x40b] = (int)(float)(fVar10 * (float10)(float)param_1[0x40b]);
      fVar2 = (float)param_1[0x430];
      if (!NAN(fVar2) && 0.0 < fVar2 != (fVar2 == 0.0)) {
        param_1[0x430] = (int)((float)param_1[0x430] - (float)param_1[0x244]);
      }
      if (((((float)param_1[0x430] < 13.0) &&
           (fVar2 = (float)param_1[0x430], !NAN(fVar2) && 11.0 < fVar2 != (fVar2 == 11.0))) ||
          (((float)param_1[0x430] < 9.0 &&
           (fVar2 = (float)param_1[0x430], !NAN(fVar2) && 7.0 < fVar2 != (fVar2 == 7.0))))) ||
         (((float)param_1[0x430] < 5.0 && (0.0 < (float)param_1[0x430])))) {
        fVar2 = (float)param_1[0x244];
        *pfVar1 = fVar2 * (float)param_1[0x42c] + *pfVar1;
        param_1[0x15] = (int)((float)param_1[0x42d] * fVar2 + (float)param_1[0x15]);
        param_1[0x16] = (int)((float)param_1[0x42e] * fVar2 + (float)param_1[0x16]);
        param_1[0x17] = (int)((float)param_1[0x42f] * fVar2 + (float)param_1[0x17]);
      }
      fVar10 = (float10)FUN_00fdc1f0();
      param_1[0x42c] = (int)(float)(fVar10 * (float10)(float)param_1[0x42c]);
      param_1[0x42d] = (int)(float)(fVar10 * (float10)(float)param_1[0x42d]);
      param_1[0x42e] = (int)(float)(fVar10 * (float10)(float)param_1[0x42e]);
      param_1[0x42f] = (int)(float)(fVar10 * (float10)(float)param_1[0x42f]);
      (**(code **)(*param_1 + 0x3f8))();
      param_1[0x40c] = param_1[0x224];
      param_1[0x40d] = param_1[0x225];
      param_1[0x40e] = param_1[0x226];
      param_1[0x40f] = param_1[0x227];
      (**(code **)(*param_1 + 0x31c))();
      switchD_0080dbae::default();
      param_1[0xc60] = 0;
      hkpAllCdPointCollector::hkpAllCdPointCollector_23();
      FUN_00b87ff0();
      iVar7 = param_1[0x192];
      uVar12 = 1;
      param_1[0x8ca] = param_1[0x21c];
      uVar5 = FUN_00a7c7f0(iVar7,1);
      uVar11 = extraout_ECX;
      FUN_00a7c940(uVar5);
      FUN_00c60300(uVar11,iVar7,uVar12);
    }
  }
  return;
}

// 00AC2180  PlBaseDLC::vf40  size=3304  [class]
undefined4 __fastcall PlBaseDLC::vf40(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iStack_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_14;
  
  iVar2 = BehaviorAppBase::vf40();
  if ((iVar2 == 0) || (local_44 = param_1[0x13c], local_44 == 0)) {
    return 0;
  }
  FUN_00dd7240();
  param_1[0x130] = param_1[0x130] | 0x10;
  param_1[0xd9] = param_1[0xd9] & 0xfffffffd;
  FUN_00a13340(1);
  param_1[99] = 0;
  param_1[0xd9] = param_1[0xd9] | 0x100000;
  param_1[0x118] = 0x3dcccccd;
  param_1[400] = 1;
  iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar2 == 0) {
    return 0;
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(0x10,3);
  lib::AllocatedArray<Collision*>::AllocatedArray<Collision*>();
  local_40 = 1;
  local_3c = 1;
  local_38[0] = 1;
  iVar2 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
          StaticArray<Behavior::EffectIntegrationContainer,32>(&local_40);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00a4aed0(5);
  param_1[0x1d8] = iVar2;
  FUN_00410540(0x40,&DAT_01b7bd48);
  FUN_00410540(0x20,&DAT_01b7bd48);
  FUN_00410540(0x40,&DAT_01b7bd48);
  FUN_008609b0(0x40,&DAT_01b7bd48);
  FUN_00a80cf0(0x40,&DAT_01b7bd48);
  FUN_00b88d30();
  iVar2 = FUN_00a7c890();
  if (iVar2 != 0) {
    FUN_00e26e50(1);
  }
  if (param_1[0x13c] != 0) {
    FUN_00a7c910();
  }
  FUN_00e08640(1);
  param_1[0x959] = param_1[0x128];
  FUN_00b84b90();
  param_1[0x2dd] = 1;
  FUN_00a929d0();
  iVar2 = FUN_00a12210(0xf00);
  if (iVar2 != 0) {
    *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 0x1000;
  }
  FUN_00b79e20();
  (**(code **)(*param_1 + 0x314))();
  param_1[0xdf8] = 0;
  param_1[0x21d] = 500;
  param_1[0xdf9] = 0x43960000;
  param_1[0x21c] = 500;
  param_1[0x8ca] = 500;
  param_1[0x9a4] = 0;
  param_1[0x435] = 0;
  param_1[0x96d] = 0;
  param_1[0x3a0] = 0;
  param_1[0x96e] = 0;
  param_1[0x95a] = 0;
  param_1[0x95b] = 0;
  param_1[0x95d] = 0;
  param_1[0x960] = 0;
  param_1[0x961] = 0;
  param_1[0x962] = 0;
  param_1[0x96b] = 0;
  param_1[0x969] = 0;
  param_1[0x96c] = 0;
  param_1[0x96a] = 0;
  param_1[0x987] = 0;
  param_1[0x21e] = 1;
  param_1[0x228] = 1;
  param_1[0x970] = 0xf;
  param_1[0x971] = 0xf;
  param_1[0x224] = 0;
  param_1[0x225] = -0x43dc28f6;
  param_1[0x226] = 0;
  param_1[0x227] = iStack_14;
  param_1[0xaf4] = 0;
  param_1[0xafe] = 0;
  param_1[0xaff] = 0;
  piVar5 = param_1 + 0x2c;
  piVar10 = param_1 + 0x360;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar10 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar10 = piVar10 + 1;
  }
  piVar5 = param_1 + 0x3c;
  piVar10 = param_1 + 0x370;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar10 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar10 = piVar10 + 1;
  }
  param_1[0x380] = 0x3f800000;
  param_1[0x381] = 0x3f800000;
  param_1[0xb08] = 0;
  param_1[0xb09] = 0;
  param_1[0x433] = 0;
  param_1[0x8e1] = 0;
  param_1[0x8e3] = 0;
  param_1[0x22a] = 0x3c23d70a;
  param_1[0xc68] = 0;
  param_1[0xc69] = 0;
  param_1[0xa04] = 0;
  param_1[0xa05] = 0;
  param_1[0xa06] = 0;
  param_1[0xa07] = 0;
  param_1[0x431] = 0;
  param_1[0x432] = 0;
  param_1[0x8e0] = 0;
  param_1[0x8e2] = 0;
  param_1[0x8e4] = 0;
  param_1[0x8e5] = 0;
  param_1[0x9f4] = 0;
  param_1[0x9f6] = 0;
  param_1[0x3d5] = 0;
  param_1[0x4f8] = 0;
  param_1[0x4f9] = 0;
  param_1[0xafc] = 0;
  param_1[0xcd4] = 0;
  param_1[0xb11] = 0;
  param_1[0xb04] = -0x40800000;
  param_1[0xb10] = 0;
  param_1[0xb0e] = 0;
  param_1[0xd06] = 0;
  param_1[0x99c] = 0;
  param_1[0xb0f] = 0;
  param_1[0x99e] = 0;
  param_1[0xd0e] = 0;
  param_1[0x99d] = -0x40800000;
  param_1[0xd0d] = 0;
  param_1[0x99f] = -0x40800000;
  param_1[0xd14] = 0;
  param_1[0xd16] = 0;
  param_1[0xd07] = 0;
  *(undefined1 *)(param_1 + 0xd18) = 0;
  param_1[0xd0f] = 0;
  param_1[0xc61] = 0;
  param_1[0xc65] = 0;
  param_1[0xd09] = 0x3f800000;
  param_1[0xdfb] = 0;
  param_1[0xd08] = 0x3f800000;
  param_1[0xf7b] = 0;
  param_1[0x8dc] = 0;
  param_1[0xc62] = 0;
  param_1[0xc63] = 0;
  param_1[0xc64] = 0x43340000;
  param_1[0x3d1] = 0x43fa0000;
  param_1[0x8dd] = 0;
  param_1[0x8de] = 0;
  param_1[0x8df] = 0;
  param_1[0xe78] = 0;
  param_1[0xe4a] = 0;
  param_1[0xe4b] = 0;
  param_1[0xe79] = -0x40800000;
  param_1[899] = 0;
  param_1[0xee7] = 0;
  param_1[0xe0e] = 0;
  param_1[0xe0f] = 0;
  param_1[0xe10] = 0;
  param_1[0xe15] = 0;
  param_1[0xe11] = -1;
  param_1[0xe16] = 0;
  param_1[0x4ff] = 0;
  *(undefined1 *)(param_1 + 0xb0c) = 0;
  param_1[0xb0b] = 0;
  param_1[0xe18] = 0;
  param_1[0xb01] = -0x40800000;
  param_1[0x300] = 0;
  param_1[0xeef] = 0;
  param_1[0xef1] = 0;
  param_1[0xef2] = -0x40800000;
  param_1[0x2e2] = 0;
  param_1[0x9f8] = 0;
  param_1[0x9f9] = -0x40800000;
  param_1[0x9a0] = 0;
  param_1[0xee6] = 1;
  param_1[0x988] = 0;
  param_1[0x989] = 0;
  param_1[0x98a] = 0;
  param_1[0x98b] = 0;
  param_1[0x990] = 0;
  param_1[0x991] = 0;
  param_1[0xef3] = 0;
  param_1[0x9fa] = 0;
  param_1[0x4a5] = 0;
  param_1[0x4a6] = 0;
  param_1[0x4a4] = 0;
  param_1[0x4a8] = 0;
  param_1[0x4a9] = 0;
  param_1[0x4a7] = 0;
  param_1[0x4ab] = 0;
  param_1[0x4ac] = 0;
  param_1[0x4aa] = 0;
  param_1[0x4ae] = 0;
  param_1[0x4af] = 0;
  param_1[0x4ad] = 0;
  FUN_00a7c950();
  *(undefined2 *)(param_1 + 0x9de) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x277a) = 0xffff;
  *(undefined2 *)(param_1 + 0x9df) = 0xffff;
  param_1[0x429] = 1;
  param_1[0x33c] = 0;
  param_1[0xee5] = -0x40800000;
  FUN_00b7b440(0);
  FUN_00b7c060(0);
  FUN_00b7e820();
  param_1[0xcdd] = 0x42b40000;
  param_1[0xcde] = 0x41a00000;
  param_1[0xcdf] = 0x3e800000;
  param_1[0xce0] = 0x3f800000;
  param_1[0xce1] = 0x40400000;
  param_1[0xce2] = 0x3e23d70a;
  param_1[0xce3] = 0x3e75c28f;
  param_1[0xce4] = 0x3e800000;
  param_1[0xce5] = 0x42c80000;
  param_1[0xce6] = 0x43b40000;
  param_1[0xce7] = 0x40000000;
  param_1[0xce8] = 0x3c23d70a;
  param_1[0xce9] = 0x42340000;
  param_1[0xcec] = 0x3f800000;
  param_1[0xced] = 0x3c23d70a;
  param_1[0xcee] = 0x42340000;
  param_1[0xcef] = 0x3c23d70a;
  param_1[0xcf0] = 0x42f00000;
  param_1[0xcf1] = 0x3d4ccccd;
  param_1[0xcf2] = 0x420c0000;
  param_1[0xcf5] = 0x42c80000;
  param_1[0xcf6] = 0x43960000;
  param_1[0xcf7] = 0x42c80000;
  param_1[0xcf8] = 0x43fa0000;
  param_1[0xcf9] = 0x43fa0000;
  param_1[0xcfa] = 0x3f000000;
  param_1[0xcfb] = 0x41200000;
  param_1[0xcfc] = 0x3f19999a;
  param_1[0xcfd] = 0x3be4c388;
  param_1[0xcfe] = 0x3be4c388;
  param_1[0xcff] = 0x41400000;
  param_1[0xd00] = 0x3d4ccccd;
  param_1[0xd01] = 0x3c8efa35;
  param_1[0xd02] = 0x3ca3d70a;
  param_1[0xd03] = 0x3f000000;
  param_1[0x1030] = 0x42700000;
  param_1[0x1031] = 0x42700000;
  param_1[0x102e] = 0;
  param_1[0x9e9] = 0;
  param_1[0x9ea] = 0;
  param_1[0x790] = 10;
  param_1[0xd04] = 0x3f800000;
  param_1[0xd05] = 0x3f800000;
  param_1[0xc66] = 0x40000000;
  param_1[0xc67] = 0x3f800000;
  param_1[0x9ee] = 0x42440000;
  param_1[0x9ef] = 0x42440000;
  param_1[0x9e7] = 0x44160000;
  param_1[0x9e8] = 0x3e99999a;
  param_1[0x9b1] = 0x3f800000;
  param_1[0x9b2] = 0x3f800000;
  param_1[0x9b4] = 0x3fc00000;
  param_1[0x9b3] = -0x40000000;
  param_1[0xeed] = 0x3f800000;
  param_1[0x1018] = 0x3f4ccccd;
  param_1[0x1019] = 0x3ecccccd;
  param_1[0x101a] = 0x3f4ccccd;
  param_1[0x101b] = 0x3d23d70a;
  param_1[0x101c] = 0x3f4ccccd;
  param_1[0x101d] = 0x3d23d70a;
  param_1[0x101e] = 0x3e99999a;
  param_1[0x101f] = 0x40000000;
  param_1[0x1020] = 0x41400000;
  param_1[0x1021] = 0x42200000;
  param_1[0x1022] = 0x3e4ccccd;
  param_1[0x1023] = 1;
  param_1[0x1024] = 1;
  param_1[0x1025] = 0x40400000;
  param_1[0x1026] = 0x3c23d70a;
  param_1[0x1027] = 0;
  FUN_00c1cee0(0x40600000);
  param_1[0x1028] = 0x3c23d70a;
  param_1[0x102a] = 0x42c80000;
  param_1[0x102b] = 0x41200000;
  param_1[0x102c] = 0x42c60000;
  param_1[0x102d] = 0x40000000;
  param_1[0xe4b] = 0;
  param_1[0xfb8] = 0;
  param_1[0xfe7] = 0;
  param_1[0x14fa] = 0;
  param_1[0x14fb] = 0;
  *(undefined2 *)(param_1 + 0x42a) = 0xffff;
  param_1[0x1500] = 1;
  param_1[0x2fc] = 0;
  FUN_00db8150(param_1[0x13c]);
  DAT_01be8e58 = param_1[0x13c];
  DAT_01be8e54 = param_1;
  param_1[0x141c] = 0;
  iVar2 = FUN_00dd3500(0x178,&DAT_01b7bd48);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = FUN_00de4550("_constant.bxm",0);
    iVar2 = FUN_00bf88f0(uVar3);
  }
  param_1[0x1035] = iVar2;
  param_1[0xf9c] = 0;
  param_1[0xf9d] = 0;
  param_1[0xf9e] = 0;
  param_1[3999] = 0x3f800000;
  param_1[0xf9b] = 0x3f800000;
  param_1[0xf98] = 0;
  param_1[0xf99] = 0;
  param_1[0xf9a] = 0;
  (**(code **)(*param_1 + 0x3e0))(200,0);
  if (param_1[0x13c] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00a7c890();
  }
  iVar4 = FUN_00e26e90();
  if (iVar4 != 0) {
    *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xfffffffb;
  }
  FUN_00abad90();
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  *(undefined1 *)(param_1[0x191] + 6) = 1;
  *(undefined2 *)(param_1[0x191] + 4) = 0;
  *(undefined4 *)(param_1[0x191] + 0x30) = 0x3e99999a;
  *(undefined4 *)(param_1[0x191] + 0x2c) = 0x3f266666;
  FUN_004066f0();
  iStack_48 = param_1[0x14];
  local_44 = param_1[0x15];
  local_40 = param_1[0x16];
  local_3c = param_1[0x17];
  uStack_28 = 0;
  uStack_24 = 0x40200000;
  uStack_20 = 0;
  local_38[0] = 0;
  local_38[1] = 0x3e99999a;
  local_38[2] = 0;
  piVar5 = (int *)FUN_00900480();
  iVar2 = *piVar5;
  uVar3 = FUN_009f8b40(0);
  iVar4 = (**(code **)(iVar2 + 0xc))(&iStack_48,&uStack_28,local_38,0x40a00000,5,uVar3);
  iVar2 = iVar4;
  FUN_008f7f00(iVar4,param_1[0x13c]);
  FUN_004066f0();
  if ((iVar4 == 0) || (uVar1 = *(uint *)(iVar4 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_00ac2c62;
    }
  }
  else {
    puVar7 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar7 = *puVar7 | 1;
    puVar7[2] = puVar7[2] | 0x40;
    if (DAT_01885d68 != 1) {
      iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_00ac2c62:
      piVar5 = (int *)(iVar6 + 4);
      *piVar5 = *piVar5 + -1;
      if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_004066f0();
  if ((iVar4 == 0) || (uVar1 = *(uint *)(iVar4 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_00ac2cda;
    }
  }
  else {
    puVar7 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar7 = *puVar7 | 4;
    puVar7[4] = puVar7[4] | 4;
    if (DAT_01885d68 != 1) {
      iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_00ac2cda:
      piVar5 = (int *)(iVar6 + 4);
      *piVar5 = *piVar5 + -1;
      if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_004066f0();
  if ((iVar4 == 0) || (uVar1 = *(uint *)(iVar4 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_00ac2d73;
    iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar7 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar7 = *puVar7 | 8;
    puVar7[5] = puVar7[5] | 4;
    if (DAT_01885d68 == 1) goto LAB_00ac2d73;
    iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  piVar5 = (int *)(iVar4 + 4);
  *piVar5 = *piVar5 + -1;
  if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_00ac2d73:
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(iVar2);
  FUN_009009c0("qteCheck");
  FUN_00900bd0();
  FUN_0112c440(0x3f800000);
  FUN_00901540(0x1f);
  FUN_00406760();
  iVar2 = FUN_00a82090("vrWallCheck",0x44000,0);
  param_1[0x9a9] = iVar2;
  param_1[0x9ac] = 0;
  param_1[0x9ad] = 0;
  param_1[0x9ae] = 0x3f800000;
  param_1[0x9af] = local_38[0];
  param_1[0x9b0] = 0;
  FUN_00c20290(param_1[0x1d5],param_1[300]);
  (**(code **)(*param_1 + 0x40c))();
  puVar8 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = GetMoneySlotPlBaseDLC::vftable;
    puVar8[1] = param_1;
    puVar9 = puVar8;
  }
  param_1[0x1069] = (int)puVar9;
  FUN_00d89ec0(0xe,puVar9);
  return 1;
}

// 00AC2E70  PlBaseDLC::vf44  size=823  [class]
void __fastcall PlBaseDLC::vf44(int param_1)

{
  int *piVar1;
  
  RayCastManager::getWork(param_1 + 0x26a8);
  if (*(int *)(param_1 + 0x26a4) != 0) {
    FUN_00a805f0();
  }
  *(undefined4 *)(param_1 + 0x26a4) = 0;
  FUN_00dd7270();
  if (*(int *)(param_1 + 0x40d4) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x40d4));
    *(undefined4 *)(param_1 + 0x40d4) = 0;
  }
  if (*(int *)(param_1 + 0x754) != 0) {
    piVar1 = (int *)FUN_00d72970();
    (**(code **)(*piVar1 + 8))(*(undefined4 *)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x754) = 0;
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00a91a00();
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x7c4));
    *(undefined4 *)(param_1 + 0x7c4) = 0;
  }
  FUN_00a934c0();
  FUN_00a933e0();
  FUN_00a93450();
  if (*(undefined4 **)(param_1 + 0x7b8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7b8))(1);
    *(undefined4 *)(param_1 + 0x7b8) = 0;
  }
  FUN_00900ca0();
  FUN_00900ca0();
  FUN_00b7a030();
  RayCastManager::getWork(param_1 + 0x4160);
  RayCastManager::getWork(param_1 + 0x4164);
  RayCastManager::getWork(param_1 + 0x4168);
  RayCastManager::getWork(param_1 + 0x3b90);
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  if (*(int *)(param_1 + 0x1058) != 0) {
    if (*(int *)(param_1 + 0x1058) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x1058),0);
      *(undefined4 *)(param_1 + 0x1058) = 0;
    }
    *(undefined4 *)(param_1 + 0x105c) = 0;
    *(undefined4 *)(param_1 + 0x1060) = 0;
    *(undefined4 *)(param_1 + 0x1064) = *(undefined4 *)(param_1 + 0x1054);
    *(undefined4 *)(param_1 + 0x1068) = *(undefined4 *)(param_1 + 0x1054);
    *(undefined4 *)(param_1 + 0x106c) = *(undefined4 *)(param_1 + 0x1054);
  }
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  if (*(int *)(param_1 + 0x2be0) != 0) {
    *(undefined4 *)(param_1 + 0x2be8) = 0;
    if (*(int *)(param_1 + 0x2bec) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x2be0),0);
      *(undefined4 *)(param_1 + 0x2bec) = 0;
    }
    *(undefined4 *)(param_1 + 0x2be0) = 0;
    *(undefined4 *)(param_1 + 0x2be4) = 0;
  }
  if (*(int *)(param_1 + 0x2c4c) != 0) {
    *(undefined4 *)(param_1 + 0x2c54) = 0;
    if (*(int *)(param_1 + 0x2c58) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x2c4c),0);
      *(undefined4 *)(param_1 + 0x2c58) = 0;
    }
    *(undefined4 *)(param_1 + 0x2c4c) = 0;
    *(undefined4 *)(param_1 + 0x2c50) = 0;
  }
  if (*(int *)(param_1 + 0x1044) != 0) {
    *(undefined4 *)(param_1 + 0x104c) = 0;
    if (*(int *)(param_1 + 0x1050) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x1044),0);
      *(undefined4 *)(param_1 + 0x1050) = 0;
    }
    *(undefined4 *)(param_1 + 0x1044) = 0;
    *(undefined4 *)(param_1 + 0x1048) = 0;
  }
  if (*(int *)(param_1 + 0x3820) != 0) {
    *(undefined4 *)(param_1 + 0x3828) = 0;
    if (*(int *)(param_1 + 0x382c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x3820),0);
      *(undefined4 *)(param_1 + 0x382c) = 0;
    }
    *(undefined4 *)(param_1 + 0x3820) = 0;
    *(undefined4 *)(param_1 + 0x3824) = 0;
  }
  FUN_00b94bd0();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  if (*(int *)(param_1 + 0x5070) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x5070));
    *(undefined4 *)(param_1 + 0x5070) = 0;
  }
  FUN_00e03a70(0,0x3f800000);
  FUN_00e03a70(1,0x3f800000);
  FUN_00e03a70(2,0x3f800000);
  FUN_00ac1f70();
  FUN_00d8a1d0(0xe,*(undefined4 *)(param_1 + 0x41a4));
  Behavior::vf44();
  DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
  return;
}

// 00AC3610  PlBaseDLC::PlBaseDLC  size=18  [class]
undefined4 * __fastcall PlBaseDLC::PlBaseDLC(undefined4 *param_1)

{
  hkpAllCdPointCollector::hkpAllCdPointCollector_34();
  *param_1 = vftable;
  return param_1;
}

// 00AC3630  PlBaseDLC::vf04  size=6  [class]
undefined * PlBaseDLC::vf04(void)

{
  return &DAT_01be9c38;
}

// 00AC3640  PlBaseDLC::vf3CC  size=3  [class]
undefined4 PlBaseDLC::vf3CC(void)

{
  return 0;
}

// 00AC3650  PlBaseDLC::vf3C4  size=1  [class]
void PlBaseDLC::vf3C4(void)

{
  return;
}

// 00AC3660  PlBaseDLC::vf3C8  size=1  [class]
void PlBaseDLC::vf3C8(void)

{
  return;
}

// 00AC3670  PlBaseDLC::vf3F8  size=1  [class]
void PlBaseDLC::vf3F8(void)

{
  return;
}

// 00AC3680  PlBaseDLC::vf3FC  size=1  [class]
void PlBaseDLC::vf3FC(void)

{
  return;
}

// 00AC3690  PlBaseDLC::vf400  size=1  [class]
void PlBaseDLC::vf400(void)

{
  return;
}

// 00AC36A0  PlBaseDLC::vf354  size=3  [class]
undefined4 PlBaseDLC::vf354(void)

{
  return 0;
}

// 00AC36B0  PlBaseDLC::vf35C  size=3  [class]
undefined4 PlBaseDLC::vf35C(void)

{
  return 0;
}

// 00AC36C0  PlBaseDLC::vf368  size=3  [class]
undefined4 PlBaseDLC::vf368(void)

{
  return 0;
}

// 00AC36D0  PlBaseDLC::vf36C  size=3  [class]
undefined4 PlBaseDLC::vf36C(void)

{
  return 0;
}

// 00AC36E0  PlBaseDLC::vf374  size=3  [class]
undefined4 PlBaseDLC::vf374(void)

{
  return 0;
}

// 00AC36F0  PlBaseDLC::vf378  size=3  [class]
undefined4 PlBaseDLC::vf378(void)

{
  return 0;
}

// 00AC3700  PlBaseDLC::vf344  size=3  [class]
undefined4 PlBaseDLC::vf344(void)

{
  return 0;
}

// 00AC3710  PlBaseDLC::vf404  size=3  [class]
undefined4 PlBaseDLC::vf404(void)

{
  return 0;
}

// 00AC3720  PlBaseDLC::vf37C  size=3  [class]
undefined4 PlBaseDLC::vf37C(void)

{
  return 0;
}

// 00AC3730  PlBaseDLC::vf330  size=3  [class]
undefined4 PlBaseDLC::vf330(void)

{
  return 0;
}

// 00AC3740  PlBaseDLC::vf3EC  size=3  [class]
undefined4 PlBaseDLC::vf3EC(void)

{
  return 0;
}

// 00AC3750  PlBaseDLC::vf408  size=3  [class]
undefined4 PlBaseDLC::vf408(void)

{
  return 0;
}

// 00AC3760  PlBaseDLC::vf388  size=3  [class]
void PlBaseDLC::vf388(void)

{
  return;
}

// 00AC3770  PlBaseDLC::vf40C  size=1  [class]
void PlBaseDLC::vf40C(void)

{
  return;
}

// 00AC3780  PlBaseDLC::vf420  size=1  [class]
void PlBaseDLC::vf420(void)

{
  return;
}

// 00AC3790  PlBaseDLC::vf3A0  size=3  [class]
float10 PlBaseDLC::vf3A0(void)

{
  return (float10)1;
}

// 00AC37A0  PlBaseDLC::vf3A4  size=3  [class]
float10 PlBaseDLC::vf3A4(void)

{
  return (float10)1;
}

// 00AC37B0  PlBaseDLC::vf3A8  size=3  [class]
float10 PlBaseDLC::vf3A8(void)

{
  return (float10)1;
}

// 00AC37C0  PlBaseDLC::vf3AC  size=3  [class]
float10 PlBaseDLC::vf3AC(void)

{
  return (float10)1;
}

// 00AC37D0  PlBaseDLC::vf3B4  size=3  [class]
float10 PlBaseDLC::vf3B4(void)

{
  return (float10)1;
}

// 00AC37E0  PlBaseDLC::vf3B8  size=3  [class]
float10 PlBaseDLC::vf3B8(void)

{
  return (float10)1;
}

// 00AC37F0  PlBaseDLC::vf3BC  size=3  [class]
undefined1 PlBaseDLC::vf3BC(void)

{
  return 0;
}

// 00AC3800  PlBaseDLC::vf424  size=3  [class]
undefined4 PlBaseDLC::vf424(void)

{
  return 0;
}

// 00AC3810  PlBaseDLC::vf3D8  size=1  [class]
void PlBaseDLC::vf3D8(void)

{
  return;
}

// 00AC3830  PlBaseDLC::vf00  size=30  [class]
undefined4 __thiscall PlBaseDLC::vf00(undefined4 param_1,byte param_2)

{
  hkpCdPointCollector::hkpCdPointCollector_22();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

