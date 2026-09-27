// src/graphics/cModel.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cModel.h"

// 00A19480  cModel::cModel  size=179  [class]
cModel::cModel()
    : cModelBase()
{
    // vftable = cModel::vftable (0x0165CA68)
    scale45C() = 1.0f;
    field460() = 0.3f;              // 0x3E99999A
    field464() = 1;
    field468() = -1;
    field46C() = 0;
    color470() = 0xFF000000;
    FUN_00a2b3c0((undefined4 *)sub374());
    ownedObject370() = 0;
    field458() = 0;
    entries474() = 0;
    field478() = 0;
    entryCount47C() = 0;
    array450() = 0;
    field454() = 0;
    field484() = 0;
    field488() = 0;
    handle48C() = -1;
    flags44C() = 0x2FF;
    byte44E() = 0xFF;
    field480() = -1;
}

// 00A19540  cModel::~cModel  size=88  [class]
cModel::~cModel()
{
    // vftable = cModel::vftable (0x0165CA68)
    FUN_00a17b70((int)this);        // releases 0x474 / 0x370 / 0x450 / 0x48C resources
    color470Lo() = 0;
    color472() = 0;
    color473() = 0xFF;
    field468() = -1;
    field464() = 1;
    field46C() = 0;
    scale45C() = 1.0f;
    field460() = 0.3f;              // 0x3E99999A
    ctor_00A193C0();                // tail jump to 0x00A193C0 (base-class destructor, ? likely ~cModelBase)
}

// 00A196F0  cModel::vf00  size=30  [class]
undefined4 cModel::destruct(byte flags)
{
    this->~cModel();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);    // operator delete
    }
    return (undefined4)this;
}
