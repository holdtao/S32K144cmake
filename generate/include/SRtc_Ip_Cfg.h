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


#ifndef SRTC_IP_CFG_H
#define SRTC_IP_CFG_H

/**
*   @file       SRtc_Ip_Cfg.h
*
*   @addtogroup srtc_ip Rtc IPL
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
#include "SRtc_Ip_VS_0_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SRTC_IP_VENDOR_ID_CFG                    43
#define SRTC_IP_AR_RELEASE_MAJOR_VERSION_CFG     4
#define SRTC_IP_AR_RELEASE_MINOR_VERSION_CFG     4
#define SRTC_IP_AR_RELEASE_REVISION_VERSION_CFG  0
#define SRTC_IP_SW_MAJOR_VERSION_CFG             1
#define SRTC_IP_SW_MINOR_VERSION_CFG             0
#define SRTC_IP_SW_PATCH_VERSION_CFG             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#if (SRTC_IP_VENDOR_ID_CFG != SRTC_IP_VENDOR_ID_VS_0_PBCFG_H)
    #error "SRtc_Ip_Cfg.h and SRtc_Ip_VS_0_PBcfg.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((SRTC_IP_AR_RELEASE_MAJOR_VERSION_CFG != SRTC_IP_AR_RELEASE_MAJOR_VERSION_VS_0_PBCFG_H) || \
     (SRTC_IP_AR_RELEASE_MINOR_VERSION_CFG != SRTC_IP_AR_RELEASE_MINOR_VERSION_VS_0_PBCFG_H) || \
     (SRTC_IP_AR_RELEASE_REVISION_VERSION_CFG != SRTC_IP_AR_RELEASE_REVISION_VERSION_VS_0_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of SRtc_Ip_Cfg.h and SRtc_Ip_VS_0_PBcfg.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((SRTC_IP_SW_MAJOR_VERSION_CFG != SRTC_IP_SW_MAJOR_VERSION_VS_0_PBCFG_H) || \
     (SRTC_IP_SW_MINOR_VERSION_CFG != SRTC_IP_SW_MINOR_VERSION_VS_0_PBCFG_H) || \
     (SRTC_IP_SW_PATCH_VERSION_CFG != SRTC_IP_SW_PATCH_VERSION_VS_0_PBCFG_H) \
    )
    #error "Software Version Numbers of SRtc_Ip_Cfg.h and SRtc_Ip_VS_0_PBcfg.h are different"
#endif

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief Dev error detect switch
*/
#define SRTC_IP_DEV_ERROR_DETECT     (STD_OFF)
/*================================================================================================*/
/**
* @brief    RTC_IP_ENABLE_USER_MODE_SUPPORT switch
* @details  Enable/disable support usermode. If this parameter has been configured to TRUE the driver code can be executed from both supervisor and user mode.
*/
#define SRTC_IP_ENABLE_USER_MODE_SUPPORT     (STD_OFF)
/*================================================================================================*/
/**
* @brief    RTC_IP_STANDBY_WAKEUP_SUPPORT
* @details  StandBy Mode is not supported in this release
*/
#define SRTC_IP_STANDBY_WAKEUP_SUPPORT     (STD_OFF)

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
#endif  /* RTC_IP_CFG_H */

