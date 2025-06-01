################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/src/Clock_Ip.c \
../RTD/src/Clock_Ip_Data.c \
../RTD/src/Clock_Ip_Divider.c \
../RTD/src/Clock_Ip_DividerTrigger.c \
../RTD/src/Clock_Ip_ExtOsc.c \
../RTD/src/Clock_Ip_FracDiv.c \
../RTD/src/Clock_Ip_Frequency.c \
../RTD/src/Clock_Ip_Gate.c \
../RTD/src/Clock_Ip_IntOsc.c \
../RTD/src/Clock_Ip_Irq.c \
../RTD/src/Clock_Ip_Monitor.c \
../RTD/src/Clock_Ip_Pll.c \
../RTD/src/Clock_Ip_ProgFreqSwitch.c \
../RTD/src/Clock_Ip_Selector.c \
../RTD/src/Clock_Ip_Specific.c \
../RTD/src/Det.c \
../RTD/src/Det_stub.c \
../RTD/src/Ewm_Ip.c \
../RTD/src/Ftm_Gpt_Ip.c \
../RTD/src/Gpt.c \
../RTD/src/Gpt_Ipw.c \
../RTD/src/IntCtrl_Ip.c \
../RTD/src/LPit_Gpt_Ip.c \
../RTD/src/Lptmr_Gpt_Ip.c \
../RTD/src/Mcu.c \
../RTD/src/Mcu_Dem_Wrapper.c \
../RTD/src/Mcu_IPW.c \
../RTD/src/Mcu_IPW_Irq.c \
../RTD/src/OsIf_Timer.c \
../RTD/src/OsIf_Timer_System.c \
../RTD/src/Platform.c \
../RTD/src/Platform_Ipw.c \
../RTD/src/Port_Ci_Port_Ip.c \
../RTD/src/Power_Ip.c \
../RTD/src/Power_Ip_CMU.c \
../RTD/src/Power_Ip_CortexM4.c \
../RTD/src/Power_Ip_PCC.c \
../RTD/src/Power_Ip_PMC.c \
../RTD/src/Power_Ip_PMC_Irq.c \
../RTD/src/Power_Ip_Private.c \
../RTD/src/Power_Ip_RCM.c \
../RTD/src/Power_Ip_RCM_Irq.c \
../RTD/src/Power_Ip_SCG.c \
../RTD/src/Power_Ip_SIM.c \
../RTD/src/Power_Ip_SMC.c \
../RTD/src/Ram_Ip.c \
../RTD/src/SRtc_Ip.c \
../RTD/src/SchM_Gpt.c \
../RTD/src/SchM_Mcu.c \
../RTD/src/SchM_Port.c \
../RTD/src/SchM_Wdg.c \
../RTD/src/System_Ip.c \
../RTD/src/WdgIf.c \
../RTD/src/Wdg_43_Instance0.c \
../RTD/src/Wdg_43_Instance1.c \
../RTD/src/Wdg_Channel.c \
../RTD/src/Wdg_Ipw.c \
../RTD/src/Wdg_Ipw_Irq.c \
../RTD/src/Wdog_Ip.c 

OBJS += \
./RTD/src/Clock_Ip.o \
./RTD/src/Clock_Ip_Data.o \
./RTD/src/Clock_Ip_Divider.o \
./RTD/src/Clock_Ip_DividerTrigger.o \
./RTD/src/Clock_Ip_ExtOsc.o \
./RTD/src/Clock_Ip_FracDiv.o \
./RTD/src/Clock_Ip_Frequency.o \
./RTD/src/Clock_Ip_Gate.o \
./RTD/src/Clock_Ip_IntOsc.o \
./RTD/src/Clock_Ip_Irq.o \
./RTD/src/Clock_Ip_Monitor.o \
./RTD/src/Clock_Ip_Pll.o \
./RTD/src/Clock_Ip_ProgFreqSwitch.o \
./RTD/src/Clock_Ip_Selector.o \
./RTD/src/Clock_Ip_Specific.o \
./RTD/src/Det.o \
./RTD/src/Det_stub.o \
./RTD/src/Ewm_Ip.o \
./RTD/src/Ftm_Gpt_Ip.o \
./RTD/src/Gpt.o \
./RTD/src/Gpt_Ipw.o \
./RTD/src/IntCtrl_Ip.o \
./RTD/src/LPit_Gpt_Ip.o \
./RTD/src/Lptmr_Gpt_Ip.o \
./RTD/src/Mcu.o \
./RTD/src/Mcu_Dem_Wrapper.o \
./RTD/src/Mcu_IPW.o \
./RTD/src/Mcu_IPW_Irq.o \
./RTD/src/OsIf_Timer.o \
./RTD/src/OsIf_Timer_System.o \
./RTD/src/Platform.o \
./RTD/src/Platform_Ipw.o \
./RTD/src/Port_Ci_Port_Ip.o \
./RTD/src/Power_Ip.o \
./RTD/src/Power_Ip_CMU.o \
./RTD/src/Power_Ip_CortexM4.o \
./RTD/src/Power_Ip_PCC.o \
./RTD/src/Power_Ip_PMC.o \
./RTD/src/Power_Ip_PMC_Irq.o \
./RTD/src/Power_Ip_Private.o \
./RTD/src/Power_Ip_RCM.o \
./RTD/src/Power_Ip_RCM_Irq.o \
./RTD/src/Power_Ip_SCG.o \
./RTD/src/Power_Ip_SIM.o \
./RTD/src/Power_Ip_SMC.o \
./RTD/src/Ram_Ip.o \
./RTD/src/SRtc_Ip.o \
./RTD/src/SchM_Gpt.o \
./RTD/src/SchM_Mcu.o \
./RTD/src/SchM_Port.o \
./RTD/src/SchM_Wdg.o \
./RTD/src/System_Ip.o \
./RTD/src/WdgIf.o \
./RTD/src/Wdg_43_Instance0.o \
./RTD/src/Wdg_43_Instance1.o \
./RTD/src/Wdg_Channel.o \
./RTD/src/Wdg_Ipw.o \
./RTD/src/Wdg_Ipw_Irq.o \
./RTD/src/Wdog_Ip.o 

C_DEPS += \
./RTD/src/Clock_Ip.d \
./RTD/src/Clock_Ip_Data.d \
./RTD/src/Clock_Ip_Divider.d \
./RTD/src/Clock_Ip_DividerTrigger.d \
./RTD/src/Clock_Ip_ExtOsc.d \
./RTD/src/Clock_Ip_FracDiv.d \
./RTD/src/Clock_Ip_Frequency.d \
./RTD/src/Clock_Ip_Gate.d \
./RTD/src/Clock_Ip_IntOsc.d \
./RTD/src/Clock_Ip_Irq.d \
./RTD/src/Clock_Ip_Monitor.d \
./RTD/src/Clock_Ip_Pll.d \
./RTD/src/Clock_Ip_ProgFreqSwitch.d \
./RTD/src/Clock_Ip_Selector.d \
./RTD/src/Clock_Ip_Specific.d \
./RTD/src/Det.d \
./RTD/src/Det_stub.d \
./RTD/src/Ewm_Ip.d \
./RTD/src/Ftm_Gpt_Ip.d \
./RTD/src/Gpt.d \
./RTD/src/Gpt_Ipw.d \
./RTD/src/IntCtrl_Ip.d \
./RTD/src/LPit_Gpt_Ip.d \
./RTD/src/Lptmr_Gpt_Ip.d \
./RTD/src/Mcu.d \
./RTD/src/Mcu_Dem_Wrapper.d \
./RTD/src/Mcu_IPW.d \
./RTD/src/Mcu_IPW_Irq.d \
./RTD/src/OsIf_Timer.d \
./RTD/src/OsIf_Timer_System.d \
./RTD/src/Platform.d \
./RTD/src/Platform_Ipw.d \
./RTD/src/Port_Ci_Port_Ip.d \
./RTD/src/Power_Ip.d \
./RTD/src/Power_Ip_CMU.d \
./RTD/src/Power_Ip_CortexM4.d \
./RTD/src/Power_Ip_PCC.d \
./RTD/src/Power_Ip_PMC.d \
./RTD/src/Power_Ip_PMC_Irq.d \
./RTD/src/Power_Ip_Private.d \
./RTD/src/Power_Ip_RCM.d \
./RTD/src/Power_Ip_RCM_Irq.d \
./RTD/src/Power_Ip_SCG.d \
./RTD/src/Power_Ip_SIM.d \
./RTD/src/Power_Ip_SMC.d \
./RTD/src/Ram_Ip.d \
./RTD/src/SRtc_Ip.d \
./RTD/src/SchM_Gpt.d \
./RTD/src/SchM_Mcu.d \
./RTD/src/SchM_Port.d \
./RTD/src/SchM_Wdg.d \
./RTD/src/System_Ip.d \
./RTD/src/WdgIf.d \
./RTD/src/Wdg_43_Instance0.d \
./RTD/src/Wdg_43_Instance1.d \
./RTD/src/Wdg_Channel.d \
./RTD/src/Wdg_Ipw.d \
./RTD/src/Wdg_Ipw_Irq.d \
./RTD/src/Wdog_Ip.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/src/%.o: ../RTD/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/src/Clock_Ip.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


