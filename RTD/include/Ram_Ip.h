/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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
*   @file       Ram_Ip.h
*   @version    1.0.0
*
*   @brief   RAM IP driver header file.
*   @details RAM IP driver header file.
*
*   @addtogroup RAM_DRIVER Ram Ip Driver
*   @{
*/


#ifndef RAM_IP_H
#define RAM_IP_H


#ifdef __cplusplus
extern "C"{
#endif




/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "StandardTypes.h"
#include "Ram_Ip_Types.h"
#include "Ram_Ip_Cfg.h"

#ifdef RAM_IP_DEV_ERROR_DETECT
#if (STD_ON == RAM_IP_DEV_ERROR_DETECT)
    #include "Devassert.h"
#endif /* (STD_ON == RAM_IP_DEV_ERROR_DETECT) */
#endif /* #ifdef RAM_IP_DEV_ERROR_DETECT */
/*==================================================================================================
                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RAM_IP_VENDOR_ID                     43
#define RAM_IP_AR_RELEASE_MAJOR_VERSION      4
#define RAM_IP_AR_RELEASE_MINOR_VERSION      4
#define RAM_IP_AR_RELEASE_REVISION_VERSION   0
#define RAM_IP_SW_MAJOR_VERSION              1
#define RAM_IP_SW_MINOR_VERSION              0
#define RAM_IP_SW_PATCH_VERSION              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Ram_Ip.h file and StandardTypes.h file are of the same Autosar version */
#if ((RAM_IP_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
     (RAM_IP_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Ram_Ip.h and StandardTypes.h are different"
#endif
#endif

/* Check if Ram_Ip.h file and Ram_Ip_Types.h file are of the same vendor */
#if (RAM_IP_VENDOR_ID != RAM_IP_TYPES_VENDOR_ID)
    #error "Ram_Ip.h and Ram_Ip_Types.h have different vendor ids"
#endif

/* Check if Ram_Ip.h file and Ram_Ip_Types.h file are of the same Autosar version */
#if ((RAM_IP_AR_RELEASE_MAJOR_VERSION != RAM_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (RAM_IP_AR_RELEASE_MINOR_VERSION != RAM_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (RAM_IP_AR_RELEASE_REVISION_VERSION != RAM_IP_TYPES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Ram_Ip.h and Ram_Ip_Types.h are different"
#endif

/* Check if Ram_Ip.h file and Ram_Ip_Types.h file are of the same Software version */
#if ((RAM_IP_SW_MAJOR_VERSION != RAM_IP_TYPES_SW_MAJOR_VERSION) || \
     (RAM_IP_SW_MINOR_VERSION != RAM_IP_TYPES_SW_MINOR_VERSION) || \
     (RAM_IP_SW_PATCH_VERSION != RAM_IP_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Ram_Ip.h and Ram_Ip_Types.h are different"
#endif

/* Check if Ram_Ip.h file and Ram_Ip_Cfg.h file are of the same vendor */
#if (RAM_IP_VENDOR_ID != RAM_IP_CFG_VENDOR_ID)
    #error "Ram_Ip.h and Ram_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Ram_Ip.h file and Ram_Ip_Cfg.h file are of the same Autosar version */
#if ((RAM_IP_AR_RELEASE_MAJOR_VERSION != RAM_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (RAM_IP_AR_RELEASE_MINOR_VERSION != RAM_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (RAM_IP_AR_RELEASE_REVISION_VERSION != RAM_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Ram_Ip.h and Ram_Ip_Cfg.h are different"
#endif

/* Check if Ram_Ip.h file and Ram_Ip_Cfg.h file are of the same Software version */
#if ((RAM_IP_SW_MAJOR_VERSION != RAM_IP_CFG_SW_MAJOR_VERSION) || \
     (RAM_IP_SW_MINOR_VERSION != RAM_IP_CFG_SW_MINOR_VERSION) || \
     (RAM_IP_SW_PATCH_VERSION != RAM_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Ram_Ip.h and Ram_Ip_Cfg.h are different"
#endif
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#ifdef RAM_IP_DEV_ERROR_DETECT
#if (STD_ON == RAM_IP_DEV_ERROR_DETECT)
/* Check if Ram_Ip.h file and Devassert.h file are of the same Autosar version */
#if ((RAM_IP_AR_RELEASE_MAJOR_VERSION    != DEVASSERT_AR_RELEASE_MAJOR_VERSION) || \
     (RAM_IP_AR_RELEASE_MINOR_VERSION    != DEVASSERT_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Ram_Ip.h and Devassert.h are different"
#endif
#endif /* (STD_ON == RAM_IP_DEV_ERROR_DETECT) */
#endif /* (RAM_IP_DEV_ERROR_DETECT) */
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
#ifdef RAM_IP_DEV_ERROR_DETECT
  #if (STD_ON == RAM_IP_DEV_ERROR_DETECT)
    #define RAM_DEV_ASSERT(x)      DevAssert(x)
  #else
    #define RAM_DEV_ASSERT(x)
  #endif
#else
    #define RAM_DEV_ASSERT(x)
#endif
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"
/*!
 * @brief Initializes RAM section
 *
 * This function initializes RAM section.
 *
 * @param[in] Ram_Ip_pRamConfigPtr  Ram section configuration.
 *
 * @return Ram_Ip_StatusType  Ram status
 */
Ram_Ip_StatusType Ram_Ip_InitRamSection(const Ram_Ip_RamConfigType * Ram_Ip_pRamConfigPtr);

#if (RAM_IP_GET_RAM_STATE_API == STD_ON)
/*!
 * @brief Returns RAM state
 *
 * This function returns RAM section.
 *
 * @return Ram_Ip_RamStateType  Ram state
 */
Ram_Ip_RamStateType Ram_Ip_GetRamState(void);
#endif

#if (RAM_IP_GET_RAM_STATE_API == STD_ON)
 /*!
 * @brief           Install report error callback.
 * This function installs a callback for reporting errors from Ram driver.
 *
 * @param[in]        reportErrorsCallback    Callback to be installed.
 *
 * @return           void
 */
void Ram_Ip_InstallNotificationsCallback(Ram_Ip_ReportErrorsCallbackType reportErrorsCallback);
#endif

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* RAM_IP_H */

/** @} */
