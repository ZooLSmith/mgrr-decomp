// src/misc/type_info.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDB5AF..00FE3920, 32 functions

#include "mgrr.h"
#include "type_info.h"

// 00FDB5AF  type_info::name  size=20  [class]
/* Library Function - Single Match
    public: char const * __thiscall type_info::name(struct __type_info_node *)const 
   
   Library: Visual Studio 2010 Release */

char * __thiscall type_info::name(type_info *this,__type_info_node *param_1)

{
  char *pcVar1;
  
  pcVar1 = _Name_base(this,param_1);
  return pcVar1;
}

// 00FDB5C3  type_info::~type_info  size=16  [class]
/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = vftable;
  _Type_info_dtor(this);
  return;
}

// 00FDB5D3  type_info::`scalar_deleting_destructor'  size=33  [class]
/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    FUN_00dd4920(this);
  }
  return this;
}

// 00FDB5F4  type_info::_name_internal_method  size=20  [class]
/* Library Function - Single Match
    public: char const * __thiscall type_info::_name_internal_method(struct __type_info_node *)const
   
   
   Library: Visual Studio 2010 Release */

char * __thiscall type_info::_name_internal_method(type_info *this,__type_info_node *param_1)

{
  char *pcVar1;
  
  pcVar1 = _Name_base_internal(this,param_1);
  return pcVar1;
}

// 00FDB612  type_info::operator==  size=32  [class]
/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2010 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}

// 00FDB632  type_info::operator!=  size=33  [class]
/* Library Function - Single Match
    public: bool __thiscall type_info::operator!=(class type_info const &)const 
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

bool __thiscall type_info::operator!=(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return iVar1 != 0;
}

// 00FDB653  type_info::before  size=36  [class]
/* Library Function - Single Match
    public: int __thiscall type_info::before(class type_info const &)const 
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall type_info::before(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (uint)(0 < iVar1);
}

// 00FDB677  FUN_00fdb677  size=4  [callgraph]
int __fastcall FUN_00fdb677(int param_1)

{
  return param_1 + 8;
}

// 00FE2A8B  FUN_00fe2a8b  size=40  [callgraph]
undefined4 FUN_00fe2a8b(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < param_1) {
    piVar1 = (int *)FUN_00ff70f4();
    if (param_1 < *piVar1) goto LAB_00fe2aa8;
  }
  piVar1 = (int *)FUN_00ff70f4();
  param_1 = *piVar1;
LAB_00fe2aa8:
  iVar2 = FUN_00ff70fa();
  return *(undefined4 *)(iVar2 + param_1 * 4);
}

// 00FE2AB3  FUN_00fe2ab3  size=105  [callgraph]
char * FUN_00fe2ab3(undefined4 param_1)

{
  _ptiddata p_Var1;
  char *pcVar2;
  char *_Src;
  errno_t eVar3;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    pcVar2 = "Visual C++ CRT: Not enough memory to complete call to strerror.";
  }
  else {
    if (p_Var1->_errmsg == (char *)0x0) {
      pcVar2 = __calloc_crt(0x86,1);
      p_Var1->_errmsg = pcVar2;
      if (pcVar2 == (char *)0x0) {
        return "Visual C++ CRT: Not enough memory to complete call to strerror.";
      }
    }
    pcVar2 = p_Var1->_errmsg;
    _Src = (char *)FUN_00fe2a8b(param_1);
    eVar3 = _strcpy_s(pcVar2,0x86,_Src);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return pcVar2;
}

// 00FE2B1D  FUN_00fe2b1d  size=82  [callgraph]
undefined4 FUN_00fe2b1d(char *param_1,rsize_t param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char *_Src;
  errno_t eVar3;
  rsize_t _MaxCount;
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    piVar1 = __errno();
    uVar2 = 0x16;
    *piVar1 = 0x16;
    FUN_00fe56c2();
  }
  else {
    _MaxCount = param_2 - 1;
    _Src = (char *)FUN_00fe2a8b(param_3);
    eVar3 = _strncpy_s(param_1,param_2,_Src,_MaxCount);
    uVar2 = 0;
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return uVar2;
}

// 00FE2BC0  ___TypeMatch  size=95  [callgraph]
/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2010 Release */

undefined4 ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_00fe2c18:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_00fe2bf7:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_00fe2c18;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_00fe2bf7;
    }
    uVar2 = 0;
  }
  return uVar2;
}

// 00FE2C1F  ___FrameUnwindFilter  size=79  [callgraph]
/* Library Function - Single Match
    ___FrameUnwindFilter
   
   Library: Visual Studio 2010 Release */

undefined4 ___FrameUnwindFilter(undefined4 *param_1)

{
  int iVar1;
  _ptiddata p_Var2;
  undefined4 extraout_EAX;
  
  iVar1 = *(int *)*param_1;
  if ((iVar1 == -0x1fbcbcae) || (iVar1 == -0x1fbcb0b3)) {
    p_Var2 = __getptd();
    if (0 < p_Var2->_ProcessingThrow) {
      p_Var2 = __getptd();
      p_Var2->_ProcessingThrow = p_Var2->_ProcessingThrow + -1;
    }
  }
  else if (iVar1 == -0x1f928c9d) {
    p_Var2 = __getptd();
    p_Var2->_ProcessingThrow = 0;
    terminate();
    return extraout_EAX;
  }
  return 0;
}

// 00FE2C6E  ___FrameUnwindToState  size=162  [callgraph]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2010 Release */

void ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_3 + 4) < 0x81) {
    iVar2 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  p_Var1 = __getptd();
  p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + 1;
  while (iVar3 = iVar2, iVar3 != param_4) {
    if ((iVar3 < 0) || (*(int *)(param_3 + 4) <= iVar3)) {
      _inconsistency();
    }
    iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar3 * 8);
    if (*(int *)(*(int *)(param_3 + 8) + 4 + iVar3 * 8) != 0) {
      *(int *)(param_1 + 8) = iVar2;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar3 * 8),param_1,0x103);
    }
  }
  FUN_00fe2d30();
  if (iVar3 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar3;
  return;
}

// 00FE2D30  FUN_00fe2d30  size=26  [callgraph]
void FUN_00fe2d30(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}

// 00FE2D8F  ___DestructExceptionObject  size=67  [callgraph]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2010 Release */

void ___DestructExceptionObject(int *param_1)

{
  void *pvVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[7] != 0)) &&
     (pvVar1 = *(void **)(param_1[7] + 4), pvVar1 != (void *)0x0)) {
    _CallMemberFunction0((void *)param_1[6],pvVar1);
  }
  return;
}

// 00FE2DE4  ___AdjustPointer  size=41  [callgraph]
/* Library Function - Single Match
    ___AdjustPointer
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_2[1] + param_1) + param_2[2]) + param_2[1];
  }
  return iVar1;
}

// 00FE2E0D  FUN_00fe2e0d  size=17  [callgraph]
bool FUN_00fe2e0d(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return p_Var1->_ProcessingThrow != 0;
}

// 00FE2E1E  ___CxxRegisterExceptionObject  size=182  [callgraph]
/* Library Function - Single Match
    ___CxxRegisterExceptionObject
   
   Library: Visual Studio 2010 Release */

int __cdecl ___CxxRegisterExceptionObject(void *exception,void *storage)

{
  int iVar1;
  _ptiddata p_Var2;
  int *piVar3;
  
  if ((exception == (void *)0x0) || (piVar3 = *(int **)exception, piVar3 == (int *)0x0)) {
    *(undefined4 *)((int)storage + 8) = 0xffffffff;
    *(undefined4 *)((int)storage + 0xc) = 0xffffffff;
  }
  else {
    if ((((*piVar3 == -0x1f928c9d) && (piVar3[4] == 3)) &&
        ((iVar1 = piVar3[5], iVar1 == 0x19930520 || ((iVar1 == 0x19930521 || (iVar1 == 0x19930522)))
         ))) && (piVar3[7] == 0)) {
      p_Var2 = __getptd();
      piVar3 = p_Var2->_curexception;
    }
    __CreateFrameInfo(storage,piVar3[6]);
    p_Var2 = __getptd();
    *(void **)((int)storage + 8) = p_Var2->_curexception;
    p_Var2 = __getptd();
    *(void **)((int)storage + 0xc) = p_Var2->_curcontext;
    p_Var2 = __getptd();
    p_Var2->_curexception = piVar3;
  }
  p_Var2 = __getptd();
  p_Var2->_ProcessingThrow = p_Var2->_ProcessingThrow + -1;
  p_Var2 = __getptd();
  if (p_Var2->_ProcessingThrow < 0) {
    p_Var2 = __getptd();
    p_Var2->_ProcessingThrow = 0;
  }
  return 1;
}

// 00FE2ED4  ___CxxDetectRethrow  size=81  [callgraph]
/* Library Function - Single Match
    ___CxxDetectRethrow
   
   Library: Visual Studio 2010 Release */

int __cdecl ___CxxDetectRethrow(void *exception)

{
  int *piVar1;
  int iVar2;
  _ptiddata p_Var3;
  
  if (((((exception != (void *)0x0) && (piVar1 = *(int **)exception, *piVar1 == -0x1f928c9d)) &&
       (piVar1[4] == 3)) &&
      (((iVar2 = piVar1[5], iVar2 == 0x19930520 || (iVar2 == 0x19930521)) || (iVar2 == 0x19930522)))
      ) && (piVar1[7] == 0)) {
    p_Var3 = __getptd();
    p_Var3->_ProcessingThrow = p_Var3->_ProcessingThrow + 1;
    return 1;
  }
  return 0;
}

// 00FE2F25  ___CxxUnregisterExceptionObject  size=318  [callgraph]
/* Library Function - Single Match
    ___CxxUnregisterExceptionObject
   
   Library: Visual Studio 2010 Release */

void __cdecl ___CxxUnregisterExceptionObject(void *storage,int rethrow)

{
  _ptiddata p_Var1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)storage + 8) != -1) {
    __FindAndUnlinkFrame(storage);
    if ((((rethrow == 0) && (p_Var1 = __getptd(), *(int *)p_Var1->_curexception == -0x1f928c9d)) &&
        (p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x10) == 3)) &&
       (((p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x14) == 0x19930520 ||
         (p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x14) == 0x19930521)) ||
        (p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x14) == 0x19930522)))) {
      p_Var1 = __getptd();
      iVar2 = __IsExceptionObjectToBeDestroyed(*(undefined4 *)((int)p_Var1->_curexception + 0x18));
      if (iVar2 != 0) {
        uVar3 = 1;
        p_Var1 = __getptd();
        ___DestructExceptionObject(p_Var1->_curexception,uVar3);
      }
    }
    p_Var1 = __getptd();
    if (((*(int *)p_Var1->_curexception == -0x1f928c9d) &&
        (p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x10) == 3)) &&
       (((p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x14) == 0x19930520 ||
         ((p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x14) == 0x19930521 ||
          (p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x14) == 0x19930522)))) &&
        (rethrow != 0)))) {
      p_Var1 = __getptd();
      p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
    }
    p_Var1 = __getptd();
    p_Var1->_curexception = *(void **)((int)storage + 8);
    p_Var1 = __getptd();
    p_Var1->_curcontext = *(void **)((int)storage + 0xc);
    return;
  }
  return;
}

// 00FE3139  FUN_00fe3139  size=118  [callgraph]
undefined1 FUN_00fe3139(int param_1)

{
  int extraout_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  local_10 = 0;
  if (unaff_EDI == (int *)0x0) {
    _inconsistency();
    terminate();
    local_10 = extraout_EAX;
  }
  local_5 = (undefined1)local_10;
  local_c = local_10;
  if (local_10 < *unaff_EDI) {
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
      for (iVar2 = *piVar3; piVar3 = piVar3 + 1, 0 < iVar2; iVar2 = iVar2 + -1) {
        iVar1 = ___TypeMatch(unaff_EDI[1] + local_c,*piVar3,*(undefined4 *)(param_1 + 0x1c));
        if (iVar1 != 0) {
          local_5 = 1;
          break;
        }
      }
      local_10 = local_10 + 1;
      local_c = local_c + 0x10;
    } while (local_10 < *unaff_EDI);
  }
  return local_5;
}

// 00FE31AF  FUN_00fe31af  size=49  [callgraph]
/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_00fe31af(void *param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  FUN_00fed0c2();
  terminate();
  p_Var1 = __getptd();
  p_Var1->_curexcspec = param_1;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00FE31E0  Catch_All@00fe31e0  size=23  [callgraph]
void Catch_All_00fe31e0(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00FE32B0  CallCatchBlock  size=172  [callgraph]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *in_ECX;
  undefined1 local_40 [8];
  undefined4 local_38;
  void *local_34;
  void *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_01879f38;
  uStack_c = 0xfe32bc;
  local_38 = 0;
  local_28 = *(undefined4 *)(param_2 + -4);
  local_2c = __CreateFrameInfo(local_40,*(undefined4 *)(param_1 + 0x18));
  p_Var1 = __getptd();
  local_30 = p_Var1->_curexception;
  p_Var1 = __getptd();
  local_34 = p_Var1->_curcontext;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  p_Var1 = __getptd();
  p_Var1->_curcontext = param_3;
  local_8 = (undefined *)0x1;
  local_20 = _CallCatchBlock2(param_2,param_4,in_ECX,(int)param_5,param_6);
  local_8 = (undefined *)0xfffffffe;
  FUN_00fe33d6();
  return local_20;
}

// 00FE33D6  FUN_00fe33d6  size=118  [callgraph]
void FUN_00fe33d6(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  __FindAndUnlinkFrame(*(undefined4 *)(unaff_EBP + -0x28));
  p_Var1 = __getptd();
  p_Var1->_curexception = *(void **)(unaff_EBP + -0x2c);
  p_Var1 = __getptd();
  p_Var1->_curcontext = *(void **)(unaff_EBP + -0x30);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((iVar2 = unaff_ESI[5], iVar2 == 0x19930520 ||
       ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))) &&
     ((*(int *)(unaff_EBP + -0x34) == 0 && (*(int *)(unaff_EBP + -0x1c) != 0)))) {
    iVar2 = __IsExceptionObjectToBeDestroyed(unaff_ESI[6]);
    if (iVar2 != 0) {
      ___DestructExceptionObject();
    }
  }
  return;
}

// 00FE344C  ___BuildCatchObjectHelper  size=371  [callgraph]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Library: Visual Studio 2010 Release */

char ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  void *pvVar2;
  size_t _Size;
  
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && ((*param_3 & 0x80000000) == 0)))) {
    return '\0';
  }
  if (-1 < (int)*param_3) {
    param_2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  if ((*param_3 & 8) == 0) {
    pvVar2 = *(void **)(param_1 + 0x18);
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        iVar1 = _ValidateRead(pvVar2,1);
        if ((iVar1 != 0) && (iVar1 = FID_conflict__ValidateExecute(param_2,1), iVar1 != 0)) {
          _Size = *(size_t *)(param_4 + 0x14);
          pvVar2 = (void *)___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
          FID_conflict__memcpy(param_2,pvVar2,_Size);
          return '\0';
        }
      }
      else {
        iVar1 = _ValidateRead(pvVar2,1);
        if (((iVar1 != 0) && (iVar1 = FID_conflict__ValidateExecute(param_2,1), iVar1 != 0)) &&
           (iVar1 = FID_conflict__ValidateExecute(*(undefined4 *)(param_4 + 0x18)), iVar1 != 0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
    }
    else {
      iVar1 = _ValidateRead(pvVar2,1);
      if ((iVar1 != 0) && (iVar1 = FID_conflict__ValidateExecute(param_2,1), iVar1 != 0)) {
        FID_conflict__memcpy(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          return '\0';
        }
        iVar1 = *param_2;
        if (iVar1 == 0) {
          return '\0';
        }
        goto LAB_00fe34d1;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = FID_conflict__ValidateExecute(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_00fe34d1:
      iVar1 = ___AdjustPointer(iVar1,param_4 + 8);
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}

// 00FE35CB  ___BuildCatchObject  size=133  [callgraph]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Library: Visual Studio 2010 Release */

void ___BuildCatchObject(int param_1,int param_2,uint *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    iVar3 = param_3[2] + 0xc + param_2;
  }
  iVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (iVar1 == 1) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
    FID_conflict__CallMemberFunction1(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8,1);
    FID_conflict__CallMemberFunction1(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2);
  }
  return;
}

// 00FE365D  ___CxxExceptionFilter  size=334  [callgraph]
/* Library Function - Single Match
    ___CxxExceptionFilter
   
   Library: Visual Studio 2010 Release */

int __cdecl ___CxxExceptionFilter(void *param_1,void *param_2,int param_3,void *param_4)

{
  int iVar1;
  _ptiddata p_Var2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint local_14;
  void *local_10;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  piVar5 = *(int **)param_1;
  if (((param_2 == (void *)0x0) || (*(char *)((int)param_2 + 8) == '\0')) &&
     ((iVar6 = *piVar5, iVar6 == -0x1fbcb0b3 || ((iVar6 == -0x1fbcbcae || ((param_3 & 0x40U) == 0)))
      ))) {
    if ((((iVar6 != -0x1f928c9d) || (piVar5[4] != 3)) ||
        (((iVar6 = piVar5[5], iVar6 != 0x19930520 &&
          ((iVar6 != 0x19930521 && (iVar6 != 0x19930522)))) || (piVar5[7] != 0)))) ||
       (p_Var2 = __getptd(), p_Var2->_curexception != (void *)0x0)) {
      p_Var2 = __getptd();
      p_Var2->_ProcessingThrow = p_Var2->_ProcessingThrow + 1;
      return 1;
    }
  }
  else if ((*piVar5 == -0x1f928c9d) &&
          ((piVar5[4] == 3 &&
           (((iVar6 = piVar5[5], iVar6 == 0x19930520 || (iVar6 == 0x19930521)) ||
            (iVar6 == 0x19930522)))))) {
    if (piVar5[7] == 0) {
      p_Var2 = __getptd();
      if (p_Var2->_curexception == (void *)0x0) {
        return 0;
      }
      p_Var2 = __getptd();
      piVar5 = p_Var2->_curexception;
    }
    piVar4 = *(int **)(piVar5[7] + 0xc);
    local_14 = param_3 | 0x80000000;
    local_10 = param_2;
    for (iVar6 = *piVar4; piVar4 = piVar4 + 1, 0 < iVar6; iVar6 = iVar6 + -1) {
      iVar1 = *piVar4;
      iVar3 = ___TypeMatch(&local_14,iVar1,piVar5[7]);
      if (iVar3 != 0) {
        p_Var2 = __getptd();
        p_Var2->_ProcessingThrow = p_Var2->_ProcessingThrow + 1;
        if (param_4 == (void *)0x0) {
          return 1;
        }
        ___BuildCatchObject(piVar5,param_4,&local_14,iVar1);
        return 1;
      }
    }
  }
  return 0;
}

// 00FE37AB  CatchIt  size=110  [callgraph]
/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2010 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  EHRegistrationNode *pEVar2;
  
  if (param_5 != (_s_FuncInfo *)0x0) {
    ___BuildCatchObject(param_1);
  }
  if (param_7 == (_s_CatchableType *)0x0) {
    param_7 = (_s_CatchableType *)unaff_ESI;
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_7,param_1);
  pEVar2 = unaff_ESI;
  ___FrameUnwindToState();
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_EDI + 4) + 1;
  pvVar1 = CallCatchBlock(param_1,unaff_ESI,(_CONTEXT *)param_2,param_4,param_6,0x100,(ulong)pEVar2)
  ;
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,unaff_ESI);
  }
  return;
}

// 00FE3819  FindHandlerForForeignException  size=263  [callgraph]
/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2010 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  TypeDescriptor *pTVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  int iVar4;
  _s_TryBlockMapEntry *p_Var5;
  int *piVar6;
  _s_TryBlockMapEntry *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  uint in_stack_fffffff0;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    p_Var2 = __getptd();
    if (p_Var2->_translator != (void *)0x0) {
      p_Var2 = __getptd();
      pvVar3 = (void *)FUN_00feb73b();
      if ((((p_Var2->_translator != pvVar3) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar4 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar4 != 0)) {
        return;
      }
    }
    if (param_5->nTryBlocks == 0) {
      _inconsistency();
    }
    p_Var5 = _GetRangeOfTrysToCheck(param_5,param_7,param_6,&local_8,(uint *)&stack0xfffffff0);
    if (local_8 < in_stack_fffffff0) {
      piVar6 = &p_Var5->nCatches;
      do {
        if ((((_s_TryBlockMapEntry *)(piVar6 + -3))->tryLow <= param_6) && (param_6 <= piVar6[-2]))
        {
          pTVar1 = ((HandlerType *)piVar6[1])[*piVar6 + -1].pType;
          if (((pTVar1 == (TypeDescriptor *)0x0) || (*(char *)&pTVar1[1].pVFTable == '\0')) &&
             ((((HandlerType *)piVar6[1])[*piVar6 + -1].adjectives & 0x40) == 0)) {
            CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,(_s_FuncInfo *)0x0,
                    (_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EBX,unaff_EDI,
                    unaff_ESI,(uchar)in_stack_fffffff0);
          }
        }
        local_8 = local_8 + 1;
        piVar6 = piVar6 + 5;
      } while (local_8 < in_stack_fffffff0);
    }
  }
  return;
}

// 00FE3920  FindHandler  size=885  [callgraph]
/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2010 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  uint uVar1;
  int *piVar2;
  HandlerType **ppHVar3;
  char cVar4;
  bool bVar5;
  _ptiddata p_Var6;
  int iVar7;
  _s_TryBlockMapEntry *p_Var8;
  EHRegistrationNode *unaff_EBX;
  int iVar9;
  HandlerType *pHVar10;
  _s_FuncInfo *p_Var11;
  int unaff_ESI;
  _s_FuncInfo *p_Var12;
  _s_TryBlockMapEntry *unaff_EDI;
  HandlerType **ppHVar13;
  EHRegistrationNode *pEVar14;
  undefined4 in_stack_ffffffc8;
  uint local_24;
  HandlerType **local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
  p_Var11 = param_5;
  local_5 = '\0';
  if (param_5->maxState < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (param_5->maxState <= local_c)) {
    _inconsistency();
  }
  p_Var12 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 == -0x1f928c9d) {
    if (((*(int *)(param_1 + 0x10) == 3) &&
        (((iVar7 = *(int *)(param_1 + 0x14), iVar7 == 0x19930520 || (iVar7 == 0x19930521)) ||
         (iVar7 == 0x19930522)))) && (*(int *)(param_1 + 0x1c) == 0)) {
      p_Var6 = __getptd();
      if (p_Var6->_curexception == (void *)0x0) {
        return;
      }
      p_Var6 = __getptd();
      p_Var12 = p_Var6->_curexception;
      param_1 = (EHExceptionRecord *)p_Var12;
      p_Var6 = __getptd();
      param_3 = p_Var6->_curcontext;
      iVar7 = _ValidateRead(p_Var12,1);
      if (iVar7 == 0) {
        _inconsistency();
      }
      if ((((p_Var12->magicNumber_and_bbtFlags == 0xe06d7363) &&
           (p_Var12->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
          ((uVar1 = p_Var12->nIPMapEntries, uVar1 == 0x19930520 ||
           ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) &&
         (p_Var12->pESTypeList == (ESTypeList *)0x0)) {
        _inconsistency();
      }
      p_Var6 = __getptd();
      if (p_Var6->_curexcspec != (void *)0x0) {
        p_Var6 = __getptd();
        piVar2 = p_Var6->_curexcspec;
        p_Var6 = __getptd();
        iVar7 = 0;
        p_Var6->_curexcspec = (void *)0x0;
        cVar4 = FUN_00fe3139(param_1);
        p_Var12 = (_s_FuncInfo *)param_1;
        if (cVar4 == '\0') {
          iVar9 = 0;
          if (0 < *piVar2) {
            do {
              bVar5 = type_info::operator==
                                (*(type_info **)(iVar9 + 4 + piVar2[1]),
                                 (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
              if (bVar5) goto LAB_00fe3a65;
              iVar7 = iVar7 + 1;
              iVar9 = iVar9 + 0x10;
            } while (iVar7 < *piVar2);
          }
          goto LAB_00fe3a60;
        }
      }
    }
    p_Var11 = param_5;
    if (((p_Var12->magicNumber_and_bbtFlags == 0xe06d7363) &&
        (p_Var12->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
       ((uVar1 = p_Var12->nIPMapEntries, uVar1 == 0x19930520 ||
        ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) {
      if ((param_5->nTryBlocks != 0) &&
         (p_Var8 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_24),
         local_14 < local_24)) {
        ppHVar13 = &p_Var8->pHandlerArray;
        do {
          local_20 = ppHVar13;
          if ((((_s_TryBlockMapEntry *)(ppHVar13 + -4))->tryLow <= local_c) &&
             (local_c <= (int)ppHVar13[-3])) {
            local_10 = *ppHVar13;
            ppHVar3 = ppHVar13;
            for (local_1c = (int)ppHVar13[-1]; local_20 = ppHVar13, 0 < local_1c;
                local_1c = local_1c + -1) {
              pHVar10 = p_Var12->pESTypeList[1].pTypeArray;
              local_20 = ppHVar3;
              for (local_18 = pHVar10->adjectives; 0 < (int)local_18; local_18 = local_18 - 1) {
                pHVar10 = (HandlerType *)&pHVar10->pType;
                p_Var11 = *(_s_FuncInfo **)pHVar10;
                iVar7 = ___TypeMatch(local_10,p_Var11,p_Var12->pESTypeList);
                if (iVar7 != 0) {
                  local_5 = '\x01';
                  CatchIt((EHExceptionRecord *)p_Var12,(EHRegistrationNode *)param_3,param_4,param_5
                          ,p_Var11,(_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EDI,
                          unaff_ESI,unaff_EBX,(uchar)SUB41(in_stack_ffffffc8,0));
                  p_Var12 = (_s_FuncInfo *)param_1;
                  goto LAB_00fe3b9d;
                }
              }
              local_10 = local_10 + 1;
              ppHVar3 = local_20;
            }
          }
LAB_00fe3b9d:
          local_14 = local_14 + 1;
          ppHVar13 = local_20 + 5;
          p_Var11 = param_5;
          local_20 = ppHVar13;
        } while (local_14 < local_24);
      }
      if (param_6 != '\0') {
        ___DestructExceptionObject(p_Var12,1);
      }
      if ((((local_5 != '\0') || ((p_Var11->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521)) ||
          (p_Var11->pESTypeList == (ESTypeList *)0x0)) ||
         (cVar4 = FUN_00fe3139(p_Var12), cVar4 != '\0')) goto LAB_00fe3c7d;
      __getptd();
      __getptd();
      p_Var6 = __getptd();
      p_Var6->_curexception = p_Var12;
      p_Var6 = __getptd();
      p_Var6->_curcontext = param_3;
      pEVar14 = param_8;
      if (param_8 == (EHRegistrationNode *)0x0) {
        pEVar14 = param_2;
      }
      _UnwindNestedFrames(pEVar14,(EHExceptionRecord *)p_Var12);
      p_Var12 = param_5;
      ___FrameUnwindToState(param_2,param_4,param_5,0xffffffff);
      FUN_00fe31af(p_Var12->pESTypeList);
      p_Var11 = param_5;
    }
  }
  if (p_Var11->nTryBlocks != 0) {
    if (param_6 != '\0') {
LAB_00fe3a60:
      terminate();
LAB_00fe3a65:
      ___DestructExceptionObject(param_1,1);
      param_1 = (EHExceptionRecord *)s_bad_exception_016f51e0;
      std::exception::exception((exception *)&stack0xffffffc8,(char **)&param_1);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&stack0xffffffc8,&DAT_01879f9c);
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var12,param_2,param_3,param_4,p_Var11,local_c,param_7,param_8)
    ;
  }
LAB_00fe3c7d:
  p_Var6 = __getptd();
  if (p_Var6->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}

