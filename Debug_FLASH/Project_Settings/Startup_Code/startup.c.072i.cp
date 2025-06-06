
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  init_data_bss/0:

 Propagating constants:

Not considering init_data_bss for cloning; -fipa-cp-clone disabled.

overall_size: 34, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: init_data_bss/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

__ZERO_TABLE/2 (__ZERO_TABLE) @05d23090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: init_data_bss/0 (read)init_data_bss/0 (addr)
  Availability: not_available
  Varpool flags:
__INIT_TABLE/1 (__INIT_TABLE) @05d23048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: init_data_bss/0 (read)init_data_bss/0 (addr)
  Availability: not_available
  Varpool flags:
init_data_bss/0 (init_data_bss) @05d09a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: __INIT_TABLE/1 (read)__INIT_TABLE/1 (addr)__ZERO_TABLE/2 (read)__ZERO_TABLE/2 (addr)
  Referring: 
  Availability: available
  Function flags: count:14598062 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function init_data_bss (init_data_bss, funcdef_no=0, decl_uid=5421, cgraph_uid=1, symbol_order=0)

Modification phase of node init_data_bss/0
init_data_bss ()
{
  uint32 j;
  uint32 i;
  uint32 size;
  uint32 len;
  uint8 * ram;
  const uint8 * rom;
  long unsigned int _1;
  const struct Sys_CopyLayoutType * _2;
  uint8 * _3;
  long unsigned int _4;
  long unsigned int _5;
  const uint8 * _6;
  uint8 * _7;
  unsigned char _8;
  long unsigned int _9;
  const struct Sys_ZeroLayoutType * _10;
  uint8 * _11;
  long unsigned int _12;
  long unsigned int _13;
  uint8 * _14;

  <bb 2> [local count: 14598062]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG len => 0
  # DEBUG BEGIN_STMT
  # DEBUG size => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  # DEBUG BEGIN_STMT
  # DEBUG j => 0
  # DEBUG BEGIN_STMT
  # DEBUG initTable_Ptr => &__INIT_TABLE
  # DEBUG BEGIN_STMT
  # DEBUG zeroTable_Ptr => &__ZERO_TABLE
  # DEBUG BEGIN_STMT
  len_24 = MEM[(const uint32 *)&__INIT_TABLE];
  # DEBUG len => len_24
  # DEBUG BEGIN_STMT
  # DEBUG initTable_Ptr => &MEM[(void *)&__INIT_TABLE + 4B]
  # DEBUG BEGIN_STMT
  # DEBUG copy_layout => &MEM[(void *)&__INIT_TABLE + 4B]
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 118111595]:
  # DEBUG BEGIN_STMT
  _1 = i_15 * 12;
  _2 = &MEM[(void *)&__INIT_TABLE + 4B] + _1;
  rom_31 = _2->rom_start;
  # DEBUG rom => rom_31
  # DEBUG BEGIN_STMT
  ram_32 = _2->ram_start;
  # DEBUG ram => ram_32
  # DEBUG BEGIN_STMT
  _3 = _2->rom_end;
  _4 = (long unsigned int) _3;
  _5 = (long unsigned int) rom_31;
  size_33 = _4 - _5;
  # DEBUG size => size_33
  # DEBUG BEGIN_STMT
  # DEBUG j => 0
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 955630185]:
  # DEBUG BEGIN_STMT
  _6 = rom_31 + j_17;
  _7 = ram_32 + j_17;
  _8 = *_6;
  *_7 = _8;
  # DEBUG BEGIN_STMT
  j_36 = j_17 + 1;
  # DEBUG j => j_36

  <bb 5> [local count: 1073741782]:
  # j_17 = PHI <0(3), j_36(4)>
  # DEBUG j => j_17
  # DEBUG BEGIN_STMT
  if (j_17 < size_33)
    goto <bb 4>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 6> [local count: 118111596]:
  # DEBUG BEGIN_STMT
  i_34 = i_15 + 1;
  # DEBUG i => i_34

  <bb 7> [local count: 132709658]:
  # i_15 = PHI <0(2), i_34(6)>
  # DEBUG i => i_15
  # DEBUG BEGIN_STMT
  if (i_15 < len_24)
    goto <bb 3>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 14598062]:
  # DEBUG BEGIN_STMT
  len_25 = MEM[(const uint32 *)&__ZERO_TABLE];
  # DEBUG len => len_25
  # DEBUG BEGIN_STMT
  # DEBUG zeroTable_Ptr => &MEM[(void *)&__ZERO_TABLE + 4B]
  # DEBUG BEGIN_STMT
  # DEBUG zero_layout => &MEM[(void *)&__ZERO_TABLE + 4B]
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 13>; [100.00%]

  <bb 9> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _9 = i_16 * 8;
  _10 = &MEM[(void *)&__ZERO_TABLE + 4B] + _9;
  ram_26 = _10->ram_start;
  # DEBUG ram => ram_26
  # DEBUG BEGIN_STMT
  _11 = _10->ram_end;
  _12 = (long unsigned int) _11;
  _13 = (long unsigned int) ram_26;
  size_27 = _12 - _13;
  # DEBUG size => size_27
  # DEBUG BEGIN_STMT
  # DEBUG j => 0
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _14 = ram_26 + j_18;
  *_14 = 0;
  # DEBUG BEGIN_STMT
  j_30 = j_18 + 1;
  # DEBUG j => j_30

  <bb 11> [local count: 1073741824]:
  # j_18 = PHI <0(9), j_30(10)>
  # DEBUG j => j_18
  # DEBUG BEGIN_STMT
  if (j_18 < size_27)
    goto <bb 10>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 12> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  i_28 = i_16 + 1;
  # DEBUG i => i_28

  <bb 13> [local count: 132709663]:
  # i_16 = PHI <0(8), i_28(12)>
  # DEBUG i => i_16
  # DEBUG BEGIN_STMT
  if (i_16 < len_25)
    goto <bb 9>; [89.00%]
  else
    goto <bb 14>; [11.00%]

  <bb 14> [local count: 14598063]:
  return;

}


