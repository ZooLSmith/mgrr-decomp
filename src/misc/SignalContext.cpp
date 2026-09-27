// src/misc/SignalContext.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0043E870..00A81B80, 23 functions

#include "mgrr.h"
#include "SignalContext.h"

// 0043E870  SignalContext::vf00  size=6  [class]
undefined * SignalContext::vf00(void)

{
  return &DAT_01dc53dc;
}

// 0043E890  SignalContext::vf04  size=31  [class]
undefined4 * __thiscall SignalContext::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A1B8D0  SignalContext::SignalContext  size=522  [class]
void SignalContext::SignalContext(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_20;
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar9 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x7c8) != 0) {
      local_4 = *(undefined4 *)(param_1 + 0x4f0);
      local_8 = 0;
      local_c = HoldEntitySignalContext::vftable;
      FUN_00d89e90(0x16,&local_c);
    }
    uVar2 = FUN_00a94360();
    if (0 < (int)uVar2) {
      local_20 = 0;
      iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar2 * 0x14 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar2 * 0x14),param_4);
      if (iVar3 != 0) {
        local_4 = *(undefined4 *)(param_1 + 0x4f0);
        local_8 = 0;
        local_c = HoldEntitySignalContext::vftable;
        FUN_00d89e90(0x16,&local_c);
        if (0 < (int)uVar2) {
          puVar10 = (undefined4 *)(iVar3 + 8);
          do {
            puVar4 = (undefined4 *)FUN_00a94380(iVar9);
            if (((puVar4 != (undefined4 *)0x0) && (iVar5 = FUN_00a81330(), iVar5 != 0)) &&
               (puVar4[5] != -1)) {
              puVar10[-2] = *puVar4;
              puVar10[-1] = puVar4[3];
              *puVar10 = puVar4[4];
              puVar10[1] = puVar4[5];
              puVar10[2] = iVar5;
              FUN_004b53d0();
              local_20 = local_20 + 1;
              puVar10 = puVar10 + 5;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)uVar2);
        }
        if (0 < local_20) {
          puVar10 = (undefined4 *)(iVar3 + 0xc);
          param_4 = local_20;
          do {
            uVar6 = FUN_00a07340(*puVar10);
            uVar1 = puVar10[1];
            piVar7 = (int *)FUN_00a7c8a0();
            iVar9 = FUN_00a1a680(param_2,param_3,*puVar10);
            uVar8 = 0;
            if (iVar9 != 0) {
              uVar8 = *(undefined4 *)(iVar9 + 0x4f0);
              FUN_00a8c640(puVar10[-3],uVar8,uVar1,puVar10[-2],puVar10[-1],uVar6);
            }
            (**(code **)(*piVar7 + 0x25c))(puVar10[-3],*(undefined4 *)(param_1 + 0x4f0),uVar8);
            if (iVar9 == 0) {
              local_4 = puVar10[1];
              local_8 = 0;
              local_c = HoldEntitySignalContext::vftable;
              FUN_00d89e90(0x16,&local_c);
              local_c = vftable;
            }
            puVar10 = puVar10 + 5;
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
        FUN_00dd4940(iVar3);
      }
    }
  }
  return;
}

// 00A1BAF0  FUN_00a1baf0  size=471  [callgraph]
undefined4 FUN_00a1baf0(int *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *local_30;
  int local_2c;
  int local_28;
  undefined4 local_20;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = param_3[1];
  if ((iVar1 == -1) && (*param_3 == -1)) {
    FUN_00dd5650(&DAT_0165cc58);
    return 1;
  }
  if (iVar1 != -1) {
    if (param_3[2] != 0) {
      FUN_00dd5650(&DAT_0165cc30);
      return 1;
    }
    if (*param_3 == -1) {
      FUN_00dd5650(&DAT_0165cbf8);
      return 1;
    }
    iVar2 = *(int *)(param_2 + 0x360);
    if (*(int *)(param_2 + 0x360) == 0) {
      iVar2 = param_2;
    }
    FUN_00a7ca40();
    local_20 = param_4[3];
    local_10 = param_4[1];
    local_30 = "CutParts";
    local_c = *(undefined4 *)param_4[2];
    local_8 = ((undefined4 *)param_4[2])[1];
    local_2c = iVar1;
    local_28 = iVar1;
    local_18 = iVar2;
    iVar1 = FUN_00a81b80(&local_30);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_0165cbc8);
      return 0;
    }
    iVar2 = FUN_00a7c800();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x48c) = *param_4;
      FUN_00d8bbd0(*param_4);
    }
    param_1[1] = iVar1;
  }
  iVar1 = *param_3;
  if (iVar1 != -1) {
    if (iVar1 == *(int *)(param_2 + 0x4b0)) {
      uVar3 = param_4[3];
    }
    else {
      uVar3 = 0;
    }
    FUN_00a7ca40();
    local_10 = param_4[1];
    local_30 = "CutModel";
    local_18 = param_2;
    local_c = *(undefined4 *)param_4[2];
    local_8 = ((undefined4 *)param_4[2])[1];
    local_2c = iVar1;
    local_28 = iVar1;
    local_20 = uVar3;
    iVar1 = FUN_00a81b80(&local_30);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_0165cb94);
      return 0;
    }
    iVar2 = FUN_00a7c800();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x48c) = *param_4;
      FUN_00d8bbd0(*param_4);
    }
    *param_1 = iVar1;
  }
  return 1;
}

// 00A1BCD0  FUN_00a1bcd0  size=69  [callgraph]
void __thiscall
FUN_00a1bcd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x38) + iVar3;
      if (*(int *)(iVar1 + 0x20) == 2) {
        cCutJobList::entryObject(param_3,param_4,iVar1,4,param_5);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x50;
    } while (iVar2 < *(int *)(param_1 + 0x3c));
  }
  return;
}

// 00A1BD20  FUN_00a1bd20  size=88  [callgraph]
int __thiscall FUN_00a1bd20(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 4);
    do {
      pbVar3 = (byte *)*puVar6;
      pbVar5 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a1bd60:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00a1bd65;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a1bd60;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00a1bd65:
      if (iVar4 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      puVar6 = puVar6 + 3;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  return -1;
}

// 00A1BD80  FUN_00a1bd80  size=75  [callgraph]
undefined4 __thiscall FUN_00a1bd80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = 0;
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar4 = 0;
    do {
      iVar1 = FUN_00fdbbd0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4 + iVar4),param_2);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x1c)) = param_3;
        uVar3 = 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  return uVar3;
}

// 00A1BDD0  FUN_00a1bdd0  size=272  [callgraph]
void __fastcall FUN_00a1bdd0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  FUN_00a1a050();
  if (param_1[0x2e] != 0) {
    FUN_00dd4940(param_1[0x2e]);
  }
  iVar1 = param_1[0xe];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -0x10);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      FUN_00974ae0();
    }
    FUN_00dd4940(iVar1 + -0x10);
  }
  iVar1 = param_1[10];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      FUN_009818f0();
    }
    FUN_00dd4940(iVar1 + -4);
  }
  if (param_1[8] != 0) {
    FUN_00dd4940(param_1[8]);
  }
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    puVar3 = (undefined2 *)(iVar1 + 8 + iVar2 * 0xc);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      puVar3[-6] = 0xffff;
      *(undefined4 *)(puVar3 + -10) = 1;
      *(undefined4 *)(puVar3 + -8) = 0;
      puVar3[-5] = 0xffff;
      puVar3 = puVar3 + -6;
    }
    FUN_00dd4940(iVar1 + -4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return;
}

// 00A1BEF0  FUN_00a1bef0  size=104  [callgraph]
undefined4 __thiscall
FUN_00a1bef0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_00a1bdd0();
  iVar1 = FUN_00a1af00(param_3,param_4);
  if (iVar1 != 0) {
    iVar1 = FUN_00a1a1f0(param_2,param_3,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_00a1a330(param_3,param_4);
      if (iVar1 != 0) {
        iVar1 = FUN_00a1a400(param_3,param_4);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x14) = param_3;
          return 1;
        }
      }
    }
  }
  FUN_00a1bdd0();
  return 0;
}

// 00A1BF60  FUN_00a1bf60  size=418  [callgraph]
undefined4 __thiscall FUN_00a1bf60(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  float *_Src;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  byte *pbVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int local_3c;
  int local_38;
  uint local_30;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  uVar1 = FUN_00a1d5c0();
  local_30 = (uint)(short)param_2[2];
  if (0 < (int)local_30) {
    iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)local_30 * 0x40 >> 0x20) != 0) |
                         (uint)((ulonglong)local_30 * 0x40),uVar1);
    if (iVar2 == 0) {
      return 0;
    }
    local_38 = param_2[3];
    *(uint *)(param_1 + 0xa4) = local_30;
    if (0 < (int)local_30) {
      local_3c = 0;
      pfVar7 = (float *)(iVar2 + 0x34);
      do {
        _Src = (float *)(*param_2 + local_3c + 0x10);
        pfVar9 = _Src;
        pfVar11 = (float *)(*(int *)(param_1 + 0xa0) + (-0x34 - iVar2) + (int)pfVar7);
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar11 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          pfVar11 = pfVar11 + 1;
        }
        D3DXVec3TransformNormal(&local_20,local_38,_Src);
        if (pfVar7 + -0xd != _Src) {
          FID_conflict__memcpy(pfVar7 + -0xd,_Src,0x40);
        }
        local_3c = local_3c + 0xb0;
        local_38 = local_38 + 0x10;
        local_30 = local_30 - 1;
        pfVar7[-1] = pfVar7[-1] + local_20;
        *pfVar7 = *pfVar7 + fStack_1c;
        pfVar7[1] = pfVar7[1] + fStack_18;
        pfVar7 = pfVar7 + 0x10;
      } while (local_30 != 0);
    }
    if (0 < param_4) {
      pbVar8 = (byte *)(param_3 + 4);
      local_30 = param_4;
      do {
        iVar4 = *(int *)(param_1 + 0xa8);
        iVar6 = 0;
        if (*pbVar8 != 0) {
          iVar3 = 0;
          do {
            puVar10 = (undefined4 *)((uint)*(byte *)(*(int *)(pbVar8 + -4) + iVar6) * 0x40 + iVar2);
            puVar12 = (undefined4 *)(*(int *)(pbVar8 + iVar4 + (-4 - param_3)) + iVar3);
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar12 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
            }
            iVar6 = iVar6 + 1;
            iVar3 = iVar3 + 0x40;
          } while (iVar6 < (int)(uint)*pbVar8);
        }
        pbVar8 = pbVar8 + 8;
        local_30 = local_30 + -1;
      } while (local_30 != 0);
    }
    FUN_00dd4940(iVar2);
  }
  return 1;
}

// 00A1C110  FUN_00a1c110  size=468  [callgraph]
undefined4 __thiscall FUN_00a1c110(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  
  uVar8 = param_3;
  iVar4 = *(int *)(param_2 + 0x360);
  if (*(int *)(param_2 + 0x360) == 0) {
    iVar4 = param_2;
  }
  uVar11 = (uint)*(ushort *)(*(int *)(param_1 + 0x14) + 0x60);
  sVar1 = *(short *)(iVar4 + 0x358);
  iVar5 = FUN_00a06f30();
  sVar2 = *(short *)(*(int *)(param_1 + 0x14) + 0x38);
  if (0 < sVar1) {
    lVar3 = (ulonglong)(uint)(int)sVar1 * 0x40;
    iVar6 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,param_3);
    *(int *)(param_1 + 0xa0) = iVar6;
    if (iVar6 == 0) {
      return 0;
    }
  }
  if (uVar11 != 0) {
    *(uint *)(param_1 + 0xac) = uVar11;
    iVar6 = FUN_00dd3580(uVar11 * 8,param_3);
    *(int *)(param_1 + 0xa8) = iVar6;
    if (iVar6 == 0) {
      return 0;
    }
    param_3 = 0;
    if (uVar11 != 0) {
      pbVar12 = (byte *)(iVar5 + 4);
      do {
        iVar6 = *(int *)(param_1 + 0xa8);
        *(uint *)(pbVar12 + iVar6 + (-4 - iVar5) + 4) = (uint)*pbVar12;
        iVar7 = FUN_00dd3580((uint)*pbVar12 * 0x40,uVar8);
        *(int *)(pbVar12 + iVar6 + (-4 - iVar5)) = iVar7;
        if (iVar7 == 0) {
          return 0;
        }
        param_3 = param_3 + 1;
        pbVar12 = pbVar12 + 8;
      } while (param_3 < (int)uVar11);
    }
  }
  if (sVar2 == -1) {
    puVar10 = (undefined4 *)(param_2 + 0x10);
    puVar13 = (undefined4 *)(param_1 + 0x50);
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  else {
    iVar6 = (int)sVar2;
    if (((iVar6 < 0) || (*(short *)(iVar4 + 0x358) <= iVar6)) ||
       (iVar7 = iVar6 * 0xb0 + *(int *)(iVar4 + 0x350), iVar7 == 0)) {
      return 0;
    }
    puVar10 = (undefined4 *)(iVar7 + 0x10);
    puVar13 = (undefined4 *)(param_1 + 0x50);
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    iVar6 = FUN_00a06ec0((undefined4 *)(param_1 + 0x90),iVar6);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
  }
  uVar8 = FUN_00a1bf60((int *)(iVar4 + 0x350),iVar5,uVar11);
  return uVar8;
}

// 00A1C2F0  FUN_00a1c2f0  size=315  [callgraph]
undefined4 __thiscall FUN_00a1c2f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_00a1c110(param_2,param_4);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_0165ccb8);
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      iVar5 = FUN_00971ed0(*(undefined4 *)(param_1 + 0x14),param_1 + 0x50,param_4);
      if (iVar5 == 0) goto LAB_00a1c412;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x3c));
  }
  iVar4 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(iVar4 + 0xa8);
  uVar1 = *(uint *)(iVar4 + 0xac);
  uVar2 = *(undefined4 *)(iVar4 + 0xa0);
  iVar4 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 0x80 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar1 * 0x80),param_4);
  uVar3 = uVar1;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    while (-1 < (int)(uVar3 - 1)) {
      FUN_00971230();
      uVar3 = uVar3 - 1;
    }
  }
  *(int *)(param_1 + 0x40) = iVar4;
  if (iVar4 == 0) {
LAB_00a1c412:
    FUN_00dd5650(&DAT_0165cc8c);
    return 0;
  }
  param_2 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar4 = FUN_009740f0(iVar5,*(undefined4 *)(param_1 + 0x38),uVar2,param_4);
      if (iVar4 == 0) goto LAB_00a1c412;
      param_2 = param_2 + 1;
      iVar5 = iVar5 + 0x40;
    } while (param_2 < (int)uVar1);
  }
  *(uint *)(param_1 + 0x44) = uVar1;
  return 1;
}

// 00A1C430  FUN_00a1c430  size=370  [callgraph]
undefined4 __thiscall FUN_00a1c430(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x10) != -1) {
    return 0;
  }
  iVar2 = FUN_00a1b020(param_2,*(undefined4 *)(param_3 + 0xe0),*(undefined4 *)(param_3 + 0xd8),
                       *(undefined4 *)(param_3 + 0xe0),*(undefined4 *)(param_3 + 0xdc));
  if (iVar2 != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar5 = 0;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar2 * 8) =
             *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x1c));
        *(undefined4 *)(*(int *)(param_1 + 0x20) + 4 + iVar2 * 8) = 3;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0xc;
      } while (iVar2 < *(int *)(param_1 + 0x24));
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x3c)) {
      do {
        iVar5 = FUN_00974900(param_2,param_3);
        if (iVar5 != 0) {
          bVar1 = true;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x3c));
      if (bVar1) {
        iVar2 = FUN_00d8cbf0(param_2,param_3);
        *(int *)(param_1 + 0x10) = iVar2;
        if ((iVar2 != -1) && (iVar2 = FUN_00a1c2f0(param_2,param_3,&DAT_01b7c060), iVar2 != 0)) {
          *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_3 + 0xe0);
          *(undefined4 *)(param_1 + 0x18) = 0;
          FUN_00d89e60(0x12);
          return 1;
        }
      }
    }
  }
  FUN_00a1a050();
  if ((*(int *)(param_2 + 0x4f0) != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    if ((*(int *)(param_3 + 0xe4) != 0) &&
       (((*(uint *)(param_2 + 0x4b4) & 0xf0000) == 0x20000 &&
        (*(uint *)(param_2 + 0x4b4) != 0x20180)))) {
      piVar4 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar4 + 0x34))(*(undefined4 *)(param_3 + 0xe0));
    }
    (**(code **)(*piVar3 + 0x1c8))();
  }
  return 0;
}

// 00A1C5B0  FUN_00a1c5b0  size=472  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00a1c749) */
/* WARNING: Removing unreachable block (ram,0x00a1c751) */
/* WARNING: Removing unreachable block (ram,0x00a1c753) */
/* WARNING: Removing unreachable block (ram,0x00a1c755) */
/* WARNING: Removing unreachable block (ram,0x00a1c757) */

void __thiscall FUN_00a1c5b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined2 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_24;
  undefined4 local_20;
  
  FUN_009dbcf0();
  local_64 = 0;
  if (0 < *(int *)(param_3 + 0xc4)) {
    psVar3 = (short *)(*(int *)(param_3 + 0xc0) + 0x68);
    do {
      if ((*psVar3 < 0) || (*(int *)(param_1 + 0xa4) <= (int)*psVar3)) {
        local_24 = param_1 + 0x50;
        local_3c = 0xffff;
      }
      else {
        local_24 = *psVar3 * 0x40 + *(int *)(param_1 + 0xa0);
        iVar1 = (int)*psVar3;
        iVar2 = *(int *)(param_2 + 0x360);
        if (*(int *)(param_2 + 0x360) == 0) {
          iVar2 = param_2;
        }
        if (((iVar1 < 0) || (*(short *)(iVar2 + 0x358) <= iVar1)) ||
           (iVar2 = iVar1 * 0xb0 + *(int *)(iVar2 + 0x350), iVar2 == 0)) {
          local_3c = 0xffff;
        }
        else {
          local_3c = *(undefined2 *)(iVar2 + 0xa0);
        }
      }
      FUN_009dbd80(param_2);
      local_60 = *(undefined4 *)(psVar3 + -0x34);
      local_5c = *(undefined4 *)(psVar3 + -0x32);
      local_58 = *(undefined4 *)(psVar3 + -0x30);
      local_54 = *(undefined4 *)(psVar3 + -0x2e);
      local_50 = *(float *)(psVar3 + -0x2c);
      local_4c = *(float *)(psVar3 + -0x2a);
      local_48 = *(float *)(psVar3 + -0x28);
      local_44 = *(undefined4 *)(psVar3 + -0x26);
      local_20 = *(undefined4 *)(psVar3 + -4);
      local_38 = *(undefined4 *)(psVar3 + -2);
      local_34 = 0x100;
      if (((local_50 == 0.0) && (local_4c == 0.0)) && (local_48 == 0.0)) {
        FUN_00dd5650("ModelCutCtrl::callCutFaceEffect::normal vec is zero");
      }
      else {
        FUN_009f26b0(&local_60);
      }
      local_64 = local_64 + 1;
      psVar3 = psVar3 + 0x38;
    } while (local_64 < *(int *)(param_3 + 0xc4));
  }
  return;
}

// 00A1C790  FUN_00a1c790  size=370  [callgraph]
void __thiscall FUN_00a1c790(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *local_c;
  int *local_4;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0xb4)) {
    local_c = (int *)(param_3 + 8);
    do {
      iVar1 = *(int *)(param_2 + 4 + iVar6 * 8);
      iVar5 = 0;
      if (*(int *)(param_2 + iVar6 * 8) == 0) {
        local_4 = (int *)0x0;
      }
      else {
        iVar5 = FUN_00a7c800();
        local_4 = (int *)FUN_00a7c8a0();
      }
      if (iVar1 == 0) {
        iVar1 = 0;
        piVar2 = (int *)0x0;
      }
      else {
        iVar1 = FUN_00a7c800();
        piVar2 = (int *)FUN_00a7c8a0();
      }
      if (iVar5 == 0) {
        if (iVar1 != 0) {
          FUN_00dd5650(&DAT_0165cd40);
        }
      }
      else {
        if (iVar1 != 0) {
          FUN_009f8a10(iVar1);
        }
        FUN_00a1c5b0(iVar5,*(undefined4 *)(param_4 + iVar6 * 4));
      }
      if ((*local_c != 0) && (local_4 != (int *)0x0)) {
        if (piVar2 == (int *)0x0) {
          (**(code **)(*local_4 + 0x1bc))(param_5);
        }
        else {
          (**(code **)(*piVar2 + 0x1c0))(param_5,local_4);
        }
      }
      local_c = local_c + 3;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0xb4));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0xb4)) {
    piVar2 = (int *)(param_3 + 8);
    do {
      if (*piVar2 == 0) {
        iVar1 = *(int *)(param_2 + 4 + iVar6 * 8);
        if (*(int *)(param_2 + iVar6 * 8) == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)FUN_00a7c8a0();
        }
        if (iVar1 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_00a7c8a0();
        }
        if (piVar3 != (int *)0x0) {
          if (piVar4 == (int *)0x0) {
            (**(code **)(*piVar3 + 0x1bc))(param_5);
          }
          else {
            (**(code **)(*piVar4 + 0x1c0))(param_5,piVar3);
          }
        }
      }
      iVar6 = iVar6 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar6 < *(int *)(param_1 + 0xb4));
  }
  return;
}

// 00A1C910  FUN_00a1c910  size=1131  [callgraph]
undefined4 __thiscall FUN_00a1c910(int param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  int local_4;
  
  local_18 = 0;
  if (*(int *)(param_2 + 0x4f0) == 0) {
    local_20 = (int *)0x0;
  }
  else {
    local_20 = (int *)FUN_00a7c8a0();
  }
  lVar1 = (ulonglong)*(uint *)(param_1 + 0xb4) * 8;
  piVar2 = (int *)FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_4);
  lVar1 = (ulonglong)*(uint *)(param_1 + 0xb4) * 4;
  puVar3 = (undefined4 *)
           FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_4);
  lVar1 = (ulonglong)*(uint *)(param_1 + 0xb4) * 4;
  puVar4 = (undefined4 *)
           FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_4);
  lVar1 = (ulonglong)*(uint *)(param_1 + 0xb4) * 0xc;
  iVar5 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_4);
  if ((((piVar2 == (int *)0x0) || (puVar3 == (undefined4 *)0x0)) || (puVar4 == (undefined4 *)0x0))
     || (iVar5 == 0)) {
    FUN_00dd5650(&DAT_0165cd70);
LAB_00a1ccb6:
    FUN_00dd5650(&DAT_0165cd58);
    if ((piVar2 != (int *)0x0) && (iVar11 = 0, 0 < *(int *)(param_1 + 0xb4))) {
      do {
        iVar7 = piVar2[iVar11 * 2 + 1];
        if (piVar2[iVar11 * 2] != 0) {
          FUN_00a805f0();
        }
        if (iVar7 != 0) {
          FUN_00a805f0();
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0xb4));
    }
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0xb4)) {
      do {
        iVar7 = FUN_00d8bc90(*(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar11 * 4));
        if (iVar7 != 0) {
          FUN_00a06770();
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0xb4));
    }
    FUN_00a07130();
  }
  else {
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0xb4)) {
      puVar9 = (undefined4 *)(iVar5 + 8);
      puVar10 = puVar4;
      do {
        piVar2[iVar11 * 2] = 0;
        piVar2[iVar11 * 2 + 1] = 0;
        *(undefined4 *)(((int)puVar3 - (int)puVar4) + (int)puVar10) = 0;
        puVar9[-2] = 0x42000;
        puVar9[-1] = 0xffffffff;
        *puVar9 = 0;
        uVar6 = FUN_00d8bc90(*(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar11 * 4));
        *puVar10 = uVar6;
        iVar11 = iVar11 + 1;
        puVar9 = puVar9 + 3;
        puVar10 = puVar10 + 1;
      } while (iVar11 < *(int *)(param_1 + 0xb4));
    }
    if (local_20 == (int *)0x0) {
      local_4 = 0;
    }
    else {
      (**(code **)(*local_20 + 0x30))();
      (**(code **)(*local_20 + 0x1b8))(iVar5,puVar4,*(undefined4 *)(param_1 + 0xb4));
      local_4 = local_20[0x128];
    }
    local_8 = param_2 + 0x344;
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0xb4)) {
      puVar10 = puVar3;
      piVar8 = piVar2;
      local_1c = iVar5;
      do {
        uStack_10 = *(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar11 * 4);
        uStack_c = *(undefined4 *)(((int)puVar4 - (int)puVar3) + (int)puVar10);
        iVar7 = FUN_00a1baf0(piVar8,param_2,local_1c,&uStack_10);
        if (iVar7 == 0) goto LAB_00a1ccb6;
        if (*piVar8 != 0) {
          uVar6 = FUN_00a7c8a0();
          *puVar10 = uVar6;
        }
        local_1c = local_1c + 0xc;
        iVar11 = iVar11 + 1;
        piVar8 = piVar8 + 2;
        puVar10 = puVar10 + 1;
      } while (iVar11 < *(int *)(param_1 + 0xb4));
    }
    if (local_20 != (int *)0x0) {
      FUN_00a1c790(piVar2,iVar5,puVar4,local_20);
      SignalContext::SignalContext(local_20,puVar3,*(undefined4 *)(param_1 + 0xb4),param_4);
      (**(code **)(*local_20 + 0x1c4))(iVar5,puVar3,*(undefined4 *)(param_1 + 0xb4));
      (**(code **)(*local_20 + 0x34))();
    }
    if (*(int *)(param_3 + 0xe4) != 0) {
      if (((*(int *)(param_2 + 0x330) == 0) || (*(int *)(*(int *)(param_2 + 0x330) + 0xcc) < 1)) &&
         (*(int *)(param_2 + 0x4b0) == 0xd024f)) {
        FUN_009c6540(0xd);
        FUN_00c81e40(0x38);
      }
      iVar11 = 0;
      if (0 < *(int *)(param_1 + 0xb4)) {
        do {
          piVar8 = (int *)FUN_00c1b9a0();
          (**(code **)(*piVar8 + 0x38))();
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(param_1 + 0xb4));
      }
      piVar8 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar8 + 0x6c))();
    }
    FUN_00d8bb10(param_2,param_3);
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0xb4)) {
      do {
        FUN_00d8bc00(*(int *)(param_1 + 0xb0) + iVar11 * 4);
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0xb4));
    }
    if (((*(int *)(param_3 + 0xe4) != 0) && ((*(uint *)(param_2 + 0x4b4) & 0xf0000) == 0x20000)) &&
       (*(uint *)(param_2 + 0x4b4) != 0x20180)) {
      piVar8 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar8 + 0x34))(*(undefined4 *)(param_3 + 0xe0));
    }
    local_18 = 1;
  }
  if (piVar2 != (int *)0x0) {
    FUN_00dd4940(piVar2);
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00dd4940(puVar3);
  }
  if (iVar5 != 0) {
    FUN_00dd4940(iVar5);
  }
  if (puVar4 != (undefined4 *)0x0) {
    FUN_00dd4940(puVar4);
  }
  return local_18;
}

// 00A817F0  SignalContext::SignalContext_2  size=426  [class]
void __fastcall SignalContext::SignalContext_2(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined **ppuStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  piVar1 = *(int **)(param_1 + 0x50);
  piVar4 = *(int **)(param_1 + 0x4c);
joined_r0x00a81818:
  do {
    if (piVar4 == piVar1) {
      if (*(int *)(param_1 + 0x30) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
      }
      return;
    }
    iVar2 = *piVar4;
    uVar3 = *(uint *)(iVar2 + 0x28);
    if ((uVar3 & 2) == 0) {
      if (*(int *)(iVar2 + 0x50) == 0) {
        if (*(int *)(iVar2 + 0x54) != 0) {
          *(undefined4 *)(iVar2 + 0x50) = 1;
          FUN_00a806d0(iVar2);
          FUN_00a81410(iVar2);
        }
      }
      else {
        FUN_00a806d0(iVar2);
        FUN_00a81410(iVar2);
        FUN_00a805f0();
      }
    }
    else {
      if ((uVar3 & 1) != 0) {
        iVar5 = FUN_00c1c650();
        if (iVar5 != 0) {
          piVar6 = (int *)FUN_00c1c650();
          (**(code **)(*piVar6 + 8))(iVar2);
        }
        iVar5 = piVar4[1];
        piVar6 = (int *)piVar4[2];
        if (iVar5 != 0) {
          *(int **)(iVar5 + 8) = piVar6;
        }
        if (piVar6 != (int *)0x0) {
          piVar6[1] = iVar5;
        }
        if (*(int **)(param_1 + 0x4c) == piVar4) {
          *(int **)(param_1 + 0x4c) = piVar6;
        }
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
        iVar5 = *(int *)(param_1 + 0x48);
        if (iVar5 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar5 + 4);
        }
        piVar4[1] = iVar7;
        piVar4[2] = iVar5;
        if (iVar7 != 0) {
          *(int **)(iVar7 + 8) = piVar4;
        }
        if (iVar5 != 0) {
          *(int **)(iVar5 + 4) = piVar4;
        }
        *(int **)(param_1 + 0x48) = piVar4;
        FUN_00a806d0(iVar2);
        FUN_00a81410(iVar2);
        uStack_8 = 0;
        ppuStack_c = HoldEntitySignalContext::vftable;
        iStack_4 = iVar2;
        FUN_00d89e90(0x3a,&ppuStack_c);
        FUN_00a81290();
        FUN_00e085e0();
        FUN_00dd4920(iVar2);
        ppuStack_c = vftable;
        piVar4 = piVar6;
        goto joined_r0x00a81818;
      }
      iVar5 = *(int *)(iVar2 + 0x3c);
      if ((iVar5 == 0) || ((*(byte *)(iVar5 + 0x4c8) & 1) != 0)) {
        *(uint *)(iVar2 + 0x28) = uVar3 | 1;
      }
      else if (((*(int *)(iVar5 + 0x370) == 0) || (*(int *)(*(int *)(iVar5 + 0x370) + 0x10) == -1))
              && ((*(byte *)(iVar5 + 0x4c8) & 2) != 0)) {
        *(byte *)(iVar5 + 0x4c8) = *(byte *)(iVar5 + 0x4c8) | 1;
      }
    }
    piVar4 = (int *)piVar4[2];
  } while( true );
}

// 00A819A0  FUN_00a819a0  size=262  [callgraph]
void __fastcall FUN_00a819a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar1 = *(int **)(param_1 + 0x50);
  piVar3 = *(int **)(param_1 + 0x4c);
  while (piVar3 != piVar1) {
    iVar2 = *piVar3;
    iVar4 = FUN_00c1c650();
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_00c1c650();
      (**(code **)(*piVar5 + 8))(iVar2);
    }
    iVar4 = piVar3[1];
    piVar5 = (int *)piVar3[2];
    if (iVar4 != 0) {
      *(int **)(iVar4 + 8) = piVar5;
    }
    if (piVar5 != (int *)0x0) {
      piVar5[1] = iVar4;
    }
    if (*(int **)(param_1 + 0x4c) == piVar3) {
      *(int **)(param_1 + 0x4c) = piVar5;
    }
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
    iVar4 = *(int *)(param_1 + 0x48);
    if (iVar4 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar4 + 4);
    }
    piVar3[1] = iVar6;
    piVar3[2] = iVar4;
    if (iVar6 != 0) {
      *(int **)(iVar6 + 8) = piVar3;
    }
    if (iVar4 != 0) {
      *(int **)(iVar4 + 4) = piVar3;
    }
    *(int **)(param_1 + 0x48) = piVar3;
    FUN_00a806d0(iVar2);
    FUN_00a81410(iVar2);
    FUN_00a805f0();
    if ((*(byte *)(iVar2 + 0x28) & 1) == 0) {
      piVar3 = *(int **)(iVar2 + 0x3c);
      if (piVar3 != (int *)0x0) {
        if ((*(byte *)(piVar3 + 0x132) & 2) == 0) {
          *(byte *)(piVar3 + 0x132) = *(byte *)(piVar3 + 0x132) | 2;
          (**(code **)(*piVar3 + 0x20))();
          (**(code **)(*piVar3 + 0xc))();
        }
        *(byte *)(piVar3 + 0x132) = *(byte *)(piVar3 + 0x132) | 1;
      }
      *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 1;
    }
    FUN_00a81290();
    FUN_00e085e0();
    FUN_00dd4920(iVar2);
    piVar3 = piVar5;
  }
  return;
}

// 00A81AD0  FUN_00a81ad0  size=36  [callgraph]
void __fastcall FUN_00a81ad0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00a81780();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00A81B00  FUN_00a81b00  size=42  [callgraph]
void __fastcall FUN_00a81b00(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00a81780();
                    /* WARNING: Could not recover jumptable at 0x00a81b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00A81B30  FUN_00a81b30  size=36  [callgraph]
void __fastcall FUN_00a81b30(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00a81780();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00A81B60  FUN_00a81b60  size=21  [callgraph]
undefined4 * __fastcall FUN_00a81b60(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00A81B80  FUN_00a81b80  size=429  [callgraph]
void * __thiscall FUN_00a81b80(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  int *piVar2;
  void *_Dst;
  int iVar3;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  bVar1 = false;
  if (((*(uint *)(param_2 + 8) & 0xf0000) == 0x40000) &&
     ((*(uint *)(param_2 + 8) & 0xffff) - 0x2000 < 0x1000)) {
    bVar1 = true;
  }
  piVar2 = (int *)FUN_00c1c650();
  pvStack_18 = (void *)(**(code **)(*piVar2 + 0x20))();
  if ((90.0 < (float)(int)pvStack_18) || (90.0 < (float)(int)pvStack_18)) {
    piVar2 = (int *)FUN_00c1c650();
    (**(code **)(*piVar2 + 0x28))();
  }
  _Dst = (void *)FUN_00dd2bc0();
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    _memset(_Dst,0,0x60);
    FUN_00e03940();
    *(undefined4 *)((int)_Dst + 0x2c) = 0;
    FUN_00de3530();
    *(undefined4 *)((int)_Dst + 0x3c) = 0;
    *(undefined4 *)((int)_Dst + 0x40) = 0;
    *(undefined4 *)((int)_Dst + 0x48) = 0;
    *(undefined4 *)((int)_Dst + 0x4c) = 0;
    *(undefined4 *)((int)_Dst + 0x5c) = 0;
  }
  pvStack_18 = _Dst;
  if (_Dst == (void *)0x0) {
    FUN_00dd5650(&DAT_0166402c);
  }
  else {
    uStack_10 = *(undefined4 *)(param_1 + 8);
    uStack_c = *(undefined4 *)(param_1 + 0xc);
    uStack_4 = *(undefined4 *)(param_1 + 0x10);
    iStack_8 = param_2;
    iStack_14 = param_1;
    iVar3 = FUN_00a80e70(&iStack_14);
    if (iVar3 != 0) {
      cFixedList::insert_15(&param_2,param_1 + 0x50,&pvStack_18);
      if ((bVar1) && (iVar3 = FUN_00c1c650(), iVar3 != 0)) {
        piVar2 = (int *)FUN_00c1c650();
        (**(code **)(*piVar2 + 4))(_Dst);
      }
      FUN_00a7d000(_Dst);
      if (*(int *)(param_1 + 0x30) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return _Dst;
    }
    FUN_00dd5650(&DAT_01664000);
    FUN_00a805f0();
    FUN_00a81290();
    FUN_00e085e0();
    FUN_00dd4920(_Dst);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return (void *)0x0;
}

