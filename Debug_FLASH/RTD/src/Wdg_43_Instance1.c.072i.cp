
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Wdg_ChannelGetVersionInfo/7:
  Jump functions of caller  Wdg_ChannelSetTriggerCondition/6:
  Jump functions of caller  Wdg_ChannelSetMode/5:
  Jump functions of caller  Wdg_ChannelInit/4:
  Jump functions of caller  Wdg_43_Instance1_GetVersionInfo/3:
  Jump functions of caller  Wdg_43_Instance1_SetTriggerCondition/2:
  Jump functions of caller  Wdg_43_Instance1_SetMode/1:
  Jump functions of caller  Wdg_43_Instance1_Init/0:

 Propagating constants:

Not considering Wdg_43_Instance1_GetVersionInfo for cloning; -fipa-cp-clone disabled.
Not considering Wdg_43_Instance1_SetTriggerCondition for cloning; -fipa-cp-clone disabled.
Not considering Wdg_43_Instance1_SetMode for cloning; -fipa-cp-clone disabled.
Not considering Wdg_43_Instance1_Init for cloning; -fipa-cp-clone disabled.

overall_size: 25, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Wdg_43_Instance1_GetVersionInfo/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Wdg_43_Instance1_SetTriggerCondition/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Wdg_43_Instance1_SetMode/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Wdg_43_Instance1_Init/0:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Wdg_ChannelGetVersionInfo/7 (Wdg_ChannelGetVersionInfo) @05f672a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_43_Instance1_GetVersionInfo/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Wdg_ChannelSetTriggerCondition/6 (Wdg_ChannelSetTriggerCondition) @05f67ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_43_Instance1_SetTriggerCondition/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Wdg_ChannelSetMode/5 (Wdg_ChannelSetMode) @05f67d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_43_Instance1_SetMode/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Wdg_ChannelInit/4 (Wdg_ChannelInit) @05f67b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_43_Instance1_Init/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Wdg_43_Instance1_GetVersionInfo/3 (Wdg_43_Instance1_GetVersionInfo) @05f67700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Wdg_ChannelGetVersionInfo/7 (1073741824 (estimated locally),1.00 per call) 
Wdg_43_Instance1_SetTriggerCondition/2 (Wdg_43_Instance1_SetTriggerCondition) @05f67460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Wdg_ChannelSetTriggerCondition/6 (1073741824 (estimated locally),1.00 per call) 
Wdg_43_Instance1_SetMode/1 (Wdg_43_Instance1_SetMode) @05f671c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Wdg_ChannelSetMode/5 (1073741824 (estimated locally),1.00 per call) 
Wdg_43_Instance1_Init/0 (Wdg_43_Instance1_Init) @05f15c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Wdg_ChannelInit/4 (1073741824 (estimated locally),1.00 per call) 

;; Function Wdg_43_Instance1_Init (Wdg_43_Instance1_Init, funcdef_no=0, decl_uid=6218, cgraph_uid=1, symbol_order=0)

Modification phase of node Wdg_43_Instance1_Init/0
Wdg_43_Instance1_Init (const struct Wdg_ConfigType * ConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Wdg_ChannelInit (1, ConfigPtr_2(D));
  return;

}



;; Function Wdg_43_Instance1_SetMode (Wdg_43_Instance1_SetMode, funcdef_no=1, decl_uid=6220, cgraph_uid=2, symbol_order=1)

Modification phase of node Wdg_43_Instance1_SetMode/1
Wdg_43_Instance1_SetMode (WdgIf_ModeType Mode)
{
  Std_ReturnType _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 = Wdg_ChannelSetMode (1, Mode_2(D));
  return _4;

}



;; Function Wdg_43_Instance1_SetTriggerCondition (Wdg_43_Instance1_SetTriggerCondition, funcdef_no=2, decl_uid=6222, cgraph_uid=3, symbol_order=2)

Modification phase of node Wdg_43_Instance1_SetTriggerCondition/2
Wdg_43_Instance1_SetTriggerCondition (uint16 timeout)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Wdg_ChannelSetTriggerCondition (1, timeout_2(D));
  return;

}



;; Function Wdg_43_Instance1_GetVersionInfo (Wdg_43_Instance1_GetVersionInfo, funcdef_no=3, decl_uid=6224, cgraph_uid=4, symbol_order=3)

Modification phase of node Wdg_43_Instance1_GetVersionInfo/3
Wdg_43_Instance1_GetVersionInfo (struct Std_VersionInfoType * versioninfo)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Wdg_ChannelGetVersionInfo (1, versioninfo_2(D));
  return;

}


