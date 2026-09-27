// src/unsorted/unit_00D0D380.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D0D380..00D0DC80, 6 functions

#include "types.h"

// 00D0D380  FUN_00d0d380  size=46  [run]
uint FUN_00d0d380(int param_1,ushort param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (DAT_01b7b798 == 1) {
    iVar1 = FUN_00cfdda0(param_1 << 0x10 | (uint)param_2);
    return (uint)(iVar1 != 0);
  }
  return in_EAX & 0xffffff00;
}

// 00D0D3E0  FUN_00d0d3e0  size=46  [run]
uint FUN_00d0d3e0(int param_1,ushort param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (DAT_01b7b79c == 1) {
    iVar1 = FUN_00cfdda0(param_1 << 0x10 | (uint)param_2);
    return (uint)(iVar1 != 0);
  }
  return in_EAX & 0xffffff00;
}

// 00D0D410  FUN_00d0d410  size=46  [run]
uint FUN_00d0d410(int param_1,ushort param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (DAT_01b7b79c == 2) {
    iVar1 = FUN_00cfde70(param_1 << 0x10 | (uint)param_2);
    return (uint)(iVar1 != 0);
  }
  return in_EAX & 0xffffff00;
}

// 00D0D500  FUN_00d0d500  size=1617  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00d0d500(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [52];
  
  *(undefined4 *)(param_1 + 0x948) = 0;
  iVar1 = FUN_00dd7240();
  if (iVar1 != 0) {
    iVar1 = FUN_00cf5750(0x96,&DAT_01b7be50);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x948) = 1;
      *(undefined4 *)(param_1 + 0xa10) = 0x88;
      iVar1 = (**(code **)(*(int *)(param_1 + 0xa20) + 0x40))(0xf000,&DAT_01b7be50,"UIWorkFactory");
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0xa80) = 8;
        iVar1 = (**(code **)(*(int *)(param_1 + 0xa90) + 0x40))
                          (0xf000,&DAT_01b7be50,"UIExtendFactory");
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0xcd0) = 0x42700000;
          *(undefined4 *)(param_1 + 0xcd8) = 1;
          uVar2 = FUN_00a281f0("uibaseshader.vso");
          uVar3 = FUN_00a281f0("uibaseshader.pso");
          iVar1 = FUN_00fcebe0(uVar2,uVar3);
          if (iVar1 != 0) {
            uVar2 = FUN_00a281f0("uioverlayshader.vso");
            uVar3 = FUN_00a281f0("uioverlayshader.pso");
            iVar1 = FUN_00fd0050(uVar2,uVar3);
            if (iVar1 == 0) {
              FUN_00dd5650(&DAT_016b70e0,"m_UIOverlayShader");
              return 0;
            }
            uVar2 = FUN_00a281f0("uidodgeshader.vso");
            uVar3 = FUN_00a281f0("uidodgeshader.pso");
            iVar1 = FUN_00fcfa00(uVar2,uVar3);
            if (iVar1 == 0) {
              FUN_00dd5650(&DAT_016b70e0,"m_UIDodgeShader");
              return 0;
            }
            uVar2 = FUN_00a281f0("uiscreenshader.vso");
            uVar3 = FUN_00a281f0("uiscreenshader.pso");
            iVar1 = FUN_00fcfb50(uVar2,uVar3);
            if (iVar1 == 0) {
              FUN_00dd5650(&DAT_016b70e0,"m_UIScreenShader");
              return 0;
            }
            uVar2 = FUN_00a281f0("uiblackalphashader.vso");
            uVar3 = FUN_00a281f0("uiblackalphashader.pso");
            iVar1 = FUN_00fced60(uVar2,uVar3);
            if (iVar1 == 0) {
              FUN_00dd5650(&DAT_016b70e0,"m_UIBlackAlphaShader");
              return 0;
            }
            uVar2 = FUN_00a281f0("uigaussshader.vso");
            uVar3 = FUN_00a281f0("uigaussshader.pso");
            iVar1 = FUN_00fcfe80(uVar2,uVar3);
            if (iVar1 == 0) {
              FUN_00dd5650(&DAT_016b70e0,"m_UIGaussShader");
              return 0;
            }
            uVar2 = FUN_00a281f0("uipunchthrough.vso");
            uVar3 = FUN_00a281f0("uipunchthrough.pso");
            iVar1 = FUN_00fd0280(uVar2,uVar3);
            if (iVar1 == 0) {
              FUN_00dd5650(&DAT_016b70e0,"m_UIPunchthrough");
              return 0;
            }
            uVar2 = FUN_00a281f0("uicolorslideshader.vso");
            uVar3 = FUN_00a281f0("uicolorslideshader.pso");
            iVar1 = FUN_00fcfca0(uVar2,uVar3);
            if (iVar1 == 0) {
              FUN_00dd5650(&DAT_016b70e0,"m_UIColorSlideShader");
              return 0;
            }
            uVar2 = FUN_00a281f0("uicustomobjshader.vso");
            uVar3 = FUN_00a281f0("uicustomobjshader.pso");
            iVar1 = FUN_00fcee70(uVar2,uVar3);
            if (iVar1 == 0) {
              FUN_00dd5650(&DAT_016b70e0,"m_UICustomObjShader");
              return 0;
            }
            uVar2 = FUN_00a281f0("uicustomobjblackalphashader.vso");
            uVar3 = FUN_00a281f0("uicustomobjblackalphashader.pso");
            iVar1 = FUN_00fcf090(uVar2,uVar3);
            if (iVar1 == 0) {
              FUN_00dd5650(&DAT_016b70e0,"m_UICustomObjBlackAlphaShader");
              return 0;
            }
            uVar2 = FUN_00a281f0("uicustomobjlightshader.vso");
            uVar3 = FUN_00a281f0("uicustomobjlightshader.pso");
            iVar1 = FUN_00fcf2b0(uVar2,uVar3);
            if (iVar1 == 0) {
              FUN_00dd5650(&DAT_016b70e0,"m_UICustomObjLightShader");
              return 0;
            }
            uVar2 = FUN_00a281f0("uicustomobjlightblackalphashader.vso");
            uVar3 = FUN_00a281f0("uicustomobjlightblackalphashader.pso");
            iVar1 = FUN_00fcf450(uVar2,uVar3);
            if (iVar1 == 0) {
              FUN_00dd5650(&DAT_016b70e0,"m_UICustomObjLightBlackAlphaShader");
              return 0;
            }
            uVar2 = FUN_00a281f0("uicustomobjmodelradioshader.vso");
            uVar3 = FUN_00a281f0("uicustomobjmodelradioshader.pso");
            iVar1 = FUN_00fcf5f0(uVar2,uVar3);
            if (iVar1 == 0) {
              FUN_00dd5650(&DAT_016b70e0,"m_UICustomObjModelRadioShader");
              return 0;
            }
            iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x930))();
            if (iVar1 == 0) {
              FUN_00dd5650(&DAT_016b9f04);
              return 0;
            }
            *(undefined4 *)(param_1 + 0xaec) = 0;
            *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x2c) = 0;
            *(undefined4 *)(param_1 + 0x3c) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
            iVar1 = FUN_00f98a90();
            iVar4 = FUN_00f98aa0();
            FUN_00cacb50(0x4259b852,(float)iVar1,(float)iVar4,0x38d1b717,0x42c80000);
            FUN_00cacbf0(0x4259b852,(float)iVar1,(float)iVar4,0x38d1b717,0x42c80000);
            FUN_00cad430(auStack_38);
            uStack_48 = 0;
            uStack_44 = 0;
            uStack_40 = 0xbf800000;
            uStack_3c = 0x3f800000;
            thunk_FUN_00de01a0(param_1 + 0xaf0,auStack_38,&uStack_48,&stack0xffffffa8);
            thunk_FUN_00de01a0(param_1 + 0xbb0,auStack_38,&uStack_48,&stack0xffffffa8);
            *(undefined4 *)(param_1 + 0xcb8) = _DAT_01bea530;
            uVar2 = _DAT_01bea534;
            *(undefined4 *)(param_1 + 0xcc0) = 0;
            *(undefined4 *)(param_1 + 0xcbc) = uVar2;
            *(undefined4 *)(param_1 + 0xcb0) = 0;
            *(undefined4 *)(param_1 + 0xcb4) = 0;
            iVar1 = FUN_00df7fc0();
            *(uint *)(param_1 + 0xcc4) = (uint)(iVar1 == 1);
            uVar2 = FUN_00df7f70();
            uVar2 = FUN_00cacfc0(uVar2);
            *(undefined4 *)(param_1 + 0xcc8) = uVar2;
            *(undefined4 *)(param_1 + 0xd58) = 1;
            *(undefined4 *)(param_1 + 0xd5c) = 1;
            *(undefined4 *)(param_1 + 0xd44) = 0;
            *(undefined4 *)(param_1 + 0xd48) = 0;
            *(undefined4 *)(param_1 + 0xd54) = 0;
            *(undefined4 *)(param_1 + 0xd60) = 0;
            *(undefined4 *)(param_1 + 0xd64) = 0;
            *(undefined4 *)(param_1 + 0xd68) = 0;
            *(undefined4 *)(param_1 + 0xd6c) = 0;
            *(undefined4 *)(param_1 + 0xd70) = 0;
            *(undefined4 *)(param_1 + 0xd78) = 0;
            *(undefined4 *)(param_1 + 0xd7c) = 0;
            *(undefined4 *)(param_1 + 0xccc) = 4;
            *(undefined4 *)(param_1 + 0xd74) = 0xffffffff;
            return 1;
          }
          FUN_00dd5650(&DAT_016b70e0,"m_UIBaseShader");
        }
      }
    }
  }
  return 0;
}

// 00D0DBC0  FUN_00d0dbc0  size=190  [run]
void __fastcall FUN_00d0dbc0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 0x1c);
  if (piVar3 != *(int **)(param_1 + 0x20)) {
    do {
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        piVar4 = (int *)piVar3[2];
      }
      else {
        FUN_00f972f0();
        *(undefined4 *)(iVar1 + 8) = 0;
        *(undefined4 *)(iVar1 + 0x28) = 0;
        *(undefined4 *)(iVar1 + 4) = 0xffffffff;
        FUN_00dd48d0(iVar1,0);
        iVar1 = piVar3[1];
        piVar4 = (int *)piVar3[2];
        if (iVar1 != 0) {
          *(int **)(iVar1 + 8) = piVar4;
        }
        if (piVar4 != (int *)0x0) {
          piVar4[1] = iVar1;
        }
        if (*(int **)(param_1 + 0x1c) == piVar3) {
          *(int **)(param_1 + 0x1c) = piVar4;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar1 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar1 + 4);
        }
        piVar3[1] = iVar2;
        piVar3[2] = iVar1;
        if (iVar2 != 0) {
          *(int **)(iVar2 + 8) = piVar3;
        }
        if (iVar1 != 0) {
          *(int **)(iVar1 + 4) = piVar3;
        }
        *(int **)(param_1 + 0x18) = piVar3;
      }
      piVar3 = piVar4;
    } while (piVar4 != *(int **)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00D0DC80  FUN_00d0dc80  size=108  [run]
void __thiscall FUN_00d0dc80(int param_1,int param_2)

{
  int iVar1;
  int *local_4;
  
  local_4 = *(int **)(param_1 + 0x1c);
  if (local_4 != *(int **)(param_1 + 0x20)) {
    while (iVar1 = *local_4, param_2 != *(int *)(iVar1 + 4)) {
      local_4 = (int *)local_4[2];
      if (local_4 == *(int **)(param_1 + 0x20)) {
        return;
      }
    }
    FUN_00f972f0();
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 4) = 0xffffffff;
    FUN_00dd48d0(iVar1,0);
    FUN_00d0b550(&param_2,&local_4);
  }
  return;
}

