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
*   @file       Power_Ip_VS_0_PBcfg.h
*   @version    1.0.0
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup POWER_DRIVER_CONFIGURATION Power Ip Driver
*   @{
*/


#ifndef POWER_IP_PBCFG_H
#define POWER_IP_PBCFG_H


#ifdef __cplusplus
extern "C"{
#endif





/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Power_Ip_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_PBCFG_VENDOR_ID                      43
#define POWER_IP_PBCFG_AR_RELEASE_MAJOR_VERSION       4
#define POWER_IP_PBCFG_AR_RELEASE_MINOR_VERSION       4
#define POWER_IP_PBCFG_AR_RELEASE_REVISION_VERSION    0
#define POWER_IP_PBCFG_SW_MAJOR_VERSION               1
#define POWER_IP_PBCFG_SW_MINOR_VERSION               0
#define POWER_IP_PBCFG_SW_PATCH_VERSION               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and Power_Ip_Types.h file are of the same vendor */
#if (POWER_IP_PBCFG_VENDOR_ID != POWER_IP_TYPES_VENDOR_ID)
    #error "Power_Ip_PBcfg.h and Power_Ip_Types.h have different vendor ids"
#endif

/* Check if header file and Power_Ip_Types.h file are of the same Autosar version */
#if ((POWER_IP_PBCFG_AR_RELEASE_MAJOR_VERSION != POWER_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_PBCFG_AR_RELEASE_MINOR_VERSION != POWER_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_PBCFG_AR_RELEASE_REVISION_VERSION != POWER_IP_TYPES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip_PBcfg.h and Power_Ip_Types.h are different"
#endif

/* Check if header file and Power_Ip_Types.h file are of the same Software version */
#if ((POWER_IP_PBCFG_SW_MAJOR_VERSION != POWER_IP_TYPES_SW_MAJOR_VERSION) || \
     (POWER_IP_PBCFG_SW_MINOR_VERSION != POWER_IP_TYPES_SW_MINOR_VERSION) || \
     (POWER_IP_PBCFG_SW_PATCH_VERSION != POWER_IP_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip_PBcfg.h and Power_Ip_Types.h are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/



/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED


#include "Mcu_MemMap.h"


extern const Power_Ip_ModeConfigType Power_Ip_aModeConfigPB[];
extern const Power_Ip_HwIPsConfigType Power_Ip_HwIPsConfigPB;

#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED


#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif


#endif /* POWER_IP_PBCFG_H */

/** @} */
