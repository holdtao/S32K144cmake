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
*   @file       Ram_Ip_Types.h
*   @version    1.0.0
*
*   @brief   RAM IP type header file.
*   @details RAM IP type header file.
*
*   @addtogroup RAM_DRIVER Ram Ip Driver
*   @{
*/


#ifndef RAM_IP_TYPES_H
#define RAM_IP_TYPES_H


#ifdef __cplusplus
extern "C"{
#endif


#include "StandardTypes.h"
#include "Ram_Ip_Cfg_Defines.h"




/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RAM_IP_TYPES_VENDOR_ID                     43
#define RAM_IP_TYPES_AR_RELEASE_MAJOR_VERSION      4
#define RAM_IP_TYPES_AR_RELEASE_MINOR_VERSION      4
#define RAM_IP_TYPES_AR_RELEASE_REVISION_VERSION   0
#define RAM_IP_TYPES_SW_MAJOR_VERSION              1
#define RAM_IP_TYPES_SW_MINOR_VERSION              0
#define RAM_IP_TYPES_SW_PATCH_VERSION              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Ram_Ip_Types.h file and StandardTypes.h file are of the same Autosar version */
#if ((RAM_IP_TYPES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
     (RAM_IP_TYPES_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Ram_Ip_Types.h and StandardTypes.h are different"
#endif
#endif

/* Check if Ram_Ip_Types.h file and Ram_Ip_Cfg_Defines.h file have same versions */
#if (RAM_IP_TYPES_VENDOR_ID  != RAM_IP_CFG_DEFINES_VENDOR_ID)
    #error "Ram_Ip_Types.h and Ram_Ip_Cfg_Defines.h have different vendor IDs"
#endif

/* Check if Ram_Ip_Types.h file and Ram_Ip_Cfg_Defines.h file are of the same Autosar version */
#if ((RAM_IP_TYPES_AR_RELEASE_MAJOR_VERSION    != RAM_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
     (RAM_IP_TYPES_AR_RELEASE_MINOR_VERSION    != RAM_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION) || \
     (RAM_IP_TYPES_AR_RELEASE_REVISION_VERSION != RAM_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Ram_Ip_Types.h and Ram_Ip_Cfg_Defines.h are different"
#endif

/* Check if Ram_Ip_Types.h file and Ram_Ip_Cfg_Defines.h file are of the same Software version */
#if ((RAM_IP_TYPES_SW_MAJOR_VERSION != RAM_IP_CFG_DEFINES_SW_MAJOR_VERSION) || \
     (RAM_IP_TYPES_SW_MINOR_VERSION != RAM_IP_CFG_DEFINES_SW_MINOR_VERSION) || \
     (RAM_IP_TYPES_SW_PATCH_VERSION != RAM_IP_CFG_DEFINES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Ram_Ip_Types.h and Ram_Ip_Cfg_Defines.h are different"
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
#if (RAM_IP_GET_RAM_STATE_API == STD_ON)
#define STCU2_MBESW0_RAM_TEST_MASK32       ((uint32)0x00000003U)
#define STCU2_MBSSW0_RAM_TEST_MASK32       ((uint32)0x00000003U)

#define RAM_IP_ERR_CODE_RESERVED                  0xFF
#endif
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

#if ( (!(defined (RAM_IP_S32K1)))  ||  (RAM_IP_GET_RAM_STATE_API == STD_ON) )
/** @brief Ram ip report error types. */
typedef enum
{
    RAM_IP_REPORT_TIMEOUT_ERROR             = 0U,   /**< @brief Report Timeout Error. */
} Ram_Ip_RamReportErrorType;
#endif

#if (RAM_IP_GET_RAM_STATE_API == STD_ON)
/*!
 * @brief Ram report error callback structure.
 * Implements RamReportErrorCallbackType_Class
 */
typedef void (*Ram_Ip_ReportErrorsCallbackType)(Ram_Ip_RamReportErrorType error, uint8 u8ErrorCode);
#endif
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/**
* @brief            The Ram_Ip_RamSectionType specifies the identification (ID) for a RAM section, configured via the configuration structure.
*                   The type shall be uint8, uint16 or uint32, based on best performance.
*
*/
typedef uint32 Ram_Ip_RamSectionType;

/**
* @brief            The Ram_Ip_RamIndexType specifies the variable for indexing RAM sections.
*                   The type shall be uint8, uint16 or uint32, based on best performance.
*
*/
typedef uint32 Ram_Ip_RamIndexType;

/**
* @brief            The Ram_Ip_RamSizeType specifies the RAM section size.
*                   The type shall be uint8, uint16 or uint32, based on best performance.
*
*/
typedef uint32 Ram_Ip_RamSizeType;

/**
* @brief            The Ram_Ip_RamWriteSizeType specifies the RAM section write size.
*                   The type shall be uint8, uint16 or uint32, based on best performance.
*
*/
typedef uint32 Ram_Ip_RamWriteSizeType;

#if (RAM_IP_GET_RAM_STATE_API == STD_ON)
/**
* @brief            Ram State of the microcontroller.
* @details          This is the Ram State data type returned by the function Mcu_GetRamState() of the Mcu module.
* @implements Ram_Ip_RamStateType_Enumeration
*/
typedef enum
{
    RAM_IP_RAMSTATE_INVALID = 0x99U,   /**< @brief RAM content is not valid or unknown (default). */
    RAM_IP_RAMSTATE_VALID   = 0x66U    /**< @brief RAM content is valid. */

} Ram_Ip_RamStateType;
#endif

/**
* @brief            Ram ip status return codes.
* @details          This is the Ram State data type returned by the function Mcu_GetRamState() of the Mcu module.
* @implements Ram_Ip_StatusType_Enumeration
*/
typedef enum
{
    RAM_IP_STATUS_OK                         = 0x00U,    /*!< RAM_IP Ok status */
    RAM_IP_STATUS_NOT_OK                     = 0x01U,    /*!< RAM_IP Not ok status */
    RAM_IP_STATUS_UNDEFINED                  = 0x02U,    /*!< RAM_IP Status is unknown */

} Ram_Ip_StatusType;

/**
* @brief            Definition of a RAM section within the configuration structure.
*                   The definitions for each RAM section within the structure Ram_Ip_ConfigType shall contain:
*                   - RAM section base address
*                   - Section size
*                   - Data pre-setting to be initialized
*                   - RAM write size
*
*/
typedef struct
{
    Ram_Ip_RamSectionType RamSectorId;       /**< @brief The ID for Ram Sector configuration.  */
    uint8 (*pu8RamBaseAddr)[1U];             /**< @brief RAM section base address.             */
    Ram_Ip_RamSizeType * RamSize;            /**< @brief RAM section size.                     */
    uint64 u64RamDefaultValue;               /**< @brief RAM default value for initialization. */
    Ram_Ip_RamWriteSizeType RamWriteSize;    /**< @brief RAM section write size.               */

} Ram_Ip_RamConfigType;







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

#endif /* RAM_IP_TYPES_H */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/

