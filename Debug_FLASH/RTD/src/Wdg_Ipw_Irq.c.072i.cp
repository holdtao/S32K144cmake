
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Ewm_Ip_IrqHandler/1:
  Jump functions of caller  Wdg_Ipw_Isr/0:

 Propagating constants:

Not considering Wdg_Ipw_Isr for cloning; -fipa-cp-clone disabled.

overall_size: 6, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Wdg_Ipw_Isr/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Ewm_Ip_IrqHandler/1 (Ewm_Ip_IrqHandler) @06a42c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_Ipw_Isr/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Wdg_Ipw_Isr/0 (Wdg_Ipw_Isr) @06a427e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ewm_Ip_IrqHandler/1 (1073741824 (estimated locally),1.00 per call) 

;; Function Wdg_Ipw_Isr (Wdg_Ipw_Isr, funcdef_no=0, decl_uid=5539, cgraph_uid=1, symbol_order=0)

Modification phase of node Wdg_Ipw_Isr/0
Wdg_Ipw_Isr ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Ewm_Ip_IrqHandler (0);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}


