
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

intCtrlConfig/1 (intCtrlConfig) @061d5af8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: aIrqConfiguration/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
aIrqConfiguration/0 (aIrqConfiguration) @061d5ab0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: intCtrlConfig/1 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
