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

#ifndef WDOG_IP_FEATUREDEFINES_H
#define WDOG_IP_FEATUREDEFINES_H

/**
*   @file
*
*   @addtogroup Wdg
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

#include "StandardTypes.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define WDOG_IP_FEATURE_DEFINES_VENDOR_ID                    43
#define WDOG_IP_FEATURE_DEFINES_MODULE_ID                    102
#define WDOG_IP_FEATURE_DEFINES_AR_RELEASE_MAJOR_VERSION     4
#define WDOG_IP_FEATURE_DEFINES_AR_RELEASE_MINOR_VERSION     4
#define WDOG_IP_FEATURE_DEFINES_AR_RELEASE_REVISION_VERSION  0
#define WDOG_IP_FEATURE_DEFINES_SW_MAJOR_VERSION             1
#define WDOG_IP_FEATURE_DEFINES_SW_MINOR_VERSION             0
#define WDOG_IP_FEATURE_DEFINES_SW_PATCH_VERSION             0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and StandardTypes header file are of the same Autosar version */
    #if ((WDOG_IP_FEATURE_DEFINES_AR_RELEASE_MAJOR_VERSION    != STD_AR_RELEASE_MAJOR_VERSION) || \
        (WDOG_IP_FEATURE_DEFINES_AR_RELEASE_MINOR_VERSION     != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Wdog_Ip_FeatureDefines.h and StandardTypes.h are different"
    #endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/* @brief The 32-bit value used for unlocking the WDOG. */
#define WDOG_IP_FEATURE_UNLOCK_VALUE                       (0xD928C520U)
/* @brief The 32-bit value used for resetting the WDOG counter. */
#define WDOG_IP_FEATURE_TRIGGER_VALUE                      (0xB480A602U)
/* @brief The reset value of the timeout register. */
#define WDOG_IP_FEATURE_TO_RESET_VALUE                     (0x400U)
/* @brief The value minimum of the timeout register. */
#define WDOG_IP_FEATURE_MINIMUM_TIMEOUT_VALUE              (0x0U)
/* @brief The reset value of the window register. */
#define WDOG_IP_FEATURE_WIN_RESET_VALUE                    (0x0U)
/* @brief The first 16-bit value used for unlocking the WDOG. */
#define WDOG_IP_FEATURE_UNLOCK16_FIRST_VALUE               (0xC520U)
/* @brief The second 16-bit value used for unlocking the WDOG. */
#define WDOG_IP_FEATURE_UNLOCK16_SECOND_VALUE              (0xD928U)
/* @brief The first 16-bit value used for resetting the WDOG counter. */
#define WDOG_IP_FEATURE_TRIGGER16_FIRST_VALUE              (0xA602U)
/* @brief The second 16-bit value used for resetting the WDOG counter. */
#define WDOG_IP_FEATURE_TRIGGER16_SECOND_VALUE             (0xB480U)
/* @brief Default reset value of the CS register. */
#define WDOG_IP_FEATURE_CS_RESET_VALUE                     (0x2520U)

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

#endif /* WDOG_IP_FEATUREDEFINES_H */
