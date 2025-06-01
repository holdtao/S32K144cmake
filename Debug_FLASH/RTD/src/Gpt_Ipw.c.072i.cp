
IPA constant propagation start:
Determining dynamic type for call: returnValue_8 = Gpt_Ipw_LpitGetTimeElapsed (pHwChannelConfig_5(D), pReturnHwChannelInfo_6(D));
  Starting walk at: returnValue_8 = Gpt_Ipw_LpitGetTimeElapsed (pHwChannelConfig_5(D), pReturnHwChannelInfo_6(D));
  instance pointer: pHwChannelConfig_5(D)  Outer instance pointer: pHwChannelConfig_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: returnValue_8 = Gpt_Ipw_LpitGetTimeElapsed (pHwChannelConfig_5(D), pReturnHwChannelInfo_6(D));
  Starting walk at: returnValue_8 = Gpt_Ipw_LpitGetTimeElapsed (pHwChannelConfig_5(D), pReturnHwChannelInfo_6(D));
  instance pointer: pReturnHwChannelInfo_6(D)  Outer instance pointer: pReturnHwChannelInfo_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: returnValue_10 = Gpt_Ipw_FtmGetTimeElapsed (pHwChannelConfig_5(D), pReturnHwChannelInfo_6(D));
  Starting walk at: returnValue_10 = Gpt_Ipw_FtmGetTimeElapsed (pHwChannelConfig_5(D), pReturnHwChannelInfo_6(D));
  instance pointer: pHwChannelConfig_5(D)  Outer instance pointer: pHwChannelConfig_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: returnValue_10 = Gpt_Ipw_FtmGetTimeElapsed (pHwChannelConfig_5(D), pReturnHwChannelInfo_6(D));
  Starting walk at: returnValue_10 = Gpt_Ipw_FtmGetTimeElapsed (pHwChannelConfig_5(D), pReturnHwChannelInfo_6(D));
  instance pointer: pReturnHwChannelInfo_6(D)  Outer instance pointer: pReturnHwChannelInfo_6(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Lpit_Gpt_Ip_DisableChInterrupt/28:
  Jump functions of caller  Lpit_Gpt_Ip_Deinit/27:
  Jump functions of caller  Ftm_Gpt_Ip_Deinit/26:
  Jump functions of caller  Lpit_Gpt_Ip_EnableChInterrupt/25:
  Jump functions of caller  Lpit_Gpt_Ip_StopTimer/24:
  Jump functions of caller  Ftm_Gpt_Ip_DisableChannelInterrupt/23:
  Jump functions of caller  Lpit_Gpt_Ip_GetInterruptFlagTimerChannels/22:
  Jump functions of caller  Lpit_Gpt_Ip_GetCurrentTimervalue/21:
  Jump functions of caller  Lpit_Gpt_Ip_GetTimerValue/20:
  Jump functions of caller  Ftm_Gpt_Ip_GetInterruptFlag/19:
  Jump functions of caller  Ftm_Gpt_Ip_GetCompareValue/18:
  Jump functions of caller  Ftm_Gpt_Ip_GetCounter/17:
  Jump functions of caller  Lpit_Gpt_Ip_StartTimer/15:
  Jump functions of caller  Ftm_Gpt_Ip_StartCounting/14:
  Jump functions of caller  Lpit_Gpt_Ip_InitChannel/13:
  Jump functions of caller  Ftm_Gpt_Ip_InitChannel/12:
  Jump functions of caller  Lpit_Gpt_Ip_Init/11:
  Jump functions of caller  Ftm_Gpt_Ip_Init/10:
  Jump functions of caller  Gpt_Ipw_DisableInterrupt/9:
  Jump functions of caller  Gpt_Ipw_DeInit/8:
  Jump functions of caller  Gpt_Ipw_EnableInterrupt/7:
  Jump functions of caller  Gpt_Ipw_StopTimer/6:
  Jump functions of caller  Gpt_Ipw_GetTimeElapsed/5:
    callsite  Gpt_Ipw_GetTimeElapsed/5 -> Gpt_Ipw_LpitGetTimeElapsed/1 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Gpt_Ipw_GetTimeElapsed/5 -> Gpt_Ipw_FtmGetTimeElapsed/0 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Gpt_Ipw_StartTimer/4:
  Jump functions of caller  Gpt_Ipw_Init/3:
  Jump functions of caller  Gpt_Ipw_InitInstances/2:
  Jump functions of caller  Gpt_Ipw_LpitGetTimeElapsed/1:
  Jump functions of caller  Gpt_Ipw_FtmGetTimeElapsed/0:

 Propagating constants:

Not considering Gpt_Ipw_DisableInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Gpt_Ipw_DeInit for cloning; -fipa-cp-clone disabled.
Not considering Gpt_Ipw_EnableInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Gpt_Ipw_StopTimer for cloning; -fipa-cp-clone disabled.
Not considering Gpt_Ipw_GetTimeElapsed for cloning; -fipa-cp-clone disabled.
Not considering Gpt_Ipw_StartTimer for cloning; -fipa-cp-clone disabled.
Not considering Gpt_Ipw_Init for cloning; -fipa-cp-clone disabled.
Not considering Gpt_Ipw_InitInstances for cloning; -fipa-cp-clone disabled.

overall_size: 212, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Gpt_Ipw_DisableInterrupt/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_Ipw_DeInit/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_Ipw_EnableInterrupt/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_Ipw_StopTimer/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_Ipw_GetTimeElapsed/5:
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
  Node: Gpt_Ipw_StartTimer/4:
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
  Node: Gpt_Ipw_Init/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_Ipw_InitInstances/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Gpt_Ipw_LpitGetTimeElapsed/1:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Gpt_Ipw_FtmGetTimeElapsed/0:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
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

Lpit_Gpt_Ip_DisableChInterrupt/28 (Lpit_Gpt_Ip_DisableChInterrupt) @06131380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_DisableInterrupt/9 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Lpit_Gpt_Ip_Deinit/27 (Lpit_Gpt_Ip_Deinit) @061311c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_DeInit/8 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Ftm_Gpt_Ip_Deinit/26 (Ftm_Gpt_Ip_Deinit) @061310e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_DeInit/8 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Lpit_Gpt_Ip_EnableChInterrupt/25 (Lpit_Gpt_Ip_EnableChInterrupt) @0612aee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_EnableInterrupt/7 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Lpit_Gpt_Ip_StopTimer/24 (Lpit_Gpt_Ip_StopTimer) @0612ad20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_StopTimer/6 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Ftm_Gpt_Ip_DisableChannelInterrupt/23 (Ftm_Gpt_Ip_DisableChannelInterrupt) @0612ac40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_StopTimer/6 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Lpit_Gpt_Ip_GetInterruptFlagTimerChannels/22 (Lpit_Gpt_Ip_GetInterruptFlagTimerChannels) @0612aa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_LpitGetTimeElapsed/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Lpit_Gpt_Ip_GetCurrentTimervalue/21 (Lpit_Gpt_Ip_GetCurrentTimervalue) @0612a9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_LpitGetTimeElapsed/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Lpit_Gpt_Ip_GetTimerValue/20 (Lpit_Gpt_Ip_GetTimerValue) @0612a8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_LpitGetTimeElapsed/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Ftm_Gpt_Ip_GetInterruptFlag/19 (Ftm_Gpt_Ip_GetInterruptFlag) @0612a700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_FtmGetTimeElapsed/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Ftm_Gpt_Ip_GetCompareValue/18 (Ftm_Gpt_Ip_GetCompareValue) @0612a620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_FtmGetTimeElapsed/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Ftm_Gpt_Ip_GetCounter/17 (Ftm_Gpt_Ip_GetCounter) @0612a540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_FtmGetTimeElapsed/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Ftm_Gpt_Ip_u32TargetValue/16 (Ftm_Gpt_Ip_u32TargetValue) @0612f288
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Gpt_Ipw_FtmGetTimeElapsed/0 (read)
  Availability: not_available
  Varpool flags:
Lpit_Gpt_Ip_StartTimer/15 (Lpit_Gpt_Ip_StartTimer) @0612a2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_StartTimer/4 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Ftm_Gpt_Ip_StartCounting/14 (Ftm_Gpt_Ip_StartCounting) @0612a1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_StartTimer/4 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Lpit_Gpt_Ip_InitChannel/13 (Lpit_Gpt_Ip_InitChannel) @0612a000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_Init/3 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Ftm_Gpt_Ip_InitChannel/12 (Ftm_Gpt_Ip_InitChannel) @060ffa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_Init/3 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Lpit_Gpt_Ip_Init/11 (Lpit_Gpt_Ip_Init) @060ff540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_InitInstances/2 (318511554 (estimated locally),2.69 per call) 
  Calls: 
Ftm_Gpt_Ip_Init/10 (Ftm_Gpt_Ip_Init) @060ff2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Gpt_Ipw_InitInstances/2 (318511554 (estimated locally),2.69 per call) 
  Calls: 
Gpt_Ipw_DisableInterrupt/9 (Gpt_Ipw_DisableInterrupt) @060ffc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_DisableChInterrupt/28 (217325345 (estimated locally),0.20 per call) 
Gpt_Ipw_DeInit/8 (Gpt_Ipw_DeInit) @060ff9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_Deinit/27 (357878150 (estimated locally),0.33 per call) Ftm_Gpt_Ip_Deinit/26 (357878150 (estimated locally),0.33 per call) 
Gpt_Ipw_EnableInterrupt/7 (Gpt_Ipw_EnableInterrupt) @060ff700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_EnableChInterrupt/25 (217325345 (estimated locally),0.20 per call) 
Gpt_Ipw_StopTimer/6 (Gpt_Ipw_StopTimer) @060ff460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_StopTimer/24 (357878150 (estimated locally),0.33 per call) Ftm_Gpt_Ip_DisableChannelInterrupt/23 (357878150 (estimated locally),0.33 per call) 
Gpt_Ipw_GetTimeElapsed/5 (Gpt_Ipw_GetTimeElapsed) @060ff1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Gpt_Ipw_LpitGetTimeElapsed/1 (357878150 (estimated locally),0.33 per call) Gpt_Ipw_FtmGetTimeElapsed/0 (357878150 (estimated locally),0.33 per call) 
Gpt_Ipw_StartTimer/4 (Gpt_Ipw_StartTimer) @060f8ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_StartTimer/15 (357878150 (estimated locally),0.33 per call) Ftm_Gpt_Ip_StartCounting/14 (357878150 (estimated locally),0.33 per call) 
Gpt_Ipw_Init/3 (Gpt_Ipw_Init) @060f89a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_InitChannel/13 (357878150 (estimated locally),0.33 per call) Ftm_Gpt_Ip_InitChannel/12 (357878150 (estimated locally),0.33 per call) 
Gpt_Ipw_InitInstances/2 (Gpt_Ipw_InitInstances) @060f8e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118207164 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_Init/11 (318511554 (estimated locally),2.69 per call) Ftm_Gpt_Ip_Init/10 (318511554 (estimated locally),2.69 per call) 
Gpt_Ipw_LpitGetTimeElapsed/1 (Gpt_Ipw_LpitGetTimeElapsed) @060f8b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Gpt_Ipw_GetTimeElapsed/5 (357878150 (estimated locally),0.33 per call) 
  Calls: Lpit_Gpt_Ip_GetInterruptFlagTimerChannels/22 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_GetCurrentTimervalue/21 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_GetTimerValue/20 (1073741824 (estimated locally),1.00 per call) 
Gpt_Ipw_FtmGetTimeElapsed/0 (Gpt_Ipw_FtmGetTimeElapsed) @060f88c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Ftm_Gpt_Ip_u32TargetValue/16 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Gpt_Ipw_GetTimeElapsed/5 (357878150 (estimated locally),0.33 per call) 
  Calls: Ftm_Gpt_Ip_GetInterruptFlag/19 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_GetCompareValue/18 (1073741824 (estimated locally),1.00 per call) Ftm_Gpt_Ip_GetCounter/17 (1073741824 (estimated locally),1.00 per call) 

;; Function Gpt_Ipw_InitInstances (Gpt_Ipw_InitInstances, funcdef_no=2, decl_uid=6113, cgraph_uid=3, symbol_order=2)

Modification phase of node Gpt_Ipw_InitInstances/2
Gpt_Ipw_InitInstances (const struct Gpt_ConfigType * configPtr)
{
  uint8 index;
  struct Gpt_Ipw_HwInstanceConfigType[<unknown>] * _1;
  int _2;
  <unnamed type> _3;
  unsigned char _4;
  const struct Ftm_Gpt_Ip_InstanceConfigType * _5;
  unsigned char _6;
  const struct Lpit_Gpt_Ip_InstanceConfigType * _7;
  unsigned char _8;

  <bb 2> [local count: 118207164]:
  # DEBUG BEGIN_STMT
  # DEBUG index => 0
  # DEBUG BEGIN_STMT
  # DEBUG index => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _1 = configPtr_13(D)->Gpt_Ipw_HwInstanceConfig;
  _2 = (int) index_9;
  _3 = *_1[_2].instanceType;
  switch (_3) <default: <L8> [33.33%], case 0: <L1> [33.33%], case 3: <L2> [33.33%]>

  <bb 4> [local count: 318511554]:
<L1>:
  # DEBUG BEGIN_STMT
  _4 = *_1[_2].instance;
  _5 = *_1[_2].Gpt_Ipw_InstanceConfig.Ftm_Gpt_Ip_InstanceConfig;
  Ftm_Gpt_Ip_Init (_4, _5);
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 318511554]:
<L2>:
  # DEBUG BEGIN_STMT
  _6 = *_1[_2].instance;
  _7 = *_1[_2].Gpt_Ipw_InstanceConfig.Lpit_Gpt_Ip_InstanceConfig;
  Lpit_Gpt_Ip_Init (_6, _7);
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 955534663]:
<L8>:
  # DEBUG BEGIN_STMT
  index_16 = index_9 + 1;
  # DEBUG index => index_16

  <bb 7> [local count: 1073741824]:
  # index_9 = PHI <0(2), index_16(6)>
  # DEBUG index => index_9
  # DEBUG BEGIN_STMT
  _8 = configPtr_13(D)->instanceCount;
  if (_8 > index_9)
    goto <bb 3>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Gpt_Ipw_Init (Gpt_Ipw_Init, funcdef_no=3, decl_uid=6111, cgraph_uid=4, symbol_order=3)

Modification phase of node Gpt_Ipw_Init/3
Gpt_Ipw_Init (const struct Gpt_Ipw_HwChannelConfigType * pHwChannelConfig)
{
  <unnamed type> _1;
  unsigned char _2;
  const struct Ftm_Gpt_Ip_ChannelConfigType * _3;
  unsigned char _4;
  const struct Lpit_Gpt_Ip_ChannelConfigType * _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = pHwChannelConfig_8(D)->instanceType;
  switch (_1) <default: <L6> [33.33%], case 0: <L0> [33.33%], case 3: <L1> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  _2 = pHwChannelConfig_8(D)->instance;
  _3 = pHwChannelConfig_8(D)->Gpt_Ipw_ChannelConfig.Ftm_Gpt_Ip_ChannelConfig;
  Ftm_Gpt_Ip_InitChannel (_2, _3);
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  _4 = pHwChannelConfig_8(D)->instance;
  _5 = pHwChannelConfig_8(D)->Gpt_Ipw_ChannelConfig.Lpit_Gpt_Ip_ChannelConfig;
  Lpit_Gpt_Ip_InitChannel (_4, _5);
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
<L6>:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Gpt_Ipw_StartTimer (Gpt_Ipw_StartTimer, funcdef_no=4, decl_uid=6119, cgraph_uid=5, symbol_order=4)

Modification phase of node Gpt_Ipw_StartTimer/4
Gpt_Ipw_StartTimer (const struct Gpt_Ipw_HwChannelConfigType * pHwChannelConfig, Gpt_ValueType uValue)
{
  Std_ReturnType returnValue;
  <unnamed type> _1;
  unsigned char _2;
  unsigned char _3;
  short unsigned int _4;
  unsigned char _5;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 1
  # DEBUG BEGIN_STMT
  _1 = pHwChannelConfig_10(D)->instanceType;
  switch (_1) <default: <L5> [33.33%], case 0: <L0> [33.33%], case 3: <L1> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  _2 = pHwChannelConfig_10(D)->instance;
  _3 = pHwChannelConfig_10(D)->channel;
  _4 = (short unsigned int) uValue_11(D);
  Ftm_Gpt_Ip_StartCounting (_2, _3, _4);
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  _5 = pHwChannelConfig_10(D)->instance;
  _6 = pHwChannelConfig_10(D)->channel;
  Lpit_Gpt_Ip_StartTimer (_5, _6, uValue_11(D));
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
  # returnValue_7 = PHI <0(3), 0(4), 1(2)>
<L5>:
  # DEBUG returnValue => returnValue_7
  # DEBUG BEGIN_STMT
  return returnValue_7;

}



;; Function Gpt_Ipw_GetTimeElapsed (Gpt_Ipw_GetTimeElapsed, funcdef_no=5, decl_uid=6116, cgraph_uid=6, symbol_order=5)

Modification phase of node Gpt_Ipw_GetTimeElapsed/5
Gpt_Ipw_GetTimeElapsed (const struct Gpt_Ipw_HwChannelConfigType * pHwChannelConfig, struct Gpt_HwChannelInfoType * pReturnHwChannelInfo)
{
  uint32 returnValue;
  <unnamed type> _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  _1 = pHwChannelConfig_5(D)->instanceType;
  switch (_1) <default: <L5> [33.33%], case 0: <L0> [33.33%], case 3: <L1> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  returnValue_10 = Gpt_Ipw_FtmGetTimeElapsed (pHwChannelConfig_5(D), pReturnHwChannelInfo_6(D));
  # DEBUG returnValue => returnValue_10
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  returnValue_8 = Gpt_Ipw_LpitGetTimeElapsed (pHwChannelConfig_5(D), pReturnHwChannelInfo_6(D));
  # DEBUG returnValue => returnValue_8
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
  # returnValue_2 = PHI <returnValue_10(3), returnValue_8(4), 0(2)>
<L5>:
  # DEBUG returnValue => returnValue_2
  # DEBUG BEGIN_STMT
  return returnValue_2;

}



;; Function Gpt_Ipw_StopTimer (Gpt_Ipw_StopTimer, funcdef_no=6, decl_uid=6121, cgraph_uid=7, symbol_order=6)

Modification phase of node Gpt_Ipw_StopTimer/6
Gpt_Ipw_StopTimer (const struct Gpt_Ipw_HwChannelConfigType * pHwChannelConfig)
{
  <unnamed type> _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = pHwChannelConfig_8(D)->instanceType;
  switch (_1) <default: <L6> [33.33%], case 0: <L0> [33.33%], case 3: <L1> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  _2 = pHwChannelConfig_8(D)->instance;
  _3 = pHwChannelConfig_8(D)->channel;
  Ftm_Gpt_Ip_DisableChannelInterrupt (_2, _3);
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  _4 = pHwChannelConfig_8(D)->instance;
  _5 = pHwChannelConfig_8(D)->channel;
  Lpit_Gpt_Ip_StopTimer (_4, _5);
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
<L6>:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Gpt_Ipw_EnableInterrupt (Gpt_Ipw_EnableInterrupt, funcdef_no=7, decl_uid=6123, cgraph_uid=8, symbol_order=7)

Modification phase of node Gpt_Ipw_EnableInterrupt/7
Gpt_Ipw_EnableInterrupt (const struct Gpt_Ipw_HwChannelConfigType * pHwChannelConfig)
{
  <unnamed type> _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = pHwChannelConfig_6(D)->instanceType;
  if (_1 == 3)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
<L1>:
  # DEBUG BEGIN_STMT
  _2 = pHwChannelConfig_6(D)->instance;
  _3 = pHwChannelConfig_6(D)->channel;
  Lpit_Gpt_Ip_EnableChInterrupt (_2, _3);
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
<L6>:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Gpt_Ipw_DeInit (Gpt_Ipw_DeInit, funcdef_no=8, decl_uid=6125, cgraph_uid=9, symbol_order=8)

Modification phase of node Gpt_Ipw_DeInit/8
Gpt_Ipw_DeInit (const struct Gpt_Ipw_HwChannelConfigType * pHwChannelConfig)
{
  <unnamed type> _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = pHwChannelConfig_6(D)->instanceType;
  switch (_1) <default: <L6> [33.33%], case 0: <L0> [33.33%], case 3: <L1> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  _2 = pHwChannelConfig_6(D)->instance;
  Ftm_Gpt_Ip_Deinit (_2);
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  _3 = pHwChannelConfig_6(D)->instance;
  Lpit_Gpt_Ip_Deinit (_3);
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
<L6>:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Gpt_Ipw_DisableInterrupt (Gpt_Ipw_DisableInterrupt, funcdef_no=9, decl_uid=6127, cgraph_uid=10, symbol_order=9)

Modification phase of node Gpt_Ipw_DisableInterrupt/9
Gpt_Ipw_DisableInterrupt (const struct Gpt_Ipw_HwChannelConfigType * pHwChannelConfig)
{
  <unnamed type> _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = pHwChannelConfig_6(D)->instanceType;
  if (_1 == 3)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
<L1>:
  # DEBUG BEGIN_STMT
  _2 = pHwChannelConfig_6(D)->instance;
  _3 = pHwChannelConfig_6(D)->channel;
  Lpit_Gpt_Ip_DisableChInterrupt (_2, _3);
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
<L6>:
  # DEBUG BEGIN_STMT
  return;

}


