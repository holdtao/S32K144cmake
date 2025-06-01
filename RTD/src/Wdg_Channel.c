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
*   @file
*
*   @addtogroup  Wdg
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

#include "Wdg_Channel.h"
#include "Wdg_EnvCfg.h"
#include "Wdg_Ipw.h"
#include "SchM_Wdg.h"
#include "Det.h"
#if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    // #include "Dem.h"
#endif
#include "Wdg_CfgExt.h"
#include "Mcal.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define WDG_CHANNEL_VENDOR_ID_C                      43
#define WDG_CHANNEL_AR_RELEASE_MAJOR_VERSION_C       4
#define WDG_CHANNEL_AR_RELEASE_MINOR_VERSION_C       4
#define WDG_CHANNEL_AR_RELEASE_REVISION_VERSION_C    0
#define WDG_CHANNEL_SW_MAJOR_VERSION_C               1
#define WDG_CHANNEL_SW_MINOR_VERSION_C               0
#define WDG_CHANNEL_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and WDG configuration header file are of the same vendor */
#if (WDG_CHANNEL_VENDOR_ID_C != WDG_CHANNEL_VENDOR_ID)
    #error "Wdg_Channel.c and Wdg_Channel.h have different vendor ids"
#endif

/* Check if current file and Wdg_Channel header file are of the same Autosar version */
#if ((WDG_CHANNEL_AR_RELEASE_MAJOR_VERSION_C     != WDG_CHANNEL_AR_RELEASE_MAJOR_VERSION) || \
     (WDG_CHANNEL_AR_RELEASE_MINOR_VERSION_C     != WDG_CHANNEL_AR_RELEASE_MINOR_VERSION) || \
     (WDG_CHANNEL_AR_RELEASE_REVISION_VERSION_C != WDG_CHANNEL_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Wdg_Channel.c and Wdg_Channel.h are different"
#endif

/* Check if current file and Wdg_Channel header file are of the same software version */
#if ((WDG_CHANNEL_SW_MAJOR_VERSION_C != WDG_CHANNEL_SW_MAJOR_VERSION) || \
     (WDG_CHANNEL_SW_MINOR_VERSION_C != WDG_CHANNEL_SW_MINOR_VERSION) || \
     (WDG_CHANNEL_SW_PATCH_VERSION_C != WDG_CHANNEL_SW_PATCH_VERSION))
#error "Software Version Numbers of Wdg_Channel.c and Wdg_Channel.h are different"
#endif

/* Check if current file and Wdg_EnvCfg header file are of the same vendor */
#if (WDG_CHANNEL_VENDOR_ID_C != WDG_ENVCFG_VENDOR_ID)
    #error "Wdg_Channel.c and Wdg_EnvCfg.h have different vendor ids"
#endif

#if ((WDG_CHANNEL_AR_RELEASE_MAJOR_VERSION_C     != WDG_ENVCFG_AR_RELEASE_MAJOR_VERSION) || \
     (WDG_CHANNEL_AR_RELEASE_MINOR_VERSION_C     != WDG_ENVCFG_AR_RELEASE_MINOR_VERSION) || \
     (WDG_CHANNEL_AR_RELEASE_REVISION_VERSION_C  != WDG_ENVCFG_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Wdg_Channel.c and Wdg_EnvCfg.h are different"
#endif

#if ((WDG_CHANNEL_SW_MAJOR_VERSION_C != WDG_ENVCFG_SW_MAJOR_VERSION) || \
     (WDG_CHANNEL_SW_MINOR_VERSION_C != WDG_ENVCFG_SW_MINOR_VERSION) || \
     (WDG_CHANNEL_SW_PATCH_VERSION_C != WDG_ENVCFG_SW_PATCH_VERSION))
#error "Software Version Numbers of Wdg_Channel.c and Wdg_EnvCfg.h are different"
#endif

/* Check if current file and Wdg_Ipw header file are of the same vendor */
#if (WDG_CHANNEL_VENDOR_ID_C != WDG_IPW_VENDOR_ID)
    #error "Wdg_Channel.c and Wdg_Ipw.h have different vendor ids"
#endif

#if ((WDG_CHANNEL_AR_RELEASE_MAJOR_VERSION_C     != WDG_IPW_AR_RELEASE_MAJOR_VERSION) || \
     (WDG_CHANNEL_AR_RELEASE_MINOR_VERSION_C     != WDG_IPW_AR_RELEASE_MINOR_VERSION) || \
     (WDG_CHANNEL_AR_RELEASE_REVISION_VERSION_C  != WDG_IPW_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Wdg_Channel.c and Wdg_Ipw.h are different"
#endif

#if ((WDG_CHANNEL_SW_MAJOR_VERSION_C != WDG_IPW_SW_MAJOR_VERSION) || \
     (WDG_CHANNEL_SW_MINOR_VERSION_C != WDG_IPW_SW_MINOR_VERSION) || \
     (WDG_CHANNEL_SW_PATCH_VERSION_C != WDG_IPW_SW_PATCH_VERSION))
#error "Software Version Numbers of Wdg_Channel.c and Wdg_Ipw.h are different"
#endif

/* Check if current file and Wdg_CfgExt header file are of the same vendor */
#if (WDG_CHANNEL_VENDOR_ID_C != WDG_VENDOR_ID_CFG_EXT)
    #error "Wdg_Channel.c and Wdg_CfgExt.h have different vendor ids"
#endif

#if ((WDG_CHANNEL_AR_RELEASE_MAJOR_VERSION_C     != WDG_AR_RELEASE_MAJOR_VERSION_CFG_EXT) || \
     (WDG_CHANNEL_AR_RELEASE_MINOR_VERSION_C     != WDG_AR_RELEASE_MINOR_VERSION_CFG_EXT) || \
     (WDG_CHANNEL_AR_RELEASE_REVISION_VERSION_C  != WDG_AR_RELEASE_REVISION_VERSION_CFG_EXT))
#error "AutoSar Version Numbers of Wdg_Channel.c and Wdg_CfgExt.h are different"
#endif

#if ((WDG_CHANNEL_SW_MAJOR_VERSION_C != WDG_SW_MAJOR_VERSION_CFG_EXT) || \
     (WDG_CHANNEL_SW_MINOR_VERSION_C != WDG_SW_MINOR_VERSION_CFG_EXT) || \
     (WDG_CHANNEL_SW_PATCH_VERSION_C != WDG_SW_PATCH_VERSION_CFG_EXT))
#error "Software Version Numbers of Wdg_Channel.c and Wdg_CfgExt.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and SchM_Wdg header file are of the same Autosar version */
    #if ((WDG_CHANNEL_AR_RELEASE_MAJOR_VERSION_C     != SCHM_WDG_AR_RELEASE_MAJOR_VERSION) || \
        (WDG_CHANNEL_AR_RELEASE_MINOR_VERSION_C     != SCHM_WDG_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Wdg_Channel.c and SchM_Wdg.h are different"
    #endif

    /* Check if current file and Mcal header file are of the same Autosar version */
    #if ((WDG_CHANNEL_AR_RELEASE_MAJOR_VERSION_C     != MCAL_AR_RELEASE_MAJOR_VERSION) || \
        (WDG_CHANNEL_AR_RELEASE_MINOR_VERSION_C     != MCAL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Wdg_Channel.c and Mcal.h are different"
    #endif

    /* Check if current file and Det header file are of the same Autosar version */
    #if ((WDG_CHANNEL_AR_RELEASE_MAJOR_VERSION_C     != DET_AR_RELEASE_MAJOR_VERSION) || \
        (WDG_CHANNEL_AR_RELEASE_MINOR_VERSION_C     != DET_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Wdg_Channel.c and Det.h are different"
    #endif

    #if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    /* Check if current file and Dem header file are of the same Autosar version */
        #if ((WDG_CHANNEL_AR_RELEASE_MAJOR_VERSION_C     != DEM_AR_RELEASE_MAJOR_VERSION) || \
            (WDG_CHANNEL_AR_RELEASE_MINOR_VERSION_C     != DEM_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Wdg_Channel.c and Dem.h are different"
        #endif
    #endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
/**
* @brief  This enumerated type will contain the watchdog driver's possible states
*/
#if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
typedef enum
{
    WDG_UNINIT         = 0x01,  /**< @brief = 0x01 The watchdog driver is not uninitialized */
    WDG_IDLE           = 0x02,  /**< @brief = 0x02 The watchdog driver is currently idle,
                                                   i.e not being triggered or mode changed */
    WDG_BUSY           = 0x03,  /**< @brief = 0x03 The watchdog driver is currently busy,
                                                   i.e triggered or switched between modes */
    WDG_INITIALIZING   = 0x04   /**< @brief = 0x04 The watchdog driver is currently initializing */

} Wdg_StatusType;
#endif

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

#define WDG_START_SEC_VAR_CLEARED_UNSPECIFIED

#include "Wdg_MemMap.h"

/**
*  @brief Variable that indicate the current configuration set
*/
static const Wdg_ConfigType* Wdg_apConfigPtr[WDG_NO_OF_INSTANCES];

#define WDG_STOP_SEC_VAR_CLEARED_UNSPECIFIED

#include "Wdg_MemMap.h"

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

#if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
    #define WDG_START_SEC_VAR_INIT_UNSPECIFIED

    #include "Wdg_MemMap.h"

    /**
    *  @brief Variable that indicated the state of the driver
    */
    static Wdg_StatusType Wdg_aeStatus[WDG_NO_OF_INSTANCES] = WDG_INIT_STATUS_ARRAY;

    #define WDG_STOP_SEC_VAR_INIT_UNSPECIFIED

    #include "Wdg_MemMap.h"
#endif

#if (WDG_DIRECT_SERVICE == STD_OFF)
    #define WDG_START_SEC_VAR_CLEARED_32

    #include "Wdg_MemMap.h"

    /**
    *  @brief Variable that indicate the watchdog timeout
    */
    static uint32 Wdg_au32Timeout[WDG_NO_OF_INSTANCES]; /* implicit zero initialization*/

    /**
    *  @brief Variable that indicated the timer value in ms
    */
    static uint32 Wdg_au32GptPeriod[WDG_NO_OF_INSTANCES]; /* implicit zero initialization*/

    #define WDG_STOP_SEC_VAR_CLEARED_32

    #include "Wdg_MemMap.h"
#endif

#define WDG_START_SEC_VAR_CLEARED_UNSPECIFIED

#include "Wdg_MemMap.h"

/**
*  @brief Variable that indicates the last Wdg Mode
*/
static WdgIf_ModeType Wdg_aePreviousMode[WDG_NO_OF_INSTANCES] = WDG_INIT_PREVIOUS_MODE_ARRAY; /* implicit zero initialization*/

#if (WDG_DIRECT_SERVICE == STD_OFF)
#if (WDG_VALIDATE_PARAMS == STD_ON)
    static WdgIf_ModeType Wdg_aeCurrentMode[WDG_NO_OF_INSTANCES] = WDG_INIT_PREVIOUS_MODE_ARRAY; /* implicit zero initialization*/
#endif /*(WDG_VALIDATE_PARAMS == STD_ON)*/
#endif /*(WDG_DIRECT_SERVICE == STD_OFF)*/

#define WDG_STOP_SEC_VAR_CLEARED_UNSPECIFIED

#include "Wdg_MemMap.h"

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
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

#if (WDG_DIRECT_SERVICE == STD_OFF)
    /* Gpt Callback functionality is only active if the Service Mode requires an external timer */
    static inline void  Wdg_ChannelTrigger(const Wdg_Ipw_InstanceType Wdg_Instance);

        #ifdef WDG_INSTANCE0
    #if (WDG_INSTANCE0 == STD_ON)
    void Wdg_Cbk_GptNotification0(void);
    #endif
    #endif

            #ifdef WDG_INSTANCE1
    #if (WDG_INSTANCE1 == STD_ON)
    void Wdg_Cbk_GptNotification1(void);
    #endif
    #endif

                                        #endif /* WDG_DIRECT_SERVICE */

#if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
static inline Std_ReturnType Wdg_ChannelValidateGlobalCall(CONST(Wdg_ServiceIdType, AUTOMATIC)uServiceId,
                                                                          const Wdg_Ipw_InstanceType Wdg_Instance
                                                                         );
#endif

#if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
static inline void Wdg_ChannelEndValidateGlobalCall(Std_ReturnType validation,
                                                                   const Wdg_Ipw_InstanceType Wdg_Instance
                                                                  );
#endif

#if (WDG_VALIDATE_PARAMS == STD_ON)
static inline Std_ReturnType Wdg_ValidatePtrInit
                                            (const Wdg_ConfigType* const ConfigPtr,
                                             const Wdg_Ipw_InstanceType Wdg_Instance
                                            );
#endif

#if (WDG_DIRECT_SERVICE == STD_OFF)
#if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
static inline Std_ReturnType Wdg_ChannelValidateTrigerCondition(const Wdg_Ipw_InstanceType Wdg_Instance);
#endif /* WDG_VALIDATE_GLOBAL_CALL == STD_ON */
#endif /* WDG_DIRECT_SERVICE == OFF */

#if ((WDG_VALIDATE_PARAMS == STD_ON) && (WDG_VERSION_INFO_API == STD_ON))
static inline Std_ReturnType Wdg_ValidatePtrVersion
                                           (const Std_VersionInfoType* pVersioninfo,
                                            const Wdg_Ipw_InstanceType Wdg_Instance
                                           );
#endif


static inline Std_ReturnType Wdg_ChannelValidateMode(WdgIf_ModeType Wdg_Mode,
                                                                    Wdg_ServiceIdType uServiceId,
                                                                    Wdg_ErrorIdType uErrorId,
                                                                    const Wdg_Ipw_InstanceType Wdg_Instance
                                                                   );

#if (WDG_DIRECT_SERVICE == STD_OFF)
#if (WDG_VALIDATE_PARAMS == STD_ON)
static inline Std_ReturnType Wdg_ValidateTimeout(uint16 u16Timeout,
                                                                const Wdg_Ipw_InstanceType Wdg_Instance
                                                               );
#endif /* WDG_VALIDATE_GLOBAL_CALL == STD_ON */
#endif /* WDG_DIRECT_SERVICE == OFF */

#if (WDG_MULTICORE_ENABLED == STD_ON)
static inline Std_ReturnType Wdg_ChannelValidateCoreUsed(uint32 coreID,
                                                                        const Wdg_Ipw_InstanceType Wdg_Instance,
                                                                        Wdg_ServiceIdType uServiceId,
                                                                        Wdg_ErrorIdType uErrorId
                                                                       );
#endif

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
/*==================================================================================================
*                                       LOCAL FUNCTIONS
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

#if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
/**
 * @brief      This function validates the global call
 * @details    This service is a non reentrant function used for validating the calls for functions
 *             that uses all the channels - Wdg_Init, Wdg_SetTriggerCondition, Wdg_SetMode.
 *
 * @param[in]   uServiceId      The service id of the caller function
 * @param[in]   Wdg_Instance    Harwdware WDG instance
 *
 * @return      The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 * @implements  Wdg_ChannelValidateGlobalCall_Activity
 *
 * */
static inline Std_ReturnType Wdg_ChannelValidateGlobalCall(const Wdg_ServiceIdType uServiceId,
                                                                          const Wdg_Ipw_InstanceType Wdg_Instance
                                                                         )
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

    SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_06();
    if(((WDG_UNINIT == Wdg_aeStatus[Wdg_Instance]) && (WDG_INIT_ID != uServiceId)) ||\
       (WDG_INITIALIZING == Wdg_aeStatus[Wdg_Instance]) || (WDG_BUSY == Wdg_aeStatus[Wdg_Instance])
      )
    {
        SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_06();
        (void)Det_ReportError((uint16)WDG_CHANNEL_MODULE_ID, (uint8)Wdg_Instance, (uint8)uServiceId, (uint8)WDG_E_DRIVER_STATE);
        valid = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        if (WDG_INIT_ID == uServiceId)
        {
            Wdg_aeStatus[Wdg_Instance] = WDG_INITIALIZING;
        }
        else
        {
            Wdg_aeStatus[Wdg_Instance] = WDG_BUSY;
        }
        SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_06();
    }
    return valid;
}
#endif /* WDG_VALIDATE_GLOBAL_CALL == STD_ON */

#if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
/**
 * @brief      This function ends the validation of the global call.
 * @details    This service is a non reentrant function used for end the validation the calls for
 *             functions that uses all the channels - Wdg_Init, Wdg_SetTriggerCondition, Wdg_SetMode.
 *
 * @param[in]   validation      The function call was previously validated
 * @param[in]   Wdg_Instance    Harwdware WDG instance.
 * @return void
 *
 * @implements  Wdg_ChannelEndValidateGlobalCall_Activity
 * */
static inline void Wdg_ChannelEndValidateGlobalCall(Std_ReturnType validation,
                                                                   const Wdg_Ipw_InstanceType Wdg_Instance
                                                                  )
{
    SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_07();
    if ((Std_ReturnType)E_OK == validation)
    {
        Wdg_aeStatus[Wdg_Instance] = WDG_IDLE;
    }
    else
    {
        if (WDG_BUSY == Wdg_aeStatus[Wdg_Instance])
        {
            Wdg_aeStatus[Wdg_Instance] = WDG_IDLE;
        }
        else
        {
            if (NULL_PTR == Wdg_apConfigPtr[Wdg_Instance])
            {
                Wdg_aeStatus[Wdg_Instance] = WDG_UNINIT;
            }
            else
            {
                Wdg_aeStatus[Wdg_Instance] = WDG_IDLE;
            }
        }
    }
    SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_07();
}
#endif /* WDG_VALIDATE_GLOBAL_CALL == STD_ON*/

#if (WDG_MULTICORE_ENABLED == STD_ON)
 /**
 * @brief      This function uses to check if the Core is validate
 *
 * @param[in]   The Wdg_ChannelValidateCoreUsed will check invalidate coreID.
 * @param[in]   uServiceId    The service id of the caller function
 * @param[in]   uErrorId      The function call was previously validated
 * @param[in]   Wdg_Instance  Harwdware WDG instance.
 *
 * @return      The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 *
 * */
static inline Std_ReturnType Wdg_ChannelValidateCoreUsed(uint32 coreID,
                                                                        const Wdg_Ipw_InstanceType Wdg_Instance,
                                                                        Wdg_ServiceIdType uServiceId,
                                                                        Wdg_ErrorIdType uErrorId
                                                                       )
{
    Std_ReturnType valid = (Std_ReturnType)E_NOT_OK;

    if(coreID == Wdg_au32InstanceCoreUsed[Wdg_Instance])
    {
        valid = (Std_ReturnType)E_OK;
    }
#if (WDG_VALIDATE_PARAMS == STD_ON)
    else
    {
        (void)Det_ReportError((uint16)WDG_CHANNEL_MODULE_ID, (uint8)Wdg_Instance, (uint8)uServiceId, (uint8)uErrorId);
    }
#else
        (void)uServiceId;
        (void)uErrorId;
#endif
    return valid;
}
#endif

#if (WDG_DIRECT_SERVICE == STD_OFF)
    /* GPT triggering of the Watchdog is only available if the WDG is not serviced directly */
    /**
    * @brief   Triggers the Watchdog.
    * @details The Wdg_Cbk_GptNotification shall trigger the hardware. It is set up
    *          as notification function for the Gpt timer that controls the trigger of
    *          the watchdog
    *
    * @pre    This API has to be set up as notification for the Gpt channels that is set up
    *         for Wdg
    *
    * @param[in]   Wdg_Instance  Harwdware WDG instance.
    *
    *
    * @implements      Wdg_ChannelTrigger_Activity
    *
    */
    static inline void Wdg_ChannelTrigger(const Wdg_Ipw_InstanceType Wdg_Instance)
    {
        uint32 u32TempTimeout;
    #if ((WDG_MULTICORE_ENABLED == STD_ON) || (WDG_VALIDATE_GLOBAL_CALL == STD_ON))
        Std_ReturnType valid = (Std_ReturnType)E_NOT_OK;
    #endif
    #if (WDG_MULTICORE_ENABLED == STD_ON)
        volatile uint32 coreID;

        coreID = (uint32) Wdg_GetCoreID();
        valid = Wdg_ChannelValidateCoreUsed(coreID, Wdg_Instance,WDG_TRIGGER_ID,WDG_E_PARAM_CONFIG);
        if((Std_ReturnType)E_OK == valid)
        {
    #endif
    #if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
            valid = Wdg_ChannelValidateGlobalCall(WDG_TRIGGER_ID, Wdg_Instance);
            if ((Std_ReturnType)E_OK == valid)
            {
    #endif /* (WDG_VALIDATE_GLOBAL_CALL == STD_ON */
                MCAL_FAULT_INJECTION_POINT(T_WDG_INJ_CHANNEL_TRIGGER_START);

                SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_00();

                if( Wdg_au32Timeout[Wdg_Instance] < Wdg_au32GptPeriod[Wdg_Instance])
                {
                    SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_00();

                    Gpt_StopTimer(Wdg_apConfigPtr[Wdg_Instance]->Wdg_TimerChannel);
                }
                else
                {
                    u32TempTimeout = Wdg_au32Timeout[Wdg_Instance] - Wdg_au32GptPeriod[Wdg_Instance];
                    Wdg_au32Timeout[Wdg_Instance] = u32TempTimeout;
                    SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_00();
                    Wdg_Ipw_Service(Wdg_Instance);
                }
    #if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
            }
            Wdg_ChannelEndValidateGlobalCall(valid, Wdg_Instance);
    #endif /* (WDG_VALIDATE_GLOBAL_CALL == STD_ON */
                MCAL_FAULT_INJECTION_POINT(T_WDG_INJ_CHANNEL_TRIGGER_STOP);
    #if (WDG_MULTICORE_ENABLED == STD_ON)
        }
    #endif
    }

        #ifdef WDG_INSTANCE0
    #if (WDG_INSTANCE0 == STD_ON)
    /**
    * @brief     Callback function Wdg_ChannelTrigger.
    * @implements  Wdg_Cbk_GptNotificationInstanceNo_Activity
    *
    **/
    void Wdg_Cbk_GptNotification0(void)
    {
        Wdg_ChannelTrigger(WDG_IPW_INSTANCE0);
    }
    #endif
    #endif

            #ifdef WDG_INSTANCE1
    #if (WDG_INSTANCE1 == STD_ON)
    /**
     * @brief     Callback function Wdg_ChannelTrigger.
     *   @implements  Wdg_Cbk_GptNotificationInstanceNo_Activity
     *
    **/
    void Wdg_Cbk_GptNotification1(void)
    {
        Wdg_ChannelTrigger(WDG_IPW_INSTANCE1);
    }
    #endif
    #endif

                                        #endif /* WDG_DIRECT_SERVICE */

#if (WDG_VALIDATE_PARAMS == STD_ON)
/**
 * @brief       This function validate the initialization pointer.
 *
 * @param[in]   ConfigPtr        Pointer to a selected configuration structure
 * @param[in]   Wdg_Instance     Harwdware WDG instance
 *
 * @return      The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 * @implements  Wdg_ValidatePtrInit_Activity
 *
 * */
static inline Std_ReturnType Wdg_ValidatePtrInit(const Wdg_ConfigType * const ConfigPtr, const Wdg_Ipw_InstanceType Wdg_Instance)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

#if (WDG_PRECOMPILE_SUPPORT == STD_ON)
    if (NULL_PTR != ConfigPtr)
#else
    if (NULL_PTR == ConfigPtr)
#endif /*#if (WDG_PRECOMPILE_SUPPORT == STD_ON)*/
        {
            (void)Det_ReportError((uint16)WDG_CHANNEL_MODULE_ID, (uint8)Wdg_Instance, (uint8)WDG_INIT_ID, (uint8)WDG_E_INIT_FAILED);
            valid = (Std_ReturnType)E_NOT_OK;
        }
#if (WDG_PRECOMPILE_SUPPORT == STD_OFF)
        else
        {
            if (Wdg_Instance != ConfigPtr->Wdg_Instance)
            {
                (void)Det_ReportError((uint16)WDG_CHANNEL_MODULE_ID, (uint8)Wdg_Instance, (uint8)WDG_INIT_ID, (uint8)WDG_E_INIT_FAILED);
                valid = (Std_ReturnType)E_NOT_OK;
            }
            else
            {
                /* do nothing */
            }
        }
#endif /*WDG_PRECOMPILE_SUPPORT == STD_OFF*/
        return valid;
}
#endif /* (WDG_VALIDATE_PARAMS == STD_ON)*/

#if (WDG_DIRECT_SERVICE == STD_OFF)
#if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
/**
 * @brief      This function validates the call of Wdg_ChannelSetTriggerCondition function
 * @details    This service is a function used for validating the calls for
               Wdg_ChannelSetTriggerCondition.
 *
 * @param[in]   Wdg_Instance    Harwdware WDG instance
 *
 * @return      The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 * @implements  Wdg_ChannelValidateTrigerCondition_Activity
 *
 * */
static inline Std_ReturnType Wdg_ChannelValidateTrigerCondition(const Wdg_Ipw_InstanceType Wdg_Instance)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

    if ((WDG_UNINIT == Wdg_aeStatus[Wdg_Instance]) ||(WDG_INITIALIZING == Wdg_aeStatus[Wdg_Instance]))
    {
        (void)Det_ReportError((uint16)WDG_CHANNEL_MODULE_ID, (uint8)Wdg_Instance, (uint8)WDG_SETTRIGGERCONDITION_ID, (uint8)WDG_E_DRIVER_STATE);
        valid = (Std_ReturnType)E_NOT_OK;
    }
    return valid;
}
#endif /* WDG_VALIDATE_GLOBAL_CALL == STD_ON */
#endif /* WDG_DIRECT_SERVICE == OFF */

#if ((WDG_VALIDATE_PARAMS == STD_ON) && (WDG_VERSION_INFO_API == STD_ON))
/**
 * @brief       This function validate the initialization pointer.
 *
 * @param[in]   pVersioninfo        Pointer to a selected configuration structure.
 *
 * @return      The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 * @implements  Wdg_ValidatePtrVersion_Activity
 *
 * */
static inline Std_ReturnType Wdg_ValidatePtrVersion(const Std_VersionInfoType * pVersioninfo,
                                                    const Wdg_Ipw_InstanceType Wdg_Instance)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

    if (NULL_PTR == pVersioninfo)
    {
        (void)Det_ReportError((uint16)WDG_CHANNEL_MODULE_ID, (uint8)Wdg_Instance,(uint8)WDG_GETVERSION_ID,(uint8)WDG_E_PARAM_POINTER);
        valid = (Std_ReturnType)E_NOT_OK;
    }
    return valid;
}
#endif /* (WDG_VALIDATE_PARAMS == STD_ON)*/
/**
 * @brief       This function validate the mode that will be set up.
 *
 * @param[in]   Wdg_Mode      The watchdog mode that will be set up.
 * @param[in]   uServiceId    The service id of the caller function
 * @param[in]   uErrorId      The function call was previously validated
 * @param[in]   Wdg_Instance  Harwdware WDG instance.
 *
 * @return      The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 * @implements  Wdg_ChannelValidateMode_Activity
 *
 * */
static inline Std_ReturnType Wdg_ChannelValidateMode(WdgIf_ModeType Wdg_Mode,
                                                                    Wdg_ServiceIdType uServiceId,
                                                                    Wdg_ErrorIdType uErrorId,
                                                                    const Wdg_Ipw_InstanceType Wdg_Instance
                                                                   )
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;
    boolean disableRejectedErrActive = FALSE;
    boolean modeFailedErrActive = FALSE;

#if (WDG_DISABLE_ALLOWED == STD_OFF)
    if (WDGIF_OFF_MODE == Wdg_Mode)
    {
        disableRejectedErrActive = TRUE;
        valid = (Std_ReturnType)E_NOT_OK;
    }
#endif  /* (WDG_DISABLE_ALLOWED == STD_OFF) */
    if (!((WDGIF_OFF_MODE  == Wdg_Mode)||(WDGIF_FAST_MODE == Wdg_Mode)||(WDGIF_SLOW_MODE == Wdg_Mode)))
    {
#if (WDG_VALIDATE_PARAMS == STD_ON)

        (void)Det_ReportError((uint16)WDG_CHANNEL_MODULE_ID, (uint8)Wdg_Instance, (uint8)uServiceId, (uint8)uErrorId);
#else
        (void)uServiceId;
        (void)uErrorId;
        (void)Wdg_Instance;
#endif
         modeFailedErrActive = TRUE;
         valid = (Std_ReturnType)E_NOT_OK;
    }

#if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    if((uint32)STD_ON == Wdg_E_Disable_Rejected.state)
    {
    #if (WDG_DISABLE_ALLOWED == STD_OFF)
            if(TRUE == disableRejectedErrActive)
            {
                (void) Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Disable_Rejected.id, DEM_EVENT_STATUS_FAILED);
            }
            else
            {
                (void) Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Disable_Rejected.id, DEM_EVENT_STATUS_PASSED);
            }
    #else
        (void)disableRejectedErrActive;
    #endif     /*WDG_DISABLE_ALLOWED == STD_OFF*/
    }
    if((uint32)STD_ON == Wdg_E_Mode_Failed.state)
    {
        if(TRUE == modeFailedErrActive)
        {
            (void) Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Mode_Failed.id, DEM_EVENT_STATUS_FAILED);
        }
        else
        {
            (void) Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Mode_Failed.id, DEM_EVENT_STATUS_PASSED);
        }
    }
#else
    (void)modeFailedErrActive;
    (void)disableRejectedErrActive;
#endif  /* (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */

    return valid;
}

#if (WDG_DIRECT_SERVICE == STD_OFF)
#if (WDG_VALIDATE_PARAMS == STD_ON)
/**
 * @brief       This function validate the initialization pointer.
 *
 * @param[in]   u16Timeout    timeout window
 * @param[in]   Wdg_Instance  Harwdware WDG instance.

 * @return      The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 * @implements  Wdg_ValidateTimeout_Activity
 * This function is called in IP HW
 * */
static inline Std_ReturnType Wdg_ValidateTimeout(uint16 u16Timeout,
                                                const Wdg_Ipw_InstanceType Wdg_Instance)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;
    const uint32 Wdg_au32WdgTimeOutPeriod[WDG_NO_OF_INSTANCES][3] = WDG_TIMEOUT_VALUE_ARRAY;
    uint16 u16CfgMaxTimeout = Wdg_au16CfgMaxTimeout[Wdg_Instance];

    if ((u16Timeout > u16CfgMaxTimeout) || ((u16Timeout <= (uint16)Wdg_au32WdgTimeOutPeriod[Wdg_Instance][Wdg_aeCurrentMode[Wdg_Instance]]) && (u16Timeout != (uint16)0U)))
    {
        (void)Det_ReportError((uint16)WDG_CHANNEL_MODULE_ID, (uint8)Wdg_Instance,(uint8)WDG_SETTRIGGERCONDITION_ID,(uint8)WDG_E_PARAM_TIMEOUT);
        valid = (Std_ReturnType)E_NOT_OK;
    }
    return valid;
}
#endif /* WDG_VALIDATE_PARAMS == STD_ON */
#endif /* WDG_DIRECT_SERVICE == STD_OFF */

/**
 * @brief       This function initializes the hardware for Wdg and validates the settings.
 *
 * @param[in]   status        the status of initial Wdg
 * @param[in]   Wdg_Instance  Harwdware WDG instance.

 * @return      The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 * This function is called in IP HW
 * */
static inline Std_ReturnType Wdg_InitialHardware(const Wdg_Ipw_InstanceType Wdg_Instance, const Std_ReturnType status)
{
    Std_ReturnType valid = (Std_ReturnType)status;

    if (valid == (Std_ReturnType)E_OK)
    {
        if (Wdg_apConfigPtr[Wdg_Instance]->Wdg_DefaultMode == WDGIF_OFF_MODE)
        {
        #if (WDG_DISABLE_ALLOWED == (STD_ON))
            valid = Wdg_Ipw_SetMode(Wdg_Instance, Wdg_apConfigPtr[Wdg_Instance]->Wdg_ModeSettings[Wdg_apConfigPtr[Wdg_Instance]->Wdg_DefaultMode]->Wdg_Ipw_pConfig);
        #else
            valid = (Std_ReturnType)E_NOT_OK;
        #endif
        }
        else
        {
            valid = Wdg_Ipw_Init(Wdg_Instance, Wdg_apConfigPtr[Wdg_Instance]->Wdg_ModeSettings[Wdg_apConfigPtr[Wdg_Instance]->Wdg_DefaultMode]->Wdg_Ipw_pConfig);
        }
    }
    return valid;
}

/**
 * @brief       This function validates the hardware setting for wdg.
 *
 * @param[in]   status        the status of initial Wdg
 * @param[in]   Wdg_Instance  Harwdware WDG instance.

 * @return      The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 * This function is called in IP HW
 * */
static inline Std_ReturnType Wdg_VadidateHardwareSetting(const Wdg_Ipw_InstanceType Wdg_Instance, const Std_ReturnType status)
{
    Std_ReturnType valid = (Std_ReturnType)status;
    if (valid == (Std_ReturnType)E_NOT_OK)
    {
        /* Hardware settings are not valid */
#if (WDG_VALIDATE_PARAMS == STD_ON)
        (void)Det_ReportError((uint16)WDG_CHANNEL_MODULE_ID, (uint8)Wdg_Instance, (uint8)WDG_INIT_ID, (uint8)WDG_E_PARAM_CONFIG);
#endif
    #if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
        if((uint32)STD_ON == Wdg_E_Mode_Failed.state)
        {
            (void) Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Mode_Failed.id, DEM_EVENT_STATUS_FAILED);
        }
    #endif
        Wdg_apConfigPtr[Wdg_Instance] = NULL_PTR;
    }
    else
    {
        /* Hardware settings are valid */
    #if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
        if((uint32)STD_ON == Wdg_E_Mode_Failed.state)
        {
            (void) Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Mode_Failed.id, DEM_EVENT_STATUS_PASSED);
        }
    #endif
    }
    return valid;
}

/**
 * @brief       This function initialize hardware for wdg.
 *
 * @param[in] Mode      One of the following statically configured modes:<br>
 *                      -# WDGIF_OFF_MODE,
 *                      -# WDGIF_SLOW_MODE,
 *                      -# WDGIF_FAST_MODE.
 * @param[in]   Wdg_Instance  Harwdware WDG instance.

 * @return      The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 * This function is called in IP HW
 * */
static inline Std_ReturnType Wdg_DoChannelSetMode(const Wdg_Ipw_InstanceType Wdg_Instance, const WdgIf_ModeType mode)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

    if(mode == WDGIF_OFF_MODE)
    {
    #if (WDG_DISABLE_ALLOWED == (STD_ON))
        if(Wdg_Ipw_StopTimer(Wdg_Instance) == (Std_ReturnType)E_OK)
        {
            valid = Wdg_Ipw_SetMode(Wdg_Instance, Wdg_apConfigPtr[Wdg_Instance]->Wdg_ModeSettings[mode]->Wdg_Ipw_pConfig);
        }
        else
        {
            valid = (Std_ReturnType)E_NOT_OK;
        }
    #else
        valid = (Std_ReturnType)E_NOT_OK;
    #endif
    }
    else
    {
        /* If the Wdg was in OFF Mode, the Wdg needs to be initialized again */
        if (Wdg_aePreviousMode[Wdg_Instance] == WDGIF_OFF_MODE)
        {
            if(Wdg_Ipw_SetMode(Wdg_Instance, Wdg_apConfigPtr[Wdg_Instance]->Wdg_ModeSettings[mode]->Wdg_Ipw_pConfig) == (Std_ReturnType)E_OK)
            {
                valid = Wdg_Ipw_StartTimer(Wdg_Instance);
            }
            else
            {
                valid = (Std_ReturnType)E_NOT_OK;
            }
        }
        else
        {
            valid = Wdg_Ipw_SetMode(Wdg_Instance, Wdg_apConfigPtr[Wdg_Instance]->Wdg_ModeSettings[mode]->Wdg_Ipw_pConfig);
        }
    }
    return valid;
}

/**
 * @brief       This function validates the channel mode setting for wdg.
 *
 * @param[in]   status        the status of initial Wdg
 * @param[in] Mode      One of the following statically configured modes:<br>
 *                      -# WDGIF_OFF_MODE,
 *                      -# WDGIF_SLOW_MODE,
 *                      -# WDGIF_FAST_MODE.
 * @param[in]   Wdg_Instance  Harwdware WDG instance.

 * @return      The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 * This function is called in IP HW
 * */
static inline Std_ReturnType Wdg_VadidateDoChannelSetMode(const Wdg_Ipw_InstanceType Wdg_Instance, const WdgIf_ModeType mode, const Std_ReturnType status)
{
    Std_ReturnType valid = (Std_ReturnType)status;

#if (WDG_DIRECT_SERVICE == STD_OFF)
    Gpt_ValueType uElapsedTime;
    uint32 u32Temp;
#endif

    if (valid == (Std_ReturnType)E_NOT_OK)
    {
        /* Hardware settings are not valid */

#if (WDG_VALIDATE_PARAMS == STD_ON)
        (void)Det_ReportError((uint16)WDG_CHANNEL_MODULE_ID, (uint8)Wdg_Instance, (uint8)WDG_SETMODE_ID, (uint8)WDG_E_PARAM_MODE);
#endif

    #if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
        if((uint32)STD_ON == Wdg_E_Mode_Failed.state)
        {
            (void) Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Mode_Failed.id, DEM_EVENT_STATUS_FAILED);
        }
    #endif
    }
    else
    {
        /* Hardware settings are valid */
        #if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
            if((uint32)STD_ON == Wdg_E_Mode_Failed.state)
            {
                (void) Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Mode_Failed.id, DEM_EVENT_STATUS_PASSED);
            }
        #endif

#if (WDG_DIRECT_SERVICE == STD_OFF)
        Gpt_StopTimer(Wdg_apConfigPtr[Wdg_Instance]->Wdg_TimerChannel);
        uElapsedTime =  Gpt_GetTimeElapsed(Wdg_apConfigPtr[Wdg_Instance]->Wdg_TimerChannel);

        /* update timeout */
        SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_03();
        if(Wdg_au32Timeout[Wdg_Instance] < uElapsedTime)
        {
            u32Temp = 0;
        }
        else
        {
            u32Temp = Wdg_au32Timeout[Wdg_Instance] - uElapsedTime;
        }
        Wdg_au32Timeout[Wdg_Instance] =  u32Temp;
        SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_03();
        Wdg_au32GptPeriod[Wdg_Instance] = Wdg_apConfigPtr[Wdg_Instance]->Wdg_ModeSettings[mode]->Wdg_u32TimerTriggeringPeriod;

        /* Start the timer only if the mode is not off mode*/
        if (WDGIF_OFF_MODE != mode)
        {
            Gpt_StartTimer(Wdg_apConfigPtr[Wdg_Instance]->Wdg_TimerChannel,Wdg_au32GptPeriod[Wdg_Instance]);
        }
#endif
        valid = (Std_ReturnType)E_OK;

        /* Remember the last Wdg Mode */
        SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_04();
        Wdg_aePreviousMode[Wdg_Instance] = mode;
        SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_04();
    }
    return valid;
}

#if (WDG_DIRECT_SERVICE == STD_OFF)
/**
 * @brief       This function starts the Gpt channel used for servicing the Wdh.
 *
 * @param[in]   Wdg_Instance  Harwdware WDG instance.
 *
 * */
static inline void Wdg_ChannelStartGpt(const Wdg_Ipw_InstanceType Wdg_Instance)
{
    Gpt_StopTimer(Wdg_apConfigPtr[Wdg_Instance]->Wdg_TimerChannel);

    Wdg_au32GptPeriod[Wdg_Instance] = Wdg_apConfigPtr[Wdg_Instance]->Wdg_ModeSettings[Wdg_apConfigPtr[Wdg_Instance]->Wdg_DefaultMode]->Wdg_u32TimerTriggeringPeriod;

    Gpt_EnableNotification(Wdg_apConfigPtr[Wdg_Instance]->Wdg_TimerChannel);

    /* start the timer channel only if the mode is not off mode */
    if (WDGIF_OFF_MODE != Wdg_apConfigPtr[Wdg_Instance]->Wdg_DefaultMode)
    {
        Gpt_StartTimer(Wdg_apConfigPtr[Wdg_Instance]->Wdg_TimerChannel, Wdg_au32GptPeriod[Wdg_Instance]);
    }
    SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_01();
    Wdg_au32Timeout[Wdg_Instance] = (uint32)(Wdg_au16CfgInitialTimeout[Wdg_Instance]*(Wdg_apConfigPtr[Wdg_Instance]->Wdg_u32TriggerSourceClock));
    SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_01();
}
#endif /* (WDG_DIRECT_SERVICE == STD_OFF) */

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/

/**
* @brief   This function initializes the WDG module.
* @details The @p Wdg_Init function shall initialize the Wdg module and the
*          watchdog hardware, i.e. it shall set the default watchdog mode and
*          timeout period as provided in the configuration set.
*
* @param[in]   pConfigPtr     Pointer to configuration set.
* @param[in]   Wdg_Instance  Harwdware WDG instance.
*
* @implements      Wdg_ChannelInit_Activity
*/
void Wdg_ChannelInit(const Wdg_Ipw_InstanceType Wdg_Instance, const Wdg_ConfigType *pConfigPtr)
{
    Std_ReturnType valid = (Std_ReturnType)E_NOT_OK;

#if (WDG_MULTICORE_ENABLED == STD_ON)
    volatile uint32 coreID;

    coreID = (uint32) Wdg_GetCoreID();
    valid = Wdg_ChannelValidateCoreUsed(coreID, Wdg_Instance,WDG_INIT_ID,WDG_E_PARAM_CONFIG);
    if ((Std_ReturnType)E_OK == valid)
    {
#endif
#if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
        valid = Wdg_ChannelValidateGlobalCall(WDG_INIT_ID,Wdg_Instance);
        if ((Std_ReturnType)E_OK == valid)
        {
#endif /* (WDG_VALIDATE_GLOBAL_CALL == STD_ON */

#if (WDG_VALIDATE_PARAMS == STD_ON)
            valid = Wdg_ValidatePtrInit(pConfigPtr, Wdg_Instance);
            if ((Std_ReturnType)E_OK == valid)
            {
#else
                (void)pConfigPtr;
#endif

#if (WDG_PRECOMPILE_SUPPORT == STD_ON)
                Wdg_apConfigPtr[Wdg_Instance] = Wdg_Config[Wdg_Instance];
                (void)pConfigPtr;
#else
                Wdg_apConfigPtr[Wdg_Instance] = pConfigPtr;
#endif /*(WDG_PRECOMPILE_SUPPORT == STD_ON)*/

#if (WDG_DIRECT_SERVICE == STD_OFF)
#if (WDG_VALIDATE_PARAMS == STD_ON)
                Wdg_aeCurrentMode[Wdg_Instance] = Wdg_apConfigPtr[Wdg_Instance]->Wdg_DefaultMode;
#endif /*(WDG_VALIDATE_PARAMS == STD_ON)*/
                /* Wdg needs to have been in OFF Mode in order to be initialized */
                if ((Wdg_aePreviousMode[Wdg_Instance] == WDGIF_OFF_MODE) && (Wdg_au16CfgInitialTimeout[Wdg_Instance] != (uint16)0U))
                {
#else
                if(Wdg_aePreviousMode[Wdg_Instance] == WDGIF_OFF_MODE)
                {
#endif
                    valid = Wdg_ChannelValidateMode(Wdg_apConfigPtr[Wdg_Instance]->Wdg_DefaultMode, WDG_INIT_ID, WDG_E_PARAM_CONFIG, Wdg_Instance);
                }
                else
                {
                    valid = (Std_ReturnType)E_NOT_OK;
                }

                /* Try to initialize the WDG hardware */
                valid = Wdg_InitialHardware(Wdg_Instance, valid);

                /* Validate harware setting */
                valid = Wdg_VadidateHardwareSetting(Wdg_Instance, valid);
                
                if (valid == (Std_ReturnType)E_OK)
                {
                    /* Hardware settings are valid */
#if (WDG_DIRECT_SERVICE == STD_OFF)
                    Wdg_ChannelStartGpt(Wdg_Instance);
#endif
                    /* Remember the last Wdg Mode */
                    SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_02();
                    Wdg_aePreviousMode[Wdg_Instance] =  Wdg_apConfigPtr[Wdg_Instance]->Wdg_DefaultMode;
                    SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_02();
                }

#if (WDG_VALIDATE_PARAMS == STD_ON)
            }
#endif
#if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
        }
        Wdg_ChannelEndValidateGlobalCall(valid, Wdg_Instance);
#endif
#if (WDG_MULTICORE_ENABLED == STD_ON)
    }
#endif
}

/**
* @brief   Switches the watchdog into the mode Mode.
* @details By choosing one of a limited number of statically configured
*          settings (e.g. toggle or window watchdog, different timeout periods)
*          the Wdg module and the watchdog hardware can be switched between the
*          following three different watchdog modes using the @p Wdg_SetMode
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
*
* @param[in]   Wdg_Instance  Harwdware WDG instance.
*
* @return              Std_ReturnType.
* @retval  E_OK        Mode switch executed completely and successfully.
* @retval  E_NOT_OK    The mode switch encountered errors.
*
* @implements      Wdg_ChannelSetMode_Activity
*/
Std_ReturnType Wdg_ChannelSetMode(const Wdg_Ipw_InstanceType Wdg_Instance, WdgIf_ModeType Mode)
{
    Std_ReturnType ret = (Std_ReturnType)E_NOT_OK;
    Std_ReturnType valid = (Std_ReturnType)E_NOT_OK;

#if (WDG_MULTICORE_ENABLED == STD_ON)
    volatile uint32 coreID;

    coreID = (uint32) Wdg_GetCoreID();
    valid = Wdg_ChannelValidateCoreUsed(coreID, Wdg_Instance,WDG_SETMODE_ID,WDG_E_PARAM_CONFIG);
    if ((Std_ReturnType)E_OK == valid)
    {
#endif
#if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
        valid = Wdg_ChannelValidateGlobalCall(WDG_SETMODE_ID, Wdg_Instance);
        if ((Std_ReturnType)E_OK == valid)
        {
#endif /* (WDG_VALIDATE_GLOBAL_CALL == STD_ON */
            MCAL_FAULT_INJECTION_POINT(T_WDG_INJ_START);
            valid = Wdg_ChannelValidateMode(Mode, WDG_SETMODE_ID, WDG_E_PARAM_MODE, Wdg_Instance);
            if ((Std_ReturnType)E_OK == valid)
            {
#if (WDG_DIRECT_SERVICE == STD_OFF)
#if (WDG_VALIDATE_PARAMS == STD_ON)
                Wdg_aeCurrentMode[Wdg_Instance] = Mode;
#endif /*(WDG_VALIDATE_PARAMS == STD_ON)*/
#endif /*(WDG_DIRECT_SERVICE == STD_OFF)*/

                valid = Wdg_DoChannelSetMode(Wdg_Instance, Mode);
                ret = Wdg_VadidateDoChannelSetMode(Wdg_Instance, Mode, valid);

            }
#if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
        }
        Wdg_ChannelEndValidateGlobalCall(valid, Wdg_Instance);
#endif
#if (WDG_MULTICORE_ENABLED == STD_ON)
    }
#endif
    MCAL_FAULT_INJECTION_POINT(T_WDG_INJ_STOP);
    return ret;
}

#if (WDG_DIRECT_SERVICE == STD_OFF)
    /**
    * @brief   Reset the watchdog timeout counter according to the timeout value passed.
    * @details
    *
    * @param[in]   u16Timeout value (milliseconds) for setting the trigger counter.
    * @param[in]   Wdg_Instance  Harwdware WDG instance.
    *
    * @implements      Wdg_ChannelSetTriggerCondition_Activity
    */
    void Wdg_ChannelSetTriggerCondition(const Wdg_Ipw_InstanceType Wdg_Instance, uint16 u16Timeout)
    {
        Gpt_ValueType uElapsedTime = (Gpt_ValueType)0;
    #if((WDG_VALIDATE_GLOBAL_CALL == STD_ON) ||  (WDG_MULTICORE_ENABLED == STD_ON))
        Std_ReturnType valid = (Std_ReturnType)E_NOT_OK;
    #endif
    #if (WDG_MULTICORE_ENABLED == STD_ON)
        volatile uint32 coreID;
        coreID = (uint32) Wdg_GetCoreID();
        valid = Wdg_ChannelValidateCoreUsed(coreID, Wdg_Instance,WDG_SETTRIGGERCONDITION_ID,WDG_E_PARAM_CONFIG);
        if((Std_ReturnType)E_OK == valid)
        {
    #endif
    #if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
            valid = Wdg_ChannelValidateTrigerCondition(Wdg_Instance);
            if ((Std_ReturnType)E_OK == valid)
            {
    #endif /* (WDG_VALIDATE_GLOBAL_CALL == STD_ON */
    #if (WDG_VALIDATE_PARAMS == STD_ON)
                valid = Wdg_ValidateTimeout(u16Timeout, Wdg_Instance);
                if ((Std_ReturnType)E_OK == valid)
                {
    #endif  
                    uElapsedTime =  Gpt_GetTimeElapsed(Wdg_apConfigPtr[Wdg_Instance]->Wdg_TimerChannel);

                    SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_05();
                    if (((Gpt_ValueType)(uElapsedTime) > Wdg_au32Timeout[Wdg_Instance]) || ((uint16)0 == u16Timeout))
                    {
                        Wdg_au32Timeout[Wdg_Instance] = (uint32)0;
                        SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_05();

                        Gpt_StopTimer(Wdg_apConfigPtr[Wdg_Instance]->Wdg_TimerChannel);
                    }
                    else
                    {
                        Wdg_au32Timeout[Wdg_Instance] = (uint32)(u16Timeout * Wdg_apConfigPtr[Wdg_Instance]->Wdg_u32TriggerSourceClock) + uElapsedTime;
                        SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_05();
                    }
    #if (WDG_VALIDATE_PARAMS == STD_ON)
                }
    #endif
    #if (WDG_VALIDATE_GLOBAL_CALL == STD_ON)
            }
    #endif /* (WDG_VALIDATE_GLOBAL_CALL == STD_ON */
    #if (WDG_MULTICORE_ENABLED == STD_ON)
        }
    #endif /* (WDG_MULTICORE_ENABLED == STD_ON */
    }
#endif /* WDG_DIRECT_SERVICE */


#if (WDG_VERSION_INFO_API == STD_ON)
/**
* @brief   Returns the version information of the module.
* @details The  Wdg_ChannelGetVersionInfo function shall return the version
*          information of this module. The version information includes:
*          - Module Id,
*          - Vendor Id,
*          - Vendor specific version numbers.
*          .
*
* @pre    This ISR is only required if the WDG_VERSION_INFO_API has to be
*         equal STD_ON.
*
* @param[in,out] pVersioninfo   Pointer to where to store the version
*                              information of this module.
*
*
*
* @implements      Wdg_ChannelGetVersionInfo_Activity
*/
void Wdg_ChannelGetVersionInfo
                    (const Wdg_Ipw_InstanceType Wdg_Instance,
                     Std_VersionInfoType *pVersioninfo
                    )
{
#if (WDG_VALIDATE_PARAMS == STD_ON)
    Std_ReturnType valid = (Std_ReturnType)E_NOT_OK;
#endif

    (void)Wdg_Instance;
#if (WDG_VALIDATE_PARAMS == STD_ON)
    valid = Wdg_ValidatePtrVersion(pVersioninfo, Wdg_Instance);

    if ((Std_ReturnType)E_OK == valid)
    {
#endif /*(WDG_VALIDATE_PARAMS == STD_ON)*/
        (pVersioninfo)->vendorID         = (uint16)WDG_CHANNEL_VENDOR_ID;
        (pVersioninfo)->moduleID         = (uint8)WDG_CHANNEL_MODULE_ID;
        (pVersioninfo)->sw_major_version = (uint8)WDG_CHANNEL_SW_MAJOR_VERSION;
        (pVersioninfo)->sw_minor_version = (uint8)WDG_CHANNEL_SW_MINOR_VERSION;
        (pVersioninfo)->sw_patch_version = (uint8)WDG_CHANNEL_SW_PATCH_VERSION;
#if (WDG_VALIDATE_PARAMS == STD_ON)
    }
#endif /*(WDG_VALIDATE_PARAMS == STD_ON)*/

}
#endif /* WDG_VERSION_INFO_API == STD_ON */

#if (WDG_DIRECT_SERVICE == STD_ON)
    /**
    * @brief   Perform a wdg channel service.
    * @details 
    *
    * @param 
    * 
    * @implements      Wdg_ChannelService_Activity
    *
    **/
void Wdg_ChannelService(const Wdg_Ipw_InstanceType Wdg_Instance)
{
    Wdg_Ipw_Service(Wdg_Instance);
}
#endif

#if (WDG_DISABLE_ALLOWED == STD_ON)
#if (WDG_CLEAR_RESET_REQUEST == STD_ON)
    /**
    * @brief   Clear a reset request occurring after Watchdog timeout is reached.
    * @details 
    *
    * @param 
    * 
    * @implements      Wdg_ChannelClearResetRequest_Activity
    *
    **/
void  Wdg_ChannelClearResetRequest(const Wdg_Ipw_InstanceType Wdg_Instance)

{  
    Wdg_Ipw_StatusType retClrReq = WDG_IPW_STATUS_SUCCESS;

    retClrReq = Wdg_Ipw_ClearResetRequest(Wdg_Instance);

    /* Disable the Wdg after a reset request is cleared so that internal logic is not affected */
    if (retClrReq == WDG_IPW_STATUS_SUCCESS)
    {
#if (WDG_VALIDATE_PARAMS == STD_ON)
        if(Wdg_Ipw_Deinit(Wdg_Instance) == (Std_ReturnType)E_NOT_OK)
        {
             /* Wdg is Hard Locked. Avoid calling ClearResetRequest when Hard Lock is on */
            (void)Det_ReportError((uint16)WDG_CHANNEL_MODULE_ID, (uint8)Wdg_Instance, (uint8)WDG_CLEARRESETREQUEST_ID, (uint8)WDG_E_DRIVER_STATE);
        }
        else
        {
            /*Do nothing */
        }
#else
        (void)Wdg_Ipw_Deinit(Wdg_Instance);
#endif /* (WDG_VALIDATE_PARAMS == STD_ON) */
    }
    else
    {
        if (retClrReq == WDG_IPW_STATUS_TIMEOUT)
        {
            /* Raise a runtime det for Osif timeout expired in while the reset request has not been cleared */
            (void)Det_ReportRuntimeError((uint16)WDG_CHANNEL_MODULE_ID, (uint8)Wdg_Instance, (uint8)WDG_CLEARRESETREQUEST_ID, (uint8)WDG_E_PARAM_TIMEOUT);
        } 
#if (WDG_VALIDATE_PARAMS == STD_ON)
        else
        {
            /* Raise a det when clearing reset request failed */
            (void)Det_ReportError((uint16)WDG_CHANNEL_MODULE_ID, (uint8)Wdg_Instance, (uint8)WDG_CLEARRESETREQUEST_ID, (uint8)WDG_E_DRIVER_STATE);
        }
#endif /* (WDG_VALIDATE_PARAMS == STD_ON) */
    }

    SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_08();
    Wdg_aePreviousMode[Wdg_Instance] = WDGIF_OFF_MODE;
    SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_08();

}
#endif
#endif

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

#ifdef __cplusplus
}
#endif
/** @} */
