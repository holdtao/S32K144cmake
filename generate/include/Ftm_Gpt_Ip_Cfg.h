/*==================================================================================================
* Project :             RTD AUTOSAR 4.4
* Platform :            CORTEXM
* Peripheral :          Ftm_Srtc_Lptmr_LPit
* Dependencies :        none
*
* Autosar Version :     4.4.0
* Autosar Revision :    ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version :          1.0.0
* Build Version :       S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
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


#ifndef FTM_GPT_IP_CFG_H
#define FTM_GPT_IP_CFG_H
/**
*   @file           Ftm_Gpt_Ip_Cfg.h
*
*   @addtogroup     Ftm_Gpt_Ip Ftm_Gpt_Ip IPL
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
#include "Ftm_Gpt_Ip_VS_0_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_GPT_IP_VENDOR_ID_CFG                        43
#define FTM_GPT_IP_AR_RELEASE_MAJOR_VERSION_CFG         4
#define FTM_GPT_IP_AR_RELEASE_MINOR_VERSION_CFG         4
#define FTM_GPT_IP_AR_RELEASE_REVISION_VERSION_CFG      0
#define FTM_GPT_IP_SW_MAJOR_VERSION_CFG                 1
#define FTM_GPT_IP_SW_MINOR_VERSION_CFG                 0
#define FTM_GPT_IP_SW_PATCH_VERSION_CFG                 0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#if (FTM_GPT_IP_VENDOR_ID_CFG != FTM_GPT_IP_VENDOR_ID_VS_0_PBCFG_H)
    #error "Ftm_Gpt_Ip_Cfg.h and Ftm_Gpt_Ip_VS_0_PBcfg.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((FTM_GPT_IP_AR_RELEASE_MAJOR_VERSION_CFG != FTM_GPT_IP_AR_RELEASE_MAJOR_VERSION_VS_0_PBCFG_H) || \
     (FTM_GPT_IP_AR_RELEASE_MINOR_VERSION_CFG != FTM_GPT_IP_AR_RELEASE_MINOR_VERSION_VS_0_PBCFG_H) || \
     (FTM_GPT_IP_AR_RELEASE_REVISION_VERSION_CFG != FTM_GPT_IP_AR_RELEASE_REVISION_VERSION_VS_0_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Ftm_Gpt_Ip_Cfg.h and Ftm_Gpt_Ip_VS_0_PBcfg.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((FTM_GPT_IP_SW_MAJOR_VERSION_CFG != FTM_GPT_IP_SW_MAJOR_VERSION_VS_0_PBCFG_H) || \
     (FTM_GPT_IP_SW_MINOR_VERSION_CFG != FTM_GPT_IP_SW_MINOR_VERSION_VS_0_PBCFG_H) || \
     (FTM_GPT_IP_SW_PATCH_VERSION_CFG != FTM_GPT_IP_SW_PATCH_VERSION_VS_0_PBCFG_H) \
    )
    #error "Software Version Numbers of Ftm_Gpt_Ip_Cfg.h and Ftm_Gpt_Ip_VS_0_PBcfg.h are different"
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief   Dev error detect switch
* @details Enable/disable GptDevErrorDetect
*/
#define FTM_GPT_IP_DEV_ERROR_DETECT     (STD_OFF)

/*================================================================================================*/
/**
* @brief    FTM_GPT_IP_CHANGE_NEXT_TIMEOUT_VALUE switch
* @details  Enable/disable support for changing timeout value during timer running
*/
#define FTM_GPT_IP_CHANGE_NEXT_TIMEOUT_VALUE     (STD_OFF)

/*================================================================================================*/
/**
* @brief    FTM_GPT_IP_PREDEFTIMER_FUNCTIONALITY_API switch
* @details  Enable/disable GPT_PREDEFTIMER_FUNCTIONALITY_API.
*/
#define FTM_GPT_IP_PREDEFTIMER_FUNCTIONALITY_API     (STD_OFF)
/*================================================================================================*/

/**
* @brief    FTM_GPT_IP_ENABLE_USER_MODE_SUPPORT switch
* @details  Enable/disable support usermode.If this parameter has been configured to TRUE the GPT driver code can be executed from both supervisor and user mode.
*/
#define FTM_GPT_IP_ENABLE_USER_MODE_SUPPORT     (STD_OFF)

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

#endif  /* FTM_GPT_IP_CFG_H */

