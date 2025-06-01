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

#ifndef WDOG_IP_CFG_DEFINES_H
#define WDOG_IP_CFG_DEFINES_H

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

#include "StandardTypes.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define WDOG_IP_CFG_DEFINES_VENDOR_ID                    43
#define WDOG_IP_CFG_DEFINES_MODULE_ID                    102
#define WDOG_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION     4
#define WDOG_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION     4
#define WDOG_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION  0
#define WDOG_IP_CFG_DEFINES_SW_MAJOR_VERSION             1
#define WDOG_IP_CFG_DEFINES_SW_MINOR_VERSION             0
#define WDOG_IP_CFG_DEFINES_SW_PATCH_VERSION             0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and StandardTypes header file are of the same Autosar version */
    #if ((WDOG_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION    != STD_AR_RELEASE_MAJOR_VERSION) || \
        (WDOG_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION     != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Wdog_Ip_Cfg_Defines.h and StandardTypes.h are different"
    #endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */
/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/**
* @brief  Compile switch to enable development error detection
*/
#define WDOG_IP_DEV_ERROR_DETECT (STD_OFF)

/**
* @brief  This constant specifies if the instance of the WDG is selected or not
*/
#define WDOG_IP_ENABLE (STD_ON)

/**
* @brief  Compile switch to allow/forbid disabling the Wdog during runtime
*/
#define WDOG_IP_DEINIT (STD_ON)

/**
* @brief  Define Timeout Method.
* @details  Define a certain timeout method from OsIf which will be used in the driver.
*/
#define WDOG_IP_TIMEOUT_METHOD     (OSIF_COUNTER_DUMMY)
/**
* @brief Define Timeout Value.
* @details Define a certain timeout value from OsIf which will be used in the driver.
*/
#define WDOG_IP_OSIF_TIMEOUT_VAL     (3000)
/**
* @brief  This variable will indicate if the ISR for WDOG instances is used
*/
#define WDOG_IP_ISR0_USED (STD_OFF)
/**
* @brief  This variable will indicate if the WDOG test mode is enabled
* Note: This feature is not available in the Wdg High Level Driver
*/
#define WDOG_IP_ENABLE_TEST_MODE (STD_OFF)


/**
* @brief  This variable will indicate RAM/ROM execution
*/
#define WDG_ROM (1U)

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

#endif /* WDOG_IP_CFG_DEFINES_H */

