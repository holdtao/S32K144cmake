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
 *   @file
 *
 *   @addtogroup Platform
 *   @{
 */

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Mcal.h"
#include "Platform.h"
#include "Platform_Ipw.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_VENDOR_ID_C                     43
#define PLATFORM_AR_RELEASE_MAJOR_VERSION_C      4
#define PLATFORM_AR_RELEASE_MINOR_VERSION_C      4
#define PLATFORM_AR_RELEASE_REVISION_VERSION_C   0
#define PLATFORM_SW_MAJOR_VERSION_C              1
#define PLATFORM_SW_MINOR_VERSION_C              0
#define PLATFORM_SW_PATCH_VERSION_C              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Platform header file are of the same vendor */
#if (PLATFORM_VENDOR_ID_C != PLATFORM_CFG_VENDOR_ID)
    #error "Platform.c and Platform.h have different vendor ids"
#endif
/* Check if current file and Platform header file are of the same Autosar version */
#if ((PLATFORM_AR_RELEASE_MAJOR_VERSION_C    != PLATFORM_AR_RELEASE_MAJOR_VERSION) || \
     (PLATFORM_AR_RELEASE_MINOR_VERSION_C    != PLATFORM_AR_RELEASE_MINOR_VERSION) || \
     (PLATFORM_AR_RELEASE_REVISION_VERSION_C != PLATFORM_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Platform.c and Platform.h are different"
#endif
/* Check if current file and Platform header file are of the same Software version */
#if ((PLATFORM_SW_MAJOR_VERSION_C != PLATFORM_SW_MAJOR_VERSION) || \
     (PLATFORM_SW_MINOR_VERSION_C != PLATFORM_SW_MINOR_VERSION) || \
     (PLATFORM_SW_PATCH_VERSION_C != PLATFORM_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Platform.c and Platform.h are different"
#endif


/* Check if current file and Platform_Ipw header file are of the same vendor */
#if (PLATFORM_VENDOR_ID_C != PLATFORM_PLATFORM_IPW_VENDOR_ID)
    #error "Platform.c and Platform.h have different vendor ids"
#endif
/* Check if current file and Platform_Ipw header file are of the same Autosar version */
#if ((PLATFORM_AR_RELEASE_MAJOR_VERSION_C    != PLATFORM_PLATFORM_IPW_AR_RELEASE_MAJOR_VERSION) || \
     (PLATFORM_AR_RELEASE_MINOR_VERSION_C    != PLATFORM_PLATFORM_IPW_AR_RELEASE_MINOR_VERSION) || \
     (PLATFORM_AR_RELEASE_REVISION_VERSION_C != PLATFORM_PLATFORM_IPW_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Platform.c and Platform_Ipw.h are different"
#endif
/* Check if current file and Platform_Ipw header file are of the same Software version */
#if ((PLATFORM_SW_MAJOR_VERSION_C != PLATFORM_PLATFORM_IPW_SW_MAJOR_VERSION) || \
     (PLATFORM_SW_MINOR_VERSION_C != PLATFORM_PLATFORM_IPW_SW_MINOR_VERSION) || \
     (PLATFORM_SW_PATCH_VERSION_C != PLATFORM_PLATFORM_IPW_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Platform.c and Platform_Ipw.h are different"
#endif

/*==================================================================================================
 *                                        GLOBAL CONSTANTS
==================================================================================================*/

#define PLATFORM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

extern const Platform_ConfigType *const Platform_Config[PLATFORM_MAX_PARTITIONS];

#define PLATFORM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"
 /*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PLATFORM_START_SEC_CODE
#include "Platform_MemMap.h"

#if (PLATFORM_INT_MONITOR == STD_ON)
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
static Std_ReturnType Platform_CheckNullPtrCfg(uint8 u8CoreId);
#endif
#endif

#define PLATFORM_STOP_SEC_CODE
#include "Platform_MemMap.h"
 
/*==================================================================================================
 *                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#define PLATFORM_START_SEC_CODE
#include "Platform_MemMap.h"

#if (PLATFORM_INT_MONITOR == STD_ON)
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
static Std_ReturnType Platform_CheckNullPtrCfg(uint8 u8CoreId)
{
    Std_ReturnType RetVal = (Std_ReturnType)E_NOT_OK;
    if((Platform_Config[u8CoreId]) != NULL_PTR)
    {
        if((Platform_Config[u8CoreId] -> pIpwConfig) != NULL_PTR)
        {
            RetVal = E_OK;
        }
    }
    return RetVal;
}
#endif
#endif

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @internal
 * @brief         Initializes the platform settings based on user configuration.
 * @implements    Platform_Init_Activity
 */
void Platform_Init(const Platform_ConfigType *pConfig)
{

    uint8 u8CoreId;
    
    u8CoreId = (uint8)Platform_GetCoreID();  
    (void)pConfig;
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR != pConfig)
    {
        (void)Det_ReportError((uint16)PLATFORM_MODULE_ID, 0U, PLATFORM_INIT_ID, PLATFORM_E_PARAM_POINTER);
    }
    else
    {
#if (PLATFORM_MULTICORE_SUPPORT == STD_ON)
        if (NULL_PTR == (Platform_Config[u8CoreId]))
        {
            (void)Det_ReportError((uint16)PLATFORM_MODULE_ID, 0U, PLATFORM_INIT_ID, PLATFORM_E_PARAM_CONFIG);
        }
        else
        {
#endif /*(PLATFORM_MULTICORE_SUPPORT == STD_ON)*/
#endif /*(PLATFORM_DEV_ERROR_DETECT == STD_ON)*/

#if (PLATFORM_MSCM_CFG == STD_ON)
            Platform_Ipw_InitNonCore(Platform_Config[u8CoreId] -> pIpwNonCoreConfig);
#endif /* (PLATFORM_MSCM_CFG == STD_ON) */

            Platform_Ipw_Init(Platform_Config[u8CoreId] -> pIpwConfig);
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
#if (PLATFORM_MULTICORE_SUPPORT == STD_ON)
        }
#endif /*(PLATFORM_MULTICORE_SUPPORT == STD_ON)*/
    }
#endif /* (PLATFORM_DEV_ERROR_DETECT == STD_ON)*/
}


/**
 * @internal
 * @brief         Configures (enables/disables) an interrupt request.
 * @implements    Platform_SetIrq_Activity
 */
Std_ReturnType Platform_SetIrq(IRQn_Type eIrqNumber, boolean bEnable)
{
    Std_ReturnType RetValue = (Std_ReturnType)E_OK;

#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
    if (((sint32)eIrqNumber > (sint32)INT_CTRL_IP_IRQ_MAX) || \
        ((sint32)INT_CTRL_IP_IRQ_MIN > (sint32)eIrqNumber))
    {
        (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_SET_IRQ_ID, PLATFORM_E_PARAM_OUT_OF_RANGE);
        RetValue = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif
    {
        Platform_Ipw_SetIrq(eIrqNumber, bEnable);        
    }
    return RetValue;
}

/**
 * @internal
 * @brief         Configures the priority of an interrupt request.
 * @implements    Platform_SetIrqPriority_Activity
 */
Std_ReturnType Platform_SetIrqPriority(IRQn_Type eIrqNumber, uint8 u8Priority)
{
    Std_ReturnType RetValue = (Std_ReturnType)E_OK;

#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
    if (((sint32)eIrqNumber > (sint32)INT_CTRL_IP_IRQ_MAX) || \
        ((sint32)INT_CTRL_IP_IRQ_MIN > (sint32)eIrqNumber) || \
        (u8Priority >= (uint8)(1U << INT_CTRL_IP_NVIC_PRIO_BITS)))
    {
        (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_SET_IRQ_PRIO_ID, PLATFORM_E_PARAM_OUT_OF_RANGE);
        RetValue = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif
    {
        Platform_Ipw_SetIrqPriority(eIrqNumber, u8Priority);        
    }
    return RetValue;
}

/**
 * @internal
 * @brief         Returns the priority of an interrupt request.
 * @implements    Platform_GetIrqPriority_Activity
 */
Std_ReturnType Platform_GetIrqPriority(IRQn_Type eIrqNumber, uint8 * u8Priority)
{
    Std_ReturnType RetValue = (Std_ReturnType)E_OK;

#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
    if (((sint32)eIrqNumber > (sint32)INT_CTRL_IP_IRQ_MAX) || \
        ((sint32)INT_CTRL_IP_IRQ_MIN > (sint32)eIrqNumber))
    {
        (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_GET_IRQ_PRIO_ID, PLATFORM_E_PARAM_OUT_OF_RANGE);
        RetValue = (Std_ReturnType)E_NOT_OK;
    }
    else if (u8Priority == NULL_PTR)
    {
        (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_GET_IRQ_PRIO_ID, PLATFORM_E_PARAM_POINTER);
        RetValue = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif
    {
        *u8Priority = Platform_Ipw_GetIrqPriority(eIrqNumber);
    }
    
    return RetValue;
}

/**
 * @internal
 * @brief         Installs a new handler for an interrupt request.
 * @implements    Platform_InstallIrqHandler_Activity
 */
Std_ReturnType Platform_InstallIrqHandler(IRQn_Type eIrqNumber,
                                          const Platform_IrqHandlerType pfNewHandler,
                                          Platform_IrqHandlerType* const pfOldHandler)
{
    Std_ReturnType RetValue = (Std_ReturnType)E_OK;

#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
    if (((sint32)eIrqNumber > (sint32)INT_CTRL_IP_IRQ_MAX) || \
        ((sint32)INT_CTRL_IP_IRQ_MIN > (sint32)eIrqNumber))
    {
        (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_INSTALL_HANDLER_ID, PLATFORM_E_PARAM_OUT_OF_RANGE);
        RetValue = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif
    {
        Platform_Ipw_InstallIrqHandler(eIrqNumber, pfNewHandler, pfOldHandler);        
    }
    return RetValue;
}

#if (PLATFORM_INT_MONITOR == STD_ON)
/**
 * @internal
 * @brief         Configures (enables/disables) the interrupt monitor.
 * @implements    Platform_SetIrqMonitor_Activity
 */
void Platform_SetIrqMonitor(boolean bEnable)
{
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
    uint8 u8CoreId;
    
    u8CoreId = (uint8)Platform_GetCoreID();
    if((Std_ReturnType)E_NOT_OK == Platform_CheckNullPtrCfg(u8CoreId))
    {
        (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_SET_IRQ_MONITOR_ID, PLATFORM_E_PARAM_CONFIG);
    }
    else
    {
        if ((Std_ReturnType)E_NOT_OK == Platform_Ipw_ValidateSetIrqMonitor(Platform_Config[u8CoreId] -> pIpwConfig))
        {
            (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_SET_IRQ_MONITOR_ID, PLATFORM_E_PARAM_CONFIG);
        }
        else
        {        
#endif
            Platform_Ipw_SetIrqMonitor(bEnable);
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
}

/**
 * @internal
 * @brief         Acknowledges a monitored interrupt has been served.
 * @implements    Platform_AckIrq_Activity
 */
void Platform_AckIrq(IRQn_Type eIrqNumber)
{
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
    if (((sint32)eIrqNumber > (sint32)INT_CTRL_IP_IRQ_MAX) || \
        ((sint32)INT_CTRL_IP_IRQ_MIN > (sint32)eIrqNumber))
    {
        (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_ACK_IRQ_ID, PLATFORM_E_PARAM_OUT_OF_RANGE);
    }
    else
    {
#endif
        Platform_Ipw_AckIrq(eIrqNumber);
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
    }
#endif
    

}

/**
 * @internal
 * @brief         Selects an interrupt to monitor.
 * @implements    Platform_SelectMonitoredIrq_Activity
 */
void Platform_SelectMonitoredIrq(uint8 u8Channel , IRQn_Type eIrqNumber)
{
    uint8 u8CoreId;
    
    u8CoreId = (uint8)Platform_GetCoreID();
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
    if (((sint32)eIrqNumber > (sint32)INT_CTRL_IP_IRQ_MAX) || \
        ((sint32)INT_CTRL_IP_IRQ_MIN > (sint32)eIrqNumber) ||
        (u8Channel >= PLATFORM_INT_MONITOR_CNT))
    {
        (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_SELECT_MONITORED_IRQ_ID, PLATFORM_E_PARAM_OUT_OF_RANGE);
    }
    else
    {
         if((Std_ReturnType)E_OK == Platform_CheckNullPtrCfg(u8CoreId))
        {
            if ((Std_ReturnType)E_NOT_OK == Platform_Ipw_ValidateChannelIntm(Platform_Config[u8CoreId] -> pIpwConfig, u8Channel))
            {
                (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_SELECT_MONITORED_IRQ_ID, PLATFORM_E_PARAM_CONFIG);
            }
            else
            {
#endif
                Platform_Ipw_SelectMonitoredIrq(Platform_Config[u8CoreId] -> pIpwConfig, 
                                            u8Channel, eIrqNumber);
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
            }
        }
        else
        {
             (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_SELECT_MONITORED_IRQ_ID, PLATFORM_E_PARAM_CONFIG);
        }
    }
#endif
}

/**
 * @internal
 * @brief         Sets the latency for a monitored interrupt.
 * @implements    Platform_SetMonitoredIrqLatency_Activity
 */
void Platform_SetMonitoredIrqLatency(uint8 u8Channel, uint32 u32Latency)
{
    uint8 u8CoreId;
    
    u8CoreId = (uint8)Platform_GetCoreID();
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
    if ((u32Latency > PLATFORM_INT_MONITOR_MAX_LATENCY) ||
        (u8Channel >= PLATFORM_INT_MONITOR_CNT))
    {
         (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_SET_MONITORED_IRQ_LATENCY_ID, PLATFORM_E_PARAM_OUT_OF_RANGE);
    }
    else
    {
        if((Std_ReturnType)E_NOT_OK == Platform_CheckNullPtrCfg(u8CoreId))         
        {
            (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_SET_MONITORED_IRQ_LATENCY_ID, PLATFORM_E_PARAM_CONFIG);
        }
        else
        {
            if ((Std_ReturnType)E_NOT_OK == Platform_Ipw_ValidateChannelIntm(Platform_Config[u8CoreId] -> pIpwConfig, u8Channel))
            {
                (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_SET_MONITORED_IRQ_LATENCY_ID, PLATFORM_E_PARAM_CONFIG);
            }
            else
            {
#endif
                Platform_Ipw_SetMonitoredIrqLatency(Platform_Config[u8CoreId] -> pIpwConfig,
                                               u8Channel, u32Latency);
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
            }
        }
    }
#endif
}
/**
 * @internal
 * @brief         Resets the timer for an interrupt monitor.
 * @implements    Platform_ResetIrqMonitorTimer_Activity
 */
void Platform_ResetIrqMonitorTimer(uint8 u8Channel)
{
    uint8 u8CoreId;
    
    u8CoreId = (uint8)Platform_GetCoreID();
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
    if (u8Channel >= PLATFORM_INT_MONITOR_CNT)
    {
        (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_RESET_IRQ_MONITOR_TIMER_ID, PLATFORM_E_PARAM_OUT_OF_RANGE);
    }
    else
    {
        if((Std_ReturnType)E_NOT_OK == Platform_CheckNullPtrCfg(u8CoreId))
        {
            (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_RESET_IRQ_MONITOR_TIMER_ID, PLATFORM_E_PARAM_CONFIG);
        }
        else
        {
            if ((Std_ReturnType)E_NOT_OK == Platform_Ipw_ValidateChannelIntm(Platform_Config[u8CoreId] -> pIpwConfig, u8Channel))
            {
                (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_RESET_IRQ_MONITOR_TIMER_ID, PLATFORM_E_PARAM_CONFIG);
            }
            else
            {
#endif
                Platform_Ipw_ResetIrqMonitorTimer(Platform_Config[u8CoreId] -> pIpwConfig,
                                            u8Channel);
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
            }
        }
    }
#endif
}

/**
 * @internal
 * @brief         Retrieves the status of an interrupt monitor.
 * @implements    Platform_GetIrqMonitorStatus_Activity
 */
Std_ReturnType Platform_GetIrqMonitorStatus(uint8 u8Channel)
{
    uint8 u8CoreId;
    Std_ReturnType RetVal = (Std_ReturnType)E_NOT_OK;
    
    u8CoreId = (uint8)Platform_GetCoreID();
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
    if (u8Channel >= PLATFORM_INT_MONITOR_CNT)
    {
        (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_GET_IRQ_MONITOR_STATUS_ID, PLATFORM_E_PARAM_OUT_OF_RANGE);
    }
    else
    {
        if((Std_ReturnType)E_NOT_OK == Platform_CheckNullPtrCfg(u8CoreId))         
        {
            (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_GET_IRQ_MONITOR_STATUS_ID, PLATFORM_E_PARAM_CONFIG);
        }
        else
        {
            if ((Std_ReturnType)E_NOT_OK == Platform_Ipw_ValidateChannelIntm(Platform_Config[u8CoreId] -> pIpwConfig, u8Channel))
            {
                (void)Det_ReportError(PLATFORM_MODULE_ID, 0U, PLATFORM_GET_IRQ_MONITOR_STATUS_ID, PLATFORM_E_PARAM_CONFIG);
            }
            else
            {         
#endif
                RetVal = Platform_Ipw_GetIrqMonitorStatus(Platform_Config[u8CoreId] -> pIpwConfig,
                                                        u8Channel);
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
            }
        }
    }
 #endif   
    return RetVal;
}
#endif

#define PLATFORM_STOP_SEC_CODE
#include "Platform_MemMap.h"

/** @} */
