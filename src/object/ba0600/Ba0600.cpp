// src/object/ba0600/Ba0600.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00405A50..00AB90E0, 9 functions

#include "mgrr.h"
#include "Ba0600.h"

// 00405A50  Ba0600::vf44  size=5  [class]
void __fastcall Ba0600::vf44(int param_1)

{
  int iVar1;
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [256];
  
  if (*(int *)(param_1 + 0x898) != 0) {
    if (*(int *)(param_1 + 0x89c) != 0) {
      FUN_00e5ca30(*(int *)(param_1 + 0x89c),0x40400000);
      *(undefined4 *)(param_1 + 0x89c) = 0;
    }
    FUN_009f8ea0(auStack_10c,10,*(undefined4 *)(param_1 + 0x4b0),0);
    FUN_00a90970(auStack_100,"%s_se_setobj_stop",auStack_10c);
    FUN_00e5e080(auStack_100,param_1 + 0x40,0,0xffffffff,0);
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  FUN_00a934c0();
  FUN_00a933e0();
  FUN_00a93450();
  if (*(undefined4 **)(param_1 + 0x7b8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7b8))(1);
    *(undefined4 *)(param_1 + 0x7b8) = 0;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  if (*(int **)(param_1 + 0x888) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x888) + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    if (*(undefined4 **)(param_1 + 0x888) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x888))(1);
      *(undefined4 *)(param_1 + 0x888) = 0;
    }
  }
  FUN_00a8c820();
  iVar1 = *(int *)(param_1 + 0x884);
  if (iVar1 != 0) {
    cXml::cXml_6();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x884) = 0;
  }
  if (*(int *)(param_1 + 0x9f4) != 0) {
    FUN_00983fd0(param_1);
  }
  if (*(int *)(param_1 + 0xa54) != 0) {
    if (*(int *)(param_1 + 0xa58) != -1) {
      FUN_00c5ad80(*(int *)(param_1 + 0xa58));
    }
    if (*(int *)(param_1 + 0xa5c) != -1) {
      FUN_00c4d100(*(int *)(param_1 + 0xa5c));
    }
  }
  FUN_009841c0(param_1);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  Behavior::vf44();
  return;
}

// 00405A60  FUN_00405a60  size=104  [between]
int __thiscall FUN_00405a60(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    piVar6 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar5 = *(byte **)(*piVar6 + 0x40);
      pbVar3 = param_2;
      if (pbVar5 != (byte *)0x0) {
        do {
          bVar1 = *pbVar3;
          bVar7 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00405ab0:
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_00405ab5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00405ab0;
          pbVar5 = pbVar5 + 2;
          pbVar3 = pbVar3 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00405ab5:
        if (iVar4 == 0) {
          return iVar2;
        }
      }
      iVar2 = iVar2 + 1;
      piVar6 = piVar6 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
  }
  return -1;
}

// 00405B60  Ba0600::startup  size=1237  [class]
undefined4 __fastcall Ba0600::startup(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  bool bVar8;
  
  iVar2 = BehaviorBa::startup();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_00405bd6:
    iVar2 = 0;
  }
  else {
    piVar7 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar6 = *(byte **)(*piVar7 + 0x40);
      if (pbVar6 != (byte *)0x0) {
        pcVar3 = "koukoku_001_CH";
        do {
          bVar1 = *pcVar3;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00405bb5:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00405bba;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar3[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00405bb5;
          pcVar3 = pcVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00405bba:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_00405bd6;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_00405be0;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_00405be0:
  *(int *)(param_1 + 0xb30) = iVar2;
  if (iVar2 == 0) {
    iVar2 = 0;
    if (*(short *)(param_1 + 0x324) < 1) {
LAB_00405c51:
      iVar2 = 0;
    }
    else {
      piVar7 = (int *)(*(int *)(param_1 + 800) + 0x60);
      do {
        pbVar6 = *(byte **)(*piVar7 + 0x40);
        if (pbVar6 != (byte *)0x0) {
          pbVar5 = &DAT_0163b864;
          do {
            bVar1 = *pbVar5;
            bVar8 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_00405c30:
              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_00405c35;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar8 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_00405c30;
            pbVar5 = pbVar5 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00405c35:
          if (iVar4 == 0) {
            if (iVar2 == -1) goto LAB_00405c51;
            iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
            goto LAB_00405c5b;
          }
        }
        iVar2 = iVar2 + 1;
        piVar7 = piVar7 + 0x1c;
      } while (iVar2 < *(short *)(param_1 + 0x324));
      iVar2 = 0;
    }
LAB_00405c5b:
    *(int *)(param_1 + 0xb30) = iVar2;
  }
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_00405cc6:
    iVar2 = 0;
  }
  else {
    piVar7 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar6 = *(byte **)(*piVar7 + 0x40);
      if (pbVar6 != (byte *)0x0) {
        pcVar3 = "koukoku_001_00_shl000";
        do {
          bVar1 = *pcVar3;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00405ca5:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00405caa;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar3[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00405ca5;
          pcVar3 = pcVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00405caa:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_00405cc6;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_00405cd0;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_00405cd0:
  *(int *)(param_1 + 0xb34) = iVar2;
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_00405d41:
    iVar2 = 0;
  }
  else {
    piVar7 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar6 = *(byte **)(*piVar7 + 0x40);
      if (pbVar6 != (byte *)0x0) {
        pcVar3 = "koukoku_001_01_shl000";
        do {
          bVar1 = *pcVar3;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00405d20:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00405d25;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar3[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00405d20;
          pcVar3 = pcVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00405d25:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_00405d41;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_00405d4b;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_00405d4b:
  *(int *)(param_1 + 0xb38) = iVar2;
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_00405db6:
    iVar2 = 0;
  }
  else {
    piVar7 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar6 = *(byte **)(*piVar7 + 0x40);
      if (pbVar6 != (byte *)0x0) {
        pcVar3 = "koukoku_001_02_shl000";
        do {
          bVar1 = *pcVar3;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00405d95:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00405d9a;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar3[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00405d95;
          pcVar3 = pcVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00405d9a:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_00405db6;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_00405dc0;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_00405dc0:
  *(int *)(param_1 + 0xb3c) = iVar2;
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_00405e31:
    iVar2 = 0;
  }
  else {
    piVar7 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar6 = *(byte **)(*piVar7 + 0x40);
      if (pbVar6 != (byte *)0x0) {
        pbVar5 = &DAT_0163b814;
        do {
          bVar1 = *pbVar5;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00405e10:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00405e15;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00405e10;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00405e15:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_00405e31;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_00405e3b;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_00405e3b:
  *(int *)(param_1 + 0xb40) = iVar2;
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_00405ea6:
    iVar2 = 0;
  }
  else {
    piVar7 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar6 = *(byte **)(*piVar7 + 0x40);
      if (pbVar6 != (byte *)0x0) {
        pbVar5 = &DAT_0163b80c;
        do {
          bVar1 = *pbVar5;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00405e85:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00405e8a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00405e85;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00405e8a:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_00405ea6;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_00405eb0;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_00405eb0:
  *(int *)(param_1 + 0xb44) = iVar2;
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_00405f21:
    iVar2 = 0;
  }
  else {
    piVar7 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar6 = *(byte **)(*piVar7 + 0x40);
      if (pbVar6 != (byte *)0x0) {
        pbVar5 = &DAT_0163b804;
        do {
          bVar1 = *pbVar5;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00405f00:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00405f05;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00405f00;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00405f05:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_00405f21;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_00405f2b;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_00405f2b:
  *(int *)(param_1 + 0xb48) = iVar2;
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_00405f96:
    iVar2 = 0;
  }
  else {
    piVar7 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar6 = *(byte **)(*piVar7 + 0x40);
      if (pbVar6 != (byte *)0x0) {
        pbVar5 = &DAT_0163b7fc;
        do {
          bVar1 = *pbVar5;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00405f75:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00405f7a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00405f75;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00405f7a:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_00405f96;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_00405fa0;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_00405fa0:
  *(int *)(param_1 + 0xb4c) = iVar2;
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_00406011:
    iVar2 = 0;
  }
  else {
    piVar7 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar6 = *(byte **)(*piVar7 + 0x40);
      if (pbVar6 != (byte *)0x0) {
        pbVar5 = &DAT_0163b7f4;
        do {
          bVar1 = *pbVar5;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00405ff0:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00405ff5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00405ff0;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00405ff5:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_00406011;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_0040601b;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_0040601b:
  *(int *)(param_1 + 0xb50) = iVar2;
  *(undefined4 *)(param_1 + 0x618) = 0;
  return 1;
}

// 00406040  FUN_00406040  size=208  [between]
void __fastcall FUN_00406040(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a8ca50(2,0,0);
    FUN_00aa92c0(1);
    if (*(int *)(param_1 + 0xb30) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb30) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    if (*(int *)(param_1 + 0xb34) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb34) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    if (*(int *)(param_1 + 0xb38) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb38) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    if (*(int *)(param_1 + 0xb3c) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb3c) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    if (*(int *)(param_1 + 0xb40) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb40) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
      FUN_00a09ba0(0xffffffff);
    }
    if (*(int *)(param_1 + 0xb44) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb44) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
      FUN_00a09ba0(0xffffffff);
    }
    if (*(int *)(param_1 + 0xb48) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb48) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0xb4c) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb4c) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0xb50) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb50) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 00406110  FUN_00406110  size=221  [between]
void __fastcall FUN_00406110(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a8ca50(1,0,0);
    FUN_00aa92c0(2);
    if (*(int *)(param_1 + 0xb30) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb30) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0xb34) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb34) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0xb38) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb38) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0xb3c) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb3c) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0xb40) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb40) + 0x38);
      *puVar1 = *puVar1 | 1;
      FUN_00a09ba0(0);
    }
    if (*(int *)(param_1 + 0xb44) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb44) + 0x38);
      *puVar1 = *puVar1 | 1;
      FUN_00a09ba0(1);
    }
    if (*(int *)(param_1 + 0xb48) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb48) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    if (*(int *)(param_1 + 0xb4c) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb4c) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    if (*(int *)(param_1 + 0xb50) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb50) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    FUN_00e5e0c0("r308_se_picture_sam",param_1,0xffffffff,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 00406210  Ba0600::vf4C  size=40  [class]
void __fastcall Ba0600::vf4C(int param_1)

{
  ExcelStage::vf4C();
  if (*(int *)(param_1 + 0x618) == 0) {
    FUN_00406040();
    return;
  }
  if (*(int *)(param_1 + 0x618) == 1) {
    FUN_00406110();
    return;
  }
  return;
}

// 00AB0460  Ba0600::Ba0600  size=18  [class]
undefined4 * __fastcall Ba0600::Ba0600(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB0480  Ba0600::vf04  size=6  [class]
undefined * Ba0600::vf04(void)

{
  return &DAT_01b34b34;
}

// 00AB90E0  Ba0600::destruct  size=43  [class]
undefined4 __thiscall Ba0600::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

