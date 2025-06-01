
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Gpt_ValidateChannelStatus.isra.0.part.0/28:
  Jump functions of caller  Gpt_ValidateChannelStatus.isra.0/27:
    callsite  Gpt_ValidateChannelStatus.isra.0/27 -> Gpt_ValidateChannelStatus.isra.0.part.0/28 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Gpt_Ipw_DisableInterrupt/26:
  Jump functions of caller  Gpt_Ipw_StopTimer/25:
  Jump functions of caller  Gpt_Ipw_StartTimer/23:
  Jump functions of caller  Gpt_Ipw_EnableInterrupt/22:
  Jump functions of caller  Gpt_Ipw_GetTimeElapsed/20:
  Jump functions of caller  Det_ReportRuntimeError/18:
  Jump functions of caller  Gpt_Ipw_DeInit/17:
  Jump functions of caller  Gpt_Ipw_Init/16:
  Jump functions of caller  Gpt_Ipw_InitInstances/15:
  Jump functions of caller  Gpt_ProcessCommonInterrupt/14:
    indirect simple callsite, calling param -1, offset 0, for stmt _12 ();
  Jump functions of caller  Gpt_DisableNotification/13:
  Jump functions of caller  Gpt_EnableNotification/12:
  Jump functions of caller  Gpt_StopTimer/11:
  Jump functions of caller  Gpt_StartTimer/10:
    callsite  Gpt_StartTimer/10 -> Gpt_ValidateChannelStatus.isra.0/27 : 
       param 0: CONST: 5
         value: 0x5, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Gpt_GetTimeRemaining/9:
  Jump functions of caller  Gpt_GetTimeElapsed/8:
  Jump functions of caller  Gpt_DeInit/7:
    callsite  Gpt_DeInit/7 -> Gpt_ConvertChannelIndexToChannel/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Gpt_DeInit/7 -> Gpt_ValidateChannelStatus.isra.0/27 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Gpt_DeInit/7 -> Gpt_ConvertChannelIndexToChannel/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Gpt_Init/6:
    callsite  Gpt_Init/6 -> Gpt_ConvertChannelIndexToChannel/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Gpt_ConvertChannelIndexToChannel/5:

 Propagating constants:

Not considering Gpt_ProcessCommonInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Gpt_DisableNotification for cloning; -fipa-cp-clone disabled.
Not considering Gpt_EnableNotification for cloning; -fipa-cp-clone disabled.
Not considering Gpt_StopTimer for cloning; -fipa-cp-clone disabled.
Not considering Gpt_StartTimer for cloning; -fipa-cp-clone disabled.
Not considering Gpt_GetTimeRemaining for cloning; -fipa-cp-clone disabled.
Not considering Gpt_GetTimeElapsed for cloning; -fipa-cp-clone disabled.
Not considering Gpt_DeInit for cloning; -fipa-cp-clone disabled.
Not considering Gpt_Init for cloning; -fipa-cp-clone disabled.

overall_size: 291, max_new_size: 11001
 - context independent values, size: 8, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Gpt_ValidateChannelStatus.isra.0.part.0/28:
    param [0]: 5 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
               2 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x5, mask = 0x7
         uint8 [2, 5]
        AGGS VARIABLE
  Node: Gpt_ValidateChannelStatus.isra.0/27:
    param [0]: 2 [loc_time: 1, loc_size: 9, prop_time: 0, prop_size: 0]
               5 [loc_time: 1, loc_size: 9, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x5, mask = 0x7
         uint8 [2, 5]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Gpt_ProcessCommonInterrupt/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_DisableNotification/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_EnableNotification/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_StopTimer/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_StartTimer/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_GetTimeRemaining/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_GetTimeElapsed/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_DeInit/7:
  Node: Gpt_Init/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_ConvertChannelIndexToChannel/5:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint32 [0, 0]
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of Gpt_ConvertChannelIndexToChannel/5 for all known contexts.
    replacing param #1 coreID with const 0
Propagated bits info for function Gpt_ConvertChannelIndexToChannel.constprop/29:
 param 1: value = 0x0, mask = 0x0
Propagated bits info for function Gpt_ValidateChannelStatus.isra.0.part.0/28:
 param 0: value = 0x5, mask = 0x7
Propagated bits info for function Gpt_ValidateChannelStatus.isra.0/27:
 param 0: value = 0x5, mask = 0x7
Propagated bits info for function Gpt_ConvertChannelIndexToChannel/5:
 param 1: value = 0x0, mask = 0x0

IPA constant propagation end

Reclaiming functions: Gpt_ConvertChannelIndexToChannel/5
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Gpt_ConvertChannelIndexToChannel.constprop.0/29 (Gpt_ConvertChannelIndexToChannel.constprop) @060fa700
  Type: function definition analyzed
  Visibility:
  References: Gpt_pConfig/1 (read)
  Referring: 
  Clone of Gpt_ConvertChannelIndexToChannel/5
  Availability: local
  Function flags: count:397250652 (estimated locally) local optimize_size
  Called by: Gpt_Init/6 (955630223 (estimated locally),8.09 per call) Gpt_DeInit/7 (1014686025 (estimated locally),8.83 per call) Gpt_DeInit/7 (464675199 (estimated locally),4.05 per call) 
  Calls: 
Gpt_ValidateChannelStatus.isra.0.part.0/28 (Gpt_ValidateChannelStatus.isra.0.part.0) @0663ca80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Gpt_ValidateChannelStatus.isra.0/27 (217325344 (estimated locally),0.20 per call) 
  Calls: Det_ReportRuntimeError/18 (1073741824 (estimated locally),1.00 per call) 
Gpt_ValidateChannelStatus.isra.0/27 (Gpt_ValidateChannelStatus.isra.0) @0663c540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Gpt_aChannelInfo/2 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Gpt_StartTimer/10 (1073741824 (estimated locally),1.00 per call) Gpt_DeInit/7 (1014686025 (estimated locally),8.83 per call) 
  Calls: Gpt_ValidateChannelStatus.isra.0.part.0/28 (217325344 (estimated locally),0.20 per call) 
Gpt_Ipw_DisableInterrupt/26 (Gpt_Ipw_DisableInterrupt) @065f8d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_DisableNotification/13 (414571718 (estimated locally),0.39 per call) 
  Calls: 
Gpt_Ipw_StopTimer/25 (Gpt_Ipw_StopTimer) @065f8e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_ProcessCommonInterrupt/14 (152127742 (estimated locally),0.14 per call) Gpt_StopTimer/11 (217325345 (estimated locally),0.20 per call) 
  Calls: 
returnHwChannelInfo.6253/24 (returnHwChannelInfo) @06621b88
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Gpt_StopTimer/11 (write)Gpt_StopTimer/11 (write)Gpt_StopTimer/11 (addr)Gpt_StopTimer/11 (read)
  Availability: available
  Varpool flags:
Gpt_Ipw_StartTimer/23 (Gpt_Ipw_StartTimer) @065f8b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_StartTimer/10 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Gpt_Ipw_EnableInterrupt/22 (Gpt_Ipw_EnableInterrupt) @065f8a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_EnableNotification/12 (354334802 (estimated locally),0.33 per call) Gpt_StartTimer/10 (108662673 (estimated locally),0.10 per call) 
  Calls: 
returnHwChannelInfo.6233/21 (returnHwChannelInfo) @066214c8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Gpt_GetTimeRemaining/9 (write)Gpt_GetTimeRemaining/9 (write)Gpt_GetTimeRemaining/9 (addr)Gpt_GetTimeRemaining/9 (read)Gpt_GetTimeRemaining/9 (read)Gpt_GetTimeRemaining/9 (read)
  Availability: available
  Varpool flags:
Gpt_Ipw_GetTimeElapsed/20 (Gpt_Ipw_GetTimeElapsed) @065f8620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_StopTimer/11 (1073741824 (estimated locally),1.00 per call) Gpt_GetTimeRemaining/9 (1073741823 (estimated locally),1.00 per call) Gpt_GetTimeElapsed/8 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
returnHwChannelInfo.6218/19 (returnHwChannelInfo) @06621048
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Gpt_GetTimeElapsed/8 (write)Gpt_GetTimeElapsed/8 (write)Gpt_GetTimeElapsed/8 (addr)Gpt_GetTimeElapsed/8 (read)Gpt_GetTimeElapsed/8 (read)Gpt_GetTimeElapsed/8 (read)
  Availability: available
  Varpool flags:
Det_ReportRuntimeError/18 (Det_ReportRuntimeError) @065f8460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_StartTimer/10 (177167401 (estimated locally),0.17 per call) Gpt_ValidateChannelStatus.isra.0.part.0/28 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Gpt_Ipw_DeInit/17 (Gpt_Ipw_DeInit) @065f81c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_DeInit/7 (464675199 (estimated locally),4.05 per call) 
  Calls: 
Gpt_Ipw_Init/16 (Gpt_Ipw_Init) @06116b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Init/6 (955630223 (estimated locally),8.09 per call) 
  Calls: 
Gpt_Ipw_InitInstances/15 (Gpt_Ipw_InitInstances) @06116620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Init/6 (118111600 (estimated locally),1.00 per call) 
  Calls: 
Gpt_ProcessCommonInterrupt/14 (Gpt_ProcessCommonInterrupt) @06116d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Gpt_pConfig/1 (read)Gpt_aChannelInfo/2 (write)Gpt_eMode/0 (read)Gpt_aChannelInfo/2 (read)Gpt_pConfig/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpt_Ipw_StopTimer/25 (152127742 (estimated locally),0.14 per call) 
   Indirect call(187904819 (estimated locally),0.17 per call) 
Gpt_DisableNotification/13 (Gpt_DisableNotification) @06116a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Gpt_pConfig/1 (read)Gpt_aChannelInfo/2 (write)Gpt_eMode/0 (read)Gpt_aChannelInfo/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpt_Ipw_DisableInterrupt/26 (414571718 (estimated locally),0.39 per call) 
Gpt_EnableNotification/12 (Gpt_EnableNotification) @061167e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Gpt_pConfig/1 (read)Gpt_aChannelInfo/2 (write)Gpt_eMode/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpt_Ipw_EnableInterrupt/22 (354334802 (estimated locally),0.33 per call) 
Gpt_StopTimer/11 (Gpt_StopTimer) @06116540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: returnHwChannelInfo.6253/24 (write)returnHwChannelInfo.6253/24 (write)Gpt_pConfig/1 (read)returnHwChannelInfo.6253/24 (addr)Gpt_aChannelInfo/2 (read)Gpt_pConfig/1 (read)returnHwChannelInfo.6253/24 (read)Gpt_pConfig/1 (read)Gpt_aChannelInfo/2 (write)Gpt_aStopTime/3 (write)Gpt_aChannelInfo/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpt_Ipw_StopTimer/25 (217325345 (estimated locally),0.20 per call) Gpt_Ipw_GetTimeElapsed/20 (1073741824 (estimated locally),1.00 per call) 
Gpt_StartTimer/10 (Gpt_StartTimer) @061162a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Gpt_pConfig/1 (read)Gpt_aChannelInfo/2 (write)Gpt_pConfig/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ReportRuntimeError/18 (177167401 (estimated locally),0.17 per call) Gpt_Ipw_StartTimer/23 (536870913 (estimated locally),0.50 per call) Gpt_Ipw_EnableInterrupt/22 (108662673 (estimated locally),0.10 per call) Gpt_ValidateChannelStatus.isra.0/27 (1073741824 (estimated locally),1.00 per call) 
Gpt_GetTimeRemaining/9 (Gpt_GetTimeRemaining) @06116000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: returnHwChannelInfo.6233/21 (write)returnHwChannelInfo.6233/21 (write)Gpt_pConfig/1 (read)returnHwChannelInfo.6233/21 (addr)Gpt_aChannelInfo/2 (read)returnHwChannelInfo.6233/21 (read)Gpt_pConfig/1 (read)returnHwChannelInfo.6233/21 (read)returnHwChannelInfo.6233/21 (read)Gpt_aStopTime/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpt_Ipw_GetTimeElapsed/20 (1073741823 (estimated locally),1.00 per call) 
Gpt_GetTimeElapsed/8 (Gpt_GetTimeElapsed) @060faa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: returnHwChannelInfo.6218/19 (write)returnHwChannelInfo.6218/19 (write)Gpt_pConfig/1 (read)returnHwChannelInfo.6218/19 (addr)Gpt_aChannelInfo/2 (read)returnHwChannelInfo.6218/19 (read)Gpt_pConfig/1 (read)returnHwChannelInfo.6218/19 (read)Gpt_aStopTime/3 (read)returnHwChannelInfo.6218/19 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpt_Ipw_GetTimeElapsed/20 (1073741823 (estimated locally),1.00 per call) 
Gpt_DeInit/7 (Gpt_DeInit) @060faee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Gpt_pConfig/1 (read)Gpt_aChannelInfo/2 (write)Gpt_aChannelInfo/2 (write)Gpt_aStopTime/3 (write)Gpt_pConfig/1 (read)Gpt_pConfig/1 (write)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpt_Ipw_DeInit/17 (464675199 (estimated locally),4.05 per call) Gpt_ConvertChannelIndexToChannel.constprop/29 (464675199 (estimated locally),4.05 per call) Gpt_ValidateChannelStatus.isra.0/27 (1014686025 (estimated locally),8.83 per call) Gpt_ConvertChannelIndexToChannel.constprop/29 (1014686025 (estimated locally),8.83 per call) 
Gpt_Init/6 (Gpt_Init) @060fac40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Gpt_pConfig/1 (write)Gpt_aChannelInfo/2 (write)Gpt_aChannelInfo/2 (write)Gpt_aStopTime/3 (write)Gpt_pConfig/1 (read)Gpt_eMode/0 (write)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpt_Ipw_Init/16 (955630223 (estimated locally),8.09 per call) Gpt_ConvertChannelIndexToChannel.constprop/29 (955630223 (estimated locally),8.09 per call) Gpt_Ipw_InitInstances/15 (118111600 (estimated locally),1.00 per call) 
Gpt_ConvertChannelIndexToChannel/5 (Gpt_ConvertChannelIndexToChannel) @060fa9a0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:397250652 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Gpt_aStopTime/3 (Gpt_aStopTime) @060f91f8
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: Gpt_GetTimeElapsed/8 (read)Gpt_GetTimeRemaining/9 (read)Gpt_Init/6 (write)Gpt_DeInit/7 (write)Gpt_StopTimer/11 (write)
  Availability: available
  Varpool flags:
Gpt_aChannelInfo/2 (Gpt_aChannelInfo) @060f9168
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Gpt_StopTimer/11 (write)Gpt_DisableNotification/13 (read)Gpt_ProcessCommonInterrupt/14 (read)Gpt_ValidateChannelStatus.isra.0/27 (read)Gpt_EnableNotification/12 (write)Gpt_Init/6 (write)Gpt_DeInit/7 (write)Gpt_GetTimeElapsed/8 (read)Gpt_StopTimer/11 (write)Gpt_Init/6 (write)Gpt_GetTimeRemaining/9 (read)Gpt_StartTimer/10 (write)Gpt_DeInit/7 (write)Gpt_DisableNotification/13 (write)Gpt_StopTimer/11 (read)Gpt_ProcessCommonInterrupt/14 (write)
  Availability: available
  Varpool flags:
Gpt_pConfig/1 (Gpt_pConfig) @060f90d8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Gpt_GetTimeRemaining/9 (read)Gpt_GetTimeRemaining/9 (read)Gpt_StopTimer/11 (read)Gpt_DisableNotification/13 (read)Gpt_EnableNotification/12 (read)Gpt_GetTimeElapsed/8 (read)Gpt_StartTimer/10 (read)Gpt_StartTimer/10 (read)Gpt_ConvertChannelIndexToChannel.constprop.0/29 (read)Gpt_GetTimeElapsed/8 (read)Gpt_Init/6 (write)Gpt_Init/6 (read)Gpt_DeInit/7 (read)Gpt_DeInit/7 (read)Gpt_DeInit/7 (write)Gpt_StopTimer/11 (read)Gpt_StopTimer/11 (read)Gpt_ProcessCommonInterrupt/14 (read)Gpt_ProcessCommonInterrupt/14 (read)
  Availability: available
  Varpool flags:
Gpt_eMode/0 (Gpt_eMode) @060f9048
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: Gpt_EnableNotification/12 (read)Gpt_DisableNotification/13 (read)Gpt_Init/6 (write)Gpt_ProcessCommonInterrupt/14 (read)
  Availability: available
  Varpool flags: initialized

;; Function Gpt_ConvertChannelIndexToChannel.constprop (Gpt_ConvertChannelIndexToChannel.constprop.0, funcdef_no=13, decl_uid=6371, cgraph_uid=23, symbol_order=29)

Modification phase of node Gpt_ConvertChannelIndexToChannel.constprop/29
Gpt_ConvertChannelIndexToChannel.constprop (Gpt_ChannelType ChannelIndex)
{
  Gpt_ChannelType Channel;
  uint32 coreID;
  const struct Gpt_ConfigType * _1;
  const uint8[<unknown>] * _2;
  int _4;
  unsigned char _5;

  <bb 7> [local count: 397250652]:
  # DEBUG coreID => 0

  <bb 2> [local count: 397250652]:
  # DEBUG BEGIN_STMT
  # DEBUG Channel => 2
  # DEBUG BEGIN_STMT
  # DEBUG Channel => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  _1 = Gpt_pConfig[0];
  _2 = _1->u8GptChannelIdToIndexMap;
  _4 = (int) Channel_3;
  _5 = *_2[_4];
  if (_5 == ChannelIndex_6(D))
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 676491173]:
  # DEBUG BEGIN_STMT
  Channel_7 = Channel_3 + 1;
  # DEBUG Channel => Channel_7

  <bb 5> [local count: 1073741824]:
  # Channel_3 = PHI <0(2), Channel_7(4)>
  # DEBUG Channel => Channel_3
  # DEBUG BEGIN_STMT
  if (Channel_3 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 6>; [33.33%]

  <bb 6> [local count: 397250652]:
  # Channel_8 = PHI <Channel_3(3), Channel_3(5)>
  # DEBUG BEGIN_STMT
  return Channel_8;

}



;; Function Gpt_Init (Gpt_Init, funcdef_no=2, decl_uid=6090, cgraph_uid=3, symbol_order=6)

Modification phase of node Gpt_Init/6
Gpt_Init (const struct Gpt_ConfigType * configPtr)
{
  Gpt_ChannelType channel;
  Gpt_ChannelType ChannelIndex;
  int _1;
  const struct Gpt_ChannelConfigType[<unknown>] * _2;
  int _3;
  struct Gpt_Ipw_HwChannelConfigType * _4;
  const struct Gpt_ConfigType * _5;
  unsigned char _6;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG coreID => 0
  # DEBUG BEGIN_STMT
  Gpt_pConfig[0] = configPtr_10(D);
  # DEBUG BEGIN_STMT
  Gpt_Ipw_InitInstances (configPtr_10(D));
  # DEBUG BEGIN_STMT
  # DEBUG ChannelIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  channel_14 = Gpt_ConvertChannelIndexToChannel (ChannelIndex_7, 0);
  # DEBUG channel => channel_14
  # DEBUG BEGIN_STMT
  _1 = (int) channel_14;
  Gpt_aChannelInfo[_1].bNotificationEnabled = 0;
  # DEBUG BEGIN_STMT
  Gpt_aChannelInfo[_1].eChannelStatus = 1;
  # DEBUG BEGIN_STMT
  Gpt_aStopTime[_1] ={v} 0;
  # DEBUG BEGIN_STMT
  _2 = _5->Gpt_pChannelConfig;
  _3 = (int) ChannelIndex_7;
  _4 = *_2[_3].Gpt_Ipw_HwChannelConfig;
  Gpt_Ipw_Init (_4);
  # DEBUG BEGIN_STMT
  ChannelIndex_19 = ChannelIndex_7 + 1;
  # DEBUG ChannelIndex => ChannelIndex_19

  <bb 4> [local count: 1073741824]:
  # ChannelIndex_7 = PHI <0(2), ChannelIndex_19(3)>
  # DEBUG ChannelIndex => ChannelIndex_7
  # DEBUG BEGIN_STMT
  _5 = Gpt_pConfig[0];
  _6 = _5->channelCount;
  if (_6 > ChannelIndex_7)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  Gpt_eMode ={v} 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Gpt_DeInit (Gpt_DeInit, funcdef_no=3, decl_uid=6092, cgraph_uid=4, symbol_order=7)

Modification phase of node Gpt_DeInit/7
Gpt_DeInit ()
{
  Std_ReturnType allChannelStatus;
  Gpt_ChannelType ChannelIndex;
  Gpt_ChannelType channel;
  unsigned char _1;
  const struct Gpt_ConfigType * _2;
  unsigned char _3;
  int _4;
  const struct Gpt_ChannelConfigType[<unknown>] * _5;
  int _6;
  struct Gpt_Ipw_HwChannelConfigType * _7;
  const struct Gpt_ConfigType * _8;
  unsigned char _9;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG allChannelStatus => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG coreID => 0
  # DEBUG BEGIN_STMT
  # DEBUG ChannelIndex => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  channel_18 = Gpt_ConvertChannelIndexToChannel (ChannelIndex_10, 0);
  # DEBUG channel => channel_18
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 0
  _1 = Gpt_ValidateChannelStatus.isra.0 (2, channel_18);
  if (_1 == 1)
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  ChannelIndex_20 = ChannelIndex_10 + 1;
  # DEBUG ChannelIndex => ChannelIndex_20

  <bb 5> [local count: 1073741824]:
  # ChannelIndex_10 = PHI <0(2), ChannelIndex_20(4)>
  # DEBUG ChannelIndex => ChannelIndex_10
  # DEBUG BEGIN_STMT
  _2 = Gpt_pConfig[0];
  _3 = _2->channelCount;
  if (_3 > ChannelIndex_10)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # allChannelStatus_12 = PHI <1(3), 0(5)>
  # DEBUG allChannelStatus => allChannelStatus_12
  # DEBUG BEGIN_STMT
  if (allChannelStatus_12 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 11> [local count: 57431766]:
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 464675199]:
  # DEBUG BEGIN_STMT
  channel_22 = Gpt_ConvertChannelIndexToChannel (ChannelIndex_11, 0);
  # DEBUG channel => channel_22
  # DEBUG BEGIN_STMT
  _4 = (int) channel_22;
  Gpt_aChannelInfo[_4].bNotificationEnabled = 0;
  # DEBUG BEGIN_STMT
  Gpt_aChannelInfo[_4].eChannelStatus = 0;
  # DEBUG BEGIN_STMT
  Gpt_aStopTime[_4] ={v} 0;
  # DEBUG BEGIN_STMT
  _5 = _8->Gpt_pChannelConfig;
  _6 = (int) ChannelIndex_11;
  _7 = *_5[_6].Gpt_Ipw_HwChannelConfig;
  Gpt_Ipw_DeInit (_7);
  # DEBUG BEGIN_STMT
  ChannelIndex_27 = ChannelIndex_11 + 1;
  # DEBUG ChannelIndex => ChannelIndex_27

  <bb 8> [local count: 522106965]:
  # ChannelIndex_11 = PHI <ChannelIndex_27(7), 0(11)>
  # DEBUG ChannelIndex => ChannelIndex_11
  # DEBUG BEGIN_STMT
  _8 = Gpt_pConfig[0];
  _9 = _8->channelCount;
  if (_9 > ChannelIndex_11)
    goto <bb 7>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  Gpt_pConfig[0] = 0B;

  <bb 10> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Gpt_GetTimeElapsed (Gpt_GetTimeElapsed, funcdef_no=4, decl_uid=6094, cgraph_uid=5, symbol_order=8)

Modification phase of node Gpt_GetTimeElapsed/8
Gpt_GetTimeElapsed (Gpt_ChannelType channel)
{
  Gpt_ValueType returnValue;
  uint8 ChannelIndex;
  static struct Gpt_HwChannelInfoType returnHwChannelInfo;
  const struct Gpt_ConfigType * _1;
  const uint8[<unknown>] * _2;
  int _3;
  const struct Gpt_ChannelConfigType[<unknown>] * _4;
  int _5;
  struct Gpt_Ipw_HwChannelConfigType * _6;
  <unnamed type> _7;
  _Bool _8;
  const struct Gpt_ConfigType * _9;
  const struct Gpt_ChannelConfigType[<unknown>] * _10;
  <unnamed type> _11;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  returnHwChannelInfo.bChannelRollover = 0;
  # DEBUG BEGIN_STMT
  returnHwChannelInfo.uTargetTime = 0;
  # DEBUG BEGIN_STMT
  # DEBUG coreID => 0
  # DEBUG BEGIN_STMT
  _1 = Gpt_pConfig[0];
  _2 = _1->u8GptChannelIdToIndexMap;
  _3 = (int) channel_16(D);
  ChannelIndex_17 = *_2[_3];
  # DEBUG ChannelIndex => ChannelIndex_17
  # DEBUG BEGIN_STMT
  _4 = _1->Gpt_pChannelConfig;
  _5 = (int) ChannelIndex_17;
  _6 = *_4[_5].Gpt_Ipw_HwChannelConfig;
  returnValue_19 = Gpt_Ipw_GetTimeElapsed (_6, &returnHwChannelInfo);
  # DEBUG returnValue => returnValue_19
  # DEBUG BEGIN_STMT
  _7 = Gpt_aChannelInfo[_3].eChannelStatus;
  switch (_7) <default: <L11> [20.00%], case 1: <L5> [20.00%], case 2: <L6> [20.00%], case 3: <L7> [20.00%], case 4: <L0> [20.00%]>

  <bb 3> [local count: 214748364]:
<L0>:
  # DEBUG BEGIN_STMT
  _8 = returnHwChannelInfo.bChannelRollover;
  if (_8 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 4> [local count: 107374182]:
  _9 = Gpt_pConfig[0];
  _10 = _9->Gpt_pChannelConfig;
  _11 = *_10[_5].Gpt_eChannelMode;
  if (_11 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 5> [local count: 36507222]:
  # DEBUG BEGIN_STMT
  returnValue_20 = returnHwChannelInfo.uTargetTime;
  # DEBUG returnValue => returnValue_20
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 214748364]:
<L5>:
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 214748364]:
<L6>:
  # DEBUG BEGIN_STMT
  returnValue_22 ={v} Gpt_aStopTime[_3];
  # DEBUG returnValue => returnValue_22
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 214748364]:
<L7>:
  # DEBUG BEGIN_STMT
  returnValue_21 = returnHwChannelInfo.uTargetTime;
  # DEBUG returnValue => returnValue_21
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 1073741824]:
  # returnValue_12 = PHI <returnValue_19(4), 0(6), returnValue_22(7), returnValue_21(8), returnValue_19(2), returnValue_19(3), returnValue_20(5)>
<L11>:
  # DEBUG returnValue => returnValue_12
  # DEBUG BEGIN_STMT
  return returnValue_12;

}



;; Function Gpt_GetTimeRemaining (Gpt_GetTimeRemaining, funcdef_no=5, decl_uid=6096, cgraph_uid=6, symbol_order=9)

Modification phase of node Gpt_GetTimeRemaining/9
Gpt_GetTimeRemaining (Gpt_ChannelType channel)
{
  Gpt_ValueType returnValue;
  static struct Gpt_HwChannelInfoType returnHwChannelInfo;
  uint8 ChannelIndex;
  const struct Gpt_ConfigType * _1;
  const uint8[<unknown>] * _2;
  int _3;
  const struct Gpt_ChannelConfigType[<unknown>] * _4;
  int _5;
  struct Gpt_Ipw_HwChannelConfigType * _6;
  <unnamed type> _7;
  _Bool _8;
  const struct Gpt_ConfigType * _9;
  const struct Gpt_ChannelConfigType[<unknown>] * _10;
  <unnamed type> _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  returnHwChannelInfo.bChannelRollover = 0;
  # DEBUG BEGIN_STMT
  returnHwChannelInfo.uTargetTime = 0;
  # DEBUG BEGIN_STMT
  # DEBUG coreID => 0
  # DEBUG BEGIN_STMT
  _1 = Gpt_pConfig[0];
  _2 = _1->u8GptChannelIdToIndexMap;
  _3 = (int) channel_19(D);
  ChannelIndex_20 = *_2[_3];
  # DEBUG ChannelIndex => ChannelIndex_20
  # DEBUG BEGIN_STMT
  _4 = _1->Gpt_pChannelConfig;
  _5 = (int) ChannelIndex_20;
  _6 = *_4[_5].Gpt_Ipw_HwChannelConfig;
  returnValue_22 = Gpt_Ipw_GetTimeElapsed (_6, &returnHwChannelInfo);
  # DEBUG returnValue => returnValue_22
  # DEBUG BEGIN_STMT
  _7 = Gpt_aChannelInfo[_3].eChannelStatus;
  switch (_7) <default: <L11> [20.00%], case 1: <L5> [20.00%], case 2: <L6> [20.00%], case 3: <L7> [20.00%], case 4: <L0> [20.00%]>

  <bb 3> [local count: 214748364]:
<L0>:
  # DEBUG BEGIN_STMT
  _8 = returnHwChannelInfo.bChannelRollover;
  if (_8 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 107374182]:
  _9 = Gpt_pConfig[0];
  _10 = _9->Gpt_pChannelConfig;
  _11 = *_10[_5].Gpt_eChannelMode;
  if (_11 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 178241143]:
  # DEBUG BEGIN_STMT
  _12 = returnHwChannelInfo.uTargetTime;
  returnValue_23 = _12 - returnValue_22;
  # DEBUG returnValue => returnValue_23
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 214748364]:
<L5>:
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 214748364]:
<L6>:
  # DEBUG BEGIN_STMT
  _13 = returnHwChannelInfo.uTargetTime;
  _14 ={v} Gpt_aStopTime[_3];
  returnValue_24 = _13 - _14;
  # DEBUG returnValue => returnValue_24
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 214748364]:
<L7>:
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 1073741824]:
  # returnValue_15 = PHI <returnValue_23(5), 0(6), returnValue_24(7), 0(8), returnValue_22(2), 0(4)>
<L11>:
  # DEBUG returnValue => returnValue_15
  # DEBUG BEGIN_STMT
  return returnValue_15;

}



;; Function Gpt_StartTimer (Gpt_StartTimer, funcdef_no=6, decl_uid=6099, cgraph_uid=7, symbol_order=10)

Modification phase of node Gpt_StartTimer/10
Gpt_StartTimer (Gpt_ChannelType channel, Gpt_ValueType value)
{
  Std_ReturnType returnValue;
  uint8 ChannelIndex;
  unsigned char _1;
  const struct Gpt_ConfigType * _2;
  const uint8[<unknown>] * _3;
  int _4;
  const struct Gpt_ChannelConfigType[<unknown>] * _5;
  int _6;
  <unnamed type> _7;
  struct Gpt_Ipw_HwChannelConfigType * _8;
  const struct Gpt_ConfigType * _9;
  const struct Gpt_ChannelConfigType[<unknown>] * _10;
  struct Gpt_Ipw_HwChannelConfigType * _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG coreID => 0
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 0
  _1 = Gpt_ValidateChannelStatus.isra.0 (5, channel_15(D));
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = Gpt_pConfig[0];
  _3 = _2->u8GptChannelIdToIndexMap;
  _4 = (int) channel_15(D);
  ChannelIndex_17 = *_3[_4];
  # DEBUG ChannelIndex => ChannelIndex_17
  # DEBUG BEGIN_STMT
  _5 = _2->Gpt_pChannelConfig;
  _6 = (int) ChannelIndex_17;
  _7 = *_5[_6].Gpt_eChannelMode;
  if (_7 == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 108662673]:
  # DEBUG BEGIN_STMT
  _8 = *_5[_6].Gpt_Ipw_HwChannelConfig;
  Gpt_Ipw_EnableInterrupt (_8);

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Gpt_aChannelInfo[_4].eChannelStatus = 4;
  # DEBUG BEGIN_STMT
  _9 = Gpt_pConfig[0];
  _10 = _9->Gpt_pChannelConfig;
  _11 = *_10[_6].Gpt_Ipw_HwChannelConfig;
  returnValue_22 = Gpt_Ipw_StartTimer (_11, value_20(D));
  # DEBUG returnValue => returnValue_22
  # DEBUG BEGIN_STMT
  if (returnValue_22 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  Det_ReportRuntimeError (100, 0, 5, 43);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Gpt_StopTimer (Gpt_StopTimer, funcdef_no=7, decl_uid=6101, cgraph_uid=8, symbol_order=11)

Modification phase of node Gpt_StopTimer/11
Gpt_StopTimer (Gpt_ChannelType channel)
{
  Gpt_ValueType uElapsedTime;
  static struct Gpt_HwChannelInfoType returnHwChannelInfo;
  uint8 ChannelIndex;
  const struct Gpt_ConfigType * _1;
  const uint8[<unknown>] * _2;
  int _3;
  const struct Gpt_ChannelConfigType[<unknown>] * _4;
  int _5;
  struct Gpt_Ipw_HwChannelConfigType * _6;
  <unnamed type> _7;
  const struct Gpt_ConfigType * _8;
  const struct Gpt_ChannelConfigType[<unknown>] * _9;
  struct Gpt_Ipw_HwChannelConfigType * _10;
  _Bool _11;
  const struct Gpt_ConfigType * _12;
  const struct Gpt_ChannelConfigType[<unknown>] * _13;
  <unnamed type> _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  returnHwChannelInfo.bChannelRollover = 0;
  # DEBUG BEGIN_STMT
  returnHwChannelInfo.uTargetTime = 0;
  # DEBUG BEGIN_STMT
  # DEBUG coreID => 0
  # DEBUG BEGIN_STMT
  _1 = Gpt_pConfig[0];
  _2 = _1->u8GptChannelIdToIndexMap;
  _3 = (int) channel_19(D);
  ChannelIndex_20 = *_2[_3];
  # DEBUG ChannelIndex => ChannelIndex_20
  # DEBUG BEGIN_STMT
  _4 = _1->Gpt_pChannelConfig;
  _5 = (int) ChannelIndex_20;
  _6 = *_4[_5].Gpt_Ipw_HwChannelConfig;
  uElapsedTime_22 = Gpt_Ipw_GetTimeElapsed (_6, &returnHwChannelInfo);
  # DEBUG uElapsedTime => uElapsedTime_22
  # DEBUG BEGIN_STMT
  _7 = Gpt_aChannelInfo[_3].eChannelStatus;
  if (_7 == 4)
    goto <bb 3>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _8 = Gpt_pConfig[0];
  _9 = _8->Gpt_pChannelConfig;
  _10 = *_9[_5].Gpt_Ipw_HwChannelConfig;
  Gpt_Ipw_StopTimer (_10);
  # DEBUG BEGIN_STMT
  _11 = returnHwChannelInfo.bChannelRollover;
  if (_11 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 108662673]:
  _12 = Gpt_pConfig[0];
  _13 = _12->Gpt_pChannelConfig;
  _14 = *_13[_5].Gpt_eChannelMode;
  if (_14 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 36945309]:
  # DEBUG BEGIN_STMT
  Gpt_aChannelInfo[_3].eChannelStatus = 3;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 180380036]:
  # DEBUG BEGIN_STMT
  Gpt_aStopTime[_3] ={v} uElapsedTime_22;
  # DEBUG BEGIN_STMT
  Gpt_aChannelInfo[_3].eChannelStatus = 2;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Gpt_EnableNotification (Gpt_EnableNotification, funcdef_no=8, decl_uid=6103, cgraph_uid=9, symbol_order=12)

Modification phase of node Gpt_EnableNotification/12
Gpt_EnableNotification (Gpt_ChannelType channel)
{
  uint8 ChannelIndex;
  const struct Gpt_ConfigType * _1;
  const uint8[<unknown>] * _2;
  int _3;
  <unnamed type> Gpt_eMode.4_4;
  const struct Gpt_ChannelConfigType[<unknown>] * _5;
  int _6;
  struct Gpt_Ipw_HwChannelConfigType * _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG coreID => 0
  # DEBUG BEGIN_STMT
  _1 = Gpt_pConfig[0];
  _2 = _1->u8GptChannelIdToIndexMap;
  _3 = (int) channel_10(D);
  ChannelIndex_11 = *_2[_3];
  # DEBUG ChannelIndex => ChannelIndex_11
  # DEBUG BEGIN_STMT
  Gpt_aChannelInfo[_3].bNotificationEnabled = 1;
  # DEBUG BEGIN_STMT
  Gpt_eMode.4_4 ={v} Gpt_eMode;
  if (Gpt_eMode.4_4 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _5 = _1->Gpt_pChannelConfig;
  _6 = (int) ChannelIndex_11;
  _7 = *_5[_6].Gpt_Ipw_HwChannelConfig;
  Gpt_Ipw_EnableInterrupt (_7);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Gpt_DisableNotification (Gpt_DisableNotification, funcdef_no=9, decl_uid=6105, cgraph_uid=10, symbol_order=13)

Modification phase of node Gpt_DisableNotification/13
Gpt_DisableNotification (Gpt_ChannelType channel)
{
  uint8 ChannelIndex;
  const struct Gpt_ConfigType * _1;
  const uint8[<unknown>] * _2;
  int _3;
  <unnamed type> Gpt_eMode.5_4;
  const struct Gpt_ChannelConfigType[<unknown>] * _5;
  int _6;
  <unnamed type> _7;
  <unnamed type> _8;
  struct Gpt_Ipw_HwChannelConfigType * _9;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG coreID => 0
  # DEBUG BEGIN_STMT
  _1 = Gpt_pConfig[0];
  _2 = _1->u8GptChannelIdToIndexMap;
  _3 = (int) channel_12(D);
  ChannelIndex_13 = *_2[_3];
  # DEBUG ChannelIndex => ChannelIndex_13
  # DEBUG BEGIN_STMT
  Gpt_aChannelInfo[_3].bNotificationEnabled = 0;
  # DEBUG BEGIN_STMT
  Gpt_eMode.5_4 ={v} Gpt_eMode;
  if (Gpt_eMode.5_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870911]:
  _5 = _1->Gpt_pChannelConfig;
  _6 = (int) ChannelIndex_13;
  _7 = *_5[_6].Gpt_eChannelMode;
  if (_7 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 4> [local count: 359703511]:
  _8 = Gpt_aChannelInfo[_3].eChannelStatus;
  if (_8 != 4)
    goto <bb 5>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 5> [local count: 414571718]:
  # DEBUG BEGIN_STMT
  _9 = *_5[_6].Gpt_Ipw_HwChannelConfig;
  Gpt_Ipw_DisableInterrupt (_9);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Gpt_ProcessCommonInterrupt (Gpt_ProcessCommonInterrupt, funcdef_no=10, decl_uid=6107, cgraph_uid=11, symbol_order=14)

Modification phase of node Gpt_ProcessCommonInterrupt/14
Gpt_ProcessCommonInterrupt (uint8 channel)
{
  uint8 ChannelIndex;
  const struct Gpt_ConfigType * _1;
  const uint8[<unknown>] * _2;
  int _3;
  const struct Gpt_ChannelConfigType[<unknown>] * _4;
  int _5;
  <unnamed type> _6;
  struct Gpt_Ipw_HwChannelConfigType * _7;
  <unnamed type> Gpt_eMode.6_8;
  _Bool _9;
  const struct Gpt_ConfigType * _10;
  const struct Gpt_ChannelConfigType[<unknown>] * _11;
  void (*<T54d>) (void) _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG coreID => 0
  # DEBUG BEGIN_STMT
  _1 = Gpt_pConfig[0];
  if (_1 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _2 = _1->u8GptChannelIdToIndexMap;
  _3 = (int) channel_16(D);
  ChannelIndex_17 = *_2[_3];
  # DEBUG ChannelIndex => ChannelIndex_17
  # DEBUG BEGIN_STMT
  _4 = _1->Gpt_pChannelConfig;
  _5 = (int) ChannelIndex_17;
  _6 = *_4[_5].Gpt_eChannelMode;
  if (_6 == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 152127742]:
  # DEBUG BEGIN_STMT
  _7 = *_4[_5].Gpt_Ipw_HwChannelConfig;
  Gpt_Ipw_StopTimer (_7);
  # DEBUG BEGIN_STMT
  Gpt_aChannelInfo[_3].eChannelStatus = 3;

  <bb 5> [local count: 751619279]:
  # DEBUG BEGIN_STMT
  Gpt_eMode.6_8 ={v} Gpt_eMode;
  if (Gpt_eMode.6_8 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 6> [local count: 375809639]:
  _9 = Gpt_aChannelInfo[_3].bNotificationEnabled;
  if (_9 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  _10 = Gpt_pConfig[0];
  _11 = _10->Gpt_pChannelConfig;
  _12 = *_11[_5].Gpt_pfNotification;
  _12 ();

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


