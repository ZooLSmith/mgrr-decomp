// src/misc/cResultDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBEF20..00CD82F0, 4 functions

#include "mgrr.h"
#include "cResultDisp.h"

// 00CBEF20  cResultDisp::cResultDisp_2  size=69  [class]
void __fastcall cResultDisp::cResultDisp_2(undefined4 *param_1)

{
  undefined4 local_14;
  
  *param_1 = vftable;
  param_1[0xc] = 1;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = local_14;
  DAT_01dc1308 = 0;
  DAT_01dc130c = 0;
  DAT_01dc1310 = 0;
  return;
}

// 00CBEF70  cResultDisp::~cResultDisp  size=89  [class]
void __fastcall cResultDisp::~cResultDisp(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = vftable;
  DAT_01bea094 = DAT_01bea094 & 0xf7ffffff;
  DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
    param_1[4] = 0;
  }
  if ((DAT_018b9174 != 0x750) && (DAT_018b9174 != 0x610)) {
    piVar1 = (int *)FUN_00c1b9a0();
                    /* WARNING: Could not recover jumptable at 0x00cbefc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0xb0))();
    return;
  }
  return;
}

// 00CBEFD0  cResultDisp::cResultDisp  size=92  [class]
undefined4 * cResultDisp::cResultDisp(void)

{
  undefined4 *puVar1;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x40,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[0xc] = 1;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = local_14;
    DAT_01dc1308 = 0;
    DAT_01dc130c = 0;
    DAT_01dc1310 = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD82F0  cResultDisp::vf00  size=30  [class]
undefined4 __thiscall cResultDisp::vf00(undefined4 param_1,byte param_2)

{
  ~cResultDisp();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

