// src/managers/triggermanager/actions/TrgActScrMeshOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C97300..00C97300, 1 functions

#include "mgrr.h"

// 00C97300  Trigger::Act::SCR_MESH_OFF  size=218  [class]
undefined4 __fastcall Trigger::Act::SCR_MESH_OFF(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016b1504);
    return 0;
  }
  if (DAT_01dbd1cc != 0) {
    *(undefined4 *)(DAT_01dbd1cc + 0xc) = 0;
    iVar6 = DAT_01dbd1cc;
    uVar7 = *(undefined4 *)(iVar2 + 8);
    if (iVar2 + 0xc != 0) {
      piVar3 = (int *)FUN_00c14bb0();
      (**(code **)(*piVar3 + 0x14))(iVar6,iVar2 + 0xc,uVar7);
      if (*(int *)(iVar6 + 0xc) != 0) {
        iVar6 = *(int *)(DAT_01dbd1cc + 4);
        uVar7 = 0;
        if (iVar6 != iVar6 + *(int *)(DAT_01dbd1cc + 0xc) * 4) {
          do {
            iVar4 = FUN_00a7c8a0();
            iVar5 = *(int *)(iVar2 + 0x1c);
            if (((-1 < iVar5) && (iVar5 < *(short *)(iVar4 + 0x324))) &&
               (iVar5 = iVar5 * 0x70 + *(int *)(iVar4 + 800), iVar5 != 0)) {
              puVar1 = (uint *)(iVar5 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
              uVar7 = 1;
            }
            iVar6 = iVar6 + 4;
          } while (iVar6 != *(int *)(DAT_01dbd1cc + 4) + *(int *)(DAT_01dbd1cc + 0xc) * 4);
        }
        return uVar7;
      }
    }
    return 0;
  }
  FUN_00dd5650(&DAT_016b14cc);
  return 0;
}

