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
/**
 *   @file       SRtc_Ip_PBcfg.c
 *
 *   @addtogroup srtc_ip SRtc IPL
 *
 *   @{
 */

/*==================================================================================================*/
#ifdef __cplusplus
extern "C"{
#endif

 /*==================================================================================================
 *                                         INCLUDE FILES
 * 1) system and project includes
 * 2) needed interfaces from external units
 * 3) internal and external interfaces from this unit
 *================================================================================================*/
#include "SRtc_Ip_VS_0_PBcfg.h"
#include "Gpt_Irq.h"
/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/
#define SRTC_IP_VENDOR_ID_VS_0_PBCFG_C                    43
#define SRTC_IP_AR_RELEASE_MAJOR_VERSION_VS_0_PBCFG_C     4
#define SRTC_IP_AR_RELEASE_MINOR_VERSION_VS_0_PBCFG_C     4
#define SRTC_IP_AR_RELEASE_REVISION_VERSION_VS_0_PBCFG_C  0
#define SRTC_IP_SW_MAJOR_VERSION_VS_0_PBCFG_C             1
#define SRTC_IP_SW_MINOR_VERSION_VS_0_PBCFG_C             0
#define SRTC_IP_SW_PATCH_VERSION_VS_0_PBCFG_C             0
/*==================================================================================================
 *                                      FILE VERSION CHECKS
 *================================================================================================*/
#if (SRTC_IP_VENDOR_ID_VS_0_PBCFG_C != SRTC_IP_VENDOR_ID_VS_0_PBCFG_H)
    #error "SRtc_Ip_VS_0_PBcfg.c and SRtc_Ip_VS_0_PBcfg.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((SRTC_IP_AR_RELEASE_MAJOR_VERSION_VS_0_PBCFG_C != SRTC_IP_AR_RELEASE_MAJOR_VERSION_VS_0_PBCFG_H) || \
     (SRTC_IP_AR_RELEASE_MINOR_VERSION_VS_0_PBCFG_C != SRTC_IP_AR_RELEASE_MINOR_VERSION_VS_0_PBCFG_H) || \
     (SRTC_IP_AR_RELEASE_REVISION_VERSION_VS_0_PBCFG_C != SRTC_IP_AR_RELEASE_REVISION_VERSION_VS_0_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of SRtc_Ip_VS_0_PBcfg.c and SRtc_Ip_VS_0_PBcfg.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((SRTC_IP_SW_MAJOR_VERSION_VS_0_PBCFG_C != SRTC_IP_SW_MAJOR_VERSION_VS_0_PBCFG_H) || \
     (SRTC_IP_SW_MINOR_VERSION_VS_0_PBCFG_C != SRTC_IP_SW_MINOR_VERSION_VS_0_PBCFG_H) || \
     (SRTC_IP_SW_PATCH_VERSION_VS_0_PBCFG_C != SRTC_IP_SW_PATCH_VERSION_VS_0_PBCFG_H) \
    )
    #error "Software Version Numbers of SRtc_Ip_VS_0_PBcfg.c and SRtc_Ip_VS_0_PBcfg.h are different"
#endif
#if (SRTC_IP_VENDOR_ID_VS_0_PBCFG_C != GPT_IRQ_VENDOR_ID)
    #error "SRtc_Ip_VS_0_PBcfg.c and Gpt_Irq.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((SRTC_IP_AR_RELEASE_MAJOR_VERSION_VS_0_PBCFG_C != GPT_IRQ_AR_RELEASE_MAJOR_VERSION) || \
     (SRTC_IP_AR_RELEASE_MINOR_VERSION_VS_0_PBCFG_C != GPT_IRQ_AR_RELEASE_MINOR_VERSION) || \
     (SRTC_IP_AR_RELEASE_REVISION_VERSION_VS_0_PBCFG_C != GPT_IRQ_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of SRtc_Ip_VS_0_PBcfg.c and Gpt_Irq.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((SRTC_IP_SW_MAJOR_VERSION_VS_0_PBCFG_C != GPT_IRQ_SW_MAJOR_VERSION) || \
     (SRTC_IP_SW_MINOR_VERSION_VS_0_PBCFG_C != GPT_IRQ_SW_MINOR_VERSION) || \
     (SRTC_IP_SW_PATCH_VERSION_VS_0_PBCFG_C != GPT_IRQ_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of SRtc_Ip_VS_0_PBcfg.c and Gpt_Irq.h are different"
#endif
/*================================================================================================*/

/*==================================================================================================
 *                                       GLOBAL VARIABLES
 *================================================================================================*/
#define GPT_START_SEC_CODE
#include "Gpt_MemMap.h"
#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

/*==================================================================================================
 *                                       GLOBAL CONSTANTS
 *================================================================================================*/

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 *================================================================================================*/
#define GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h" 

#define GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"

/*==================================================================================================
 *                                       LOCAL VARIABLES
 *================================================================================================*/

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 *================================================================================================*/

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 *================================================================================================*/

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 *================================================================================================*/

#ifdef __cplusplus
}
#endif /*SRTC_IP_PBCFG_C*/
/** @} */
