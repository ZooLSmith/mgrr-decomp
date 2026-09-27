// src/boss/bm0600/Bm0600.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00413EC0..00AB90B0, 8 functions

#include "types.h"

// 00413EC0  Bm0600::thunk_vf44  size=5  [class]
void __fastcall Bm0600::thunk_vf44(int param_1)

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

// 00413ED0  Bm0600::vf40  size=874  [class]
undefined4 __fastcall Bm0600::vf40(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  bool bVar8;
  
  iVar2 = Bm6041::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_00413f46:
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
LAB_00413f25:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00413f2a;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar3[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00413f25;
          pcVar3 = pcVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00413f2a:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_00413f46;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_00413f50;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_00413f50:
  *(int *)(param_1 + 0xb40) = iVar2;
  if (iVar2 == 0) {
    iVar2 = 0;
    if (*(short *)(param_1 + 0x324) < 1) {
LAB_00413fc1:
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
LAB_00413fa0:
              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_00413fa5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar8 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_00413fa0;
            pbVar5 = pbVar5 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00413fa5:
          if (iVar4 == 0) {
            if (iVar2 == -1) goto LAB_00413fc1;
            iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
            goto LAB_00413fcb;
          }
        }
        iVar2 = iVar2 + 1;
        piVar7 = piVar7 + 0x1c;
      } while (iVar2 < *(short *)(param_1 + 0x324));
      iVar2 = 0;
    }
LAB_00413fcb:
    *(int *)(param_1 + 0xb40) = iVar2;
  }
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_00414036:
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
LAB_00414015:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0041401a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00414015;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0041401a:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_00414036;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_00414040;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_00414040:
  *(int *)(param_1 + 0xb44) = iVar2;
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_004140b1:
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
LAB_00414090:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00414095;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00414090;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00414095:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_004140b1;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_004140bb;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_004140bb:
  *(int *)(param_1 + 0xb48) = iVar2;
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_00414126:
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
LAB_00414105:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0041410a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00414105;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0041410a:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_00414126;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_00414130;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_00414130:
  *(int *)(param_1 + 0xb4c) = iVar2;
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_004141a1:
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
LAB_00414180:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00414185;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00414180;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00414185:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_004141a1;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_004141ab;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_004141ab:
  *(int *)(param_1 + 0xb50) = iVar2;
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_00414216:
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
LAB_004141f5:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_004141fa;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_004141f5;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_004141fa:
        if (iVar4 == 0) {
          if (iVar2 == -1) goto LAB_00414216;
          iVar2 = *(int *)(param_1 + 800) + iVar2 * 0x70;
          goto LAB_00414220;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
    iVar2 = 0;
  }
LAB_00414220:
  *(int *)(param_1 + 0xb54) = iVar2;
  *(undefined4 *)(param_1 + 0x618) = 0;
  return 1;
}

// 00414240  FUN_00414240  size=164  [between]
void __fastcall FUN_00414240(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a8ca50(2,0,0);
    FUN_00aa92c0(1);
    if (*(int *)(param_1 + 0xb40) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb40) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    if (*(int *)(param_1 + 0xb44) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb44) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
      FUN_00a09ba0(0xffffffff);
    }
    if (*(int *)(param_1 + 0xb48) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb48) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
      FUN_00a09ba0(0xffffffff);
    }
    if (*(int *)(param_1 + 0xb4c) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb4c) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0xb50) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb50) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0xb54) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb54) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 004142F0  FUN_004142f0  size=180  [between]
void __fastcall FUN_004142f0(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a8ca50(1,0,0);
    FUN_00aa92c0(2);
    if (*(int *)(param_1 + 0xb40) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb40) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0xb44) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb44) + 0x38);
      *puVar1 = *puVar1 | 1;
      FUN_00a09ba0(0);
    }
    if (*(int *)(param_1 + 0xb48) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb48) + 0x38);
      *puVar1 = *puVar1 | 1;
      FUN_00a09ba0(1);
    }
    if (*(int *)(param_1 + 0xb4c) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb4c) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    if (*(int *)(param_1 + 0xb50) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb50) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    if (*(int *)(param_1 + 0xb54) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xb54) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    FUN_00e5e0c0("r308_se_picture_sam",param_1,0xffffffff,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 004143D0  Bm0600::vf4C  size=40  [class]
void __fastcall Bm0600::vf4C(int param_1)

{
  BehaviorBgBase::vf4C();
  if (*(int *)(param_1 + 0x618) == 0) {
    FUN_00414240();
    return;
  }
  if (*(int *)(param_1 + 0x618) == 1) {
    FUN_004142f0();
    return;
  }
  return;
}

// 00AB0410  Bm0600::Bm0600  size=18  [class]
undefined4 * __fastcall Bm0600::Bm0600(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB0430  Bm0600::vf04  size=6  [class]
undefined * Bm0600::vf04(void)

{
  return &DAT_01b34be4;
}

// 00AB90B0  Bm0600::vf00  size=43  [class]
undefined4 __thiscall Bm0600::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

