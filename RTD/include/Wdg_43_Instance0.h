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

#ifndef Wdg_43_Instance0_H
#define Wdg_43_Instance0_H

/**
*   @file
*
*   @addtogroup  Wdg
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
#include "Wdg_ChannelTypes.h"
#include "Mcal.h"
#include "Wdg_Cfg.h"

#ifdef WDG_INSTANCE0
#if (WDG_INSTANCE0 == STD_ON)
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define WDG_43_INSTANCE0_VENDOR_ID                    43
#define WDG_43_INSTANCE0_MODULE_ID                    102
#define WDG_43_INSTANCE0_AR_RELEASE_MAJOR_VERSION     4
#define WDG_43_INSTANCE0_AR_RELEASE_MINOR_VERSION     4
#define WDG_43_INSTANCE0_AR_RELEASE_REVISION_VERSION 0
#define WDG_43_INSTANCE0_SW_MAJOR_VERSION                         1
#define WDG_43_INSTANCE0_SW_MINOR_VERSION                         0
#define WDG_43_INSTANCE0_SW_PATCH_VERSION                         0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and WDG configuration header file are of the same vendor */
#if (WDG_43_INSTANCE0_VENDOR_ID != WDG_VENDOR_ID_CFG)
    #error "Wdg.h and Wdg_Cfg.h have different vendor ids"
#endif

/* Check if current file and Wdg_Cfg header file are of the same Autosar version */
#if ((WDG_43_INSTANCE0_AR_RELEASE_MAJOR_VERSION    != WDG_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (WDG_43_INSTANCE0_AR_RELEASE_MINOR_VERSION    != WDG_AR_RELEASE_MINOR_VERSION_CFG) || \
     (WDG_43_INSTANCE0_AR_RELEASE_REVISION_VERSION != WDG_AR_RELEASE_REVISION_VERSION_CFG))
#error "AutoSar Version Numbers of Wdg.h and Wdg_Cfg.h are different"
#endif

/* Check if current file and Wdg_Cfg header file are of the same software version */
#if ((WDG_43_INSTANCE0_SW_MAJOR_VERSION != WDG_SW_MAJOR_VERSION_CFG) || \
     (WDG_43_INSTANCE0_SW_MINOR_VERSION != WDG_SW_MINOR_VERSION_CFG) || \
     (WDG_43_INSTANCE0_SW_PATCH_VERSION != WDG_SW_PATCH_VERSION_CFG))
#error "Software Version Numbers of Wdg.h and Wdg_Cfg.h are different"
#endif

/* Check if current file and Wdg_ChannelTypes header file are of the same vendor */
#if (WDG_43_INSTANCE0_VENDOR_ID != WDG_CHANNEL_TYPES_VENDOR_ID)
    #error "Wdg.h and Wdg_ChannelTypes.h have different vendor ids"
#endif

#if ((WDG_43_INSTANCE0_AR_RELEASE_MAJOR_VERSION    != WDG_CHANNEL_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (WDG_43_INSTANCE0_AR_RELEASE_MINOR_VERSION    != WDG_CHANNEL_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (WDG_43_INSTANCE0_AR_RELEASE_REVISION_VERSION != WDG_CHANNEL_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Wdg.h and Wdg_ChannelTypes.h are different"
#endif

/* Check if current file and Wdg_Cfg header file are of the same software version */
#if ((WDG_43_INSTANCE0_SW_MAJOR_VERSION != WDG_CHANNEL_TYPES_SW_MAJOR_VERSION) || \
     (WDG_43_INSTANCE0_SW_MINOR_VERSION != WDG_CHANNEL_TYPES_SW_MINOR_VERSION) || \
     (WDG_43_INSTANCE0_SW_PATCH_VERSION != WDG_CHANNEL_TYPES_SW_PATCH_VERSION))
#error "Software Version Numbers of Wdg.h and Wdg_ChannelTypes.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Mcal header file are of the same version */
    #if ((WDG_43_INSTANCE0_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
        (WDG_43_INSTANCE0_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Wdg.h and Mcal.h are different"
    #endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
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
#define WDG_START_SEC_CONFIG_DATA_UNSPECIFIED

#include "Wdg_MemMap.h"

WDG_43_INSTANCE0_CONFIG_EXT

#define WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Wdg_MemMap.h"
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef WDG_ROM
    #if (WDG_ROM == 1U)
        #define WDG_START_SEC_CODE
    #endif
#else
    #if (WDG_RAM == 0U)
        #define WDG_START_SEC_RAMCODE
    #endif
#endif

#include "Wdg_MemMap.h"


/**
* @brief   This function initializes the WDG module.
* @details The @p Wdg_43_Instance0_Init function shall initialize the Wdg module and the
*          watchdog hardware, i.e. it shall set the default watchdog mode and
*          timeout period as provided in the configuration set.
*
* @param[in] ConfigPtr     Pointer to configuration set.
*
* 
*
* @api
*/
void Wdg_43_Instance0_Init(const Wdg_ConfigType *ConfigPtr);


/**
* @brief   Switches the watchdog into the mode Mode.
* @details By choosing one of a limited number of statically configured
*          settings (e.g. toggle or window watchdog, different timeout periods)
*          the Wdg module and the watchdog hardware can be switched between the
*          following three different watchdog modes using the @p  Wdg_43_Instance0_SetMode
*          function:<br>
*          - WDGIF_OFF_MODE,
*          - WDGIF_SLOW_MODE,
*          - WDGIF_FAST_MODE.
*          .
*
* @param[in] Mode      One of the following statically configured modes:<br>
*                      -# WDGIF_OFF_MODE,
*                      -# WDGIF_SLOW_MODE,
*                      -# WDGIF_FAST_MODE.
*                      .
*
* @return              Std_ReturnType.
* @retval  E_OK        Mode switch executed completely and successfully.
* @retval  E_NOT_OK    The mode switch encountered errors.
*
* 
*
* @api
*/
Std_ReturnType Wdg_43_Instance0_SetMode(WdgIf_ModeType Mode);

#if (WDG_DIRECT_SERVICE == STD_OFF)
/**
 * @brief   Reset the watchdog timeout counter according to the timeout value passed.
 * @details
 *
 * @param[in] timeout   Timeout value (milliseconds) for setting the trigger counter.
 *   
 *
 * @api
 */
void Wdg_43_Instance0_SetTriggerCondition(uint16 timeout);
#endif

#if (WDG_DIRECT_SERVICE_INSTANCE0 == STD_ON)
    /**
    * @brief   Service the Watchdog directly without using an external trigger.
    * @details
    *
    * @param
    *
    * 
    *
    * @api
    */
    void Wdg_43_Instance0_Service(void);
#endif

#if (WDG_43_INSTANCE0_VERSION_INFO_API == STD_ON)
/**
* @brief   Returns the version information of the module.
* @details The Wdg_43_Instance0_ChannelGetVersionInfo function shall return the version
*          information of this module. The version information includes:
*          - Module Id,
*          - Vendor Id,
*          - Vendor specific version numbers.
*          .
*
* @pre    This function is only required if the WDG_VERSION_INFO_API has to be
*         equal STD_ON.
*
* @param[in,out] versioninfo   Pointer to where to store the version
*                              information of this module.
*
* @api
*
* @implements     Wdg_InstanceNo_GetVersionInfo_Activity
*
*/
void Wdg_43_Instance0_GetVersionInfo(Std_VersionInfoType *versioninfo);

#endif /* WDG_VERSION_INFO_API == STD_ON */

#ifdef WDG_ROM
    #if (WDG_ROM == 1U)
        #define WDG_STOP_SEC_CODE
    #endif
#else
    #if (WDG_RAM == 0U)
        #define WDG_STOP_SEC_RAMCODE
    #endif
#endif

#include "Wdg_MemMap.h"


#endif /*#if (WDG_INSTANCE0 == STD_ON)*/
#endif
#ifdef __cplusplus
}
#endif

/** @} */

#endif /* Wdg_43_Instance0_H*/
