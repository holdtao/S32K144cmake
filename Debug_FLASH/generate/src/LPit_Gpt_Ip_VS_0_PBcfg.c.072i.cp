
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Gpt_ProcessCommonInterrupt/2:

 Propagating constants:


overall_size: 0, max_new_size: 11001

IPA lattices after all propagation:

Lattices:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Gpt_ProcessCommonInterrupt/2 (Gpt_ProcessCommonInterrupt) @069a6b60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: LPIT_0_ChannelConfig_PB_VS_0/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
LPIT_0_ChannelConfig_PB_VS_0/1 (LPIT_0_ChannelConfig_PB_VS_0) @069acf30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Gpt_ProcessCommonInterrupt/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
LPIT_0_InitConfig_PB_VS_0/0 (LPIT_0_InitConfig_PB_VS_0) @069acee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
