// src/object/ba0012/Ba0012.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00402820..00AB8D90, 21 functions

#include "types.h"

// 00402820  Ba0012::vf40  size=59  [class]
undefined4 __fastcall Ba0012::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = MonThrowMoto::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  lib::AllocatedArray<Behavior::InstructionContainer>::
  AllocatedArray<Behavior::InstructionContainer>();
  *(undefined4 *)(param_1 + 0xb34) = 400;
  *(undefined4 *)(param_1 + 0xb30) = 400;
  *(undefined4 *)(param_1 + 0xb38) = 0;
  *(undefined4 *)(param_1 + 0xb3c) = 0;
  return 1;
}

// 00402860  Ba0012::thunk_vf50  size=5  [class]
void __fastcall Ba0012::thunk_vf50(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xb24) != 0) && (*(int *)(param_1 + 0xb08) == 0)) {
    *(undefined4 *)(param_1 + 0xb24) = 0;
    if (*(int *)(param_1 + 0xb20) != 0) {
      piVar1 = (int *)FUN_00d773c0();
      (**(code **)(*piVar1 + 0x10))(*(undefined4 *)(param_1 + 0xb20));
    }
    *(undefined4 *)(param_1 + 0xb20) = 0;
    if (*(int *)(param_1 + 0xb08) == 0) {
      iVar2 = FUN_009fd880();
      if ((iVar2 == 0) && (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0)) {
        *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
      }
    }
  }
  FUN_00a93170();
  BehaviorBgBase::vf50();
  return;
}

// 00402AA0  FUN_00402aa0  size=343  [between]
void FUN_00402aa0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
      }
      FUN_00410cc0();
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
      }
      FUN_00410cc0();
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
      }
      FUN_00410cc0();
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
      }
      FUN_00410cc0();
    }
  }
  FUN_00a7c950();
  return;
}

// 00402C40  FUN_00402c40  size=909  [between]
void FUN_00402c40(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar2 = 0;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
      }
      local_30 = *(undefined4 *)(iVar2 + 0x40);
      local_28 = *(undefined4 *)(iVar2 + 0x48);
      local_24 = *(undefined4 *)(iVar2 + 0x4c);
      local_2c = *(float *)(iVar2 + 0x44) + 1.5;
      FUN_00d9fa80(&local_20,&local_30);
      FUN_00f95eb0(local_20,local_1c,0x41c00000,0xffff0000);
      FUN_00f95eb0(local_20,local_1c,0x42000000,0xffff0000);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar2 = 0;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
      }
      local_30 = *(undefined4 *)(iVar2 + 0x40);
      local_28 = *(undefined4 *)(iVar2 + 0x48);
      local_24 = *(undefined4 *)(iVar2 + 0x4c);
      local_2c = *(float *)(iVar2 + 0x44) + 1.5;
      FUN_00d9fa80(&local_20,&local_30);
      FUN_00f95eb0(local_20,local_1c,0x41c00000,0xffff0000);
      FUN_00f95eb0(local_20,local_1c,0x42000000,0xffff0000);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar2 = 0;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
      }
      local_30 = *(undefined4 *)(iVar2 + 0x40);
      local_28 = *(undefined4 *)(iVar2 + 0x48);
      local_24 = *(undefined4 *)(iVar2 + 0x4c);
      local_2c = *(float *)(iVar2 + 0x44) + 1.5;
      FUN_00d9fa80(&local_20,&local_30);
      FUN_00f95eb0(local_20,local_1c,0x41c00000,0xffff0000);
      FUN_00f95eb0(local_20,local_1c,0x42000000,0xffff0000);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar2 = 0;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
      }
      local_30 = *(undefined4 *)(iVar2 + 0x40);
      local_28 = *(undefined4 *)(iVar2 + 0x48);
      local_24 = *(undefined4 *)(iVar2 + 0x4c);
      local_2c = *(float *)(iVar2 + 0x44) + 1.5;
      FUN_00d9fa80(&local_20,&local_30);
      FUN_00f95eb0(local_20,local_1c,0x41c00000,0xffff0000);
      FUN_00f95eb0(local_20,local_1c,0x42000000,0xffff0000);
    }
  }
  return;
}

// 00402FD0  FUN_00402fd0  size=492  [between]
undefined4 FUN_00402fd0(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar2 = 0;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
      }
      local_8 = *(undefined4 *)(iVar2 + 0x674);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar2 = 0;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
      }
      local_8 = *(undefined4 *)(iVar2 + 0x674);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar2 = 0;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
      }
      local_8 = *(undefined4 *)(iVar2 + 0x674);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar2 = 0;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
      }
      local_8 = *(undefined4 *)(iVar2 + 0x674);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
LAB_00403138:
    local_8 = 1;
  }
  else {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 == 0) goto LAB_00403138;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
LAB_00403165:
    local_8 = 1;
  }
  else {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 == 0) goto LAB_00403165;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) goto LAB_0040318a;
  }
  local_8 = 1;
LAB_0040318a:
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      return local_8;
    }
  }
  return 1;
}

// 004031C0  FUN_004031c0  size=336  [between]
void FUN_004031c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
      }
      FUN_009fdde0();
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
      }
      FUN_009fdde0();
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
      }
      FUN_009fdde0();
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
      }
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 00403440  FUN_00403440  size=72  [between]
void __fastcall FUN_00403440(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9e290(&DAT_0163b5f4,0,0x3e888889,0x3f800000,0,0,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00402aa0();
    return;
  }
  return;
}

// 00403490  FUN_00403490  size=182  [between]
void __fastcall FUN_00403490(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_004034a2_caseD_1;
  case 2:
    param_1[0x188] = param_1[0x188] + 1;
  case 3:
    FUN_009fdde0();
    return;
  default:
    return;
  }
  FUN_00a9e290(&DAT_0163b604,0,0x3e888889,0x3f800000,0x8000000,0,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  FUN_00402aa0();
  FUN_004031c0();
  (**(code **)(param_1[0x2d8] + 8))(0x41200000,0,0);
switchD_004034a2_caseD_1:
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  param_1[0x188] = param_1[0x188] + 1;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
  param_1[0x2cf] = 1;
                    /* WARNING: Could not recover jumptable at 0x00403536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 00403560  FUN_00403560  size=863  [between]
void FUN_00403560(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    iVar6 = 0;
    if (iVar3 != 0) {
      local_10 = 0.0;
      local_c = 0;
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
        if (iVar3 != 0) {
          iVar5 = 0;
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            FUN_00a81330();
            iVar5 = FUN_00a7c8a0();
          }
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            FUN_00a81330();
            iVar6 = FUN_00a7c8a0();
          }
          fVar1 = *(float *)(iVar6 + 0x40) - *(float *)(iVar5 + 0x40);
          fVar2 = *(float *)(iVar6 + 0x48) - *(float *)(iVar5 + 0x48);
          fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
          if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
            local_c = 0;
            iVar3 = FUN_00a81330();
            if (iVar3 != 0) {
              FUN_00a81330();
              local_c = FUN_00a7c8a0();
            }
            FUN_00410ca0();
            local_10 = fVar1;
          }
        }
      }
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
        if (iVar3 != 0) {
          iVar6 = 0;
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            FUN_00a81330();
            iVar6 = FUN_00a7c8a0();
          }
          iVar5 = 0;
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            FUN_00a81330();
            iVar5 = FUN_00a7c8a0();
          }
          fVar1 = *(float *)(iVar5 + 0x40) - *(float *)(iVar6 + 0x40);
          fVar2 = *(float *)(iVar5 + 0x48) - *(float *)(iVar6 + 0x48);
          fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
          if (local_10 <= fVar1) {
            local_c = 0;
            iVar3 = FUN_00a81330();
            if (iVar3 != 0) {
              FUN_00a81330();
              local_c = FUN_00a7c8a0();
            }
            FUN_00410ca0();
            local_10 = fVar1;
          }
        }
      }
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
        if (iVar3 != 0) {
          iVar6 = 0;
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            FUN_00a81330();
            iVar6 = FUN_00a7c8a0();
          }
          iVar5 = 0;
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            FUN_00a81330();
            iVar5 = FUN_00a7c8a0();
          }
          fVar1 = *(float *)(iVar5 + 0x40) - *(float *)(iVar6 + 0x40);
          fVar2 = *(float *)(iVar5 + 0x48) - *(float *)(iVar6 + 0x48);
          fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
          if (local_10 <= fVar1) {
            local_c = 0;
            iVar3 = FUN_00a81330();
            if (iVar3 != 0) {
              FUN_00a81330();
              local_c = FUN_00a7c8a0();
            }
            FUN_00410ca0();
            local_10 = fVar1;
          }
        }
      }
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
        if (iVar3 != 0) {
          iVar6 = 0;
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            FUN_00a81330();
            iVar6 = FUN_00a7c8a0();
          }
          iVar5 = 0;
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            FUN_00a81330();
            iVar5 = FUN_00a7c8a0();
          }
          fVar1 = *(float *)(iVar5 + 0x40) - *(float *)(iVar6 + 0x40);
          fVar2 = *(float *)(iVar5 + 0x48) - *(float *)(iVar6 + 0x48);
          if (local_10 <= fVar2 * fVar2 + fVar1 * fVar1) {
            local_c = 0;
            iVar3 = FUN_00a81330();
            if (iVar3 != 0) {
              FUN_00a81330();
              local_c = FUN_00a7c8a0();
            }
            FUN_00410ca0();
          }
        }
      }
      FUN_00a7c950();
      if (local_c != 0) {
        FUN_00410ca0();
        uVar4 = FUN_00a7c7f0();
        FUN_00a7c960(uVar4);
      }
    }
  }
  return;
}

// 004038D0  FUN_004038d0  size=43  [between]
void __fastcall FUN_004038d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00403910  Ba0012::vf44  size=81  [class]
void __fastcall Ba0012::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  FUN_00a9d8a0();
  FUN_00a92ef0();
  BehaviorBgBase::vf44();
  return;
}

// 004039A0  FUN_004039a0  size=225  [between]
int __thiscall FUN_004039a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [16];
  
  FUN_00e01ca0();
  *(undefined4 *)(param_1 + 0x110) = param_2;
  *(undefined4 *)(param_1 + 0x140) = param_4;
  *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
  FUN_00dffad0(param_2);
  FUN_00e020f0(*(undefined4 *)(param_3 + 0x4f0));
  if (*(int *)(param_3 + 0x79c) == 0) {
    iVar1 = FUN_009f8ea0(local_10,0x10,*(undefined4 *)(param_3 + 0x4b0),0);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_0163b620,*(undefined4 *)(param_3 + 0x4b0));
    }
    else {
      FUN_00dd5650(&DAT_0163b688,local_10);
    }
  }
  else {
    uVar2 = FUN_00a8c890(param_4);
    FUN_00dffb30(uVar2);
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  return param_1;
}

// 00403A90  FUN_00403a90  size=453  [between]
undefined4 __fastcall FUN_00403a90(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  piVar7 = *(int **)(param_1 + 0x67c);
  piVar6 = piVar7 + *(int *)(param_1 + 0x684) * 0x54;
  while( true ) {
    if (piVar7 == piVar6) {
      return 0;
    }
    iVar3 = FUN_00a81330();
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = FUN_00a7c8a0();
    }
    iVar3 = *piVar7;
    if (((((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 2)) && ((iVar3 != 0x1b0 && (iVar3 != 0x147))))
       && ((iVar3 = piVar7[1], iVar4 != 0 && (*(int *)(iVar4 + 0x4b0) == 0x20200)))) break;
    piVar7 = piVar7 + 0x54;
  }
  if (*(int *)(param_1 + 0x618) == 0) {
    FUN_00a8caf0(1,0,0,0);
  }
  *(int *)(param_1 + 0xb30) = *(int *)(param_1 + 0xb30) - iVar3;
  if ((*(int *)(param_1 + 0xb30) < 1) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar4 = 0;
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a81330();
        iVar4 = FUN_00a7c8a0();
      }
      iVar3 = FUN_00fdbc60();
      if (*(int *)(iVar4 + 0x870) <= iVar3) {
        iVar3 = 0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar4 = 0;
          do {
            iVar2 = *(int *)(param_1 + 800);
            iVar5 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
            if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,&DAT_0163b600), iVar5 != 0)) {
              puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
              *puVar1 = *puVar1 | 1;
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 0x70;
          } while (iVar3 < *(short *)(param_1 + 0x324));
        }
        iVar3 = 0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar4 = 0;
          do {
            iVar2 = *(int *)(param_1 + 800);
            iVar5 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
            if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,&DAT_0163b5fc), iVar5 != 0)) {
              puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 0x70;
          } while (iVar3 < *(short *)(param_1 + 0x324));
        }
        *(undefined4 *)(param_1 + 0xb38) = 1;
      }
    }
  }
  return 1;
}

// 00403C70  Ba0012::vf48  size=339  [class]
void __fastcall Ba0012::vf48(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_00403a90();
  BehaviorBgBase::vf48();
  iVar2 = *(int *)(param_1 + 0x63c);
  iVar1 = *(int *)(iVar2 + 4);
  if (iVar1 != *(int *)(iVar2 + 8) * 0x40 + iVar1) {
    iVar4 = *(int *)(iVar2 + 8) * 0x40 + iVar1;
    do {
      iVar1 = iVar1 + 0x40;
    } while (iVar1 != iVar4);
  }
  if (*(int *)(iVar2 + 4) != 0) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    uVar5 = 0xd0014;
    uVar3 = FUN_00e03ea0("HASHIRA1",0xd0014);
    iVar2 = FUN_00a18d70(uVar3,uVar5);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    uVar5 = 0xd0014;
    uVar3 = FUN_00e03ea0("HASHIRA2",0xd0014);
    iVar2 = FUN_00a18d70(uVar3,uVar5);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    uVar5 = 0xd0014;
    uVar3 = FUN_00e03ea0("HASHIRA3",0xd0014);
    iVar2 = FUN_00a18d70(uVar3,uVar5);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    uVar5 = 0xd0014;
    uVar3 = FUN_00e03ea0("HASHIRA4",0xd0014);
    iVar2 = FUN_00a18d70(uVar3,uVar5);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
  }
  return;
}

// 00403DD0  FUN_00403dd0  size=85  [between]
void __thiscall FUN_00403dd0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00403E30  FUN_00403e30  size=224  [between]
void __fastcall FUN_00403e30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9e290(&DAT_0163b5e8,0,0x3d888889,0x3f800000,0x8000000,0,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    uVar3 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(1,uVar1,uVar3);
    if (param_1 + 0xb60 != 0) {
      FUN_00dffb20(param_1 + 0xb60);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0,0,0,0);
    (**(code **)(*(int *)(param_1 + 0xb60) + 8))(0x41200000,0,0);
  }
  return;
}

// 00403F10  FUN_00403f10  size=611  [between]
void __fastcall FUN_00403f10(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_164;
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9e290(&DAT_0163b5e8,0,0x3e888889,0x3f800000,0,0,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        iVar5 = 0;
        iVar2 = FUN_00a81330();
        if (iVar2 != 0) {
          FUN_00a81330();
          iVar5 = FUN_00a7c8a0();
        }
        iVar2 = FUN_00fdbc60();
        if (*(int *)(iVar5 + 0x870) <= iVar2) {
          iVar2 = 0;
          local_164 = 0;
          if (0 < *(short *)(param_1 + 0x324)) {
            do {
              iVar5 = *(int *)(param_1 + 800);
              iVar3 = *(int *)(*(int *)(iVar5 + 0x60 + iVar2) + 0x40);
              if (iVar3 != 0) {
                iVar3 = FUN_00fdbbd0(iVar3,&DAT_0163b600);
                if (iVar3 != 0) {
                  puVar1 = (uint *)(iVar5 + 0x38 + iVar2);
                  *puVar1 = *puVar1 | 1;
                }
              }
              local_164 = local_164 + 1;
              iVar2 = iVar2 + 0x70;
            } while (local_164 < *(short *)(param_1 + 0x324));
          }
          iVar2 = 0;
          local_164 = 0;
          if (0 < *(short *)(param_1 + 0x324)) {
            do {
              iVar5 = *(int *)(param_1 + 800);
              iVar3 = *(int *)(*(int *)(iVar5 + 0x60 + iVar2) + 0x40);
              if (iVar3 != 0) {
                iVar3 = FUN_00fdbbd0(iVar3,&DAT_0163b5fc);
                if (iVar3 != 0) {
                  puVar1 = (uint *)(iVar5 + 0x38 + iVar2);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
              }
              local_164 = local_164 + 1;
              iVar2 = iVar2 + 0x70;
            } while (local_164 < *(short *)(param_1 + 0x324));
          }
          *(undefined4 *)(param_1 + 0xb38) = 1;
        }
      }
    }
    if (*(int *)(param_1 + 0xb38) != 0) {
      FUN_00403560();
    }
    uVar6 = 0;
    uVar4 = FUN_00a7c8a0(0);
    FUN_004039a0(1,uVar4,uVar6);
    if (param_1 + 0xb60 != 0) {
      FUN_00dffb20(param_1 + 0xb60);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      iVar5 = 0;
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00a81330();
        iVar5 = FUN_00a7c8a0();
      }
      if (((*(int *)(iVar5 + 0x618) != 0x2b) || (*(int *)(iVar5 + 0x1ff4) == 0)) ||
         (3 < *(int *)(iVar5 + 0x61c))) {
        FUN_00a8caf0(0,0,0,0);
        (**(code **)(*(int *)(param_1 + 0xb60) + 8))(0x41200000,0,0);
        *(int *)(param_1 + 0xb40) = *(int *)(param_1 + 0xb40) + 1;
      }
    }
  }
  return;
}

// 00404180  Ba0012::vf4C  size=254  [class]
void __fastcall Ba0012::vf4C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  ExcelStage::vf4C();
  iVar1 = FUN_00a7f600(0x20200);
  FUN_00a7c950();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar3 = 0;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
      }
      if ((((*(int *)(iVar3 + 0x618) == 0x2b) && (*(int *)(iVar3 + 0x1ff4) != 0)) &&
          (*(int *)(iVar3 + 0x61c) < 4)) &&
         ((*(int *)(param_1 + 0x618) == 0 || (*(int *)(param_1 + 0x618) == 1)))) {
        FUN_00a8caf0(2,0,0,0);
      }
    }
  }
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_00403440();
    return;
  case 1:
    FUN_00403e30();
    return;
  case 2:
    FUN_00403f10();
    return;
  case 3:
    FUN_00403490();
    return;
  default:
    return;
  }
}

// 00AAFF30  Ba0012::Ba0012  size=95  [class]
undefined4 * __fastcall Ba0012::Ba0012(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  cEspControler::cEspControler();
  return param_1;
}

// 00AAFF90  Ba0012::vf04  size=6  [class]
undefined * Ba0012::vf04(void)

{
  return &DAT_01b34b04;
}

// 00AB8D90  Ba0012::vf00  size=54  [class]
undefined4 __thiscall Ba0012::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

