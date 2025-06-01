################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generate/src/Ewm_Ip_VS_0_PBcfg.c \
../generate/src/Ftm_Gpt_Ip_VS_0_PBcfg.c \
../generate/src/Gpt_Cfg.c \
../generate/src/Gpt_Ipw_VS_0_PBcfg.c \
../generate/src/Gpt_VS_0_PBcfg.c \
../generate/src/LPit_Gpt_Ip_VS_0_PBcfg.c \
../generate/src/Lptmr_Gpt_Ip_VS_0_PBcfg.c \
../generate/src/Mcu_Cfg.c \
../generate/src/Mcu_VS_0_PBcfg.c \
../generate/src/OsIf_Cfg.c \
../generate/src/Platform_Cfg.c \
../generate/src/Platform_Ipw_Cfg.c \
../generate/src/Power_Ip_Cfg.c \
../generate/src/Power_Ip_VS_0_PBcfg.c \
../generate/src/Ram_Ip_Cfg.c \
../generate/src/Ram_Ip_VS_0_PBcfg.c \
../generate/src/SRtc_Ip_VS_0_PBcfg.c \
../generate/src/Wdg_43_Instance0_Cfg.c \
../generate/src/Wdg_43_Instance0_Ipw_VS_0_PBcfg.c \
../generate/src/Wdg_43_Instance0_VS_0_PBcfg.c \
../generate/src/Wdg_43_Instance1_Cfg.c \
../generate/src/Wdg_43_Instance1_Ipw_VS_0_PBcfg.c \
../generate/src/Wdg_43_Instance1_VS_0_PBcfg.c \
../generate/src/Wdg_CfgExt.c \
../generate/src/Wdog_Ip_VS_0_PBcfg.c 

OBJS += \
./generate/src/Ewm_Ip_VS_0_PBcfg.o \
./generate/src/Ftm_Gpt_Ip_VS_0_PBcfg.o \
./generate/src/Gpt_Cfg.o \
./generate/src/Gpt_Ipw_VS_0_PBcfg.o \
./generate/src/Gpt_VS_0_PBcfg.o \
./generate/src/LPit_Gpt_Ip_VS_0_PBcfg.o \
./generate/src/Lptmr_Gpt_Ip_VS_0_PBcfg.o \
./generate/src/Mcu_Cfg.o \
./generate/src/Mcu_VS_0_PBcfg.o \
./generate/src/OsIf_Cfg.o \
./generate/src/Platform_Cfg.o \
./generate/src/Platform_Ipw_Cfg.o \
./generate/src/Power_Ip_Cfg.o \
./generate/src/Power_Ip_VS_0_PBcfg.o \
./generate/src/Ram_Ip_Cfg.o \
./generate/src/Ram_Ip_VS_0_PBcfg.o \
./generate/src/SRtc_Ip_VS_0_PBcfg.o \
./generate/src/Wdg_43_Instance0_Cfg.o \
./generate/src/Wdg_43_Instance0_Ipw_VS_0_PBcfg.o \
./generate/src/Wdg_43_Instance0_VS_0_PBcfg.o \
./generate/src/Wdg_43_Instance1_Cfg.o \
./generate/src/Wdg_43_Instance1_Ipw_VS_0_PBcfg.o \
./generate/src/Wdg_43_Instance1_VS_0_PBcfg.o \
./generate/src/Wdg_CfgExt.o \
./generate/src/Wdog_Ip_VS_0_PBcfg.o 

C_DEPS += \
./generate/src/Ewm_Ip_VS_0_PBcfg.d \
./generate/src/Ftm_Gpt_Ip_VS_0_PBcfg.d \
./generate/src/Gpt_Cfg.d \
./generate/src/Gpt_Ipw_VS_0_PBcfg.d \
./generate/src/Gpt_VS_0_PBcfg.d \
./generate/src/LPit_Gpt_Ip_VS_0_PBcfg.d \
./generate/src/Lptmr_Gpt_Ip_VS_0_PBcfg.d \
./generate/src/Mcu_Cfg.d \
./generate/src/Mcu_VS_0_PBcfg.d \
./generate/src/OsIf_Cfg.d \
./generate/src/Platform_Cfg.d \
./generate/src/Platform_Ipw_Cfg.d \
./generate/src/Power_Ip_Cfg.d \
./generate/src/Power_Ip_VS_0_PBcfg.d \
./generate/src/Ram_Ip_Cfg.d \
./generate/src/Ram_Ip_VS_0_PBcfg.d \
./generate/src/SRtc_Ip_VS_0_PBcfg.d \
./generate/src/Wdg_43_Instance0_Cfg.d \
./generate/src/Wdg_43_Instance0_Ipw_VS_0_PBcfg.d \
./generate/src/Wdg_43_Instance0_VS_0_PBcfg.d \
./generate/src/Wdg_43_Instance1_Cfg.d \
./generate/src/Wdg_43_Instance1_Ipw_VS_0_PBcfg.d \
./generate/src/Wdg_43_Instance1_VS_0_PBcfg.d \
./generate/src/Wdg_CfgExt.d \
./generate/src/Wdog_Ip_VS_0_PBcfg.d 


# Each subdirectory must supply rules for building sources it contributes
generate/src/%.o: ../generate/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@generate/src/Ewm_Ip_VS_0_PBcfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


