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
 *   @file          LPit_Gpt_Ip_PBcfg.c
 *
 *   @addtogroup    lpit_ip LPit IPL
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
#include "LPit_Gpt_Ip_VS_0_PBcfg.h"
#include "Gpt_Irq.h"

/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/
#define LPIT_GPT_IP_VENDOR_ID_VS_0_PBCFG_C                    43
#define LPIT_GPT_IP_AR_RELEASE_MAJOR_VERSION_VS_0_PBCFG_C     4
#define LPIT_GPT_IP_AR_RELEASE_MINOR_VERSION_VS_0_PBCFG_C     4
#define LPIT_GPT_IP_AR_RELEASE_REVISION_VERSION_VS_0_PBCFG_C  0
#define LPIT_GPT_IP_SW_MAJOR_VERSION_VS_0_PBCFG_C             1
#define LPIT_GPT_IP_SW_MINOR_VERSION_VS_0_PBCFG_C             0
#define LPIT_GPT_IP_SW_PATCH_VERSION_VS_0_PBCFG_C             0
/*==================================================================================================
 *                                      FILE VERSION CHECKS
 *================================================================================================*/
#if (LPIT_GPT_IP_VENDOR_ID_VS_0_PBCFG_C != LPIT_GPT_IP_VENDOR_ID_VS_0_PBCFG_H)
    #error "LPit_Gpt_Ip_VS_0_PBcfg.c and LPit_Gpt_Ip_Types.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((LPIT_GPT_IP_AR_RELEASE_MAJOR_VERSION_VS_0_PBCFG_C != LPIT_GPT_IP_AR_RELEASE_MAJOR_VERSION_VS_0_PBCFG_H) || \
     (LPIT_GPT_IP_AR_RELEASE_MINOR_VERSION_VS_0_PBCFG_C != LPIT_GPT_IP_AR_RELEASE_MINOR_VERSION_VS_0_PBCFG_H) || \
     (LPIT_GPT_IP_AR_RELEASE_REVISION_VERSION_VS_0_PBCFG_C != LPIT_GPT_IP_AR_RELEASE_REVISION_VERSION_VS_0_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of LPit_Gpt_Ip_VS_0_PBcfg.c and LPit_Gpt_Ip_Types.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((LPIT_GPT_IP_SW_MAJOR_VERSION_VS_0_PBCFG_C != LPIT_GPT_IP_SW_MAJOR_VERSION_VS_0_PBCFG_H) || \
     (LPIT_GPT_IP_SW_MINOR_VERSION_VS_0_PBCFG_C != LPIT_GPT_IP_SW_MINOR_VERSION_VS_0_PBCFG_H) || \
     (LPIT_GPT_IP_SW_PATCH_VERSION_VS_0_PBCFG_C != LPIT_GPT_IP_SW_PATCH_VERSION_VS_0_PBCFG_H) \
    )
    #error "Software Version Numbers of LPit_Gpt_Ip_VS_0_PBcfg.c and LPit_Gpt_Ip_Types.h are different"
#endif
#if (LPIT_GPT_IP_VENDOR_ID_VS_0_PBCFG_C != GPT_IRQ_VENDOR_ID)
    #error "LPit_Gpt_Ip_VS_0_PBcfg.c and Gpt_Irq.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((LPIT_GPT_IP_AR_RELEASE_MAJOR_VERSION_VS_0_PBCFG_C != GPT_IRQ_AR_RELEASE_MAJOR_VERSION) || \
     (LPIT_GPT_IP_AR_RELEASE_MINOR_VERSION_VS_0_PBCFG_C != GPT_IRQ_AR_RELEASE_MINOR_VERSION) || \
     (LPIT_GPT_IP_AR_RELEASE_REVISION_VERSION_VS_0_PBCFG_C != GPT_IRQ_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of LPit_Gpt_Ip_VS_0_PBcfg.c and Gpt_Irq.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((LPIT_GPT_IP_SW_MAJOR_VERSION_VS_0_PBCFG_C != GPT_IRQ_SW_MAJOR_VERSION) || \
     (LPIT_GPT_IP_SW_MINOR_VERSION_VS_0_PBCFG_C != GPT_IRQ_SW_MINOR_VERSION) || \
     (LPIT_GPT_IP_SW_PATCH_VERSION_VS_0_PBCFG_C != GPT_IRQ_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of LPit_Gpt_Ip_VS_0_PBcfg.c and Gpt_Irq.h are different"
#endif
/*================================================================================================*/

/*==================================================================================================
 *                                       GLOBAL VARIABLES
 *================================================================================================*/
/*==================================================================================================
 *                                       GLOBAL CONSTANTS
 *================================================================================================*/

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 *================================================================================================*/
#define GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"


const Lpit_Gpt_Ip_InstanceConfigType LPIT_0_InitConfig_PB_VS_0 =
{
    /** @brief LPIT Doze Mode */
    (boolean)(FALSE), /* enable/disable Doze mode */
    /** @brief LPIT Debug Mode */
    (boolean)(FALSE) /* enable/disable Freeze Bit */
}; 

const Lpit_Gpt_Ip_ChannelConfigType LPIT_0_ChannelConfig_PB_VS_0[1U] =
{
    /**@brief LPIT_0_CH_0 */ 
    {
        /** @brief LPIT Channel Id */
        0U,
        /** @brief LPIT callback name */
        &Gpt_ProcessCommonInterrupt,
        /** @brief LPIT callbackparam  */
        (uint8)0U,
 #if (LPIT_GPT_IP_ENABLE_EXT_TRIGGERS == STD_ON)
    /** @brief LPIT External/Internal Trigger Configuration */
      (uint32)0U | \
      (uint32)((uint32)1U << LPIT_TMR_TCTRL_TRG_SRC_SHIFT) | \
      (uint32)((uint32)0U << LPIT_TMR_TCTRL_TROT_SHIFT) | \
      (uint32)((uint32)0U << LPIT_TMR_TCTRL_TSOI_SHIFT) | \
      (uint32)((uint32)0U  << LPIT_TMR_TCTRL_TSOT_SHIFT)
 #endif
    }
};
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
#endif /* LPIT_GPT_IP_PBCFG_C */

/** @} */

