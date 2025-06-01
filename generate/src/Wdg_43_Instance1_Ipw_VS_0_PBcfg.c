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


/**
* @file
*
* @addtogroup  Wdg
* @{
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

#include "Wdg_43_Instance1_Ipw_VS_0_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define WDG_VENDOR_ID_VS_0_PBCFG_C                         43
#define WDG_AR_RELEASE_MAJOR_VERSION_VS_0_PBCFG_C          4
#define WDG_AR_RELEASE_MINOR_VERSION_VS_0_PBCFG_C          4
#define WDG_AR_RELEASE_REVISION_VERSION_VS_0_PBCFG_C       0
#define WDG_SW_MAJOR_VERSION_VS_0_PBCFG_C                  1
#define WDG_SW_MINOR_VERSION_VS_0_PBCFG_C                  0
#define WDG_SW_PATCH_VERSION_VS_0_PBCFG_C                  0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and WDG configuration header file are of the same vendor */
#if (WDG_VENDOR_ID_VS_0_PBCFG_C != WDG_VENDOR_ID)
#error "Wdg_43_Instance1_Ipw_VS_0_PBcfg.c and Wdg_43_Instance1_Ipw_VS_0_PBcfg.h have different vendor ids"
#endif

/* Check if current file and Wdg_Cfg header file are of the same Autosar version */
#if ((WDG_AR_RELEASE_MAJOR_VERSION_VS_0_PBCFG_C     != WDG_AR_RELEASE_MAJOR_VERSION) || \
     (WDG_AR_RELEASE_MINOR_VERSION_VS_0_PBCFG_C     != WDG_AR_RELEASE_MINOR_VERSION) || \
     (WDG_AR_RELEASE_REVISION_VERSION_VS_0_PBCFG_C  != WDG_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Wdg_43_Instance1_Ipw_VS_0_PBcfg.c and Wdg_43_Instance1_Ipw_VS_0_PBcfg.h are different"
#endif

/* Check if current file and Wdg_Cfg header file are of the same software version */
#if ((WDG_SW_MAJOR_VERSION_VS_0_PBCFG_C != WDG_SW_MAJOR_VERSION) || \
     (WDG_SW_MINOR_VERSION_VS_0_PBCFG_C != WDG_SW_MINOR_VERSION) || \
     (WDG_SW_PATCH_VERSION_VS_0_PBCFG_C != WDG_SW_PATCH_VERSION))
#error "Software Version Numbers of Wdg_43_Instance1_Ipw_VS_0_PBcfg.c and Wdg_43_Instance1_Ipw_VS_0_PBcfg.h are different"
#endif


/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                     GLOBAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

#define WDG_START_SEC_CONFIG_DATA_UNSPECIFIED

#include "Wdg_MemMap.h"

/*Structures for Instance 1 */
const Wdg_Ipw_ConfigType Wdg_Ipw_Settings_1_VS_0=
{
    (Wdg_Ipw_IpType) WDG_IPW_EWM_IP
#if(WDOG_IP_USED == STD_ON)
    ,NULL_PTR
#endif /*(WDOG_IP_USED == STD_ON)*/
    ,&Ewm_Ip_Settings_VS_0
};

#define WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED

#include "Wdg_MemMap.h"

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
    *                                      LOCAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

