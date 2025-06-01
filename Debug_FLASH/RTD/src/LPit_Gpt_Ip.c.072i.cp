
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Lpit_Gpt_Ip_InterruptTimerChannels.isra.0/42:
  Jump functions of caller  Lpit_Gpt_Ip_SetMode.isra.0/41:
  Jump functions of caller  Lpit_Gpt_Ip_TimerEnable.isra.0/40:
  Jump functions of caller  Lpit_Gpt_Ip_SetDozeMode.isra.0/39:
  Jump functions of caller  Lpit_Gpt_Ip_SetDebugMode.isra.0/38:
  Jump functions of caller  Lpit_Gpt_Ip_EnableMdlClk.isra.0/37:
  Jump functions of caller  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_55/34:
  Jump functions of caller  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_55/33:
  Jump functions of caller  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_52/32:
  Jump functions of caller  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_52/31:
  Jump functions of caller  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_51/30:
  Jump functions of caller  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_51/29:
  Jump functions of caller  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_54/28:
  Jump functions of caller  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_54/27:
  Jump functions of caller  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_53/26:
  Jump functions of caller  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_53/25:
  Jump functions of caller  SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_50/24:
  Jump functions of caller  SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_50/23:
  Jump functions of caller  LPIT_0_CH_0_ISR/22:
    callsite  LPIT_0_CH_0_ISR/22 -> Lpit_Gpt_Ip_ProcessCommonInterrupt/21 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Lpit_Gpt_Ip_ProcessCommonInterrupt/21:
    callsite  Lpit_Gpt_Ip_ProcessCommonInterrupt/21 -> Lpit_Gpt_Ip_GetInterruptFlagTimerChannels/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _4 (_5);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Lpit_Gpt_Ip_DisableChInterrupt/20:
    callsite  Lpit_Gpt_Ip_DisableChInterrupt/20 -> Lpit_Gpt_Ip_InterruptTimerChannels.isra.0/42 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Lpit_Gpt_Ip_EnableChInterrupt/19:
    callsite  Lpit_Gpt_Ip_EnableChInterrupt/19 -> Lpit_Gpt_Ip_InterruptTimerChannels.isra.0/42 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Lpit_Gpt_Ip_StopTimer/18:
    callsite  Lpit_Gpt_Ip_StopTimer/18 -> Lpit_Gpt_Ip_TimerEnable.isra.0/40 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Lpit_Gpt_Ip_StartTimer/17:
    callsite  Lpit_Gpt_Ip_StartTimer/17 -> Lpit_Gpt_Ip_TimerEnable.isra.0/40 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Lpit_Gpt_Ip_StartTimer/17 -> Lpit_Gpt_Ip_TimerEnable.isra.0/40 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Lpit_Gpt_Ip_Deinit/16:
    callsite  Lpit_Gpt_Ip_Deinit/16 -> Lpit_Gpt_Ip_EnableMdlClk.isra.0/37 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Lpit_Gpt_Ip_Deinit/16 -> Lpit_Gpt_Ip_SetDozeMode.isra.0/39 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Lpit_Gpt_Ip_Deinit/16 -> Lpit_Gpt_Ip_SetDebugMode.isra.0/38 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Lpit_Gpt_Ip_Deinit/16 -> Lpit_Gpt_Ip_InterruptTimerChannels.isra.0/42 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 4]
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Lpit_Gpt_Ip_Deinit/16 -> Lpit_Gpt_Ip_SetMode.isra.0/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 4]
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Lpit_Gpt_Ip_Deinit/16 -> Lpit_Gpt_Ip_TimerEnable.isra.0/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 4]
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Lpit_Gpt_Ip_Deinit/16 -> Lpit_Gpt_Ip_EnableMdlClk.isra.0/37 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Lpit_Gpt_Ip_InitChannel/15:
    callsite  Lpit_Gpt_Ip_InitChannel/15 -> Lpit_Gpt_Ip_InterruptTimerChannels.isra.0/42 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Lpit_Gpt_Ip_InitChannel/15 -> Lpit_Gpt_Ip_SetMode.isra.0/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Lpit_Gpt_Ip_InitChannel/15 -> Lpit_Gpt_Ip_TimerEnable.isra.0/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Lpit_Gpt_Ip_InitChannel/15 -> Lpit_Gpt_Ip_EnableMdlClk.isra.0/37 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Lpit_Gpt_Ip_Init/14:
    callsite  Lpit_Gpt_Ip_Init/14 -> Lpit_Gpt_Ip_SetDozeMode.isra.0/39 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Lpit_Gpt_Ip_Init/14 -> Lpit_Gpt_Ip_SetDebugMode.isra.0/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Lpit_Gpt_Ip_Init/14 -> Lpit_Gpt_Ip_EnableMdlClk.isra.0/37 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Lpit_Gpt_Ip_GetTimerValue/13:
  Jump functions of caller  Lpit_Gpt_Ip_GetCurrentTimervalue/12:
  Jump functions of caller  Lpit_Gpt_Ip_GetTimerInterruptEnable/11:
  Jump functions of caller  Lpit_Gpt_Ip_GetInterruptFlagTimerChannels/10:

 Propagating constants:

Not considering LPIT_0_CH_0_ISR for cloning; -fipa-cp-clone disabled.
Not considering Lpit_Gpt_Ip_DisableChInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Lpit_Gpt_Ip_EnableChInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Lpit_Gpt_Ip_StopTimer for cloning; -fipa-cp-clone disabled.
Not considering Lpit_Gpt_Ip_StartTimer for cloning; -fipa-cp-clone disabled.
Not considering Lpit_Gpt_Ip_Deinit for cloning; -fipa-cp-clone disabled.
Not considering Lpit_Gpt_Ip_InitChannel for cloning; -fipa-cp-clone disabled.
Not considering Lpit_Gpt_Ip_Init for cloning; -fipa-cp-clone disabled.
Not considering Lpit_Gpt_Ip_GetTimerValue for cloning; -fipa-cp-clone disabled.
Not considering Lpit_Gpt_Ip_GetCurrentTimervalue for cloning; -fipa-cp-clone disabled.
Not considering Lpit_Gpt_Ip_GetTimerInterruptEnable for cloning; -fipa-cp-clone disabled.
Not considering Lpit_Gpt_Ip_GetInterruptFlagTimerChannels for cloning; -fipa-cp-clone disabled.

overall_size: 234, max_new_size: 11001
 - context independent values, size: 24, time_benefit: 51.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 8, time_benefit: 1.000000
 - context independent values, size: 8, time_benefit: 1.000000
 - context independent values, size: 8, time_benefit: 1.000000
 - context independent values, size: 10, time_benefit: 1.000000
 - context independent values, size: 25, time_benefit: 1.000000
 - context independent values, size: 7, time_benefit: 3.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 11, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 7, time_benefit: 1.000000
 - context independent values, size: 9, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Lpit_Gpt_Ip_InterruptTimerChannels.isra.0/42:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 1 [loc_time: 3, loc_size: 9, prop_time: 0, prop_size: 0]
               0 [loc_time: 3, loc_size: 10, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean [0, 1]
        AGGS VARIABLE
  Node: Lpit_Gpt_Ip_SetMode.isra.0/41:
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
  Node: Lpit_Gpt_Ip_TimerEnable.isra.0/40:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 1 [loc_time: 3, loc_size: 8, prop_time: 0, prop_size: 0]
               0 [loc_time: 3, loc_size: 8, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean [0, 1]
        AGGS VARIABLE
  Node: Lpit_Gpt_Ip_SetDozeMode.isra.0/39:
    param [0]: VARIABLE
               0 [loc_time: 3, loc_size: 8, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Lpit_Gpt_Ip_SetDebugMode.isra.0/38:
    param [0]: VARIABLE
               0 [loc_time: 3, loc_size: 8, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Lpit_Gpt_Ip_EnableMdlClk.isra.0/37:
    param [0]: 1 [loc_time: 3, loc_size: 8, prop_time: 0, prop_size: 0]
               0 [loc_time: 3, loc_size: 8, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean [0, 1]
        AGGS VARIABLE
  Node: LPIT_0_CH_0_ISR/22:
  Node: Lpit_Gpt_Ip_ProcessCommonInterrupt/21:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint8 [0, 0]
        AGGS VARIABLE
    param [1]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint8 [0, 0]
        AGGS VARIABLE
  Node: Lpit_Gpt_Ip_DisableChInterrupt/20:
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
  Node: Lpit_Gpt_Ip_EnableChInterrupt/19:
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
  Node: Lpit_Gpt_Ip_StopTimer/18:
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
  Node: Lpit_Gpt_Ip_StartTimer/17:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Lpit_Gpt_Ip_Deinit/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Lpit_Gpt_Ip_InitChannel/15:
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
  Node: Lpit_Gpt_Ip_Init/14:
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
  Node: Lpit_Gpt_Ip_GetTimerValue/13:
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
  Node: Lpit_Gpt_Ip_GetCurrentTimervalue/12:
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
  Node: Lpit_Gpt_Ip_GetTimerInterruptEnable/11:
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
  Node: Lpit_Gpt_Ip_GetInterruptFlagTimerChannels/10:
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

IPA decision stage:

 - Creating a specialized node of Lpit_Gpt_Ip_ProcessCommonInterrupt/21 for all known contexts.
    replacing param #0 instance with const 0
    replacing param #1 channel with const 0
 - Creating a specialized node of Lpit_Gpt_Ip_SetMode.isra.0/41 for all known contexts.
    replacing param #1 mode with const 0
Propagated bits info for function Lpit_Gpt_Ip_SetMode.isra.0.constprop/51:
 param 1: value = 0x0, mask = 0x0
Propagated bits info for function Lpit_Gpt_Ip_ProcessCommonInterrupt.constprop/50:
 param 0: value = 0x0, mask = 0x0
 param 1: value = 0x0, mask = 0x0
Propagated bits info for function Lpit_Gpt_Ip_SetMode.isra.0/41:
 param 1: value = 0x0, mask = 0x0
Propagated bits info for function Lpit_Gpt_Ip_ProcessCommonInterrupt/21:
 param 0: value = 0x0, mask = 0x0
 param 1: value = 0x0, mask = 0x0

IPA constant propagation end

Reclaiming functions: Lpit_Gpt_Ip_SetMode.isra.0/41 Lpit_Gpt_Ip_ProcessCommonInterrupt/21
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Lpit_Gpt_Ip_SetMode.isra.0.constprop.0/51 (Lpit_Gpt_Ip_SetMode.isra.0.constprop) @05dd5b60
  Type: function definition analyzed
  Visibility: artificial
  References: 
  Referring: 
  Clone of Lpit_Gpt_Ip_SetMode.isra.0/41
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Lpit_Gpt_Ip_InitChannel/15 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_Deinit/16 (858993459 (estimated locally),4.00 per call) 
  Calls: SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_52/31 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_52/32 (1073741824 (estimated locally),1.00 per call) 
Lpit_Gpt_Ip_ProcessCommonInterrupt.constprop.0/50 (Lpit_Gpt_Ip_ProcessCommonInterrupt.constprop) @05dd58c0
  Type: function definition analyzed
  Visibility:
  References: Lpit_Gpt_Ip_u32ChState/0 (read)Lpit_Gpt_Ip_u32ChState/0 (read)Lpit_Gpt_Ip_u32ChState/0 (read)
  Referring: 
  Clone of Lpit_Gpt_Ip_ProcessCommonInterrupt/21
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: LPIT_0_CH_0_ISR/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: Lpit_Gpt_Ip_GetInterruptFlagTimerChannels/10 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(43443594 (estimated locally),0.04 per call) 
Lpit_Gpt_Ip_InterruptTimerChannels.isra.0/42 (Lpit_Gpt_Ip_InterruptTimerChannels.isra.0) @05f9b540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Lpit_Gpt_Ip_DisableChInterrupt/20 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_EnableChInterrupt/19 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_Deinit/16 (858993459 (estimated locally),4.00 per call) Lpit_Gpt_Ip_InitChannel/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_55/34 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_55/33 (1073741824 (estimated locally),1.00 per call) 
Lpit_Gpt_Ip_SetMode.isra.0/41 (Lpit_Gpt_Ip_SetMode.isra.0) @05f91c40
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Lpit_Gpt_Ip_TimerEnable.isra.0/40 (Lpit_Gpt_Ip_TimerEnable.isra.0) @05f91b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Lpit_Gpt_Ip_StopTimer/18 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_StartTimer/17 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_StartTimer/17 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_Deinit/16 (858993459 (estimated locally),4.00 per call) Lpit_Gpt_Ip_InitChannel/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_51/30 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_51/29 (1073741824 (estimated locally),1.00 per call) 
Lpit_Gpt_Ip_SetDozeMode.isra.0/39 (Lpit_Gpt_Ip_SetDozeMode.isra.0) @05f91540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Lpit_Gpt_Ip_Deinit/16 (214748365 (estimated locally),1.00 per call) Lpit_Gpt_Ip_Init/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_54/28 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_54/27 (1073741824 (estimated locally),1.00 per call) 
Lpit_Gpt_Ip_SetDebugMode.isra.0/38 (Lpit_Gpt_Ip_SetDebugMode.isra.0) @05e55ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Lpit_Gpt_Ip_Deinit/16 (214748365 (estimated locally),1.00 per call) Lpit_Gpt_Ip_Init/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_53/26 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_53/25 (1073741824 (estimated locally),1.00 per call) 
Lpit_Gpt_Ip_EnableMdlClk.isra.0/37 (Lpit_Gpt_Ip_EnableMdlClk.isra.0) @05f56c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Lpit_Gpt_Ip_Deinit/16 (214748365 (estimated locally),1.00 per call) Lpit_Gpt_Ip_Deinit/16 (214748364 (estimated locally),1.00 per call) Lpit_Gpt_Ip_InitChannel/15 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_Init/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_50/24 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_50/23 (1073741824 (estimated locally),1.00 per call) 
SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_55/34 (SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_55) @05df7540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lpit_Gpt_Ip_InterruptTimerChannels.isra.0/42 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_55/33 (SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_55) @05df7460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lpit_Gpt_Ip_InterruptTimerChannels.isra.0/42 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_52/32 (SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_52) @05df71c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lpit_Gpt_Ip_SetMode.isra.0.constprop/51 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_52/31 (SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_52) @05df70e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lpit_Gpt_Ip_SetMode.isra.0.constprop/51 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_51/30 (SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_51) @05decee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lpit_Gpt_Ip_TimerEnable.isra.0/40 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_51/29 (SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_51) @05dece00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lpit_Gpt_Ip_TimerEnable.isra.0/40 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_54/28 (SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_54) @05decb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lpit_Gpt_Ip_SetDozeMode.isra.0/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_54/27 (SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_54) @05deca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lpit_Gpt_Ip_SetDozeMode.isra.0/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_53/26 (SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_53) @05dec8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lpit_Gpt_Ip_SetDebugMode.isra.0/38 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_53/25 (SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_53) @05dec7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lpit_Gpt_Ip_SetDebugMode.isra.0/38 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_50/24 (SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_50) @05dec620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lpit_Gpt_Ip_EnableMdlClk.isra.0/37 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_50/23 (SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_50) @05dec540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lpit_Gpt_Ip_EnableMdlClk.isra.0/37 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
LPIT_0_CH_0_ISR/22 (LPIT_0_CH_0_ISR) @05de2620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_ProcessCommonInterrupt.constprop/50 (1073741824 (estimated locally),1.00 per call) 
Lpit_Gpt_Ip_ProcessCommonInterrupt/21 (Lpit_Gpt_Ip_ProcessCommonInterrupt) @05de20e0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Lpit_Gpt_Ip_DisableChInterrupt/20 (Lpit_Gpt_Ip_DisableChInterrupt) @05de2d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_InterruptTimerChannels.isra.0/42 (1073741824 (estimated locally),1.00 per call) 
Lpit_Gpt_Ip_EnableChInterrupt/19 (Lpit_Gpt_Ip_EnableChInterrupt) @05de2a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_InterruptTimerChannels.isra.0/42 (1073741824 (estimated locally),1.00 per call) 
Lpit_Gpt_Ip_StopTimer/18 (Lpit_Gpt_Ip_StopTimer) @05de27e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_TimerEnable.isra.0/40 (1073741824 (estimated locally),1.00 per call) 
Lpit_Gpt_Ip_StartTimer/17 (Lpit_Gpt_Ip_StartTimer) @05de2540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_TimerEnable.isra.0/40 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_TimerEnable.isra.0/40 (1073741824 (estimated locally),1.00 per call) 
Lpit_Gpt_Ip_Deinit/16 (Lpit_Gpt_Ip_Deinit) @05de22a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:214748364 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_EnableMdlClk.isra.0/37 (214748365 (estimated locally),1.00 per call) Lpit_Gpt_Ip_SetDozeMode.isra.0/39 (214748365 (estimated locally),1.00 per call) Lpit_Gpt_Ip_SetDebugMode.isra.0/38 (214748365 (estimated locally),1.00 per call) Lpit_Gpt_Ip_InterruptTimerChannels.isra.0/42 (858993459 (estimated locally),4.00 per call) Lpit_Gpt_Ip_SetMode.isra.0.constprop/51 (858993459 (estimated locally),4.00 per call) Lpit_Gpt_Ip_TimerEnable.isra.0/40 (858993459 (estimated locally),4.00 per call) Lpit_Gpt_Ip_EnableMdlClk.isra.0/37 (214748364 (estimated locally),1.00 per call) 
Lpit_Gpt_Ip_InitChannel/15 (Lpit_Gpt_Ip_InitChannel) @05de2000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Lpit_Gpt_Ip_u32ChState/0 (write)Lpit_Gpt_Ip_u32ChState/0 (write)Lpit_Gpt_Ip_u32ChState/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_InterruptTimerChannels.isra.0/42 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_SetMode.isra.0.constprop/51 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_TimerEnable.isra.0/40 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_EnableMdlClk.isra.0/37 (1073741824 (estimated locally),1.00 per call) 
Lpit_Gpt_Ip_Init/14 (Lpit_Gpt_Ip_Init) @05ddbb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lpit_Gpt_Ip_SetDozeMode.isra.0/39 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_SetDebugMode.isra.0/38 (1073741824 (estimated locally),1.00 per call) Lpit_Gpt_Ip_EnableMdlClk.isra.0/37 (1073741824 (estimated locally),1.00 per call) 
Lpit_Gpt_Ip_GetTimerValue/13 (Lpit_Gpt_Ip_GetTimerValue) @05ddb620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Lpit_Gpt_Ip_GetCurrentTimervalue/12 (Lpit_Gpt_Ip_GetCurrentTimervalue) @05ddb0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Lpit_Gpt_Ip_GetTimerInterruptEnable/11 (Lpit_Gpt_Ip_GetTimerInterruptEnable) @05ddbd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Lpit_Gpt_Ip_GetInterruptFlagTimerChannels/10 (Lpit_Gpt_Ip_GetInterruptFlagTimerChannels) @05ddba80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Lpit_Gpt_Ip_ProcessCommonInterrupt.constprop/50 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
LPitGptBase/1 (LPitGptBase) @05d3d8b8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Lpit_Gpt_Ip_u32ChState/0 (Lpit_Gpt_Ip_u32ChState) @05d3d870
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Lpit_Gpt_Ip_ProcessCommonInterrupt.constprop.0/50 (read)Lpit_Gpt_Ip_ProcessCommonInterrupt.constprop.0/50 (read)Lpit_Gpt_Ip_ProcessCommonInterrupt.constprop.0/50 (read)Lpit_Gpt_Ip_InitChannel/15 (write)Lpit_Gpt_Ip_InitChannel/15 (write)Lpit_Gpt_Ip_InitChannel/15 (write)
  Availability: available
  Varpool flags: initialized

;; Function Lpit_Gpt_Ip_GetInterruptFlagTimerChannels (Lpit_Gpt_Ip_GetInterruptFlagTimerChannels, funcdef_no=8, decl_uid=5785, cgraph_uid=9, symbol_order=10)

Modification phase of node Lpit_Gpt_Ip_GetInterruptFlagTimerChannels/10
Lpit_Gpt_Ip_GetInterruptFlagTimerChannels (uint8 instance, uint8 channel)
{
  volatile uint32 returnValue;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  uint32 _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  returnValue ={v} 0;
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct LPIT_Type *)1073967104B].MSR;
  _2 = (long unsigned int) channel_9(D);
  _3 = 1 << _2;
  _4 = _1 & _3;
  _5 = _4 >> _2;
  returnValue ={v} _5;
  # DEBUG BEGIN_STMT
  _11 ={v} returnValue;
  return _11;

}



;; Function Lpit_Gpt_Ip_GetTimerInterruptEnable (Lpit_Gpt_Ip_GetTimerInterruptEnable, funcdef_no=9, decl_uid=5788, cgraph_uid=10, symbol_order=11)

Modification phase of node Lpit_Gpt_Ip_GetTimerInterruptEnable/11
Lpit_Gpt_Ip_GetTimerInterruptEnable (uint8 instance, uint8 channel)
{
  uint32 returnValue;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG returnValue => 0
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct LPIT_Type *)1073967104B].MIER;
  _2 = (long unsigned int) channel_7(D);
  _3 = 1 << _2;
  _4 = _1 & _3;
  returnValue_8 = _4 >> _2;
  # DEBUG returnValue => returnValue_8
  # DEBUG BEGIN_STMT
  return returnValue_8;

}



;; Function Lpit_Gpt_Ip_GetCurrentTimervalue (Lpit_Gpt_Ip_GetCurrentTimervalue, funcdef_no=10, decl_uid=5779, cgraph_uid=11, symbol_order=12)

Modification phase of node Lpit_Gpt_Ip_GetCurrentTimervalue/12
Lpit_Gpt_Ip_GetCurrentTimervalue (uint8 instance, uint8 channel)
{
  int _1;
  uint32 _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) channel_3(D);
  _5 ={v} MEM[(struct LPIT_Type *)1073967104B].TMR[_1].CVAL;
  return _5;

}



;; Function Lpit_Gpt_Ip_GetTimerValue (Lpit_Gpt_Ip_GetTimerValue, funcdef_no=11, decl_uid=5782, cgraph_uid=12, symbol_order=13)

Modification phase of node Lpit_Gpt_Ip_GetTimerValue/13
Lpit_Gpt_Ip_GetTimerValue (uint8 instance, uint8 channel)
{
  int _1;
  uint32 _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) channel_3(D);
  _5 ={v} MEM[(struct LPIT_Type *)1073967104B].TMR[_1].TVAL;
  return _5;

}



;; Function Lpit_Gpt_Ip_Init (Lpit_Gpt_Ip_Init, funcdef_no=12, decl_uid=5792, cgraph_uid=13, symbol_order=14)

Modification phase of node Lpit_Gpt_Ip_Init/14
Lpit_Gpt_Ip_Init (uint8 instance, const struct Lpit_Gpt_Ip_InstanceConfigType * config)
{
  _Bool _1;
  _Bool _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#3 => instance_4(D)
  Lpit_Gpt_Ip_EnableMdlClk.isra.0 (1);
  # DEBUG BEGIN_STMT
  _1 = config_6(D)->stopRunInDebug;
  # DEBUG D#4 => instance_4(D)
  Lpit_Gpt_Ip_SetDebugMode.isra.0 (_1);
  # DEBUG BEGIN_STMT
  _2 = config_6(D)->runInDozeMode;
  # DEBUG D#5 => instance_4(D)
  Lpit_Gpt_Ip_SetDozeMode.isra.0 (_2);
  return;

}



;; Function Lpit_Gpt_Ip_InitChannel (Lpit_Gpt_Ip_InitChannel, funcdef_no=13, decl_uid=5795, cgraph_uid=14, symbol_order=15)

Modification phase of node Lpit_Gpt_Ip_InitChannel/15
Lpit_Gpt_Ip_InitChannel (uint8 instance, const struct Lpit_Gpt_Ip_ChannelConfigType * configChannel)
{
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  int _5;
  int _6;
  void (*<T496>) (uint8) _7;
  unsigned char _8;
  long unsigned int _19;
  long unsigned int _20;
  int _21;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#3 => instance_10(D)
  Lpit_Gpt_Ip_EnableMdlClk.isra.0 (1);
  # DEBUG BEGIN_STMT
  _1 = configChannel_12(D)->hwChannel;
  # DEBUG D#6 => instance_10(D)
  Lpit_Gpt_Ip_TimerEnable.isra.0 (_1, 0);
  # DEBUG BEGIN_STMT
  _2 = configChannel_12(D)->hwChannel;
  # DEBUG D#7 => instance_10(D)
  Lpit_Gpt_Ip_SetMode.isra.0 (_2, 0);
  # DEBUG BEGIN_STMT
  _3 = configChannel_12(D)->hwChannel;
  # DEBUG D#1 => instance_10(D)
  # DEBUG channel => _3
  # DEBUG value => 4294967295
  # DEBUG INLINE_ENTRY Lpit_Gpt_Ip_SetCmpValue
  # DEBUG instance => D#1
  # DEBUG BEGIN_STMT
  _21 = (int) _3;
  MEM[(struct LPIT_Type *)1073967104B].TMR[_21].TVAL ={v} 4294967295;
  # DEBUG channel => NULL
  # DEBUG value => NULL
  # DEBUG BEGIN_STMT
  # DEBUG D#8 => instance_10(D)
  Lpit_Gpt_Ip_InterruptTimerChannels.isra.0 (_3, 0);
  # DEBUG BEGIN_STMT
  _4 = configChannel_12(D)->hwChannel;
  # DEBUG D#2 => instance_10(D)
  # DEBUG channel => _4
  # DEBUG INLINE_ENTRY Lpit_Gpt_Ip_ClearInterruptFlagTimerChannels
  # DEBUG instance => D#2
  # DEBUG BEGIN_STMT
  _19 = (long unsigned int) _4;
  _20 = 1 << _19;
  MEM[(struct LPIT_Type *)1073967104B].MSR ={v} _20;
  # DEBUG channel => NULL
  # DEBUG BEGIN_STMT
  _5 = (int) instance_10(D);
  _6 = (int) _4;
  Lpit_Gpt_Ip_u32ChState[_5][_6].chInit = 1;
  # DEBUG BEGIN_STMT
  _7 = configChannel_12(D)->callback;
  Lpit_Gpt_Ip_u32ChState[_5][_6].callback = _7;
  # DEBUG BEGIN_STMT
  _8 = configChannel_12(D)->callbackParam;
  Lpit_Gpt_Ip_u32ChState[_5][_6].callbackParam = _8;
  return;

}



;; Function Lpit_Gpt_Ip_Deinit (Lpit_Gpt_Ip_Deinit, funcdef_no=14, decl_uid=5797, cgraph_uid=15, symbol_order=16)

Modification phase of node Lpit_Gpt_Ip_Deinit/16
Lpit_Gpt_Ip_Deinit (uint8 instance)
{
  uint8 channelIndex;
  long unsigned int _13;
  long unsigned int _14;

  <bb 2> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#3 => instance_4(D)
  Lpit_Gpt_Ip_EnableMdlClk.isra.0 (1);
  # DEBUG BEGIN_STMT
  # DEBUG channelIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  # DEBUG D#6 => instance_4(D)
  Lpit_Gpt_Ip_TimerEnable.isra.0 (channelIndex_1, 0);
  # DEBUG BEGIN_STMT
  # DEBUG D#7 => instance_4(D)
  Lpit_Gpt_Ip_SetMode.isra.0 (channelIndex_1, 0);
  # DEBUG BEGIN_STMT
  # DEBUG D#8 => instance_4(D)
  Lpit_Gpt_Ip_InterruptTimerChannels.isra.0 (channelIndex_1, 0);
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => instance_4(D)
  # DEBUG channel => channelIndex_1
  # DEBUG INLINE_ENTRY Lpit_Gpt_Ip_ClearInterruptFlagTimerChannels
  # DEBUG instance => D#2
  # DEBUG BEGIN_STMT
  _13 = (long unsigned int) channelIndex_1;
  _14 = 1 << _13;
  MEM[(struct LPIT_Type *)1073967104B].MSR ={v} _14;
  # DEBUG channel => NULL
  # DEBUG BEGIN_STMT
  channelIndex_12 = channelIndex_1 + 1;
  # DEBUG channelIndex => channelIndex_12

  <bb 4> [local count: 1073741824]:
  # channelIndex_1 = PHI <0(2), channelIndex_12(3)>
  # DEBUG channelIndex => channelIndex_1
  # DEBUG BEGIN_STMT
  if (channelIndex_1 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 5>; [20.00%]

  <bb 5> [local count: 214748365]:
  # DEBUG BEGIN_STMT
  # DEBUG D#4 => instance_4(D)
  Lpit_Gpt_Ip_SetDebugMode.isra.0 (0);
  # DEBUG BEGIN_STMT
  # DEBUG D#5 => instance_4(D)
  Lpit_Gpt_Ip_SetDozeMode.isra.0 (0);
  # DEBUG BEGIN_STMT
  # DEBUG D#3 => instance_4(D)
  Lpit_Gpt_Ip_EnableMdlClk.isra.0 (0);
  return;

}



;; Function Lpit_Gpt_Ip_StartTimer (Lpit_Gpt_Ip_StartTimer, funcdef_no=15, decl_uid=5801, cgraph_uid=16, symbol_order=17)

Modification phase of node Lpit_Gpt_Ip_StartTimer/17
Lpit_Gpt_Ip_StartTimer (uint8 instance, uint8 channel, uint32 countValue)
{
  int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#6 => instance_2(D)
  Lpit_Gpt_Ip_TimerEnable.isra.0 (channel_3(D), 0);
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => instance_2(D)
  # DEBUG channel => channel_3(D)
  # DEBUG value => countValue_5(D)
  # DEBUG INLINE_ENTRY Lpit_Gpt_Ip_SetCmpValue
  # DEBUG instance => D#1
  # DEBUG BEGIN_STMT
  _7 = (int) channel_3(D);
  MEM[(struct LPIT_Type *)1073967104B].TMR[_7].TVAL ={v} countValue_5(D);
  # DEBUG channel => NULL
  # DEBUG value => NULL
  # DEBUG BEGIN_STMT
  # DEBUG D#6 => instance_2(D)
  Lpit_Gpt_Ip_TimerEnable.isra.0 (channel_3(D), 1);
  return;

}



;; Function Lpit_Gpt_Ip_StopTimer (Lpit_Gpt_Ip_StopTimer, funcdef_no=16, decl_uid=5804, cgraph_uid=17, symbol_order=18)

Modification phase of node Lpit_Gpt_Ip_StopTimer/18
Lpit_Gpt_Ip_StopTimer (uint8 instance, uint8 channel)
{
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#6 => instance_2(D)
  Lpit_Gpt_Ip_TimerEnable.isra.0 (channel_3(D), 0);
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => instance_2(D)
  # DEBUG channel => channel_3(D)
  # DEBUG INLINE_ENTRY Lpit_Gpt_Ip_ClearInterruptFlagTimerChannels
  # DEBUG instance => D#2
  # DEBUG BEGIN_STMT
  _5 = (long unsigned int) channel_3(D);
  _6 = 1 << _5;
  MEM[(struct LPIT_Type *)1073967104B].MSR ={v} _6;
  # DEBUG channel => NULL
  return;

}



;; Function Lpit_Gpt_Ip_EnableChInterrupt (Lpit_Gpt_Ip_EnableChInterrupt, funcdef_no=17, decl_uid=5807, cgraph_uid=18, symbol_order=19)

Modification phase of node Lpit_Gpt_Ip_EnableChInterrupt/19
Lpit_Gpt_Ip_EnableChInterrupt (uint8 instance, uint8 channel)
{
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => instance_2(D)
  # DEBUG channel => channel_3(D)
  # DEBUG INLINE_ENTRY Lpit_Gpt_Ip_ClearInterruptFlagTimerChannels
  # DEBUG instance => D#2
  # DEBUG BEGIN_STMT
  _5 = (long unsigned int) channel_3(D);
  _6 = 1 << _5;
  MEM[(struct LPIT_Type *)1073967104B].MSR ={v} _6;
  # DEBUG channel => NULL
  # DEBUG BEGIN_STMT
  # DEBUG D#8 => instance_2(D)
  Lpit_Gpt_Ip_InterruptTimerChannels.isra.0 (channel_3(D), 1);
  return;

}



;; Function Lpit_Gpt_Ip_DisableChInterrupt (Lpit_Gpt_Ip_DisableChInterrupt, funcdef_no=18, decl_uid=5810, cgraph_uid=19, symbol_order=20)

Modification phase of node Lpit_Gpt_Ip_DisableChInterrupt/20
Lpit_Gpt_Ip_DisableChInterrupt (uint8 instance, uint8 channel)
{
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => instance_2(D)
  # DEBUG channel => channel_3(D)
  # DEBUG INLINE_ENTRY Lpit_Gpt_Ip_ClearInterruptFlagTimerChannels
  # DEBUG instance => D#2
  # DEBUG BEGIN_STMT
  _5 = (long unsigned int) channel_3(D);
  _6 = 1 << _5;
  MEM[(struct LPIT_Type *)1073967104B].MSR ={v} _6;
  # DEBUG channel => NULL
  # DEBUG BEGIN_STMT
  # DEBUG D#8 => instance_2(D)
  Lpit_Gpt_Ip_InterruptTimerChannels.isra.0 (channel_3(D), 0);
  return;

}



;; Function LPIT_0_CH_0_ISR (LPIT_0_CH_0_ISR, funcdef_no=20, decl_uid=5817, cgraph_uid=21, symbol_order=22)

Modification phase of node LPIT_0_CH_0_ISR/22
LPIT_0_CH_0_ISR ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Lpit_Gpt_Ip_ProcessCommonInterrupt (0, 0);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}


