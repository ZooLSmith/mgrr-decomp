// src/enemy/em0312/Em0312.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00597210..00AC1310, 22 functions

#include "mgrr.h"
#include "Em0312.h"

// 00597210  Em0312::vf44  size=145  [class]
void __fastcall Em0312::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  if (*(int *)(param_1 + 0xbf8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
  }
  if (*(int *)(param_1 + 0xbd0) != 0) {
    FUN_00a805f0();
  }
  piVar2 = (int *)(param_1 + 0xbd4);
  iVar1 = 2;
  do {
    if (*piVar2 != 0) {
      FUN_00a805f0();
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  if (*(int *)(param_1 + 0xbf8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
  }
  FUN_00dd7270();
  Behavior::vf44();
  return;
}

// 005972B0  Em0312::thunk_vf48  size=5  [class]
void __fastcall Em0312::thunk_vf48(int *param_1)

{
  BehaviorDebrisActor::vf48();
  (**(code **)(*param_1 + 0x328))(0x3f800000);
  return;
}

// 005972C0  Em0312::vf4C  size=131  [class]
void __fastcall Em0312::vf4C(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 != 0xc) {
    (**(code **)(*param_1 + 100))();
  }
  if (param_1[0x2fe] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
  }
  if (param_1[0x2f4] != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 100))();
  }
  piVar2 = param_1 + 0x2f5;
  iVar1 = 2;
  do {
    if (*piVar2 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar3 + 100))();
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (param_1[0x2fe] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
  }
  Behavior::vf4C();
  return;
}

// 00597370  FUN_00597370  size=237  [callgraph]
void __fastcall FUN_00597370(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x12,0,0x3e4ccccd,0x3f800000,0,0xbf800000,*(undefined4 *)(param_1 + 0xa08));
    if (*(int *)(param_1 + 0xbf8) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
    }
    if (*(int *)(param_1 + 0xbd0) != 0) {
      uVar2 = FUN_00de4550("Em0410_0000.mot",0);
      uVar3 = FUN_00de4550("Em0410_0000_0_seq.bxm",0);
      uVar10 = 0x3f800000;
      uVar9 = 0xbf800000;
      uVar8 = 0;
      uVar7 = 0x3f800000;
      uVar6 = 0;
      uVar5 = 0;
      FUN_00a7c8a0(uVar2,uVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a9efb0(uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
      piVar4 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar4 + 100))();
    }
    if (*(int *)(param_1 + 0xbf8) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 00597460  FUN_00597460  size=404  [callgraph]
void __fastcall FUN_00597460(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  byte *pbVar6;
  bool bVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    pcVar5 = "waterway_start";
    pbVar6 = DAT_018b925c;
    do {
      bVar1 = *pcVar5;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_005974a0:
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_005974a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar5[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_005974a0;
      pcVar5 = pcVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_005974a5:
    if (iVar2 == 0) {
      fVar8 = (float10)FUN_00a92ff0();
      fVar8 = fVar8 + (float10)*(float *)(param_1 + 0xa28);
      *(float *)(param_1 + 0xa28) = (float)fVar8;
      if ((float10)*(float *)(param_1 + 0xa24) <= fVar8) {
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,*(undefined4 *)(param_1 + 0xa08));
        FUN_00a96070(0,0x8000000,1);
        if (*(int *)(param_1 + 0xbf8) != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
        }
        uVar3 = FUN_00de4550("Em031a_0009.mot",0);
        uVar4 = FUN_00de4550("Em031a_0009_0_seq.bxm",0);
        uVar14 = 0x3f800000;
        uVar13 = 0xbf800000;
        uVar12 = 0;
        uVar11 = 0x3f800000;
        uVar10 = 0x3e4ccccd;
        uVar9 = 0;
        FUN_00a7c8a0(uVar3,uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a9efb0(uVar3,uVar4,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14);
        uVar9 = 1;
        uVar4 = 0x8000000;
        uVar3 = 0;
        FUN_00a7c8a0(0,0x8000000,1);
        FUN_00a96070(uVar3,uVar4,uVar9);
        if (*(int *)(param_1 + 0xbf8) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
        }
      }
    }
  }
  else {
    iVar2 = FUN_00a8cac0();
    if ((iVar2 == 1) && (iVar2 = FUN_00a959f0(0), 0x26 < iVar2)) {
      FUN_00a8caf0(9,0,0,0);
      *(undefined4 *)(param_1 + 0x940) = 0;
      return;
    }
  }
  return;
}

// 00597600  FUN_00597600  size=533  [callgraph]
void __fastcall FUN_00597600(int *param_1)

{
  code *pcVar1;
  float10 fVar2;
  float10 fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar4 = FUN_00a8cac0();
  if (iVar4 == 0) {
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,param_1[0x282]);
    if (param_1[0x2fe] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    uVar5 = FUN_00de4550("Em031a_0001.mot",0);
    uVar6 = FUN_00de4550("Em031a_0001_0_seq.bxm",0);
    uVar16 = 0x3f800000;
    uVar15 = 0xbf800000;
    uVar14 = 0;
    uVar13 = 0x3f800000;
    uVar12 = 0x3e4ccccd;
    uVar11 = 0;
    FUN_00a7c8a0(uVar5,uVar6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9efb0(uVar5,uVar6,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16);
    if (param_1[0x2fe] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24a] = 0;
    param_1[0x254] = 0;
    piVar7 = (int *)(param_1[0x250] * 0x10 + param_1[0x2b1]);
    param_1[0x290] = *piVar7;
    param_1[0x291] = piVar7[1];
    param_1[0x292] = piVar7[2];
    param_1[0x293] = piVar7[3];
    FUN_00a8e880(param_1 + 0x290);
  }
  else {
    iVar4 = FUN_00a8cac0();
    if (iVar4 == 1) {
      FUN_00a925a0(&local_20);
      fVar9 = (float10)FUN_00a92ff0();
      fVar9 = fVar9 * (float10)(float)param_1[0x283];
      fVar10 = (float10)local_20;
      pcVar1 = *(code **)(*param_1 + 0x68);
      local_20 = (float)(fVar10 * fVar9);
      fVar2 = (float10)fStack_1c;
      fStack_1c = (float)(fVar9 * fVar2);
      fVar3 = (float10)fStack_18;
      fStack_18 = (float)(fVar9 * fVar3);
      fStack_14 = (float)((float10)fStack_14 * fVar9);
      param_1[0x14] = (int)(float)((float10)(float)param_1[0x14] + fVar10 * fVar9);
      param_1[0x15] = (int)(float)(fVar9 * fVar2 + (float10)(float)param_1[0x15]);
      param_1[0x16] = (int)(float)(fVar9 * fVar3 + (float10)(float)param_1[0x16]);
      pfVar8 = (float *)(*pcVar1)();
      if (SQRT(((float)param_1[0x292] - pfVar8[2]) * ((float)param_1[0x292] - pfVar8[2]) +
               ((float)param_1[0x290] - *pfVar8) * ((float)param_1[0x290] - *pfVar8)) < 0.8) {
        FUN_00a8caf0(7,0,0,0);
      }
    }
  }
  FUN_00a8e880(param_1 + 0x290);
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3db2b8c2,0);
  return;
}

// 00597820  FUN_00597820  size=1306  [callgraph]
void __fastcall FUN_00597820(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0,0x3f555555,param_1[0x282]);
    FUN_00a96070(0,0x8000000,1);
    if (param_1[0x2fe] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    uVar2 = FUN_00de4550("Em031a_0003.mot",0);
    uVar3 = FUN_00de4550("Em031a_0003_0_seq.bxm",0);
    uVar11 = 0x3f800000;
    uVar10 = 0xbf800000;
    uVar9 = 0;
    uVar8 = 0x3f800000;
    uVar7 = 0x3e4ccccd;
    uVar6 = 0;
    FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9efb0(uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
    uVar6 = 1;
    uVar3 = 0x8000000;
    uVar2 = 0;
    FUN_00a7c8a0(0,0x8000000,1);
    FUN_00a96070(uVar2,uVar3,uVar6);
    uVar6 = 1;
    uVar3 = 0x80;
    uVar2 = 0;
    FUN_00a7c8a0(0,0x80,1);
    FUN_00a96070(uVar2,uVar3,uVar6);
    if (param_1[0x2fe] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
LAB_0059793d:
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    iVar1 = FUN_00a959f0(0);
    if (65.0 <= (float)iVar1) {
      piVar4 = (int *)(param_1[0x250] * 0x10 + param_1[0x2b1]);
      param_1[0x290] = *piVar4;
      param_1[0x291] = piVar4[1];
      param_1[0x292] = piVar4[2];
      param_1[0x293] = piVar4[3];
      FUN_00a925a0(&local_20);
      fVar5 = (float10)FUN_00a92ff0();
      fVar5 = fVar5 * (float10)0.18;
      param_1[0x14] = (int)(float)((float10)(float)param_1[0x14] + (float10)local_20 * fVar5);
      param_1[0x15] = param_1[0x15];
      param_1[0x16] = (int)(float)((float10)fStack_18 * fVar5 + (float10)(float)param_1[0x16]);
      param_1[0x17] = (int)(float)((float10)fStack_14 * fVar5 + (float10)(float)param_1[0x17]);
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 1) {
      FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      if (param_1[0x2fe] != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
      uVar2 = FUN_00de4550("Em031a_0004.mot",0);
      uVar3 = FUN_00de4550("Em031a_0004_0_seq.bxm",0);
      uVar11 = 0x3f800000;
      uVar10 = 0xbf800000;
      uVar9 = 0;
      uVar8 = 0x3f800000;
      uVar7 = 0x3e4ccccd;
      uVar6 = 0;
      FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a9efb0(uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
      if (param_1[0x2fe] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x228] = 0;
      return;
    }
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 2) {
      FUN_00a925a0(&local_20);
      fVar5 = (float10)FUN_00a92ff0();
      fVar5 = fVar5 * (float10)0.18;
      local_20 = (float)((float10)local_20 * fVar5);
      fStack_18 = (float)((float10)fStack_18 * fVar5);
      fStack_14 = (float)(fVar5 * (float10)fStack_14);
      fStack_1c = 0.0;
      iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar1 == 1) {
        param_1[0x228] = 1;
        param_1[0x225] = 0;
      }
      iVar1 = (**(code **)(*param_1 + 0x324))();
      if (iVar1 != 1) {
        param_1[0x14] = (int)((float)param_1[0x14] + local_24);
        param_1[0x15] = (int)((float)param_1[0x15] + local_20);
        param_1[0x16] = (int)((float)param_1[0x16] + fStack_1c);
        param_1[0x17] = (int)((float)param_1[0x17] + fStack_18);
        return;
      }
      FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,param_1[0x282]);
      FUN_00a96070(0,0x8000000,1);
      FUN_00a96070(0,0x80,1);
      if (param_1[0x2fe] != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
      uVar2 = FUN_00de4550("Em031a_0005.mot",0);
      uVar3 = FUN_00de4550("Em031a_0005_0_seq.bxm",0);
      uVar11 = 0x3f800000;
      uVar10 = 0xbf800000;
      uVar9 = 0;
      uVar8 = 0x3f800000;
      uVar7 = 0x3e4ccccd;
      uVar6 = 0;
      FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a9efb0(uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
      uVar6 = 1;
      uVar3 = 0x8000000;
      uVar2 = 0;
      FUN_00a7c8a0(0,0x8000000,1);
      FUN_00a96070(uVar2,uVar3,uVar6);
      uVar6 = 1;
      uVar3 = 0x80;
      uVar2 = 0;
      FUN_00a7c8a0(0,0x80,1);
      FUN_00a96070(uVar2,uVar3,uVar6);
      if (param_1[0x2fe] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      goto LAB_0059793d;
    }
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 3) {
      iVar1 = FUN_00a959f0(0);
      if (22.0 <= (float)iVar1) {
        (**(code **)(*param_1 + 0x20))();
        FUN_00a944d0();
        if (param_1[0x2fe] != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
        }
        piVar4 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar4 + 0x20))();
        FUN_00a805f0();
        if (param_1[0x2fe] != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
        }
        E3_EnemyBoardDebrisSokushi::vf4C();
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
  }
  return;
}

// 00597D40  FUN_00597d40  size=392  [callgraph]
void __fastcall FUN_00597d40(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    FUN_00aa4080(4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    if (param_1[0x2fe] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    uVar4 = FUN_00de4550("Em031a_0000.mot",0);
    uVar5 = FUN_00de4550("Em031a_0000_0_seq.bxm",0);
    uVar13 = 0x3f800000;
    uVar12 = 0xbf800000;
    uVar11 = 0;
    uVar10 = 0x3f800000;
    uVar9 = 0;
    uVar8 = 0;
    FUN_00a7c8a0(uVar4,uVar5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9efb0(uVar4,uVar5,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
    if (param_1[0x2fe] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 1) {
    piVar6 = (int *)FUN_00c13920();
    (**(code **)(*piVar6 + 0x28))(0xffffffff);
    pfVar7 = (float *)FUN_00a7c8b0();
    fVar1 = *pfVar7;
    fVar2 = pfVar7[2];
    pfVar7 = (float *)(**(code **)(*param_1 + 0x68))();
    if (SQRT((fVar2 - pfVar7[2]) * (fVar2 - pfVar7[2]) + (fVar1 - *pfVar7) * (fVar1 - *pfVar7)) <
        (float)param_1[0x281]) {
      param_1[0x250] = param_1[0x250] + 1;
      piVar6 = (int *)(param_1[0x250] * 0x10 + param_1[0x2b1]);
      param_1[0x290] = *piVar6;
      param_1[0x291] = piVar6[1];
      param_1[0x292] = piVar6[2];
      param_1[0x293] = piVar6[3];
      FUN_00a8e880(param_1 + 0x290);
      FUN_00a8cb50(5);
      param_1[0x187] = 0;
    }
  }
  return;
}

// 00597ED0  FUN_00597ed0  size=802  [callgraph]
void __fastcall FUN_00597ed0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int *piVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00a8e880(param_1 + 0x290);
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,param_1[0x282]);
    if (param_1[0x2fe] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    uVar3 = FUN_00de4550("Em031a_0001.mot",0);
    uVar4 = FUN_00de4550("Em031a_0001_0_seq.bxm",0);
    uVar13 = 0x3f800000;
    uVar12 = 0xbf800000;
    uVar11 = 0;
    uVar10 = 0x3f800000;
    uVar9 = 0x3e4ccccd;
    uVar8 = 0;
    FUN_00a7c8a0(uVar3,uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9efb0(uVar3,uVar4,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
    if (param_1[0x2fe] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_005981b1;
  }
  if (param_1[0x250] != 0) {
    FUN_00a925a0(&local_20);
    if (param_1[0x250] == 6) {
      fVar7 = (float10)FUN_00a92ff0();
      fVar7 = (float10)(float)param_1[0x283] * (float10)3.0 * fVar7;
    }
    else {
      fVar7 = (float10)FUN_00a92ff0();
      fVar7 = fVar7 * (float10)(float)param_1[0x283];
    }
    param_1[0x14] = (int)(float)((float10)(float)param_1[0x14] + (float10)local_20 * fVar7);
    param_1[0x15] = (int)(float)((float10)(float)param_1[0x15] + fVar7 * (float10)fStack_1c);
    param_1[0x16] = (int)(float)(fVar7 * (float10)fStack_18 + (float10)(float)param_1[0x16]);
  }
  pfVar5 = (float *)(**(code **)(*param_1 + 0x68))();
  piVar1 = param_1 + 0x290;
  if (0.8 <= SQRT(((float)param_1[0x292] - pfVar5[2]) * ((float)param_1[0x292] - pfVar5[2]) +
                  ((float)param_1[0x290] - *pfVar5) * ((float)param_1[0x290] - *pfVar5)))
  goto LAB_005981b1;
  iVar2 = param_1[0x250];
  if (iVar2 == 0) {
    param_1[0x250] = 1;
    uVar3 = 2;
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 == 4) {
        iVar2 = param_1[0x2b1];
        param_1[0x250] = 5;
        *piVar1 = *(int *)(iVar2 + 0x50);
        param_1[0x291] = *(int *)(iVar2 + 0x54);
        param_1[0x292] = *(int *)(iVar2 + 0x58);
        param_1[0x293] = *(int *)(iVar2 + 0x5c);
        FUN_00a8e880(piVar1);
        if (*(char *)((int)param_1 + 0xa36) == '\x01') {
LAB_005981aa:
          uVar3 = 3;
        }
        else {
          uVar3 = 8;
        }
      }
      else {
        if (iVar2 != 6) {
          if (iVar2 != 7) goto LAB_005981b1;
          iVar2 = param_1[0x2b1];
          param_1[0x250] = 8;
          *piVar1 = *(int *)(iVar2 + 0x80);
          param_1[0x291] = *(int *)(iVar2 + 0x84);
          param_1[0x292] = *(int *)(iVar2 + 0x88);
          param_1[0x293] = *(int *)(iVar2 + 0x8c);
          FUN_00a8e880(piVar1);
          goto LAB_005981aa;
        }
        iVar2 = param_1[0x2b1];
        param_1[0x250] = 7;
        *piVar1 = *(int *)(iVar2 + 0x70);
        param_1[0x291] = *(int *)(iVar2 + 0x74);
        param_1[0x292] = *(int *)(iVar2 + 0x78);
        param_1[0x293] = *(int *)(iVar2 + 0x7c);
        FUN_00a8e880(piVar1);
        uVar3 = 2;
      }
      FUN_00a8caf0(uVar3,0,0,0);
      goto LAB_005981b1;
    }
    param_1[0x250] = 4;
    uVar3 = 1;
  }
  FUN_00a8caf0(uVar3,0,0,0);
  piVar6 = (int *)(param_1[0x250] * 0x10 + param_1[0x2b1]);
  *piVar1 = *piVar6;
  param_1[0x291] = piVar6[1];
  param_1[0x292] = piVar6[2];
  param_1[0x293] = piVar6[3];
LAB_005981b1:
  FUN_00a8e880(param_1 + 0x290);
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3db2b8c2,0);
  return;
}

// 00598200  FUN_00598200  size=1311  [callgraph]
void __fastcall FUN_00598200(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0,0x3f555555,(float)param_1[0x282] * 1.5);
    FUN_00a96070(0,0x8000000,1);
    if (param_1[0x2fe] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    uVar2 = FUN_00de4550("Em031a_0003.mot",0);
    uVar3 = FUN_00de4550("Em031a_0003_0_seq.bxm",0);
    uVar11 = 0x3f800000;
    uVar10 = 0x3f555555;
    uVar9 = 0;
    uVar8 = 0x3f800000;
    uVar7 = 0x3e4ccccd;
    uVar6 = 0;
    FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0x3f555555,0x3f800000);
    FUN_00a9efb0(uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
    uVar6 = 1;
    uVar3 = 0x8000000;
    uVar2 = 0;
    FUN_00a7c8a0(0,0x8000000,1);
    FUN_00a96070(uVar2,uVar3,uVar6);
    uVar6 = 1;
    uVar3 = 0x80;
    uVar2 = 0;
    FUN_00a7c8a0(0,0x80,1);
    FUN_00a96070(uVar2,uVar3,uVar6);
    if (param_1[0x2fe] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
LAB_00598323:
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    iVar1 = FUN_00a959f0(0);
    if ((float)iVar1 < 80.0) {
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    }
    (**(code **)(*param_1 + 0x318))();
    iVar1 = param_1[0x1d9];
    if (*(int *)(iVar1 + 0x104) != 1) {
      *(undefined4 *)(iVar1 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      if (param_1[0x2fe] != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
      uVar2 = FUN_00de4550("Em031a_0004.mot",0);
      uVar3 = FUN_00de4550("Em031a_0004_0_seq.bxm",0);
      uVar11 = 0x3f800000;
      uVar10 = 0xbf800000;
      uVar9 = 0;
      uVar8 = 0x3f800000;
      uVar7 = 0x3e4ccccd;
      uVar6 = 0;
      FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a9efb0(uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
      if (param_1[0x2fe] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x228] = 0;
      return;
    }
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 2) {
      FUN_00a925a0(&local_30);
      fVar5 = (float10)FUN_00a92ff0();
      fVar5 = fVar5 * (float10)0.18;
      local_30 = (float)((float10)local_30 * fVar5);
      fStack_28 = (float)((float10)fStack_28 * fVar5);
      fStack_24 = (float)(fVar5 * (float10)fStack_24);
      fStack_2c = 0.0;
      if (param_1[0x1d9] != 0) {
        fStack_1c = *(float *)(*(int *)(param_1[0x1d9] + 0xd0) + 4);
        iVar1 = FUN_008e2740();
        if ((fStack_1c <= 0.0) && (iVar1 == 1)) {
          param_1[0x225] = 0;
          param_1[0x228] = 1;
        }
      }
      iVar1 = (**(code **)(*param_1 + 0x324))();
      if (iVar1 != 1) {
        param_1[0x14] = (int)((float)param_1[0x14] + local_30);
        param_1[0x15] = (int)((float)param_1[0x15] + fStack_2c);
        param_1[0x16] = (int)((float)param_1[0x16] + fStack_28);
        param_1[0x17] = (int)((float)param_1[0x17] + fStack_24);
        return;
      }
      FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,param_1[0x282]);
      FUN_00a96070(0,0x8000000,1);
      if (param_1[0x2fe] != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
      uVar2 = FUN_00de4550("Em031a_0005.mot",0);
      uVar3 = FUN_00de4550("Em031a_0005_0_seq.bxm",0);
      uVar11 = 0x3f800000;
      uVar10 = 0xbf800000;
      uVar9 = 0;
      uVar8 = 0x3f800000;
      uVar7 = 0x3e4ccccd;
      uVar6 = 0;
      FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a9efb0(uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
      uVar6 = 1;
      uVar3 = 0x8000000;
      uVar2 = 0;
      FUN_00a7c8a0(0,0x8000000,1);
      FUN_00a96070(uVar2,uVar3,uVar6);
      if (param_1[0x2fe] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      goto LAB_00598323;
    }
    iVar1 = FUN_00a8cac0();
    if ((iVar1 == 3) && (iVar1 = FUN_00a959f0(0), 35.0 <= (float)iVar1)) {
      if (param_1[0x250] == 7) {
        FUN_00a8caf0(1,0,0,0);
        return;
      }
      iVar1 = param_1[0x250] + 1;
      param_1[0x250] = iVar1;
      piVar4 = (int *)(iVar1 * 0x10 + param_1[0x2b1]);
      param_1[0x290] = *piVar4;
      param_1[0x291] = piVar4[1];
      param_1[0x292] = piVar4[2];
      param_1[0x293] = piVar4[3];
      FUN_00a8e880(param_1 + 0x290);
      FUN_00a8caf0(3,0,0,0);
    }
  }
  return;
}

// 00598720  FUN_00598720  size=1840  [callgraph]
void __fastcall FUN_00598720(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0xa37) = 0;
    FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,*(undefined4 *)(param_1 + 0xa08));
    if (*(int *)(param_1 + 0xbf8) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
    }
    uVar2 = FUN_00de4550("Em031a_0000.mot",0);
    uVar3 = FUN_00de4550("Em031a_0000_0_seq.bxm",0);
    uVar11 = 0x3f800000;
    uVar9 = 0xbf800000;
    uVar8 = 0;
    uVar7 = 0x3f800000;
    uVar6 = 0x3e4ccccd;
    uVar5 = 0;
    FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9efb0(uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11);
    if (*(int *)(param_1 + 0xbf8) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    goto LAB_00598dc8;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x940) == 3) {
      iVar1 = FUN_00a952e0(0,0x3f800000);
      if (iVar1 != 1) {
        return;
      }
      FUN_00aa4080(6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,*(undefined4 *)(param_1 + 0xa08));
      FUN_00a96070(0,0x8000000,1);
      if (*(int *)(param_1 + 0xbf8) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
      }
      uVar2 = FUN_00de4550("Em031a_0002.mot",0);
      pcVar10 = "Em031a_0002_0_seq.bxm";
LAB_00598d59:
      uVar5 = FUN_00de4550(pcVar10,0);
      uVar3 = 0x3f800000;
    }
    else {
      if (*(int *)(param_1 + 0x940) != 5) {
        *(undefined4 *)(param_1 + 0x61c) = 3;
        return;
      }
      iVar1 = FUN_00a952e0(0,0x3f800000);
      if (iVar1 != 1) {
        return;
      }
      FUN_00aa4080(6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,*(undefined4 *)(param_1 + 0xa08));
      FUN_00a96070(0,0x8000000,1);
      if (*(int *)(param_1 + 0xbf8) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
      }
      uVar2 = FUN_00de4550("Em031a_0002.mot",0);
      uVar5 = FUN_00de4550("Em031a_0002_0_seq.bxm",0);
      uVar3 = *(undefined4 *)(param_1 + 0xa08);
    }
    uVar11 = 0xbf800000;
    uVar9 = 0;
    uVar8 = 0x3f800000;
    uVar7 = 0x3e4ccccd;
    uVar6 = 0;
    FUN_00a7c8a0(uVar2,uVar5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,uVar3);
    FUN_00a9efb0(uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar3);
    uVar5 = 1;
    uVar3 = 0x8000000;
    uVar2 = 0;
    FUN_00a7c8a0(0,0x8000000,1);
    FUN_00a96070(uVar2,uVar3,uVar5);
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 != 2) {
      iVar1 = FUN_00a8cac0();
      if (iVar1 == 3) {
        if (*(int *)(param_1 + 0x940) == 3) {
          if (*(int *)(param_1 + 0x620) == 0) {
            FUN_00aa4080(0xe,0,0x3e4ccccd,0x3f800000,0,0xbf800000,*(undefined4 *)(param_1 + 0xa08));
            FUN_00a96070(0,0x8000000,1);
            if (*(int *)(param_1 + 0xbf8) != 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
            }
            uVar2 = FUN_00de4550("Em031a_0010.mot",0);
            uVar3 = FUN_00de4550("Em031a_0010_0_seq.bxm",0);
            uVar11 = 0x3f800000;
            uVar9 = 0xbf800000;
            uVar8 = 0;
            uVar7 = 0x3f800000;
            uVar6 = 0x3e4ccccd;
            uVar5 = 0;
            FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
            FUN_00a9efb0(uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11);
            uVar5 = 1;
            uVar3 = 0x8000000;
            uVar2 = 0;
            FUN_00a7c8a0(0,0x8000000,1);
            FUN_00a96070(uVar2,uVar3,uVar5);
            if (*(int *)(param_1 + 0xbf8) != 0) {
              LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
            }
            *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
          }
          else {
            iVar1 = FUN_00a94ce0(0);
            if ((iVar1 == 1) && (*(int *)(param_1 + 0x624) == 0)) {
              FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,*(undefined4 *)(param_1 + 0xa08));
              if (*(int *)(param_1 + 0xbf8) != 0) {
                EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
              }
              uVar2 = FUN_00de4550("Em031a_0000.mot",0);
              uVar3 = FUN_00de4550("Em031a_0000_0_seq.bxm",0);
              uVar11 = 0x3f800000;
              uVar9 = 0xbf800000;
              uVar8 = 0;
              uVar7 = 0x3f800000;
              uVar6 = 0x3e4ccccd;
              uVar5 = 0;
              FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
              FUN_00a9efb0(uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11);
              if (*(int *)(param_1 + 0xbf8) != 0) {
                LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
              }
              *(int *)(param_1 + 0x624) = *(int *)(param_1 + 0x624) + 1;
            }
            fVar4 = (float10)FUN_00a92ff0();
            fVar4 = fVar4 + (float10)*(float *)(param_1 + 0x92c);
            *(float *)(param_1 + 0x92c) = (float)fVar4;
            if ((float10)600.0 < fVar4) {
              *(undefined4 *)(param_1 + 0x92c) = 0;
              *(undefined4 *)(param_1 + 0x620) = 0;
              *(undefined4 *)(param_1 + 0x624) = 0;
            }
          }
          if (*(char *)(param_1 + 0xa35) == '\x01') {
            *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
            return;
          }
        }
        else if ((*(int *)(param_1 + 0x940) == 5) && (*(char *)(param_1 + 0xa36) == '\x01')) {
          *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
          return;
        }
        return;
      }
      iVar1 = FUN_00a8cac0();
      if (iVar1 != 4) {
        iVar1 = FUN_00a8cac0();
        if (iVar1 != 5) {
          return;
        }
        if (*(int *)(param_1 + 0x940) == 3) {
          iVar1 = FUN_00a959f0(0);
          if ((float)iVar1 < 40.0) {
            return;
          }
          FUN_00a8caf0(1,0,0,0);
          return;
        }
        if (*(int *)(param_1 + 0x940) != 5) {
          return;
        }
        if (*(char *)(param_1 + 0xa37) != '\0') {
          FUN_00a8caf0(10,0,0,0);
          return;
        }
        FUN_00a8caf0(3,0,0,0);
        return;
      }
      if (*(int *)(param_1 + 0x940) == 5) {
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        *(undefined1 *)(param_1 + 0xa37) = 1;
        return;
      }
      FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,*(float *)(param_1 + 0xa08) * 1.5);
      FUN_00a96070(0,0x8000000,1);
      if (*(int *)(param_1 + 0xbf8) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
      }
      uVar2 = FUN_00de4550("Em031a_0009.mot",0);
      pcVar10 = "Em031a_0009_0_seq.bxm";
      goto LAB_00598d59;
    }
    iVar1 = FUN_00a959f0(0);
    if (iVar1 < 0x3c) {
      return;
    }
    FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,*(undefined4 *)(param_1 + 0xa08));
    if (*(int *)(param_1 + 0xbf8) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
    }
    uVar2 = FUN_00de4550("Em031a_0000.mot",0);
    uVar3 = FUN_00de4550("Em031a_0000_0_seq.bxm",0);
    uVar11 = 0x3f800000;
    uVar9 = 0xbf800000;
    uVar8 = 0;
    uVar7 = 0x3f800000;
    uVar6 = 0x3e4ccccd;
    uVar5 = 0;
    FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9efb0(uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11);
  }
  if (*(int *)(param_1 + 0xbf8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbe0));
  }
LAB_00598dc8:
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

// 00598E50  FUN_00598e50  size=1345  [callgraph]
void __fastcall FUN_00598e50(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,param_1[0x282]);
    FUN_00a96070(0,0x8000000,1);
    if (param_1[0x2fe] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    uVar2 = FUN_00de4550("Em031a_0003.mot",0);
    uVar3 = FUN_00de4550("Em031a_0003_0_seq.bxm",0);
    uVar11 = 0x3f800000;
    uVar10 = 0xbf800000;
    uVar9 = 0;
    uVar8 = 0x3f800000;
    uVar7 = 0x3e4ccccd;
    uVar6 = 0;
    FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9efb0(uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
    uVar6 = 1;
    uVar3 = 0x8000000;
    uVar2 = 0;
    FUN_00a7c8a0(0,0x8000000,1);
    FUN_00a96070(uVar2,uVar3,uVar6);
    uVar6 = 1;
    uVar3 = 0x80;
    uVar2 = 0;
    FUN_00a7c8a0(0,0x80,1);
    FUN_00a96070(uVar2,uVar3,uVar6);
    if (param_1[0x2fe] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    iVar1 = param_1[0x2b1];
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 1;
    param_1[0x290] = *(int *)(iVar1 + 0x10);
    param_1[0x291] = *(int *)(iVar1 + 0x14);
    param_1[0x292] = *(int *)(iVar1 + 0x18);
    param_1[0x293] = *(int *)(iVar1 + 0x1c);
    FUN_00a8e880(param_1 + 0x290);
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    iVar1 = FUN_00a959f0(0);
    if (50.0 <= (float)iVar1) {
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    }
    (**(code **)(*param_1 + 0x318))();
    iVar1 = param_1[0x1d9];
    if (*(int *)(iVar1 + 0x104) != 1) {
      *(undefined4 *)(iVar1 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      if (param_1[0x2fe] != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
      uVar2 = FUN_00de4550("Em031a_0004.mot",0);
      uVar3 = FUN_00de4550("Em031a_0004_0_seq.bxm",0);
      uVar11 = 0x3f800000;
      uVar10 = 0xbf800000;
      uVar9 = 0;
      uVar8 = 0x3f800000;
      uVar7 = 0x3e4ccccd;
      uVar6 = 0;
      FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a9efb0(uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
      if (param_1[0x2fe] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x228] = 0;
      return;
    }
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 2) {
      FUN_00a925a0(&local_20);
      fVar5 = (float10)FUN_00a92ff0();
      fVar5 = fVar5 * (float10)0.18;
      local_20 = (float)((float10)local_20 * fVar5);
      fStack_18 = (float)((float10)fStack_18 * fVar5);
      fStack_14 = (float)(fVar5 * (float10)fStack_14);
      fStack_1c = 0.0;
      iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar1 == 1) {
        param_1[0x228] = 1;
        param_1[0x225] = 0;
      }
      iVar1 = (**(code **)(*param_1 + 0x324))();
      if (iVar1 == 1) {
        FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,param_1[0x282]);
        FUN_00a96070(0,0x8000000,1);
        FUN_00a96070(0,0x80,1);
        if (param_1[0x2fe] != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
        }
        uVar2 = FUN_00de4550("Em031a_0005.mot",0);
        uVar3 = FUN_00de4550("Em031a_0005_0_seq.bxm",0);
        uVar11 = 0x3f800000;
        uVar10 = 0xbf800000;
        uVar9 = 0;
        uVar8 = 0x3f800000;
        uVar7 = 0x3e4ccccd;
        uVar6 = 0;
        FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a9efb0(uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
        uVar6 = 1;
        uVar3 = 0x8000000;
        uVar2 = 0;
        FUN_00a7c8a0(0,0x8000000,1);
        FUN_00a96070(uVar2,uVar3,uVar6);
        uVar6 = 1;
        uVar3 = 0x80;
        uVar2 = 0;
        FUN_00a7c8a0(0,0x80,1);
        FUN_00a96070(uVar2,uVar3,uVar6);
        if (param_1[0x2fe] != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
        }
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      param_1[0x14] = (int)((float)param_1[0x14] + local_24);
      param_1[0x15] = (int)(local_20 + (float)param_1[0x15]);
      param_1[0x16] = (int)(fStack_1c + (float)param_1[0x16]);
      param_1[0x17] = (int)(fStack_18 + (float)param_1[0x17]);
      return;
    }
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 3) {
      iVar1 = FUN_00a959f0(0);
      if (22.0 <= (float)iVar1) {
        param_1[0x250] = param_1[0x250] + 1;
        piVar4 = (int *)(param_1[0x250] * 0x10 + param_1[0x2b1]);
        param_1[0x290] = *piVar4;
        param_1[0x291] = piVar4[1];
        param_1[0x292] = piVar4[2];
        param_1[0x293] = piVar4[3];
        FUN_00a8e880(param_1 + 0x290);
        FUN_00a8caf0(3,0,0,0);
      }
    }
  }
  return;
}

// 005993A0  FUN_005993a0  size=744  [callgraph]
void __fastcall FUN_005993a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float afStack_38 [2];
  float fStack_30;
  int aiStack_2c [2];
  int iStack_24;
  float local_20;
  float local_1c;
  float local_18;
  
  switch(param_1[0x187]) {
  case 0:
    iVar1 = FUN_00d46690((char)param_1[0x28c]);
    if (iVar1 != 0) {
      uVar2 = FUN_00de4550("Em0312_0100.mot",0);
      uVar3 = FUN_00de4550("Em0312_0100_0_seq.bxm",0);
      FUN_00a9efb0(uVar2,uVar3,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a5dcc0(iVar1);
      (**(code **)(*param_1 + 100))();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0;
      return;
    }
    FUN_00a8caf0(0,0,0,0);
    return;
  case 1:
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      uVar2 = FUN_00de4550("Em0312_0101.mot",0);
      uVar3 = FUN_00de4550("Em0312_0101_0_seq.bxm",0);
      FUN_00a9efb0(uVar2,uVar3,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
  case 2:
    local_20 = (float)param_1[0x14];
    local_1c = (float)param_1[0x15];
    local_18 = (float)param_1[0x16];
    (**(code **)(*param_1 + 100))();
    fVar4 = (float10)FUN_00a581b0(aiStack_2c,
                                  SQRT(((float)param_1[0x16] - local_18) *
                                       ((float)param_1[0x16] - local_18) +
                                       ((float)param_1[0x15] - local_1c) *
                                       ((float)param_1[0x15] - local_1c) +
                                       ((float)param_1[0x14] - local_20) *
                                       ((float)param_1[0x14] - local_20)),param_1[0x249]);
    param_1[0x249] = (int)(float)fVar4;
    FUN_00a585a0(afStack_38,0,(float)fVar4);
    fVar4 = (float10)fpatan((float10)afStack_38[0],(float10)fStack_30);
    param_1[0x25] = (int)(float)fVar4;
    param_1[0x14] = aiStack_2c[0];
    param_1[0x16] = iStack_24;
    iVar1 = FUN_00a54a60(param_1[0x249]);
    if (iVar1 != 0) {
      uVar2 = FUN_00de4550("Em0312_0102.mot",0);
      uVar3 = FUN_00de4550("Em0312_0102_0_seq.bxm",0);
      FUN_00a9efb0(uVar2,uVar3,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    (**(code **)(*param_1 + 100))();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      uVar2 = FUN_00de4550("Em0310_0000.mot",0);
      uVar3 = FUN_00de4550("Em0310_0000_0_seq.bxm",0);
      FUN_00a9efb0(uVar2,uVar3,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    (**(code **)(*param_1 + 100))();
  }
  return;
}

// 0059A0A0  Em0312::startup  size=303  [class]
undefined4 __fastcall Em0312::startup(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = BehaviorAppBase::startup();
  if (iVar1 != 0) {
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      param_1[0x289] = 0x439b0000;
      param_1[0x28a] = 0;
      if (param_1[0x2b1] != 0) {
        param_1[0x2b2] = 0;
      }
      param_1[0x2f4] = 0;
      param_1[0x2f5] = 0;
      param_1[0x2f6] = 0;
      param_1[0x28b] = 0;
      FUN_00dd7240();
      param_1[0x21c] = 100;
      *(undefined2 *)((int)param_1 + 0xa35) = 0;
      *(undefined1 *)(param_1 + 0x28d) = 0;
      piVar2 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(piVar2);
      uVar3 = 1;
      FUN_00a92f90(1);
      FUN_00e26e50(uVar3);
      if (param_1[300] == 0x2031b) {
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(0x2031b,0x20312);
      }
      FUN_00aa4080(4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      (**(code **)(*param_1 + 100))();
      iVar1 = FUN_00a92f90();
      *(uint *)(iVar1 + 0x94) = *(uint *)(iVar1 + 0x94) | 2;
      param_1[0x28c] = -1;
      if ((*(byte *)(param_1 + 0x12a) & 1) != 0) {
        cXmlBinary::cXmlBinary_13(param_1[0x128]);
      }
      return 1;
    }
  }
  return 0;
}

// 0059A1D0  Em0312::setEmSetInfo  size=36  [class]
undefined4 __thiscall Em0312::setEmSetInfo(int param_1,int param_2)

{
  cXmlBinary::cXmlBinary_13(*(undefined4 *)(param_2 + 0x44));
  *(undefined4 *)(param_1 + 0xa30) = *(undefined4 *)(param_2 + 0x74);
  return 1;
}

// 0059A200  FUN_0059a200  size=1287  [between]
/* WARNING: Removing unreachable block (ram,0x0059a42b) */
/* WARNING: Removing unreachable block (ram,0x0059a5ae) */

void FUN_0059a200(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float unaff_ESI;
  float unaff_retaddr;
  float **ppfVar4;
  float **ppfVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float *pfStack_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  pfStack_64 = (float *)0x59a21f;
  pfStack_64 = (float *)FUN_00a1d5c0();
  FUN_0041c8e0(8);
  local_2c = *param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  if (local_8 < local_c) {
    pfVar7 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_2c;
      pfVar7[1] = local_28;
      pfVar7[2] = local_24;
    }
    local_8 = local_8 + 1;
  }
  local_44 = *param_3;
  local_40 = param_3[1];
  local_3c = param_3[2];
  local_20 = local_44 - local_2c;
  local_1c = local_40 - local_28;
  local_18 = local_3c - local_24;
  param_2 = (float *)(SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c) *
                     0.33333334);
  if (param_4 < (float)param_2) {
    param_2 = (float *)param_4;
  }
  if ((float)param_2 < param_5) {
    param_2 = (float *)param_5;
  }
  local_50 = (local_2c + local_44) * 0.5;
  local_48 = (local_3c + local_24) * 0.5;
  if (local_40 <= local_28) {
    local_4c = local_28 + (float)param_2;
  }
  else {
    local_4c = (float)param_2;
    if (local_40 + 5.0 < local_28) {
      local_4c = (float)param_2 * 0.5;
    }
    local_4c = local_4c + local_40;
  }
  local_20 = local_20 * 0.16666667;
  local_1c = local_1c * 0.16666667;
  local_18 = local_18 * 0.16666667;
  local_38 = local_50 - local_20;
  local_34 = local_4c - local_1c;
  local_30 = local_48 - local_18;
  local_5c = local_38 - local_2c;
  local_58 = local_34 - local_28;
  local_54 = local_30 - local_24;
  fVar6 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    pfStack_64 = (float *)&DAT_0163d0ac;
    FUN_00dd5650();
    local_5c = 0.0;
    local_58 = 1.0;
    local_54 = 0.0;
  }
  pfVar7 = &local_5c;
  pfStack_64 = pfVar7;
  D3DXVec3Normalize();
  iVar2 = local_10;
  if (local_10 < local_14) {
    pfVar1 = (float *)((int)local_18 + local_10 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = (float)pfStack_64 * (float)param_2 + local_34;
      pfVar1[1] = unaff_ESI * (float)param_2 + local_30;
      pfVar1[2] = local_5c * (float)param_2 + local_2c;
    }
    iVar2 = local_10 + 1;
    if (iVar2 < local_14) {
      pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_40;
        pfVar1[1] = local_3c;
        pfVar1[2] = local_38;
      }
      iVar2 = local_10 + 2;
      if (iVar2 < local_14) {
        pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_58;
          pfVar1[1] = local_54;
          pfVar1[2] = local_50;
        }
        iVar2 = local_10 + 3;
      }
    }
  }
  local_10 = iVar2;
  local_34 = local_28 + local_58;
  local_30 = local_24 + local_54;
  local_2c = local_20 + local_50;
  pfStack_64 = (float *)(local_4c - local_34);
  local_5c = local_44 - local_2c;
  fVar6 = local_5c * local_5c +
          (float)pfStack_64 * (float)pfStack_64 + (local_48 - local_30) * (local_48 - local_30);
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    pfStack_64 = (float *)0x0;
    local_5c = 0.0;
  }
  ppfVar4 = &pfStack_64;
  ppfVar5 = ppfVar4;
  D3DXVec3Normalize(ppfVar4);
  fVar6 = (float)ppfVar5 * unaff_retaddr;
  fVar8 = (float)pfVar7 * unaff_retaddr;
  pfStack_64 = (float *)((float)pfStack_64 * unaff_retaddr);
  fVar3 = local_18;
  if ((int)local_18 < (int)local_1c) {
    pfVar7 = (float *)((int)local_20 + (int)local_18 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_3c;
      pfVar7[1] = local_38;
      pfVar7[2] = local_34;
    }
    fVar3 = (float)((int)local_18 + 1);
    if ((int)fVar3 < (int)local_1c) {
      pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
      if (pfVar7 != (float *)0x0) {
        *pfVar7 = local_54 - fVar6;
        pfVar7[1] = local_50 - fVar8;
        pfVar7[2] = local_4c - (float)pfStack_64;
      }
      fVar3 = (float)((int)local_18 + 2);
      if ((int)fVar3 < (int)local_1c) {
        pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
        if (pfVar7 == (float *)0x0) {
          fVar3 = (float)((int)local_18 + 3);
        }
        else {
          *pfVar7 = local_54;
          pfVar7[1] = local_50;
          pfVar7[2] = local_4c;
          fVar3 = (float)((int)local_18 + 3);
        }
      }
    }
  }
  local_18 = fVar3;
  FUN_00a5e090(&local_24);
  if ((local_20 != 0.0) && (local_18 = 0.0, local_14 != 0)) {
    FUN_00dd48d0(local_20,0,ppfVar4,fVar6,fVar8);
  }
  return;
}

// 0059A710  FUN_0059a710  size=1257  [between]
void __fastcall FUN_0059a710(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(10,0,0x3e4ccccd,0x3f800000,0,0xbf800000,param_1[0x282]);
    FUN_00a96070(0,0x8000000,1);
    if (param_1[0x2fe] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    uVar3 = FUN_00de4550("Em031a_0006.mot",0);
    uVar4 = FUN_00de4550("Em031a_0006_0_seq.bxm",0);
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0;
    uVar9 = 0x3f800000;
    uVar8 = 0x3e4ccccd;
    uVar7 = 0;
    FUN_00a7c8a0(uVar3,uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9efb0(uVar3,uVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    uVar7 = 1;
    uVar4 = 0x8000000;
    uVar3 = 0;
    FUN_00a7c8a0(0,0x8000000,1);
    FUN_00a96070(uVar3,uVar4,uVar7);
    if (param_1[0x2fe] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    FUN_00a8e880(param_1 + 0x290);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24c] = param_1[0x287];
    return;
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 1) {
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 1) {
      return;
    }
    piVar5 = (int *)(**(code **)(*param_1 + 0x68))();
    param_1[0x294] = *piVar5;
    param_1[0x295] = piVar5[1];
    param_1[0x296] = piVar5[2];
    param_1[0x297] = piVar5[3];
    FUN_00aa4080(0xb,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    if (param_1[0x2fe] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    uVar3 = FUN_00de4550("Em031a_0007.mot",0);
    uVar4 = FUN_00de4550("Em031a_0007_0_seq.bxm",0);
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0;
    uVar9 = 0x3f800000;
    uVar8 = 0x3e4ccccd;
    uVar7 = 0;
    FUN_00a7c8a0(uVar3,uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9efb0(uVar3,uVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    if (param_1[0x2fe] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    iStack_20 = param_1[0x290];
    iStack_18 = param_1[0x292];
    iStack_14 = param_1[0x293];
    fStack_1c = (float)param_1[0x291] + 0.1;
    FUN_0059a200(param_1 + 0x298,param_1 + 0x294,&iStack_20,(float)param_1[0x285] * 1.5,
                 (float)param_1[0x286] * 1.5);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    FUN_00a581b0(&local_2c,0,0);
    fVar6 = (float10)FUN_00a92ff0();
    fVar6 = (float10)(float)param_1[0x24c] - fVar6 * (float10)(float)param_1[0x288];
    param_1[0x24c] = (int)(float)fVar6;
    if (fVar6 < (float10)1) {
      param_1[0x24c] = (int)(float)(float10)1;
    }
  }
  else {
    iVar2 = FUN_00a8cac0();
    if (iVar2 != 2) {
      iVar2 = FUN_00a8cac0();
      if (iVar2 == 3) {
        FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0,0xbf800000,param_1[0x282]);
        FUN_00a96070(0,0x8000000,1);
        if (param_1[0x2fe] != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
        }
        uVar3 = FUN_00de4550("Em031a_0008.mot",0);
        uVar4 = FUN_00de4550("Em031a_0008_0_seq.bxm",0);
        uVar12 = 0x3f800000;
        uVar11 = 0xbf800000;
        uVar10 = 0;
        uVar9 = 0x3f800000;
        uVar8 = 0x3e4ccccd;
        uVar7 = 0;
        FUN_00a7c8a0(uVar3,uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a9efb0(uVar3,uVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
        uVar7 = 1;
        uVar4 = 0x8000000;
        uVar3 = 0;
        FUN_00a7c8a0(0,0x8000000,1);
        FUN_00a96070(uVar3,uVar4,uVar7);
        if (param_1[0x2fe] != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
        }
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      iVar2 = FUN_00a8cac0();
      if (iVar2 != 4) {
        return;
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 1) {
        return;
      }
      param_1[0x187] = 0;
      FUN_00a8caf0(6,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a581b0(&local_2c,0,param_1[0x249]);
    fVar6 = (float10)FUN_00a92ff0();
    fVar6 = (float10)(float)param_1[0x24c] - fVar6 * (float10)(float)param_1[0x288];
    param_1[0x24c] = (int)(float)fVar6;
    if (fVar6 < (float10)1) {
      param_1[0x24c] = (int)(float)(float10)1;
    }
  }
  fVar6 = (float10)FUN_00a92ff0();
  param_1[0x249] =
       (int)(float)(((float10)2.0 / (float10)(float)param_1[0x284]) * fVar6 *
                    (float10)(float)param_1[0x24c] + (float10)(float)param_1[0x249]);
  param_1[0x14] = local_2c;
  param_1[0x15] = iStack_28;
  param_1[0x16] = iStack_24;
  return;
}

// 0059AC00  FUN_0059ac00  size=1670  [between]
void __fastcall FUN_0059ac00(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    fVar10 = 42.0;
    if ((param_1[0x250] == 9) || (param_1[0x250] == 2)) {
      fVar10 = 55.0;
    }
    fVar10 = fVar10 * 0.016666668;
    FUN_00aa4080(10,0,0x3e4ccccd,0x3f800000,0,fVar10,param_1[0x282]);
    FUN_00a96070(0,0x8000080,1);
    if (param_1[0x2fe] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    uVar2 = FUN_00de4550("Em031a_0006.mot",0);
    uVar3 = FUN_00de4550("Em031a_0006_0_seq.bxm",0);
    uVar11 = 0x3f800000;
    uVar9 = 0;
    uVar8 = 0x3f800000;
    uVar7 = 0x3e4ccccd;
    uVar6 = 0;
    FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,fVar10,0x3f800000);
    FUN_00a9efb0(uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,fVar10,uVar11);
    uVar6 = 1;
    uVar3 = 0x8000080;
    uVar2 = 0;
    FUN_00a7c8a0(0,0x8000080,1);
    FUN_00a96070(uVar2,uVar3,uVar6);
    if (param_1[0x2fe] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    FUN_00a8e880(param_1 + 0x290);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24c] = param_1[0x287];
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    iVar1 = FUN_00a959f0(0);
    if (0x3b < iVar1) {
      piVar4 = (int *)(**(code **)(*param_1 + 0x68))();
      param_1[0x294] = *piVar4;
      param_1[0x295] = piVar4[1];
      param_1[0x296] = piVar4[2];
      param_1[0x297] = piVar4[3];
      FUN_00aa4080(0xb,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      if (param_1[0x2fe] != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
      uVar2 = FUN_00de4550("Em031a_0007.mot",0);
      uVar3 = FUN_00de4550("Em031a_0007_0_seq.bxm",0);
      uVar12 = 0x3f800000;
      uVar11 = 0xbf800000;
      uVar9 = 0;
      uVar8 = 0x3f800000;
      uVar7 = 0x3e4ccccd;
      uVar6 = 0;
      FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a9efb0(uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar11,uVar12);
      if (param_1[0x2fe] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
      iStack_20 = param_1[0x290];
      iStack_18 = param_1[0x292];
      iStack_14 = param_1[0x293];
      fStack_1c = (float)param_1[0x291] + 0.1;
      FUN_0059a200(param_1 + 0x298,param_1 + 0x294,&iStack_20,param_1[0x285],param_1[0x286]);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0;
      FUN_00a581b0(&local_2c,0,0);
      fVar5 = (float10)FUN_00a92ff0();
      fVar5 = (float10)(float)param_1[0x24c] - fVar5 * (float10)(float)param_1[0x288];
      param_1[0x24c] = (int)(float)fVar5;
      if (fVar5 < (float10)1) {
        param_1[0x24c] = (int)(float)(float10)1;
      }
      fVar5 = (float10)FUN_00a92ff0();
      param_1[0x249] =
           (int)(float)(((float10)2.0 / (float10)(float)param_1[0x284]) * fVar5 *
                        (float10)(float)param_1[0x24c] + (float10)(float)param_1[0x249]);
      param_1[0x14] = local_2c;
      param_1[0x15] = iStack_28;
      param_1[0x16] = iStack_24;
      if (param_1[0x1d9] != 0) {
        FUN_008e5c50(0x1f);
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 2) {
      fVar10 = (float)param_1[0x249];
      if ((!NAN(fVar10) && 2.0 < fVar10 != (fVar10 == 2.0)) &&
         (param_1[0x187] = param_1[0x187] + 1, param_1[0x1d9] != 0)) {
        FUN_008e5c50(0x1e);
      }
      FUN_00a581b0(&local_2c,0,param_1[0x249]);
      fVar5 = (float10)FUN_00a92ff0();
      fVar5 = (float10)(float)param_1[0x24c] - fVar5 * (float10)(float)param_1[0x288];
      param_1[0x24c] = (int)(float)fVar5;
      if (fVar5 < (float10)1) {
        param_1[0x24c] = (int)(float)(float10)1;
      }
      fVar5 = (float10)FUN_00a92ff0();
      param_1[0x249] =
           (int)(float)(((float10)2.0 / (float10)(float)param_1[0x284]) * fVar5 *
                        (float10)(float)param_1[0x24c] + (float10)(float)param_1[0x249]);
      param_1[0x14] = local_2c;
      param_1[0x15] = iStack_28;
      param_1[0x16] = iStack_24;
      return;
    }
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 3) {
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000080,0x3f400000,param_1[0x282]);
      FUN_00a96070(0,0x8000080,1);
      if (param_1[0x2fe] != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
      uVar2 = FUN_00de4550("Em031a_0008.mot",0);
      uVar3 = FUN_00de4550("Em031a_0008_0_seq.bxm",0);
      uVar12 = 0x3f800000;
      uVar11 = 0x3f2aaaab;
      uVar9 = 0;
      uVar8 = 0x3f800000;
      uVar7 = 0x3e4ccccd;
      uVar6 = 0;
      FUN_00a7c8a0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0x3f2aaaab,0x3f800000);
      FUN_00a9efb0(uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar11,uVar12);
      uVar6 = 1;
      uVar3 = 0x8000080;
      uVar2 = 0;
      FUN_00a7c8a0(0,0x8000080,1);
      FUN_00a96070(uVar2,uVar3,uVar6);
      if (param_1[0x2fe] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    iVar1 = FUN_00a8cac0();
    if ((iVar1 == 4) && (iVar1 = FUN_00a959f0(0), 80.0 <= (float)iVar1)) {
      param_1[0x250] = param_1[0x250] + 1;
      iVar1 = param_1[0x250];
      if (iVar1 == 9) {
        iVar1 = param_1[0x2b1];
        param_1[0x290] = *(int *)(iVar1 + 0x90);
        param_1[0x291] = *(int *)(iVar1 + 0x94);
        param_1[0x292] = *(int *)(iVar1 + 0x98);
        param_1[0x293] = *(int *)(iVar1 + 0x9c);
        FUN_00a8e880(param_1 + 0x290);
        FUN_00a8caf0(3,0,0,0);
        return;
      }
      if (iVar1 == 10) {
        FUN_00a8caf0(6,0,0,0);
        return;
      }
      piVar4 = (int *)(iVar1 * 0x10 + param_1[0x2b1]);
      param_1[0x290] = *piVar4;
      param_1[0x291] = piVar4[1];
      param_1[0x292] = piVar4[2];
      param_1[0x293] = piVar4[3];
      FUN_00a8e880(param_1 + 0x290);
      if (param_1[0x250] == 3) {
        if (*(char *)((int)param_1 + 0xa35) != '\0') {
          FUN_00a8caf0(1,0,0,0);
          return;
        }
        FUN_00a8caf0(8,0,0,0);
        return;
      }
      FUN_00a8caf0(1,0,0,0);
    }
  }
  return;
}

// 0059B290  FUN_0059b290  size=1699  [between]
void __fastcall FUN_0059b290(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0,0x3e800000,param_1[0x282]);
    FUN_00a96070(0,0x8000000,1);
    if (param_1[0x2fe] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    uVar3 = FUN_00de4550("Em031a_001a.mot",0);
    uVar4 = FUN_00de4550("Em031a_001a_0_seq.bxm",0);
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0;
    uVar9 = 0x3f800000;
    uVar8 = 0x3e4ccccd;
    uVar7 = 0;
    FUN_00a7c8a0(uVar3,uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9efb0(uVar3,uVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    uVar7 = 1;
    uVar4 = 0x8000000;
    uVar3 = 0;
    FUN_00a7c8a0(0,0x8000000,1);
    FUN_00a96070(uVar3,uVar4,uVar7);
    if (param_1[0x2fe] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    FUN_00a8e880(param_1 + 0x290);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24c] = param_1[0x287];
    return;
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 1) {
    iVar2 = FUN_00a959f0(0);
    if ((float)iVar2 < 40.0) {
      return;
    }
    piVar5 = (int *)(**(code **)(*param_1 + 0x68))();
    param_1[0x294] = *piVar5;
    param_1[0x295] = piVar5[1];
    param_1[0x296] = piVar5[2];
    param_1[0x297] = piVar5[3];
    FUN_00aa4080(0x10,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    if (param_1[0x2fe] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    uVar3 = FUN_00de4550("Em031a_001b.mot",0);
    uVar4 = FUN_00de4550("Em031a_001b_0_seq.bxm",0);
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0;
    uVar9 = 0x3f800000;
    uVar8 = 0x3e4ccccd;
    uVar7 = 0;
    FUN_00a7c8a0(uVar3,uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9efb0(uVar3,uVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    if (param_1[0x2fe] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
    }
    iStack_20 = param_1[0x290];
    iStack_18 = param_1[0x292];
    iStack_14 = param_1[0x293];
    fStack_1c = (float)param_1[0x291] + 0.1;
    FUN_0059a200(param_1 + 0x298,param_1 + 0x294,&iStack_20,param_1[0x285],param_1[0x286]);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    FUN_00a581b0(&local_2c,0,0);
    fVar6 = (float10)FUN_00a92ff0();
    fVar6 = (float10)(float)param_1[0x24c] - fVar6 * (float10)(float)param_1[0x288];
    param_1[0x24c] = (int)(float)fVar6;
    if (fVar6 < (float10)1) {
      param_1[0x24c] = (int)(float)(float10)1;
    }
  }
  else {
    iVar2 = FUN_00a8cac0();
    if (iVar2 != 2) {
      iVar2 = FUN_00a8cac0();
      if (iVar2 == 3) {
        FUN_00aa4080(0x11,0,0x3e4ccccd,0x3f800000,0x8000080,0x3eaaaaab,param_1[0x282]);
        FUN_00a96070(0,0x8000000,1);
        FUN_00a96070(0,0x80,1);
        if (param_1[0x2fe] != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
        }
        uVar3 = FUN_00de4550("Em031a_001c.mot",0);
        uVar4 = FUN_00de4550("Em031a_001c_0_seq.bxm",0);
        uVar12 = 0x3f800000;
        uVar11 = 0xbf800000;
        uVar10 = 0;
        uVar9 = 0x3f800000;
        uVar8 = 0x3e4ccccd;
        uVar7 = 0;
        FUN_00a7c8a0(uVar3,uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a9efb0(uVar3,uVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
        uVar7 = 1;
        uVar4 = 0x8000000;
        uVar3 = 0;
        FUN_00a7c8a0(0,0x8000000,1);
        FUN_00a96070(uVar3,uVar4,uVar7);
        if (param_1[0x2fe] != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
          param_1[0x187] = param_1[0x187] + 1;
          return;
        }
LAB_0059b8b0:
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      iVar2 = FUN_00a8cac0();
      if (iVar2 == 4) {
        iVar2 = FUN_00a959f0(0);
        if (40.0 <= (float)iVar2) {
          FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,(float)param_1[0x282] * 1.5);
          FUN_00a96070(0,0x8000000,1);
          if (param_1[0x2fe] != 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
          }
          uVar3 = FUN_00de4550("Em031a_0009.mot",0);
          uVar4 = FUN_00de4550("Em031a_0009_0_seq.bxm",0);
          uVar12 = 0x3f800000;
          uVar11 = 0xbf800000;
          uVar10 = 0;
          uVar9 = 0x3f800000;
          uVar8 = 0x3e4ccccd;
          uVar7 = 0;
          FUN_00a7c8a0(uVar3,uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
          FUN_00a9efb0(uVar3,uVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
          uVar7 = 1;
          uVar4 = 0x8000000;
          uVar3 = 0;
          FUN_00a7c8a0(0,0x8000000,1);
          FUN_00a96070(uVar3,uVar4,uVar7);
          if (param_1[0x2fe] != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
          }
          goto LAB_0059b8b0;
        }
      }
      else {
        iVar2 = FUN_00a8cac0();
        if ((iVar2 == 5) && (iVar2 = FUN_00a959f0(0), 35.0 <= (float)iVar2)) {
          param_1[0x250] = param_1[0x250] + 1;
          piVar5 = (int *)(param_1[0x250] * 0x10 + param_1[0x2b1]);
          param_1[0x290] = *piVar5;
          param_1[0x291] = piVar5[1];
          param_1[0x292] = piVar5[2];
          param_1[0x293] = piVar5[3];
          FUN_00a8e880(param_1 + 0x290);
          FUN_00a8caf0(1,0,0,0);
        }
      }
      return;
    }
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a581b0(&local_2c,0,param_1[0x249]);
    fVar6 = (float10)FUN_00a92ff0();
    fVar6 = (float10)(float)param_1[0x24c] - fVar6 * (float10)(float)param_1[0x288];
    param_1[0x24c] = (int)(float)fVar6;
    if (fVar6 < (float10)1) {
      param_1[0x24c] = (int)(float)(float10)1;
    }
  }
  fVar6 = (float10)FUN_00a92ff0();
  param_1[0x249] =
       (int)(float)(((float10)2.0 / (float10)(float)param_1[0x284]) * fVar6 *
                    (float10)(float)param_1[0x24c] + (float10)(float)param_1[0x249]);
  param_1[0x14] = local_2c;
  param_1[0x15] = iStack_28;
  param_1[0x16] = iStack_24;
  return;
}

// 0059B940  Em0312::vf50  size=806  [class]
void __fastcall Em0312::vf50(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0) {
    FUN_00597460();
  }
  else {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 1) {
      FUN_00597ed0();
    }
    else {
      iVar1 = FUN_00a8cab0();
      if (iVar1 == 2) {
        FUN_00598200();
      }
      else {
        iVar1 = FUN_00a8cab0();
        if (iVar1 == 3) {
          FUN_0059ac00();
        }
        else {
          iVar1 = FUN_00a8cab0();
          if (iVar1 == 4) {
            FUN_00597d40();
          }
          else {
            iVar1 = FUN_00a8cab0();
            if (iVar1 == 5) {
              FUN_0059a710();
            }
            else {
              iVar1 = FUN_00a8cab0();
              if (iVar1 == 6) {
                FUN_00597600();
              }
              else {
                iVar1 = FUN_00a8cab0();
                if (iVar1 == 8) {
                  FUN_00598720();
                }
                else {
                  iVar1 = FUN_00a8cab0();
                  if (iVar1 == 9) {
                    FUN_00598e50();
                  }
                  else {
                    iVar1 = FUN_00a8cab0();
                    if (iVar1 == 10) {
                      FUN_0059b290();
                    }
                    else {
                      iVar1 = FUN_00a8cab0();
                      if (iVar1 == 7) {
                        FUN_00597820();
                      }
                      else {
                        iVar1 = FUN_00a8cab0();
                        if (iVar1 == 0xb) {
                          FUN_00597370();
                        }
                        else {
                          iVar1 = FUN_00a8cab0();
                          if (iVar1 == 0xc) {
                            FUN_005993a0();
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (param_1[0x128] != 0) {
    if (param_1[0x128] == 1) {
      FUN_00a93170();
      if (param_1[0x2f4] != 0) {
        if (param_1[0x2fe] != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
        }
        FUN_00a7c8a0();
        FUN_00a93170();
        if (param_1[0x2fe] != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
        }
      }
    }
    goto LAB_0059bc5c;
  }
  if ((char)param_1[0x28d] == '\0') {
    piVar2 = (int *)FUN_00a6e640();
    iVar1 = (**(code **)(*piVar2 + 0x24))(6,1,1);
    if (iVar1 == 1) {
      *(undefined1 *)(param_1 + 0x28d) = 1;
      if (param_1[0x2fe] != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
      iVar1 = FUN_00a18cf0(param_1[0x28b]);
      if (iVar1 != 0) {
        uVar9 = 0x3f800000;
        uVar8 = 0xbf800000;
        uVar7 = 0x8000000;
        uVar6 = 0x3f800000;
        uVar5 = 0;
        uVar4 = 0;
        puVar3 = &DAT_0163b604;
        FUN_00a7c8a0(&DAT_0163b604,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00a9e290(puVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
        param_1[599] = param_1[599] + 1;
      }
      if (param_1[0x2fe] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f8));
      }
    }
  }
  if (*(char *)((int)param_1 + 0xa35) == '\0') {
    piVar2 = (int *)FUN_00a6e640();
    iVar1 = (**(code **)(*piVar2 + 0x24))(4,1,1);
    if (iVar1 == 1) {
      *(undefined1 *)((int)param_1 + 0xa35) = 1;
    }
  }
  if (*(char *)((int)param_1 + 0xa36) == '\0') {
    piVar2 = (int *)FUN_00a6e640();
    iVar1 = (**(code **)(*piVar2 + 0x24))(8,1,1);
    if (iVar1 == 1) {
      *(undefined1 *)((int)param_1 + 0xa36) = 1;
    }
  }
  piVar2 = (int *)FUN_00a6e640();
  iVar1 = *piVar2;
  uVar4 = (**(code **)(*param_1 + 0x68))(30000,1);
  iVar1 = (**(code **)(iVar1 + 0x2c))(uVar4);
  if (iVar1 == 1) {
    FUN_00a0ba60(0);
    piVar2 = param_1 + 0x2f5;
    iVar1 = 2;
    do {
      if (*piVar2 != 0) {
        uVar4 = 0;
        FUN_00a7c8a0(0);
        FUN_00a0ba60(uVar4);
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (param_1[0x2f4] != 0) {
      uVar4 = 0;
LAB_0059bbe5:
      FUN_00a7c8a0(uVar4);
      FUN_00a0ba60(uVar4);
    }
  }
  else {
    FUN_00a0ba60(1);
    piVar2 = param_1 + 0x2f5;
    iVar1 = 2;
    do {
      if (*piVar2 != 0) {
        uVar4 = 1;
        FUN_00a7c8a0(1);
        FUN_00a0ba60(uVar4);
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (param_1[0x2f4] != 0) {
      uVar4 = 1;
      goto LAB_0059bbe5;
    }
  }
  FUN_00a93170();
  if (param_1[0x1ec] != 0) {
    FUN_008f3cb0(param_1);
    BehaviorAppBase::vf50();
    return;
  }
LAB_0059bc5c:
  BehaviorAppBase::vf50();
  return;
}

// 00AAD5E0  Em0312::vf04  size=6  [class]
undefined * Em0312::vf04(void)

{
  return &DAT_01b3516c;
}

// 00AC1310  Em0312::destruct  size=30  [class]
undefined4 __thiscall Em0312::destruct(undefined4 param_1,byte param_2)

{
  lib::Array<Hw::cVec4>::Array<Hw::cVec4>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

