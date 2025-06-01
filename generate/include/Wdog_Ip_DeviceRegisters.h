/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Wdog,Ewm
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

#ifndef WDOG_IP_DEVICE_REGISTERS_H
#define WDOG_IP_DEVICE_REGISTERS_H

/**
*   @file
*
*   @addtogroup Wdog_Ip
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Wdog_Ip_FeatureDefines.h"

#include "S32K144_WDOG.h"


/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define WDOG_IP_DEVICE_REGISTERS_VENDOR_ID                    43
#define WDOG_IP_DEVICE_REGISTERS_MODULE_ID                    102
#define WDOG_IP_DEVICE_REGISTERS_AR_RELEASE_MAJOR_VERSION     4
#define WDOG_IP_DEVICE_REGISTERS_AR_RELEASE_MINOR_VERSION     4
#define WDOG_IP_DEVICE_REGISTERS_AR_RELEASE_REVISION_VERSION  0
#define WDOG_IP_DEVICE_REGISTERS_SW_MAJOR_VERSION             1
#define WDOG_IP_DEVICE_REGISTERS_SW_MINOR_VERSION             0
#define WDOG_IP_DEVICE_REGISTERS_SW_PATCH_VERSION             0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and Wdog_Ip_Cfg_Defines configuration header file are of the same vendor */
#if (WDOG_IP_DEVICE_REGISTERS_VENDOR_ID != WDOG_IP_FEATURE_DEFINES_VENDOR_ID)
#error "Wdog_Ip_DeviceRegisters.h and Wdog_Ip_FeatureDefines.h have different vendor ids"
#endif

#if ((WDOG_IP_DEVICE_REGISTERS_AR_RELEASE_MAJOR_VERSION    != WDOG_IP_FEATURE_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
     (WDOG_IP_DEVICE_REGISTERS_AR_RELEASE_MINOR_VERSION    != WDOG_IP_FEATURE_DEFINES_AR_RELEASE_MINOR_VERSION) || \
     (WDOG_IP_DEVICE_REGISTERS_AR_RELEASE_REVISION_VERSION != WDOG_IP_FEATURE_DEFINES_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Wdog_Ip_DeviceRegisters.h and Wdog_Ip_FeatureDefines.h are different"
#endif

#if ((WDOG_IP_DEVICE_REGISTERS_SW_MAJOR_VERSION != WDOG_IP_FEATURE_DEFINES_SW_MAJOR_VERSION) || \
     (WDOG_IP_DEVICE_REGISTERS_SW_MINOR_VERSION != WDOG_IP_FEATURE_DEFINES_SW_MINOR_VERSION) || \
     (WDOG_IP_DEVICE_REGISTERS_SW_PATCH_VERSION != WDOG_IP_FEATURE_DEFINES_SW_PATCH_VERSION))
#error "Software Version Numbers of Wdog_Ip_DeviceRegisters.h and Wdog_Ip_FeatureDefines.h are different"
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* WDOG_IP_DEVICE_REGISTERS_H */

