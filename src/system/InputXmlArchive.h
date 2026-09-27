// REFINED
// sys::InputXmlArchive -- XML-backed input archive (RTTI: sys::InputXmlArchive : lib::InputArchive : lib::Archive).
// vftable 0x016D1634. Walks an XML node tree (current node at +0x78, parent at +0x7C) and feeds the
// current node's text to an embedded text archive at +0x80 (vptr there is reset to lib::Archive::vftable
// in the dtor -- presumably a lib::InputTextArchive<char const *,32>), to which the read slots forward.
// The lib::InputArchive / lib::Archive headers do not exist (namespaced classes get no auto header),
// so the bases are not declared here; the full interface is declared directly in vftable order.
#pragma once
#include "../../include/ghidra_types.h"
#include "../../include/auto/fwd.h"

namespace sys {

struct InputXmlArchive {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();                  // 00C67970 slot 0x00 (inherited)
    virtual bool vf04();                  // 00E92970 slot 0x04
    virtual void vf08();                  // 00C67810 slot 0x08 (inherited)
    virtual bool vf0C();                  // 00E92980 slot 0x0C
    virtual bool vf10(const char *name, int unused);         // 00E914E0 slot 0x10 (select node by name)
    virtual bool vf14(int unused1, int unused2);             // 00E91590 slot 0x14 (descend to first child)
    virtual bool vf18(void *out);         // 00E92AB0 slot 0x18 -> textArchive vf18
    virtual bool vf1C(void *out);         // 00E92AA0 slot 0x1C -> textArchive vf1C
    virtual bool vf20(void *out);         // 00E92A90 slot 0x20 -> textArchive vf20
    virtual bool vf24(void *out);         // 00E92A80 slot 0x24 -> textArchive vf24
    virtual bool vf28(void *out);         // 00E92A70 slot 0x28 -> textArchive vf28
    virtual bool vf2C(void *out);         // 00E92A60 slot 0x2C -> textArchive vf2C
    virtual bool vf30(void *out);         // 00E92A50 slot 0x30 -> textArchive vf30
    virtual bool vf34(void *out);         // 00E92A40 slot 0x34 -> textArchive vf34
    virtual bool vf38(char *out);         // 00E93ED0 slot 0x38 (byte read via textArchive vf2C)
    virtual bool vf3C(char *out);         // 00E93EA0 slot 0x3C (byte read via textArchive vf2C)
    virtual bool vf40(void *out);         // 00E92A30 slot 0x40 -> textArchive vf40
    virtual void vf44();                  // 00C678F0 slot 0x44 (lib::Archive)
    virtual void vf48();                  // 00C678E0 slot 0x48 (lib::Archive)
    virtual void vf4C();                  // 00C678D0 slot 0x4C (lib::Archive)
    virtual void vf50();                  // 00C678C0 slot 0x50 (lib::Archive)
    virtual void vf54();                  // 00C678B0 slot 0x54 (lib::Archive)
    virtual void vf58();                  // 00C678A0 slot 0x58 (lib::Archive)
    virtual void vf5C();                  // 00C67890 slot 0x5C (lib::Archive)
    virtual void vf60();                  // 00C67880 slot 0x60 (lib::Archive)
    virtual void vf64();                  // 00C67870 slot 0x64 (lib::Archive)
    virtual void vf68();                  // 00C67860 slot 0x68 (lib::Archive)
    virtual void vf6C();                  // 00C67850 slot 0x6C (lib::Archive)
    virtual void vf70();                  // 00C67910 slot 0x70 (lib::Archive)
    virtual bool vf74(void *out);         // 00E92990 slot 0x74 -> textArchive vf74
    virtual InputXmlArchive *vf78(unsigned char flags);      // 00E94050 slot 0x78 (scalar deleting dtor)

    // embedded text archive at +0x80: its read slots are thiscall bool (void *out)
    typedef bool (__thiscall *TextReadFn)(void *textArchive, void *out);
    void *textArchive()                 { return (char *)this + 0x80; }
    TextReadFn textArchiveSlot(int off) { return *(TextReadFn *)(*(char **)((char *)this + 0x80) + off); }

    // fields (absolute offsets from object start)
    void *xmlDocument()          { return (char *)this + 0x08; }                    // +0x08  embedded; torn down by FUN_00e09a00
    int  &currentNode()          { return *(int *)((char *)this + 0x78); }          // +0x78  XML node
    int  &parentNode()           { return *(int *)((char *)this + 0x7C); }          // +0x7C  XML node (0 = at root)
    void *&textArchiveVtbl()     { return *(void **)((char *)this + 0x80); }        // +0x80  embedded text archive vptr
    int  &textPos()              { return *(int *)((char *)this + 0x84); }          // +0x84  (textArchive+0x04)
    char *&textBegin()           { return *(char **)((char *)this + 0x88); }        // +0x88  (textArchive+0x08)
    char *&textEnd()             { return *(char **)((char *)this + 0x8C); }        // +0x8C  (textArchive+0x0C) points at terminator
    char *&textCursor()          { return *(char **)((char *)this + 0x90); }        // +0x90  (textArchive+0x10)
    char &textFlag()             { return *(char *)((char *)this + 0x94); }         // +0x94  (textArchive+0x14)
};

} // namespace sys
