/*==================================================================================================
* Project : RTD AUTOSAR 4.4
* Platform : CORTEXM
* Peripheral : Ftm_Srtc_Lptmr_LPit
* Dependencies : none
*
* Autosar Version : 4.4.0
* Autosar Revision : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version : 1.0.0
* Build Version : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
* (c) Copyright 2020-2021 NXP Semiconductors
* All Rights Reserved.
*
* NXP Confidential. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/


#ifndef LPTMR_GPT_IP_CFG_DEFINES_H
#define LPTMR_GPT_IP_CFG_DEFINES_H

/**
*   @file       LPTMR_GPT_IP_Cfg_Defines.h
*
*   @addtogroup LPTMR_GPT_IP Lptmr IPL
*
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "StandardTypes.h"
#include "S32K144_LPTMR.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LPTMR_GPT_IP_DEFINES_VENDOR_ID_CFG                    43
#define LPTMR_GPT_IP_DEFINES_AR_RELEASE_MAJOR_VERSION_CFG     4
#define LPTMR_GPT_IP_DEFINES_AR_RELEASE_MINOR_VERSION_CFG     4
#define LPTMR_GPT_IP_DEFINES_AR_RELEASE_REVISION_VERSION_CFG  0
#define LPTMR_GPT_IP_DEFINES_SW_MAJOR_VERSION_CFG             1
#define LPTMR_GPT_IP_DEFINES_SW_MINOR_VERSION_CFG             0
#define LPTMR_GPT_IP_DEFINES_SW_PATCH_VERSION_CFG             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and StandardTypes.h file are of the same Autosar version */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((LPTMR_GPT_IP_DEFINES_AR_RELEASE_MAJOR_VERSION_CFG != STD_AR_RELEASE_MAJOR_VERSION) || \
         (LPTMR_GPT_IP_DEFINES_AR_RELEASE_MINOR_VERSION_CFG != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Lptmr_Gpt_Ip_Cfg_Defines.h and StandardTypes.h are different"
    #endif
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief These defines indicate that at least one channel from each module is used in all configurations.
*/
#define LPTMR_GPT_IP_USED (STD_OFF) 
/**
* @brief    LPTMR_GPT_IP_SET_CLOCK_MODE switch
* @details  Enable/disable API for Dual Mode support.
*/
#define LPTMR_GPT_IP_SET_CLOCK_MODE     (STD_OFF)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
#endif  /* LPTMR_GPT_IP_CFG_DEFINES_H */

