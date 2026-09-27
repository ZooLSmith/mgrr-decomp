// lib/havok/unit_008E3CF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E3CF0..008E3CF0, 1 functions

#include "mgrr.h"
#include "hkBaseObject.h"

// 008E3CF0  hkBaseObject::hkBaseObject_205  size=726  [run]
void __thiscall hkBaseObject::hkBaseObject_205(int param_1,float *param_2,float *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e0 [64];
  undefined **local_a0 [23];
  float local_44;
  
  if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
    FUN_00860de0();
    hkpCharacterProxyCinfo::hkpCharacterProxyCinfo_2();
    FUN_01269700(local_a0);
    if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
      iVar6 = FUN_012696c0();
    }
    else {
      iVar6 = FUN_0126f3e0();
    }
    cVar4 = *(char *)(*(int *)(iVar6 + 0x10) + 8);
    local_a0[0] = vftable;
    fVar2 = local_44;
  }
  else {
    FUN_00860de0();
    if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
      iVar6 = FUN_012696c0();
    }
    else {
      iVar6 = FUN_0126f3e0();
    }
    cVar4 = *(char *)(*(int *)(iVar6 + 0x10) + 8);
    fVar2 = *(float *)(*(int *)(param_1 + 8) + 0x3c);
  }
  if ((DAT_01885d68 != 1) &&
     (iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar6 + 4) == 0))
  {
    piVar1 = (int *)(iVar6 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  if (cVar4 == '\0') {
    local_100 = *(float *)(param_1 + 0xb0);
    local_fc = *(float *)(param_1 + 0xfc) + fVar2 + *(float *)(param_1 + 0xb4);
    local_f8 = *(undefined4 *)(param_1 + 0xb8);
    iVar6 = *(int *)(param_1 + 0xf0);
    local_f4 = *(float *)(param_1 + 0xbc) + local_f4;
    local_110 = SQRT(*(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14) +
                     *(float *)(iVar6 + 0x10) * *(float *)(iVar6 + 0x10) +
                     *(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18));
    local_10c = SQRT(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                     *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                     *(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28));
    fVar5 = SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
                 *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
                 *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30));
    fVar2 = *(float *)(iVar6 + 0x28);
    fVar3 = *(float *)(iVar6 + 0x38);
    fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar6 + 0x18) / fVar5));
    fVar8 = (float10)fpatan((float10)(fVar2 / fVar5),(float10)(fVar3 / fVar5));
    local_f0 = (float)fVar8;
    local_ec = (float)fVar7;
    fVar7 = (float10)fpatan((float10)*(float *)(iVar6 + 0x14) / (float10)local_10c,
                            (float10)*(float *)(iVar6 + 0x10) / (float10)local_110);
    local_e8 = (float)fVar7;
    FUN_00ddc1d0(local_e0,&local_f0,5);
    D3DXVec3TransformNormal(&local_100,&local_100,local_e0);
    fVar2 = *param_3 + local_10c;
    local_108 = param_3[1] + local_108;
    local_104 = param_3[2] + local_104;
    local_110 = param_3[3] + local_100;
  }
  else {
    if ((cVar4 != '\x01') && (cVar4 != '\x04')) {
      return;
    }
    local_110 = *(float *)(param_1 + 0xb0);
    local_10c = *(float *)(param_1 + 0xf8) * 0.5 + fVar2 + *(float *)(param_1 + 0xb4);
    local_108 = *(float *)(param_1 + 0xb8);
    local_104 = *(float *)(param_1 + 0xbc) + local_104;
    FUN_00de28e0(local_e0,*(int *)(param_1 + 0xf0) + 0x10);
    D3DXVec3TransformNormal(&local_110,&local_110,local_e0);
    fVar2 = fVar2 + *param_3;
    local_108 = param_3[1] + fStack_118;
    local_104 = param_3[2] + local_114;
    local_110 = param_3[3] + local_110;
  }
  *param_2 = fVar2;
  param_2[1] = local_108;
  param_2[2] = local_104;
  param_2[3] = local_110;
  return;
}

