
IPA constant propagation start:
Determining dynamic type for call: Platform_Ipw_InitIntCtrl (_1);
  Starting walk at: Platform_Ipw_InitIntCtrl (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  IntCtrl_Ip_DisableIrq/9:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/8:
  Jump functions of caller  IntCtrl_Ip_SetPriority/7:
  Jump functions of caller  Platform_Ipw_Init/6:
    callsite  Platform_Ipw_Init/6 -> Platform_Ipw_InitIntCtrl/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Platform_Ipw_InitIntCtrl/5:

 Propagating constants:

Not considering Platform_Ipw_Init for cloning; -fipa-cp-clone disabled.

overall_size: 34, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Platform_Ipw_Init/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Platform_Ipw_InitIntCtrl/5:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

IntCtrl_Ip_DisableIrq/9 (IntCtrl_Ip_DisableIrq) @064791c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_Ipw_InitIntCtrl/5 (477815111 (estimated locally),4.05 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/8 (IntCtrl_Ip_EnableIrq) @064790e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_Ipw_InitIntCtrl/5 (477815111 (estimated locally),4.05 per call) 
  Calls: 
IntCtrl_Ip_SetPriority/7 (IntCtrl_Ip_SetPriority) @06479000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Platform_Ipw_InitIntCtrl/5 (955630223 (estimated locally),8.09 per call) 
  Calls: 
Platform_Ipw_Init/6 (Platform_Ipw_Init) @05f86a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Platform_Ipw_InitIntCtrl/5 (574129754 (estimated locally),0.53 per call) 
Platform_Ipw_InitIntCtrl/5 (Platform_Ipw_InitIntCtrl) @05f867e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Platform_Ipw_Init/6 (574129754 (estimated locally),0.53 per call) 
  Calls: IntCtrl_Ip_DisableIrq/9 (477815111 (estimated locally),4.05 per call) IntCtrl_Ip_EnableIrq/8 (477815111 (estimated locally),4.05 per call) IntCtrl_Ip_SetPriority/7 (955630223 (estimated locally),8.09 per call) 

;; Function Platform_Ipw_Init (Platform_Ipw_Init, funcdef_no=6, decl_uid=6296, cgraph_uid=7, symbol_order=6)

Modification phase of node Platform_Ipw_Init/6
Platform_Ipw_Init (const struct Platform_Ipw_ConfigType * pConfig)
{
  const struct IntCtrl_Ip_CtrlConfigType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  _1 = pConfig_3(D)->pIntCtrlConfig;
  if (_1 != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 4>; [46.53%]

  <bb 3> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  Platform_Ipw_InitIntCtrl (_1);
  # DEBUG ret => NULL
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 499612071]:
  # DEBUG ret => NULL
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


