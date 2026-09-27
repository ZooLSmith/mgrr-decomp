// src/object/ba5000/Ba5000.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00406260..00AB95A0, 20 functions

#include "mgrr.h"
#include "Ba5000.h"

// 00406260  Ba5000::vf4C  size=5  [class]
void __fastcall Ba5000::vf4C(int param_1)

{
  BehaviorBgBase::vf4C();
  if ((((*(char *)(param_1 + 0x470) != '\0') && ((*(byte *)(param_1 + 0x472) & 0x80) != 0)) &&
      (*(char *)(param_1 + 0x471) != '\0')) && (*(int *)(param_1 + 0xb28) != 0)) {
    return;
  }
  Bh0064::vf64();
  return;
}

// 00406270  Ba5000::vf44  size=5  [class]
void __fastcall Ba5000::vf44(int param_1)

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

// 00406280  FUN_00406280  size=194  [between]
void __fastcall FUN_00406280(int *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((float)param_1[0x2d6] <= (float)param_1[0x2d3] + (float)param_1[0x2d5]) {
    fVar3 = (float10)FUN_00e049b0();
    fVar1 = (float)param_1[0x2d6];
    param_1[0x2d6] = (int)(float)(fVar3 + (float10)fVar1);
    if ((float10)(float)param_1[0x2d3] <= fVar3 + (float10)fVar1) {
      puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
      uStack_20 = *puVar2;
      uStack_18 = puVar2[2];
      uStack_14 = puVar2[3];
      fStack_1c = (float)param_1[0x2d4] * -1.0 + (float)puVar2[1];
      (**(code **)(*param_1 + 0x6c))(&uStack_20);
      if ((float)param_1[0x2d3] + (float)param_1[0x2d5] < (float)param_1[0x2d6]) {
        param_1[0x186] = 4;
        param_1[0x189] = 7;
      }
    }
  }
  return;
}

// 00406350  FUN_00406350  size=43  [between]
undefined4 __fastcall FUN_00406350(int param_1)

{
  if ((*(int *)(param_1 + 0xb34) != 0) &&
     (*(float *)(param_1 + 0xb54) + *(float *)(param_1 + 0xb4c) <= *(float *)(param_1 + 0xb58))) {
    return 1;
  }
  return 0;
}

// 00406380  FUN_00406380  size=38  [between]
undefined4 __thiscall
FUN_00406380(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0xb4c) = param_2;
  *(undefined4 *)(param_1 + 0xb50) = param_3;
  *(undefined4 *)(param_1 + 0xb54) = param_4;
  return 1;
}

// 004063B0  FUN_004063b0  size=50  [between]
void __thiscall FUN_004063b0(int param_1,byte param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0x1f);
  if (param_3 == 1) {
    *(uint *)(param_1 + 0xb9c) = *(uint *)(param_1 + 0xb9c) | uVar1;
    return;
  }
  if ((uVar1 & *(uint *)(param_1 + 0xb9c)) != 0) {
    *(uint *)(param_1 + 0xb9c) = *(uint *)(param_1 + 0xb9c) ^ uVar1;
  }
  return;
}

// 004063F0  FUN_004063f0  size=13  [between]
void __thiscall FUN_004063f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xba0) = param_2;
  return;
}

// 004066F0  FUN_004066f0  size=100  [between]
undefined4 __fastcall FUN_004066f0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_01885d68 != 1) {
    iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    if ((*(int *)(iVar1 + 4) == 0) && (DAT_01b35fac != 0)) {
      if (DAT_01885db8 == 0) {
        FUN_00dd72e0();
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        return param_1;
      }
      FUN_00dd5650(&DAT_0163b898);
    }
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  return param_1;
}

// 00406760  FUN_00406760  size=61  [between]
void FUN_00406760(void)

{
  int *piVar1;
  
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 004067D0  Ba5000::startup  size=181  [class]
undefined4 __fastcall Ba5000::startup(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorBa::startup();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_00a8f7b0(1);
  }
  FUN_00928d50(4);
  *(undefined4 *)(param_1 + 0xb48) = 0;
  *(undefined4 *)(param_1 + 0xb30) = 0;
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  *(undefined4 *)(param_1 + 0xb34) = 0;
  *(undefined4 *)(param_1 + 0xb50) = 0;
  *(undefined4 *)(param_1 + 0xb44) = 0;
  *(undefined4 *)(param_1 + 0xb54) = 0;
  *(undefined4 *)(param_1 + 0xb9c) = 0;
  *(undefined4 *)(param_1 + 0xb58) = 0;
  *(undefined4 *)(param_1 + 0xba0) = 1;
  *(undefined4 *)(param_1 + 0xb5c) = 0;
  *(undefined4 *)(param_1 + 0xb60) = 0;
  *(undefined4 *)(param_1 + 0xb64) = 0;
  if (*(int *)(param_1 + 0xb8c) == 0) {
    *(int *)(param_1 + 0xb8c) = param_1 + 0xb68;
    *(undefined4 *)(param_1 + 0xb90) = 4;
    *(undefined4 *)(param_1 + 0xb94) = 0;
    *(undefined4 *)(param_1 + 0xb98) = 0;
  }
  return 1;
}

// 00406890  Ba5000::vf50  size=42  [class]
void __fastcall Ba5000::vf50(int param_1)

{
  if (*(int *)(param_1 + 0xb34) == 1) {
    FUN_00406280();
  }
  switchD_0080dbae::default();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 004068C0  FUN_004068c0  size=268  [between]
undefined1 __fastcall FUN_004068c0(int param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
    return 0;
  }
  piVar5 = (int *)(*(int *)(param_1 + 800) + 0x60);
  do {
    pbVar6 = *(byte **)(*piVar5 + 0x40);
    if (pbVar6 != (byte *)0x0) {
      pbVar3 = &DAT_0163b8e8;
      do {
        bVar2 = *pbVar3;
        bVar8 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_00406915:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0040691a;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar8 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_00406915;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_0040691a:
      if (iVar4 == 0) {
        if (iVar7 == -1) {
          return 0;
        }
        iVar7 = iVar7 * 0x70 + *(int *)(param_1 + 800);
        if (iVar7 == 0) {
          return 0;
        }
        puVar1 = (uint *)(iVar7 + 0x38);
        *puVar1 = *puVar1 & 0xfffffffe;
        iVar7 = 0;
        if (*(short *)(param_1 + 0x324) < 1) {
          return 0;
        }
        piVar5 = (int *)(*(int *)(param_1 + 800) + 0x60);
        do {
          pbVar6 = *(byte **)(*piVar5 + 0x40);
          if (pbVar6 != (byte *)0x0) {
            pbVar3 = &DAT_0163b8dc;
            do {
              bVar2 = *pbVar3;
              bVar8 = bVar2 < *pbVar6;
              if (bVar2 != *pbVar6) {
LAB_00406990:
                iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                goto LAB_00406995;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar3[1];
              bVar8 = bVar2 < pbVar6[1];
              if (bVar2 != pbVar6[1]) goto LAB_00406990;
              pbVar3 = pbVar3 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar2 != 0);
            iVar4 = 0;
LAB_00406995:
            if (iVar4 == 0) {
              if (iVar7 == -1) {
                return 0;
              }
              iVar7 = iVar7 * 0x70 + *(int *)(param_1 + 800);
              if (iVar7 == 0) {
                return 0;
              }
              puVar1 = (uint *)(iVar7 + 0x38);
              *puVar1 = *puVar1 | 1;
              return 1;
            }
          }
          iVar7 = iVar7 + 1;
          piVar5 = piVar5 + 0x1c;
          if (*(short *)(param_1 + 0x324) <= iVar7) {
            return 0;
          }
        } while( true );
      }
    }
    iVar7 = iVar7 + 1;
    piVar5 = piVar5 + 0x1c;
    if (*(short *)(param_1 + 0x324) <= iVar7) {
      return 0;
    }
  } while( true );
}

// 004069D0  FUN_004069d0  size=948  [between]
void __fastcall FUN_004069d0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  bool bVar10;
  uint local_8;
  
  local_8 = 0;
LAB_004069f1:
  iVar3 = 0;
  switch(local_8) {
  case 0:
    iVar5 = (int)*(short *)(param_1 + 0x324);
    if (*(int *)(param_1 + 0xb30) != 0) {
      iVar4 = 0;
      if (iVar5 < 1) goto LAB_00406d45;
      iVar3 = *(int *)(param_1 + 800);
      piVar9 = (int *)(iVar3 + 0x60);
      do {
        pbVar8 = *(byte **)(*piVar9 + 0x40);
        if (pbVar8 != (byte *)0x0) {
          pcVar6 = "Corner_d_1";
          do {
            bVar1 = *pcVar6;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00406ac3:
              iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00406ac8;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar6[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00406ac3;
            pcVar6 = pcVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00406ac8:
          if (iVar7 == 0) goto LAB_00406d40;
        }
        iVar4 = iVar4 + 1;
        piVar9 = piVar9 + 0x1c;
      } while (iVar4 < iVar5);
      iVar3 = 0;
      break;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      iVar3 = *(int *)(param_1 + 800);
      piVar9 = (int *)(iVar3 + 0x60);
      do {
        pbVar8 = *(byte **)(*piVar9 + 0x40);
        if (pbVar8 != (byte *)0x0) {
          pcVar6 = "Corner_d_0";
          do {
            bVar1 = *pcVar6;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00406a62:
              iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00406a67;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar6[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00406a62;
            pcVar6 = pcVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00406a67:
          if (iVar7 == 0) goto LAB_00406d40;
        }
        iVar4 = iVar4 + 1;
        piVar9 = piVar9 + 0x1c;
      } while (iVar4 < iVar5);
      iVar3 = 0;
      break;
    }
    goto LAB_00406d45;
  case 1:
    iVar5 = (int)*(short *)(param_1 + 0x324);
    if (*(int *)(param_1 + 0xb30) == 0) {
      iVar4 = 0;
      if (iVar5 < 1) goto LAB_00406d45;
      iVar3 = *(int *)(param_1 + 800);
      piVar9 = (int *)(iVar3 + 0x60);
      do {
        pbVar8 = *(byte **)(*piVar9 + 0x40);
        if (pbVar8 != (byte *)0x0) {
          pcVar6 = "Corner_a_0";
          do {
            bVar1 = *pcVar6;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00406b33:
              iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00406b38;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar6[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00406b33;
            pcVar6 = pcVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00406b38:
          if (iVar7 == 0) goto LAB_00406d40;
        }
        iVar4 = iVar4 + 1;
        piVar9 = piVar9 + 0x1c;
      } while (iVar4 < iVar5);
      iVar3 = 0;
    }
    else {
      iVar4 = 0;
      if (iVar5 < 1) goto LAB_00406d45;
      iVar3 = *(int *)(param_1 + 800);
      piVar9 = (int *)(iVar3 + 0x60);
      do {
        pbVar8 = *(byte **)(*piVar9 + 0x40);
        if (pbVar8 != (byte *)0x0) {
          pcVar6 = "Corner_a_1";
          do {
            bVar1 = *pcVar6;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00406b94:
              iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00406b99;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar6[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00406b94;
            pcVar6 = pcVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00406b99:
          if (iVar7 == 0) goto LAB_00406d40;
        }
        iVar4 = iVar4 + 1;
        piVar9 = piVar9 + 0x1c;
      } while (iVar4 < iVar5);
      iVar3 = 0;
    }
    break;
  case 2:
    iVar5 = (int)*(short *)(param_1 + 0x324);
    if (*(int *)(param_1 + 0xb30) == 0) {
      iVar4 = 0;
      if (iVar5 < 1) goto LAB_00406d45;
      iVar3 = *(int *)(param_1 + 800);
      piVar9 = (int *)(iVar3 + 0x60);
      do {
        pbVar8 = *(byte **)(*piVar9 + 0x40);
        if (pbVar8 != (byte *)0x0) {
          pcVar6 = "Corner_c_0";
          do {
            bVar1 = *pcVar6;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00406c04:
              iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00406c09;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar6[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00406c04;
            pcVar6 = pcVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00406c09:
          if (iVar7 == 0) goto LAB_00406d40;
        }
        iVar4 = iVar4 + 1;
        piVar9 = piVar9 + 0x1c;
      } while (iVar4 < iVar5);
      iVar3 = 0;
    }
    else {
      iVar4 = 0;
      if (iVar5 < 1) goto LAB_00406d45;
      iVar3 = *(int *)(param_1 + 800);
      piVar9 = (int *)(iVar3 + 0x60);
      do {
        pbVar8 = *(byte **)(*piVar9 + 0x40);
        if (pbVar8 != (byte *)0x0) {
          pcVar6 = "Corner_c_1";
          do {
            bVar1 = *pcVar6;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00406c65:
              iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00406c6a;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar6[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00406c65;
            pcVar6 = pcVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00406c6a:
          if (iVar7 == 0) goto LAB_00406d40;
        }
        iVar4 = iVar4 + 1;
        piVar9 = piVar9 + 0x1c;
      } while (iVar4 < iVar5);
      iVar3 = 0;
    }
    break;
  case 3:
    iVar5 = (int)*(short *)(param_1 + 0x324);
    if (*(int *)(param_1 + 0xb30) == 0) {
      iVar4 = 0;
      if (iVar5 < 1) goto LAB_00406d45;
      iVar3 = *(int *)(param_1 + 800);
      piVar9 = (int *)(iVar3 + 0x60);
      do {
        pbVar8 = *(byte **)(*piVar9 + 0x40);
        if (pbVar8 != (byte *)0x0) {
          pcVar6 = "Corner_b_0";
          do {
            bVar1 = *pcVar6;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00406cd5:
              iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00406cda;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar6[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00406cd5;
            pcVar6 = pcVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00406cda:
          if (iVar7 == 0) goto LAB_00406d40;
        }
        iVar4 = iVar4 + 1;
        piVar9 = piVar9 + 0x1c;
      } while (iVar4 < iVar5);
      iVar3 = 0;
    }
    else {
      iVar4 = 0;
      if (iVar5 < 1) goto LAB_00406d45;
      iVar3 = *(int *)(param_1 + 800);
      piVar9 = (int *)(iVar3 + 0x60);
      do {
        pbVar8 = *(byte **)(*piVar9 + 0x40);
        if (pbVar8 != (byte *)0x0) {
          pcVar6 = "Corner_b_1";
          do {
            bVar1 = *pcVar6;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00406d2b:
              iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00406d30;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar6[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00406d2b;
            pcVar6 = pcVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00406d30:
          if (iVar7 == 0) goto LAB_00406d40;
        }
        iVar4 = iVar4 + 1;
        piVar9 = piVar9 + 0x1c;
      } while (iVar4 < iVar5);
      iVar3 = 0;
    }
  }
  goto switchD_00406a0b_default;
LAB_00406d40:
  if (iVar4 == -1) {
LAB_00406d45:
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 * 0x70 + iVar3;
  }
switchD_00406a0b_default:
  uVar2 = 0x3f800000;
  if ((*(uint *)(param_1 + 0xb9c) >> ((byte)local_8 & 0x1f) & 1) != 0) {
    uVar2 = 0x3f000000;
  }
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x1c) = uVar2;
  }
  local_8 = local_8 + 1;
  if (3 < local_8) {
    return;
  }
  goto LAB_004069f1;
}

// 00407010  FUN_00407010  size=453  [between]
void __fastcall FUN_00407010(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iStack_74;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [20];
  uint uStack_50;
  uint uStack_4c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  
  FUN_004066f0();
  iVar8 = 0;
  iVar5 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
  if (0 < iVar5) {
    do {
      piVar6 = (int *)(**(code **)(*(int *)param_1[0x1ec] + 300))(auStack_64,iVar8);
      iVar5 = *piVar6;
      if (iVar5 != 0) {
        uVar9 = uStack_50 | 0x100000;
        puVar7 = (uint *)(**(code **)(*param_1 + 0x68))();
        uStack_38 = *puVar7;
        uStack_34 = puVar7[1];
        uStack_30 = puVar7[2];
        puVar7 = (uint *)FUN_00a925a0(auStack_68);
        uVar4 = *(uint *)(iVar5 + 0xc);
        uVar1 = *puVar7;
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        if (uVar4 != 0) {
          puVar7 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
          *puVar7 = *puVar7 | 0x80000;
          puVar7[0x15] = 0x18e;
          *puVar7 = *puVar7 | 0x100000;
          puVar7[0x16] = 0x461c4000;
          *puVar7 = *puVar7 | 0x800000;
          puVar7[0x19] = 100;
          *puVar7 = *puVar7 | 0x200000;
          puVar7[0x17] = uVar9;
          *puVar7 = *puVar7 | 0x400000;
          puVar7[0x18] = uStack_4c;
          *puVar7 = *puVar7 | 0x1000000;
          puVar7[0x1a] = uStack_38;
          *puVar7 = *puVar7 | 0x2000000;
          puVar7[0x1b] = uStack_34;
          *puVar7 = *puVar7 | 0x4000000;
          puVar7[0x1c] = uStack_30;
          *puVar7 = *puVar7 | 0x8000000;
          puVar7[0x1d] = uVar1;
          *puVar7 = *puVar7 | 0x10000000;
          puVar7[0x1e] = uVar2;
          *puVar7 = *puVar7 | 0x20000000;
          puVar7[0x1f] = uVar3;
        }
      }
      iVar8 = iStack_74 + 1;
      iVar5 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
      iStack_74 = iVar8;
    } while (iVar8 < iVar5);
  }
  if (DAT_01885d68 != 1) {
    piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar6 = *piVar6 + -1;
    if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 004071E0  FUN_004071e0  size=171  [between]
undefined4 __fastcall FUN_004071e0(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  
  pfVar5 = *(float **)(param_1 + 0xb8c);
  if (pfVar5 != pfVar5 + *(int *)(param_1 + 0xb94) * 2) {
    do {
      fVar6 = (float10)FUN_00e049b0();
      fVar2 = *pfVar5;
      *pfVar5 = (float)((float10)fVar2 - fVar6);
      if ((float10)0 < (float10)fVar2 - fVar6) {
        pfVar5 = pfVar5 + 2;
      }
      else {
        *(float *)(param_1 + 0x624) = pfVar5[1];
        iVar4 = (int)pfVar5 - *(int *)(param_1 + 0xb8c) >> 3;
        iVar3 = iVar4;
        if (iVar4 < *(int *)(param_1 + 0xb94) + -1) {
          do {
            puVar1 = (undefined4 *)(*(int *)(param_1 + 0xb8c) + iVar3 * 8);
            *puVar1 = *(undefined4 *)(*(int *)(param_1 + 0xb8c) + 8 + iVar3 * 8);
            puVar1[1] = puVar1[3];
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0xb94) + -1);
        }
        *(int *)(param_1 + 0xb94) = *(int *)(param_1 + 0xb94) + -1;
        pfVar5 = (float *)(*(int *)(param_1 + 0xb8c) + iVar4 * 8);
      }
    } while (pfVar5 != (float *)(*(int *)(param_1 + 0xb8c) + *(int *)(param_1 + 0xb94) * 8));
  }
  return 1;
}

// 004072A0  FUN_004072a0  size=80  [between]
undefined4 __thiscall FUN_004072a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0xb94) < *(int *)(param_1 + 0xb90)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0xb8c) + *(int *)(param_1 + 0xb94) * 8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_2;
      puVar1[1] = param_3;
    }
    *(int *)(param_1 + 0xb94) = *(int *)(param_1 + 0xb94) + 1;
    return 1;
  }
  return 1;
}

// 004072F0  Ba5000::vf48  size=1832  [class]
void __fastcall Ba5000::vf48(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  BehaviorBgBase::vf48();
  fVar3 = (float10)FUN_00928de0();
  if ((fVar3 < (float10)(float)(undefined *)0x0 != (fVar3 == (float10)(float)(undefined *)0x0)) &&
     (param_1[0x2cc] == 0)) {
    param_1[0x187] = 2;
    param_1[0x2cc] = 1;
    param_1[0x186] = (param_1[0x2e8] != 1) + 5;
    iVar2 = FUN_00dda320(0);
    if (iVar2 == 1) {
      FUN_00dda360(0,0x3f800000,0x3f800000,10);
    }
  }
  switch(param_1[0x186]) {
  case 1:
    FUN_00a8ca50(5,0,0);
    FUN_00a8ca50(1,0,0);
    FUN_00a8ca50(0xb,0,0);
    break;
  case 2:
    FUN_00a8ca50(5,0,0);
    FUN_00a8ca50(0xb,0,0);
    uVar4 = 2;
    goto LAB_00407464;
  case 3:
    uVar4 = 3;
    goto LAB_00407464;
  case 4:
    FUN_00a8ca50(3,0,0);
    FUN_00a8ca50(5,0,0);
    FUN_00a8ca50(1,0,0);
    FUN_00a8ca50(0xb,0,0);
    (**(code **)(*param_1 + 0x20))();
    break;
  case 5:
    FUN_00aa92c0(5);
  case 6:
    FUN_00aa92c0(1);
    uVar4 = 0xb;
LAB_00407464:
    FUN_00aa92c0(uVar4);
  }
  param_1[0x186] = 0;
  switch(param_1[0x187]) {
  case 1:
    FUN_00aa92c0(10);
    break;
  case 2:
    FUN_00a8ca50(10,0,0);
    break;
  case 3:
    param_1[0x2cd] = 1;
    break;
  case 4:
    FUN_00e5e0c0("ba5000_se_freighter_exp03",param_1,0,0);
  }
  param_1[0x187] = 0;
  switch(param_1[0x188]) {
  case 1:
    if (param_1[0x2cc] == 1) break;
    iVar2 = FUN_00dda320(0);
    if (iVar2 == 1) {
      FUN_00dda360(0,0x3f4ccccd,0x3f4ccccd,10);
    }
  case 2:
    if (param_1[0x2cc] != 1) {
      FUN_004068c0();
      param_1[0x187] = 2;
      param_1[0x2cc] = 1;
      param_1[0x186] = (param_1[0x2e8] != 1) + 5;
    }
    break;
  case 3:
    FUN_00aa92c0(4);
    break;
  case 4:
    FUN_00a8ca50(4,0,0);
  }
  param_1[0x188] = 0;
  switch(param_1[0x189]) {
  case 1:
    if (param_1[0x2d7] != 0) {
      FUN_00e5ca30(param_1[0x2d7],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_start",param_1,0,0);
    param_1[0x2d7] = iVar2;
    break;
  case 2:
    if (param_1[0x2d7] != 0) {
      FUN_00e5ca30(param_1[0x2d7],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_loop",param_1,0,0);
    param_1[0x2d7] = iVar2;
    break;
  case 3:
    if (param_1[0x2d7] != 0) {
      FUN_00e5ca30(param_1[0x2d7],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("Stop_ba5000_se_freighter_collapse_loop",param_1,0,0);
    param_1[0x2d7] = iVar2;
    break;
  case 4:
    if (param_1[0x2d7] != 0) {
      FUN_00e5ca30(param_1[0x2d7],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_exp02",param_1,0,0);
    param_1[0x2d7] = iVar2;
    break;
  case 5:
    if (param_1[0x2d8] != 0) {
      FUN_00e5ca30(param_1[0x2d8],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_exp01",param_1,0,0);
    param_1[0x2d8] = iVar2;
    break;
  case 6:
    if (param_1[0x2d8] != 0) {
      FUN_00e5ca30(param_1[0x2d8],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_collapse_loop",param_1,0,0);
    param_1[0x2d8] = iVar2;
    break;
  case 7:
    if (param_1[0x2d8] != 0) {
      FUN_00e5ca30(param_1[0x2d8],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("Stop_ba5000_se_freighter_collapse_loop",param_1,0,0);
    param_1[0x2d8] = iVar2;
    break;
  case 8:
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_brake_c01",param_1,0,0);
    param_1[0x2d9] = iVar2;
    break;
  case 9:
    if (param_1[0x2d9] == 0) {
      iVar2 = FUN_00e5e0c0("ba5000_se_freighter_brake_c01",param_1,0,0);
      param_1[0x2d9] = iVar2;
    }
    FUN_00e5e0c0("ba5000_se_freighter_brake_c02",param_1,0,0);
    break;
  case 10:
    if (param_1[0x2d9] == 0) {
      iVar2 = FUN_00e5e0c0("ba5000_se_freighter_brake_c01",param_1,0,0);
      param_1[0x2d9] = iVar2;
    }
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_brake_c03",param_1,0,0);
    param_1[0x2d9] = iVar2;
    break;
  case 0xb:
    if (param_1[0x2d9] == 0) {
      iVar2 = FUN_00e5e0c0("ba5000_se_freighter_brake_c01",param_1,0,0);
      param_1[0x2d9] = iVar2;
    }
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_brake_c04",param_1,0,0);
    param_1[0x2d9] = iVar2;
    break;
  case 0xc:
    if (param_1[0x2d9] == 0) {
      iVar2 = FUN_00e5e0c0("ba5000_se_freighter_brake_c01",param_1,0,0);
      param_1[0x2d9] = iVar2;
    }
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_brake_c05",param_1,0,0);
    param_1[0x2d9] = iVar2;
    break;
  case 0xd:
    FUN_00e5e0c0("Stop_ba5000_se_freighter_brake",param_1,0,0);
    param_1[0x2d9] = 0;
    break;
  case 0xe:
    if (param_1[0x2d7] != 0) {
      FUN_00e5ca30(param_1[0x2d7],0x40400000);
    }
    FUN_00e5e0c0("ba5000_se_freighter_start",param_1,0,0);
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_loop",param_1,0,0);
    param_1[0x2d7] = iVar2;
    break;
  case 0xf:
    if (param_1[0x2d8] != 0) {
      FUN_00e5ca30(param_1[0x2d8],0x40400000);
    }
    FUN_00e5e0c0("ba5000_se_freighter_exp01",param_1,0,0);
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_collapse_loop",param_1,0,0);
    param_1[0x2d8] = iVar2;
    break;
  case 0x10:
    if (param_1[0x2d7] != 0) {
      FUN_00e5ca30(param_1[0x2d7],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_loop",param_1,0,0);
    param_1[0x2d7] = iVar2;
    if (param_1[0x2d8] != 0) {
      FUN_00e5ca30(param_1[0x2d8],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_collapse_loop",param_1,0,0);
    param_1[0x2d8] = iVar2;
    break;
  case 0x11:
    if (param_1[0x2d9] != 0) {
      FUN_00e5ca30(param_1[0x2d9],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("Stop_ba5000_se_freighter_brake",param_1,0,0);
    param_1[0x2d9] = iVar2;
    if (param_1[0x2d7] != 0) {
      FUN_00e5ca30(param_1[0x2d7],0x40400000);
    }
    iVar2 = FUN_00e5e0c0("ba5000_se_freighter_exp02",param_1,0,0);
    param_1[0x2d7] = iVar2;
    break;
  case 0x12:
    if (param_1[0x2d7] != 0) {
      FUN_00e5ca30(param_1[0x2d7],0x40400000);
    }
    if (param_1[0x2d8] != 0) {
      FUN_00e5ca30(param_1[0x2d8],0x40400000);
    }
    if (param_1[0x2d9] != 0) {
      FUN_00e5ca30(param_1[0x2d9],0x40400000);
    }
  }
  param_1[0x189] = 0;
  FUN_004071e0();
  if ((param_1[0x2d1] == 1) &&
     (fVar1 = (float)param_1[0x2d2], param_1[0x2d2] = (int)(fVar1 + 1.0), 60.0 < fVar1 + 1.0)) {
    FUN_00407010();
    param_1[0x2d1] = 0;
  }
  FUN_004069d0();
  return;
}

// 00AB0D40  Ba5000::Ba5000  size=50  [class]
undefined4 * __fastcall Ba5000::Ba5000(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  param_1[0x2e2] = 0;
  param_1[0x2e3] = 0;
  param_1[0x2e4] = 0;
  param_1[0x2e5] = 0;
  param_1[0x2e6] = 0;
  return param_1;
}

// 00AB0D80  Ba5000::vf04  size=6  [class]
undefined * Ba5000::vf04(void)

{
  return &DAT_01b34b38;
}

// 00AB95A0  Ba5000::destruct  size=99  [class]
int __thiscall Ba5000::destruct(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 0xb8c) != 0) {
    *(undefined4 *)(param_1 + 0xb94) = 0;
    if (*(int *)(param_1 + 0xb98) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xb8c),0);
      *(undefined4 *)(param_1 + 0xb98) = 0;
    }
    *(undefined4 *)(param_1 + 0xb8c) = 0;
    *(undefined4 *)(param_1 + 0xb90) = 0;
  }
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

