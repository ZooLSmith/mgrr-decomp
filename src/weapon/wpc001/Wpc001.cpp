// src/weapon/wpc001/Wpc001.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00601C60..00ADE250, 123 functions

#include "mgrr.h"
#include "Wpc001.h"

// 00601C60  Wpc001::thunk_vf44  size=5  [class]
void __fastcall Wpc001::thunk_vf44(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(*(int *)(param_1 + 0xdb0) + 8))(0x3f800000,0,0);
  RayCastManager::getWork(param_1 + 0x1124);
  RayCastManager::getWork(param_1 + 0x1128);
  pcVar1 = *(code **)(*(int *)(param_1 + 0x1130) + 4);
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x90c) = 0;
  (*pcVar1)();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0xe60) + 4))();
  *(undefined4 *)(param_1 + 0xf14) = 0;
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7b4);
  if (iVar2 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar2);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  piVar3 = (int *)FUN_00910da0();
  (**(code **)(*piVar3 + 0x28))((undefined4 *)(param_1 + 0x8dc));
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  FUN_00910ac0(0);
  *(undefined4 *)(param_1 + 0xf30) = 0;
  FUN_00900ca0();
  FUN_00900ca0();
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x1114) != 0) {
    FUN_00a805f0();
  }
  *(undefined4 *)(param_1 + 0x1114) = 0;
  FUN_00cd4630(param_1);
  Behavior::vf44();
  return;
}

// 00601C70  Wpc001::vf48  size=28  [class]
void __fastcall Wpc001::vf48(int param_1)

{
  float10 fVar1;
  
  BehaviorBalkan::vf48();
  fVar1 = (float10)FUN_00e03a90(0);
  *(float *)(param_1 + 0xf20) = (float)fVar1;
  return;
}

// 00601C90  Wpc001::vf50  size=26  [class]
void __fastcall Wpc001::vf50(int param_1)

{
  BehaviorBalkan::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 00601CB0  Wpc001::thunk_vf54  size=5  [class]
void __fastcall Wpc001::thunk_vf54(int param_1)

{
  Behavior::vf54();
  if ((*(int *)(param_1 + 0x930) != -1) && (*(int *)(param_1 + 0x7b4) != 0)) {
    FUN_0091e980(param_1);
  }
  return;
}

// 00601CD0  Wpc001::thunk_vf30  size=5  [class]
void __fastcall Wpc001::thunk_vf30(int param_1)

{
  int iVar1;
  int *piVar2;
  
  Bh0064::vf30();
  if (*(int *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0xe4) = *(undefined4 *)(param_1 + 0xb90);
  }
  *(undefined4 *)(param_1 + 0xf24) = 0;
  FUN_00a933e0();
  FUN_00a934c0();
  iVar1 = FUN_00932720();
  if ((iVar1 != 0xf14) && (iVar1 != 0xf10)) {
    FUN_00ac5d00(*(undefined4 *)(param_1 + 0x1120),param_1 + 0x130);
  }
  piVar2 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar2 + 0x3c))(*(undefined4 *)(param_1 + 0x120c));
  return;
}

// 00601CE0  Wpc001::startup  size=1693  [class]
undefined4 __fastcall Wpc001::startup(int param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  bool bVar13;
  int iStack_24;
  undefined4 local_14;
  
  iVar5 = BehaviorBulletBase::startup();
  if (iVar5 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1220) = 0;
  *(undefined4 *)(param_1 + 0x1224) = 0;
  *(undefined4 *)(param_1 + 0x1228) = 0;
  *(undefined4 *)(param_1 + 0x122c) = local_14;
  iVar5 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = RigidBodyCollision::RigidBodyCollision();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x4f0);
  *(undefined4 *)(param_1 + 0x7b0) = uVar6;
  uVar6 = FUN_00de46d0("_col.hkx",0);
  uVar7 = FUN_00de4550("_col.hkx",0);
  iVar5 = FUN_008f6410(uVar3,uVar7,uVar6);
  if (iVar5 != 0) {
    puVar8 = (undefined4 *)FUN_009f8b60();
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar8);
    FUN_008f2cd0(0);
  }
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 0;
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
  uVar4 = FUN_00dde2a0(0,3);
  switch(uVar4) {
  case 0:
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar12 = 0;
      do {
        pbVar9 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar12) + 0x40);
        if (pbVar9 != (byte *)0x0) {
          pbVar11 = &DAT_01645930;
          do {
            bVar2 = *pbVar9;
            bVar13 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_00601e64:
              iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_00601e69;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar13 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_00601e64;
            pbVar9 = pbVar9 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar10 = 0;
LAB_00601e69:
          if (iVar10 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + iVar12 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar5 = iVar5 + 1;
        iVar12 = iVar12 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar12 = 0;
      do {
        pbVar9 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar12) + 0x40);
        if (pbVar9 != (byte *)0x0) {
          pbVar11 = &DAT_01645924;
          do {
            bVar2 = *pbVar9;
            bVar13 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_00601ed0:
              iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_00601ed5;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar13 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_00601ed0;
            pbVar9 = pbVar9 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar10 = 0;
LAB_00601ed5:
          if (iVar10 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar12);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar5 = iVar5 + 1;
        iVar12 = iVar12 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
    iStack_24 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        pbVar9 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar5) + 0x40);
        if (pbVar9 != (byte *)0x0) {
          pbVar11 = &DAT_01645918;
          do {
            bVar2 = *pbVar9;
            bVar13 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_00601f47:
              iVar12 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_00601f4c;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar13 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_00601f47;
            pbVar9 = pbVar9 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar12 = 0;
LAB_00601f4c:
          if (iVar12 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + iVar5 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iStack_24 = iStack_24 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iStack_24 < *(short *)(param_1 + 0x324));
    }
    break;
  case 1:
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar12 = 0;
      do {
        pbVar9 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar12) + 0x40);
        if (pbVar9 != (byte *)0x0) {
          pbVar11 = &DAT_0164590c;
          do {
            bVar2 = *pbVar9;
            bVar13 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_00601fc0:
              iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_00601fc5;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar13 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_00601fc0;
            pbVar9 = pbVar9 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar10 = 0;
LAB_00601fc5:
          if (iVar10 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar12);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar5 = iVar5 + 1;
        iVar12 = iVar12 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar12 = 0;
      do {
        pbVar9 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar12) + 0x40);
        if (pbVar9 != (byte *)0x0) {
          pbVar11 = &DAT_01645924;
          do {
            bVar2 = *pbVar9;
            bVar13 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_00602030:
              iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_00602035;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar13 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_00602030;
            pbVar9 = pbVar9 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar10 = 0;
LAB_00602035:
          if (iVar10 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + iVar12 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar5 = iVar5 + 1;
        iVar12 = iVar12 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
    iStack_24 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        pbVar9 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar5) + 0x40);
        if (pbVar9 != (byte *)0x0) {
          pbVar11 = &DAT_01645918;
          do {
            bVar2 = *pbVar9;
            bVar13 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_006020a3:
              iVar12 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_006020a8;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar13 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_006020a3;
            pbVar9 = pbVar9 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar12 = 0;
LAB_006020a8:
          if (iVar12 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iStack_24 = iStack_24 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iStack_24 < *(short *)(param_1 + 0x324));
    }
    break;
  case 2:
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar12 = 0;
      do {
        pbVar9 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar12) + 0x40);
        if (pbVar9 != (byte *)0x0) {
          pbVar11 = &DAT_0164590c;
          do {
            bVar2 = *pbVar9;
            bVar13 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_00602120:
              iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_00602125;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar13 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_00602120;
            pbVar9 = pbVar9 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar10 = 0;
LAB_00602125:
          if (iVar10 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + iVar12 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar5 = iVar5 + 1;
        iVar12 = iVar12 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar12 = 0;
      do {
        pbVar9 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar12) + 0x40);
        if (pbVar9 != (byte *)0x0) {
          pbVar11 = &DAT_01645930;
          do {
            bVar2 = *pbVar9;
            bVar13 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_00602185:
              iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_0060218a;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar13 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_00602185;
            pbVar9 = pbVar9 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar10 = 0;
LAB_0060218a:
          if (iVar10 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar12);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar5 = iVar5 + 1;
        iVar12 = iVar12 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
    iStack_24 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        pbVar9 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar5) + 0x40);
        if (pbVar9 != (byte *)0x0) {
          pbVar11 = &DAT_01645918;
          do {
            bVar2 = *pbVar9;
            bVar13 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_00602200:
              iVar12 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_00602205;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar13 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_00602200;
            pbVar9 = pbVar9 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar12 = 0;
LAB_00602205:
          if (iVar12 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + iVar5 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iStack_24 = iStack_24 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iStack_24 < *(short *)(param_1 + 0x324));
    }
    break;
  case 3:
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar12 = 0;
      do {
        pbVar9 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar12) + 0x40);
        if (pbVar9 != (byte *)0x0) {
          pbVar11 = &DAT_0164590c;
          do {
            bVar2 = *pbVar9;
            bVar13 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_00602272:
              iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_00602277;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar13 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_00602272;
            pbVar9 = pbVar9 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar10 = 0;
LAB_00602277:
          if (iVar10 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar12);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar5 = iVar5 + 1;
        iVar12 = iVar12 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar12 = 0;
      do {
        pbVar9 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar12) + 0x40);
        if (pbVar9 != (byte *)0x0) {
          pbVar11 = &DAT_01645930;
          do {
            bVar2 = *pbVar9;
            bVar13 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_006022e0:
              iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_006022e5;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar13 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_006022e0;
            pbVar9 = pbVar9 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar10 = 0;
LAB_006022e5:
          if (iVar10 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + iVar12 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar5 = iVar5 + 1;
        iVar12 = iVar12 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar12 = 0;
      do {
        pbVar9 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar12) + 0x40);
        if (pbVar9 != (byte *)0x0) {
          pbVar11 = &DAT_01645924;
          do {
            bVar2 = *pbVar9;
            bVar13 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_00602345:
              iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_0060234a;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar13 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_00602345;
            pbVar9 = pbVar9 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar10 = 0;
LAB_0060234a:
          if (iVar10 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar12);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar5 = iVar5 + 1;
        iVar12 = iVar12 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
  }
  *(undefined4 *)(param_1 + 0x1210) = 0;
  return 1;
}

// 00602390  Wpc001::vf300  size=743  [class]
void __fastcall Wpc001::vf300(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float fStack_98;
  float fStack_94;
  undefined4 local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x1210) == 0) {
    return;
  }
  fStack_94 = 8.829008e-39;
  Behavior::setSeqAtk();
  local_7c = 0;
  local_78 = 0.0;
  fStack_94 = 8.829044e-39;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    fStack_94 = 8.829059e-39;
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xb50) = *(undefined4 *)(iVar3 + 0x50);
      *(undefined4 *)(param_1 + 0xb54) = *(undefined4 *)(iVar3 + 0x54);
      *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(iVar3 + 0x58);
      *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(iVar3 + 0x5c);
      fStack_94 = (float)(int)*(short *)(param_1 + 0xbd4);
      fStack_98 = 8.829136e-39;
      iVar3 = FUN_00a12210();
      if ((-1 < *(short *)(param_1 + 0xbd4)) && (iVar3 != 0)) {
        *(undefined4 *)(param_1 + 0xb50) = *(undefined4 *)(iVar3 + 0x40);
        *(undefined4 *)(param_1 + 0xb54) = *(undefined4 *)(iVar3 + 0x44);
        *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(iVar3 + 0x48);
        *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(iVar3 + 0x4c);
      }
      goto LAB_00602449;
    }
  }
  fStack_94 = 8.829224e-39;
  FUN_00a7c950();
LAB_00602449:
  fStack_94 = 8.829243e-39;
  FUN_00ac5de0();
  fStack_94 = (float)(param_1 + 0x10);
  fStack_98 = 0.0;
  D3DXMatrixInverse();
  D3DXVec3TransformNormal(&local_7c,param_1 + 0xb50,auStack_5c);
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    *(undefined4 *)(param_1 + 0xd80) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x618) = 1;
    *(undefined4 *)(param_1 + 0xbf0) = 0x42f00000;
  case 1:
    fVar1 = *(float *)(param_1 + 0xf20) * (float)local_50;
    fVar2 = *(float *)(param_1 + 0xbf0) - fVar1;
    *(float *)(param_1 + 0xbf0) = fVar2;
    *(float *)(param_1 + 0xd80) = *(float *)(param_1 + 0xd80) - fVar1;
    if (fVar2 < 0.0) {
      *(undefined4 *)(param_1 + 0x618) = 2;
    }
    fStack_98 = *(float *)(param_1 + 0x910);
    fStack_94 = *(float *)(param_1 + 0x914);
    local_78 = *(float *)(param_1 + 0x50) - fStack_98;
    fStack_74 = *(float *)(param_1 + 0x54) - fStack_94;
    fStack_70 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x918);
    fStack_6c = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x91c);
    uVar4 = FUN_009f8b40();
    FUN_00acb320(&fStack_98,0x3f000000,&local_78,uVar4);
    return;
  case 2:
    break;
  case 3:
    FUN_00acc2f0(0x42700000,1);
    *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
    *(undefined4 *)(param_1 + 0xf10) = 1;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
  default:
    return;
  }
  fVar1 = *(float *)(param_1 + 0xbf0) - *(float *)(param_1 + 0xf20) * (float)local_50;
  *(float *)(param_1 + 0xbf0) = fVar1;
  if (fVar1 < 0.0) {
    *(undefined4 *)(param_1 + 0x618) = 3;
    return;
  }
  fStack_98 = *(float *)(param_1 + 0x910);
  fStack_94 = *(float *)(param_1 + 0x914);
  local_78 = *(float *)(param_1 + 0x50) - fStack_98;
  fStack_74 = *(float *)(param_1 + 0x54) - fStack_94;
  fStack_70 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x918);
  fStack_6c = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x91c);
  uVar4 = FUN_009f8b40();
  FUN_00acb320(&fStack_98,0x3f000000,&local_78,uVar4);
  return;
}

// 00602690  Wpc001::vf4C  size=313  [class]
void __fastcall Wpc001::vf4C(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float unaff_ESI;
  undefined *puVar5;
  
  BehaviorBalkan::vf4C();
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if ((iVar3 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar5);
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*piVar2 + 0x32c))(), iVar3 != 0)) {
      unaff_ESI = 0.2;
    }
  }
  fVar1 = unaff_ESI * *(float *)(param_1 + 0xf20);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + fVar1 * *(float *)(param_1 + 0x1220);
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x1224) * fVar1 + *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x1228) * fVar1 + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x122c) * fVar1 + *(float *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x58);
  iVar3 = FUN_00c59480(0,0xffffffff,param_1 + 0x40,*(undefined4 *)(param_1 + 0x94),0x3fc00000,
                       0x40600000,0x40400000,0x40600000,0,5);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x48) = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0x3f99999a;
    *(undefined4 *)(iVar3 + 0x44) = 0x3e99999a;
    if (*(int *)(param_1 + 0x4f0) != 0) {
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
    }
  }
  return;
}

// 006027D0  Wpc001::vf304  size=75  [class]
void __fastcall Wpc001::vf304(int *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x128))();
  if (param_1[0x300] != 0) {
    uVar1 = FUN_00e01ca0();
    FUN_00e013e0(0x20020,0x3b,param_1 + 0x10,uVar1);
    FUN_00acc0a0();
  }
  return;
}

// 00AAC1A0  Wpc001::Wpc001  size=18  [class]
undefined4 * __fastcall Wpc001::Wpc001(undefined4 *param_1)

{
  BehaviorBulletBase::BehaviorBulletBase();
  *param_1 = vftable;
  return param_1;
}

// 00AAC1C0  Wpc001::vf138  size=6  [class]
undefined4 Wpc001::vf138(void)

{
  return 1;
}

// 00AAC1D0  Wpc001::vf24  size=7  [class]
float10 __fastcall Wpc001::vf24(int param_1)

{
  return (float10)*(float *)(param_1 + 0xf20);
}

// 00AAC1E0  Wpc001::vf04  size=6  [class]
undefined * Wpc001::vf04(void)

{
  return &DAT_01b354b0;
}

// 00AB6A20  Wpc001::destruct  size=30  [class]
undefined4 __thiscall Wpc001::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC5700  FUN_00ac5700  size=99  [callgraph]
void __thiscall FUN_00ac5700(int param_1,undefined4 param_2,undefined2 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x904) = 1;
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  *(undefined2 *)(param_1 + 0x900) = param_3;
  *(undefined4 *)(param_1 + 0x8f0) = *param_4;
  *(undefined4 *)(param_1 + 0x8f4) = param_4[1];
  *(undefined4 *)(param_1 + 0x8f8) = param_4[2];
  *(undefined4 *)(param_1 + 0x8fc) = param_4[3];
  *(undefined4 *)(param_1 + 0x8e8) = param_2;
  return;
}

// 00AC5790  Wpc001::vf118  size=19  [class]
bool Wpc001::vf118(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Bh0064::vf118(param_1);
  return iVar1 != 0;
}

// 00AC58F0  Wpc001::vf310  size=203  [class]
undefined4 __fastcall Wpc001::vf310(int param_1)

{
  undefined4 uVar1;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_24;
  undefined4 local_20;
  
  if (*(int *)(param_1 + 0x8e4) != 0xffff) {
    FUN_00c76e60();
    local_50 = *(undefined4 *)(param_1 + 0x40);
    local_4c = *(undefined4 *)(param_1 + 0x44);
    local_30 = *(undefined4 *)(param_1 + 0x8e4);
    local_2c = *(undefined4 *)(param_1 + 0x8e8);
    local_48 = *(undefined4 *)(param_1 + 0x48);
    local_44 = *(undefined4 *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0xd88) != 0) {
      local_40 = *(undefined4 *)(param_1 + 0xb80);
      local_24 = *(undefined2 *)(param_1 + 0xbd6);
      local_3c = *(undefined4 *)(param_1 + 0xb84);
      local_20 = 1;
      local_38 = *(undefined4 *)(param_1 + 0xb88);
      local_34 = *(undefined4 *)(param_1 + 0xb8c);
    }
    FUN_00c765b0();
    uVar1 = FUN_00c770c0(&local_50,&local_54);
    *(undefined4 *)(param_1 + 0x908) = local_54;
    return uVar1;
  }
  return 0;
}

// 00AC59C0  Wpc001::vf318  size=33  [class]
undefined4 __thiscall Wpc001::vf318(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x8e4) != 0xffff) {
    uVar1 = FUN_00c76db0(param_2);
    return uVar1;
  }
  return 0;
}

// 00AC59F0  Wpc001::vf31C  size=140  [class]
undefined4 __fastcall Wpc001::vf31C(int param_1)

{
  undefined4 uVar1;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  if (*(int *)(param_1 + 0x8e4) != 0xffff) {
    FUN_00c76e60();
    local_50 = *(undefined4 *)(param_1 + 0x40);
    local_2c = *(undefined4 *)(param_1 + 0x8e8);
    local_4c = *(undefined4 *)(param_1 + 0x44);
    local_30 = *(undefined4 *)(param_1 + 0x8e4);
    local_48 = *(undefined4 *)(param_1 + 0x48);
    local_28 = param_1 + 0x1130;
    local_44 = *(undefined4 *)(param_1 + 0x4c);
    FUN_00c765b0();
    uVar1 = FUN_00c770c0(&local_50,&local_54);
    *(undefined4 *)(param_1 + 0x908) = local_54;
    return uVar1;
  }
  return 0;
}

// 00AC5AA0  FUN_00ac5aa0  size=29  [between]
void __fastcall FUN_00ac5aa0(int param_1)

{
  if ((*(int *)(param_1 + 0xc00) != 0) && (*(int *)(param_1 + 0x618) < 5)) {
    *(undefined4 *)(param_1 + 0x618) = 100;
  }
  return;
}

// 00AC5BA0  FUN_00ac5ba0  size=60  [between]
void __fastcall FUN_00ac5ba0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x618) == 0) {
    *(undefined4 *)(param_1 + 0x618) = 1;
  }
  else if ((*(int *)(param_1 + 0x618) == 1) && (*(int *)(param_1 + 0x904) != 0)) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 00AC5C10  Wpc001::vf324  size=3  [class]
void Wpc001::vf324(void)

{
  return;
}

// 00AC5C40  FUN_00ac5c40  size=30  [between]
undefined4 FUN_00ac5c40(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c8a0();
    return uVar3;
  }
  return 0;
}

// 00AC5C60  Wpc001::vfC8  size=81  [class]
void __thiscall Wpc001::vfC8(int param_1,int param_2)

{
  int *piVar1;
  
  Bh0064::vfC8(param_2);
  piVar1 = *(int **)(param_1 + 0x7b0);
  if (piVar1 != (int *)0x0) {
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ac5c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0xdc))();
      return;
    }
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ac5caa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0xdc))();
      return;
    }
  }
  return;
}

// 00ACADB0  Wpc001::vf320  size=176  [class]
void __fastcall Wpc001::vf320(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)FUN_009f8b60();
  iVar2 = CollisionCapsule::CollisionCapsule(8,*puVar1,0);
  if (iVar2 == 0) {
    return;
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,0);
  *(undefined4 *)(iVar2 + 0x380) = 0;
  FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
  *(undefined4 *)(iVar2 + 0x590) = 0x3dcccccd;
  *(undefined4 *)(iVar2 + 0x580) = 0x3fc90fdb;
  *(undefined4 *)(iVar2 + 0x584) = 0;
  *(undefined4 *)(iVar2 + 0x588) = 0;
  *(undefined4 *)(iVar2 + 0x58c) = local_14;
  FUN_00a8c370(iVar2,*(undefined4 *)(param_1 + 0x760));
  FUN_00d7b0f0();
  FUN_00d7b890();
  *(undefined4 *)(iVar2 + 0x38c) = 1;
  return;
}

// 00ACAE60  FUN_00acae60  size=21  [callgraph]
undefined4 __fastcall FUN_00acae60(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xf10);
  if (*(int *)(param_1 + 0x4e4) != 0) {
    uVar1 = 1;
  }
  return uVar1;
}

// 00ACAE80  FUN_00acae80  size=175  [callgraph]
undefined4 * __thiscall FUN_00acae80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_0043e160(param_2 + 4);
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = param_2[0x47];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4c] = param_2[0x4c];
  param_1[0x4d] = param_2[0x4d];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = param_2[0x4f];
  return param_1;
}

// 00ACAF30  FUN_00acaf30  size=234  [callgraph]
void __thiscall FUN_00acaf30(int *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    param_1[0x480] = 1;
    param_1[0x239] = *(int *)(param_4 + 0x110);
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    param_1[0x482] = param_3;
    FUN_00a7c8a0(param_3);
    iVar3 = FUN_00a12210(param_3);
    if (iVar3 != 0) {
      FID_conflict__memcpy(param_1 + 4,(void *)(iVar3 + 0x10),0x40);
    }
    param_1[0x14] = param_1[0x10];
    param_1[0x15] = param_1[0x11];
    param_1[0x16] = param_1[0x12];
    param_1[0x17] = param_1[0x13];
    pcVar1 = *(code **)(*param_1 + 0x31c);
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    (*pcVar1)();
    param_1[0x24c] = 0x37;
    FUN_0043e160(param_4 + 0x10);
    iVar3 = *(int *)(param_4 + 0x170);
    param_1[0x360] = 0;
    param_1[0x2e7] = iVar3;
    param_1[0x186] = 0;
    param_1[0x300] = 0;
    param_1[0x301] = 0;
  }
  return;
}

// 00ACB020  FUN_00acb020  size=230  [callgraph]
void __thiscall FUN_00acb020(int param_1,int *param_2,float param_3,int param_4,short param_5)

{
  code *pcVar1;
  int iStack_20;
  
  pcVar1 = *(code **)(*param_2 + 0x20);
  param_2[0xe0] = *(int *)(param_1 + 0x940);
  param_2[0xe3] = 1;
  (*pcVar1)(0x1e,*(undefined4 *)(param_1 + 0xb9c),0);
  FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),(int)param_5);
  param_2[0x165] = (int)(param_3 * 1.5);
  param_2[0x164] = param_4;
  param_2[0x160] = -0x4036f025;
  param_2[0x161] = 0;
  param_2[0x162] = 0;
  param_2[0x163] = iStack_20;
  param_2[0x15c] = 0;
  param_2[0x15d] = 0;
  param_2[0x15e] = (int)(param_3 * -0.5);
  param_2[0x15f] = iStack_20;
  FUN_00a8c370(param_2,*(undefined4 *)(param_1 + 0x760));
  FUN_00d7b0f0();
  param_2[0xe3] = 1;
  FUN_00d7b890();
  *(int **)(param_1 + 0x870) = param_2;
  return;
}

// 00ACB110  FUN_00acb110  size=124  [callgraph]
void __thiscall FUN_00acb110(int param_1,int *param_2)

{
  code *pcVar1;
  int unaff_ESI;
  short unaff_retaddr;
  
  pcVar1 = *(code **)(*param_2 + 0x20);
  param_2[0xe0] = *(int *)(param_1 + 0x940);
  param_2[0xe3] = 1;
  (*pcVar1)(0x1e,*(undefined4 *)(param_1 + 0xb9c),0);
  FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),(int)unaff_retaddr);
  param_2[0x144] = unaff_ESI;
  FUN_00a8c370(param_2,*(undefined4 *)(param_1 + 0x760));
  FUN_00d7b0f0();
  param_2[0xe3] = 1;
  FUN_00d7b890();
  return;
}

// 00ACB190  FUN_00acb190  size=144  [callgraph]
void __thiscall FUN_00acb190(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_80 [124];
  
  *(undefined4 *)(param_1 + 0x6ec) = 1;
  FUN_00405230();
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),param_4,&local_90,0,param_2,param_3,0,4);
  uVar1 = FUN_00c57830(local_80);
  iVar2 = FUN_00c4d470(uVar1);
  *(int *)(param_1 + 0xf30) = iVar2;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x4c) = 2;
  }
  return;
}

// 00ACB220  FUN_00acb220  size=241  [callgraph]
void __thiscall FUN_00acb220(int param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xf40) = 1;
  *(undefined4 *)(param_1 + 0x1050) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x1054) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x1058) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x105c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0xf50) = *(undefined4 *)(param_1 + 0x940);
  *(undefined4 *)(param_1 + 0xf5c) = 0;
  *(undefined1 *)(param_1 + 0xf60) = 0;
  *(undefined4 *)(param_1 + 0xf58) = 0;
  *(undefined4 *)(param_1 + 0xf54) = param_2;
  *(uint *)(param_1 + 0xfdc) = *(uint *)(param_1 + 0xfdc) | 0x10100000;
  *(uint *)(param_1 + 0xfe0) = *(uint *)(param_1 + 0xfe0) | 0x2000000;
  *(float *)(param_1 + 0x1060) = param_3;
  *(undefined1 *)(param_1 + 0xf61) = 10;
  if (1.0 < param_3) {
    *(undefined4 *)(param_1 + 0x1064) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1068) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x106c) = 1;
  *(undefined4 *)(param_1 + 0x1070) = param_4;
  *(undefined4 *)(param_1 + 0xf64) = *(undefined4 *)(param_1 + 0x954);
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  *(undefined4 *)(param_1 + 0x1074) = 5;
  *(undefined4 *)(param_1 + 0x1078) = *(undefined4 *)(param_1 + 0xb9c);
  *(undefined4 *)(param_1 + 0xfd8) = *(undefined4 *)(param_1 + 0x760);
  return;
}

// 00ACB320  FUN_00acb320  size=56  [callgraph]
void __thiscall
FUN_00acb320(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  FUN_0090fa30(param_1 + 0x1124,0,param_2,param_3,param_4,param_5 << 0x10 | 5,"Bullet");
  return;
}

// 00ACB360  FUN_00acb360  size=56  [callgraph]
void __thiscall
FUN_00acb360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  FUN_0090fa30(param_1 + 0x1124,1,param_2,param_3,param_4,param_5 << 0x10 | 0x1f,"BulletOutscreen");
  return;
}

// 00ACB3A0  FUN_00acb3a0  size=293  [callgraph]
void __fastcall FUN_00acb3a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar2 = CollisionSphere::CollisionSphere(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar1);
  if (iVar2 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    FUN_00acb110(iVar2,0x3f000000,0xffffffff);
    uVar1 = FUN_00a8d2a0();
    iVar2 = CollisionSphere::CollisionSphere(2,*(undefined4 *)(param_1 + 0xb9c),0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      *(undefined4 *)(iVar2 + 0x510) = 0x3f800000;
      FUN_00a93a00(iVar2,uVar1);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    FUN_00de3530();
    FUN_00a826c0(local_8,0x20040);
    FUN_00a9f0e0(local_8,&DAT_0169fdd8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a95fb0(0);
    FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
  }
  return;
}

// 00ACB4D0  FUN_00acb4d0  size=238  [callgraph]
void __fastcall FUN_00acb4d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
  uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar2 = CollisionSphere::CollisionSphere(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar1);
  if (iVar2 != 0) {
    FUN_00acb110(iVar2,0x3e4ccccd,0xffffffff);
    uVar1 = FUN_00a8d2a0();
    iVar2 = CollisionSphere::CollisionSphere(2,*(undefined4 *)(param_1 + 0xb9c),0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      *(undefined4 *)(iVar2 + 0x510) = 0x3e4ccccd;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x3f800000;
      FUN_00d77c90(&local_20);
      FUN_00a93a00(iVar2,uVar1);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
  }
  return;
}

// 00ACB5C0  FUN_00acb5c0  size=390  [callgraph]
void __fastcall FUN_00acb5c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float unaff_ESI;
  float fStack_28;
  float fStack_24;
  float local_20 [7];
  
  uVar2 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar3 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar2);
  if (iVar3 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    FUN_00acb020(iVar3,0x3e4ccccd,0x3d4ccccd,0xffffffff);
    FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
    iVar3 = *(int *)(param_1 + 0x944);
    if (*(int *)(param_1 + 0x930) == 0xe) {
      if (*(int *)(param_1 + 0x1080) != -1) {
        iVar3 = *(int *)(param_1 + 0x1080);
      }
      FUN_00acb220(iVar3,0x40400000,0x3f000000);
      *(uint *)(param_1 + 0xfe0) = *(uint *)(param_1 + 0xfe0) | 0x800;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x1080);
      if (*(int *)(param_1 + 0x930) == 0xf) {
        if (iVar1 != -1) {
          iVar3 = iVar1;
        }
        FUN_00acb220(iVar3,0x40000000,0x3f000000);
        *(uint *)(param_1 + 0xfdc) = *(uint *)(param_1 + 0xfdc) | 0x10;
      }
      else {
        if (iVar1 != -1) {
          iVar3 = iVar1;
        }
        FUN_00acb220(iVar3,0x40400000,0x40000000);
      }
    }
    local_20[0] = 0.0;
    local_20[1] = 0.0;
    local_20[2] = -0.3;
    D3DXVec3TransformNormal(local_20,local_20,param_1 + 0x10);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + unaff_ESI;
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fStack_28;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + fStack_24;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + local_20[0];
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x58);
  }
  return;
}

// 00ACB750  FUN_00acb750  size=38  [callgraph]
void __fastcall FUN_00acb750(int param_1)

{
  if (((*(int *)(param_1 + 0x4e4) == 0) && (*(int *)(param_1 + 0xf10) == 0)) &&
     (*(int *)(param_1 + 0xc00) != 0)) {
    *(undefined4 *)(param_1 + 0x618) = 2;
  }
  return;
}

// 00ACB780  FUN_00acb780  size=389  [callgraph]
void __fastcall FUN_00acb780(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  short sVar4;
  undefined4 uVar5;
  int *piVar6;
  int iStack_20;
  
  sVar4 = FUN_00dde2d0(0,0x7fff);
  piVar1 = (int *)(param_1 + 0x940);
  *(int *)(param_1 + 0xa34) = (int)sVar4;
  uVar5 = CollisionAttackData::CollisionAttackData(piVar1);
  piVar6 = (int *)CollisionCapsule::CollisionCapsule(0xe,*(undefined4 *)(param_1 + 0xb9c),uVar5);
  if (piVar6 != (int *)0x0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,0);
    *(int **)(param_1 + 0xf14) = piVar6;
    *(int **)(param_1 + 0x870) = piVar6;
    piVar6[0xe0] = *piVar1;
    pcVar2 = *(code **)(*piVar6 + 0x20);
    piVar6[0xe3] = 1;
    (*pcVar2)(0x1e,*(undefined4 *)(param_1 + 0xb9c),0);
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
    if (*piVar1 == 0xbd) {
      piVar6[0x165] = 0x41a00000;
      *(undefined4 *)(param_1 + 0x111c) = 1;
    }
    else {
      piVar6[0x165] = 0x400ccccd;
    }
    FUN_00d77c90(&stack0xffffffd4);
    if ((*(int *)(param_1 + 0x8e8) == 0) || (*(int *)(*(int *)(param_1 + 0x8e8) + 0x24) != 0x20600))
    {
      iVar3 = 0x3f800000;
    }
    else {
      iVar3 = 0x40400000;
    }
    piVar6[0x164] = iVar3;
    piVar6[0x118] = *(int *)(param_1 + 0x40);
    piVar6[0x119] = *(int *)(param_1 + 0x44);
    piVar6[0x11a] = *(int *)(param_1 + 0x48);
    piVar6[0x11b] = *(int *)(param_1 + 0x4c);
    piVar6[0x160] = -0x4036f025;
    piVar6[0x161] = 0;
    piVar6[0x162] = 0;
    piVar6[0x163] = iStack_20;
    FUN_00a8c370(piVar6,*(undefined4 *)(param_1 + 0x760));
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  return;
}

// 00ACB910  FUN_00acb910  size=717  [callgraph]
void __fastcall FUN_00acb910(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar2 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar1);
  if (iVar2 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    FUN_00acb020(iVar2,0x40000000,0x3e99999a,0xffffffff);
    uVar1 = FUN_00a8d2a0();
    iVar2 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      *(undefined4 *)(iVar2 + 0x594) = 0x40000000;
      *(undefined4 *)(iVar2 + 0x590) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0x580) = 0xbfc90fdb;
      *(undefined4 *)(iVar2 + 0x584) = 0;
      *(undefined4 *)(iVar2 + 0x588) = 0;
      *(undefined4 *)(iVar2 + 0x58c) = local_14;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0x3f800000;
      FUN_00d77c90(&local_40);
      FUN_00a93a00(iVar2,uVar1);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    iVar2 = FUN_00de4550("_col.hkx",0);
    if (iVar2 != 0) {
      iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = RigidBodyCollision::RigidBodyCollision();
      }
      *(int *)(param_1 + 0x7b0) = iVar3;
      if (iVar3 != 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x4f0);
        uVar4 = FUN_00de46d0("_col.hkx",0);
        FUN_008f6410(uVar1,iVar2,uVar4);
        FUN_008f2cd0(1);
        FUN_008f40f0(param_1);
        (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(7);
        (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*(undefined4 *)(param_1 + 0xb9c));
        FUN_008f1600(0x20);
        FUN_008f1600(8);
      }
    }
    FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
    FUN_00acb220(*(undefined4 *)(param_1 + 0x944),0x40000000,0x3dcccccd);
    *(undefined4 *)(param_1 + 0xf40) = 0;
    local_40 = *(undefined4 *)(param_1 + 0x50);
    local_3c = *(undefined4 *)(param_1 + 0x54);
    local_38 = *(undefined4 *)(param_1 + 0x58);
    uStack_34 = *(undefined4 *)(param_1 + 0x5c);
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0x40133333;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0xc0133333;
    puVar5 = (undefined4 *)FUN_00900480();
    puVar5 = (undefined4 *)*puVar5;
    uVar1 = FUN_009f8b40(0);
    uVar1 = (*(code *)*puVar5)(&local_40,&uStack_20,&uStack_30,0x3f333333,5,uVar1);
    FUN_008f9610(uVar1,0x100,1);
    lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar1);
    FUN_00900bd0();
  }
  return;
}

// 00ACBBE0  FUN_00acbbe0  size=82  [callgraph]
void __fastcall FUN_00acbbe0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar2 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar1);
  if (iVar2 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    FUN_00acb020(iVar2,0x3f800000,0x3dcccccd,0xffffffff);
  }
  return;
}

// 00ACBC40  FUN_00acbc40  size=323  [callgraph]
void __fastcall FUN_00acbc40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x930) != 3) {
    uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
    iVar2 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar1);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0xf14) = iVar2;
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
      FUN_00acb020(iVar2,0x40000000,0x3e99999a,0xffffffff);
      uVar1 = FUN_00a8d2a0();
      iVar2 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x380) = 0;
        FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
        *(undefined4 *)(iVar2 + 0x594) = 0x40000000;
        *(undefined4 *)(iVar2 + 0x590) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0x580) = 0xbfc90fdb;
        *(undefined4 *)(iVar2 + 0x584) = 0;
        *(undefined4 *)(iVar2 + 0x588) = 0;
        *(undefined4 *)(iVar2 + 0x58c) = local_14;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0x3f800000;
        FUN_00d77c90(&local_20);
        FUN_00a93a00(iVar2,uVar1);
        FUN_00d7b0f0();
        FUN_00d7b890();
      }
      FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
    }
  }
  return;
}

// 00ACBD90  FUN_00acbd90  size=230  [callgraph]
void __fastcall FUN_00acbd90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(0,1);
  uVar1 = FUN_00a8d2a0();
  iVar2 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x380) = 0;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
    *(undefined4 *)(iVar2 + 0x594) = 0x40000000;
    *(undefined4 *)(iVar2 + 0x590) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0x580) = 0xbfc90fdb;
    *(undefined4 *)(iVar2 + 0x584) = 0;
    *(undefined4 *)(iVar2 + 0x588) = 0;
    *(undefined4 *)(iVar2 + 0x58c) = local_14;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0x3f800000;
    FUN_00d77c90(&local_20);
    FUN_00a93a00(iVar2,uVar1);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
  return;
}

// 00ACBE80  FUN_00acbe80  size=319  [callgraph]
void __fastcall FUN_00acbe80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(0,1);
  uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar2 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar1);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0xf14) = iVar2;
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    FUN_00acb020(iVar2,0x40000000,0x3e99999a,0xffffffff);
    uVar1 = FUN_00a8d2a0();
    iVar2 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      *(undefined4 *)(iVar2 + 0x594) = 0x40000000;
      *(undefined4 *)(iVar2 + 0x590) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0x580) = 0xbfc90fdb;
      *(undefined4 *)(iVar2 + 0x584) = 0;
      *(undefined4 *)(iVar2 + 0x588) = 0;
      *(undefined4 *)(iVar2 + 0x58c) = local_14;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x3f800000;
      FUN_00d77c90(&local_20);
      FUN_00a93a00(iVar2,uVar1);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
  }
  return;
}

// 00ACBFC0  FUN_00acbfc0  size=170  [callgraph]
void __fastcall FUN_00acbfc0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = CollisionAttackData::CollisionAttackData((int *)(param_1 + 0x940));
  piVar3 = (int *)CollisionSphere::CollisionSphere(1,*(undefined4 *)(param_1 + 0xb9c),uVar2);
  if (piVar3 != (int *)0x0) {
    *(int **)(param_1 + 0xf14) = piVar3;
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,0);
    pcVar1 = *(code **)(*piVar3 + 0x20);
    piVar3[0xe0] = *(int *)(param_1 + 0x940);
    piVar3[0xe3] = 1;
    (*pcVar1)(0x1e,*(undefined4 *)(param_1 + 0xb9c),0);
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
    piVar3[0x144] = 0x3dcccccd;
    FUN_00a8c370(piVar3,*(undefined4 *)(param_1 + 0x760));
    FUN_00d7b0f0();
    piVar3[0xe3] = 1;
    FUN_00d7b890();
    return;
  }
  return;
}

// 00ACC070  FUN_00acc070  size=39  [callgraph]
void __fastcall FUN_00acc070(int param_1)

{
  if (((*(int *)(param_1 + 0xc00) != 0) && (*(int *)(param_1 + 0x4e4) == 0)) &&
     (*(int *)(param_1 + 0xf10) == 0)) {
    *(undefined4 *)(param_1 + 0x618) = 2;
  }
  return;
}

// 00ACC0A0  FUN_00acc0a0  size=345  [callgraph]
void __fastcall FUN_00acc0a0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00c4d1a0(*(undefined4 *)(param_1 + 0x4f0),0);
  RayCastManager::getWork(param_1 + 0x1124);
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00eaa840();
  uStack_8 = 0x40400000;
  iVar1 = FUN_00c76330(*(undefined4 *)(param_1 + 0x8e4),&uStack_8);
  if (iVar1 != 0) {
    FUN_00e5ca30(*(undefined4 *)(param_1 + 0x908),uStack_8);
  }
  uStack_4 = 0x40400000;
  iVar1 = FUN_00c76390(*(undefined4 *)(param_1 + 0x8e4),&uStack_4);
  if (iVar1 != 0) {
    FUN_00e5ca30(*(undefined4 *)(param_1 + 0x90c),uStack_4);
  }
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x90c) = 0;
  *(undefined4 *)(param_1 + 0xf14) = 0;
  FUN_00a9d8a0();
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
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x28))((undefined4 *)(param_1 + 0x8dc));
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  FUN_00910ac0(0);
  if (*(int *)(param_1 + 0xf30) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xf30) + 0x34) = 0;
  }
  *(undefined4 *)(param_1 + 0xf30) = 0;
  FUN_00a805f0();
  return;
}

// 00ACCBC0  Wpc001::vfD8  size=245  [class]
int __thiscall Wpc001::vfD8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  Bh0064::vfD8(param_2);
  if ((*(int *)(param_1 + 0x7b4) != 0) || (*(int *)(param_1 + 0x7b0) != 0)) {
    if (param_2 == 0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(0);
    }
    else {
      FUN_008f3cb0(param_1);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(1);
      FUN_008f3c70();
      FUN_008f1600(0x20);
      FUN_004066f0();
      uVar2 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x14))(&stack0x00000000,0);
      FUN_00910ab0(uVar2);
      FUN_009277e0();
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
          return param_1 + 0x8dc;
        }
      }
    }
  }
  return param_1 + 0x8dc;
}

// 00ACFE20  Wpc001::vf314  size=275  [class]
undefined4 __fastcall Wpc001::vf314(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_84;
  undefined4 local_80 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined2 local_24;
  undefined4 local_20;
  
  if (*(int *)(param_1 + 0x8e4) != 0xffff) {
    FUN_00c76ea0();
    local_30 = *(undefined4 *)(param_1 + 0x8e4);
    local_2c = *(int *)(param_1 + 0x4f0);
    local_28 = param_1 + 0x1130;
    if (*(int *)(param_1 + 0xd8c) == 0) {
      if (local_2c != 0) {
        iVar1 = FUN_00a7c800();
        if (iVar1 != 0) {
          puVar4 = (undefined4 *)(iVar1 + 0x10);
          puVar5 = local_80;
          for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
      }
    }
    else {
      local_40 = *(undefined4 *)(param_1 + 0xb80);
      local_24 = *(undefined2 *)(param_1 + 0xbd6);
      local_3c = *(undefined4 *)(param_1 + 0xb84);
      local_20 = 1;
      local_38 = *(undefined4 *)(param_1 + 0xb88);
      local_34 = *(undefined4 *)(param_1 + 0xb8c);
    }
    FUN_00c76620();
    uVar2 = FUN_00c771b0(local_80,&local_84);
    *(undefined4 *)(param_1 + 0x90c) = local_84;
    *(uint *)(param_1 + 0x1198) = *(uint *)(param_1 + 0x1198) | 0x40;
    *(undefined4 *)(param_1 + 0x1170) = *(undefined4 *)(param_1 + 0x920);
    *(undefined4 *)(param_1 + 0x1174) = *(undefined4 *)(param_1 + 0x924);
    *(undefined4 *)(param_1 + 0x1178) = *(undefined4 *)(param_1 + 0x928);
    *(undefined4 *)(param_1 + 0x117c) = *(undefined4 *)(param_1 + 0x92c);
    return uVar2;
  }
  return 0;
}

// 00ACFF40  FUN_00acff40  size=223  [between]
int * FUN_00acff40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_0040b190();
  local_34 = *param_6;
  local_30 = param_6[1];
  local_2c = param_6[2];
  local_40 = *param_5;
  local_3c = param_5[1];
  local_38 = param_5[2];
  iVar2 = FUN_00a82090("bullet",param_2,local_90);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01be9c94;
      (**(code **)(*piVar3 + 4))(&DAT_01be9c94);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        pcVar1 = *(code **)(*piVar3 + 0x6c);
        piVar3[0x23a] = param_1;
        (*pcVar1)(param_5);
        (**(code **)(*piVar3 + 0x88))(param_6);
        (**(code **)(*piVar3 + 0x310))();
        (**(code **)(*piVar3 + 0x314))();
        return piVar3;
      }
    }
    FUN_00a805f0();
  }
  return (int *)0x0;
}

// 00AD0020  FUN_00ad0020  size=143  [between]
int * FUN_00ad0020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined1 local_90 [140];
  
  FUN_0040b190();
  iVar1 = FUN_00a82090("bullet",param_1,local_90);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9c94;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c94);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00ac5700(param_2,param_3,param_4);
        piVar2[0x24c] = 0x3a;
        return piVar2;
      }
    }
    FUN_00a805f0();
  }
  return (int *)0x0;
}

// 00AD00B0  FUN_00ad00b0  size=2346  [between]
void __thiscall FUN_00ad00b0(int *param_1,uint *param_2)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  float unaff_EBX;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined1 auStack_134 [4];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [52];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [36];
  undefined1 auStack_68 [100];
  
  param_1[0x241] = 0;
  param_1[0x24c] = param_2[0x45];
  param_1[0x2d0] = param_2[0x48];
  param_1[0x2d1] = param_2[0x49];
  param_1[0x2d2] = param_2[0x4a];
  param_1[0x2d3] = param_2[0x4b];
  param_1[0x14] = param_2[0x48];
  param_1[0x15] = param_2[0x49];
  param_1[0x16] = param_2[0x4a];
  param_1[0x17] = param_2[0x4b];
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x2d4] = param_2[0x4c];
  param_1[0x2d5] = param_2[0x4d];
  param_1[0x2d6] = param_2[0x4e];
  param_1[0x2d7] = param_2[0x4f];
  param_1[0x2e4] = param_2[0x58];
  param_1[0x2e6] = param_2[0x5b];
  param_1[0x2e5] = param_2[0x5a];
  param_1[0x2e7] = param_2[0x5c];
  param_1[0x239] = param_2[0x44];
  param_1[0x2e0] = param_2[0x54];
  param_1[0x2e1] = param_2[0x55];
  param_1[0x2e2] = param_2[0x56];
  param_1[0x2e3] = param_2[0x57];
  FUN_0043e160(param_2 + 4);
  param_1[0x272] = param_1[0x1d8];
  param_1[0x448] = param_2[0xb8];
  param_1[0x2e8] = param_2[0xbc];
  param_1[0x2e9] = param_2[0xbd];
  param_1[0x2ea] = param_2[0xbe];
  param_1[0x2eb] = param_2[0xbf];
  param_1[0x2ec] = param_2[0xc0];
  param_1[0x2ed] = param_2[0xc1];
  param_1[0x2ee] = param_2[0xc2];
  param_1[0x2ef] = param_2[0xc3];
  if ((*param_2 & 8) != 0) {
    param_1[0x2d0] = (int)((float)param_1[0x2e0] + (float)param_1[0x2d0]);
    param_1[0x2d1] = (int)((float)param_1[0x2e1] + (float)param_1[0x2d1]);
    param_1[0x2d2] = (int)((float)param_1[0x2e2] + (float)param_1[0x2d2]);
    param_1[0x2d3] = (int)((float)param_1[0x2e3] + (float)param_1[0x2d3]);
    param_1[0x14] = param_1[0x2d0];
    param_1[0x15] = param_1[0x2d1];
    param_1[0x16] = param_1[0x2d2];
    param_1[0x17] = param_1[0x2d3];
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
  }
  param_1[0x3cc] = 0;
  FUN_00acae80(param_2 + 0x68);
  param_1[0x420] = param_2[0xc4];
  uVar4 = FUN_00c763f0(param_1[0x239]);
  *(undefined2 *)(param_1 + 0x271) = uVar4;
  *(undefined2 *)((int)param_1 + 0xbd6) = *(undefined2 *)((int)param_2 + 0x17a);
  if (param_2[0x5d] != 0) {
    uVar5 = FUN_00a7c7f0();
    FUN_00a7c960(uVar5);
  }
  *(short *)(param_1 + 0x2f5) = (short)param_2[0x5e];
  param_1[0x2f8] = param_2[0x60];
  param_1[0x2f9] = param_2[0x61];
  param_1[0x2fa] = param_2[0x62];
  param_1[0x2fb] = param_2[99];
  if ((*param_2 & 1) != 0) {
    pfVar1 = (float *)(param_1 + 0x248);
    *pfVar1 = (float)param_1[0x2d4] - (float)param_1[0x2d0];
    param_1[0x249] = (int)((float)param_1[0x2d5] - (float)param_1[0x2d1]);
    param_1[0x24a] = (int)((float)param_1[0x2d6] - (float)param_1[0x2d2]);
    param_1[0x24b] = (int)((float)param_1[0x2d7] - (float)param_1[0x2d3]);
    fVar3 = *pfVar1 * *pfVar1;
    if ((float)param_1[0x249] * (float)param_1[0x249] + fVar3 +
        (float)param_1[0x24a] * (float)param_1[0x24a] == 0.0) {
      param_1[0x249] = 0x3f800000;
    }
    else {
      fVar3 = (float)param_1[0x24a] * (float)param_1[0x24a] +
              (float)param_1[0x249] * (float)param_1[0x249] + fVar3;
      if (fVar3 < 0.0 == (fVar3 == 0.0)) {
        local_154 = (float)param_1[0x24a];
        FUN_00ddf460(pfVar1,pfVar1);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *pfVar1 = 0.0;
        param_1[0x249] = 0x3f800000;
        param_1[0x24a] = 0;
      }
    }
    fVar3 = (float)param_1[0x2e4];
    *pfVar1 = *pfVar1 * fVar3;
    param_1[0x249] = (int)((float)param_1[0x249] * fVar3);
    param_1[0x24a] = (int)((float)param_1[0x24a] * fVar3);
    param_1[0x24b] = (int)(fVar3 * (float)param_1[0x24b]);
    local_150 = *pfVar1 + (float)param_1[0x2d0];
    local_14c = (float)param_1[0x249] + (float)param_1[0x2d1];
    local_148 = (float)param_1[0x2d2] + (float)param_1[0x24a];
    pfVar1 = (float *)(param_1 + 0x24);
    local_144 = (float)param_1[0x24b] + (float)param_1[0x2d3];
    thunk_FUN_00dde510(pfVar1,param_1 + 0x25,&local_150,param_1 + 0x2d0);
    *pfVar1 = *pfVar1 * -1.0;
    param_1[0x26] = 0;
    switchD_0080dbae::default();
  }
  if ((*param_2 & 2) != 0) {
    piVar2 = param_1 + 0x248;
    *piVar2 = 0;
    param_1[0x249] = 0;
    param_1[0x24a] = param_1[0x2e4];
    param_1[0x24] = param_2[0x50];
    param_1[0x25] = param_2[0x51];
    param_1[0x26] = param_2[0x52];
    param_1[0x27] = param_2[0x53];
    switchD_0080dbae::default();
    D3DXVec3TransformNormal(piVar2,piVar2,param_1 + 4);
  }
  local_140 = 0.0;
  pfVar1 = (float *)(param_1 + 0x248);
  local_13c = 1.0;
  local_138 = 0.0;
  fVar3 = (float)param_1[0x249] * (float)param_1[0x249] + *pfVar1 * *pfVar1 +
          (float)param_1[0x24a] * (float)param_1[0x24a];
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    local_154 = (float)param_1[0x24a];
    FUN_00ddf460(&uStack_120,pfVar1);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    uStack_120 = 0;
    uStack_11c = 0x3f800000;
    uStack_118 = 0;
  }
  local_150 = (float)param_1[0x24a] * local_13c - (float)param_1[0x249] * local_138;
  local_14c = *pfVar1 * local_138 - (float)param_1[0x24a] * local_140;
  local_148 = (float)param_1[0x249] * local_140 - *pfVar1 * local_13c;
  fVar3 = local_148 * local_148 + local_150 * local_150 + local_14c * local_14c;
  fStack_130 = local_150;
  fStack_12c = local_14c;
  fStack_128 = local_148;
  if (SQRT(fVar3) != 0.0) {
    if (NAN(fVar3) || fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&fStack_130,&fStack_130);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_130 = 0.0;
      fStack_12c = 1.0;
      fStack_128 = 0.0;
    }
    local_150 = (float)param_1[0x249] * fStack_128 - (float)param_1[0x24a] * fStack_12c;
    local_14c = (float)param_1[0x24a] * fStack_130 - *pfVar1 * fStack_128;
    local_148 = *pfVar1 * fStack_12c - (float)param_1[0x249] * fStack_130;
    fVar3 = local_148 * local_148 + local_150 * local_150 + local_14c * local_14c;
    local_140 = local_150;
    local_13c = local_14c;
    local_138 = local_148;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&local_140,&local_140);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_140 = 0.0;
      local_13c = 1.0;
      local_138 = 0.0;
    }
    D3DXMatrixRotationAxis(auStack_d0,&local_140,param_2[0x65]);
    FUN_00ddcfe0(auStack_9c,&local_14c,param_2[0x65]);
    D3DXVec3TransformNormal(pfVar1,pfVar1,auStack_9c);
    local_148 = (float)param_1[0x24a] * local_154 - (float)param_1[0x249] * local_150;
    local_144 = *pfVar1 * local_150 - (float)param_1[0x24a] * unaff_EBX;
    local_140 = (float)param_1[0x249] * unaff_EBX - local_154 * *pfVar1;
    D3DXMatrixRotationAxis(auStack_68,&local_148,param_2[100]);
    FUN_00ddcfe0(auStack_134,&local_154,param_2[100]);
    D3DXVec3TransformNormal(pfVar1,pfVar1,auStack_134);
    piVar2 = param_1 + 4;
    D3DXMatrixMultiply(piVar2,piVar2,auStack_100);
    D3DXMatrixMultiply(piVar2,piVar2,auStack_8c);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
  }
  param_1[0x25c] = param_1[0x25];
  param_1[0x444] = *param_2;
  param_1[0x186] = 0;
  param_1[0x2fc] = (int)((float)param_2[0x59] / (float)param_2[0x58]);
  param_1[0x362] = *param_2 & 4;
  param_1[0x363] = *param_2 & 8;
  (**(code **)(*param_1 + 0x310))();
  (**(code **)(*param_1 + 0x314))();
  param_1[0x300] = 0;
  param_1[0x301] = 0;
  param_1[0x302] = 0;
  if ((((param_1[0x24c] == 0x27) || (param_1[0x24c] == 0x26)) && (param_1[0x23a] != 0)) &&
     (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
    FUN_00a7c8a0();
    puVar7 = (undefined4 *)FUN_009f8b60();
    FUN_009f8ae0(*puVar7);
  }
  return;
}

// 00AD09E0  FUN_00ad09e0  size=172  [between]
int * FUN_00ad09e0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_0040b190();
  local_40 = *(undefined4 *)(param_3 + 0x120);
  local_3c = *(undefined4 *)(param_3 + 0x124);
  local_38 = *(undefined4 *)(param_3 + 0x128);
  iVar1 = FUN_00a82090(&DAT_016a0274,*(undefined4 *)(param_3 + 4),local_90);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9c94;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c94);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        piVar2[0x23a] = param_1;
        FUN_00acaf30(param_1,param_2,param_3);
        return piVar2;
      }
    }
    FUN_00a805f0();
  }
  return (int *)0x0;
}

// 00AD0A90  FUN_00ad0a90  size=211  [between]
void __fastcall FUN_00ad0a90(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 uStack_10;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x1130) + 8);
  uStack_10 = 0;
  local_14 = 0;
  *(undefined4 *)(param_1 + 0x1200) = 0;
  (*pcVar1)(0x41f00000);
  local_14 = 0x40400000;
  iVar2 = FUN_00c76330(*(undefined4 *)(param_1 + 0x8e4),&local_14);
  if (iVar2 != 0) {
    FUN_00e5ca30(*(undefined4 *)(param_1 + 0x908),local_14);
  }
  uStack_10 = 0x40400000;
  iVar2 = FUN_00c76390(*(undefined4 *)(param_1 + 0x8e4),&uStack_10);
  if (iVar2 != 0) {
    FUN_00e5ca30(*(undefined4 *)(param_1 + 0x90c),uStack_10);
  }
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x90c) = 0;
  FUN_00acc2f0(0x41f00000,0);
  return;
}

// 00AD0B70  FUN_00ad0b70  size=1014  [between]
void __fastcall FUN_00ad0b70(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((param_1[0x139] == 0) && (param_1[0x3c4] == 0)) {
    if (param_1[0x300] == 0) {
      local_30 = param_1[0x244];
      local_2c = param_1[0x245];
      local_28 = param_1[0x246];
      local_24 = param_1[0x247];
      local_20 = param_1[0x14];
      local_1c = param_1[0x15];
      local_18 = param_1[0x16];
      local_14 = param_1[0x17];
      local_84 = 0;
      iVar1 = FUN_00907560(param_1 + 0x449,&local_a0,&local_40,&local_84,0,&local_30,&local_20,0);
      if (iVar1 != 0) {
        FUN_00eaa7b0(1,local_a0,local_9c,local_98,0);
        fVar3 = (float10)local_40;
        fVar2 = (float10)local_38;
        fVar4 = (float10)fpatan((float10)local_3c,SQRT(fVar2 * fVar2 + fVar3 * fVar3));
        local_50 = (float)-fVar4;
        fVar3 = (float10)fpatan(fVar3,fVar2);
        local_4c = (float)fVar3;
        FUN_00c76f00();
        local_54 = param_1[0x239];
        local_80 = local_a0;
        local_7c = local_9c;
        local_78 = local_98;
        local_74 = local_94;
        local_70 = local_50;
        local_6c = local_4c;
        local_68 = 0.0;
        local_64 = local_44;
        if (local_54 != 0xffff) {
          local_70 = local_40;
          local_6c = local_3c;
          local_68 = local_38;
          local_64 = local_34;
        }
        FUN_00c76f30(local_84);
        (**(code **)(*param_1 + 0x318))(&local_80);
        FUN_009e85d0(0x65,0x3f800000);
        FUN_00eaa840();
        FUN_00acc0a0();
        if (param_1[0x24c] == 0x1e) {
          param_1[0x414] = iStack_a4;
          param_1[0x415] = local_a0;
          param_1[0x416] = local_9c;
          param_1[0x417] = local_98;
          Behavior::createAttackImpactWave(param_1 + 0x3d0);
        }
      }
    }
    else {
      FUN_00eaa7b0(1,param_1[0x304],param_1[0x305],param_1[0x306],0);
      fVar3 = (float10)fpatan((float10)(float)param_1[0x309],
                              SQRT((float10)(float)param_1[0x308] * (float10)(float)param_1[0x308] +
                                   (float10)(float)param_1[0x30a] * (float10)(float)param_1[0x30a]))
      ;
      local_50 = (float)-fVar3;
      fVar3 = (float10)fpatan((float10)(float)param_1[0x308],(float10)(float)param_1[0x30a]);
      local_4c = (float)fVar3;
      FUN_00c76f00();
      local_80 = param_1[0x304];
      local_54 = param_1[0x239];
      local_7c = param_1[0x305];
      local_78 = param_1[0x306];
      local_74 = param_1[0x307];
      local_70 = local_50;
      local_6c = local_4c;
      local_68 = 0.0;
      local_64 = local_44;
      if (local_54 != 0xffff) {
        local_70 = (float)param_1[0x308];
        local_6c = (float)param_1[0x309];
        local_68 = (float)param_1[0x30a];
        local_64 = param_1[0x30b];
      }
      iVar1 = param_1[0x357];
      FUN_00a81330(iVar1);
      FUN_00a7c800();
      local_5c = FUN_00a12210(iVar1);
      local_58 = param_1[0x35d];
      local_60 = FUN_00a81330();
      FUN_009e85d0(0x65,0x3f800000);
      FUN_00eaa840();
      FUN_00acc0a0();
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
      if (param_1[0x24c] == 0x1e) {
        param_1[0x414] = param_1[0x304];
        param_1[0x415] = param_1[0x305];
        param_1[0x416] = param_1[0x306];
        param_1[0x417] = param_1[0x307];
        Behavior::createAttackImpactWave(param_1 + 0x3d0);
        return;
      }
    }
  }
  return;
}

// 00AD0F70  FUN_00ad0f70  size=1611  [between]
void __fastcall FUN_00ad0f70(int *param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float unaff_EBX;
  float10 fVar6;
  float10 fVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  float fStack_110;
  float *pfStack_10c;
  float *pfStack_108;
  int *piStack_104;
  undefined1 *puStack_100;
  int *piStack_fc;
  undefined1 *puStack_f8;
  undefined1 *puStack_f4;
  float fStack_f0;
  int *piStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [20];
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [120];
  
  fStack_e4 = 0.0;
  fStack_e8 = 1.4013e-45;
  piStack_ec = (int *)0xad0f8f;
  iVar4 = (**(code **)(*param_1 + 0x308))();
  if (iVar4 != 0) {
    piStack_ec = (int *)0xad0f9a;
    FUN_00acc0a0();
    return;
  }
  piStack_ec = (int *)0xad0fac;
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
LAB_00ad1072:
    piStack_ec = (int *)0xad107d;
    FUN_00a7c950();
  }
  else {
    piStack_ec = (int *)0xad0fbb;
    iVar4 = FUN_00a7c8a0();
    if (iVar4 == 0) goto LAB_00ad1072;
    param_1[0x2d4] = *(int *)(iVar4 + 0x50);
    param_1[0x2d5] = *(int *)(iVar4 + 0x54);
    param_1[0x2d6] = *(int *)(iVar4 + 0x58);
    param_1[0x2d7] = *(int *)(iVar4 + 0x5c);
    piStack_ec = (int *)(int)(short)param_1[0x2f5];
    fStack_f0 = 1.5893267e-38;
    iVar4 = FUN_00a12210();
    if ((-1 < (short)param_1[0x2f5]) && (iVar4 != 0)) {
      param_1[0x2d4] = *(int *)(iVar4 + 0x40);
      param_1[0x2d5] = *(int *)(iVar4 + 0x44);
      param_1[0x2d6] = *(int *)(iVar4 + 0x48);
      param_1[0x2d7] = *(int *)(iVar4 + 0x4c);
    }
    param_1[0x2d4] = (int)((float)param_1[0x2f8] + (float)param_1[0x2d4]);
    param_1[0x2d5] = (int)((float)param_1[0x2f9] + (float)param_1[0x2d5]);
    param_1[0x2d6] = (int)((float)param_1[0x2fa] + (float)param_1[0x2d6]);
    param_1[0x2d7] = (int)((float)param_1[0x2fb] + (float)param_1[0x2d7]);
  }
  piVar1 = param_1 + 4;
  fStack_f0 = 0.0;
  puStack_f4 = auStack_98;
  puStack_f8 = (undefined1 *)0xad108d;
  piStack_ec = piVar1;
  D3DXMatrixInverse();
  puStack_f8 = auStack_a4;
  piVar2 = param_1 + 0x2d4;
  puStack_100 = auStack_b4;
  piStack_104 = (int *)0xad10a3;
  piStack_fc = piVar2;
  D3DXVec3TransformNormal();
  piStack_104 = (int *)0xad10d9;
  fVar6 = (float10)(**(code **)(*param_1 + 0x24))();
  puStack_f4 = (undefined1 *)(float)fVar6;
  piStack_104 = piVar1;
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x41200000;
    param_1[0x186] = 1;
    piStack_104 = (int *)0xad111a;
    FUN_00acb3a0();
    break;
  case 1:
    break;
  case 2:
    piStack_104 = (int *)0x0;
    pfStack_108 = (float *)0xad11a0;
    iVar4 = FUN_00a94ce0();
    if (iVar4 == 0) {
      return;
    }
    piStack_104 = (int *)0xad11b1;
    FUN_00de3530();
    pfStack_108 = (float *)&stack0xffffff20;
    piStack_104 = (int *)0x20040;
    pfStack_10c = (float *)0xad11c0;
    FUN_00a826c0();
    piStack_104 = (int *)0x3f800000;
    pfStack_108 = (float *)0xbf800000;
    pfStack_10c = (float *)0x0;
    fStack_110 = 1.0;
    FUN_00a9f0e0(&stack0xffffff20,&DAT_0164798c,0,0x3e4ccccd);
    piStack_104 = (int *)0x0;
    pfStack_108 = (float *)0xad1201;
    FUN_00a95fb0();
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 3:
    fStack_f0 = 0.0;
    pfStack_10c = &fStack_f0;
    piStack_ec = (int *)0x0;
    fStack_e8 = (float)(fVar6 * (float10)(float)param_1[0x2e4]);
    fStack_110 = 1.5894065e-38;
    pfStack_108 = pfStack_10c;
    D3DXVec3TransformNormal();
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)piStack_fc + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)puStack_f8);
    param_1[0x16] = (int)((float)puStack_f4 + (float)param_1[0x16]);
    param_1[0x17] = (int)(fStack_f0 + (float)param_1[0x17]);
    fStack_110 = 1.5894193e-38;
    fVar6 = (float10)FUN_00fdc1f0();
    fVar7 = (float10)(float)puStack_100;
    param_1[0x2e4] = (int)(float)(fVar6 * (float10)(float)param_1[0x2e4] + fVar7 * (float10)0.01);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)(float)((float10)(float)param_1[0x2fc] - fVar7);
    fVar6 = (float10)(float)param_1[0x360] - fVar7;
    param_1[0x360] = (int)(float)fVar6;
    if (fVar6 < (float10)0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((param_1[0x24c] != 0x1a) && (fVar6 < (float10)15.0)) {
      fStack_110 = 1.4013e-45;
      FUN_00acc460(piVar2,&piStack_fc,(float)(((float10)15.0 - fVar6) * (float10)0.01),
                   (float)(fVar7 * (float10)0.17453292));
    }
    piStack_ec = (int *)((float)param_1[0x14] - (float)param_1[0x244]);
    fStack_e8 = (float)param_1[0x15] - (float)param_1[0x245];
    fStack_e4 = (float)param_1[0x16] - (float)param_1[0x246];
    fStack_110 = 1.5894553e-38;
    fStack_110 = (float)FUN_009f8b40();
    FUN_00acb320(&stack0xffffff24,0x3f000000,&piStack_ec);
    return;
  case 4:
    fStack_f0 = 0.0;
    pfStack_10c = &fStack_f0;
    piStack_ec = (int *)(float)((float10)0.02 * fVar6);
    fStack_e8 = (float)(fVar6 * (float10)(float)param_1[0x2e4]);
    fStack_110 = 1.5894661e-38;
    pfStack_108 = pfStack_10c;
    D3DXVec3TransformNormal();
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)piStack_fc + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)puStack_f8);
    param_1[0x16] = (int)((float)puStack_f4 + (float)param_1[0x16]);
    param_1[0x17] = (int)(fStack_f0 + (float)param_1[0x17]);
    fStack_110 = 1.5894788e-38;
    fVar6 = (float10)FUN_00fdc1f0();
    puVar9 = auStack_7c;
    param_1[0x2e4] =
         (int)(float)((float10)0.03 * (float10)(float)puStack_100 +
                     fVar6 * (float10)(float)param_1[0x2e4]);
    fVar6 = (float10)(float)puStack_100 * (float10)0.05235988;
    piStack_ec = (int *)(float)fVar6;
    fStack_110 = (float)fVar6;
    D3DXMatrixRotationZ();
    D3DXMatrixMultiply(piVar1,auStack_84,piVar1);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    if (!NAN(unaff_EBX) && 5.0 < unaff_EBX != (unaff_EBX == 5.0)) {
      puVar8 = puStack_100;
      if (param_1[0x24c] == 0x1a) {
        puVar8 = (undefined1 *)((float)puVar9 * 0.017453292);
      }
      FUN_00acc460(piVar2,&fStack_110,0x3dcccccd,puVar8,1);
    }
    fVar3 = (float)param_1[0x2fc];
    param_1[0x2fc] = (int)(fVar3 - (float)puVar9);
    if (0.0 <= fVar3 - (float)puVar9) {
      fStack_f0 = (float)param_1[0x244];
      piStack_ec = (int *)param_1[0x245];
      fStack_e8 = (float)param_1[0x246];
      fStack_e4 = (float)param_1[0x247];
      puStack_100 = (undefined1 *)((float)param_1[0x14] - fStack_f0);
      piStack_fc = (int *)((float)param_1[0x15] - (float)piStack_ec);
      puStack_f8 = (undefined1 *)((float)param_1[0x16] - fStack_e8);
      puStack_f4 = (undefined1 *)((float)param_1[0x17] - fStack_e4);
      uVar5 = FUN_009f8b40();
      FUN_00acb320(&fStack_f0,0x3f000000,&puStack_100,uVar5);
      return;
    }
    goto LAB_00ad1188;
  case 5:
    if (param_1[0x3cc] != 0) {
      *(undefined4 *)(param_1[0x3cc] + 0x34) = 0;
    }
    piStack_104 = (int *)0xad159a;
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  default:
    goto switchD_00ad10ec_default;
  }
  piStack_104 = (int *)0x0;
  pfStack_108 = (float *)0xad1127;
  iVar4 = FUN_00a94ce0();
  if (iVar4 != 0) {
    piStack_104 = (int *)0xad1138;
    FUN_00de3530();
    pfStack_108 = (float *)&stack0xffffff20;
    piStack_104 = (int *)0x20040;
    pfStack_10c = (float *)0xad1147;
    FUN_00a826c0();
    piStack_104 = (int *)0x3f800000;
    pfStack_108 = (float *)0xbf800000;
    pfStack_10c = (float *)0x0;
    fStack_110 = 1.0;
    FUN_00a9f0e0(&stack0xffffff20,&DAT_016a027c,0,0x3e4ccccd);
    piStack_104 = (int *)0x0;
    pfStack_108 = (float *)0xad1188;
    FUN_00a95fb0();
LAB_00ad1188:
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00ad10ec_default:
  return;
}

// 00AD15E0  FUN_00ad15e0  size=870  [between]
void __fastcall FUN_00ad15e0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((param_1[0x139] == 0) && (param_1[0x3c4] == 0)) {
    if (param_1[0x300] != 0) {
      FUN_00eaa7b0(1,param_1[0x304],param_1[0x305],param_1[0x306],0);
      fVar3 = (float10)fpatan((float10)(float)param_1[0x309],
                              SQRT((float10)(float)param_1[0x308] * (float10)(float)param_1[0x308] +
                                   (float10)(float)param_1[0x30a] * (float10)(float)param_1[0x30a]))
      ;
      local_60 = (float)-fVar3;
      fVar3 = (float10)fpatan((float10)(float)param_1[0x308],(float10)(float)param_1[0x30a]);
      local_5c = (float)fVar3;
      FUN_00c76f00();
      local_90 = param_1[0x304];
      local_64 = param_1[0x239];
      local_8c = param_1[0x305];
      local_88 = param_1[0x306];
      local_84 = param_1[0x307];
      local_80 = local_60;
      local_7c = local_5c;
      local_78 = 0.0;
      local_74 = local_54;
      if (local_64 != 0xffff) {
        local_80 = (float)param_1[0x308];
        local_7c = (float)param_1[0x309];
        local_78 = (float)param_1[0x30a];
        local_74 = param_1[0x30b];
      }
      iVar1 = param_1[0x357];
      FUN_00a81330(iVar1);
      FUN_00a7c800();
      local_6c = FUN_00a12210(iVar1);
      local_68 = param_1[0x35d];
      local_70 = FUN_00a81330();
      FUN_009e85d0(0x65,0x3f800000);
      FUN_00eaa840();
      FUN_00acc0a0();
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
      return;
    }
    local_20 = param_1[0x244];
    local_1c = param_1[0x245];
    local_18 = param_1[0x246];
    local_14 = param_1[0x247];
    local_30 = param_1[0x14];
    local_2c = param_1[0x15];
    local_28 = param_1[0x16];
    local_24 = param_1[0x17];
    local_94 = 0;
    iVar1 = FUN_00907560(param_1 + 0x449,&local_40,&local_50,&local_94,0,&local_20,&local_30,0);
    if (iVar1 != 0) {
      FUN_00eaa7b0(1,local_40,local_3c,local_38,0);
      fVar3 = (float10)local_50;
      fVar2 = (float10)local_48;
      fVar4 = (float10)fpatan((float10)local_4c,SQRT(fVar2 * fVar2 + fVar3 * fVar3));
      local_60 = (float)-fVar4;
      fVar3 = (float10)fpatan(fVar3,fVar2);
      local_5c = (float)fVar3;
      FUN_00c76f00();
      local_64 = param_1[0x239];
      local_90 = local_40;
      local_8c = local_3c;
      local_88 = local_38;
      local_84 = local_34;
      local_80 = local_60;
      local_7c = local_5c;
      local_78 = 0.0;
      local_74 = local_54;
      if (local_64 != 0xffff) {
        local_80 = local_50;
        local_7c = local_4c;
        local_78 = local_48;
        local_74 = local_44;
      }
      FUN_00c76f30(local_94);
      (**(code **)(*param_1 + 0x318))(&local_90);
      FUN_009e85d0(0x65,0x3f800000);
      FUN_00eaa840();
      FUN_00acc0a0();
    }
  }
  return;
}

// 00AD1950  FUN_00ad1950  size=43  [between]
void __fastcall FUN_00ad1950(int param_1)

{
  if (*(int *)(param_1 + 0x618) == 0) {
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    *(undefined4 *)(param_1 + 0x618) = 1;
    FUN_00acb780();
  }
  FUN_00acc6e0();
  return;
}

// 00AD1980  FUN_00ad1980  size=329  [between]
void __fastcall FUN_00ad1980(int *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  fVar4 = (float10)(**(code **)(*param_1 + 0x24))();
  iVar3 = param_1[0x186];
  if (iVar3 == 0) {
    FUN_00acbfc0();
    param_1[0x2fc] = 0x40800000;
    param_1[0x186] = param_1[0x186] + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 == 2) {
      (**(code **)(param_1[0x44c] + 8))(0x3f800000,0,0);
      FUN_00eaa840();
      FUN_00acc0a0();
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
    }
    goto LAB_00ad1a39;
  }
  fVar2 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar2 - (float)fVar4);
  if (fVar2 - (float)fVar4 < 0.0) {
    param_1[0x186] = 2;
  }
LAB_00ad1a39:
  if (param_1[0x255] != 0) {
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      param_1[0x3c7] = 1;
      fStack_30 = (float)param_1[0x14] - *(float *)(iVar3 + 0x40);
      pfVar1 = (float *)(param_1 + 0x24);
      fStack_2c = (float)param_1[0x15] - *(float *)(iVar3 + 0x44);
      fStack_28 = (float)param_1[0x16] - *(float *)(iVar3 + 0x48);
      fStack_24 = (float)param_1[0x17] - *(float *)(iVar3 + 0x4c);
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      thunk_FUN_00dde510(pfVar1,param_1 + 0x25,&fStack_30,&uStack_20);
      *pfVar1 = *pfVar1 * -1.0;
      param_1[0x26] = 0;
      param_1[0x25c] = param_1[0x25];
    }
  }
  return;
}

// 00AD1AD0  FUN_00ad1ad0  size=422  [between]
void __fastcall FUN_00ad1ad0(int param_1)

{
  undefined4 uVar1;
  
  if (((*(int *)(param_1 + 0x4e4) == 0) && (*(int *)(param_1 + 0xf10) == 0)) &&
     (*(int *)(param_1 + 0xc00) != 0)) {
    FUN_00eaa7b0(1,*(undefined4 *)(param_1 + 0xc10),*(undefined4 *)(param_1 + 0xc14),
                 *(undefined4 *)(param_1 + 0xc18),0);
    fpatan((float10)*(float *)(param_1 + 0xc24),
           SQRT((float10)*(float *)(param_1 + 0xc20) * (float10)*(float *)(param_1 + 0xc20) +
                (float10)*(float *)(param_1 + 0xc28) * (float10)*(float *)(param_1 + 0xc28)));
    fpatan((float10)*(float *)(param_1 + 0xc20),(float10)*(float *)(param_1 + 0xc28));
    FUN_00c76f00();
    uVar1 = *(undefined4 *)(param_1 + 0xd5c);
    FUN_00a81330(uVar1);
    FUN_00a7c800();
    FUN_00a12210(uVar1);
    FUN_00a81330();
    FUN_009e85d0(0x65,0x3f800000);
    FUN_00eaa840();
    FUN_00acc0a0();
    *(undefined4 *)(param_1 + 0xf10) = 1;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
  }
  return;
}

// 00AD1C80  FUN_00ad1c80  size=32  [between]
void __fastcall FUN_00ad1c80(int *param_1)

{
  (**(code **)(*param_1 + 0x128))();
  if (param_1[0x300] != 0) {
    FUN_00acc0a0();
    return;
  }
  return;
}

// 00AD1CE0  Wpc001::vf1A4  size=286  [class]
void __thiscall Wpc001::vf1A4(int *param_1,int param_2,uint param_3)

{
  if (((param_3 & 0x2000) == 0) || (param_1[0x24c] != 0x1d)) {
    param_1[0x304] = *(int *)(param_2 + 0x100);
    param_1[0x305] = *(int *)(param_2 + 0x104);
    param_1[0x306] = *(int *)(param_2 + 0x108);
    param_1[0x307] = *(int *)(param_2 + 0x10c);
    param_1[0x308] = *(int *)(param_2 + 0x110);
    param_1[0x309] = *(int *)(param_2 + 0x114);
    param_1[0x30a] = *(int *)(param_2 + 0x118);
    param_1[0x30b] = *(int *)(param_2 + 0x11c);
    param_1[0x300] = 1;
    FUN_00448f50(param_2);
    if (param_1[0x24c] == 0x27) {
      (**(code **)(param_1[0x398] + 8))(0x3f800000,0,0);
    }
    if ((param_3 & 0x2000) != 0) {
      param_1[0x300] = 0;
      param_1[0x301] = 1;
      param_1[0x10] = param_1[0x304];
      param_1[0x11] = param_1[0x305];
      param_1[0x12] = param_1[0x306];
      FUN_00a8e640(param_1 + 4);
      return;
    }
    (**(code **)(*param_1 + 0x324))(param_2,param_3);
  }
  return;
}

// 00AD1E00  FUN_00ad1e00  size=1184  [callgraph]
undefined4 __thiscall FUN_00ad1e00(int param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int *piStack_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  iVar11 = 0;
  if (((*(int *)(param_1 + 0x4e4) == 0) && (*(int *)(param_1 + 0xf10) == 0)) &&
     (*(int *)(param_1 + 0xf24) != 0)) {
    local_7c = 0;
    local_74 = param_1;
    piVar6 = (int *)FUN_00c13920();
    iVar7 = (**(code **)(*piVar6 + 0x28))(0);
    if (((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) &&
       (iVar7 = FUN_00b8c050(), iVar7 != 0)) {
      iStack_80 = 1;
    }
    fStack_54 = *(float *)(param_1 + 0x910);
    fStack_50 = *(float *)(param_1 + 0x914);
    fStack_4c = *(float *)(param_1 + 0x918);
    fStack_48 = *(float *)(param_1 + 0x91c);
    fStack_64 = *(float *)(param_1 + 0x50);
    fStack_60 = *(float *)(param_1 + 0x54);
    fStack_5c = *(float *)(param_1 + 0x58);
    fStack_58 = *(float *)(param_1 + 0x5c);
    iVar7 = FUN_00907640(param_1 + 0x1124,&iStack_84,&local_74);
    if (iVar7 != 0) {
      FUN_0112bcf0();
      fVar2 = fStack_64 - fStack_54;
      fVar4 = fStack_60 - fStack_50;
      fVar3 = fStack_5c - fStack_4c;
      fVar1 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
      if (((0.0 < fVar1) && (0.0 < *(float *)(param_1 + 0xbf8))) &&
         (0.0 < *(float *)(param_1 + 0xbfc))) {
        if (*(int *)(param_1 + 0xbf4) == 0) {
          FUN_0092fd20(fVar1 * *(float *)(param_1 + 0xbf8),&local_74,
                       *(undefined4 *)(param_1 + 0xbfc));
        }
        else if (*(int *)(param_1 + 0xbf4) == 1) {
          fVar1 = *(float *)(param_1 + 0xbf8);
          fStack_54 = fVar2 * fVar1;
          fStack_50 = fVar4 * fVar1;
          fStack_4c = fVar3 * fVar1;
          fStack_48 = (fStack_58 - fStack_48) * fVar1;
          FUN_00930150(&fStack_54,&local_74,*(undefined4 *)(param_1 + 0xbfc));
        }
      }
      local_7c = 0;
      if (0 < *(int *)(iStack_84 + 0x14)) {
        do {
          iVar7 = *(int *)(*(int *)(iStack_84 + 0x10) + 0x28 + iVar11);
          piVar6 = (int *)(*(int *)(iStack_84 + 0x10) + iVar11);
          iVar12 = 0;
          if (*(char *)(iVar7 + 0x18) == '\x01') {
            iVar12 = *(char *)(iVar7 + 0x10) + iVar7;
          }
          if (iStack_80 == 0) {
            if (iVar12 == 0) goto LAB_00ad20b1;
LAB_00ad2024:
            FUN_004066f0();
            if (iVar12 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(uint *)(iVar12 + 0xc);
              if (uVar8 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(uint *)((-(uint)(uVar8 != 0) & uVar8) + 8);
              }
            }
            if (iVar12 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(uint *)(iVar12 + 0xc);
              if (uVar9 == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = *(uint *)((-(uint)(uVar9 != 0) & uVar9) + 0x30);
              }
            }
            if (((uVar9 & 0x100) == 0) || ((uVar8 & 0x400000) != 0)) {
              FUN_00406760();
LAB_00ad20b1:
              local_74 = *piVar6;
              iStack_70 = piVar6[1];
              iStack_6c = piVar6[2];
              fStack_54 = (float)piVar6[4];
              fVar13 = (float10)fStack_54;
              fStack_50 = (float)piVar6[5];
              fStack_4c = (float)piVar6[6];
              fVar14 = (float10)fStack_4c;
              if (param_2 != (int *)0x0) {
                *param_2 = local_74;
                param_2[1] = iStack_70;
                param_2[2] = iStack_6c;
                param_2[3] = iStack_68;
              }
              if (param_3 != (float *)0x0) {
                *param_3 = fStack_54;
                param_3[1] = fStack_50;
                param_3[2] = fStack_4c;
                param_3[3] = fStack_48;
              }
              fVar15 = (float10)fpatan((float10)fStack_50,SQRT(fVar13 * fVar13 + fVar14 * fVar14));
              fStack_64 = (float)-fVar15;
              fVar13 = (float10)fpatan(fVar13,fVar14);
              fStack_60 = (float)fVar13;
              FUN_00c76f00();
              piVar6 = piStack_78;
              iStack_44 = local_74;
              iStack_18 = piStack_78[0x239];
              iStack_40 = iStack_70;
              iStack_3c = iStack_6c;
              iStack_38 = iStack_68;
              fStack_34 = fStack_64;
              fStack_30 = fStack_60;
              fStack_2c = 0.0;
              fStack_28 = fStack_58;
              if (iStack_18 != 0xffff) {
                fStack_34 = fStack_54;
                fStack_30 = fStack_50;
                fStack_2c = fStack_4c;
                fStack_28 = fStack_48;
              }
              if (iVar12 != 0) {
                iVar11 = FUN_008f7780(iVar12);
                if (iVar11 != 0) {
                  uStack_24 = *(undefined4 *)(iVar11 + 0x4f0);
                }
                uVar8 = *(uint *)(iVar12 + 0xc);
                if (uVar8 == 0) {
                  uStack_1c = 0;
                }
                else {
                  uStack_1c = *(undefined4 *)((-(uint)(uVar8 != 0) & uVar8) + 0x2c);
                }
                FUN_00910a40(iVar12);
                sVar5 = FUN_00916480();
                if (iVar11 != 0) {
                  uStack_20 = FUN_00a12210((int)sVar5);
                }
              }
              (**(code **)(*piVar6 + 0x318))(&iStack_44);
              if (piVar6[0x3d0] != 0) {
                piVar6[0x414] = (int)piStack_78;
                piVar6[0x415] = local_74;
                piVar6[0x416] = iStack_70;
                piVar6[0x417] = iStack_6c;
                Behavior::createAttackImpactWave(piVar6 + 0x3d0);
              }
              piVar10 = (int *)FUN_00c206d0();
              (**(code **)(*piVar10 + 4))(4,piVar6[0x13c],&piStack_78);
              return 1;
            }
            FUN_00406760();
          }
          else if (iVar12 != 0) goto LAB_00ad2024;
          local_7c = local_7c + 1;
          iVar11 = iVar11 + 0x30;
        } while (local_7c < *(int *)(iStack_84 + 0x14));
      }
    }
  }
  return 0;
}

// 00AD22A0  FUN_00ad22a0  size=88  [callgraph]
void __fastcall FUN_00ad22a0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4e4) == 0) &&
     ((iVar1 = FUN_00ad1e00(0,0), iVar1 != 0 || (*(int *)(param_1 + 0xc00) != 0)))) {
    FUN_00acc2f0(0x43340000,0);
    *(undefined4 *)(param_1 + 0xf10) = 1;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    if (iVar1 != 0) {
      FUN_00accf70();
      return;
    }
  }
  return;
}

// 00AD2300  FUN_00ad2300  size=88  [callgraph]
void __fastcall FUN_00ad2300(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4e4) == 0) &&
     ((iVar1 = FUN_00ad1e00(0,0), iVar1 != 0 || (*(int *)(param_1 + 0xc00) != 0)))) {
    FUN_00acc2f0(0x43340000,0);
    *(undefined4 *)(param_1 + 0xf10) = 1;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    if (iVar1 != 0) {
      FUN_00accf70();
      return;
    }
  }
  return;
}

// 00AD2360  FUN_00ad2360  size=79  [callgraph]
void __fastcall FUN_00ad2360(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ad1e00(0,0);
  if ((iVar1 != 0) || (*(int *)(param_1 + 0xc00) != 0)) {
    FUN_00acc2f0(0x43340000,0);
    *(undefined4 *)(param_1 + 0xf10) = 1;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    if (iVar1 != 0) {
      FUN_00accf70();
      return;
    }
  }
  return;
}

// 00AD23B0  FUN_00ad23b0  size=45  [callgraph]
void __fastcall FUN_00ad23b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ad1e00(0,0);
  if (((iVar1 != 0) || (*(int *)(param_1 + 0xc00) != 0)) && (*(int *)(param_1 + 0x618) < 3)) {
    *(undefined4 *)(param_1 + 0x618) = 4;
  }
  return;
}

// 00AD23E0  FUN_00ad23e0  size=674  [callgraph]
void __fastcall FUN_00ad23e0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  int *piStack_60;
  undefined4 uStack_5c;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char *pcStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  fVar15 = (float10)(**(code **)(*param_1 + 0x24))();
  fVar1 = (float)fVar15;
  iVar13 = param_1[0x186];
  if (iVar13 == 0) {
    FUN_00acd060();
    fVar15 = (float10)fVar1;
    param_1[0x186] = 1;
  }
  else if (iVar13 != 1) {
    if (iVar13 != 2) {
      return;
    }
    (**(code **)(param_1[0x44c] + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  }
  fVar2 = (float)param_1[0x248];
  fVar3 = (float)param_1[0x249];
  fVar4 = (float)param_1[0x24a];
  fVar5 = (float)param_1[0x24b];
  param_1[0x249] = (int)((float)param_1[0x2e5] + (float)param_1[0x249]);
  fVar16 = (float10)FUN_00fdc1f0();
  param_1[0x248] = (int)(float)((float10)(float)param_1[0x248] * fVar16);
  param_1[0x249] = (int)(float)((float10)(float)param_1[0x249] * fVar16);
  param_1[0x24a] = (int)(float)((float10)(float)param_1[0x24a] * fVar16);
  param_1[0x24b] = (int)(float)(fVar16 * (float10)(float)param_1[0x24b]);
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x14] = (int)((float)param_1[0x14] + (float)((float10)fVar2 * fVar15));
  param_1[0x15] = (int)((float)param_1[0x15] + (float)((float10)fVar3 * fVar15));
  param_1[0x16] = (int)((float)((float10)fVar4 * fVar15) + (float)param_1[0x16]);
  param_1[0x17] = (int)((float)param_1[0x17] + (float)((float10)fVar5 * fVar15));
  fVar1 = (float)param_1[0x2fc] - fVar1;
  param_1[0x2fc] = (int)fVar1;
  if (0.0 <= fVar1) {
    param_1[0x466] = param_1[0x466] | 0x40;
    param_1[0x45c] = param_1[0x248];
    param_1[0x45d] = param_1[0x249];
    param_1[0x45e] = param_1[0x24a];
    param_1[0x45f] = param_1[0x24b];
    iVar13 = param_1[0x244];
    iVar6 = param_1[0x245];
    iVar7 = param_1[0x246];
    iVar8 = param_1[0x247];
    iVar9 = param_1[0x14];
    iVar10 = param_1[0x15];
    iVar11 = param_1[0x16];
    iVar12 = param_1[0x17];
    iVar14 = FUN_009f8b40();
    uStack_30 = iVar14 << 0x10 | 0x15;
    piStack_60 = param_1 + 0x449;
    uStack_5c = 0;
    uStack_2c = 0;
    uStack_28 = 2;
    uStack_24 = 5;
    pcStack_20 = "Bullet";
    uStack_1c = 0;
    uStack_18 = 0;
    iStack_50 = iVar13;
    iStack_4c = iVar6;
    iStack_48 = iVar7;
    iStack_44 = iVar8;
    iStack_40 = iVar9;
    iStack_3c = iVar10;
    iStack_38 = iVar11;
    iStack_34 = iVar12;
    HavokRayCastManager::set(&piStack_60);
    return;
  }
  param_1[0x186] = 2;
  return;
}

// 00AD3BE0  FUN_00ad3be0  size=167  [callgraph]
int * FUN_00ad3be0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_0040b190();
  local_40 = *(undefined4 *)(param_2 + 0x120);
  local_3c = *(undefined4 *)(param_2 + 0x124);
  local_38 = *(undefined4 *)(param_2 + 0x128);
  iVar1 = FUN_00a82090("bullet",*(undefined4 *)(param_2 + 4),local_90);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9c94;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c94);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        piVar2[0x23a] = param_1;
        FUN_00ad00b0(param_2);
        return piVar2;
      }
    }
    FUN_00a805f0();
  }
  return (int *)0x0;
}

// 00AD3C90  FUN_00ad3c90  size=493  [callgraph]
void __fastcall FUN_00ad3c90(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  sVar1 = FUN_00dde2d0(0,0x7fff);
  *(int *)(param_1 + 0xa34) = (int)sVar1;
  if ((*(uint *)(param_1 + 0x9cc) & 0x200000) == 0) {
    uVar2 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
    uVar4 = *(undefined4 *)(param_1 + 0xb9c);
    uVar5 = 0xb;
  }
  else if (*(int *)(param_1 + 0x930) == 8) {
    uVar2 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
    uVar4 = *(undefined4 *)(param_1 + 0xb9c);
    uVar5 = 2;
  }
  else {
    uVar2 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
    uVar4 = *(undefined4 *)(param_1 + 0xb9c);
    uVar5 = 0xc;
  }
  iVar3 = CollisionCapsule::CollisionCapsule(uVar5,uVar4,uVar2);
  if (iVar3 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,0);
    if (*(int *)(param_1 + 0x8e4) == 0x73) {
      uVar4 = 0x3f400000;
    }
    else {
      uVar4 = 0x3dcccccd;
    }
    FUN_00acb020(iVar3,*(undefined4 *)(param_1 + 0xb90),uVar4,0xffffffff);
    if ((*(int *)(param_1 + 0x930) == 0x1e) || (*(int *)(param_1 + 0x4b0) == 0x30321)) {
      uVar2 = 0;
      uVar4 = FUN_00a7c8a0(0);
      FUN_004039a0(0,uVar4,uVar2);
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      uVar4 = FUN_00a8d2a0();
      iVar3 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x380) = 0;
        FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
        *(undefined4 *)(iVar3 + 0x594) = 0x3f8ccccd;
        *(undefined4 *)(iVar3 + 0x590) = 0x3f000000;
        *(undefined4 *)(iVar3 + 0x580) = 0xbfc90fdb;
        *(undefined4 *)(iVar3 + 0x584) = 0;
        *(undefined4 *)(iVar3 + 0x588) = 0;
        *(undefined4 *)(iVar3 + 0x58c) = local_164;
        local_170 = 0;
        local_16c = 0;
        local_168 = 0;
        FUN_00d77c90(&local_170);
        FUN_00a93a00(iVar3,uVar4);
        FUN_00d7b0f0();
        FUN_00d7b890();
      }
      FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
    }
  }
  return;
}

// 00AD3E80  FUN_00ad3e80  size=674  [callgraph]
void __fastcall FUN_00ad3e80(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  int *piStack_60;
  undefined4 uStack_5c;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char *pcStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  fVar15 = (float10)(**(code **)(*param_1 + 0x24))();
  fVar1 = (float)fVar15;
  iVar13 = param_1[0x186];
  if (iVar13 == 0) {
    FUN_00ad3c90();
    fVar15 = (float10)fVar1;
    param_1[0x186] = 1;
  }
  else if (iVar13 != 1) {
    if (iVar13 != 2) {
      return;
    }
    (**(code **)(param_1[0x44c] + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  }
  fVar2 = (float)param_1[0x248];
  fVar3 = (float)param_1[0x249];
  fVar4 = (float)param_1[0x24a];
  fVar5 = (float)param_1[0x24b];
  param_1[0x249] = (int)((float)param_1[0x2e5] + (float)param_1[0x249]);
  fVar16 = (float10)FUN_00fdc1f0();
  param_1[0x248] = (int)(float)((float10)(float)param_1[0x248] * fVar16);
  param_1[0x249] = (int)(float)((float10)(float)param_1[0x249] * fVar16);
  param_1[0x24a] = (int)(float)((float10)(float)param_1[0x24a] * fVar16);
  param_1[0x24b] = (int)(float)(fVar16 * (float10)(float)param_1[0x24b]);
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x14] = (int)((float)param_1[0x14] + (float)((float10)fVar2 * fVar15));
  param_1[0x15] = (int)((float)param_1[0x15] + (float)((float10)fVar3 * fVar15));
  param_1[0x16] = (int)((float)((float10)fVar4 * fVar15) + (float)param_1[0x16]);
  param_1[0x17] = (int)((float)param_1[0x17] + (float)((float10)fVar5 * fVar15));
  fVar1 = (float)param_1[0x2fc] - fVar1;
  param_1[0x2fc] = (int)fVar1;
  if (0.0 <= fVar1) {
    param_1[0x466] = param_1[0x466] | 0x40;
    param_1[0x45c] = param_1[0x248];
    param_1[0x45d] = param_1[0x249];
    param_1[0x45e] = param_1[0x24a];
    param_1[0x45f] = param_1[0x24b];
    iVar13 = param_1[0x244];
    iVar6 = param_1[0x245];
    iVar7 = param_1[0x246];
    iVar8 = param_1[0x247];
    iVar9 = param_1[0x14];
    iVar10 = param_1[0x15];
    iVar11 = param_1[0x16];
    iVar12 = param_1[0x17];
    iVar14 = FUN_009f8b40();
    uStack_30 = iVar14 << 0x10 | 0x15;
    piStack_60 = param_1 + 0x449;
    uStack_5c = 0;
    uStack_2c = 0;
    uStack_28 = 2;
    uStack_24 = 5;
    pcStack_20 = "Bullet";
    uStack_1c = 0;
    uStack_18 = 0;
    iStack_50 = iVar13;
    iStack_4c = iVar6;
    iStack_48 = iVar7;
    iStack_44 = iVar8;
    iStack_40 = iVar9;
    iStack_3c = iVar10;
    iStack_38 = iVar11;
    iStack_34 = iVar12;
    HavokRayCastManager::set(&piStack_60);
    return;
  }
  param_1[0x186] = 2;
  return;
}

// 00AD4130  FUN_00ad4130  size=462  [callgraph]
void __fastcall FUN_00ad4130(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  sVar1 = FUN_00dde2d0(0,0x7fff);
  *(int *)(param_1 + 0xa34) = (int)sVar1;
  uVar2 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar3 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar2);
  if (iVar3 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,0);
    FUN_00acb020(iVar3,*(undefined4 *)(param_1 + 0xb90),0x3dcccccd,0xffffffff);
    if ((*(int *)(param_1 + 0x930) == 0x1e) || (*(int *)(param_1 + 0x4b0) == 0x30321)) {
      uVar4 = 0;
      uVar2 = FUN_00a7c8a0(0);
      FUN_004039a0(0,uVar2,uVar4);
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
      FUN_00acb220(10,0x3f000000,0x3dcccccd);
      *(undefined4 *)(param_1 + 0x1064) = 0x3dcccccd;
      *(undefined4 *)(param_1 + 0x1068) = 0x3e4ccccd;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      uVar2 = FUN_00a8d2a0();
      iVar3 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x380) = 0;
        FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
        *(undefined4 *)(iVar3 + 0x594) = 0x3f8ccccd;
        *(undefined4 *)(iVar3 + 0x590) = 0x3f000000;
        *(undefined4 *)(iVar3 + 0x580) = 0xbfc90fdb;
        *(undefined4 *)(iVar3 + 0x584) = 0;
        *(undefined4 *)(iVar3 + 0x588) = 0;
        *(undefined4 *)(iVar3 + 0x58c) = local_164;
        local_170 = 0;
        local_16c = 0;
        local_168 = 0;
        FUN_00d77c90(&local_170);
        FUN_00a93a00(iVar3,uVar2);
        FUN_00d7b0f0();
        FUN_00d7b890();
      }
      FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
    }
  }
  return;
}

// 00AD4300  FUN_00ad4300  size=1583  [callgraph]
void __fastcall FUN_00ad4300(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float unaff_EBX;
  float10 fVar7;
  float fVar8;
  undefined4 uVar9;
  int iStack_11c;
  int *piStack_118;
  float fStack_114;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  int iStack_e0;
  int iStack_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int *piStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [24];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  fStack_114 = 1.591161e-38;
  fVar7 = (float10)(**(code **)(*param_1 + 0x24))();
  fStack_f8 = (float)fVar7;
  fStack_114 = 1.5911622e-38;
  piVar4 = (int *)FUN_00c13920();
  fStack_114 = 0.0;
  piStack_118 = (int *)0xad432c;
  iVar5 = (**(code **)(*piVar4 + 0x28))();
  if (iVar5 != 0) {
    piStack_118 = (int *)0xad4337;
    iVar5 = FUN_00a7c8a0();
    if (iVar5 != 0) {
      piStack_118 = (int *)0xad4342;
      iVar5 = FUN_00b8c050();
      if (iVar5 != 0) {
        fStack_fc = fStack_fc * 0.3;
        piStack_118 = (int *)0xad4359;
        piVar4 = (int *)FUN_00c13920();
        piStack_118 = (int *)0x0;
        iStack_11c = 0xad4364;
        iVar5 = (**(code **)(*piVar4 + 0x28))();
        if (iVar5 != 0) {
          piStack_118 = (int *)0xad436f;
          iVar5 = FUN_00a7c8a0();
          if (iVar5 != 0) {
            piStack_118 = (int *)0xad437a;
            iVar5 = FUN_00b7e570();
            if (iVar5 != 0) {
              fStack_fc = fStack_fc * 0.1;
            }
          }
        }
      }
    }
  }
  piStack_118 = (int *)0xad4397;
  iVar5 = FUN_00a81330();
  fStack_f8 = 0.0;
  if (iVar5 != 0) {
    piStack_118 = (int *)0xad43a8;
    fStack_f8 = (float)FUN_00a7c8a0();
  }
  pfVar2 = (float *)(param_1 + 0x2dc);
  param_1[0x2d8] = param_1[0x2dc];
  param_1[0x2d9] = param_1[0x2dd];
  param_1[0x2da] = param_1[0x2de];
  param_1[0x2db] = param_1[0x2df];
  if (fStack_f8 == 0.0) {
    piStack_118 = (int *)0xad4435;
    FUN_00a7c950();
  }
  else {
    *pfVar2 = *(float *)((int)fStack_f8 + 0x50);
    param_1[0x2dd] = *(int *)((int)fStack_f8 + 0x54);
    param_1[0x2de] = *(int *)((int)fStack_f8 + 0x58);
    param_1[0x2df] = *(int *)((int)fStack_f8 + 0x5c);
    piStack_118 = (int *)(int)(short)param_1[0x2f5];
    iStack_11c = 0xad4403;
    iVar5 = FUN_00a12210();
    if ((-1 < (short)param_1[0x2f5]) && (iVar5 != 0)) {
      *pfVar2 = *(float *)(iVar5 + 0x40);
      param_1[0x2dd] = *(int *)(iVar5 + 0x44);
      param_1[0x2de] = *(int *)(iVar5 + 0x48);
      param_1[0x2df] = *(int *)(iVar5 + 0x4c);
    }
  }
  iStack_11c = 0;
  piStack_118 = param_1 + 4;
  D3DXMatrixInverse();
  D3DXVec3TransformNormal(&iStack_e0,param_1 + 0x2d4,auStack_70);
  fStack_ec = fStack_4c + fStack_ec;
  iVar5 = param_1[0x186];
  fStack_e8 = fStack_48 + fStack_e8;
  fStack_e4 = fStack_44 + fStack_e4;
  if (iVar5 == 0) {
    FUN_00ad4130();
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x440] = 0x41f00000;
    param_1[0x186] = 1;
    *(undefined2 *)(param_1 + 0x365) = 0;
  }
  else if (iVar5 != 1) {
    if (iVar5 != 2) {
      return;
    }
    (**(code **)(param_1[0x44c] + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  }
  fStack_fc = 0.0;
  fStack_f8 = 0.0;
  fStack_f4 = (float)param_1[0x2e4] * fStack_114;
  D3DXVec3TransformNormal(&fStack_fc,&fStack_fc,param_1 + 4);
  pfVar1 = (float *)(param_1 + 0x14);
  param_1[0x248] = (int)unaff_EBX;
  param_1[0x249] = (int)fStack_104;
  param_1[0x24a] = (int)fStack_100;
  param_1[0x24b] = (int)fStack_fc;
  param_1[0x244] = (int)*pfVar1;
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  *pfVar1 = *pfVar1 + unaff_EBX;
  param_1[0x15] = (int)(fStack_104 + (float)param_1[0x15]);
  param_1[0x16] = (int)(fStack_100 + (float)param_1[0x16]);
  param_1[0x17] = (int)(fStack_fc + (float)param_1[0x17]);
  param_1[0x10] = (int)*pfVar1;
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  if (iStack_11c != 0) {
    param_1[0x2d4] = (int)*pfVar2;
    param_1[0x2d5] = param_1[0x2dd];
    param_1[0x2d6] = param_1[0x2de];
    param_1[0x2d7] = param_1[0x2df];
    if (param_1[0x24c] == 0x1d) {
      piStack_118 = (int *)((*pfVar2 - (float)param_1[0x2d8]) / (float)auStack_64);
      fStack_114 = ((float)param_1[0x2dd] - (float)param_1[0x2d9]) / (float)auStack_64;
      piVar4 = (int *)FUN_00a8cf30(&fStack_48,pfVar2,&piStack_118,pfVar1,param_1[0x2e4],0x3f800000);
      param_1[0x2d4] = *piVar4;
      param_1[0x2d5] = piVar4[1];
      param_1[0x2d6] = piVar4[2];
      param_1[0x2d7] = piVar4[3];
      if (NAN(fStack_f0) || 1.0 < fStack_f0 == (fStack_f0 == 1.0)) {
        *(undefined2 *)(param_1 + 0x365) = 1;
      }
      else {
        if ((short)param_1[0x365] == 0) {
          uVar9 = 1;
          fVar8 = (float)param_1[0x440] * 0.0017453292;
          fVar7 = (float10)FUN_00fdc1f0(fVar8,1);
          FUN_00acc460(param_1 + 0x2d4,&stack0xfffffef8,(float)fVar7,fVar8,uVar9);
        }
        fVar8 = (float)param_1[0x440];
        param_1[0x440] = (int)((float)param_1[0x3c8] + fVar8);
        if (30.0 < (float)param_1[0x3c8] + fVar8) {
          param_1[0x440] = 0x41f00000;
        }
      }
    }
    else if (NAN(fStack_f0) || 5.0 < fStack_f0 == (fStack_f0 == 5.0)) {
      *(undefined2 *)(param_1 + 0x365) = 1;
    }
    else {
      iVar5 = FUN_009f8b40();
      FUN_00445d40(pfVar1,param_1 + 0x2d4,iVar5 << 0x10 | 6,0,0,0,"Em0080 Main",0);
      iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_2(&piStack_118,0,&iStack_11c,0,&piStack_d8)
      ;
      if ((iVar5 == 0) && ((short)param_1[0x365] == 0)) {
        uVar9 = 1;
        fVar8 = (float)auStack_64 * 0.02094395;
        fVar7 = (float10)FUN_00fdc1f0(fVar8,1);
        FUN_00acc460(param_1 + 0x2d4,&stack0xfffffef8,(float)fVar7,fVar8,uVar9);
      }
      else {
        *(undefined2 *)(param_1 + 0x365) = 1;
      }
    }
  }
  fVar8 = (float)param_1[0x2fc] - (float)auStack_64;
  param_1[0x2fc] = (int)fVar8;
  if (0.0 <= fVar8) {
    param_1[0x466] = param_1[0x466] | 0x40;
    param_1[0x45c] = param_1[0x248];
    param_1[0x45d] = param_1[0x249];
    param_1[0x45e] = param_1[0x24a];
    param_1[0x45f] = param_1[0x24b];
    fStack_e8 = (float)param_1[0x244];
    fStack_e4 = (float)param_1[0x245];
    iStack_e0 = param_1[0x246];
    iStack_dc = param_1[0x247];
    piStack_118 = (int *)*pfVar1;
    fStack_114 = (float)param_1[0x15];
    iVar5 = param_1[0x16];
    iVar3 = param_1[0x17];
    iVar6 = FUN_009f8b40();
    iStack_c8 = (int)fStack_e8;
    uStack_d4 = 0;
    uStack_a4 = 0;
    iStack_c4 = (int)fStack_e4;
    uStack_94 = 0;
    uStack_90 = 0;
    iStack_c0 = iStack_e0;
    iStack_bc = iStack_dc;
    piStack_d8 = param_1 + 0x449;
    uStack_a8 = iVar6 << 0x10 | 0x15;
    piStack_b8 = piStack_118;
    iStack_b4 = (int)fStack_114;
    uStack_a0 = 2;
    uStack_9c = 5;
    pcStack_98 = "Bullet";
    iStack_b0 = iVar5;
    iStack_ac = iVar3;
    HavokRayCastManager::set(&piStack_d8);
    return;
  }
  param_1[0x186] = 2;
  return;
}

// 00AD4930  FUN_00ad4930  size=397  [callgraph]
void __fastcall FUN_00ad4930(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar2 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar1);
  if (iVar2 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    FUN_00acb020(iVar2,0x40000000,0x3e99999a,0xffffffff);
    uVar1 = FUN_00a8d2a0();
    iVar2 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      *(undefined4 *)(iVar2 + 0x594) = 0x40800000;
      *(undefined4 *)(iVar2 + 0x590) = 0x3f4ccccd;
      *(undefined4 *)(iVar2 + 0x580) = 0xbfc90fdb;
      *(undefined4 *)(iVar2 + 0x584) = 0;
      *(undefined4 *)(iVar2 + 0x588) = 0;
      *(undefined4 *)(iVar2 + 0x58c) = local_164;
      local_170 = 0;
      local_16c = 0;
      local_168 = 0x3f800000;
      FUN_00d77c90(&local_170);
      FUN_00a93a00(iVar2,uVar1);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    iVar2 = *(int *)(param_1 + 0x930);
    if (((iVar2 == 0xd) || (iVar2 == 0x26)) || (iVar2 == 0x25)) {
      uVar3 = 0;
      uVar1 = FUN_00a7c8a0(0);
      FUN_004039a0(0,uVar1,uVar3);
      FUN_00dffb20(param_1 + 0xdb0);
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    }
    if (*(int *)(param_1 + 0x930) == 0x26) {
      FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
    }
  }
  return;
}

// 00AD4AD0  FUN_00ad4ad0  size=1840  [callgraph]
void __fastcall FUN_00ad4ad0(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  float unaff_EBX;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  float *pfVar12;
  undefined1 **ppuVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char *pcStack_130;
  float *pfStack_12c;
  float *pfStack_128;
  int *piStack_124;
  undefined1 *puStack_120;
  int *piStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  float fStack_110;
  int *piStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined1 auStack_d4 [4];
  float fStack_d0;
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [20];
  undefined1 auStack_84 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  fStack_104 = 0.0;
  fStack_108 = 1.4013e-45;
  piStack_10c = (int *)0xad4aef;
  iVar4 = (**(code **)(*param_1 + 0x308))();
  if (iVar4 != 0) {
    piStack_10c = (int *)0xad4afa;
    FUN_00acc0a0();
    return;
  }
  piStack_10c = (int *)0xad4b0c;
  iVar4 = FUN_00a81330();
  iVar8 = 0;
  if (iVar4 == 0) {
LAB_00ad4b86:
    piStack_10c = (int *)0xad4b91;
    FUN_00a7c950();
  }
  else {
    piStack_10c = (int *)0xad4b19;
    iVar8 = FUN_00a7c8a0();
    if (iVar8 == 0) goto LAB_00ad4b86;
    param_1[0x2d4] = *(int *)(iVar8 + 0x50);
    param_1[0x2d5] = *(int *)(iVar8 + 0x54);
    param_1[0x2d6] = *(int *)(iVar8 + 0x58);
    param_1[0x2d7] = *(int *)(iVar8 + 0x5c);
    piStack_10c = (int *)(int)(short)param_1[0x2f5];
    fStack_110 = 1.591456e-38;
    iVar4 = FUN_00a12210();
    if ((-1 < (short)param_1[0x2f5]) && (iVar4 != 0)) {
      param_1[0x2d4] = *(int *)(iVar4 + 0x40);
      param_1[0x2d5] = *(int *)(iVar4 + 0x44);
      param_1[0x2d6] = *(int *)(iVar4 + 0x48);
      param_1[0x2d7] = *(int *)(iVar4 + 0x4c);
    }
  }
  piVar1 = param_1 + 4;
  fStack_110 = 0.0;
  puStack_114 = auStack_98;
  puStack_118 = (undefined1 *)0xad4ba1;
  piStack_10c = piVar1;
  D3DXMatrixInverse();
  puStack_118 = auStack_a4;
  piStack_11c = param_1 + 0x2d4;
  puStack_120 = auStack_d4;
  piStack_124 = (int *)0xad4bb7;
  D3DXVec3TransformNormal();
  fStack_e0 = fStack_80 + fStack_e0;
  fStack_dc = fStack_7c + fStack_dc;
  fStack_d8 = fStack_78 + fStack_d8;
  piStack_124 = (int *)0xad4bed;
  fVar9 = (float10)(**(code **)(*param_1 + 0x24))();
  puStack_114 = (undefined1 *)(float)fVar9;
  if (param_1[0x24c] == 0xd) {
    piStack_124 = (int *)0xad4bff;
    piVar5 = (int *)FUN_00c13920();
    piStack_124 = (int *)0x0;
    pfStack_128 = (float *)0xad4c0a;
    iVar4 = (**(code **)(*piVar5 + 0x28))();
    if (iVar4 != 0) {
      piStack_124 = (int *)0xad4c15;
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        piStack_124 = (int *)0xad4c20;
        iVar4 = FUN_00b8c050();
        if (iVar4 != 0) {
          puStack_114 = (undefined1 *)((float)puStack_114 * 0.3);
          piStack_124 = (int *)0xad4c39;
          iVar4 = FUN_00ac5e20();
          if (iVar4 != 0) {
            puStack_114 = (undefined1 *)((float)puStack_114 * 0.1);
          }
        }
      }
    }
  }
  if ((param_1[0x24c] == 0x26) && ((DAT_01bea090 & 0x2000000) != 0)) {
    param_1[0x1bb] = 0;
  }
  if (param_1[0x3cc] == 0) {
LAB_00ad4c7d:
    if (iVar8 != 0) goto LAB_00ad4c93;
  }
  else {
    piStack_124 = (int *)0xad4c79;
    iVar4 = FUN_00c15090();
    if (iVar4 == 0) goto LAB_00ad4c7d;
  }
  param_1[0x187] = 1;
LAB_00ad4c93:
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x41200000;
    param_1[0x186] = 1;
    piStack_124 = (int *)0xad4cca;
    FUN_00ad4930();
  case 1:
    fStack_110 = 0.0;
    pfStack_12c = &fStack_110;
    piStack_10c = (int *)0x0;
    fStack_108 = (float)param_1[0x2e4] * (float)puStack_114;
    pcStack_130 = (char *)0xad4cf0;
    pfStack_128 = pfStack_12c;
    piStack_124 = piVar1;
    D3DXVec3TransformNormal();
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)piStack_11c + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)puStack_118);
    param_1[0x16] = (int)((float)puStack_114 + (float)param_1[0x16]);
    param_1[0x17] = (int)(fStack_110 + (float)param_1[0x17]);
    pcStack_130 = (char *)0xad4d4b;
    fVar9 = (float10)FUN_00fdc1f0();
    fVar10 = (float10)(float)puStack_120;
    param_1[0x2e4] = (int)(float)(fVar9 * (float10)(float)param_1[0x2e4] + fVar10 * (float10)0.01);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)(float)((float10)(float)param_1[0x2fc] - fVar10);
    fVar2 = (float)param_1[0x360];
    param_1[0x360] = (int)(float)((float10)fVar2 - fVar10);
    if ((float10)fVar2 - fVar10 < (float10)0) {
      param_1[0x360] = (int)(float)(float10)0;
      param_1[0x186] = 2;
    }
    if (((param_1[0x24c] != 0x1a) && (param_1[0x24c] != 0x26)) &&
       ((float10)(float)param_1[0x360] < (float10)15.0)) {
      pcStack_130 = (char *)0x1;
      FUN_00acc460(param_1 + 0x2d4,&piStack_11c,
                   (float)(((float10)15.0 - (float10)(float)param_1[0x360]) * (float10)0.01),
                   (float)(fVar10 * (float10)0.17453292));
      fVar10 = (float10)(float)puStack_120;
    }
    if (param_1[0x24c] == 0x26) {
      param_1[0x15] = (int)(float)((float10)(float)param_1[0x15] - fVar10 * (float10)0.025);
    }
    piStack_10c = (int *)((float)param_1[0x14] - (float)param_1[0x244]);
    fStack_108 = (float)param_1[0x15] - (float)param_1[0x245];
    fStack_104 = (float)param_1[0x16] - (float)param_1[0x246];
    pcStack_130 = (char *)0xad4e83;
    iVar4 = FUN_009f8b40();
    pcStack_130 = "Bullet";
    FUN_0090fa30(param_1 + 0x449,0,&stack0xffffff04,0x3f000000,&piStack_10c,iVar4 << 0x10 | 5);
    return;
  case 2:
    break;
  case 3:
    piStack_124 = (int *)0xad51ed;
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
  default:
    return;
  }
  fStack_110 = 0.0;
  pfStack_12c = &fStack_110;
  piStack_10c = (int *)((float)puStack_114 * 0.02);
  fStack_108 = (float)puStack_114 * (float)param_1[0x2e4];
  pcStack_130 = (char *)0xad4eeb;
  pfStack_128 = pfStack_12c;
  piStack_124 = piVar1;
  D3DXVec3TransformNormal();
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x14] = (int)((float)piStack_11c + (float)param_1[0x14]);
  param_1[0x15] = (int)((float)param_1[0x15] + (float)puStack_118);
  param_1[0x16] = (int)((float)puStack_114 + (float)param_1[0x16]);
  param_1[0x17] = (int)(fStack_110 + (float)param_1[0x17]);
  pcStack_130 = (char *)0xad4f46;
  fVar9 = (float10)FUN_00fdc1f0();
  fVar9 = (float10)0.03 * (float10)(float)puStack_120 + fVar9 * (float10)(float)param_1[0x2e4];
  param_1[0x2e4] = (int)(float)fVar9;
  if ((param_1[0x24c] == 0x26) && ((float10)0.5 < fVar9)) {
    param_1[0x2e4] = (int)(float)(float10)0.5;
  }
  fVar9 = (float10)(float)puStack_120 * (float10)0.05235988;
  pfVar12 = &fStack_7c;
  fStack_d0 = (float)fVar9;
  pcStack_130 = (char *)(float)fVar9;
  D3DXMatrixRotationZ();
  D3DXMatrixMultiply(piVar1,auStack_84,piVar1);
  param_1[0x10] = param_1[0x14];
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  if ((!NAN(unaff_EBX) && 5.0 < unaff_EBX != (unaff_EBX == 5.0)) && (0 < param_1[0x187])) {
    if (param_1[0x24c] == 0x1a) {
      FUN_00acc460(param_1 + 0x2d4,&pcStack_130,0x3dcccccd,(float)pfVar12 * 0.017453292,1);
    }
    else if (param_1[0x24c] == 0x26) {
      fVar2 = (float)param_1[0x360];
      param_1[0x360] = (int)(fVar2 + (float)pfVar12);
      fVar3 = (float)param_1[0x14] - (float)param_1[0x2d4];
      if ((25.0 < fVar2 + (float)pfVar12) &&
         (42.25 < ((float)param_1[0x15] - (float)param_1[0x2d5]) *
                  ((float)param_1[0x15] - (float)param_1[0x2d5]) + fVar3 * fVar3 +
                  ((float)param_1[0x16] - (float)param_1[0x2d6]) *
                  ((float)param_1[0x16] - (float)param_1[0x2d6]))) {
        FUN_00acc460(param_1 + 0x2d4,&pcStack_130,0x3dcccccd,(float)pfVar12 * 0.03926991,1);
      }
    }
    else {
      FUN_00acc460(param_1 + 0x2d4,&pcStack_130,0x3dcccccd,uStack_e4,1);
    }
  }
  fVar2 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar2 - (float)pfVar12);
  if (0.0 <= fVar2 - (float)pfVar12) {
    fStack_110 = (float)param_1[0x244];
    piStack_10c = (int *)param_1[0x245];
    fStack_108 = (float)param_1[0x246];
    fStack_104 = (float)param_1[0x247];
    puStack_120 = (undefined1 *)((float)param_1[0x14] - fStack_110);
    piStack_11c = (int *)((float)param_1[0x15] - (float)piStack_10c);
    puStack_118 = (undefined1 *)((float)param_1[0x16] - fStack_108);
    puStack_114 = (undefined1 *)((float)param_1[0x17] - fStack_104);
    uVar6 = FUN_009f8b40();
    FUN_00acb320(&fStack_110,0x3f000000,&puStack_120,uVar6);
    fStack_e0 = 0.0;
    fStack_dc = 0.0;
    uVar16 = 1;
    fStack_d8 = 2.0;
    ppuVar13 = &puStack_120;
    pfVar12 = &fStack_e0;
    puStack_120 = (undefined1 *)0xbfc90fdb;
    piStack_11c = (int *)0x0;
    puStack_118 = (undefined1 *)0x0;
    uVar15 = 0x40400000;
    uVar14 = 0x3f19999a;
    uVar11 = 0xffffffff;
    uVar7 = FUN_00a7c7f0(0xffffffff,pfVar12,ppuVar13,0x3f19999a,0x40400000,1);
    uVar6 = extraout_ECX;
    FUN_00a7c940(uVar7);
    FUN_00c630c0(uVar6,uVar11,pfVar12,ppuVar13,uVar14,uVar15,uVar16);
    return;
  }
  param_1[0x186] = 3;
  return;
}

// 00AD5210  FUN_00ad5210  size=71  [callgraph]
void __fastcall FUN_00ad5210(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00ad1e00(0,0);
    if ((iVar1 != 0) || (*(int *)(param_1 + 0xc00) != 0)) {
      FUN_00acc2f0(0x43340000,0);
      *(undefined4 *)(param_1 + 0xf10) = 1;
      *(undefined4 *)(param_1 + 0x4e4) = 1;
    }
  }
  return;
}

// 00AD5260  FUN_00ad5260  size=42  [callgraph]
void __fastcall FUN_00ad5260(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 100))();
  switchD_0080dbae::default();
  iVar1 = FUN_00ad1e00(0,0);
  if (iVar1 != 0) {
    FUN_00acc0a0();
    return;
  }
  return;
}

// 00AD5290  FUN_00ad5290  size=724  [callgraph]
void __fastcall FUN_00ad5290(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int iStack_164;
  undefined1 local_160 [348];
  
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
  if (*(int *)(param_1 + 0x4b0) == 0x20046) {
    uVar2 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
    iVar3 = CollisionSphere::CollisionSphere(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar2);
    if (iVar3 == 0) {
      return;
    }
    FUN_00acb110(iVar3,0x3f266666,0xffffffff);
    *(undefined4 *)(iVar3 + 0x380) = 0;
    uVar2 = FUN_00a8d2a0();
    iVar3 = CollisionSphere::CollisionSphere(2,*(undefined4 *)(param_1 + 0xb9c),0);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      *(undefined4 *)(iVar3 + 0x510) = 0x3e4ccccd;
      local_170 = 0;
      local_16c = 0;
      local_168 = 0x3f800000;
      FUN_00d77c90(&local_170);
      FUN_00a93a00(iVar3,uVar2);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    uVar5 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(2,uVar2,uVar5);
    FUN_00dffb20(param_1 + 0xdb0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  }
  else {
    uVar2 = CollisionAttackData::CollisionAttackData((int *)(param_1 + 0x940));
    piVar4 = (int *)CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar2);
    if (piVar4 == (int *)0x0) {
      return;
    }
    pcVar1 = *(code **)(*piVar4 + 0x20);
    piVar4[0xe0] = *(int *)(param_1 + 0x940);
    piVar4[0xe3] = 1;
    (*pcVar1)(0x1e,*(undefined4 *)(param_1 + 0xb9c),0);
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
    piVar4[0x165] = 0x3f4ccccd;
    piVar4[0x164] = 0x3e99999a;
    piVar4[0x160] = -0x4036f025;
    piVar4[0x161] = 0;
    piVar4[0x162] = 0;
    piVar4[0x163] = iStack_164;
    local_170 = 0;
    local_16c = 0;
    local_168 = 0x3f19999a;
    FUN_00d77c90(&local_170);
    FUN_00a8c370(piVar4,*(undefined4 *)(param_1 + 0x760));
    FUN_00d7b0f0();
    FUN_00d7b890();
    uVar2 = FUN_00a8d2a0();
    iVar3 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      *(undefined4 *)(iVar3 + 0x594) = 0x3f4ccccd;
      *(undefined4 *)(iVar3 + 0x590) = 0x3e99999a;
      *(undefined4 *)(iVar3 + 0x580) = 0xbfc90fdb;
      *(undefined4 *)(iVar3 + 0x584) = 0;
      *(undefined4 *)(iVar3 + 0x588) = 0;
      *(int *)(iVar3 + 0x58c) = iStack_164;
      local_170 = 0;
      local_16c = 0;
      local_168 = 0x3f19999a;
      FUN_00d77c90(&local_170);
      FUN_00a93a00(iVar3,uVar2);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
  }
  FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
  return;
}

// 00AD5570  FUN_00ad5570  size=1191  [callgraph]
void __fastcall FUN_00ad5570(int *param_1)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  float *pfVar6;
  float unaff_EDI;
  float10 fVar7;
  undefined4 uVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float afStack_54 [3];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_1c;
  
  fVar13 = 1.4013e-45;
  iVar3 = (**(code **)(*param_1 + 0x308))();
  if (iVar3 != 0) {
    FUN_00acc0a0();
    return;
  }
  fVar7 = (float10)(**(code **)(*param_1 + 0x24))();
  fVar2 = (float)fVar7;
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x41200000;
    param_1[0x186] = 1;
    FUN_00ad5290();
    fVar7 = (float10)fVar2;
  case 1:
    fStack_84 = 0.0;
    fStack_80 = (float)(fVar7 * (float10)(float)param_1[0x2e4]);
    D3DXVec3TransformNormal(&stack0xffffff78,&stack0xffffff78,param_1 + 4);
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)param_1[0x14] + 0.0);
    param_1[0x15] = (int)((float)param_1[0x15] + unaff_EDI);
    param_1[0x16] = (int)(fVar2 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x17] + 0.0);
    fVar7 = (float10)FUN_00fdc1f0();
    param_1[0x2e4] = (int)(float)(fVar7 * (float10)(float)param_1[0x2e4]);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)((float)param_1[0x2fc] - fVar13);
    fVar2 = (float)param_1[0x360];
    param_1[0x360] = (int)(fVar2 - fVar13);
    if (fVar2 - fVar13 < 0.0) {
      param_1[0x186] = 2;
      iVar3 = FUN_00a93530(0);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x510) = 0x3e4ccccd;
        if ((*(int *)(iVar3 + 0x378) != 0) &&
           (iVar3 = FUN_00ac7150(*(int *)(iVar3 + 0x378)), iVar3 != 0)) {
          puVar1 = (uint *)(*(int *)(iVar3 + 8) + 0x8c);
          *puVar1 = *puVar1 | 0x100;
        }
      }
    }
    fStack_84 = (float)param_1[0x244];
    fStack_80 = (float)param_1[0x245];
    fStack_7c = (float)param_1[0x246];
    fStack_78 = (float)param_1[0x247];
    fStack_74 = (float)param_1[0x14] - fStack_84;
    fStack_70 = (float)param_1[0x15] - fStack_80;
    fStack_6c = (float)param_1[0x16] - fStack_7c;
    fStack_68 = (float)param_1[0x17] - fStack_78;
    uVar5 = FUN_009f8b40();
    FUN_00acb320(&fStack_84,0x3f000000,&fStack_74,uVar5);
    pfVar6 = &fStack_74;
    fStack_74 = -1.5707964;
    fStack_70 = 0.0;
    fStack_6c = 0.0;
    break;
  case 2:
    fStack_84 = (float)((float10)0.005 * fVar7);
    fStack_80 = (float)(fVar7 * (float10)(float)param_1[0x2e4]);
    D3DXVec3TransformNormal(&stack0xffffff78,&stack0xffffff78,param_1 + 4);
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)(fStack_84 + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + fStack_80);
    param_1[0x16] = (int)(fStack_7c + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x17] + fStack_78);
    fVar7 = (float10)FUN_00fdc1f0();
    fVar13 = (float)param_1[0x2e4];
    param_1[0x2e4] = (int)(float)(fVar7 * (float10)fVar13);
    if (param_1[0x24c] == 0xf) {
      param_1[0x2e4] = (int)(float)((float10)0.0 * (float10)0.01 + fVar7 * (float10)fVar13);
    }
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    fVar13 = (float)param_1[0x2fc];
    param_1[0x2fc] = (int)(fVar13 - 0.0);
    if (fVar13 - 0.0 < 0.0) {
      param_1[0x186] = 3;
      return;
    }
    fStack_74 = (float)param_1[0x244];
    fStack_70 = (float)param_1[0x245];
    fStack_6c = (float)param_1[0x246];
    fStack_68 = (float)param_1[0x247];
    fStack_64 = (float)param_1[0x14] - fStack_74;
    fStack_60 = (float)param_1[0x15] - fStack_70;
    fStack_5c = (float)param_1[0x16] - fStack_6c;
    fStack_58 = (float)param_1[0x17] - fStack_68;
    uVar5 = FUN_009f8b40();
    FUN_00acb320(&fStack_74,0x3f000000,&fStack_64,uVar5);
    pfVar6 = afStack_54;
    afStack_54[0] = -1.5707964;
    afStack_54[1] = 0.0;
    afStack_54[2] = 0.0;
    break;
  case 3:
    FUN_00c76f00();
    iStack_48 = param_1[0x14];
    iStack_1c = param_1[0x239];
    iStack_44 = param_1[0x15];
    iStack_40 = param_1[0x16];
    iStack_3c = param_1[0x17];
    iStack_38 = param_1[0x24];
    iStack_34 = param_1[0x25];
    iStack_30 = param_1[0x26];
    iStack_2c = param_1[0x27];
    (**(code **)(*param_1 + 0x318))(&iStack_48);
    param_1[0x186] = param_1[0x186] + 1;
    goto LAB_00ad59e6;
  case 4:
LAB_00ad59e6:
    param_1[0x2fc] = 0x3f800000;
    FUN_00acc2f0(0x3f800000,0);
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  default:
    return;
  }
  fStack_5c = 2.0;
  fStack_60 = 0.0;
  fStack_64 = 0.0;
  pfVar9 = &fStack_64;
  uVar12 = 1;
  uVar11 = 0x40400000;
  uVar10 = 0x3f19999a;
  uVar8 = 0xffffffff;
  uVar4 = FUN_00a7c7f0(0xffffffff,pfVar9,pfVar6,0x3f19999a,0x40400000,1);
  uVar5 = extraout_ECX;
  FUN_00a7c940(uVar4);
  FUN_00c630c0(uVar5,uVar8,pfVar9,pfVar6,uVar10,uVar11,uVar12);
  return;
}

// 00AD5A30  FUN_00ad5a30  size=45  [callgraph]
void __fastcall FUN_00ad5a30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ad1e00(0,0);
  if (((iVar1 != 0) || (*(int *)(param_1 + 0xc00) != 0)) && (*(int *)(param_1 + 0x618) < 3)) {
    *(undefined4 *)(param_1 + 0x618) = 4;
  }
  return;
}

// 00AD5A60  FUN_00ad5a60  size=1774  [callgraph]
void __fastcall FUN_00ad5a60(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float unaff_EDI;
  float10 fVar6;
  undefined4 uVar7;
  float fStack_204;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  int *piStack_1d8;
  undefined1 auStack_1d4 [4];
  float fStack_1d0;
  undefined1 auStack_1c4 [12];
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  int iStack_18c;
  undefined1 auStack_17c [376];
  
  fStack_204 = 0.0;
  iVar4 = (**(code **)(*param_1 + 0x308))();
  if (iVar4 != 0) {
    FUN_00acc0a0();
    return;
  }
  fVar6 = (float10)(**(code **)(*param_1 + 0x24))();
  fVar2 = (float)fVar6;
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x41200000;
    param_1[0x186] = 1;
    FUN_00ad5290();
    fVar6 = (float10)fVar2;
  case 1:
    fStack_1f4 = 0.0;
    fStack_1f0 = (float)(fVar6 * (float10)(float)param_1[0x2e4]);
    D3DXVec3TransformNormal(&stack0xfffffe08,&stack0xfffffe08,param_1 + 4);
    pfVar1 = (float *)(param_1 + 0x14);
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    *pfVar1 = fStack_204 + *pfVar1;
    param_1[0x15] = (int)(unaff_EDI + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x16] + fVar2);
    param_1[0x17] = (int)((float)param_1[0x17] + 0.0);
    fVar6 = (float10)FUN_00fdc1f0();
    param_1[0x2e4] = (int)(float)(fVar6 * (float10)(float)param_1[0x2e4]);
    param_1[0x10] = (int)*pfVar1;
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)((float)param_1[0x2fc] - 1.4013e-45);
    fVar2 = (float)param_1[0x360];
    param_1[0x360] = (int)(fVar2 - 1.4013e-45);
    if (fVar2 - 1.4013e-45 < 0.0) {
      param_1[0x186] = 2;
    }
    iVar4 = FUN_009f8b40();
    FUN_00468970(param_1 + 0x449,0,param_1 + 0x244,pfVar1,iVar4 << 0x10 | 5,0,0,0,"kogecko_pinball",
                 0,0);
    HavokRayCastManager::set(auStack_1c4);
    return;
  case 2:
    fStack_1f4 = (float)((float10)0.005 * fVar6);
    fStack_1f0 = (float)(fVar6 * (float10)(float)param_1[0x2e4]);
    D3DXVec3TransformNormal(&stack0xfffffe08,&stack0xfffffe08,param_1 + 4);
    pfVar1 = (float *)(param_1 + 0x14);
    param_1[0x244] = param_1[0x14];
    piStack_1d8 = param_1 + 0x244;
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    *pfVar1 = fStack_204 + *pfVar1;
    param_1[0x15] = (int)(unaff_EDI + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x16] + fVar2);
    param_1[0x17] = (int)((float)param_1[0x17] + 0.0);
    fVar6 = (float10)FUN_00fdc1f0();
    fVar3 = (float)param_1[0x2e4];
    param_1[0x2e4] = (int)(float)(fVar6 * (float10)fVar3);
    if (param_1[0x24c] == 0xf) {
      param_1[0x2e4] = (int)(float)((float10)1.4013e-45 * (float10)0.01 + fVar6 * (float10)fVar3);
    }
    param_1[0x10] = (int)*pfVar1;
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    fVar3 = (float)param_1[0x2fc];
    param_1[0x2fc] = (int)(fVar3 - 1.4013e-45);
    if (0.0 <= fVar3 - 1.4013e-45) {
      iVar4 = FUN_00907560(param_1 + 0x449,&fStack_1f4,auStack_1d4,0,0,0,0,0);
      if (iVar4 != 0) {
        if (ABS(fStack_1d0 - 1.0) < 0.001) {
          param_1[0x186] = 3;
          param_1[0x187] = 0;
          param_1[0x15] = (int)(fStack_1f0 + 0.2);
          param_1[0x2fc] = 0x43960000;
          param_1[0x360] = 0;
          param_1[0x2e4] = (int)((float)param_1[0x2e4] * 0.7);
          fVar6 = (float10)fpatan((float10)fStack_204,(float10)fVar2);
          param_1[0x25] = (int)(float)fVar6;
          D3DXMatrixRotationY(param_1 + 4,(float)fVar6);
          param_1[0x10] = (int)*pfVar1;
          uVar7 = 0;
          param_1[0x11] = param_1[0x15];
          param_1[0x12] = param_1[0x16];
          uVar5 = FUN_00a7c8a0(0);
          FUN_004039a0(3,uVar5,uVar7);
          FUN_00dffb20(param_1 + 0x36c);
          FUN_00a8c8b0(param_1[300],auStack_17c);
          return;
        }
        param_1[0x186] = 99;
      }
      uVar5 = FUN_009f8b40(0,0,0);
      uVar5 = FUN_00410130(5,uVar5);
      FUN_00468970(param_1 + 0x449,0,piStack_1d8,pfVar1,uVar5,0,0,0,"kogecko_pinball",0,0);
      HavokRayCastManager::set(auStack_1c4);
      return;
    }
    break;
  case 3:
  case 4:
    fStack_1f4 = (float)((float10)0.005 * fVar6);
    fStack_1f0 = (float)(fVar6 * (float10)(float)param_1[0x2e4]);
    D3DXVec3TransformNormal(&stack0xfffffe08,&stack0xfffffe08,param_1 + 4);
    pfVar1 = (float *)(param_1 + 0x14);
    param_1[0x244] = (int)*pfVar1;
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    *pfVar1 = fStack_204 + *pfVar1;
    param_1[0x15] = param_1[0x15];
    param_1[0x16] = (int)((float)param_1[0x16] + fVar2);
    param_1[0x17] = (int)((float)param_1[0x17] + 0.0);
    if (param_1[0x186] == 3) {
      param_1[0x186] = 4;
    }
    else if ((5.0 < (float)param_1[0x360]) &&
            (iVar4 = FUN_00907560(param_1 + 0x449,0,auStack_1d4,0,0,0,0,0), iVar4 != 0)) {
      if ((float)param_1[0x360] < 15.0) break;
      if (ABS(fStack_1d0) < 0.01) {
        param_1[0x360] = 0;
        thunk_FUN_00dde430(&fStack_1f4,&fStack_204,auStack_1d4);
        fVar2 = fStack_1ec * fStack_1ec + fStack_1f4 * fStack_1f4 + fStack_1f0 * fStack_1f0;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&fStack_1f4,&fStack_1f4);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_1f4 = 0.0;
          fStack_1f0 = 1.0;
          fStack_1ec = 0.0;
        }
        fVar6 = (float10)fpatan((float10)fStack_1f4,(float10)fStack_1ec);
        param_1[0x25] = (int)(float)fVar6;
        D3DXMatrixRotationY(param_1 + 4,(float)fVar6);
        param_1[0x10] = (int)*pfVar1;
        param_1[0x11] = param_1[0x15];
        param_1[0x12] = param_1[0x16];
        return;
      }
    }
    param_1[0x360] = (int)((float)param_1[0x360] + 1.4013e-45);
    uVar5 = FUN_009f8b40(0,0,0);
    uVar5 = FUN_00410130(3,uVar5);
    FUN_00468970(param_1 + 0x449,0,param_1 + 0x244,pfVar1,uVar5,0,0,0,"kogecko_pinball",0,0);
    HavokRayCastManager::set(auStack_1c4);
    param_1[0x10] = (int)*pfVar1;
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    fVar2 = (float)param_1[0x2fc];
    param_1[0x2fc] = (int)(fVar2 - 1.4013e-45);
    if (0.0 <= fVar2 - 1.4013e-45) {
      return;
    }
    break;
  default:
    return;
  case 99:
    FUN_00c76f00();
    iStack_1b8 = param_1[0x14];
    iStack_18c = param_1[0x239];
    iStack_1b4 = param_1[0x15];
    iStack_1b0 = param_1[0x16];
    iStack_1ac = param_1[0x17];
    uStack_1a8 = 0;
    uStack_1a4 = 0x3f800000;
    uStack_1a0 = 0;
    (**(code **)(*param_1 + 0x318))(&iStack_1b8);
    param_1[0x186] = param_1[0x186] + 1;
    goto LAB_00ad611d;
  case 100:
LAB_00ad611d:
    param_1[0x2fc] = 0x3f800000;
    FUN_00acc2f0(0x3f800000,0);
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  }
  param_1[0x186] = 99;
  return;
}

// 00AD61E0  FUN_00ad61e0  size=80  [callgraph]
void __fastcall FUN_00ad61e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(0,uVar1,uVar2);
  FUN_00dffb20(param_1 + 0xdb0);
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00AD6230  FUN_00ad6230  size=1255  [callgraph]
void __fastcall FUN_00ad6230(int *param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined1 *puVar8;
  char *pcStack_110;
  float *pfStack_10c;
  float *pfStack_108;
  int *piStack_104;
  undefined1 *puStack_100;
  int *piStack_fc;
  undefined1 *puStack_f8;
  undefined1 *puStack_f4;
  float fStack_f0;
  int *piStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [20];
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [120];
  
  fStack_e4 = 0.0;
  fStack_e8 = 1.4013e-45;
  piStack_ec = (int *)0xad624f;
  iVar4 = (**(code **)(*param_1 + 0x308))();
  if (iVar4 != 0) {
    piStack_ec = (int *)0xad625a;
    FUN_00acc0a0();
    return;
  }
  piStack_ec = (int *)0xad626c;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    piStack_ec = (int *)0xad6277;
    iVar4 = FUN_00a7c8a0();
    if (iVar4 != 0) {
      param_1[0x2d4] = *(int *)(iVar4 + 0x50);
      param_1[0x2d5] = *(int *)(iVar4 + 0x54);
      param_1[0x2d6] = *(int *)(iVar4 + 0x58);
      param_1[0x2d7] = *(int *)(iVar4 + 0x5c);
      piStack_ec = (int *)(int)(short)param_1[0x2f5];
      fStack_f0 = 1.592294e-38;
      iVar4 = FUN_00a12210();
      if ((-1 < (short)param_1[0x2f5]) && (iVar4 != 0)) {
        param_1[0x2d4] = *(int *)(iVar4 + 0x40);
        param_1[0x2d5] = *(int *)(iVar4 + 0x44);
        param_1[0x2d6] = *(int *)(iVar4 + 0x48);
        param_1[0x2d7] = *(int *)(iVar4 + 0x4c);
      }
      goto LAB_00ad62ed;
    }
  }
  piStack_ec = (int *)0xad62ed;
  FUN_00a7c950();
LAB_00ad62ed:
  piVar1 = param_1 + 4;
  fStack_f0 = 0.0;
  puStack_f4 = auStack_98;
  puStack_f8 = (undefined1 *)0xad62fd;
  piStack_ec = piVar1;
  D3DXMatrixInverse();
  puStack_f8 = auStack_a4;
  piVar2 = param_1 + 0x2d4;
  puStack_100 = auStack_b4;
  piStack_104 = (int *)0xad6313;
  piStack_fc = piVar2;
  D3DXVec3TransformNormal();
  piStack_104 = (int *)0xad6349;
  fVar6 = (float10)(**(code **)(*param_1 + 0x24))();
  puStack_f4 = (undefined1 *)(float)fVar6;
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x41200000;
    param_1[0x186] = 1;
    piStack_104 = (int *)0xad638a;
    FUN_00ad61e0();
    fVar6 = (float10)(float)puStack_f4;
  case 1:
    fStack_f0 = 0.0;
    pfStack_10c = &fStack_f0;
    piStack_ec = (int *)0x0;
    fStack_e8 = (float)(fVar6 * (float10)(float)param_1[0x2e4]);
    pcStack_110 = (char *)0xad63b0;
    pfStack_108 = pfStack_10c;
    piStack_104 = piVar1;
    D3DXVec3TransformNormal();
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)param_1[0x14] + (float)piStack_fc);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)puStack_f8);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)puStack_f4);
    param_1[0x17] = (int)(fStack_f0 + (float)param_1[0x17]);
    pcStack_110 = (char *)0xad640b;
    fVar6 = (float10)FUN_00fdc1f0();
    fVar7 = (float10)(float)puStack_100;
    param_1[0x2e4] = (int)(float)((float10)0.01 * fVar7 + fVar6 * (float10)(float)param_1[0x2e4]);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)(float)((float10)(float)param_1[0x2fc] - fVar7);
    fVar3 = (float)param_1[0x360];
    param_1[0x360] = (int)(float)((float10)fVar3 - fVar7);
    if ((float10)fVar3 - fVar7 < (float10)0) {
      param_1[0x360] = (int)(float)(float10)0;
      param_1[0x186] = 2;
    }
    pcStack_110 = (char *)0x1;
    FUN_00acc460(piVar2,&piStack_fc,0x3d4ccccd,(float)(fVar7 * (float10)1.0471976));
    if (param_1[0x24c] == 0x26) {
      param_1[0x15] = (int)((float)param_1[0x15] - (float)puStack_100 * 0.025);
    }
    piStack_ec = (int *)param_1[0x244];
    fStack_e8 = (float)param_1[0x245];
    fStack_e4 = (float)param_1[0x246];
    pcStack_110 = (char *)0xad650b;
    iVar4 = FUN_009f8b40();
    pcStack_110 = "Bullet";
    FUN_0090fa30(param_1 + 0x449,0,&piStack_ec,0x3f000000,&stack0xffffff24,iVar4 << 0x10 | 5);
    return;
  case 2:
    break;
  case 3:
    piStack_104 = (int *)0xad66f6;
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  default:
    return;
  }
  fStack_f0 = 0.0;
  pfStack_10c = &fStack_f0;
  piStack_ec = (int *)(float)((float10)0.02 * fVar6);
  fStack_e8 = (float)(fVar6 * (float10)(float)param_1[0x2e4]);
  pcStack_110 = (char *)0xad656f;
  pfStack_108 = pfStack_10c;
  piStack_104 = piVar1;
  D3DXVec3TransformNormal();
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x14] = (int)((float)param_1[0x14] + (float)piStack_fc);
  param_1[0x15] = (int)((float)param_1[0x15] + (float)puStack_f8);
  param_1[0x16] = (int)((float)param_1[0x16] + (float)puStack_f4);
  param_1[0x17] = (int)(fStack_f0 + (float)param_1[0x17]);
  pcStack_110 = (char *)0xad65ca;
  fVar6 = (float10)FUN_00fdc1f0();
  puVar8 = auStack_7c;
  param_1[0x2e4] =
       (int)(float)((float10)0.03 * (float10)(float)puStack_100 +
                   fVar6 * (float10)(float)param_1[0x2e4]);
  pcStack_110 = (char *)(float)((float10)(float)puStack_100 * (float10)0.05235988);
  D3DXMatrixRotationZ();
  D3DXMatrixMultiply(piVar1,auStack_84,piVar1);
  param_1[0x10] = param_1[0x14];
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  FUN_00acc460(piVar2,&pcStack_110,0x3e99999a,(float)puVar8 * 0.5235988,1);
  fVar3 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar3 - (float)puVar8);
  if (0.0 <= fVar3 - (float)puVar8) {
    puStack_100 = (undefined1 *)param_1[0x244];
    piStack_fc = (int *)param_1[0x245];
    puStack_f8 = (undefined1 *)param_1[0x246];
    puStack_f4 = (undefined1 *)param_1[0x247];
    fStack_f0 = (float)param_1[0x14] - (float)puStack_100;
    piStack_ec = (int *)((float)param_1[0x15] - (float)piStack_fc);
    fStack_e8 = (float)param_1[0x16] - (float)puStack_f8;
    fStack_e4 = (float)param_1[0x17] - (float)puStack_f4;
    uVar5 = FUN_009f8b40();
    FUN_00acb320(&puStack_100,0x3f000000,&fStack_f0,uVar5);
    return;
  }
  param_1[0x186] = 3;
  return;
}

// 00AD6730  FUN_00ad6730  size=26  [callgraph]
void FUN_00ad6730(void)

{
  int iVar1;
  
  iVar1 = FUN_00ad1e00(0,0);
  if (iVar1 != 0) {
    FUN_00acc0a0();
    return;
  }
  return;
}

// 00AD6750  FUN_00ad6750  size=73  [callgraph]
void __fastcall FUN_00ad6750(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x930) == 0x1e) {
    uVar2 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0,uVar1,uVar2);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  }
  return;
}

// 00AD67A0  FUN_00ad67a0  size=739  [callgraph]
void __fastcall FUN_00ad67a0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  undefined4 uVar18;
  int *piStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  char *pcStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined1 auStack_160 [348];
  
  fVar16 = (float10)(**(code **)(*param_1 + 0x24))();
  fVar1 = (float)fVar16;
  iVar13 = param_1[0x186];
  if (iVar13 == 0) {
    if (param_1[0x24c] == 0x1e) {
      uVar18 = 0;
      uVar14 = FUN_00a7c8a0(0);
      FUN_004039a0(0,uVar14,uVar18);
      FUN_00a8c8b0(param_1[300],auStack_160);
      fVar16 = (float10)fVar1;
    }
    param_1[0x186] = 1;
  }
  else if (iVar13 != 1) {
    if (iVar13 != 2) {
      return;
    }
    (**(code **)(param_1[0x44c] + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  }
  fVar2 = (float)param_1[0x248];
  fVar3 = (float)param_1[0x249];
  fVar4 = (float)param_1[0x24a];
  fVar5 = (float)param_1[0x24b];
  param_1[0x249] = (int)((float)param_1[0x2e5] + (float)param_1[0x249]);
  fVar17 = (float10)FUN_00fdc1f0();
  param_1[0x248] = (int)(float)((float10)(float)param_1[0x248] * fVar17);
  param_1[0x249] = (int)(float)((float10)(float)param_1[0x249] * fVar17);
  param_1[0x24a] = (int)(float)((float10)(float)param_1[0x24a] * fVar17);
  param_1[0x24b] = (int)(float)(fVar17 * (float10)(float)param_1[0x24b]);
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x14] = (int)((float)param_1[0x14] + (float)((float10)fVar2 * fVar16));
  param_1[0x15] = (int)((float)((float10)fVar3 * fVar16) + (float)param_1[0x15]);
  param_1[0x16] = (int)((float)((float10)fVar4 * fVar16) + (float)param_1[0x16]);
  param_1[0x17] = (int)((float)param_1[0x17] + (float)((float10)fVar5 * fVar16));
  fVar1 = (float)param_1[0x2fc] - fVar1;
  param_1[0x2fc] = (int)fVar1;
  if (0.0 <= fVar1) {
    param_1[0x466] = param_1[0x466] | 0x40;
    param_1[0x45c] = param_1[0x248];
    param_1[0x45d] = param_1[0x249];
    param_1[0x45e] = param_1[0x24a];
    param_1[0x45f] = param_1[0x24b];
    iVar13 = param_1[0x244];
    iVar6 = param_1[0x245];
    iVar7 = param_1[0x246];
    iVar8 = param_1[0x247];
    iVar9 = param_1[0x14];
    iVar10 = param_1[0x15];
    iVar11 = param_1[0x16];
    iVar12 = param_1[0x17];
    iVar15 = FUN_009f8b40();
    piStack_1b0 = param_1 + 0x449;
    uStack_180 = iVar15 << 0x10 | 5;
    uStack_1ac = 0;
    uStack_17c = 0;
    uStack_178 = 2;
    uStack_174 = 0;
    pcStack_170 = "Bullet";
    uStack_16c = 0;
    uStack_168 = 0;
    iStack_1a0 = iVar13;
    iStack_19c = iVar6;
    iStack_198 = iVar7;
    iStack_194 = iVar8;
    iStack_190 = iVar9;
    iStack_18c = iVar10;
    iStack_188 = iVar11;
    iStack_184 = iVar12;
    HavokRayCastManager::set(&piStack_1b0);
    return;
  }
  param_1[0x186] = 2;
  return;
}

// 00AD6A90  FUN_00ad6a90  size=324  [callgraph]
void __fastcall FUN_00ad6a90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar2 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar1);
  if (iVar2 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    FUN_00acb020(iVar2,0x40000000,0x3e99999a,0xffffffff);
    uVar1 = FUN_00a8d2a0();
    iVar2 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      *(undefined4 *)(iVar2 + 0x594) = 0x40000000;
      *(undefined4 *)(iVar2 + 0x590) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0x580) = 0xbfc90fdb;
      *(undefined4 *)(iVar2 + 0x584) = 0;
      *(undefined4 *)(iVar2 + 0x588) = 0;
      *(undefined4 *)(iVar2 + 0x58c) = local_164;
      local_170 = 0;
      local_16c = 0;
      local_168 = 0x3f800000;
      FUN_00d77c90(&local_170);
      FUN_00a93a00(iVar2,uVar1);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    uVar3 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0,uVar1,uVar3);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  }
  return;
}

// 00AD6BE0  FUN_00ad6be0  size=1260  [callgraph]
void __fastcall FUN_00ad6be0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined1 *puVar8;
  char *pcStack_120;
  float *pfStack_11c;
  float *pfStack_118;
  int *piStack_114;
  undefined1 *puStack_110;
  int *piStack_10c;
  undefined1 *puStack_108;
  undefined1 *puStack_104;
  float fStack_100;
  int *piStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 uStack_e4;
  float fStack_d8;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [20];
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [120];
  
  fStack_f4 = 0.0;
  fStack_f8 = 1.4013e-45;
  piStack_fc = (int *)0xad6bff;
  iVar4 = (**(code **)(*param_1 + 0x308))();
  if (iVar4 != 0) {
    piStack_fc = (int *)0xad6c0a;
    FUN_00acc0a0();
    return;
  }
  piStack_fc = (int *)0xad6c1c;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    piStack_fc = (int *)0xad6c27;
    iVar4 = FUN_00a7c8a0();
    if (iVar4 != 0) {
      param_1[0x2d4] = *(int *)(iVar4 + 0x50);
      param_1[0x2d5] = *(int *)(iVar4 + 0x54);
      param_1[0x2d6] = *(int *)(iVar4 + 0x58);
      param_1[0x2d7] = *(int *)(iVar4 + 0x5c);
      piStack_fc = (int *)(int)(short)param_1[0x2f5];
      fStack_100 = 1.5926416e-38;
      iVar4 = FUN_00a12210();
      if ((-1 < (short)param_1[0x2f5]) && (iVar4 != 0)) {
        param_1[0x2d4] = *(int *)(iVar4 + 0x40);
        param_1[0x2d5] = *(int *)(iVar4 + 0x44);
        param_1[0x2d6] = *(int *)(iVar4 + 0x48);
        param_1[0x2d7] = *(int *)(iVar4 + 0x4c);
      }
      goto LAB_00ad6c9d;
    }
  }
  piStack_fc = (int *)0xad6c9d;
  FUN_00a7c950();
LAB_00ad6c9d:
  piVar1 = param_1 + 4;
  fStack_100 = 0.0;
  puStack_104 = auStack_98;
  puStack_108 = (undefined1 *)0xad6cad;
  piStack_fc = piVar1;
  D3DXMatrixInverse();
  puStack_108 = auStack_a4;
  piVar2 = param_1 + 0x2d4;
  puStack_110 = auStack_b4;
  piStack_114 = (int *)0xad6cc3;
  piStack_10c = piVar2;
  D3DXVec3TransformNormal();
  piStack_114 = (int *)0xad6cf9;
  fVar6 = (float10)(**(code **)(*param_1 + 0x24))();
  puStack_104 = (undefined1 *)(float)fVar6;
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x42700000;
    param_1[0x186] = 1;
    piStack_114 = (int *)0xad6d3a;
    FUN_00ad6a90();
    fVar6 = (float10)(float)puStack_104;
  case 1:
    fStack_100 = 0.0;
    pfStack_11c = &fStack_100;
    piStack_fc = (int *)0x0;
    fStack_f8 = (float)(fVar6 * (float10)(float)param_1[0x2e4]);
    pcStack_120 = (char *)0xad6d60;
    pfStack_118 = pfStack_11c;
    piStack_114 = piVar1;
    D3DXVec3TransformNormal();
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)param_1[0x14] + (float)piStack_10c);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)puStack_108);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)puStack_104);
    param_1[0x17] = (int)(fStack_100 + (float)param_1[0x17]);
    pcStack_120 = (char *)0xad6dbb;
    fVar6 = (float10)FUN_00fdc1f0();
    fVar7 = (float10)(float)puStack_110;
    param_1[0x2e4] = (int)(float)(fVar6 * (float10)(float)param_1[0x2e4] + fVar7 * (float10)0.01);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)(float)((float10)(float)param_1[0x2fc] - fVar7);
    fVar6 = (float10)(float)param_1[0x360] - fVar7;
    param_1[0x360] = (int)(float)fVar6;
    if (fVar6 < (float10)0) {
      param_1[0x186] = 2;
    }
    if (fVar6 < (float10)10.0) {
      pcStack_120 = (char *)0x1;
      FUN_00acc460(piVar2,&piStack_10c,(float)(((float10)10.0 - fVar6) * (float10)0.01),
                   (float)(fVar7 * (float10)0.17453292));
    }
    piStack_fc = (int *)param_1[0x244];
    fStack_f8 = (float)param_1[0x245];
    fStack_f4 = (float)param_1[0x246];
    pcStack_120 = (char *)0xad6eb1;
    iVar4 = FUN_009f8b40();
    pcStack_120 = "Bullet";
    FUN_0090fa30(param_1 + 0x449,0,&piStack_fc,0x3f000000,&stack0xffffff14,iVar4 << 0x10 | 5);
    return;
  case 2:
    break;
  case 3:
    piStack_114 = (int *)0xad70ab;
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  default:
    return;
  }
  fStack_100 = 0.0;
  pfStack_11c = &fStack_100;
  piStack_fc = (int *)(float)((float10)0.02 * fVar6);
  fStack_f8 = (float)(fVar6 * (float10)(float)param_1[0x2e4]);
  pcStack_120 = (char *)0xad6f15;
  pfStack_118 = pfStack_11c;
  piStack_114 = piVar1;
  D3DXVec3TransformNormal();
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x14] = (int)((float)param_1[0x14] + (float)piStack_10c);
  param_1[0x15] = (int)((float)param_1[0x15] + (float)puStack_108);
  param_1[0x16] = (int)((float)param_1[0x16] + (float)puStack_104);
  param_1[0x17] = (int)(fStack_100 + (float)param_1[0x17]);
  pcStack_120 = (char *)0xad6f70;
  fVar6 = (float10)FUN_00fdc1f0();
  puVar8 = auStack_7c;
  param_1[0x2e4] =
       (int)(float)((float10)0.03 * (float10)(float)puStack_110 +
                   fVar6 * (float10)(float)param_1[0x2e4]);
  pcStack_120 = (char *)(float)((float10)(float)puStack_110 * (float10)0.05235988);
  D3DXMatrixRotationZ();
  D3DXMatrixMultiply(piVar1,auStack_84,piVar1);
  param_1[0x10] = param_1[0x14];
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  if (!NAN(fStack_d8) && 5.0 < fStack_d8 != (fStack_d8 == 5.0)) {
    FUN_00acc460(piVar2,&pcStack_120,0x3dcccccd,uStack_e4,1);
  }
  fVar3 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar3 - (float)puVar8);
  if (0.0 <= fVar3 - (float)puVar8) {
    puStack_110 = (undefined1 *)param_1[0x244];
    piStack_10c = (int *)param_1[0x245];
    puStack_108 = (undefined1 *)param_1[0x246];
    puStack_104 = (undefined1 *)param_1[0x247];
    fStack_100 = (float)param_1[0x14] - (float)puStack_110;
    piStack_fc = (int *)((float)param_1[0x15] - (float)piStack_10c);
    fStack_f8 = (float)param_1[0x16] - (float)puStack_108;
    fStack_f4 = (float)param_1[0x17] - (float)puStack_104;
    uVar5 = FUN_009f8b40();
    FUN_00acb320(&puStack_110,0x3f000000,&fStack_100,uVar5);
    return;
  }
  param_1[0x186] = 3;
  return;
}

// 00AD70E0  FUN_00ad70e0  size=26  [callgraph]
void FUN_00ad70e0(void)

{
  int iVar1;
  
  iVar1 = FUN_00ad1e00(0,0);
  if (iVar1 != 0) {
    FUN_00acc0a0();
    return;
  }
  return;
}

// 00AD7100  FUN_00ad7100  size=1458  [callgraph]
void __fastcall FUN_00ad7100(int *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  int *piStack_25c;
  undefined1 *puStack_258;
  undefined1 *puStack_254;
  float fStack_250;
  int *piStack_24c;
  float fStack_248;
  undefined4 uStack_244;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined1 auStack_1b4 [12];
  undefined1 auStack_1a8 [24];
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  undefined1 auStack_180 [380];
  
  uStack_244 = 0;
  fStack_248 = 1.4013e-45;
  piStack_24c = (int *)0xad711f;
  iVar3 = (**(code **)(*param_1 + 0x308))();
  if (iVar3 != 0) {
    piStack_24c = (int *)0xad712a;
    FUN_00acc0a0();
    return;
  }
  piStack_24c = (int *)0xad713c;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    piStack_24c = (int *)0xad7147;
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      param_1[0x2d4] = *(int *)(iVar3 + 0x50);
      param_1[0x2d5] = *(int *)(iVar3 + 0x54);
      param_1[0x2d6] = *(int *)(iVar3 + 0x58);
      param_1[0x2d7] = *(int *)(iVar3 + 0x5c);
      piStack_24c = (int *)(int)(short)param_1[0x2f5];
      fStack_250 = 1.5928254e-38;
      iVar3 = FUN_00a12210();
      if ((-1 < (short)param_1[0x2f5]) && (iVar3 != 0)) {
        param_1[0x2d4] = *(int *)(iVar3 + 0x40);
        param_1[0x2d5] = *(int *)(iVar3 + 0x44);
        param_1[0x2d6] = *(int *)(iVar3 + 0x48);
        param_1[0x2d7] = *(int *)(iVar3 + 0x4c);
      }
      goto LAB_00ad71bd;
    }
  }
  piStack_24c = (int *)0xad71bd;
  FUN_00a7c950();
LAB_00ad71bd:
  piVar1 = param_1 + 4;
  fStack_250 = 0.0;
  puStack_254 = auStack_1a8;
  puStack_258 = (undefined1 *)0xad71d0;
  piStack_24c = piVar1;
  D3DXMatrixInverse();
  puStack_258 = auStack_1b4;
  piStack_25c = param_1 + 0x2d4;
  D3DXVec3TransformNormal();
  fStack_210 = fStack_190 + fStack_210;
  fStack_20c = fStack_18c + fStack_20c;
  fStack_208 = fStack_188 + fStack_208;
  fVar6 = (float10)(**(code **)(*param_1 + 0x24))();
  puStack_254 = (undefined1 *)(float)fVar6;
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x40000000;
    param_1[0x186] = 1;
    FUN_00acb5c0();
    uVar5 = 0;
    if (param_1[0x239] == 0x48) {
      uVar4 = FUN_00a7c8a0();
      FUN_004039a0(0x12e,uVar4,uVar5);
      FUN_00dffb20(param_1 + 0x36c);
      FUN_00a8c930(0,auStack_180);
      return;
    }
    iVar3 = param_1[0x24c];
    uVar4 = FUN_00a7c8a0(0);
    FUN_004039a0(iVar3 == 0xf,uVar4,uVar5);
    FUN_00dffb20(param_1 + 0x36c);
    FUN_00a8c8b0(param_1[300],auStack_180);
    return;
  case 1:
    fStack_250 = 0.0;
    piStack_24c = (int *)0x0;
    fStack_248 = (float)(fVar6 * (float10)(float)param_1[0x2e4]);
    D3DXVec3TransformNormal(&fStack_250,&fStack_250,piVar1);
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)piStack_25c + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)puStack_258 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)puStack_254 + (float)param_1[0x16]);
    param_1[0x17] = (int)(fStack_250 + (float)param_1[0x17]);
    fVar6 = (float10)FUN_00fdc1f0();
    fVar7 = (float10)(float)&iStack_204;
    param_1[0x2e4] = (int)(float)((float10)0.005 * fVar7 + fVar6 * (float10)(float)param_1[0x2e4]);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)(float)((float10)(float)param_1[0x2fc] - fVar7);
    fVar2 = (float)param_1[0x360];
    param_1[0x360] = (int)(float)((float10)fVar2 - fVar7);
    if ((float10)fVar2 - fVar7 < (float10)0) {
      param_1[0x186] = 2;
    }
    break;
  case 2:
    fStack_250 = 0.0;
    piStack_24c = (int *)(float)((float10)0.005 * fVar6);
    fStack_248 = (float)(fVar6 * (float10)(float)param_1[0x2e4]);
    D3DXVec3TransformNormal(&fStack_250,&fStack_250,piVar1);
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)piStack_25c + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)puStack_258 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)puStack_254 + (float)param_1[0x16]);
    param_1[0x17] = (int)(fStack_250 + (float)param_1[0x17]);
    fVar6 = (float10)FUN_00fdc1f0();
    fVar7 = (float10)((float)&iStack_204 * 0.01);
    fVar6 = fVar6 * (float10)(float)param_1[0x2e4] + fVar7;
    param_1[0x2e4] = (int)(float)fVar6;
    if (param_1[0x24c] == 0xf) {
      param_1[0x2e4] = (int)(float)(fVar6 + fVar7);
    }
    fVar2 = (float)&iStack_204 * 0.05235988;
    D3DXMatrixRotationZ(&fStack_20c,fVar2);
    D3DXMatrixMultiply(piVar1,&fStack_214,piVar1);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    if (!NAN(fStack_214) && 3.0 < fStack_214 != (fStack_214 == 3.0)) {
      FUN_00acc460(param_1 + 0x2d4,&piStack_25c,0x3dcccccd,fVar2,1);
    }
    fVar2 = (float)param_1[0x2fc] - (float)&iStack_204;
    param_1[0x2fc] = (int)fVar2;
    if (fVar2 < 0.0) {
      param_1[0x186] = 3;
      if (param_1[0x300] != 0) {
        return;
      }
      FUN_00c76f00();
      fStack_20c = (float)param_1[0x14];
      iStack_1e0 = param_1[0x239];
      fStack_208 = (float)param_1[0x15];
      iStack_204 = param_1[0x16];
      iStack_200 = param_1[0x17];
      iStack_1fc = param_1[0x24];
      uStack_1e4 = 1000;
      iStack_1f8 = param_1[0x25];
      iStack_1f4 = param_1[0x26];
      iStack_1f0 = param_1[0x27];
      (**(code **)(*param_1 + 0x318))(&fStack_20c);
      return;
    }
    break;
  case 3:
    param_1[0x414] = param_1[0x14];
    param_1[0x415] = param_1[0x15];
    param_1[0x416] = param_1[0x16];
    param_1[0x417] = param_1[0x17];
    Behavior::createAttackImpactWave(param_1 + 0x3d0);
    param_1[0x2fc] = 0x42f00000;
    param_1[0x186] = 4;
    FUN_00acc2f0(0x42f00000,0);
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  default:
    return;
  }
  fStack_22c = (float)param_1[0x14] - (float)param_1[0x244];
  fStack_228 = (float)param_1[0x15] - (float)param_1[0x245];
  fStack_224 = (float)param_1[0x16] - (float)param_1[0x246];
  fStack_220 = (float)param_1[0x17] - (float)param_1[0x247];
  uVar5 = FUN_009f8b40();
  FUN_00acb320(&stack0xfffffdc4,0x3e19999a,&fStack_22c,uVar5);
  return;
}

// 00AD76D0  FUN_00ad76d0  size=45  [callgraph]
void __fastcall FUN_00ad76d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00ad1e00(0,0);
    if ((iVar1 != 0) || (*(int *)(param_1 + 0xc00) != 0)) {
      *(undefined4 *)(param_1 + 0x618) = 3;
    }
  }
  return;
}

// 00AD7700  FUN_00ad7700  size=736  [callgraph]
void __fastcall FUN_00ad7700(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_160 [348];
  
  iVar1 = FUN_00de4550("_col.hkx",0);
  if (iVar1 != 0) {
    iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = RigidBodyCollision::RigidBodyCollision();
    }
    *(int *)(param_1 + 0x7b0) = iVar2;
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x4f0);
      uVar3 = FUN_00de46d0("_col.hkx",0);
      FUN_008f6410(uVar4,iVar1,uVar3);
      FUN_008f2cd0(1);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(0);
      FUN_008f40f0(param_1);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*(undefined4 *)(param_1 + 0xb9c));
      FUN_008f1600(0x100);
      FUN_008f1600(0x80);
    }
  }
  uVar3 = 0;
  uVar4 = FUN_00a7c8a0(0);
  FUN_004039a0(0,uVar4,uVar3);
  FUN_00dffb20(param_1 + 0xdb0);
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
  if (*(int *)(param_1 + 0x930) == 0x11) {
    if (*(int *)(param_1 + 0x8e4) == 0x51) {
      FUN_00acb220(1,0x41000000,0x3f800000);
      *(uint *)(param_1 + 0xfdc) = *(uint *)(param_1 + 0xfdc) | 0x20000;
      *(uint *)(param_1 + 0xfdc) = *(uint *)(param_1 + 0xfdc) & 0xffefffff;
      *(uint *)(param_1 + 0xfe0) = *(uint *)(param_1 + 0xfe0) & 0xfdffffff;
      *(uint *)(param_1 + 0xfe0) = *(uint *)(param_1 + 0xfe0) | 0x800;
      *(uint *)(param_1 + 0xfdc) = *(uint *)(param_1 + 0xfdc) | 0x10000000;
    }
    else {
      FUN_00acb220(0x3c,0x40800000,0x3f000000);
      *(uint *)(param_1 + 0xfe0) = *(uint *)(param_1 + 0xfe0) | 0x800;
      *(uint *)(param_1 + 0xfdc) = *(uint *)(param_1 + 0xfdc) | 0x10000000;
    }
  }
  else if (*(int *)(param_1 + 0x930) == 0x29) {
    *(undefined4 *)(param_1 + 0xf40) = 1;
    *(undefined4 *)(param_1 + 0x1050) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x1054) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x1058) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x105c) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0xf50) = 0x188;
    *(undefined4 *)(param_1 + 0xf54) = 0;
    *(undefined4 *)(param_1 + 0xf5c) = 0;
    *(undefined4 *)(param_1 + 0xf58) = 0;
    *(undefined2 *)(param_1 + 0xf60) = 0;
    *(uint *)(param_1 + 0xfdc) = *(uint *)(param_1 + 0xfdc) & 0xffffffdf;
    *(uint *)(param_1 + 0xfdc) = *(uint *)(param_1 + 0xfdc) | 0x10000000;
    *(uint *)(param_1 + 0xfe0) = *(uint *)(param_1 + 0xfe0) | 0x800;
    *(undefined4 *)(param_1 + 0x1060) = 0x40900000;
    *(undefined4 *)(param_1 + 0x1070) = 0x3daaaaab;
    *(undefined4 *)(param_1 + 0x106c) = 1;
    *(undefined4 *)(param_1 + 0xf64) = *(undefined4 *)(param_1 + 0x954);
    uVar4 = FUN_00a7c7f0();
    FUN_00a7c960(uVar4);
    *(undefined4 *)(param_1 + 0x1074) = 5;
    *(undefined4 *)(param_1 + 0x1078) = *(undefined4 *)(param_1 + 0xb9c);
  }
  piVar5 = (int *)FUN_00900480();
  uVar4 = (**(code **)(*piVar5 + 4))(param_1 + 0x50,0x3f333333,6,*(undefined4 *)(param_1 + 0xb9c),0)
  ;
  FUN_008f9610(uVar4,0x100,1);
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar4);
  FUN_00900bd0();
  return;
}

// 00AD79E0  FUN_00ad79e0  size=342  [callgraph]
void __fastcall FUN_00ad79e0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_164;
  undefined1 auStack_160 [348];
  
  iVar2 = FUN_00de4550("_col.hkx",0);
  if (iVar2 != 0) {
    iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = RigidBodyCollision::RigidBodyCollision();
    }
    *(int *)(param_1 + 0x7b0) = iVar3;
    if (iVar3 != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x4f0);
      uVar4 = FUN_00de46d0("_col.hkx",0);
      FUN_008f6410(uVar5,iVar2,uVar4);
      FUN_008f2cd0(1);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(0);
      FUN_008f40f0(param_1);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*(undefined4 *)(param_1 + 0xb9c));
    }
  }
  iVar2 = 0;
  uVar4 = 0;
  uVar5 = FUN_00a7c8a0(0);
  FUN_004039a0(0,uVar5,uVar4);
  FUN_00dffb20(param_1 + 0xdb0);
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
  local_164 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      iVar3 = *(int *)(param_1 + 800);
      iVar6 = *(int *)(*(int *)(iVar3 + 0x60 + iVar2) + 0x40);
      if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"hologram_"), iVar6 != 0)) {
        puVar1 = (uint *)(iVar3 + 0x38 + iVar2);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      local_164 = local_164 + 1;
      iVar2 = iVar2 + 0x70;
    } while (local_164 < *(short *)(param_1 + 0x324));
  }
  return;
}

// 00AD7B40  FUN_00ad7b40  size=1421  [callgraph]
void __fastcall FUN_00ad7b40(int *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  float *pfVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_25c [4];
  int iStack_258;
  int iStack_254;
  int iStack_250;
  undefined4 uStack_248;
  float fStack_244;
  float fStack_240;
  undefined1 auStack_22c [12];
  undefined1 local_220 [40];
  int aiStack_1f8 [16];
  undefined1 auStack_1b8 [64];
  undefined1 auStack_178 [372];
  
  iVar10 = FUN_00a81330();
  if (iVar10 != 0) {
    FUN_00a7c8a0();
  }
  D3DXMatrixInverse(local_220,0,param_1 + 4);
  D3DXVec3TransformNormal(auStack_25c,param_1 + 0x2d4,auStack_22c);
  fVar17 = (float10)(**(code **)(*param_1 + 0x24))();
  iVar10 = param_1[0x186];
  if (iVar10 == 0) {
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x2fc] = 0x44e10000;
    param_1[0x186] = 1;
    FUN_00ad79e0();
    (**(code **)(*param_1 + 0xd8))(1);
    FUN_004066f0();
    iVar10 = param_1[0x248];
    iVar11 = param_1[0x249];
    iVar8 = param_1[0x24a];
    FUN_0091a620(&stack0xfffffd88);
    fVar18 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    fVar21 = (float)fVar18;
    fVar18 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    uStack_248 = 0xc1200000;
    fStack_240 = (float)fVar18;
    fStack_244 = fVar21;
    FUN_0091a6d0(&uStack_248);
    FUN_00915ef0(0);
    FUN_00915e60(0x43480000);
    iStack_258 = iVar10;
    iStack_254 = iVar11;
    iStack_250 = iVar8;
    FUN_0091a620(&iStack_258);
    param_1[0x360] = 0;
    if (DAT_01885d68 != 1) {
      piVar15 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar15 = *piVar15 + -1;
      if (((*piVar15 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    *(undefined2 *)(param_1 + 0x365) = 0;
  }
  else if (iVar10 != 1) {
    if (iVar10 == 2) {
      param_1[0x2fc] = 0x42f00000;
      param_1[0x186] = 3;
      FUN_00acc2f0(0x42f00000,0);
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
    }
    goto LAB_00ad80ab;
  }
  if ((float)param_1[0x2d5] + 0.2 < (float)param_1[0x15] !=
      ((float)param_1[0x2d5] + 0.2 == (float)param_1[0x15])) {
    param_1[0x360] = (int)((float)param_1[0x360] + (float)fVar17);
  }
  FUN_0091a5e0(&iStack_258);
  if (param_1[0x237] != 0) {
    FUN_0091df60(auStack_1b8);
    FUN_01005140(aiStack_1f8);
    piVar15 = aiStack_1f8;
    piVar16 = param_1 + 4;
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar16 = *piVar15;
      piVar15 = piVar15 + 1;
      piVar16 = piVar16 + 1;
    }
  }
  param_1[0x14] = param_1[0x10];
  param_1[0x15] = param_1[0x11];
  param_1[0x16] = param_1[0x12];
  param_1[0x17] = param_1[0x13];
  fVar21 = (float)param_1[4];
  fVar2 = (float)param_1[5];
  fVar3 = (float)param_1[6];
  fVar4 = (float)param_1[8];
  fVar5 = (float)param_1[9];
  fVar6 = (float)param_1[10];
  fVar9 = SQRT((float)param_1[0xe] * (float)param_1[0xe] +
               (float)param_1[0xd] * (float)param_1[0xd] + (float)param_1[0xc] * (float)param_1[0xc]
              );
  fVar7 = (float)param_1[10];
  fVar22 = (float)param_1[0xe] / fVar9;
  fVar18 = (float10)FUN_00ddbaa0(-((float)param_1[6] / fVar9));
  fVar19 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)fVar22);
  param_1[0x24] = (int)(float)fVar19;
  param_1[0x25] = (int)(float)fVar18;
  fVar18 = (float10)fpatan((float10)(float)param_1[5] /
                           (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                           (float10)(float)param_1[4] /
                           (float10)SQRT(fVar2 * fVar2 + fVar21 * fVar21 + fVar3 * fVar3));
  param_1[0x26] = (int)(float)fVar18;
  fVar21 = (float)param_1[0x2fc] - (float)fVar17;
  param_1[0x2fc] = (int)fVar21;
  if (fVar21 < 0.0) {
    param_1[0x186] = 2;
  }
  iVar10 = 0;
  if (((short)param_1[0x365] == 0) && (param_1[0x237] != 0)) {
    FUN_004066f0();
    iVar11 = FUN_009165d0();
    if ((iVar11 != 0) && ((iVar8 = *(int *)(iVar11 + 0x14), 0 < iVar8 && (iVar14 = 0, 0 < iVar8))))
    {
      pfVar13 = (float *)(*(int *)(iVar11 + 0x10) + 0x1c);
      do {
        fVar21 = pfVar13[-2];
        if (((0.4 <= fVar21) && (0.0 < *pfVar13 != (*pfVar13 == 0.0))) ||
           ((fVar21 < -0.4 != (fVar21 == -0.4) && (*pfVar13 < 0.0)))) {
          FUN_00915ef0(0x3f4ccccd);
          FUN_00915e60(0x3f800000);
          uVar20 = 0;
          uVar12 = FUN_00a7c8a0(0);
          FUN_004039a0(2,uVar12,uVar20);
          FUN_00dffb30(param_1 + 0x36c);
          FUN_00a8c8b0(param_1[300],auStack_178);
          *(undefined2 *)(param_1 + 0x365) = 1;
          iVar11 = 0;
          if (0 < (short)param_1[0xc9]) {
            do {
              iVar8 = param_1[200];
              iVar14 = *(int *)(*(int *)(iVar8 + 0x60 + iVar10) + 0x40);
              if ((iVar14 != 0) && (iVar14 = FUN_00fdbbd0(iVar14,"hologram_"), iVar14 != 0)) {
                puVar1 = (uint *)(iVar8 + 0x38 + iVar10);
                *puVar1 = *puVar1 | 1;
              }
              iVar11 = iVar11 + 1;
              iVar10 = iVar10 + 0x70;
            } while (iVar11 < (short)param_1[0xc9]);
          }
          break;
        }
        iVar14 = iVar14 + 1;
        pfVar13 = pfVar13 + 0xc;
      } while (iVar14 < iVar8);
    }
    if (DAT_01885d68 != 1) {
      piVar15 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar15 = *piVar15 + -1;
      if (((*piVar15 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
LAB_00ad80ab:
  switchD_0080dbae::default();
  if (param_1[0x237] != 0) {
    FUN_00916660();
  }
  return;
}

// 00AD80D0  FUN_00ad80d0  size=114  [callgraph]
void __fastcall FUN_00ad80d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(0,uVar1,uVar2);
  FUN_00dffb20(param_1 + 0xdb0);
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  FUN_00acb220(0x96,0x40a00000,0x40000000);
  return;
}

// 00AD8150  FUN_00ad8150  size=744  [callgraph]
void __fastcall FUN_00ad8150(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fStack_50;
  float fStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_14;
  
  fVar5 = (float10)(**(code **)(*param_1 + 0x24))();
  iVar4 = param_1[0x186];
  if (iVar4 == 0) {
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x2fc] = 0x44e10000;
    param_1[0x186] = 1;
    FUN_00ad80d0();
  }
  else if (iVar4 != 1) {
    if (iVar4 == 2) {
      FUN_00c76f00();
      iStack_40 = param_1[0x14];
      iStack_14 = param_1[0x239];
      iStack_3c = param_1[0x15];
      iStack_38 = param_1[0x16];
      iStack_34 = param_1[0x17];
      iStack_30 = param_1[0x24];
      iStack_2c = param_1[0x25];
      iStack_28 = param_1[0x26];
      iStack_24 = param_1[0x27];
      (**(code **)(*param_1 + 0x318))(&iStack_40);
      param_1[0x414] = param_1[0x14];
      param_1[0x415] = param_1[0x15];
      param_1[0x416] = param_1[0x16];
      param_1[0x417] = param_1[0x17];
      Behavior::createAttackImpactWave(param_1 + 0x3d0);
      param_1[0x2fc] = 0x42f00000;
      param_1[0x186] = 3;
      FUN_00acc2f0(0x42f00000,0);
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
      switchD_0080dbae::default();
      return;
    }
    goto LAB_00ad842b;
  }
  param_1[0x14] = param_1[0x10];
  param_1[0x15] = param_1[0x11];
  param_1[0x16] = param_1[0x12];
  param_1[0x17] = param_1[0x13];
  fStack_50 = SQRT((float)param_1[5] * (float)param_1[5] + (float)param_1[4] * (float)param_1[4] +
                   (float)param_1[6] * (float)param_1[6]);
  fStack_4c = SQRT((float)param_1[8] * (float)param_1[8] + (float)param_1[9] * (float)param_1[9] +
                   (float)param_1[10] * (float)param_1[10]);
  fVar3 = SQRT((float)param_1[0xe] * (float)param_1[0xe] +
               (float)param_1[0xd] * (float)param_1[0xd] + (float)param_1[0xc] * (float)param_1[0xc]
              );
  fVar1 = (float)param_1[10];
  fVar2 = (float)param_1[0xe];
  fVar6 = (float10)FUN_00ddbaa0(-((float)param_1[6] / fVar3));
  fVar7 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
  param_1[0x24] = (int)(float)fVar7;
  param_1[0x25] = (int)(float)fVar6;
  fVar6 = (float10)fpatan((float10)(float)param_1[5] / (float10)fStack_4c,
                          (float10)(float)param_1[4] / (float10)fStack_50);
  param_1[0x26] = (int)(float)fVar6;
  fVar1 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar1 - (float)fVar5);
  if (fVar1 - (float)fVar5 < 0.0) {
    param_1[0x186] = 2;
  }
  if (param_1[0x24c] == 0x13) {
    fStack_50 = (float)param_1[0x14];
    iStack_48 = param_1[0x16];
    iStack_44 = param_1[0x17];
    fStack_4c = (float)param_1[0x15] + 0.5;
    iVar4 = FUN_00c4dbf0(&fStack_50,param_1[0x255],0x40000000);
    if (iVar4 != 0) {
      param_1[0x186] = 2;
    }
  }
  if (param_1[0x24c] == 0x12) {
    fStack_50 = (float)param_1[0x14];
    iStack_48 = param_1[0x16];
    iStack_44 = param_1[0x17];
    fStack_4c = (float)param_1[0x15] + 0.5;
    iVar4 = FUN_00c4dbf0(&fStack_50,param_1[0x255],0x3f000000);
    if (iVar4 != 0) {
      param_1[0x186] = 2;
    }
  }
LAB_00ad842b:
  switchD_0080dbae::default();
  return;
}

// 00AD8440  FUN_00ad8440  size=304  [callgraph]
void __fastcall FUN_00ad8440(int param_1)

{
  int iVar1;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x618) < 3) {
    iVar1 = FUN_00ad1e00(&local_40,&local_30);
    if (iVar1 != 0) {
      FUN_00a7c950();
      *(float *)(param_1 + 0x50) = (*(float *)(param_1 + 0x50) + local_40) * 0.5;
      *(float *)(param_1 + 0x54) = (*(float *)(param_1 + 0x54) + local_3c) * 0.5;
      *(float *)(param_1 + 0x58) = (*(float *)(param_1 + 0x58) + local_38) * 0.5;
      *(float *)(param_1 + 0x5c) = (*(float *)(param_1 + 0x5c) + local_34) * 0.5;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x58);
      local_40 = *(float *)(param_1 + 0x50) + local_30 * -5.0;
      local_3c = local_2c * -5.0 + *(float *)(param_1 + 0x54);
      local_38 = local_28 * -5.0 + *(float *)(param_1 + 0x58);
      local_34 = local_24 * -5.0 + *(float *)(param_1 + 0x5c);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x3f800000;
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      *(undefined4 *)(param_1 + 0xb50) = uStack_4c;
      *(undefined4 *)(param_1 + 0xb54) = uStack_48;
      *(undefined4 *)(param_1 + 0xb58) = uStack_44;
      *(float *)(param_1 + 0xb5c) = local_40;
      *(undefined4 *)(param_1 + 0x618) = 4;
      if (*(int *)(param_1 + 0x870) != 0) {
        FUN_00d7acc0();
      }
    }
  }
  return;
}

// 00AD8570  FUN_00ad8570  size=1847  [callgraph]
void __fastcall FUN_00ad8570(int *param_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined1 *puStack_24c;
  float fStack_248;
  int *piStack_244;
  float fStack_234;
  float fStack_22c;
  float fStack_228;
  undefined4 uStack_224;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  float fStack_204;
  undefined1 auStack_1ec [12];
  undefined1 auStack_1e0 [36];
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined1 auStack_1ac [316];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [100];
  
  if (param_1[0x139] != 0) {
    return;
  }
  if (param_1[0x3c4] != 0) {
    return;
  }
  if (param_1[0x186] < 3) {
    piStack_244 = (int *)0x0;
    fStack_248 = 1.4013e-45;
    puStack_24c = (undefined1 *)0xad85b3;
    iVar5 = (**(code **)(*param_1 + 0x308))();
    if ((iVar5 != 0) || (param_1[0x300] != 0)) goto LAB_00ad8c8d;
  }
  piStack_244 = (int *)0xad85d2;
  iVar5 = FUN_00a81330();
  fStack_228 = 0.0;
  if (iVar5 != 0) {
    piStack_244 = (int *)0xad85e5;
    fStack_228 = (float)FUN_00a7c8a0();
  }
  pfVar2 = (float *)(param_1 + 0x2d4);
  param_1[0x2d8] = param_1[0x2d4];
  piVar1 = param_1 + 4;
  param_1[0x2d9] = param_1[0x2d5];
  fStack_248 = 0.0;
  puStack_24c = auStack_1e0;
  param_1[0x2da] = param_1[0x2d6];
  param_1[0x2db] = param_1[0x2d7];
  piStack_244 = piVar1;
  D3DXMatrixInverse();
  fStack_21c = 0.0;
  fStack_218 = 0.0;
  fStack_214 = 10.0;
  if (fStack_234 != 0.0) {
    D3DXVec3TransformNormal(&fStack_21c,(int)fStack_234 + 0x40,auStack_1ec);
    fStack_21c = fStack_1bc + fStack_21c;
    fStack_218 = fStack_1b8 + fStack_218;
    fStack_214 = fStack_1b4 + fStack_214;
  }
  fVar8 = (float10)(**(code **)(*param_1 + 0x24))();
  fVar10 = (float)fVar8;
  switch(param_1[0x186]) {
  case 0:
    param_1[0x186] = 1;
    sVar4 = FUN_00dde2d0(0,5);
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = (int)((float)(int)sVar4 + 10.0);
    FUN_00acbbe0();
    param_1[0x364] = 1;
    uVar6 = 0;
    if (param_1[0x24c] == 9) {
      uVar12 = FUN_00a7c8a0();
      FUN_004039a0(3,uVar12,uVar6);
      FUN_00dffb20(param_1 + 0x36c);
      FUN_00e03080(param_1[0x13c],0);
      iVar5 = param_1[300];
    }
    else {
      uVar12 = FUN_00a7c8a0(0);
      FUN_004039a0(0,uVar12,uVar6);
      FUN_00dffb20(param_1 + 0x36c);
      FUN_00e03080(param_1[0x13c],0);
      iVar5 = param_1[300];
    }
    FUN_00a8c8b0(iVar5,auStack_1ac);
    param_1[0x235] = 0;
    fVar8 = (float10)fVar10;
    *(undefined2 *)(param_1 + 0x365) = 0;
    break;
  case 1:
    break;
  default:
    return;
  case 3:
    FUN_00eaa6e0(0x41f00000,0);
    uVar7 = param_1[300];
    if (uVar7 == 0x7c0000) {
      uVar7 = 0;
    }
    else if ((uVar7 < 0x10000) || (uVar7 + 0xe0000000 < 0x100000)) {
      FUN_00dd5650(&DAT_0163e20c,uVar7);
    }
    uVar12 = 0;
    uVar6 = FUN_00a7c8a0(0);
    FUN_004039a0(1,uVar6,uVar12);
    FUN_0041cdb0(param_1 + 0x14);
    goto LAB_00ad8b28;
  case 4:
    FUN_00eaa6e0(0x41f00000,0);
    uVar7 = param_1[300];
    if (uVar7 == 0x7c0000) {
      uVar7 = 0;
    }
    else if ((uVar7 < 0x10000) || (uVar7 + 0xe0000000 < 0x100000)) {
      FUN_00dd5650(&DAT_0163e20c,uVar7);
    }
    uVar12 = 0;
    uVar6 = FUN_00a7c8a0(0);
    FUN_004039a0(1,uVar6,uVar12);
    FUN_0041cdb0(param_1 + 0x14);
LAB_00ad8b28:
    FUN_00a8c930(uVar7,auStack_1ac);
    FUN_00e5e0c0("em0200_se_atk_missile_exp",param_1,0xffffffff,0);
    FUN_00acc2f0(0x43340000,0);
    param_1[0x186] = 100;
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  case 5:
    fVar10 = (float)param_1[0x360];
    param_1[0x360] = (int)(float)((float10)fVar10 - fVar8);
    fVar9 = (float10)0;
    if (fVar9 < (float10)fVar10 - fVar8) {
      fStack_22c = (float)fVar9;
      fStack_228 = (float)fVar9;
      uStack_224 = 0x3f800000;
      D3DXVec3TransformNormal(&fStack_22c,&fStack_22c,piVar1);
      FUN_00acc460(pfVar2,&stack0xfffffdc8,(float)param_1[0x360] * 0.1 * 0.3,0x3e32b8c2,1);
      fVar8 = (float10)unaff_ESI;
    }
    fVar10 = (float)param_1[0x2fc];
    param_1[0x2fc] = (int)(float)((float10)fVar10 - fVar8);
    if ((float10)0 <= (float10)fVar10 - fVar8) {
      return;
    }
LAB_00ad8c8d:
    param_1[0x186] = 3;
    return;
  }
  fVar9 = (float10)1;
  fStack_234 = (float)fVar9;
  fVar3 = (float)param_1[0x235];
  if (!NAN(fVar3) && 2.0 < fVar3 != (fVar3 == 2.0)) {
    if ((fStack_214 < 30.0 != (fStack_214 == 30.0)) && (20.0 < fStack_214)) {
      fVar9 = (float10)0.4;
      fStack_234 = (float)fVar9;
    }
    if ((fStack_214 <= 20.0) && (-3.0 < fStack_214)) {
      fVar9 = (float10)0.2;
      fStack_234 = (float)fVar9;
    }
  }
  uStack_20c = 0;
  uStack_208 = 0;
  fStack_204 = (float)(fVar8 * (float10)(float)param_1[0x2e4] * fVar9);
  piVar11 = piVar1;
  D3DXVec3TransformNormal(&uStack_20c,&uStack_20c);
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  fVar8 = (float10)FUN_00a581b0(&stack0xfffffdc8,unaff_ESI * (float)param_1[0x2e4] * unaff_EDI,
                                param_1[0x235]);
  param_1[0x235] = (int)(float)fVar8;
  param_1[0x14] = (int)unaff_EBX;
  param_1[0x15] = (int)fStack_234;
  param_1[0x16] = (int)fVar10;
  param_1[0x17] = 0x3f800000;
  FUN_00a585a0(&stack0xfffffdc8,unaff_ESI * (float)param_1[0x2e4] * 3.0,param_1[0x235]);
  *pfVar2 = unaff_EBX;
  param_1[0x2d5] = (int)fStack_234;
  param_1[0x2d6] = (int)fVar10;
  param_1[0x2d7] = 0x3f800000;
  *pfVar2 = (float)param_1[0x14] + *pfVar2;
  param_1[0x2d5] = (int)((float)param_1[0x15] + (float)param_1[0x2d5]);
  param_1[0x2d6] = (int)((float)param_1[0x2d6] + (float)param_1[0x16]);
  param_1[0x2d7] = (int)((float)param_1[0x17] + (float)param_1[0x2d7]);
  if ((float)param_1[0x236] - 1.1 < (float)param_1[0x235] ==
      ((float)param_1[0x236] - 1.1 == (float)param_1[0x235])) {
    fVar10 = unaff_ESI * 0.02617994;
    uVar6 = 0x3dcccccd;
  }
  else {
    fVar10 = unaff_ESI * 0.08726646;
    uVar6 = 0x3e99999a;
  }
  FUN_00acc460(pfVar2,&fStack_218,uVar6,fVar10,1);
  param_1[0x10] = param_1[0x14];
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  fVar8 = (float10)FUN_00dde300(0x3f4ccccd,0x3f800000);
  D3DXMatrixRotationZ(auStack_68,(float)((float10)unaff_ESI * (float10)0.06981317 * fVar8));
  D3DXMatrixMultiply(piVar1,auStack_70,piVar1);
  param_1[0x2fc] = (int)((float)param_1[0x2fc] - (float)piVar11);
  param_1[0x360] = (int)((float)param_1[0x360] - (float)piVar11);
  if ((float)param_1[0x236] < (float)param_1[0x235] !=
      ((float)param_1[0x236] == (float)param_1[0x235])) {
    param_1[0x186] = 3;
  }
  fStack_21c = (float)param_1[0x244];
  fStack_218 = (float)param_1[0x245];
  fStack_214 = (float)param_1[0x246];
  iStack_210 = param_1[0x247];
  puStack_24c = (undefined1 *)((float)param_1[0x14] - fStack_21c);
  fStack_248 = (float)param_1[0x15] - fStack_218;
  piStack_244 = (int *)((float)param_1[0x16] - fStack_214);
  uVar6 = FUN_009f8b40();
  FUN_00acb320(&fStack_21c,0x3dcccccd,&puStack_24c,uVar6);
  return;
}

// 00AD9760  FUN_00ad9760  size=120  [callgraph]
void __fastcall FUN_00ad9760(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x930) == 0x27) && (*(int *)(param_1 + 0x618) - 4U < 2)) {
    iVar1 = FUN_00ad1e00(0,0);
    if ((iVar1 != 0) &&
       ((*(int *)(param_1 + 0xf14) != 0 && (*(int *)(*(int *)(param_1 + 0xf14) + 0x35c) == 0)))) {
      FUN_00d7b890();
      return;
    }
  }
  iVar1 = FUN_00ad1e00(0,0);
  if (iVar1 != 0) {
    FUN_00acc2f0(0x43340000,0);
    *(undefined4 *)(param_1 + 0xf10) = 1;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
  }
  return;
}

// 00AD97E0  FUN_00ad97e0  size=3973  [callgraph]
void __fastcall FUN_00ad97e0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  float *pfVar7;
  float unaff_EDI;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined1 *puStack_6dc;
  float local_6d8;
  float *local_6d4;
  float fStack_6c4;
  float fStack_6c0;
  float fStack_6bc;
  float fStack_6b8;
  undefined4 uStack_6a8;
  float fStack_6a4;
  float fStack_6a0;
  int *piStack_69c;
  float fStack_698;
  float fStack_694;
  float fStack_690;
  undefined1 auStack_68c [4];
  float fStack_688;
  float fStack_684;
  float fStack_680;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float fStack_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float fStack_658;
  int iStack_648;
  int iStack_644;
  int iStack_640;
  int iStack_63c;
  undefined1 *puStack_638;
  undefined4 uStack_634;
  float fStack_630;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 auStack_5ec [5];
  int iStack_5d8;
  int iStack_5d4;
  int iStack_5d0;
  int iStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  int iStack_5bc;
  undefined4 uStack_5b0;
  int iStack_5ac;
  undefined1 auStack_59c [12];
  undefined1 local_590 [24];
  float fStack_578;
  float fStack_574;
  float fStack_570;
  undefined4 auStack_568 [12];
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4c8;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  float afStack_498 [16];
  undefined1 auStack_458 [52];
  undefined1 auStack_424 [348];
  undefined1 auStack_2c8 [336];
  undefined1 auStack_178 [372];
  
  if ((param_1[0x139] == 0) && (param_1[0x3c4] == 0)) {
    if (((DAT_01bea060 & 0x2000000) != 0) || ((param_1[0x24c] == 0x27 && (DAT_01bea740 != 0)))) {
      local_6d4 = (float *)0x0;
      local_6d8 = 1.0;
      puStack_6dc = (undefined1 *)0xad9832;
      FUN_00eaa6e0();
      local_6d4 = (float *)0x1;
      local_6d8 = 30.0;
      puStack_6dc = (undefined1 *)0xad9849;
      FUN_00acc2f0();
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
      param_1[0x1bb] = 0;
      return;
    }
    local_6d4 = (float *)0xad987e;
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      local_6d4 = (float *)0xad9889;
      FUN_00a7c8a0();
    }
    param_1[0x2d8] = param_1[0x2d4];
    pfVar8 = (float *)(param_1 + 4);
    param_1[0x2d9] = param_1[0x2d5];
    local_6d8 = 0.0;
    puStack_6dc = local_590;
    param_1[0x2da] = param_1[0x2d6];
    param_1[0x2db] = param_1[0x2d7];
    local_6d4 = pfVar8;
    D3DXMatrixInverse();
    D3DXVec3TransformNormal(auStack_68c,param_1 + 0x2d4,auStack_59c);
    fStack_698 = fStack_698 + fStack_578;
    fStack_694 = fStack_574 + fStack_694;
    fStack_690 = fStack_570 + fStack_690;
    fVar9 = (float10)(**(code **)(*param_1 + 0x24))();
    fVar1 = (float)fVar9;
    if (((((param_1[0x24c] == 0x27) && (param_1[0x3c5] != 0)) && (param_1[0x23a] != 0)) &&
        ((puStack_6dc = (undefined1 *)FUN_00ac5c40(), puStack_6dc != (undefined1 *)0x0 &&
         (param_1[0x3c5] != 0)))) &&
       ((*(int *)(param_1[0x3c5] + 0x35c) != 0 &&
        ((iVar4 = FUN_00a8cab0(), iVar4 == 0x3e || (iVar4 = FUN_00a8cab0(), iVar4 == 0x3d)))))) {
      FUN_00d7acc0();
    }
    piStack_69c = param_1 + 0x44a;
    if ((param_1[0x44a] != 0) && (iVar4 = FUN_00907640(piStack_69c,0,0), iVar4 != 0)) {
      param_1[0x1bb] = 0;
    }
    switch(param_1[0x186]) {
    case 0:
      *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
      param_1[0x360] = 0x41200000;
      param_1[0x186] = 1;
      FUN_00acbd90();
      if (param_1[0x24c] == 0x27) {
        uVar6 = CollisionAttackData::CollisionAttackData_4(param_1 + 0x250);
        iVar4 = CollisionCapsule::CollisionCapsule(0xc,param_1[0x2e7],uVar6);
        if (iVar4 != 0) {
          param_1[0x3c5] = iVar4;
          lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
          FUN_00acb020(iVar4,0x40000000,0x3e99999a,0xffffffff);
        }
      }
      pfVar7 = (float *)(param_1 + 0x248);
      fVar2 = (float)param_1[0x249] * (float)param_1[0x249] + *pfVar7 * *pfVar7 +
              (float)param_1[0x24a] * (float)param_1[0x24a];
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        local_6d8 = (float)param_1[0x24a];
        FUN_00ddf460(pfVar7,pfVar7);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *pfVar7 = 0.0;
        param_1[0x249] = 0x3f800000;
        param_1[0x24a] = 0;
      }
      *pfVar7 = *pfVar7 * 0.1;
      param_1[0x249] = (int)((float)param_1[0x249] * 0.1);
      param_1[0x24a] = (int)((float)param_1[0x24a] * 0.1);
      param_1[0x24b] = (int)((float)param_1[0x24b] * 0.1);
      param_1[0x364] = 1;
    case 1:
      fStack_6c4 = 0.0;
      fStack_6c0 = (float)param_1[0x2e4] * fVar1;
      D3DXVec3TransformNormal(&stack0xfffff938,&stack0xfffff938,pfVar8);
      param_1[0x244] = param_1[0x14];
      param_1[0x245] = param_1[0x15];
      param_1[0x246] = param_1[0x16];
      param_1[0x247] = param_1[0x17];
      param_1[0x14] = (int)((float)local_6d4 + (float)param_1[0x14]);
      param_1[0x15] = (int)(unaff_EDI + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x16] + fVar1);
      param_1[0x17] = (int)((float)param_1[0x17] + 0.0);
      param_1[0x10] = param_1[0x14];
      param_1[0x11] = param_1[0x15];
      param_1[0x12] = param_1[0x16];
      param_1[0x2fc] = (int)((float)param_1[0x2fc] - local_6d8);
      fVar1 = (float)param_1[0x360];
      param_1[0x360] = (int)(fVar1 - local_6d8);
      if (fVar1 - local_6d8 < 0.0) {
        uVar11 = 0;
        param_1[0x360] = 0x3f800000;
        param_1[0x186] = 2;
        uVar6 = FUN_00a7c8a0(0);
        FUN_004039a0(0,uVar6,uVar11);
        FUN_00dffb20(param_1 + 0x36c);
        FUN_00e03080(param_1[0x13c],0);
        FUN_00a8c8b0(param_1[300],auStack_424);
      }
      fStack_6c4 = (float)param_1[0x244];
      fStack_6c0 = (float)param_1[0x245];
      fStack_6bc = (float)param_1[0x246];
      fStack_6b8 = (float)param_1[0x247];
      fStack_664 = (float)param_1[0x14] - fStack_6c4;
      fStack_660 = (float)param_1[0x15] - fStack_6c0;
      fStack_65c = (float)param_1[0x16] - fStack_6bc;
      fStack_658 = (float)param_1[0x17] - fStack_6b8;
      uVar6 = FUN_009f8b40();
      FUN_00acb320(&fStack_6c4,0x3f000000,&fStack_664,uVar6);
      if (param_1[0x1bb] != 0) {
        uStack_5f4 = 0;
        uStack_5f0 = 0xbf99999a;
        auStack_5ec[0] = 0;
        uVar6 = FUN_009f8b40(0,0,0);
        uVar6 = FUN_00410130(5,uVar6);
        FUN_0090fa30(uStack_6a8,0,&fStack_6c4,0x3f000000,&uStack_5f4,uVar6,"Missile");
        return;
      }
      break;
    case 2:
      param_1[0x360] = (int)((float)param_1[0x360] + fVar1);
      fStack_6c4 = 0.0;
      fStack_6c0 = fVar1 * (float)param_1[0x2e4];
      D3DXVec3TransformNormal(&stack0xfffff938,&stack0xfffff938,pfVar8);
      param_1[0x244] = param_1[0x14];
      param_1[0x245] = param_1[0x15];
      param_1[0x246] = param_1[0x16];
      param_1[0x247] = param_1[0x17];
      param_1[0x248] = (int)local_6d4;
      param_1[0x249] = (int)unaff_EDI;
      param_1[0x24a] = (int)fVar1;
      param_1[0x24b] = 0;
      param_1[0x14] = (int)((float)local_6d4 + (float)param_1[0x14]);
      param_1[0x15] = (int)(unaff_EDI + (float)param_1[0x15]);
      param_1[0x16] = (int)(fVar1 + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x17] + 0.0);
      param_1[0x10] = param_1[0x14];
      param_1[0x11] = param_1[0x15];
      param_1[0x12] = param_1[0x16];
      fVar1 = SQRT((float)piStack_69c * (float)piStack_69c +
                   fStack_6a4 * fStack_6a4 + fStack_6a0 * fStack_6a0);
      if (fVar1 < 15.0 != (fVar1 == 15.0)) {
        param_1[0x364] = 0;
      }
      FUN_00acc460(param_1 + 0x2d4,&local_6d4,0x3d75c28f,local_6d8 * 0.05235988,1);
      fVar1 = (float)param_1[0x2fc];
      param_1[0x2fc] = (int)(fVar1 - local_6d8);
      if (fVar1 - local_6d8 < 0.0) {
        param_1[0x186] = 3;
        return;
      }
      fStack_6c4 = (float)param_1[0x244];
      fStack_6c0 = (float)param_1[0x245];
      fStack_6bc = (float)param_1[0x246];
      fStack_6b8 = (float)param_1[0x247];
      fStack_674 = (float)param_1[0x14] - fStack_6c4;
      fStack_670 = (float)param_1[0x15] - fStack_6c0;
      fStack_66c = (float)param_1[0x16] - fStack_6bc;
      fStack_668 = (float)param_1[0x17] - fStack_6b8;
      uVar6 = FUN_009f8b40();
      FUN_00acb320(&fStack_6c4,0x3f000000,&fStack_674,uVar6);
      if (param_1[0x1bb] != 0) {
        uStack_614 = 0;
        uStack_610 = 0xbf99999a;
        uStack_60c = 0;
        uVar6 = FUN_009f8b40(0,0,0);
        uVar6 = FUN_00410130(5,uVar6);
        FUN_0090fa30(uStack_6a8,0,&fStack_6c4,0x3f000000,&uStack_614,uVar6,"Missile");
        return;
      }
      break;
    case 3:
      FUN_00eaa6e0(0x3f800000,0);
      FUN_00acc2f0(0x43340000,0);
      param_1[0x186] = 100;
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
      param_1[0x1bb] = 0;
      return;
    case 4:
      param_1[0x186] = 5;
      param_1[0x248] = (int)((float)param_1[0x248] * 0.0);
      param_1[0x249] = (int)((float)param_1[0x249] * 0.0);
      param_1[0x24a] = (int)((float)param_1[0x24a] * 0.0);
      param_1[0x24b] = (int)((float)param_1[0x24b] * 0.0);
      if (param_1[0x3cc] != 0) {
        *(undefined4 *)(param_1[0x3cc] + 0x34) = 0;
      }
      if (param_1[0x24c] == 0x27) {
        param_1[0x187] = 0;
        param_1[0x360] = 0x42200000;
      }
      iVar4 = FUN_00c76330(param_1[0x239],&stack0xfffff930);
      if (iVar4 != 0) {
        FUN_00e5ca30(param_1[0x242],0x40400000);
      }
      puStack_6dc = (undefined1 *)0x40400000;
      iVar4 = FUN_00c76390(param_1[0x239],&puStack_6dc);
      if (iVar4 != 0) {
        FUN_00e5ca30(param_1[0x243],puStack_6dc);
      }
      param_1[0x242] = 0;
      param_1[0x243] = 0;
      if (param_1[300] == 0x3b003) {
        uVar11 = 0;
        param_1[0x2fc] = 0x43700000;
        uVar6 = FUN_00a7c8a0(0);
        FUN_004039a0(2,uVar6,uVar11);
        FUN_00dffb20(param_1 + 0x36c);
        FUN_00e020f0(param_1[0x13c]);
        FUN_00a8c8b0(param_1[300],auStack_2c8);
        FUN_004066f0();
        iStack_648 = param_1[0x10];
        iStack_644 = param_1[0x11];
        iStack_640 = param_1[0x12];
        iStack_63c = param_1[0x13];
        fStack_688 = 0.0;
        fStack_684 = 0.0;
        fStack_680 = 0.0;
        fStack_674 = SQRT((float)param_1[5] * (float)param_1[5] + *pfVar8 * *pfVar8 +
                          (float)param_1[6] * (float)param_1[6]);
        fStack_670 = SQRT((float)param_1[8] * (float)param_1[8] +
                          (float)param_1[9] * (float)param_1[9] +
                          (float)param_1[10] * (float)param_1[10]);
        fVar3 = SQRT((float)param_1[0xe] * (float)param_1[0xe] +
                     (float)param_1[0xd] * (float)param_1[0xd] +
                     (float)param_1[0xc] * (float)param_1[0xc]);
        puStack_6dc = (undefined1 *)((float)param_1[10] / fVar3);
        fVar2 = (float)param_1[0xe];
        fVar9 = (float10)FUN_00ddbaa0(-((float)param_1[6] / fVar3));
        fVar10 = (float10)fpatan((float10)(float)puStack_6dc,(float10)(fVar2 / fVar3));
        fStack_688 = (float)fVar10;
        fStack_684 = (float)fVar9;
        fVar9 = (float10)fpatan((float10)(float)param_1[5] / (float10)fStack_670,
                                (float10)*pfVar8 / (float10)fStack_674);
        fStack_680 = (float)fVar9;
        FUN_0118f7b0();
        uStack_4d8 = 0x41a00000;
        uStack_4d0 = 0x3f4ccccd;
        uStack_538 = 0;
        uStack_534 = 0;
        uStack_530 = 0;
        uStack_52c = 0x3f800000;
        uStack_4b8 = 0x41200000;
        uStack_528 = 0;
        uStack_524 = 0;
        uStack_520 = 0;
        uStack_51c = 0x3f800000;
        uStack_4d4 = 0x3dcccccd;
        uStack_4e8 = 0;
        uStack_4e4 = 0;
        uStack_4e0 = 0x3f800000;
        uStack_4dc = 0x3f800000;
        uStack_4c8 = 0x3f4ccccd;
        uStack_4bc = 0x40000000;
        uVar6 = FUN_009f8b40(0,0,0);
        auStack_568[0] = FUN_00410130(0x1f,uVar6);
        uStack_618 = 0;
        uStack_614 = 0;
        uStack_610 = 0x3f800000;
        uStack_628 = 0;
        uStack_624 = 0;
        uStack_620 = 0xbfc00000;
        piVar5 = (int *)FUN_00910da0();
        uVar6 = (**(code **)(*piVar5 + 0xc))
                          (auStack_5ec,auStack_568,&iStack_648,&fStack_688,&uStack_618,&uStack_628,
                           0x3e4ccccd,1);
        FUN_00910ab0(uVar6);
        FUN_00917bd0(param_1[0x237],1);
        FUN_00917bd0(param_1[0x237],2);
        fVar9 = (float10)FUN_00dde300(0xbf000000,0x3f000000);
        puStack_6dc = (undefined1 *)(float)fVar9;
        fVar9 = (float10)FUN_00dde300(0,0);
        puStack_638 = puStack_6dc;
        uStack_634 = 0x40400000;
        fStack_630 = (float)fVar9;
        FUN_0091a880(&puStack_638,param_1 + 0x14);
        FUN_00406760();
      }
    case 5:
      param_1[0x244] = param_1[0x14];
      param_1[0x245] = param_1[0x15];
      param_1[0x246] = param_1[0x16];
      param_1[0x247] = param_1[0x17];
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x248]);
      param_1[0x15] = (int)((float)param_1[0x249] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x24a] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x24b]);
      param_1[0x249] = (int)(((float)param_1[0x249] - 0.003) * 0.94);
      param_1[0x10] = param_1[0x14];
      param_1[0x11] = param_1[0x15];
      param_1[0x12] = param_1[0x16];
      if (param_1[0x24c] == 0x27) {
        fVar1 = (float)param_1[0x360] - (float)param_1[0x3c8];
        param_1[0x360] = (int)fVar1;
        if ((fVar1 < 0.0 != (fVar1 == 0.0)) || ((float)param_1[0x15] < (float)param_1[0x442])) {
          if (param_1[0x187] == 0) {
            param_1[0x360] = 0x43160000;
            param_1[0x187] = 1;
            FUN_00eaa6e0(0x42700000,0);
            uVar11 = 0;
            uVar6 = FUN_00a7c8a0(0);
            FUN_004039a0(1,uVar6,uVar11);
            FUN_00dffb20(param_1 + 0x398);
            FUN_00e03080(param_1[0x13c],0);
            FUN_00a8c8b0(param_1[300],auStack_178);
          }
          else {
            if (*(int *)(param_1[0x3c5] + 0x35c) == 0) {
              FUN_00d7b890();
            }
            FUN_00eaa6e0(0x3f800000,0);
            param_1[0x186] = 3;
          }
        }
        uVar6 = FUN_009f8b40(0,0,0);
        uVar6 = FUN_00410130(5,uVar6);
        FUN_0090fa30(param_1 + 0x449,0,param_1 + 0x244,0x3f000000,param_1 + 0x248,uVar6,"Bullet");
        return;
      }
      fVar2 = (float)param_1[0x2fc];
      param_1[0x2fc] = (int)(fVar2 - fVar1);
      if (fVar2 - fVar1 < 0.0) {
        param_1[0x186] = 0x14;
      }
      if (param_1[0x237] != 0) {
        FUN_004066f0();
        FUN_0091df60(auStack_458);
        FUN_01005140(afStack_498);
        pfVar7 = afStack_498;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar8 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pfVar8 = pfVar8 + 1;
        }
        FUN_00406760();
      }
      param_1[0x14] = param_1[0x10];
      param_1[0x15] = param_1[0x11];
      param_1[0x16] = param_1[0x12];
      param_1[0x17] = param_1[0x13];
      param_1[0x248] = (int)((float)param_1[0x14] - (float)param_1[0x244]);
      param_1[0x249] = (int)((float)param_1[0x15] - (float)param_1[0x245]);
      param_1[0x24a] = (int)((float)param_1[0x16] - (float)param_1[0x246]);
      param_1[0x24b] = (int)((float)param_1[0x17] - (float)param_1[0x247]);
      uVar6 = FUN_009f8b40();
      FUN_00acb320(param_1 + 0x244,0x3f000000,param_1 + 0x248,uVar6);
      return;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
      break;
    case 0x14:
      FUN_00c76f00();
      iStack_5d8 = param_1[0x14];
      iStack_5ac = param_1[0x239];
      iStack_5d4 = param_1[0x15];
      iStack_5d0 = param_1[0x16];
      iStack_5cc = param_1[0x17];
      iStack_5bc = param_1[0x27];
      uStack_5b0 = 1000;
      uStack_5c8 = 0;
      uStack_5c4 = 0x3f800000;
      uStack_5c0 = 0;
      (**(code **)(*param_1 + 0x318))(&iStack_5d8);
      FUN_00eaa6e0(0x3f800000,0);
      FUN_00acc2f0(0x43340000,0);
      param_1[0x186] = 100;
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
      param_1[0x1bb] = 0;
      return;
    case 100:
      (**(code **)(*param_1 + 0x20))();
      return;
    }
  }
  return;
}

// 00ADA800  FUN_00ada800  size=503  [callgraph]
void __fastcall FUN_00ada800(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_1ac [12];
  undefined1 local_1a0 [40];
  undefined1 auStack_178 [372];
  
  if ((DAT_01bea060 & 0x2000000) != 0) {
    FUN_00acc0a0();
    return;
  }
  if ((*(int *)(param_1 + 0x4e4) == 0) && (*(int *)(param_1 + 0xf10) == 0)) {
    iVar1 = FUN_00a81330();
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar4 = FUN_00a7c8a0();
    }
    *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_1 + 0xb50);
    *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_1 + 0xb54);
    *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_1 + 0xb58);
    *(undefined4 *)(param_1 + 0xb6c) = *(undefined4 *)(param_1 + 0xb5c);
    D3DXMatrixInverse(local_1a0,0,param_1 + 0x10);
    D3DXVec3TransformNormal(&stack0xfffffe44,param_1 + 0xb50,auStack_1ac);
    iVar1 = *(int *)(param_1 + 0x618);
    if (iVar1 == 0) {
      *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
      *(undefined4 *)(param_1 + 0x618) = 1;
      FUN_00acbd90();
      uVar6 = 0;
      uVar2 = FUN_00a7c8a0(0);
      FUN_004039a0(0,uVar2,uVar6);
      FUN_00dffb20(param_1 + 0xdb0);
      FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_178);
    }
    else if (iVar1 != 1) {
      if (iVar1 != 3) {
        return;
      }
      FUN_00acc2f0(0x43340000,0);
      *(undefined4 *)(param_1 + 0x618) = 100;
      *(undefined4 *)(param_1 + 0xf10) = 1;
      *(undefined4 *)(param_1 + 0x4e4) = 1;
      *(undefined4 *)(param_1 + 0x6ec) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x914) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x91c) = *(undefined4 *)(param_1 + 0x5c);
    if ((iVar4 != 0) && (iVar1 = FUN_00a12210((int)*(short *)(param_1 + 0xbd4)), iVar1 != 0)) {
      puVar3 = (undefined4 *)(iVar1 + 0x10);
      puVar5 = (undefined4 *)(param_1 + 0x10);
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
  }
  return;
}

// 00ADAA00  FUN_00adaa00  size=2006  [callgraph]
void __fastcall FUN_00adaa00(int *param_1)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  float unaff_EDI;
  float10 fVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  float *pfStack_2bc;
  int *piStack_2b8;
  undefined1 *puStack_2b4;
  undefined1 *puStack_2b0;
  float fStack_2ac;
  int *piStack_2a8;
  float fStack_2a4;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  undefined1 auStack_230 [12];
  undefined1 auStack_224 [20];
  undefined1 auStack_210 [4];
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [64];
  undefined1 auStack_188 [388];
  
  if ((DAT_01bea060 & 0x2000000) != 0) {
    fStack_2a4 = 1.5948573e-38;
    FUN_00acc0a0();
    return;
  }
  if ((param_1[0x139] == 0) && (param_1[0x3c4] == 0)) {
    fStack_2a4 = 0.0;
    piStack_2a8 = (int *)0xadaa50;
    iVar5 = (**(code **)(*param_1 + 0x30c))();
    if (iVar5 == 0) {
      piStack_2a8 = (int *)0xadaa63;
      iVar5 = FUN_00a81330();
      if (iVar5 != 0) {
        piStack_2a8 = (int *)0xadaa6e;
        FUN_00a7c8a0();
      }
      piVar2 = param_1 + 0x2d4;
      param_1[0x2d8] = param_1[0x2d4];
      piVar1 = param_1 + 4;
      param_1[0x2d9] = param_1[0x2d5];
      fStack_2ac = 0.0;
      puStack_2b0 = auStack_224;
      param_1[0x2da] = param_1[0x2d6];
      param_1[0x2db] = param_1[0x2d7];
      puStack_2b4 = (undefined1 *)0xadaaae;
      piStack_2a8 = piVar1;
      D3DXMatrixInverse();
      puStack_2b4 = auStack_230;
      pfStack_2bc = &fStack_270;
      piStack_2b8 = piVar2;
      D3DXVec3TransformNormal();
      fStack_27c = fStack_20c + fStack_27c;
      fStack_278 = fStack_208 + fStack_278;
      fStack_274 = fStack_204 + fStack_274;
      fVar7 = (float10)(**(code **)(*param_1 + 0x24))();
      fStack_2a4 = (float)fVar7;
      switch(param_1[0x186]) {
      case 0:
        *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
        param_1[0x186] = 1;
        param_1[0x360] = 0x41700000;
        FUN_00acbe80();
        pfVar3 = (float *)(param_1 + 0x248);
        fVar4 = (float)param_1[0x24a] * (float)param_1[0x24a] +
                *pfVar3 * *pfVar3 + (float)param_1[0x249] * (float)param_1[0x249];
        if (fVar4 < 0.0 == (fVar4 == 0.0)) {
          unaff_EDI = (float)param_1[0x24a];
          FUN_00ddf460(pfVar3,pfVar3);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          *pfVar3 = 0.0;
          param_1[0x249] = 0x3f800000;
          param_1[0x24a] = 0;
        }
        *pfVar3 = *pfVar3 * 0.1;
        param_1[0x249] = (int)((float)param_1[0x249] * 0.1);
        param_1[0x24a] = (int)((float)param_1[0x24a] * 0.1);
        param_1[0x24b] = (int)((float)param_1[0x24b] * 0.1);
        param_1[0x364] = 1;
      case 1:
        D3DXVec3TransformNormal(&stack0xfffffd64,&stack0xfffffd64,piVar1);
        fVar7 = (float10)FUN_00fdc1f0();
        param_1[0x2e4] = (int)(float)(fVar7 * (float10)(float)param_1[0x2e4]);
        param_1[0x244] = param_1[0x14];
        param_1[0x245] = param_1[0x15];
        param_1[0x246] = param_1[0x16];
        param_1[0x247] = param_1[0x17];
        param_1[0x14] = (int)((float)param_1[0x14] + (float)piStack_2a8);
        param_1[0x15] = (int)((float)param_1[0x15] + fStack_2a4);
        param_1[0x16] = (int)(unaff_EDI + (float)param_1[0x16]);
        param_1[0x17] = (int)((float)param_1[0x17] + 0.0);
        param_1[0x15] = (int)((float)param_1[0x15] - (float)puStack_2b0 * 0.03);
        param_1[0x10] = param_1[0x14];
        param_1[0x11] = param_1[0x15];
        param_1[0x12] = param_1[0x16];
        fVar4 = (float)param_1[0x360];
        param_1[0x360] = (int)(fVar4 - (float)puStack_2b0);
        if (fVar4 - (float)puStack_2b0 < 0.0) {
          uVar8 = 0;
          param_1[0x360] = 0x3f800000;
          param_1[0x186] = 2;
          uVar6 = FUN_00a7c8a0(0);
          FUN_004039a0(0,uVar6,uVar8);
          FUN_00dffb20(param_1 + 0x36c);
          FUN_00e03080(param_1[0x13c],0);
          FUN_00a8c8b0(param_1[300],auStack_188);
        }
        fStack_278 = (float)param_1[0x14] - (float)param_1[0x244];
        fStack_274 = (float)param_1[0x15] - (float)param_1[0x245];
        fStack_270 = (float)param_1[0x16] - (float)param_1[0x246];
        fStack_26c = (float)param_1[0x17] - (float)param_1[0x247];
        uVar6 = FUN_009f8b40();
        FUN_00acb320(&stack0xfffffd68,0x3f000000,&fStack_278,uVar6);
        return;
      case 2:
        puVar9 = &stack0xfffffd64;
        param_1[0x360] = (int)(float)((float10)(float)param_1[0x360] + fVar7);
        D3DXVec3TransformNormal(puVar9,puVar9,piVar1);
        param_1[0x244] = param_1[0x14];
        param_1[0x245] = param_1[0x15];
        param_1[0x246] = param_1[0x16];
        param_1[0x247] = param_1[0x17];
        param_1[0x248] = (int)piStack_2a8;
        param_1[0x249] = (int)fStack_2a4;
        param_1[0x24a] = (int)unaff_EDI;
        param_1[0x24b] = 0;
        param_1[0x14] = (int)((float)param_1[0x14] + (float)piStack_2a8);
        param_1[0x15] = (int)((float)param_1[0x15] + fStack_2a4);
        param_1[0x16] = (int)(unaff_EDI + (float)param_1[0x16]);
        param_1[0x17] = (int)((float)param_1[0x17] + 0.0);
        param_1[0x2e4] = (int)((float)puStack_2b0 * 0.004 + (float)param_1[0x2e4]);
        fVar7 = (float10)FUN_00dde300(0x3f000000,0x3f800000);
        D3DXMatrixRotationZ(auStack_1c8,
                            (float)((float10)(float)puStack_2b0 * (float10)0.13962634 * fVar7));
        D3DXMatrixMultiply(piVar1,auStack_1d0,piVar1);
        param_1[0x10] = param_1[0x14];
        param_1[0x11] = param_1[0x15];
        param_1[0x12] = param_1[0x16];
        FUN_00acc460(piVar2,&pfStack_2bc,0x3d75c28f,(float)puVar9 * 0.05235988,1);
        fVar4 = (float)param_1[0x2fc];
        param_1[0x2fc] = (int)(fVar4 - (float)puVar9);
        if (0.0 <= fVar4 - (float)puVar9) {
          fStack_2ac = (float)param_1[0x244];
          piStack_2a8 = (int *)param_1[0x245];
          fStack_2a4 = (float)param_1[0x246];
          fStack_27c = (float)param_1[0x14] - fStack_2ac;
          fStack_278 = (float)param_1[0x15] - (float)piStack_2a8;
          fStack_274 = (float)param_1[0x16] - fStack_2a4;
          fStack_270 = (float)param_1[0x17] - (float)param_1[0x247];
          uVar6 = FUN_009f8b40();
          FUN_00acb320(&fStack_2ac,0x3f000000,&fStack_27c,uVar6);
          return;
        }
        break;
      case 3:
        FUN_00eaa6e0(0x3f800000,0);
        FUN_00acc2f0(0x43340000,0);
        param_1[0x186] = 100;
        param_1[0x3c4] = 1;
        param_1[0x139] = 1;
        param_1[0x1bb] = 0;
        return;
      case 4:
        puVar9 = &stack0xfffffd64;
        param_1[0x360] = (int)(float)((float10)(float)param_1[0x360] + fVar7);
        D3DXVec3TransformNormal(puVar9,puVar9,piVar1);
        param_1[0x244] = param_1[0x14];
        param_1[0x245] = param_1[0x15];
        param_1[0x246] = param_1[0x16];
        param_1[0x247] = param_1[0x17];
        param_1[0x248] = (int)piStack_2a8;
        param_1[0x249] = (int)fStack_2a4;
        param_1[0x24a] = (int)unaff_EDI;
        param_1[0x24b] = 0;
        param_1[0x14] = (int)((float)param_1[0x14] + (float)piStack_2a8);
        param_1[0x15] = (int)((float)param_1[0x15] + fStack_2a4);
        param_1[0x16] = (int)(unaff_EDI + (float)param_1[0x16]);
        param_1[0x17] = (int)((float)param_1[0x17] + 0.0);
        param_1[0x2e4] = (int)((float)puStack_2b0 * 0.004 + (float)param_1[0x2e4]);
        fVar7 = (float10)FUN_00dde300(0x3f000000,0x3f800000);
        D3DXMatrixRotationZ(&fStack_208,
                            (float)((float10)(float)puStack_2b0 * (float10)0.13962634 * fVar7));
        D3DXMatrixMultiply(piVar1,auStack_210,piVar1);
        param_1[0x10] = param_1[0x14];
        param_1[0x11] = param_1[0x15];
        param_1[0x12] = param_1[0x16];
        FUN_00acc460(piVar2,&pfStack_2bc,0x3e4ccccd,(float)puVar9 * 0.31415927,1);
        fVar4 = (float)param_1[0x2fc];
        param_1[0x2fc] = (int)(fVar4 - (float)puVar9);
        if (0.0 <= fVar4 - (float)puVar9) {
          fStack_2ac = (float)param_1[0x244];
          piStack_2a8 = (int *)param_1[0x245];
          fStack_2a4 = (float)param_1[0x246];
          fStack_26c = (float)param_1[0x14] - fStack_2ac;
          fStack_268 = (float)param_1[0x15] - (float)piStack_2a8;
          fStack_264 = (float)param_1[0x16] - fStack_2a4;
          fStack_260 = (float)param_1[0x17] - (float)param_1[0x247];
          uVar6 = FUN_009f8b40();
          FUN_00acb320(&fStack_2ac,0x3f000000,&fStack_26c,uVar6);
          return;
        }
        break;
      default:
        goto switchD_00adab0c_default;
      }
    }
    param_1[0x186] = 3;
    return;
  }
switchD_00adab0c_default:
  return;
}

// 00ADB1F0  FUN_00adb1f0  size=365  [callgraph]
void __fastcall FUN_00adb1f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar2 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar1);
  if (iVar2 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    FUN_00acb020(iVar2,0x3dcccccd,0x3cf5c28f,0xffffffff);
    uVar1 = FUN_00a8d2a0();
    iVar2 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      *(undefined4 *)(iVar2 + 0x594) = 0x3e4ccccd;
      *(undefined4 *)(iVar2 + 0x590) = 0x3da3d70a;
      *(undefined4 *)(iVar2 + 0x580) = 0xbfc90fdb;
      *(undefined4 *)(iVar2 + 0x584) = 0;
      *(undefined4 *)(iVar2 + 0x588) = 0;
      *(undefined4 *)(iVar2 + 0x58c) = local_164;
      local_170 = 0;
      local_16c = 0;
      local_168 = 0x3da3d70a;
      FUN_00d77c90(&local_170);
      FUN_00a93a00(iVar2,uVar1);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    uVar3 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0,uVar1,uVar3);
    FUN_00dffb20(param_1 + 0xdb0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
  }
  return;
}

// 00ADB360  FUN_00adb360  size=1474  [callgraph]
void __fastcall FUN_00adb360(int *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  char *pcStack_10c;
  undefined1 **ppuStack_108;
  undefined1 **ppuStack_104;
  int *piStack_100;
  float fStack_fc;
  undefined1 *puStack_f8;
  int *piStack_f4;
  undefined1 *puStack_f0;
  undefined1 *puStack_ec;
  float fStack_e8;
  int *piStack_e4;
  float fStack_d4;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 local_90 [16];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [116];
  
  piStack_e4 = (int *)0xadb37c;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    piStack_e4 = (int *)0xadb387;
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      param_1[0x2d4] = *(int *)(iVar3 + 0x50);
      param_1[0x2d5] = *(int *)(iVar3 + 0x54);
      param_1[0x2d6] = *(int *)(iVar3 + 0x58);
      param_1[0x2d7] = *(int *)(iVar3 + 0x5c);
      piStack_e4 = (int *)(int)(short)param_1[0x2f5];
      fStack_e8 = 1.595202e-38;
      iVar3 = FUN_00a12210();
      if ((-1 < (short)param_1[0x2f5]) && (iVar3 != 0)) {
        param_1[0x2d4] = *(int *)(iVar3 + 0x40);
        param_1[0x2d5] = *(int *)(iVar3 + 0x44);
        param_1[0x2d6] = *(int *)(iVar3 + 0x48);
        param_1[0x2d7] = *(int *)(iVar3 + 0x4c);
      }
      goto LAB_00adb3fd;
    }
  }
  piStack_e4 = (int *)0xadb3fd;
  FUN_00a7c950();
LAB_00adb3fd:
  piVar1 = param_1 + 4;
  fStack_e8 = 0.0;
  puStack_ec = local_90;
  puStack_f0 = (undefined1 *)0xadb40d;
  piStack_e4 = piVar1;
  D3DXMatrixInverse();
  puStack_f0 = auStack_9c;
  puStack_f8 = auStack_ac;
  fStack_fc = 1.5952162e-38;
  piStack_f4 = param_1 + 0x2d4;
  D3DXVec3TransformNormal();
  fStack_fc = 1.5952237e-38;
  fVar5 = (float10)(**(code **)(*param_1 + 0x24))();
  puStack_ec = (undefined1 *)(float)fVar5;
  fStack_fc = 1.595225e-38;
  piVar4 = (int *)FUN_00c13920();
  fStack_fc = 0.0;
  piStack_100 = (int *)0xadb46d;
  iVar3 = (**(code **)(*piVar4 + 0x28))();
  if (iVar3 != 0) {
    piStack_100 = (int *)0xadb478;
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      piStack_100 = (int *)0xadb483;
      iVar3 = FUN_00b8c050();
      if (iVar3 != 0) {
        puStack_f0 = (undefined1 *)((float)puStack_f0 * 0.5);
        piStack_100 = (int *)0xadb49a;
        piVar4 = (int *)FUN_00c13920();
        piStack_100 = (int *)0x0;
        ppuStack_104 = (undefined1 **)0xadb4a5;
        iVar3 = (**(code **)(*piVar4 + 0x28))();
        if (iVar3 != 0) {
          piStack_100 = (int *)0xadb4b0;
          iVar3 = FUN_00a7c8a0();
          if (iVar3 != 0) {
            piStack_100 = (int *)0xadb4bb;
            iVar3 = FUN_00b7e570();
            if (iVar3 != 0) {
              puStack_f0 = (undefined1 *)((float)puStack_f0 * 0.1);
            }
          }
        }
      }
    }
  }
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x186] = 1;
    param_1[0x360] = 0x41200000;
    piStack_100 = (int *)0xadb514;
    FUN_00adb1f0();
    param_1[0x430] = 0;
    param_1[0x431] = 0;
    param_1[0x432] = 0;
    param_1[0x483] = 0x32;
  case 1:
    puStack_ec = (undefined1 *)0x0;
    fStack_e8 = 0.0;
    ppuStack_108 = &puStack_ec;
    piStack_e4 = (int *)((float)puStack_f0 * (float)param_1[0x2e4]);
    pcStack_10c = (char *)0xadb558;
    ppuStack_104 = ppuStack_108;
    piStack_100 = piVar1;
    D3DXVec3TransformNormal();
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)param_1[0x14] + (float)puStack_f8);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)piStack_f4);
    param_1[0x16] = (int)((float)puStack_f0 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)puStack_ec + (float)param_1[0x17]);
    pcStack_10c = (char *)0xadb5b3;
    fVar5 = (float10)FUN_00fdc1f0();
    fVar6 = (float10)fStack_fc;
    param_1[0x2e4] = (int)(float)((float10)0.01 * fVar6 + fVar5 * (float10)(float)param_1[0x2e4]);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)(float)((float10)(float)param_1[0x2fc] - fVar6);
    fVar2 = (float)param_1[0x360];
    param_1[0x360] = (int)(float)((float10)fVar2 - fVar6);
    if ((float10)fVar2 - fVar6 < (float10)0) {
      param_1[0x186] = 2;
    }
    fStack_e8 = (float)param_1[0x244];
    pcStack_10c = "Bullet";
    piStack_e4 = (int *)param_1[0x245];
    FUN_0090fa30(param_1 + 0x449,0,&fStack_e8,0x3f000000,&stack0xffffff28,param_1[0x2e7] << 0x10 | 5
                );
    return;
  case 2:
    break;
  case 3:
    piStack_100 = (int *)0xadb901;
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  default:
    return;
  }
  ppuStack_108 = &puStack_ec;
  puStack_ec = (undefined1 *)((float)param_1[0x430] * (float)puStack_f0);
  fStack_e8 = (float)param_1[0x431] * (float)puStack_f0;
  piStack_e4 = (int *)((float)puStack_f0 * (float)param_1[0x2e4]);
  pcStack_10c = (char *)0xadb6d8;
  ppuStack_104 = ppuStack_108;
  piStack_100 = piVar1;
  D3DXVec3TransformNormal();
  pcStack_10c = (char *)0xadb6e9;
  fVar5 = (float10)FUN_00fdc1f0();
  param_1[0x430] = (int)(float)((float10)(float)param_1[0x430] * fVar5);
  param_1[0x431] = (int)(float)(fVar5 * (float10)(float)param_1[0x431]);
  pcStack_10c = (char *)0x3d19999a;
  fVar5 = (float10)FUN_00dde300(0xbd19999a);
  param_1[0x430] =
       (int)(float)(fVar5 * (float10)(float)param_1[0x3c8] + (float10)(float)param_1[0x430]);
  pcStack_10c = (char *)0x3d19999a;
  fVar5 = (float10)FUN_00dde300(0xbd19999a);
  param_1[0x431] =
       (int)(float)(fVar5 * (float10)(float)param_1[0x3c8] + (float10)(float)param_1[0x431]);
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x14] = (int)((float)param_1[0x14] + (float)puStack_f8);
  param_1[0x15] = (int)((float)param_1[0x15] + (float)piStack_f4);
  param_1[0x16] = (int)((float)puStack_f0 + (float)param_1[0x16]);
  param_1[0x17] = (int)((float)puStack_ec + (float)param_1[0x17]);
  pcStack_10c = (char *)0xadb7c2;
  fVar5 = (float10)FUN_00fdc1f0();
  puVar9 = auStack_78;
  param_1[0x2e4] =
       (int)(float)((float10)0.025999999 * (float10)fStack_fc +
                   fVar5 * (float10)(float)param_1[0x2e4]);
  pcStack_10c = (char *)(float)((float10)fStack_fc * (float10)0.05235988);
  D3DXMatrixRotationZ();
  D3DXMatrixMultiply(piVar1,auStack_80,piVar1);
  param_1[0x10] = param_1[0x14];
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  if (!NAN(fStack_d4) && 1.0 < fStack_d4 != (fStack_d4 == 1.0)) {
    uVar8 = 1;
    uVar7 = 0x3d64c388;
    fVar5 = (float10)FUN_00fdc1f0(0x3d64c388,1);
    FUN_00acc460(param_1 + 0x2d4,&pcStack_10c,(float)fVar5,uVar7,uVar8);
  }
  fVar2 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar2 - (float)puVar9);
  if (0.0 <= fVar2 - (float)puVar9) {
    fStack_fc = (float)param_1[0x244];
    puStack_f8 = (undefined1 *)param_1[0x245];
    piStack_f4 = (int *)param_1[0x246];
    puStack_f0 = (undefined1 *)param_1[0x247];
    puStack_ec = (undefined1 *)((float)param_1[0x14] - fStack_fc);
    fStack_e8 = (float)param_1[0x15] - (float)puStack_f8;
    piStack_e4 = (int *)((float)param_1[0x16] - (float)piStack_f4);
    FUN_00acb320(&fStack_fc,0x3f000000,&puStack_ec,param_1[0x2e7]);
    return;
  }
  param_1[0x186] = 3;
  return;
}

// 00ADB940  FUN_00adb940  size=70  [callgraph]
void __fastcall FUN_00adb940(int *param_1)

{
  int iVar1;
  
  if (param_1[0x139] == 0) {
    iVar1 = FUN_00ad1e00(0,0);
    if ((iVar1 != 0) || (param_1[0x300] != 0)) {
      FUN_00acc0a0();
    }
    iVar1 = (**(code **)(*param_1 + 0x308))(1,0);
    if (iVar1 != 0) {
      FUN_00acc0a0();
      return;
    }
  }
  return;
}

// 00ADB990  FUN_00adb990  size=371  [callgraph]
void __fastcall FUN_00adb990(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar2 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar1);
  if (iVar2 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    FUN_00acb020(iVar2,0x3f000000,0x3e4ccccd,0xffffffff);
    uVar1 = FUN_00a8d2a0();
    iVar2 = CollisionCapsule::CollisionCapsule(0,*(undefined4 *)(param_1 + 0xb9c),0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      *(undefined4 *)(iVar2 + 0x594) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0x590) = 0x3e4ccccd;
      *(undefined4 *)(iVar2 + 0x580) = 0xbfc90fdb;
      *(undefined4 *)(iVar2 + 0x584) = 0;
      *(undefined4 *)(iVar2 + 0x588) = 0;
      *(undefined4 *)(iVar2 + 0x58c) = local_164;
      local_170 = 0;
      local_16c = 0;
      local_168 = 0x3e800000;
      FUN_00d77c90(&local_170);
      FUN_00a93a00(iVar2,uVar1);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    uVar3 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(1,uVar1,uVar3);
    FUN_00dffb20(param_1 + 0xdb0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
  }
  return;
}

// 00ADBB10  FUN_00adbb10  size=123  [callgraph]
void __fastcall FUN_00adbb10(int *param_1)

{
  int iVar1;
  
  if (param_1[0x139] == 0) {
    iVar1 = FUN_00ad1e00(0,0);
    if ((iVar1 != 0) || (param_1[0x300] != 0)) {
      FUN_00acc2f0(0x43340000,0);
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
    }
    iVar1 = (**(code **)(*param_1 + 0x308))(1,0);
    if (iVar1 != 0) {
      FUN_00acc2f0(0x43340000,0);
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
    }
  }
  return;
}

// 00ADBB90  FUN_00adbb90  size=559  [callgraph]
void __fastcall FUN_00adbb90(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 uVar7;
  int iStack_170;
  undefined1 auStack_16c [360];
  
  uVar2 = CollisionAttackData::CollisionAttackData((int *)(param_1 + 0x940));
  piVar3 = (int *)CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),uVar2);
  if (piVar3 != (int *)0x0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,0);
    pcVar1 = *(code **)(*piVar3 + 0x20);
    piVar3[0xe0] = *(int *)(param_1 + 0x940);
    piVar3[0xe3] = 1;
    (*pcVar1)(0x1e,*(undefined4 *)(param_1 + 0xb9c),0);
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
    piVar3[0x165] = 0x40733333;
    if (DAT_018b9174 == 0x610) {
      piVar3[0x15c] = 0;
      piVar3[0x15d] = 0;
      piVar3[0x15e] = 0x3fcccccd;
      piVar3[0x15f] = iStack_170;
      piVar3[0x164] = 0x3f19999a;
    }
    else {
      piVar3[0x164] = 0x3ecccccd;
      piVar3[0x160] = 0;
      piVar3[0x161] = 0;
      piVar3[0x162] = -0x4036f025;
      piVar3[0x163] = iStack_170;
      piVar3[0x15c] = -0x40000000;
      piVar3[0x15d] = 0;
      piVar3[0x15e] = -0x41000000;
      piVar3[0x15f] = iStack_170;
    }
    FUN_00a8c370(piVar3,*(undefined4 *)(param_1 + 0x760));
    FUN_00d7b0f0();
    FUN_00d7b890();
    if (*(int *)(param_1 + 0x8e8) != 0) {
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        uVar2 = 5;
        if (DAT_018b9174 == 0x610) {
          uVar2 = 0x14;
        }
        uVar7 = 0;
        uVar5 = FUN_00a7c8a0(0);
        FUN_004039a0(uVar2,uVar5,uVar7);
        FUN_00dffb20(param_1 + 0xdb0);
        FUN_00e030a0(param_1,0);
        iVar4 = FUN_00a7c8a0();
        FUN_00a8c8b0(*(undefined4 *)(iVar4 + 0x4b0),auStack_16c);
        iVar4 = FUN_00a7c8a0();
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar4 + 0x94);
        if (DAT_018b9174 == 0x610) {
          fVar6 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x98) + 1.5707964);
          *(float *)(param_1 + 0x98) = (float)fVar6;
        }
      }
    }
    FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  }
  return;
}

// 00ADBDC0  FUN_00adbdc0  size=1108  [callgraph]
void __fastcall FUN_00adbdc0(int *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float unaff_EDI;
  float10 fVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  float fStack_c0;
  int *piStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [24];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  uStack_b4 = 0;
  fStack_b8 = 1.4013e-45;
  piStack_bc = (int *)0xadbdde;
  iVar3 = (**(code **)(*param_1 + 0x308))();
  if (iVar3 != 0) {
    if (param_1[0x23a] != 0) {
      piStack_bc = (int *)0xadbdf1;
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        piStack_bc = (int *)0x3f800000;
        fStack_c0 = 1.0;
        uVar5 = 5;
        FUN_00a7c8a0(5);
        FUN_00a8ca50(uVar5);
      }
    }
    piStack_bc = (int *)0xadbe1c;
    FUN_00acc0a0();
    return;
  }
  piStack_bc = (int *)0xadbe29;
  Behavior::setSeqAtk();
  piStack_bc = (int *)0xadbe34;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    piStack_bc = (int *)0xadbe3f;
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      param_1[0x2d4] = *(int *)(iVar3 + 0x50);
      param_1[0x2d5] = *(int *)(iVar3 + 0x54);
      param_1[0x2d6] = *(int *)(iVar3 + 0x58);
      param_1[0x2d7] = *(int *)(iVar3 + 0x5c);
      piStack_bc = (int *)(int)(short)param_1[0x2f5];
      fStack_c0 = 1.5955865e-38;
      iVar3 = FUN_00a12210();
      if ((-1 < (short)param_1[0x2f5]) && (iVar3 != 0)) {
        param_1[0x2d4] = *(int *)(iVar3 + 0x40);
        param_1[0x2d5] = *(int *)(iVar3 + 0x44);
        param_1[0x2d6] = *(int *)(iVar3 + 0x48);
        param_1[0x2d7] = *(int *)(iVar3 + 0x4c);
      }
      goto LAB_00adbeb5;
    }
  }
  piStack_bc = (int *)0xadbeb5;
  FUN_00a7c950();
LAB_00adbeb5:
  piVar1 = param_1 + 4;
  fStack_c0 = 0.0;
  puVar6 = auStack_58;
  piStack_bc = piVar1;
  D3DXMatrixInverse();
  D3DXVec3TransformNormal(auStack_74);
  fStack_80 = fStack_40 + fStack_80;
  fStack_7c = fStack_3c + fStack_7c;
  fStack_78 = fStack_38 + fStack_78;
  fVar4 = (float10)(**(code **)(*param_1 + 0x24))();
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x41200000;
    param_1[0x186] = 1;
    FUN_00adbb90();
    if (DAT_018b9174 == 0x610) {
      param_1[0x2e4] = 0x3e4ccccd;
    }
    else {
      param_1[0x2e4] = 0x3f800000;
    }
    break;
  case 1:
    break;
  case 2:
    fStack_c0 = 0.0;
    piStack_bc = (int *)0x0;
    fStack_b8 = (float)(fVar4 * (float10)(float)param_1[0x2e4]);
    D3DXVec3TransformNormal(&fStack_c0,&fStack_c0,piVar1);
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)param_1[0x14] + (float)(param_1 + 0x2d4));
    param_1[0x15] = (int)((float)auStack_64 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)puVar6);
    param_1[0x17] = (int)((float)param_1[0x17] + fStack_c0);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    fVar2 = (float)param_1[0x2fc];
    param_1[0x2fc] = (int)(fVar2 - unaff_EDI);
    if (0.0 <= fVar2 - unaff_EDI) {
      fStack_9c = (float)param_1[0x14] - (float)param_1[0x244];
      fStack_98 = (float)param_1[0x15] - (float)param_1[0x245];
      fStack_94 = (float)param_1[0x16] - (float)param_1[0x246];
      fStack_90 = (float)param_1[0x17] - (float)param_1[0x247];
      uVar5 = FUN_009f8b40();
      FUN_00acb320(&stack0xffffff54,0x3f000000,&fStack_9c,uVar5);
      return;
    }
    param_1[0x186] = 3;
    return;
  case 3:
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  default:
    return;
  }
  fStack_c0 = 0.0;
  piStack_bc = (int *)0x0;
  fStack_b8 = (float)param_1[0x2e4] * (float)fVar4;
  D3DXVec3TransformNormal(&fStack_c0,&fStack_c0,piVar1);
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x14] = (int)((float)param_1[0x14] + (float)(param_1 + 0x2d4));
  param_1[0x15] = (int)((float)auStack_64 + (float)param_1[0x15]);
  param_1[0x16] = (int)((float)param_1[0x16] + (float)puVar6);
  param_1[0x17] = (int)((float)param_1[0x17] + fStack_c0);
  param_1[0x10] = param_1[0x14];
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  fVar2 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar2 - unaff_EDI);
  param_1[0x360] = (int)((float)param_1[0x360] - unaff_EDI);
  if (fVar2 - unaff_EDI < 0.0) {
    param_1[0x186] = 2;
  }
  fStack_9c = (float)param_1[0x14] - (float)param_1[0x244];
  fStack_98 = (float)param_1[0x15] - (float)param_1[0x245];
  fStack_94 = (float)param_1[0x16] - (float)param_1[0x246];
  fStack_90 = (float)param_1[0x17] - (float)param_1[0x247];
  iVar3 = FUN_009f8b40();
  FUN_0090fa30(param_1 + 0x449,0,&stack0xffffff54,0x3f000000,&fStack_9c,iVar3 << 0x10 | 5,"Bullet");
  return;
}

// 00ADC230  FUN_00adc230  size=196  [callgraph]
void __fastcall FUN_00adc230(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_160 [348];
  
  uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar2 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar1);
  if (iVar2 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(1,0);
    FUN_00acb020(iVar2,0x40000000,0x3e99999a,0xffffffff);
    uVar3 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0,uVar1,uVar3);
    FUN_00dffb20(param_1 + 0xdb0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    FUN_00acb220(100,0x3ecccccd,0x3d4ccccd);
  }
  return;
}

// 00ADC300  FUN_00adc300  size=1509  [callgraph]
void __fastcall FUN_00adc300(int *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  float unaff_EBX;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined1 **ppuVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char *pcStack_130;
  float *pfStack_12c;
  float *pfStack_128;
  int *piStack_124;
  undefined1 *puStack_120;
  int *piStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  float fStack_110;
  int *piStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined1 auStack_d4 [4];
  float fStack_d0;
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [20];
  undefined1 auStack_84 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  fStack_104 = 0.0;
  fStack_108 = 1.4013e-45;
  piStack_10c = (int *)0xadc31f;
  iVar3 = (**(code **)(*param_1 + 0x308))();
  if (iVar3 != 0) {
    piStack_10c = (int *)0xadc32a;
    FUN_00acc0a0();
    return;
  }
  piStack_10c = (int *)0xadc33c;
  iVar3 = FUN_00a81330();
  iVar6 = 0;
  if (iVar3 == 0) {
LAB_00adc3b6:
    piStack_10c = (int *)0xadc3c1;
    FUN_00a7c950();
  }
  else {
    piStack_10c = (int *)0xadc349;
    iVar6 = FUN_00a7c8a0();
    if (iVar6 == 0) goto LAB_00adc3b6;
    param_1[0x2d4] = *(int *)(iVar6 + 0x50);
    param_1[0x2d5] = *(int *)(iVar6 + 0x54);
    param_1[0x2d6] = *(int *)(iVar6 + 0x58);
    param_1[0x2d7] = *(int *)(iVar6 + 0x5c);
    piStack_10c = (int *)(int)(short)param_1[0x2f5];
    fStack_110 = 1.5957676e-38;
    iVar3 = FUN_00a12210();
    if ((-1 < (short)param_1[0x2f5]) && (iVar3 != 0)) {
      param_1[0x2d4] = *(int *)(iVar3 + 0x40);
      param_1[0x2d5] = *(int *)(iVar3 + 0x44);
      param_1[0x2d6] = *(int *)(iVar3 + 0x48);
      param_1[0x2d7] = *(int *)(iVar3 + 0x4c);
    }
  }
  piVar1 = param_1 + 4;
  fStack_110 = 0.0;
  puStack_114 = auStack_98;
  puStack_118 = (undefined1 *)0xadc3d1;
  piStack_10c = piVar1;
  D3DXMatrixInverse();
  puStack_118 = auStack_a4;
  piStack_11c = param_1 + 0x2d4;
  puStack_120 = auStack_d4;
  piStack_124 = (int *)0xadc3e7;
  D3DXVec3TransformNormal();
  fStack_e0 = fStack_80 + fStack_e0;
  fStack_dc = fStack_7c + fStack_dc;
  fStack_d8 = fStack_78 + fStack_d8;
  piStack_124 = (int *)0xadc41d;
  fVar7 = (float10)(**(code **)(*param_1 + 0x24))();
  puStack_114 = (undefined1 *)(float)fVar7;
  if (param_1[0x3cc] == 0) {
LAB_00adc434:
    if (iVar6 != 0) goto LAB_00adc44a;
  }
  else {
    piStack_124 = (int *)0xadc430;
    iVar3 = FUN_00c15090();
    if (iVar3 == 0) goto LAB_00adc434;
  }
  param_1[0x187] = 1;
LAB_00adc44a:
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x40a00000;
    param_1[0x186] = 1;
    piStack_124 = (int *)0xadc481;
    FUN_00adc230();
  case 1:
    fStack_110 = 0.0;
    pfStack_12c = &fStack_110;
    piStack_10c = (int *)0x0;
    fStack_108 = (float)param_1[0x2e4] * (float)puStack_114;
    pcStack_130 = (char *)0xadc4a7;
    pfStack_128 = pfStack_12c;
    piStack_124 = piVar1;
    D3DXVec3TransformNormal();
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)param_1[0x14] + (float)piStack_11c);
    param_1[0x15] = (int)((float)puStack_118 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)puStack_114);
    param_1[0x17] = (int)((float)param_1[0x17] + fStack_110);
    pcStack_130 = (char *)0xadc502;
    fVar7 = (float10)FUN_00fdc1f0();
    fVar8 = (float10)(float)puStack_120;
    param_1[0x2e4] = (int)(float)(fVar7 * (float10)(float)param_1[0x2e4] + fVar8 * (float10)0.01);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)(float)((float10)(float)param_1[0x2fc] - fVar8);
    fVar2 = (float)param_1[0x360];
    param_1[0x360] = (int)(float)((float10)fVar2 - fVar8);
    if ((float10)fVar2 - fVar8 < (float10)0) {
      param_1[0x360] = (int)(float)(float10)0;
      param_1[0x186] = 2;
    }
    if (((param_1[0x24c] != 0x1a) && (param_1[0x24c] != 0x26)) &&
       ((float10)(float)param_1[0x360] < (float10)15.0)) {
      pcStack_130 = (char *)0x1;
      FUN_00acc460(param_1 + 0x2d4,&piStack_11c,
                   (float)(((float10)15.0 - (float10)(float)param_1[0x360]) * (float10)0.01),
                   (float)(fVar8 * (float10)0.17453292));
      fVar8 = (float10)(float)puStack_120;
    }
    if (param_1[0x24c] == 0x26) {
      param_1[0x15] = (int)(float)((float10)(float)param_1[0x15] - fVar8 * (float10)0.025);
    }
    piStack_10c = (int *)((float)param_1[0x14] - (float)param_1[0x244]);
    fStack_108 = (float)param_1[0x15] - (float)param_1[0x245];
    fStack_104 = (float)param_1[0x16] - (float)param_1[0x246];
    pcStack_130 = (char *)0xadc63a;
    iVar3 = FUN_009f8b40();
    pcStack_130 = "Bullet";
    FUN_0090fa30(param_1 + 0x449,0,&stack0xffffff04,0x3f000000,&piStack_10c,iVar3 << 0x10 | 5);
    return;
  case 2:
    break;
  case 3:
    piStack_124 = (int *)0xadc8d2;
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
  default:
    return;
  }
  fStack_110 = 0.0;
  pfStack_12c = &fStack_110;
  piStack_10c = (int *)((float)puStack_114 * 0.02);
  fStack_108 = (float)puStack_114 * (float)param_1[0x2e4];
  pcStack_130 = (char *)0xadc6a2;
  pfStack_128 = pfStack_12c;
  piStack_124 = piVar1;
  D3DXVec3TransformNormal();
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x14] = (int)((float)param_1[0x14] + (float)piStack_11c);
  param_1[0x15] = (int)((float)puStack_118 + (float)param_1[0x15]);
  param_1[0x16] = (int)((float)param_1[0x16] + (float)puStack_114);
  param_1[0x17] = (int)((float)param_1[0x17] + fStack_110);
  pcStack_130 = (char *)0xadc6fd;
  fVar7 = (float10)FUN_00fdc1f0();
  fVar7 = (float10)0.03 * (float10)(float)puStack_120 + fVar7 * (float10)(float)param_1[0x2e4];
  param_1[0x2e4] = (int)(float)fVar7;
  if ((param_1[0x24c] == 0x26) && ((float10)0.5 < fVar7)) {
    param_1[0x2e4] = (int)(float)(float10)0.5;
  }
  fVar7 = (float10)(float)puStack_120 * (float10)0.05235988;
  pfVar10 = &fStack_7c;
  fStack_d0 = (float)fVar7;
  pcStack_130 = (char *)(float)fVar7;
  D3DXMatrixRotationZ();
  D3DXMatrixMultiply(piVar1,auStack_84,piVar1);
  param_1[0x10] = param_1[0x14];
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  if ((!NAN(unaff_EBX) && 5.0 < unaff_EBX != (unaff_EBX == 5.0)) && (0 < param_1[0x187])) {
    FUN_00acc460(param_1 + 0x2d4,&pcStack_130,0x3c23d70a,uStack_e4,1);
  }
  fVar2 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar2 - (float)pfVar10);
  if (0.0 <= fVar2 - (float)pfVar10) {
    fStack_110 = (float)param_1[0x244];
    piStack_10c = (int *)param_1[0x245];
    fStack_108 = (float)param_1[0x246];
    fStack_104 = (float)param_1[0x247];
    puStack_120 = (undefined1 *)((float)param_1[0x14] - fStack_110);
    piStack_11c = (int *)((float)param_1[0x15] - (float)piStack_10c);
    puStack_118 = (undefined1 *)((float)param_1[0x16] - fStack_108);
    puStack_114 = (undefined1 *)((float)param_1[0x17] - fStack_104);
    uVar4 = FUN_009f8b40();
    FUN_00acb320(&fStack_110,0x3f000000,&puStack_120,uVar4);
    fStack_e0 = 0.0;
    fStack_dc = 0.0;
    uVar14 = 1;
    fStack_d8 = 2.0;
    ppuVar11 = &puStack_120;
    pfVar10 = &fStack_e0;
    puStack_120 = (undefined1 *)0xbfc90fdb;
    piStack_11c = (int *)0x0;
    puStack_118 = (undefined1 *)0x0;
    uVar13 = 0x40400000;
    uVar12 = 0x3f19999a;
    uVar9 = 0xffffffff;
    uVar5 = FUN_00a7c7f0(0xffffffff,pfVar10,ppuVar11,0x3f19999a,0x40400000,1);
    uVar4 = extraout_ECX;
    FUN_00a7c940(uVar5);
    FUN_00c630c0(uVar4,uVar9,pfVar10,ppuVar11,uVar12,uVar13,uVar14);
    return;
  }
  param_1[0x186] = 3;
  return;
}

// 00ADC900  FUN_00adc900  size=102  [callgraph]
void __fastcall FUN_00adc900(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00ad1e00(0,0);
    if ((iVar1 != 0) || (*(int *)(param_1 + 0xc00) != 0)) {
      (**(code **)(*(int *)(param_1 + 0xdb0) + 8))(0,0,0);
      FUN_00acc2f0(0x43340000,0);
      *(undefined4 *)(param_1 + 0xf10) = 1;
      *(undefined4 *)(param_1 + 0x4e4) = 1;
    }
  }
  return;
}

// 00ADC970  FUN_00adc970  size=699  [callgraph]
void __fastcall FUN_00adc970(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iStack_170;
  undefined1 auStack_16c [360];
  
  uVar3 = CollisionAttackData::CollisionAttackData((int *)(param_1 + 0x940));
  piVar4 = (int *)CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar3);
  if (piVar4 != (int *)0x0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(1,0);
    pcVar2 = *(code **)(*piVar4 + 0x20);
    piVar4[0xe0] = *(int *)(param_1 + 0x940);
    piVar4[0xe3] = 1;
    (*pcVar2)(0x1e,*(undefined4 *)(param_1 + 0xb9c),0);
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
    piVar4[0x165] = 0x3e99999a;
    piVar4[0x164] = 0x3f19999a;
    piVar4[0x160] = 0;
    piVar4[0x161] = 0;
    piVar4[0x162] = 0;
    piVar4[0x163] = iStack_170;
    piVar4[0x15c] = 0;
    piVar4[0x15d] = 0;
    piVar4[0x15e] = 0;
    piVar4[0x15f] = iStack_170;
    FUN_00a8c370(piVar4,*(undefined4 *)(param_1 + 0x760));
    FUN_00d7b0f0();
    piVar4[0xe3] = 1;
    FUN_00d7b890();
    uVar3 = FUN_00a8d2a0();
    iVar5 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      *(undefined4 *)(iVar5 + 0x594) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x590) = 0x3f000000;
      *(undefined4 *)(iVar5 + 0x580) = 0xbfc90fdb;
      *(undefined4 *)(iVar5 + 0x584) = 0;
      *(undefined4 *)(iVar5 + 0x588) = 0;
      *(int *)(iVar5 + 0x58c) = iStack_170;
      FUN_00d77c90(&stack0xfffffe84);
      FUN_00a93a00(iVar5,uVar3);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    uVar10 = 0;
    uVar3 = FUN_00a7c8a0(0);
    FUN_004039a0(0,uVar3,uVar10);
    FUN_00dffb20(param_1 + 0xdb0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_16c);
    FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
    piVar4 = (int *)FUN_00900480();
    uVar3 = (**(code **)(*piVar4 + 4))
                      (param_1 + 0x50,0x40133333,0x1d,*(undefined4 *)(param_1 + 0xb9c),0);
    lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar3);
    FUN_00900bd0();
    piVar4 = (int *)FUN_00900480();
    puVar6 = (undefined4 *)FUN_009f8b60();
    uVar3 = (**(code **)(*piVar4 + 4))(param_1 + 0x50,0x3f800000,0xe,*puVar6,0);
    lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar3);
    FUN_00900bd0();
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar9 = 0;
      do {
        iVar8 = *(int *)(param_1 + 800) + iVar9;
        iVar7 = *(int *)(*(int *)(iVar8 + 0x60) + 0x40);
        if (iVar7 != 0) {
          iVar7 = FUN_00fdbbd0(iVar7,&DAT_0164ea4c);
          if (iVar7 != 0) {
            puVar1 = (uint *)(iVar8 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar9 = iVar9 + 0x70;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
  }
  return;
}

// 00ADCC30  FUN_00adcc30  size=302  [callgraph]
void __fastcall FUN_00adcc30(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar2 = CollisionAttackData::CollisionAttackData((int *)(param_1 + 0x940));
  piVar3 = (int *)CollisionSphere::CollisionSphere(2,*(undefined4 *)(param_1 + 0xb9c),uVar2);
  if (piVar3 != (int *)0x0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    pcVar1 = *(code **)(*piVar3 + 0x20);
    piVar3[0xe0] = *(int *)(param_1 + 0x940);
    piVar3[0xe3] = 1;
    (*pcVar1)(0x1e,*(undefined4 *)(param_1 + 0xb9c),0);
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
    piVar3[0x144] = 0x40200000;
    FUN_00a8c370(piVar3,*(undefined4 *)(param_1 + 0x760));
    FUN_00d7b0f0();
    FUN_00d7b890();
    uVar4 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(0,uVar2,uVar4);
    FUN_00dffb20(param_1 + 0xdb0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),&stack0xfffffe94);
    FUN_00e01eb0(param_1 + 0xe60);
    FUN_00e02d70(param_1,1,param_1 + 0xb50,&stack0xfffffe94);
    FUN_00acb220(*(undefined4 *)(param_1 + 0x944),0x40800000,0x3d4ccccd);
  }
  return;
}

// 00ADCD60  FUN_00adcd60  size=729  [callgraph]
void __fastcall FUN_00adcd60(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  float10 fVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_1c;
  
  iVar2 = (**(code **)(*param_1 + 0x308))(1,0);
  if (iVar2 != 0) {
    FUN_00acc0a0();
    return;
  }
  fVar5 = (float10)(**(code **)(*param_1 + 0x24))();
  switch(param_1[0x186]) {
  case 0:
    FUN_00adcc30();
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0;
    param_1[0x186] = param_1[0x186] + 1;
    break;
  case 1:
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    fVar6 = (float10)0.0016333333 * fVar5 * (float10)0.01 + (float10)(float)param_1[0x2e4];
    param_1[0x2e4] = (int)(float)fVar6;
    if ((float10)0.45 < fVar6) {
      param_1[0x2e4] = (int)(float)(float10)0.45;
    }
    param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x2e4]);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    fVar1 = (float)param_1[0x2fc];
    param_1[0x2fc] = (int)(float)((float10)fVar1 - fVar5);
    if (((float10)fVar1 - fVar5 < (float10)0) || ((float)param_1[0x11] <= (float)param_1[0x2d5])) {
      param_1[0x186] = 2;
    }
    iStack_58 = param_1[0x244];
    iStack_54 = param_1[0x245];
    iStack_50 = param_1[0x246];
    iStack_4c = param_1[0x247];
    uVar3 = FUN_009f8b40();
    FUN_00acb320(&iStack_58,0x3f19999a,&stack0xffffff98,uVar3);
    uVar10 = 1;
    puVar8 = &stack0xffffff98;
    uVar9 = 0x3fc00000;
    uVar7 = 0xffffffff;
    uVar4 = FUN_00a7c7f0(0xffffffff,puVar8,0x3fc00000,1);
    uVar3 = extraout_ECX;
    FUN_00a7c940(uVar4);
    FUN_00c62fe0(uVar3,uVar7,puVar8,uVar9,uVar10);
    break;
  case 2:
    FUN_00c76f00();
    iStack_48 = param_1[0x14];
    iStack_1c = param_1[0x239];
    iStack_44 = param_1[0x15];
    iStack_40 = param_1[0x16];
    iStack_3c = param_1[0x17];
    uStack_38 = 0;
    uStack_34 = 0x3f800000;
    uStack_30 = 0;
    uStack_2c = iStack_4c;
    (**(code **)(*param_1 + 0x318))(&iStack_48);
    param_1[0x186] = param_1[0x186] + 1;
    goto LAB_00adcf9f;
  case 3:
LAB_00adcf9f:
    (**(code **)(param_1[0x398] + 8))(0,0,0);
    FUN_00eaa840();
    (**(code **)(param_1[0x36c] + 8))(0,0,0);
    FUN_00eaa840();
    param_1[0x2fc] = 0x42f00000;
    FUN_00acc2f0(0x42f00000,0);
    param_1[0x186] = param_1[0x186] + 1;
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
  }
  param_1[0x360] = (int)((float)param_1[0x360] + (float)fVar5);
  return;
}

// 00ADD050  FUN_00add050  size=70  [callgraph]
void __fastcall FUN_00add050(int param_1)

{
  int iVar1;
  
  if (((5.0 <= ABS(*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0xb54))) ||
      (iVar1 = FUN_00ad1e00(0,0), iVar1 == 0)) && (*(int *)(param_1 + 0xc00) == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x618) < 2) {
    *(undefined4 *)(param_1 + 0x618) = 3;
  }
  return;
}

// 00ADD0A0  FUN_00add0a0  size=344  [callgraph]
void __fastcall FUN_00add0a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar2 = CollisionCapsule::CollisionCapsule(5,*(undefined4 *)(param_1 + 0xb9c),uVar1);
  if (iVar2 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(1,1);
    FUN_00acb020(iVar2,0x40200000,0x3e99999a,0xffffffff);
    uVar3 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0,uVar1,uVar3);
    FUN_00dffb20(param_1 + 0xdb0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    uVar1 = FUN_00a8d2a0();
    iVar2 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      *(undefined4 *)(iVar2 + 0x594) = 0x41200000;
      *(undefined4 *)(iVar2 + 0x590) = 0x3ecccccd;
      *(undefined4 *)(iVar2 + 0x580) = 0xbfc90fdb;
      *(undefined4 *)(iVar2 + 0x584) = 0;
      *(undefined4 *)(iVar2 + 0x588) = 0;
      *(undefined4 *)(iVar2 + 0x58c) = local_164;
      local_170 = 0;
      local_16c = 0;
      local_168 = 0x41100000;
      FUN_00d77c90(&local_170);
      FUN_00a93a00(iVar2,uVar1);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
  }
  return;
}

// 00ADD200  FUN_00add200  size=1204  [callgraph]
void __fastcall FUN_00add200(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float unaff_EDI;
  float10 fVar8;
  float10 fVar9;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  iVar6 = (**(code **)(*param_1 + 0x308))(1,0);
  if (iVar6 != 0) {
    FUN_00acc0a0();
    return;
  }
  fVar8 = (float10)(**(code **)(*param_1 + 0x24))();
  fStack_54 = (float)fVar8;
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x41200000;
    param_1[0x186] = 1;
    param_1[0x187] = 0;
    FUN_00add0a0();
    fVar8 = (float10)fStack_54;
  case 1:
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    fStack_40 = (float)(fVar8 * (float10)(float)param_1[0x2e4]);
    D3DXVec3TransformNormal(&fStack_48,&fStack_48,param_1 + 4);
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)param_1[0x14] + fStack_54);
    param_1[0x15] = (int)(fStack_50 + (float)param_1[0x15]);
    param_1[0x16] = (int)(fStack_4c + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x17] + fStack_48);
    fVar8 = (float10)FUN_00fdc1f0();
    fVar9 = (float10)unaff_EDI;
    param_1[0x2e4] = (int)(float)(fVar8 * (float10)(float)param_1[0x2e4] + fVar9 * (float10)0.01);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)(float)((float10)(float)param_1[0x2fc] - fVar9);
    fVar5 = (float)param_1[0x360];
    param_1[0x360] = (int)(float)((float10)fVar5 - fVar9);
    if ((float10)fVar5 - fVar9 < (float10)0) {
      param_1[0x360] = (int)(float)(float10)0;
      param_1[0x186] = 2;
    }
    if ((float10)(float)param_1[0x360] < (float10)15.0) {
      FUN_00acc460(param_1 + 0x2d4,&fStack_54,
                   (float)(((float10)15.0 - (float10)(float)param_1[0x360]) * (float10)0.01),
                   (float)(fVar9 * (float10)0.17453292),1);
    }
    if (param_1[0x24c] == 0x26) {
      param_1[0x15] = (int)((float)param_1[0x15] - unaff_EDI * 0.025);
    }
    fStack_44 = (float)param_1[0x244];
    fStack_40 = (float)param_1[0x245];
    fStack_3c = (float)param_1[0x246];
    fStack_38 = (float)param_1[0x247];
    fStack_34 = (float)param_1[0x14] - fStack_44;
    fStack_30 = (float)param_1[0x15] - fStack_40;
    fStack_2c = (float)param_1[0x16] - fStack_3c;
    fStack_28 = (float)param_1[0x17] - fStack_38;
    iVar6 = FUN_009f8b40();
    FUN_0090fa30(param_1 + 0x449,0,&fStack_44,0x3f000000,&fStack_34,iVar6 << 0x10 | 5,"Bullet");
    return;
  case 2:
    break;
  case 3:
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  default:
    return;
  }
  fStack_48 = 0.0;
  fStack_44 = (float)((float10)0.02 * fVar8);
  fStack_40 = (float)(fVar8 * (float10)(float)param_1[0x2e4]);
  D3DXVec3TransformNormal(&fStack_48,&fStack_48,param_1 + 4);
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x14] = (int)((float)param_1[0x14] + fStack_54);
  param_1[0x15] = (int)(fStack_50 + (float)param_1[0x15]);
  param_1[0x16] = (int)(fStack_4c + (float)param_1[0x16]);
  param_1[0x17] = (int)((float)param_1[0x17] + fStack_48);
  fVar8 = (float10)FUN_00fdc1f0();
  fVar9 = (float10)unaff_EDI;
  param_1[0x2e4] = (int)(float)((float10)0.03 * fVar9 + fVar8 * (float10)(float)param_1[0x2e4]);
  param_1[0x10] = param_1[0x14];
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  if (param_1[0x187] == 0) {
    fVar5 = (float)param_1[0x14];
    pfVar1 = (float *)(param_1 + 0x2d4);
    fVar2 = *pfVar1;
    fVar3 = (float)param_1[0x16];
    fVar4 = (float)param_1[0x2d6];
    FUN_00acc460(pfVar1,&fStack_54,0x3dcccccd,(float)(fVar9 * (float10)0.05235988),1);
    fVar5 = (fVar5 - fVar2) * (fVar5 - fVar2) + (fVar3 - fVar4) * (fVar3 - fVar4);
    if (fVar5 < 25.0 != (fVar5 == 25.0)) {
      *pfVar1 = (float)param_1[0x14];
      param_1[0x2d5] = param_1[0x15];
      param_1[0x2d6] = param_1[0x16];
      param_1[0x2d7] = param_1[0x17];
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x2d5] = (int)((float)param_1[0x2d5] + 1000.0);
    }
  }
  else if (param_1[0x187] == 1) {
    FUN_00acc460(param_1 + 0x2d4,&fStack_54,0x3f000000,(float)(fVar9 * (float10)0.2617994),1);
  }
  fVar5 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar5 - unaff_EDI);
  if (0.0 <= fVar5 - unaff_EDI) {
    fStack_44 = (float)param_1[0x244];
    fStack_40 = (float)param_1[0x245];
    fStack_3c = (float)param_1[0x246];
    fStack_38 = (float)param_1[0x247];
    fStack_34 = (float)param_1[0x14] - fStack_44;
    fStack_30 = (float)param_1[0x15] - fStack_40;
    fStack_2c = (float)param_1[0x16] - fStack_3c;
    fStack_28 = (float)param_1[0x17] - fStack_38;
    uVar7 = FUN_009f8b40();
    FUN_00acb320(&fStack_44,0x3f000000,&fStack_34,uVar7);
    return;
  }
  param_1[0x186] = 3;
  return;
}

// 00ADD6D0  Wpc001::vf308  size=503  [class]
int __thiscall Wpc001::vf308(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  bool bVar5;
  
  uVar4 = 0;
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  if (param_1[0x3c9] != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if (((iVar2 == 0) || (iVar2 = FUN_00a7c8a0(), iVar2 == 0)) ||
       (iVar2 = FUN_00b8c050(), iVar2 == 0)) {
      piVar1 = (int *)param_1[0x19f];
      piVar3 = piVar1 + param_1[0x1a1] * 0x54;
      iVar2 = 0;
      if (piVar1 != piVar3) {
        while( true ) {
          bVar5 = true;
          if ((param_3 != 0) && (bVar5 = (piVar1[0x23] & 0x40000000U) == 0, piVar1[0x25] != 0)) {
            bVar5 = false;
          }
          iVar2 = *piVar1;
          if (((iVar2 != 0) && (iVar2 != 1)) &&
             ((iVar2 != 2 && (((iVar2 != 0x1b0 && (iVar2 != 0x147)) && (bVar5)))))) break;
          piVar1 = piVar1 + 0x54;
          if (piVar1 == piVar3) {
            return 0;
          }
        }
        if (param_2 != 0) {
          param_1[0x14] = piVar1[0x40];
          param_1[0x15] = piVar1[0x41];
          param_1[0x16] = piVar1[0x42];
          param_1[0x17] = piVar1[0x43];
          param_1[0x10] = param_1[0x14];
          param_1[0x11] = param_1[0x15];
          param_1[0x12] = param_1[0x16];
        }
        iVar2 = FUN_00a81330();
        if (iVar2 != 0) {
          uVar4 = FUN_00a7c8a0();
        }
        (**(code **)(*param_1 + 0x198))(uVar4,piVar1,1);
        FUN_00c76f00();
        iVar2 = piVar1[0x42];
        (**(code **)(*param_1 + 0x318))(&stack0xffffffb0);
      }
      return iVar2;
    }
  }
  return 0;
}

// 00ADD8D0  Wpc001::vf30C  size=248  [class]
undefined4 __fastcall Wpc001::vf30C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_retaddr;
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  if (*(int *)(param_1 + 0xf24) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if (((iVar2 == 0) || (iVar2 = FUN_00a7c8a0(), iVar2 == 0)) ||
       (iVar2 = FUN_00b8c050(), iVar2 == 0)) {
      piVar1 = *(int **)(param_1 + 0x67c);
      piVar4 = piVar1 + *(int *)(param_1 + 0x684) * 0x54;
      uVar3 = 0;
      if (piVar1 != piVar4) {
        while (((iVar2 = *piVar1, iVar2 == 0 || (iVar2 == 1)) ||
               ((iVar2 == 2 || ((iVar2 == 0x1b0 || (iVar2 == 0x147))))))) {
          piVar1 = piVar1 + 0x54;
          if (piVar1 == piVar4) {
            return uVar3;
          }
        }
        if (unaff_retaddr != 0) {
          *(int *)(param_1 + 0x50) = piVar1[0x40];
          *(int *)(param_1 + 0x54) = piVar1[0x41];
          *(int *)(param_1 + 0x58) = piVar1[0x42];
          *(int *)(param_1 + 0x5c) = piVar1[0x43];
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x54);
          *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x58);
        }
        iVar2 = FUN_00a81330();
        if (iVar2 != 0) {
          FUN_00a7c8a0();
        }
        uVar3 = 1;
      }
      return uVar3;
    }
  }
  return 0;
}

// 00ADD9D0  FUN_00add9d0  size=875  [between]
/* WARNING: Removing unreachable block (ram,0x00addae9) */
/* WARNING: Removing unreachable block (ram,0x00addbb3) */

void __thiscall FUN_00add9d0(int param_1,int param_2,float param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float unaff_EBX;
  float unaff_EBP;
  int iVar6;
  float unaff_retaddr;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_00a5dc60();
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_0041c8e0(*(int *)(param_2 + 0xc) * 4,&DAT_01b7bd48);
  *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(param_2 + 0xc);
  iVar5 = *(int *)(param_2 + 0xc);
  iVar6 = 0;
  if (iVar5 != 1 && -1 < iVar5 + -1) {
    do {
      iVar3 = *(int *)(param_2 + 4);
      local_38 = *(float *)(iVar3 + iVar6 * 0xc);
      iVar1 = iVar3 + iVar6 * 0xc;
      local_34 = *(float *)(iVar1 + 4);
      local_30 = *(float *)(iVar1 + 8);
      local_2c = *(float *)(iVar1 + 0xc);
      local_28 = *(float *)(iVar1 + 0x10);
      local_24 = *(float *)(iVar1 + 0x14);
      if (iVar6 == iVar5 + -2) {
        local_44 = local_38 - local_2c;
        local_40 = local_34 - local_28;
        local_3c = local_30 - local_24;
      }
      else {
        pfVar2 = (float *)(iVar3 + (iVar6 * 3 + 6) * 4);
        local_44 = local_2c - *pfVar2;
        local_40 = local_28 - pfVar2[1];
        local_3c = local_24 - pfVar2[2];
      }
      fVar4 = local_3c * local_3c + local_44 * local_44 + local_40 * local_40;
      if (fVar4 < 0.0 != (fVar4 == 0.0)) {
        FUN_00dd5650(&DAT_0163d0ac);
        local_44 = 0.0;
        local_40 = 1.0;
        local_3c = 0.0;
      }
      D3DXVec3Normalize(&local_44,&local_44);
      local_28 = unaff_EBP * unaff_retaddr + local_34;
      local_24 = unaff_EBX * unaff_retaddr + local_30;
      fStack_20 = local_44 * unaff_retaddr + local_2c;
      unaff_EBP = local_28 - local_40;
      unaff_EBX = local_24 - local_3c;
      local_44 = fStack_20 - local_38;
      fVar4 = local_44 * local_44 + unaff_EBP * unaff_EBP + unaff_EBX * unaff_EBX;
      if (fVar4 < 0.0 != (fVar4 == 0.0)) {
        FUN_00dd5650(&DAT_0163d0ac);
        unaff_EBP = 0.0;
        unaff_EBX = 1.0;
        local_44 = 0.0;
      }
      D3DXVec3Normalize(&stack0xffffffb4,&stack0xffffffb4);
      if (iVar6 == 0) {
        iVar5 = local_8;
        if (local_8 < local_c) {
          pfVar2 = (float *)(local_10 + local_8 * 0xc);
          if (pfVar2 == (float *)0x0) {
            local_8 = local_8 + 1;
          }
          else {
            *pfVar2 = local_38;
            pfVar2[1] = local_34;
            pfVar2[2] = local_30;
            local_8 = local_8 + 1;
          }
          goto LAB_00addc55;
        }
      }
      else {
LAB_00addc55:
        iVar5 = local_8;
        if (local_8 < local_c) {
          pfVar2 = (float *)(local_10 + local_8 * 0xc);
          if (pfVar2 != (float *)0x0) {
            *pfVar2 = local_44 * param_3 + local_38;
            pfVar2[1] = local_40 * param_3 + local_34;
            pfVar2[2] = local_3c * param_3 + local_30;
          }
          iVar5 = local_8 + 1;
          if (iVar5 < local_c) {
            pfVar2 = (float *)(local_10 + iVar5 * 0xc);
            if (pfVar2 != (float *)0x0) {
              *pfVar2 = fStack_20;
              pfVar2[1] = fStack_1c;
              pfVar2[2] = fStack_18;
            }
            iVar5 = local_8 + 2;
            if (iVar5 < local_c) {
              pfVar2 = (float *)(local_10 + iVar5 * 0xc);
              if (pfVar2 != (float *)0x0) {
                *pfVar2 = local_2c;
                pfVar2[1] = local_28;
                pfVar2[2] = local_24;
              }
              iVar5 = local_8 + 3;
            }
          }
        }
      }
      local_8 = iVar5;
      iVar5 = *(int *)(param_2 + 0xc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5 + -1);
  }
  FUN_00a5e090(&local_14);
  if ((local_10 != 0) && (local_8 = 0, local_4 != 0)) {
    FUN_00dd48d0(local_10,0);
  }
  return;
}

// 00ADDD40  FUN_00addd40  size=1288  [between]
/* WARNING: Removing unreachable block (ram,0x00addf6d) */
/* WARNING: Removing unreachable block (ram,0x00ade0f0) */

void FUN_00addd40(float *param_1,float *param_2,float param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float unaff_ESI;
  float unaff_EDI;
  undefined1 *puVar4;
  undefined1 *puVar5;
  float *pfVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
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
  float local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0.0;
  FUN_0041c8e0(8,&DAT_01b7bd48);
  local_2c = *param_1;
  local_28 = param_1[1];
  local_24 = param_1[2];
  if (local_8 < local_c) {
    pfVar6 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar6 != (float *)0x0) {
      *pfVar6 = local_2c;
      pfVar6[1] = local_28;
      pfVar6[2] = local_24;
    }
    local_8 = local_8 + 1;
  }
  local_44 = *param_2;
  local_40 = param_2[1];
  local_3c = param_2[2];
  local_20 = local_44 - local_2c;
  local_1c = local_40 - local_28;
  local_18 = local_3c - local_24;
  param_1 = (float *)(SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c) *
                     0.33333334);
  if (param_3 < (float)param_1) {
    param_1 = (float *)param_3;
  }
  if ((float)param_1 < param_4) {
    param_1 = (float *)param_4;
  }
  local_50 = (local_2c + local_44) * 0.5;
  local_48 = (local_3c + local_24) * 0.5;
  if (local_40 <= local_28) {
    local_4c = local_28 + (float)param_1;
  }
  else {
    local_4c = (float)param_1;
    if (local_40 + 5.0 < local_28) {
      local_4c = (float)param_1 * 0.5;
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
  fVar10 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
  if (fVar10 < 0.0 != (fVar10 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_5c = 0.0;
    local_58 = 1.0;
    local_54 = 0.0;
  }
  pfVar6 = &local_5c;
  pfVar8 = pfVar6;
  D3DXVec3Normalize();
  iVar2 = local_10;
  if (local_10 < local_14) {
    pfVar1 = (float *)((int)local_18 + local_10 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = unaff_EDI * (float)param_1 + local_34;
      pfVar1[1] = unaff_ESI * (float)param_1 + local_30;
      pfVar1[2] = local_5c * (float)param_1 + local_2c;
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
  fVar10 = local_4c - local_34;
  local_5c = local_44 - local_2c;
  fVar7 = local_5c * local_5c + fVar10 * fVar10 + (local_48 - local_30) * (local_48 - local_30);
  if (fVar7 < 0.0 != (fVar7 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    fVar10 = 0.0;
    local_5c = 0.0;
  }
  puVar4 = &stack0xffffff9c;
  puVar5 = puVar4;
  D3DXVec3Normalize(puVar4,puVar4);
  fVar7 = (float)pfVar6 * local_4;
  fVar9 = (float)pfVar8 * local_4;
  fVar3 = local_18;
  if ((int)local_18 < (int)local_1c) {
    pfVar6 = (float *)((int)local_20 + (int)local_18 * 0xc);
    if (pfVar6 != (float *)0x0) {
      *pfVar6 = local_3c;
      pfVar6[1] = local_38;
      pfVar6[2] = local_34;
    }
    fVar3 = (float)((int)local_18 + 1);
    if ((int)fVar3 < (int)local_1c) {
      pfVar6 = (float *)((int)local_20 + (int)fVar3 * 0xc);
      if (pfVar6 != (float *)0x0) {
        *pfVar6 = local_54 - fVar7;
        pfVar6[1] = local_50 - fVar9;
        pfVar6[2] = local_4c - fVar10 * local_4;
      }
      fVar3 = (float)((int)local_18 + 2);
      if ((int)fVar3 < (int)local_1c) {
        pfVar6 = (float *)((int)local_20 + (int)fVar3 * 0xc);
        if (pfVar6 == (float *)0x0) {
          fVar3 = (float)((int)local_18 + 3);
        }
        else {
          *pfVar6 = local_54;
          pfVar6[1] = local_50;
          pfVar6[2] = local_4c;
          fVar3 = (float)((int)local_18 + 3);
        }
      }
    }
  }
  local_18 = fVar3;
  FUN_00a5e090(&local_24);
  if ((local_20 != 0.0) && (local_18 = 0.0, local_14 != 0)) {
    FUN_00dd48d0(local_20,0,puVar4,puVar5,fVar7,fVar9);
  }
  return;
}

// 00ADE250  Wpc001::vf1D0  size=602  [class]
void __thiscall Wpc001::vf1D0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float10 fVar12;
  undefined *puVar13;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined1 auStack_264 [4];
  undefined1 local_260 [336];
  undefined1 local_110 [268];
  
  if (*(int *)(param_1 + 0x588) != 0) {
    puVar9 = (undefined4 *)(param_2 + 0xa0);
    puVar10 = (undefined4 *)(*(int *)(param_1 + 0x588) + 0xf0);
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  if (*(int *)(param_1 + 0x4b0) == 0x31013) {
    FUN_004039a0(1,param_1,0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_260);
    *(undefined4 *)(param_1 + 0x618) = 3;
    FUN_00acc2f0(0x43960000,0);
    FUN_00cd4630(param_1);
    return;
  }
  FUN_004ab4b0(param_2);
  FUN_00a8e680(local_110,0,0x3f000000);
  FUN_00a8e5d0(param_1,local_110,0);
  if (*(int *)(param_1 + 0x4b0) == 0x30314) {
    piVar7 = (int *)FUN_00c13920();
    iVar8 = (**(code **)(*piVar7 + 0x28))(0);
    if (iVar8 != 0) {
      piVar7 = (int *)FUN_00a7c8a0();
      if (piVar7 != (int *)0x0) {
        puVar13 = &DAT_01be9db8;
        (**(code **)(*piVar7 + 4))(&DAT_01be9db8);
        iVar8 = FUN_00dd6d80(puVar13);
        if (iVar8 != 0) {
          FUN_004039a0(0xc5,piVar7,0);
          uStack_284 = *(undefined4 *)(param_2 + 0xd0);
          uStack_280 = *(undefined4 *)(param_2 + 0xd4);
          uStack_27c = *(undefined4 *)(param_2 + 0xd8);
          uStack_278 = *(undefined4 *)(param_2 + 0xdc);
          fVar1 = *(float *)(param_2 + 0xa0);
          fVar2 = *(float *)(param_2 + 0xa4);
          fVar3 = *(float *)(param_2 + 0xa8);
          fVar4 = *(float *)(param_2 + 0xb0);
          fVar5 = *(float *)(param_2 + 0xb4);
          fVar6 = *(float *)(param_2 + 0xb8);
          fVar11 = SQRT((float10)*(float *)(param_2 + 200) * (float10)*(float *)(param_2 + 200) +
                        (float10)*(float *)(param_2 + 0xc4) * (float10)*(float *)(param_2 + 0xc4) +
                        (float10)*(float *)(param_2 + 0xc0) * (float10)*(float *)(param_2 + 0xc0));
          fVar12 = (float10)fpatan((float10)*(float *)(param_2 + 0xb8) / fVar11,
                                   (float10)*(float *)(param_2 + 200) / fVar11);
          fStack_274 = (float)fVar12;
          fVar11 = (float10)FUN_00ddbaa0((float)-((float10)*(float *)(param_2 + 0xa8) / fVar11));
          fStack_270 = (float)fVar11;
          fVar11 = (float10)fpatan((float10)*(float *)(param_2 + 0xa4) /
                                   (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                                   (float10)*(float *)(param_2 + 0xa0) /
                                   (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
          fStack_26c = (float)fVar11;
          FUN_0051c090(&uStack_284,&fStack_274);
          FUN_00a8c930(0,auStack_264);
        }
      }
    }
  }
  return;
}

