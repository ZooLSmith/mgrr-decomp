// src/unsorted/unit_0057A890.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057A890..0057AAE0, 2 functions

#include "mgrr.h"

// 0057A890  FUN_0057a890  size=414  [run]
/* WARNING: Switch with 1 destination removed at 0x0057a963 : 14 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x0057a981 : 4 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x0057a99b : 4 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x0057a9e4 : 8 cases all go to same destination */

uint __fastcall FUN_0057a890(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x618);
  uVar1 = uVar2;
  if ((int)uVar2 < 0x20001) {
    if ((uVar2 != 0x20000) && (uVar1 = uVar2 - 0x10000, uVar2 - 0x10000 < 0x14)) {
      uVar1 = (uint)*(byte *)(uVar2 + 0x56aa48);
      switch(uVar2) {
      case 0x10000:
        uVar1 = FUN_00579c30();
        break;
      case 0x10001:
        uVar1 = FUN_00578d80();
        break;
      case 0x10002:
        uVar1 = FUN_00574000();
        break;
      case 0x10003:
        uVar1 = FUN_00574060();
        break;
      case 0x1000f:
        uVar1 = FUN_005694f0();
      }
    }
  }
  else if ((int)uVar2 < 0x30001) {
    if (uVar2 != 0x30000) {
      uVar1 = uVar2 - 0x20001;
      switch(uVar2) {
      case 0x20005:
        uVar1 = FUN_00561940();
        break;
      case 0x20006:
        uVar1 = FUN_00561e50();
        break;
      case 0x2000b:
        uVar1 = FUN_00562e00();
      }
    }
  }
  else if ((int)uVar2 < 0x50001) {
    if (uVar2 != 0x50000) {
      uVar1 = uVar2 - 0x30001;
    }
  }
  else if ((int)uVar2 < 0x60001) {
    if (uVar2 != 0x60000) {
      uVar1 = uVar2 - 0x50001;
    }
  }
  else if ((int)uVar2 < 0x70001) {
    if (uVar2 == 0x70000) {
      uVar1 = FUN_0056ac70();
    }
    else {
      uVar1 = uVar2 - 0x60001;
    }
  }
  else if ((int)uVar2 < 0x80001) {
    if (uVar2 != 0x80000) {
      uVar1 = uVar2 - 0x70001;
      switch(uVar2 - 0x70001) {
      case 0:
        uVar1 = FUN_0056af50();
      }
    }
  }
  else if ((int)uVar2 < 0x90001) {
    if ((uVar2 != 0x90000) && (uVar1 = uVar2 - 0x80001, uVar2 - 0x80001 < 8)) {
      uVar1 = (uint)*(byte *)(uVar2 + 0x4faacb);
    }
  }
  else if (((int)uVar2 < 0xe0001) && (uVar2 != 0xe0000)) {
    uVar1 = uVar2 - 0x90001;
  }
  if (((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) &&
     (*(int *)(param_1 + 0x4e4) == 0)) {
    uVar1 = FUN_0056dfe0();
  }
  if (*(int *)(param_1 + 0x18c8) != 0) {
    uVar2 = FUN_0055fb20();
    return uVar2;
  }
  return uVar1;
}

// 0057AAE0  FUN_0057aae0  size=710  [run]
void __fastcall FUN_0057aae0(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  iVar2 = param_1[0x186];
  if (iVar2 < 0x20001) {
    if (iVar2 == 0x20000) {
      FUN_0055abd0();
      return;
    }
    switch(iVar2) {
    case 0x10000:
      FUN_005684f0();
      return;
    case 0x10001:
      FUN_00562c60();
      return;
    case 0x10002:
      FUN_005685e0();
      return;
    case 0x10003:
      FUN_00568790();
      return;
    case 0x10004:
      FUN_0055bb10();
      return;
    case 0x10005:
      FUN_0055bc10();
      return;
    case 0x10006:
      FUN_005689e0();
      return;
    case 0x10007:
      FUN_00568b60();
      return;
    case 0x10008:
      FUN_0055bd30();
      return;
    case 0x10009:
      FUN_00562f00();
      return;
    case 0x1000a:
      FUN_005631b0();
      return;
    case 0x1000b:
      FUN_00568de0();
      return;
    case 0x1000c:
      FUN_00568ea0();
      return;
    case 0x1000d:
      FUN_00570b60();
      return;
    case 0x1000e:
      FUN_0055c010();
      return;
    case 0x1000f:
      FUN_00574270();
      return;
    case 0x10010:
      FUN_0055c0a0();
      return;
    case 0x10011:
      FUN_0055c190();
      return;
    case 0x10012:
      FUN_00569520();
      return;
    case 0x10013:
      FUN_00570f70();
      return;
    }
  }
  else if (iVar2 < 0x30001) {
    if (iVar2 == 0x30000) {
      FUN_00566090();
      return;
    }
    switch(iVar2) {
    case 0x20001:
      FUN_00560b60();
      return;
    case 0x20002:
      FUN_00560c90();
      return;
    case 0x20003:
      FUN_00560e70();
      return;
    case 0x20004:
      FUN_005617c0();
      return;
    case 0x20005:
      FUN_005619a0();
      return;
    case 0x20006:
      FUN_00561eb0();
      return;
    case 0x20007:
      FUN_0056f250();
      return;
    case 0x20008:
      FUN_0056f360();
      return;
    case 0x20009:
      FUN_0056f870();
      return;
    case 0x2000a:
      FUN_00562d60();
      return;
    case 0x2000b:
      FUN_00573880();
      return;
    case 0x2000c:
      FUN_0056f9a0();
      return;
    case 0x2000d:
      FUN_0056fbf0();
      return;
    }
  }
  else if (iVar2 < 0x50001) {
    if (iVar2 == 0x50000) {
switchD_0057ac4b_caseD_0:
      FUN_00568080();
      return;
    }
    switch(iVar2) {
    case 0x30001:
      FUN_005662b0();
      return;
    case 0x30002:
      FUN_00566c80();
      return;
    case 0x30003:
      FUN_00566eb0();
      return;
    case 0x30004:
      FUN_00566630();
      return;
    case 0x30005:
      FUN_00566980();
      return;
    case 0x30006:
      FUN_00567200();
      return;
    case 0x30007:
      FUN_005673a0();
      return;
    case 0x30008:
      FUN_00567540();
      return;
    case 0x30009:
    case 0x3000a:
      FUN_00567620();
      return;
    case 0x3000b:
      FUN_0055b650();
      return;
    case 0x3000c:
      FUN_00567940();
      return;
    case 0x3000d:
      FUN_00567ab0();
      return;
    case 0x3000e:
      FUN_00567c20();
      return;
    }
  }
  else if (iVar2 < 0x60001) {
    if (iVar2 == 0x60000) {
      FUN_00579790();
      return;
    }
    switch(iVar2) {
    case 0x50001:
    case 0x50002:
      goto switchD_0057ac4b_caseD_0;
    case 0x50003:
      FUN_00573c00();
      return;
    case 0x50004:
      FUN_0055b7d0();
      return;
    }
  }
  else if (iVar2 < 0x70001) {
    if (iVar2 == 0x70000) {
      FUN_0056ae50();
      return;
    }
    switch(iVar2) {
    case 0x60001:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0xa9,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
        param_1[0x248] = 0x41f00000;
        FUN_00578d00();
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] <= 0.0) {
        param_1[0x1af] = 1;
        if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
          param_1[0x187] = param_1[0x187] + 1;
          DebrisExplodeManager::addHandle(&stack0xfffffffc,1);
          return;
        }
        if (param_1[0x294] != 0) {
          FUN_00ac8e10(1);
          if ((*(byte *)((int)param_1 + 0xdc2) & 1) != 0) {
            FUN_00a8c9b0(0,2,0x3f800000,0);
            param_1[0x370] = param_1[0x370] & 0xfffeffff;
          }
          if ((param_1[0x370] & 0x8000U) == 0) {
            FUN_00e02240(param_1[0x13c],3);
            param_1[0x370] = param_1[0x370] | 0x8000;
          }
          (**(code **)(*param_1 + 0x20))();
          if (param_1[0x66c] != 0) {
            param_1[0x66c] = 0;
            FUN_00a8c9b0(0,0x197,0,0);
          }
          iVar2 = FUN_00a81330();
          if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
            (**(code **)(*piVar3 + 0x20))();
          }
          param_1[0x1af] = 1;
          FUN_0055f9e0(0x60002);
          if (param_1[0x1d9] != 0) {
            FUN_008e3c10();
          }
          iVar2 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
          param_1[0x66f] = iVar2;
          FUN_00940450(param_1[0x20f]);
          if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
            (**(code **)(*param_1 + 0x364))(0xffffffff);
          }
        }
      }
      return;
    case 0x60002:
      FUN_005681b0();
      return;
    case 0x60003:
    case 0x60004:
      FUN_00568260();
      return;
    }
  }
  else if (iVar2 < 0x80001) {
    if (iVar2 == 0x80000) {
      FUN_0056b340();
      return;
    }
    switch(iVar2) {
    case 0x70001:
      FUN_0056b030();
      return;
    case 0x70002:
      FUN_0056b0d0();
      return;
    case 0x70003:
      FUN_0056b220();
      return;
    case 0x70004:
      FUN_00576170();
      return;
    case 0x70005:
      FUN_00571f20();
      return;
    case 0x70006:
      FUN_0056b2b0();
      return;
    }
  }
  else if (iVar2 < 0x90001) {
    if (iVar2 == 0x90000) {
      FUN_005695a0();
      return;
    }
    switch(iVar2) {
    case 0x80001:
      FUN_0056b3d0();
      return;
    case 0x80002:
      if (param_1[0x187] == 0) {
        uVar4 = 0x8038000;
        if ((param_1[0x370] & 0x100000U) != 0) {
          uVar4 = 0x8038040;
        }
        FUN_00aa4120(param_1[0x62c],0,0x3d888889,0x3f800000,uVar4,0xbf800000,0x3f800000);
        param_1[0x139] = 1;
        FUN_00a8ee20(0);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = 0x41700000;
        param_1[0x249] = 0x43960000;
        if (param_1[0x62e] == 1) {
          param_1[0x62e] = 0;
          fVar5 = (float10)FUN_00dde300(0,0x3f800000);
          FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            Animation::Motion::Unit::setCurrentTime
                      (0,(float)(fVar5 * (float10)10.0 * (float10)0.016666668));
          }
        }
        FUN_009413c0(param_1[0x20f]);
        param_1[0x188] = 0;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] <= 0.0) {
        FUN_00578d00();
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if ((iVar2 != 0) && (param_1[0x294] != 0)) {
        FUN_00ac8e10(1);
        if ((*(byte *)((int)param_1 + 0xdc2) & 1) != 0) {
          FUN_00a8c9b0(0,2,0x3f800000,0);
          param_1[0x370] = param_1[0x370] & 0xfffeffff;
        }
        if ((param_1[0x370] & 0x8000U) == 0) {
          FUN_00e02240(param_1[0x13c],3);
          param_1[0x370] = param_1[0x370] | 0x8000;
        }
        (**(code **)(*param_1 + 0x20))();
        if (param_1[0x66c] != 0) {
          param_1[0x66c] = 0;
          FUN_00a8c9b0(0,0x197,0,0);
        }
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
          (**(code **)(*piVar3 + 0x20))();
        }
        param_1[0x1af] = 1;
        FUN_0055f9e0(0x60002);
        if (param_1[0x1d9] != 0) {
          FUN_008e3c10();
        }
        iVar2 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
        param_1[0x66f] = iVar2;
        FUN_00940450(param_1[0x20f]);
        if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
          (**(code **)(*param_1 + 0x364))(0xffffffff);
        }
      }
      return;
    case 0x80003:
      FUN_0056b4a0();
      return;
    case 0x80004:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0xa7,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = 0x41700000;
        param_1[0x139] = 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] <= 0.0) {
        FUN_00578d00();
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if ((iVar2 != 0) && (param_1[0x294] != 0)) {
        FUN_00ac8e10(1);
        if ((*(byte *)((int)param_1 + 0xdc2) & 1) != 0) {
          FUN_00a8c9b0(0,2,0x3f800000,0);
          param_1[0x370] = param_1[0x370] & 0xfffeffff;
        }
        if ((param_1[0x370] & 0x8000U) == 0) {
          FUN_00e02240(param_1[0x13c],3);
          param_1[0x370] = param_1[0x370] | 0x8000;
        }
        (**(code **)(*param_1 + 0x20))();
        if (param_1[0x66c] != 0) {
          param_1[0x66c] = 0;
          FUN_00a8c9b0(0,0x197,0,0);
        }
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
          (**(code **)(*piVar3 + 0x20))();
        }
        param_1[0x1af] = 1;
        FUN_0055f9e0(0x60002);
        if (param_1[0x1d9] != 0) {
          FUN_008e3c10();
        }
        iVar2 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
        param_1[0x66f] = iVar2;
        FUN_00940450(param_1[0x20f]);
        if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
          (**(code **)(*param_1 + 0x364))(0xffffffff);
        }
      }
      return;
    case 0x80005:
      FUN_00572030();
      return;
    case 0x80006:
      FUN_0055c5f0();
      return;
    case 0x80007:
      FUN_0056b700();
      return;
    case 0x80008:
      if (param_1[0x187] == 0) {
        param_1[0x139] = 1;
        FUN_00a8ee20(0);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = 0x41700000;
        param_1[0x249] = 0x43960000;
        if (param_1[0x62e] == 1) {
          param_1[0x62e] = 0;
          fVar5 = (float10)FUN_00dde300(0,0x3f800000);
          FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            Animation::Motion::Unit::setCurrentTime
                      (0,(float)(fVar5 * (float10)10.0 * (float10)0.016666668));
          }
        }
        FUN_009413c0(param_1[0x20f]);
        param_1[0x188] = 0;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] <= 0.0) {
        FUN_00578d00();
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if ((iVar2 != 0) && (param_1[0x294] != 0)) {
        FUN_00ac8e10(1);
        if ((*(byte *)((int)param_1 + 0xdc2) & 1) != 0) {
          FUN_00a8c9b0(0,2,0x3f800000,0);
          param_1[0x370] = param_1[0x370] & 0xfffeffff;
        }
        if ((param_1[0x370] & 0x8000U) == 0) {
          FUN_00e02240(param_1[0x13c],3);
          param_1[0x370] = param_1[0x370] | 0x8000;
        }
        (**(code **)(*param_1 + 0x20))();
        if (param_1[0x66c] != 0) {
          param_1[0x66c] = 0;
          FUN_00a8c9b0(0,0x197,0,0);
        }
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
          (**(code **)(*piVar3 + 0x20))();
        }
        param_1[0x1af] = 1;
        FUN_0055f9e0(0x60002);
        if (param_1[0x1d9] != 0) {
          FUN_008e3c10();
        }
        iVar2 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
        param_1[0x66f] = iVar2;
        FUN_00940450(param_1[0x20f]);
        if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
          (**(code **)(*param_1 + 0x364))(0xffffffff);
        }
      }
      return;
    }
  }
  else if (iVar2 < 0xe0001) {
    if (iVar2 == 0xe0000) {
      FUN_00569c10();
      return;
    }
    switch(iVar2) {
    case 0x90001:
      FUN_005696a0();
      return;
    case 0x90002:
      FUN_005697d0();
      return;
    case 0x90003:
      FUN_005699b0();
      return;
    case 0x90004:
      FUN_00574620();
      return;
    }
  }
  else if (iVar2 < 0xf0001) {
    if (iVar2 == 0xf0000) {
      FUN_00563650();
      return;
    }
    if (iVar2 == 0xe0001) {
      FUN_00574a70();
      return;
    }
  }
  else {
    switch(iVar2) {
    case 0xf0001:
      FUN_00563860();
      return;
    case 0xf0002:
      FUN_00563d60();
      return;
    case 0xf0003:
      FUN_005642d0();
      return;
    case 0xf0004:
      FUN_00564480();
      return;
    case 0xf0005:
      FUN_00564e60();
      return;
    case 0xf0006:
      FUN_0055b210();
      return;
    case 0xf0007:
    case 0xf0008:
      FUN_0056fd00();
      return;
    }
  }
  return;
}

