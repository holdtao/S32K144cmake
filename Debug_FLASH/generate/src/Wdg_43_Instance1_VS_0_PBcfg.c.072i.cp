
IPA constant propagation start:

IPA structures before propagation:

Jump functions:

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

Wdg_Ipw_Settings_1_VS_0/2 (Wdg_Ipw_Settings_1_VS_0) @05f66c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Wdg_Settings_1_VS_0/0 (addr)
  Availability: not_available
  Varpool flags: read-only
Wdg_Config_1_VS_0/1 (Wdg_Config_1_VS_0) @05f66b40
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Wdg_Settings_1_VS_0/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Wdg_Settings_1_VS_0/0 (Wdg_Settings_1_VS_0) @05f66ab0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Wdg_Ipw_Settings_1_VS_0/2 (addr)
  Referring: Wdg_Config_1_VS_0/1 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
