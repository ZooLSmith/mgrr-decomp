// src/unsorted/unit_0053A950.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0053A950..0053AC80, 4 functions

#include "mgrr.h"

// 0053A950  FUN_0053a950  size=203  [run]
void __thiscall FUN_0053a950(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_160 [348];
  
  FUN_00a8caf0(6,0,0,0);
  FUN_00529450(0);
  *(undefined4 *)(param_1 + 0xaa0) = 0;
  iVar2 = FUN_00a12210(*(undefined4 *)(param_1 + 0xb70));
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0x44);
    uVar1 = *(undefined4 *)(iVar2 + 0x48);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    *(undefined4 *)(param_1 + 0x48) = uVar1;
  }
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  *(undefined4 *)(param_1 + 0xab0) = *param_3;
  *(undefined4 *)(param_1 + 0xab4) = param_3[1];
  *(undefined4 *)(param_1 + 0xab8) = param_3[2];
  *(undefined4 *)(param_1 + 0xabc) = param_3[3];
  FUN_004039a0(5,param_1,0);
  if (param_1 + 0xac0 != 0) {
    FUN_00dffb20(param_1 + 0xac0);
  }
  FUN_00a8c8b0(0x201a0,local_160);
  return;
}

// 0053AA20  FUN_0053aa20  size=262  [run]
void __fastcall FUN_0053aa20(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 0x1630) = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x34c))();
      FUN_008e3c10();
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x34c))();
      FUN_008e3c10();
    }
  }
  FUN_0052abb0(1,0x18);
  FUN_0052ac70(1,0x18);
  FUN_0052aea0(1,0x19);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00eaa6e0(0x41200000,0);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00eaa6e0(0x41200000,0);
    }
  }
  return;
}

// 0053AB30  FUN_0053ab30  size=304  [run]
void __thiscall FUN_0053ab30(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1418) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10e0) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x4e4) != 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x10d4);
  switch(cVar1) {
  case '\0':
    *(undefined4 *)(param_1 + 0x10d0) = *(undefined4 *)(param_1 + 0x1444);
    *(char *)(param_1 + 0x10d4) = cVar1 + '\x01';
    *(undefined4 *)(param_1 + 0x15f0) = 0;
    FUN_00537410();
  case '\x01':
    if (*(float *)(param_1 + 0x10d0) <= 0.0) {
      *(char *)(param_1 + 0x10d4) = *(char *)(param_1 + 0x10d4) + '\x01';
    }
    break;
  case '\x02':
    *(char *)(param_1 + 0x10d4) = cVar1 + '\x01';
    break;
  case '\x03':
    break;
  case '\x04':
    *(char *)(param_1 + 0x10d4) = cVar1 + '\x01';
    *(undefined4 *)(param_1 + 0x10d8) = 0;
    *(float *)(param_1 + 0x10dc) = *(float *)(param_1 + 0x1458) * 60.0;
    FUN_0051a360();
  case '\x05':
    if (*(float *)(param_1 + 0x145c) <= (float)*(int *)(param_1 + 0x10d8)) {
      *(undefined1 *)(param_1 + 0x10d4) = 6;
    }
    if (param_2 != 0) {
      *(float *)(param_1 + 0x10dc) = *(float *)(param_1 + 0x10dc) - *(float *)(param_1 + 0x910);
    }
    if (*(float *)(param_1 + 0x10dc) < 0.0) {
      *(undefined1 *)(param_1 + 0x10d4) = 6;
    }
  case '\a':
switchD_0053ab6c_caseD_7:
    iVar2 = FUN_00518a90();
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x100c) = 0;
    }
    goto switchD_0053ab6c_default;
  case '\x06':
    *(char *)(param_1 + 0x10d4) = cVar1 + '\x01';
    goto switchD_0053ab6c_caseD_7;
  default:
    goto switchD_0053ab6c_default;
  }
  iVar2 = FUN_00518a90();
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x100c) = 1;
    return;
  }
switchD_0053ab6c_default:
  return;
}

// 0053AC80  FUN_0053ac80  size=958  [run]
void __thiscall FUN_0053ac80(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  undefined1 auStack_370 [4];
  undefined4 uStack_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  undefined4 local_358;
  undefined4 local_354;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 local_344;
  undefined4 local_340;
  float local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_324;
  undefined1 local_320;
  undefined1 uStack_31f;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined1 local_310;
  uint uStack_2a4;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined2 local_1b8;
  float local_1b0;
  float local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    if (param_2 == -1) {
      puVar5 = &DAT_018812a8;
      do {
        iVar2 = FUN_00a81330();
        if (iVar2 != 0) {
          iVar2 = FUN_00a7c8a0();
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0x618) != 6)) goto LAB_0053ad2e;
        }
        puVar5 = puVar5 + 1;
        if (0x18812f7 < (int)puVar5) {
          return;
        }
      } while( true );
    }
    if (param_2 < 0x14) {
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        iVar2 = FUN_00a7c8a0();
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x618) != 6)) {
LAB_0053ad2e:
          local_360 = SQRT(*(float *)(iVar2 + 0x14) * *(float *)(iVar2 + 0x14) +
                           *(float *)(iVar2 + 0x10) * *(float *)(iVar2 + 0x10) +
                           *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x18));
          local_35c = SQRT(*(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                           *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                           *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28));
          fVar1 = SQRT(*(float *)(iVar2 + 0x38) * *(float *)(iVar2 + 0x38) +
                       *(float *)(iVar2 + 0x34) * *(float *)(iVar2 + 0x34) +
                       *(float *)(iVar2 + 0x30) * *(float *)(iVar2 + 0x30));
          local_364 = *(float *)(iVar2 + 0x28) / fVar1;
          local_368 = *(float *)(iVar2 + 0x38) / fVar1;
          fVar6 = (float10)FUN_00ddbaa0(-(*(float *)(iVar2 + 0x18) / fVar1));
          fVar7 = (float10)fpatan((float10)local_364,(float10)local_368);
          local_350 = (float)fVar7;
          local_34c = (float)fVar6;
          fVar6 = (float10)fpatan((float10)*(float *)(iVar2 + 0x14) / (float10)local_35c,
                                  (float10)*(float *)(iVar2 + 0x10) / (float10)local_360);
          local_348 = (float)fVar6;
          local_360 = *(float *)(iVar2 + 0x40);
          local_35c = *(float *)(iVar2 + 0x44);
          local_358 = *(undefined4 *)(iVar2 + 0x48);
          local_354 = *(undefined4 *)(iVar2 + 0x4c);
          iVar2 = FUN_00a12210(*(undefined4 *)(iVar2 + 0xb70));
          if (iVar2 != 0) {
            local_360 = *(float *)(iVar2 + 0x40);
            local_35c = *(float *)(iVar2 + 0x44);
            local_358 = *(undefined4 *)(iVar2 + 0x48);
            local_354 = *(undefined4 *)(iVar2 + 0x4c);
          }
          iVar2 = *(int *)(param_1 + 0xa84);
          local_340 = *(undefined4 *)(iVar2 + 0x40);
          local_338 = *(undefined4 *)(iVar2 + 0x48);
          local_334 = *(undefined4 *)(iVar2 + 0x4c);
          local_33c = *(float *)(iVar2 + 0x44) + 1.5;
          FUN_004105d0();
          FUN_00410710();
          FUN_0041cf30();
          local_21c = 0x1d;
          local_1bc = *(undefined4 *)(*(int *)(param_1 + 0xa84) + 0x4f0);
          local_1b0 = 0.0;
          local_1ac = 0.0;
          local_1a8 = 0;
          local_1a4 = local_344;
          local_1b8 = 0;
          local_220 = 0x74;
          puVar5 = (undefined4 *)FUN_009f8b60();
          local_1c0 = *puVar5;
          local_31c = 5;
          local_314 = 0x14;
          local_310 = 0;
          local_318 = 100;
          uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 4))(8);
          uStack_36c = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(8);
          uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(8);
          local_320 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(8);
          local_31c = *(undefined4 *)(param_1 + 0x4f0);
          uStack_31f = 7;
          local_330 = 0x133;
          uStack_32c = uVar3;
          uStack_324 = uVar4;
          uVar3 = FUN_00a7c7f0();
          FUN_00a7c960(uVar3);
          uStack_2a4 = uStack_2a4 | 0x1000;
          fVar6 = (float10)FUN_00dde300(0xbe3ba866,0x3e3ba866);
          local_1b0 = (float)fVar6;
          fVar6 = (float10)FUN_00dde300(0xbe3ba866,0x3e3ba866);
          local_1ac = (float)fVar6;
          FUN_0043fe30(auStack_370,&local_350,&local_360,0x3f666666,0x42a00000);
          iVar2 = FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),&local_340);
          if (iVar2 != 0) {
            local_360 = 0.0;
            local_35c = 0.0;
            local_358 = 0;
            FUN_0053a950(*(undefined4 *)(iVar2 + 0x4f0),&local_360);
          }
        }
      }
    }
  }
  return;
}

