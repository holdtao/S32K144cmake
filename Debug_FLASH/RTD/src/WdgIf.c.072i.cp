
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Wdg_43_Instance1_SetTriggerCondition/5:
  Jump functions of caller  Wdg_43_Instance0_SetTriggerCondition/4:
  Jump functions of caller  Wdg_43_Instance1_SetMode/3:
  Jump functions of caller  Wdg_43_Instance0_SetMode/2:

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

Wdg_43_Instance1_SetTriggerCondition/5 (Wdg_43_Instance1_SetTriggerCondition) @0601ae00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: WdgIf_SetTriggerConditionFctPtr/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Wdg_43_Instance0_SetTriggerCondition/4 (Wdg_43_Instance0_SetTriggerCondition) @0601ad20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: WdgIf_SetTriggerConditionFctPtr/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Wdg_43_Instance1_SetMode/3 (Wdg_43_Instance1_SetMode) @0601ac40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: WdgIf_SetModeFctPtr/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Wdg_43_Instance0_SetMode/2 (Wdg_43_Instance0_SetMode) @0601ab60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: WdgIf_SetModeFctPtr/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
WdgIf_SetTriggerConditionFctPtr/1 (WdgIf_SetTriggerConditionFctPtr) @0601f000
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Wdg_43_Instance0_SetTriggerCondition/4 (addr)Wdg_43_Instance1_SetTriggerCondition/5 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
WdgIf_SetModeFctPtr/0 (WdgIf_SetModeFctPtr) @0601bcf0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Wdg_43_Instance0_SetMode/2 (addr)Wdg_43_Instance1_SetMode/3 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
