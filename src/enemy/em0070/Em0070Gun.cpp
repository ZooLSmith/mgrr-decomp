// src/enemy/em0070/Em0070Gun.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00468680..00AB7A50, 8 functions

#include "mgrr.h"
#include "Em0070Gun.h"

// 00468680  Em0070Gun::vf44  size=23  [class]
void Em0070Gun::vf44(void)

{
  FUN_00a9d8a0();
  FUN_00a8c820();
  BehaviorWeapon::vf44();
  return;
}

// 00471480  Em0070Gun::startup  size=358  [class]
undefined4 __fastcall Em0070Gun::startup(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = BehaviorWeapon::startup();
  if (iVar3 != 0) {
    uVar6 = 2;
    FUN_00a92fb0(2);
    FUN_00e08640(uVar6);
    local_20 = 1;
    local_1c = 1;
    local_18 = 1;
    iVar3 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_20);
    if (iVar3 != 0) {
      FUN_00410540(8,&DAT_01b7bd48);
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
      uVar6 = FUN_00a8d2a0();
      puVar4 = (undefined4 *)FUN_009f8b60();
      iVar3 = CollisionSphere::CollisionSphere(2,*puVar4,0);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x380) = 0;
        FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
        *(undefined4 *)(iVar3 + 0x510) = 0x3ecccccd;
        local_20 = 0;
        local_18 = 0;
        local_1c = 0x3ecccccd;
        FUN_00d77c90(&local_20);
        _strncpy_s((char *)(iVar3 + 0x394),0x20,"Em0070Gun",0x1f);
        FUN_00a93a00(iVar3,uVar6);
        FUN_00d7b0f0();
        FUN_00d7b890();
      }
      iVar3 = 0;
      local_24 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          iVar2 = *(int *)(param_1 + 800);
          iVar5 = *(int *)(*(int *)(iVar2 + 0x60 + iVar3) + 0x40);
          if (iVar5 != 0) {
            iVar5 = FUN_00fdbbd0(iVar5,&DAT_0163d9a8);
            if (iVar5 != 0) {
              puVar1 = (uint *)(iVar2 + 0x38 + iVar3);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          local_24 = local_24 + 1;
          iVar3 = iVar3 + 0x70;
        } while (local_24 < *(short *)(param_1 + 0x324));
      }
      *(undefined4 *)(param_1 + 0x8c0) = 0;
      return 1;
    }
  }
  return 0;
}

// 0047B850  FUN_0047b850  size=433  [callgraph]
undefined4 __fastcall FUN_0047b850(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  int local_260 [35];
  uint uStack_1d4;
  uint uStack_1d0;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  if ((param_1[0x230] != 0) && (param_1[0x139] == 0)) {
    iVar5 = param_1[0x19f];
    iVar7 = param_1[0x1a1] * 0x150 + iVar5;
    FUN_00445db0();
    FUN_004105d0();
    iVar3 = -1;
    bVar2 = false;
    if (iVar5 != iVar7) {
      do {
        iVar1 = *(int *)(iVar5 + 4);
        if (iVar3 <= iVar1) {
          FUN_00448f50(iVar5);
          bVar2 = true;
          iVar3 = iVar1;
        }
        iVar5 = iVar5 + 0x150;
      } while (iVar5 != iVar7);
      if (bVar2) {
        FUN_0043e160(local_260);
        iVar5 = FUN_00a81330();
        if ((iVar5 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
          puVar8 = &DAT_01b34d50;
          (**(code **)(*piVar4 + 4))(&DAT_01b34d50);
          FUN_00dd6d80(puVar8);
        }
        iVar5 = FUN_00ac8350();
        if (((uStack_1d4 & 0x400) != 0) ||
           ((uStack_1d0 & 0x20000) != 0 ||
            ((uStack_1d0 & 0x40000) != 0 || ((uStack_1d4 & 0x200) != 0 || iVar5 != 0)))) {
          if (((local_260[0] != 0) &&
              (((local_260[0] != 1 && (local_260[0] != 2)) && (local_260[0] != 0x1b0)))) &&
             (local_260[0] != 0x147)) {
            uVar6 = 0;
            iVar5 = FUN_00a81330();
            if (iVar5 != 0) {
              uVar6 = FUN_00a7c8a0();
            }
            (**(code **)(*param_1 + 0x198))(uVar6,local_260,1);
            param_1[0x139] = 1;
            FUN_0047abe0();
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}

// 0047BA10  FUN_0047ba10  size=383  [callgraph]
void __fastcall FUN_0047ba10(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  
  switch(param_1[0x186]) {
  case 0:
    FUN_00469ab0();
    return;
  case 1:
    FUN_00469e50();
    return;
  case 2:
    FUN_0046a070();
    return;
  case 3:
    FUN_00479d90();
    return;
  case 4:
    FUN_0047a120();
    return;
  case 5:
    FUN_00464dd0();
    return;
  case 6:
    FUN_004724f0();
    return;
  case 7:
    FUN_00464e70();
    return;
  case 8:
    FUN_00472b10();
    return;
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
    FUN_00464fc0();
    return;
  case 10:
  case 0xb:
    FUN_0046a560();
    return;
  case 0xf:
    FUN_0047a770();
    return;
  case 0x10:
    FUN_00465140();
    return;
  case 0x11:
    FUN_004651c0();
    return;
  case 0x12:
  case 0x13:
  case 0x14:
    FUN_00473c60();
    return;
  case 0x15:
    FUN_00467ff0();
    return;
  case 0x16:
    FUN_00470eb0();
    return;
  case 0x17:
  case 0x18:
    FUN_004680b0();
    return;
  case 0x19:
    switch(param_1[0x187]) {
    case 0:
      FUN_00aa4080(0x66,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00c27260(0x40200000);
      FUN_00a8d280();
      param_1[0x4d3] = 0;
      sVar3 = FUN_00dde2d0(1,3);
      param_1[0x505] = (int)((float)(int)sVar3 * 60.0);
    case 1:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar4 = FUN_00a94ce0(0);
      if (iVar4 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      FUN_00a8c760(10);
      if (param_1[0x2a1] != 0) {
        FUN_00a8e880(param_1[0x2a1] + 0x40);
        (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
      }
      break;
    case 2:
      FUN_00aa4080(0x67,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00aa4080(0x69,2,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42700000;
      param_1[0x249] = 0x40c00000;
    case 3:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      fVar2 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar2 - (float)param_1[0x244] < 0.0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      if (fVar1 - (float)param_1[0x244] < 0.0) {
        FUN_00aa4080(0x69,2,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
        FUN_00475da0(0,0,0x3f666666);
        param_1[0x249] = 0x41500000;
      }
      (**(code **)(*param_1 + 0x308))(0x3d75c28f,0x393702d3,0x3c8efa35,0);
      break;
    case 4:
      FUN_00aa4080(0x68,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    case 5:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      fVar2 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
      if (fVar2 - (float)param_1[0x244] < 0.0) {
        (**(code **)(*param_1 + 0x34c))();
        sVar3 = FUN_00dde2d0(1,3);
        param_1[0x505] = (int)((float)(int)sVar3 * 60.0);
      }
    }
    iVar4 = FUN_00a8c760(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    }
    return;
  case 0x1a:
    FUN_00468200();
    return;
  case 0x1b:
  case 0x1c:
    FUN_0046a780();
    return;
  case 0x1d:
    FUN_0046aa10();
    return;
  case 0x1e:
    FUN_0046ac50();
    return;
  case 0x1f:
    FUN_0046af70();
    return;
  case 0x20:
    FUN_0046b230();
    return;
  case 0x21:
  case 0x22:
  case 0x23:
    FUN_0046b4c0();
    return;
  case 0x24:
    FUN_0047ad00();
    return;
  case 0x25:
    FUN_0046b950();
    return;
  case 0x26:
    break;
  case 0x27:
    FUN_0046d940();
    return;
  case 0x28:
    FUN_0046dc90();
    return;
  case 0x29:
    FUN_00466e70();
    return;
  default:
    return;
  case 0x2b:
    FUN_0046da70();
    return;
  case 0x2c:
    FUN_0046de00();
    return;
  case 0x2d:
    FUN_0046e1d0();
    return;
  case 0x2e:
    FUN_004744f0();
    return;
  case 0x2f:
    FUN_00465280();
    return;
  case 0x30:
    FUN_00465330();
    return;
  case 0x31:
    FUN_004653d0();
    return;
  case 0x32:
    FUN_00465460();
    return;
  case 0x33:
    FUN_00474970();
    return;
  case 0x34:
    FUN_00474d30();
    return;
  case 0x35:
    FUN_004750e0();
    return;
  case 0x36:
    FUN_00465500();
    return;
  case 0x37:
    FUN_004655e0();
    return;
  case 0x38:
    FUN_004656a0();
    return;
  case 0x39:
    FUN_00465790();
    return;
  case 0x3a:
    FUN_00465830();
    return;
  case 0x3b:
    FUN_00475500();
    return;
  case 0x3c:
    FUN_004756a0();
    return;
  case 0x3d:
    FUN_004658d0();
    return;
  case 0x3e:
    FUN_00465a90();
    return;
  case 0x3f:
    FUN_00465d10();
    return;
  case 0x40:
    FUN_00465eb0();
    return;
  case 0x41:
    FUN_00466080();
    return;
  case 0x42:
  case 0x43:
    FUN_0046bd30();
    return;
  case 0x44:
  case 0x45:
  case 0x46:
    FUN_0046bed0();
    return;
  case 0x47:
    FUN_00470fd0();
    return;
  case 0x48:
  case 0x49:
    FUN_00468340();
    return;
  case 0x4a:
  case 0x4b:
    FUN_004661f0();
    return;
  case 0x4c:
    FUN_0046c080();
    return;
  case 0x4d:
    FUN_0046c240();
    return;
  case 0x4e:
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
    FUN_0046c350();
    return;
  case 0x4f:
    FUN_0046c6e0();
    return;
  case 0x50:
    FUN_0046c860();
    return;
  case 0x51:
    FUN_0046ca20();
    return;
  case 0x5c:
    FUN_0046cb70();
    return;
  case 0x5d:
    FUN_00471090();
    return;
  case 0x5e:
    FUN_00476070();
    return;
  case 99:
    FUN_00476150();
    return;
  case 0x67:
    FUN_0046e310();
    return;
  case 0x68:
    FUN_0046e550();
    return;
  }
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x59,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00c15aa0();
    FUN_00a8d280();
    param_1[0x4d3] = 0;
    sVar3 = FUN_00dde2d0(1,3);
    param_1[0x505] = (int)((float)(int)sVar3 * 60.0);
switchD_0047727c_caseD_1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar4 = FUN_00a8c760(10);
    if (iVar4 != 0) {
      FUN_00475da0(0,0,0x3f800000);
    }
    iVar4 = FUN_00a8c760(0xf);
    if (iVar4 != 0) {
      FUN_00a8caf0(0xb,0,0,0);
      sVar3 = FUN_00dde2d0(0,3);
      if (sVar3 == 0) {
        FUN_00a8caf0(10,0,0,0);
      }
      FUN_00466ae0();
      sVar3 = FUN_00dde2d0(1,3);
LAB_004773c1:
      param_1[0x505] = (int)((float)(int)sVar3 * 60.0 + 180.0);
      if (((param_1[0x44a] != 0) && ((float)param_1[0x2a3] <= 9.0)) &&
         ((float)param_1[0x2a8] < 1.5707964)) {
        FUN_0046d370();
        sVar3 = FUN_00dde2d0(0,1);
        if (sVar3 != 0) {
          FUN_004668c0();
        }
      }
    }
switchD_0047727c_default:
    iVar4 = FUN_00a8c760(0);
    if (iVar4 != 0) {
      FUN_00a8e880(param_1 + 0x518);
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    }
    return;
  case 1:
    goto switchD_0047727c_caseD_1;
  case 2:
    FUN_00aa4080(0x5a,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41f00000;
    FUN_00475da0(0xbd0efa35,0,0x415ccccd);
    FUN_00475da0(0xbd8efa35,0x3e0efa35,0x41400000);
    FUN_00475da0(0xbf060a92,0x3ec49809,0x40999999);
    FUN_00475da0(0xbdb2b8c2,0xbe20d97c,0x40f99999);
    FUN_00475da0(0x3efa35dd,0xbe860a92,0x41900000);
    FUN_00475da0(0x3e860a92,0xbf0efa35,0x40c00000);
    FUN_00475da0(0x3f32b8c2,0x3f20d97c,0x41c00000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (0.0 <= fVar2 - (float)param_1[0x244]) goto switchD_0047727c_default;
    (**(code **)(*param_1 + 0x34c))();
    FUN_00a8caf0(0xb,0,0,0);
    sVar3 = FUN_00dde2d0(0,3);
    if (sVar3 == 0) {
      FUN_00a8caf0(10,0,0,0);
    }
    FUN_00466ae0();
    sVar3 = FUN_00dde2d0(1,3);
    goto LAB_004773c1;
  default:
    goto switchD_0047727c_default;
  }
}

// 0047BD40  Em0070Gun::vf48  size=16  [class]
void Em0070Gun::vf48(void)

{
  BehaviorDebrisActor::vf48();
  FUN_0047b850();
  return;
}

// 00AA6780  Em0070Gun::Em0070Gun  size=49  [class]
undefined4 * __fastcall Em0070Gun::Em0070Gun(undefined4 *param_1)

{
  Behavior::Behavior();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AA67C0  Em0070Gun::vf04  size=6  [class]
undefined * Em0070Gun::vf04(void)

{
  return &DAT_01b34d5c;
}

// 00AB7A50  Em0070Gun::destruct  size=105  [class]
undefined4 * __thiscall Em0070Gun::destruct(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

