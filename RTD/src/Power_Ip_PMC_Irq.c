/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
*   (c) Copyright 2020-2021 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/
/**
*   @file       Power_Ip_PMC_Irq.c
*   @version    1.0.0
*
*   @brief
*   @brief   POWER driver implementations.
*   @details POWER driver implementations.
*
*   @addtogroup POWER_DRIVER Power Ip Driver
*   @{
*/


#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcal.h"
#include "Power_Ip_PMC.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
=================================================================================================*/
#define POWER_IP_PMC_IRQ_VENDOR_ID_C                     43
#define POWER_IP_PMC_IRQ_AR_RELEASE_MAJOR_VERSION_C      4
#define POWER_IP_PMC_IRQ_AR_RELEASE_MINOR_VERSION_C      4
#define POWER_IP_PMC_IRQ_AR_RELEASE_REVISION_VERSION_C   0
#define POWER_IP_PMC_IRQ_SW_MAJOR_VERSION_C              1
#define POWER_IP_PMC_IRQ_SW_MINOR_VERSION_C              0
#define POWER_IP_PMC_IRQ_SW_PATCH_VERSION_C              0


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Mcal header file are of the same version */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((POWER_IP_PMC_IRQ_AR_RELEASE_MAJOR_VERSION_C != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (POWER_IP_PMC_IRQ_AR_RELEASE_MINOR_VERSION_C != MCAL_AR_RELEASE_MINOR_VERSION) \
        )
        #error "AutoSar Version Numbers of Power_Ip_PMC_Irq.c and Mcal.h are different"
    #endif
#endif

/* Check if current file and Power_Ip_PMC_Irq header file are of the same Autosar version */
#if (POWER_IP_PMC_IRQ_VENDOR_ID_C != POWER_IP_PMC_VENDOR_ID)
    #error "Power_Ip_PMC_Irq.c and Power_Ip_PMC.h have different vendor ids"
#endif
/* Check if current file and Power_Ip_PMC_Irq header file are of the same Autosar version */
#if ((POWER_IP_PMC_IRQ_AR_RELEASE_MAJOR_VERSION_C    != POWER_IP_PMC_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_PMC_IRQ_AR_RELEASE_MINOR_VERSION_C    != POWER_IP_PMC_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_PMC_IRQ_AR_RELEASE_REVISION_VERSION_C != POWER_IP_PMC_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip_PMC_Irq.c and Power_Ip_PMC.h are different"
#endif
/* Check if current file and Power_Ip_PMC_Irq header file are of the same Software version */
#if ((POWER_IP_PMC_IRQ_SW_MAJOR_VERSION_C != POWER_IP_PMC_SW_MAJOR_VERSION) || \
     (POWER_IP_PMC_IRQ_SW_MINOR_VERSION_C != POWER_IP_PMC_SW_MINOR_VERSION) || \
     (POWER_IP_PMC_IRQ_SW_PATCH_VERSION_C != POWER_IP_PMC_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip_PMC_Irq.c and Power_Ip_PMC.h are different"
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

#if (POWER_IP_VOLTAGE_ERROR_ISR_USED == STD_ON)
ISR(Power_Ip_PMC_LowVoltage_ISR);
#endif
#ifdef MCU_TEMPERATURE_ERROR_ISR_USED
#if (MCU_TEMPERATURE_ERROR_ISR_USED == STD_ON)
ISR(Power_Ip_PMC_TemperatureError_ISR);
#endif
#endif
/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#if (POWER_IP_VOLTAGE_ERROR_ISR_USED == STD_ON)
/**
* @brief       This function represents the ISR handler for PMC related events.
* @details     This interrupt is triggered if one of the enabled PMC's detect an out of range clock.
*
*
* @isr
*
*/
ISR(Power_Ip_PMC_LowVoltage_ISR)
{
    Power_Ip_PMC_VoltageErrorIsr();
    EXIT_INTERRUPT();
}
#endif /* (POWER_IP_VOLTAGE_ERROR_ISR_USED == STD_ON) */

#ifdef MCU_TEMPERATURE_ERROR_ISR_USED
#if (MCU_TEMPERATURE_ERROR_ISR_USED == STD_ON)
/**
* @brief       This function represents the ISR handler for PMC related events.
* @details     This interrupt is triggered if one of the enabled PMC's detect an out of range clock.
*
*
* @isr
*
*/
ISR(Power_Ip_PMC_TemperatureError_ISR)
{
    Power_Ip_PMC_TemperatureErrorIsr();
    EXIT_INTERRUPT();
}
#endif /* (MCU_TEMPERATURE_ERROR_ISR_USED == STD_ON) */
#endif

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
