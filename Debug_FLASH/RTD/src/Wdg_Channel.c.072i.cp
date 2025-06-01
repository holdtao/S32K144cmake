
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Wdg_ChannelTrigger.part.0/41:
  Jump functions of caller  Wdg_ChannelValidateMode.isra.0.part.0/40:
  Jump functions of caller  Wdg_ChannelValidateMode.isra.0/39:
    callsite  Wdg_ChannelValidateMode.isra.0/39 -> Wdg_ChannelValidateMode.isra.0.part.0/40 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_05/38:
  Jump functions of caller  SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_05/37:
  Jump functions of caller  SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_04/36:
  Jump functions of caller  SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_04/35:
  Jump functions of caller  SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_03/34:
  Jump functions of caller  SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_03/33:
  Jump functions of caller  Gpt_GetTimeElapsed/32:
  Jump functions of caller  Wdg_Ipw_StartTimer/31:
  Jump functions of caller  Wdg_Ipw_StopTimer/30:
  Jump functions of caller  SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_01/29:
  Jump functions of caller  SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_01/28:
  Jump functions of caller  Gpt_StartTimer/27:
  Jump functions of caller  Gpt_EnableNotification/26:
  Jump functions of caller  Wdg_Ipw_Init/25:
  Jump functions of caller  Wdg_Ipw_SetMode/24:
  Jump functions of caller  SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_02/23:
  Jump functions of caller  SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_02/22:
  Jump functions of caller  Wdg_Ipw_Service/20:
  Jump functions of caller  Gpt_StopTimer/19:
  Jump functions of caller  SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_00/18:
  Jump functions of caller  SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_00/17:
  Jump functions of caller  Wdg_ChannelGetVersionInfo/16:
  Jump functions of caller  Wdg_ChannelSetTriggerCondition/15:
  Jump functions of caller  Wdg_ChannelSetMode/14:
    callsite  Wdg_ChannelSetMode/14 -> Wdg_VadidateDoChannelSetMode/11 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Wdg_ChannelSetMode/14 -> Wdg_DoChannelSetMode/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Wdg_ChannelSetMode/14 -> Wdg_ChannelValidateMode.isra.0/39 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Wdg_ChannelInit/13:
    callsite  Wdg_ChannelInit/13 -> Wdg_ChannelStartGpt/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Wdg_ChannelInit/13 -> Wdg_InitialHardware/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Wdg_ChannelInit/13 -> Wdg_ChannelValidateMode.isra.0/39 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Wdg_ChannelStartGpt/12:
  Jump functions of caller  Wdg_VadidateDoChannelSetMode/11:
  Jump functions of caller  Wdg_DoChannelSetMode/10:
  Jump functions of caller  Wdg_InitialHardware/8:
  Jump functions of caller  Wdg_Cbk_GptNotification1/6:
    callsite  Wdg_Cbk_GptNotification1/6 -> Wdg_ChannelTrigger/4 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Wdg_Cbk_GptNotification0/5:
    callsite  Wdg_Cbk_GptNotification0/5 -> Wdg_ChannelTrigger/4 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Wdg_ChannelTrigger/4:
    callsite  Wdg_ChannelTrigger/4 -> Wdg_ChannelTrigger.part.0/41 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering Wdg_ChannelGetVersionInfo for cloning; -fipa-cp-clone disabled.
Not considering Wdg_ChannelSetTriggerCondition for cloning; -fipa-cp-clone disabled.
Not considering Wdg_ChannelSetMode for cloning; -fipa-cp-clone disabled.
Not considering Wdg_ChannelInit for cloning; -fipa-cp-clone disabled.
Not considering Wdg_Cbk_GptNotification1 for cloning; -fipa-cp-clone disabled.
Not considering Wdg_Cbk_GptNotification0 for cloning; -fipa-cp-clone disabled.

overall_size: 254, max_new_size: 11001
 - context independent values, size: 8, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Wdg_ChannelTrigger.part.0/41:
    param [0]: 1 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
               0 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x1
         const Wdg_Ipw_InstanceType [0, 1]
        AGGS VARIABLE
  Node: Wdg_ChannelValidateMode.isra.0.part.0/40:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Wdg_ChannelValidateMode.isra.0/39:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Wdg_ChannelGetVersionInfo/16:
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
  Node: Wdg_ChannelSetTriggerCondition/15:
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
  Node: Wdg_ChannelSetMode/14:
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
  Node: Wdg_ChannelInit/13:
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
  Node: Wdg_ChannelStartGpt/12:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Wdg_VadidateDoChannelSetMode/11:
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
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Wdg_DoChannelSetMode/10:
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
  Node: Wdg_InitialHardware/8:
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
  Node: Wdg_Cbk_GptNotification1/6:
  Node: Wdg_Cbk_GptNotification0/5:
  Node: Wdg_ChannelTrigger/4:
    param [0]: 0 [loc_time: 1, loc_size: 15, prop_time: 0, prop_size: 0]
               1 [loc_time: 1, loc_size: 15, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x1
         const Wdg_Ipw_InstanceType [0, 1]
        AGGS VARIABLE

IPA decision stage:

Propagated bits info for function Wdg_ChannelTrigger.part.0/41:
 param 0: value = 0x1, mask = 0x1
Propagated bits info for function Wdg_ChannelTrigger/4:
 param 0: value = 0x1, mask = 0x1

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Wdg_ChannelTrigger.part.0/41 (Wdg_ChannelTrigger.part.0) @067e7620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Wdg_apConfigPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Wdg_ChannelTrigger/4 (536870912 (estimated locally),0.50 per call) 
  Calls: SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_00/18 (1073741824 (estimated locally),1.00 per call) Gpt_StopTimer/19 (1073741824 (estimated locally),1.00 per call) 
Wdg_ChannelValidateMode.isra.0.part.0/40 (Wdg_ChannelValidateMode.isra.0.part.0) @067e7000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Wdg_ChannelValidateMode.isra.0/39 (536870912 (estimated locally),0.50 per call) 
  Calls: 
Wdg_ChannelValidateMode.isra.0/39 (Wdg_ChannelValidateMode.isra.0) @067bac40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Wdg_ChannelSetMode/14 (1073741824 (estimated locally),1.00 per call) Wdg_ChannelInit/13 (268435456 (estimated locally),0.25 per call) 
  Calls: Wdg_ChannelValidateMode.isra.0.part.0/40 (536870912 (estimated locally),0.50 per call) 
SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_05/38 (SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_05) @066fcd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_ChannelSetTriggerCondition/15 (237404317 (estimated locally),0.22 per call) Wdg_ChannelSetTriggerCondition/15 (836337508 (estimated locally),0.78 per call) 
  Calls: 
SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_05/37 (SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_05) @066fcc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_ChannelSetTriggerCondition/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_04/36 (SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_04) @066fca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_VadidateDoChannelSetMode/11 (524845003 (estimated locally),0.49 per call) 
  Calls: 
SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_04/35 (SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_04) @066fc9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_VadidateDoChannelSetMode/11 (524845003 (estimated locally),0.49 per call) 
  Calls: 
SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_03/34 (SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_03) @066fc7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_VadidateDoChannelSetMode/11 (524845004 (estimated locally),0.49 per call) 
  Calls: 
SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_03/33 (SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_03) @066fc700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_VadidateDoChannelSetMode/11 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Gpt_GetTimeElapsed/32 (Gpt_GetTimeElapsed) @066fc620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_ChannelSetTriggerCondition/15 (1073741824 (estimated locally),1.00 per call) Wdg_VadidateDoChannelSetMode/11 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Wdg_Ipw_StartTimer/31 (Wdg_Ipw_StartTimer) @066fc460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_DoChannelSetMode/10 (118702158 (estimated locally),0.11 per call) 
  Calls: 
Wdg_Ipw_StopTimer/30 (Wdg_Ipw_StopTimer) @066fc380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_DoChannelSetMode/10 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_01/29 (SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_01) @066fc0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_ChannelStartGpt/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_01/28 (SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_01) @066fc000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_ChannelStartGpt/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Gpt_StartTimer/27 (Gpt_StartTimer) @066f5ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_VadidateDoChannelSetMode/11 (173198851 (estimated locally),0.16 per call) Wdg_ChannelStartGpt/12 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Gpt_EnableNotification/26 (Gpt_EnableNotification) @066f5d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_ChannelStartGpt/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Wdg_Ipw_Init/25 (Wdg_Ipw_Init) @066f5a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_InitialHardware/8 (268435456 (estimated locally),0.25 per call) 
  Calls: 
Wdg_Ipw_SetMode/24 (Wdg_Ipw_SetMode) @066f59a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_DoChannelSetMode/10 (359703511 (estimated locally),0.34 per call) Wdg_DoChannelSetMode/10 (359703511 (estimated locally),0.34 per call) Wdg_DoChannelSetMode/10 (116930484 (estimated locally),0.11 per call) Wdg_InitialHardware/8 (268435456 (estimated locally),0.25 per call) 
  Calls: 
SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_02/23 (SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_02) @066f5700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_ChannelInit/13 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_02/22 (SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_02) @066f5540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_ChannelInit/13 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Wdg_au16CfgInitialTimeout/21 (Wdg_au16CfgInitialTimeout) @066f7048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Wdg_ChannelStartGpt/12 (read)Wdg_ChannelInit/13 (read)
  Availability: not_available
  Varpool flags: read-only
Wdg_Ipw_Service/20 (Wdg_Ipw_Service) @066f52a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_ChannelTrigger/4 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Gpt_StopTimer/19 (Gpt_StopTimer) @066f50e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_ChannelSetTriggerCondition/15 (836337508 (estimated locally),0.78 per call) Wdg_VadidateDoChannelSetMode/11 (524845004 (estimated locally),0.49 per call) Wdg_ChannelStartGpt/12 (1073741824 (estimated locally),1.00 per call) Wdg_ChannelTrigger.part.0/41 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_00/18 (SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_00) @066f5000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_ChannelTrigger/4 (536870913 (estimated locally),0.50 per call) Wdg_ChannelTrigger.part.0/41 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_00/17 (SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_00) @066e7b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Wdg_ChannelTrigger/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Wdg_ChannelGetVersionInfo/16 (Wdg_ChannelGetVersionInfo) @066e7d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Wdg_ChannelSetTriggerCondition/15 (Wdg_ChannelSetTriggerCondition) @066e7a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Wdg_apConfigPtr/0 (read)Wdg_au32Timeout/1 (read)Wdg_au32Timeout/1 (write)Wdg_apConfigPtr/0 (read)Wdg_apConfigPtr/0 (read)Wdg_au32Timeout/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_05/38 (237404317 (estimated locally),0.22 per call) Gpt_StopTimer/19 (836337508 (estimated locally),0.78 per call) SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_05/38 (836337508 (estimated locally),0.78 per call) SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_05/37 (1073741824 (estimated locally),1.00 per call) Gpt_GetTimeElapsed/32 (1073741824 (estimated locally),1.00 per call) 
Wdg_ChannelSetMode/14 (Wdg_ChannelSetMode) @066e77e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Wdg_VadidateDoChannelSetMode/11 (354334802 (estimated locally),0.33 per call) Wdg_DoChannelSetMode/10 (354334802 (estimated locally),0.33 per call) Wdg_ChannelValidateMode.isra.0/39 (1073741824 (estimated locally),1.00 per call) 
Wdg_ChannelInit/13 (Wdg_ChannelInit) @066e7540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Wdg_apConfigPtr/0 (write)Wdg_aePreviousMode/3 (read)Wdg_au16CfgInitialTimeout/21 (read)Wdg_apConfigPtr/0 (write)Wdg_apConfigPtr/0 (read)Wdg_aePreviousMode/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_02/23 (354334802 (estimated locally),0.33 per call) SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_02/22 (354334802 (estimated locally),0.33 per call) Wdg_ChannelStartGpt/12 (354334802 (estimated locally),0.33 per call) Wdg_InitialHardware/8 (1073741824 (estimated locally),1.00 per call) Wdg_ChannelValidateMode.isra.0/39 (268435456 (estimated locally),0.25 per call) 
Wdg_ChannelStartGpt/12 (Wdg_ChannelStartGpt) @066e72a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Wdg_apConfigPtr/0 (read)Wdg_apConfigPtr/0 (read)Wdg_au32GptPeriod/2 (write)Wdg_apConfigPtr/0 (read)Wdg_au32GptPeriod/2 (read)Wdg_au16CfgInitialTimeout/21 (read)Wdg_apConfigPtr/0 (read)Wdg_au32Timeout/1 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Wdg_ChannelInit/13 (354334802 (estimated locally),0.33 per call) 
  Calls: SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_01/29 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_01/28 (1073741824 (estimated locally),1.00 per call) Gpt_StartTimer/27 (354334802 (estimated locally),0.33 per call) Gpt_EnableNotification/26 (1073741824 (estimated locally),1.00 per call) Gpt_StopTimer/19 (1073741824 (estimated locally),1.00 per call) 
Wdg_VadidateDoChannelSetMode/11 (Wdg_VadidateDoChannelSetMode) @066e7000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Wdg_apConfigPtr/0 (read)Wdg_apConfigPtr/0 (read)Wdg_au32Timeout/1 (read)Wdg_au32Timeout/1 (write)Wdg_apConfigPtr/0 (read)Wdg_au32GptPeriod/2 (write)Wdg_aePreviousMode/3 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Wdg_ChannelSetMode/14 (354334802 (estimated locally),0.33 per call) 
  Calls: SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_04/36 (524845003 (estimated locally),0.49 per call) SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_04/35 (524845003 (estimated locally),0.49 per call) Gpt_StartTimer/27 (173198851 (estimated locally),0.16 per call) SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_03/34 (524845004 (estimated locally),0.49 per call) SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_03/33 (524845004 (estimated locally),0.49 per call) Gpt_GetTimeElapsed/32 (524845004 (estimated locally),0.49 per call) Gpt_StopTimer/19 (524845004 (estimated locally),0.49 per call) 
Wdg_DoChannelSetMode/10 (Wdg_DoChannelSetMode) @066e00e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Wdg_apConfigPtr/0 (read)Wdg_aePreviousMode/3 (read)Wdg_apConfigPtr/0 (read)Wdg_apConfigPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Wdg_ChannelSetMode/14 (354334802 (estimated locally),0.33 per call) 
  Calls: Wdg_Ipw_SetMode/24 (359703511 (estimated locally),0.34 per call) Wdg_Ipw_StartTimer/31 (118702158 (estimated locally),0.11 per call) Wdg_Ipw_SetMode/24 (359703511 (estimated locally),0.34 per call) Wdg_Ipw_SetMode/24 (116930484 (estimated locally),0.11 per call) Wdg_Ipw_StopTimer/30 (354334802 (estimated locally),0.33 per call) 
Wdg_InitialHardware/8 (Wdg_InitialHardware) @066e0a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Wdg_apConfigPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Wdg_ChannelInit/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: Wdg_Ipw_Init/25 (268435456 (estimated locally),0.25 per call) Wdg_Ipw_SetMode/24 (268435456 (estimated locally),0.25 per call) 
Wdg_Cbk_GptNotification1/6 (Wdg_Cbk_GptNotification1) @066e0540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Wdg_ChannelTrigger/4 (1073741824 (estimated locally),1.00 per call) 
Wdg_Cbk_GptNotification0/5 (Wdg_Cbk_GptNotification0) @066e02a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Wdg_ChannelTrigger/4 (1073741824 (estimated locally),1.00 per call) 
Wdg_ChannelTrigger/4 (Wdg_ChannelTrigger) @066e0000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Wdg_au32Timeout/1 (read)Wdg_au32GptPeriod/2 (read)Wdg_au32Timeout/1 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Wdg_Cbk_GptNotification1/6 (1073741824 (estimated locally),1.00 per call) Wdg_Cbk_GptNotification0/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: Wdg_Ipw_Service/20 (536870913 (estimated locally),0.50 per call) SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_00/18 (536870913 (estimated locally),0.50 per call) Wdg_ChannelTrigger.part.0/41 (536870912 (estimated locally),0.50 per call) SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_00/17 (1073741824 (estimated locally),1.00 per call) 
Wdg_aePreviousMode/3 (Wdg_aePreviousMode) @065f0318
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Wdg_VadidateDoChannelSetMode/11 (write)Wdg_DoChannelSetMode/10 (read)Wdg_ChannelInit/13 (read)Wdg_ChannelInit/13 (write)
  Availability: available
  Varpool flags: initialized
Wdg_au32GptPeriod/2 (Wdg_au32GptPeriod) @065f0288
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Wdg_ChannelStartGpt/12 (read)Wdg_ChannelTrigger/4 (read)Wdg_ChannelStartGpt/12 (write)Wdg_VadidateDoChannelSetMode/11 (write)
  Availability: available
  Varpool flags:
Wdg_au32Timeout/1 (Wdg_au32Timeout) @065f01f8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Wdg_ChannelTrigger/4 (write)Wdg_ChannelTrigger/4 (read)Wdg_ChannelStartGpt/12 (write)Wdg_VadidateDoChannelSetMode/11 (write)Wdg_VadidateDoChannelSetMode/11 (read)Wdg_ChannelSetTriggerCondition/15 (read)Wdg_ChannelSetTriggerCondition/15 (write)Wdg_ChannelSetTriggerCondition/15 (write)
  Availability: available
  Varpool flags:
Wdg_apConfigPtr/0 (Wdg_apConfigPtr) @065f0120
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Wdg_ChannelInit/13 (read)Wdg_DoChannelSetMode/10 (read)Wdg_DoChannelSetMode/10 (read)Wdg_DoChannelSetMode/10 (read)Wdg_ChannelStartGpt/12 (read)Wdg_ChannelStartGpt/12 (read)Wdg_VadidateDoChannelSetMode/11 (read)Wdg_VadidateDoChannelSetMode/11 (read)Wdg_ChannelInit/13 (write)Wdg_VadidateDoChannelSetMode/11 (read)Wdg_InitialHardware/8 (read)Wdg_ChannelStartGpt/12 (read)Wdg_ChannelTrigger.part.0/41 (read)Wdg_ChannelStartGpt/12 (read)Wdg_ChannelInit/13 (write)Wdg_ChannelSetTriggerCondition/15 (read)Wdg_ChannelSetTriggerCondition/15 (read)Wdg_ChannelSetTriggerCondition/15 (read)
  Availability: available
  Varpool flags:

;; Function Wdg_ChannelTrigger (Wdg_ChannelTrigger, funcdef_no=0, decl_uid=6377, cgraph_uid=1, symbol_order=4)

Modification phase of node Wdg_ChannelTrigger/4
Adjusting mask for param 0 to 0x1
Setting value range of param 0 [0, 1]
Wdg_ChannelTrigger (const Wdg_Ipw_InstanceType Wdg_Instance)
{
  uint32 u32TempTimeout;
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  _1 = Wdg_au32Timeout[Wdg_Instance_7(D)];
  _2 = Wdg_au32GptPeriod[Wdg_Instance_7(D)];
  if (_1 < _2)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870912]:
  Wdg_ChannelTrigger.part.0 (Wdg_Instance_7(D));
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  u32TempTimeout_8 = _1 - _2;
  # DEBUG u32TempTimeout => u32TempTimeout_8
  # DEBUG BEGIN_STMT
  Wdg_au32Timeout[Wdg_Instance_7(D)] = u32TempTimeout_8;
  # DEBUG BEGIN_STMT
  SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  Wdg_Ipw_Service (Wdg_Instance_7(D));

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Wdg_Cbk_GptNotification0 (Wdg_Cbk_GptNotification0, funcdef_no=1, decl_uid=6379, cgraph_uid=2, symbol_order=5)

Modification phase of node Wdg_Cbk_GptNotification0/5
Wdg_Cbk_GptNotification0 ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Wdg_ChannelTrigger (0);
  return;

}



;; Function Wdg_Cbk_GptNotification1 (Wdg_Cbk_GptNotification1, funcdef_no=2, decl_uid=6381, cgraph_uid=3, symbol_order=6)

Modification phase of node Wdg_Cbk_GptNotification1/6
Wdg_Cbk_GptNotification1 ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Wdg_ChannelTrigger (1);
  return;

}



;; Function Wdg_ChannelInit (Wdg_ChannelInit, funcdef_no=9, decl_uid=6218, cgraph_uid=10, symbol_order=13)

Modification phase of node Wdg_ChannelInit/13
Wdg_ChannelInit (const Wdg_Ipw_InstanceType Wdg_Instance, const struct Wdg_ConfigType * pConfigPtr)
{
  Std_ReturnType valid;
  <unnamed type> _1;
  short unsigned int _2;
  <unnamed type> _3;
  const struct Wdg_ConfigType * _4;
  <unnamed type> _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG valid => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Wdg_apConfigPtr[Wdg_Instance_9(D)] = pConfigPtr_10(D);
  # DEBUG BEGIN_STMT
  _1 = Wdg_aePreviousMode[Wdg_Instance_9(D)];
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _2 = Wdg_au16CfgInitialTimeout[Wdg_Instance_9(D)];
  if (_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _3 = pConfigPtr_10(D)->Wdg_DefaultMode;
  # DEBUG D#1 => 0
  # DEBUG D#2 => 18
  # DEBUG D#3 => Wdg_Instance_9(D)
  valid_13 = Wdg_ChannelValidateMode.isra.0 (_3);
  # DEBUG valid => valid_13

  <bb 5> [local count: 1073741824]:
  # valid_6 = PHI <valid_13(4), 1(3), 1(2)>
  # DEBUG valid => valid_6
  # DEBUG BEGIN_STMT
  valid_15 = Wdg_InitialHardware (Wdg_Instance_9(D), valid_6);
  # DEBUG valid => valid_15
  # DEBUG BEGIN_STMT
  # DEBUG Wdg_Instance => Wdg_Instance_9(D)
  # DEBUG status => valid_15
  # DEBUG INLINE_ENTRY Wdg_VadidateHardwareSetting
  # DEBUG BEGIN_STMT
  # DEBUG valid => valid_15
  # DEBUG BEGIN_STMT
  if (valid_15 == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Wdg_apConfigPtr[Wdg_Instance_9(D)] = 0B;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Wdg_Instance => NULL
  # DEBUG status => NULL
  # DEBUG valid => valid_15
  # DEBUG BEGIN_STMT
  if (valid_15 == 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Wdg_ChannelStartGpt (Wdg_Instance_9(D));
  # DEBUG BEGIN_STMT
  SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_02 ();
  # DEBUG BEGIN_STMT
  _4 = Wdg_apConfigPtr[Wdg_Instance_9(D)];
  _5 = _4->Wdg_DefaultMode;
  Wdg_aePreviousMode[Wdg_Instance_9(D)] = _5;
  # DEBUG BEGIN_STMT
  SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_02 ();

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function Wdg_ChannelSetMode (Wdg_ChannelSetMode, funcdef_no=10, decl_uid=6221, cgraph_uid=11, symbol_order=14)

Modification phase of node Wdg_ChannelSetMode/14
Wdg_ChannelSetMode (const Wdg_Ipw_InstanceType Wdg_Instance, WdgIf_ModeType Mode)
{
  Std_ReturnType valid;
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  # DEBUG valid => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 1
  # DEBUG D#2 => 17
  # DEBUG D#3 => Wdg_Instance_5(D)
  valid_6 = Wdg_ChannelValidateMode.isra.0 (Mode_4(D));
  # DEBUG valid => valid_6
  # DEBUG BEGIN_STMT
  if (valid_6 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  valid_8 = Wdg_DoChannelSetMode (Wdg_Instance_5(D), Mode_4(D));
  # DEBUG valid => valid_8
  # DEBUG BEGIN_STMT
  ret_10 = Wdg_VadidateDoChannelSetMode (Wdg_Instance_5(D), Mode_4(D), valid_8);
  # DEBUG ret => ret_10

  <bb 4> [local count: 1073741824]:
  # ret_1 = PHI <1(2), ret_10(3)>
  # DEBUG ret => ret_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_1;

}



;; Function Wdg_ChannelSetTriggerCondition (Wdg_ChannelSetTriggerCondition, funcdef_no=11, decl_uid=6224, cgraph_uid=12, symbol_order=15)

Modification phase of node Wdg_ChannelSetTriggerCondition/15
Wdg_ChannelSetTriggerCondition (const Wdg_Ipw_InstanceType Wdg_Instance, uint16 u16Timeout)
{
  Gpt_ValueType uElapsedTime;
  const struct Wdg_ConfigType * _1;
  unsigned char _2;
  long unsigned int _3;
  const struct Wdg_ConfigType * _4;
  unsigned char _5;
  long unsigned int _6;
  const struct Wdg_ConfigType * _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG uElapsedTime => 0
  # DEBUG BEGIN_STMT
  _1 = Wdg_apConfigPtr[Wdg_Instance_13(D)];
  _2 = _1->Wdg_TimerChannel;
  uElapsedTime_15 = Gpt_GetTimeElapsed (_2);
  # DEBUG uElapsedTime => uElapsedTime_15
  # DEBUG BEGIN_STMT
  SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_05 ();
  # DEBUG BEGIN_STMT
  _3 = Wdg_au32Timeout[Wdg_Instance_13(D)];
  if (_3 < uElapsedTime_15)
    goto <bb 4>; [33.00%]
  else
    goto <bb 3>; [67.00%]

  <bb 3> [local count: 719407023]:
  if (u16Timeout_17(D) == 0)
    goto <bb 4>; [67.00%]
  else
    goto <bb 5>; [33.00%]

  <bb 4> [local count: 836337508]:
  # DEBUG BEGIN_STMT
  Wdg_au32Timeout[Wdg_Instance_13(D)] = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_05 ();
  # DEBUG BEGIN_STMT
  _4 = Wdg_apConfigPtr[Wdg_Instance_13(D)];
  _5 = _4->Wdg_TimerChannel;
  Gpt_StopTimer (_5);
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  _6 = (long unsigned int) u16Timeout_17(D);
  _7 = Wdg_apConfigPtr[Wdg_Instance_13(D)];
  _8 = _7->Wdg_u32TriggerSourceClock;
  _9 = _6 * _8;
  _10 = _9 + uElapsedTime_15;
  Wdg_au32Timeout[Wdg_Instance_13(D)] = _10;
  # DEBUG BEGIN_STMT
  SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_05 ();

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function Wdg_ChannelGetVersionInfo (Wdg_ChannelGetVersionInfo, funcdef_no=12, decl_uid=6227, cgraph_uid=13, symbol_order=16)

Modification phase of node Wdg_ChannelGetVersionInfo/16
Wdg_ChannelGetVersionInfo (const Wdg_Ipw_InstanceType Wdg_Instance, struct Std_VersionInfoType * pVersioninfo)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pVersioninfo_2(D)->vendorID = 43;
  # DEBUG BEGIN_STMT
  pVersioninfo_2(D)->moduleID = 102;
  # DEBUG BEGIN_STMT
  pVersioninfo_2(D)->sw_major_version = 1;
  # DEBUG BEGIN_STMT
  pVersioninfo_2(D)->sw_minor_version = 0;
  # DEBUG BEGIN_STMT
  pVersioninfo_2(D)->sw_patch_version = 0;
  return;

}


