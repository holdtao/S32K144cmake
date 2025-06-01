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
*   @addtogroup Wdog_Ip
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Wdog_Ip.h"
#include "Devassert.h"
#include "OsIf.h"
#include "Mcal.h"
#include "SchM_Wdg.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define WDOG_IP_VENDOR_ID_C                      43
#define WDOG_IP_AR_RELEASE_MAJOR_VERSION_C       4
#define WDOG_IP_AR_RELEASE_MINOR_VERSION_C       4
#define WDOG_IP_AR_RELEASE_REVISION_VERSION_C    0
#define WDOG_IP_SW_MAJOR_VERSION_C               1
#define WDOG_IP_SW_MINOR_VERSION_C               0
#define WDOG_IP_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and Wdog_Ip header file are of the same vendor */
#if (WDOG_IP_VENDOR_ID_C != WDOG_IP_VENDOR_ID)
#error "Wdog_Ip.c and Wdog_Ip.h have different vendor ids"
#endif

/* Check if current file and Wdog_Ip header file are of the same Autosar version */
#if ((WDOG_IP_AR_RELEASE_MAJOR_VERSION_C     != WDOG_IP_AR_RELEASE_MAJOR_VERSION) || \
     (WDOG_IP_AR_RELEASE_MINOR_VERSION_C     != WDOG_IP_AR_RELEASE_MINOR_VERSION) || \
     (WDOG_IP_AR_RELEASE_REVISION_VERSION_C  != WDOG_IP_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Wdog_Ip.c and Wdog_Ip.h are different"
#endif

/* Check if current file and Wdog_Ip header file are of the same software version */
#if ((WDOG_IP_SW_MAJOR_VERSION_C != WDOG_IP_SW_MAJOR_VERSION) || \
     (WDOG_IP_SW_MINOR_VERSION_C != WDOG_IP_SW_MINOR_VERSION) || \
     (WDOG_IP_SW_PATCH_VERSION_C != WDOG_IP_SW_PATCH_VERSION))
#error "Software Version Numbers of Wdog_Ip.c and Wdog_Ip.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Devassert header file are of the same Autosar version */
    #if ((WDOG_IP_AR_RELEASE_MAJOR_VERSION_C    != DEVASSERT_AR_RELEASE_MAJOR_VERSION) || \
        (WDOG_IP_AR_RELEASE_MINOR_VERSION_C     != DEVASSERT_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Wdog_Ip.c and Devassert.h are different"
    #endif

    /* Check if current file and OsIf header file are of the same Autosar version */
    #if ((WDOG_IP_AR_RELEASE_MAJOR_VERSION_C    != OSIF_AR_RELEASE_MAJOR_VERSION) || \
        (WDOG_IP_AR_RELEASE_MINOR_VERSION_C     != OSIF_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Wdog_Ip.c and OsIf.h are different"
    #endif

    /* Check if current file and Mcal header file are of the same Autosar version */
    #if ((WDOG_IP_AR_RELEASE_MAJOR_VERSION_C    != MCAL_AR_RELEASE_MAJOR_VERSION) || \
        (WDOG_IP_AR_RELEASE_MINOR_VERSION_C     != MCAL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Wdog_Ip.c and Mcal.h are different"
    #endif

    /* Check if current file and Schm_Wdg header file are of the same Autosar version */
    #if ((WDOG_IP_AR_RELEASE_MAJOR_VERSION_C    != SCHM_WDG_AR_RELEASE_MAJOR_VERSION) || \
        (WDOG_IP_AR_RELEASE_MINOR_VERSION_C     != SCHM_WDG_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Wdog_Ip.c and SchM_Wdg.h are different"
    #endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

#if (WDOG_IP_ENABLE == STD_ON)

#define WDG_START_SEC_CONST_UNSPECIFIED

#include "Wdg_MemMap.h"

/*! @brief Table of base addresses for WDOG instances. */
static WDOG_Type * const s_wdogBase[] = IP_WDOG_BASE_PTRS;

#define WDG_STOP_SEC_CONST_UNSPECIFIED

#include "Wdg_MemMap.h"

#define WDG_START_SEC_VAR_CLEARED_UNSPECIFIED

#include "Wdg_MemMap.h"

static Wdog_Ip_CallbackPtrType Wdog_Ip_apCallbackPtr[WDOG_INSTANCE_COUNT];

#define WDG_STOP_SEC_VAR_CLEARED_UNSPECIFIED

#include "Wdg_MemMap.h"

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
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

/*!
 * @brief Verifies if the WDOG is enabled.
 *
 * This function verifies the state of the WDOG.
 *
 * @param[in] base WDOG base pointer.
 * @return the state of the WDOG.
 */
static inline boolean Wdog_Ip_IsEnabled(const WDOG_Type * base)
{
    return ((base->CS & WDOG_CS_EN_MASK) >> WDOG_CS_EN_SHIFT) != 0U;
}

/*!
 * @brief Refreshes the WDOG counter
 *
 * @param[in] base WDOG base pointer.
 */
static inline void Wdog_Ip_Trigger(WDOG_Type * const base)
{
    OsIf_SuspendAllInterrupts();

    if ((base->CS & WDOG_CS_CMD32EN_MASK) != 0U)
    {
        base->CNT = WDOG_IP_FEATURE_TRIGGER_VALUE;
    }
    else
    {
        base->CNT = WDOG_IP_FEATURE_TRIGGER16_FIRST_VALUE;
        (void)base->CNT;
        base->CNT = WDOG_IP_FEATURE_TRIGGER16_SECOND_VALUE;
    }

    OsIf_ResumeAllInterrupts();
}

/*!
 * @brief Gets the Interrupt Flag.
 *
 * This function gets the Interrupt Flag (FLG).
 *
 * @param[in] base WDOG base pointer.
 */
static inline boolean Wdog_Ip_GetIntFlag(const WDOG_Type * const base)
{
    return ((base->CS & WDOG_CS_FLG_MASK) >> WDOG_CS_FLG_SHIFT) != 0U;
}

/*!
 * @brief Gets the Interrupt Enable status.
 *
 * This function gets the Interrupt Enable bit status (INT).
 *
 * @param[in] base WDOG base pointer.
 */
static inline boolean Wdog_Ip_IsIntEnabled(const WDOG_Type * const base)
{
    return ((base->CS & WDOG_CS_INT_MASK) >> WDOG_CS_INT_SHIFT) != 0U;
}

/*!
 * @brief Write the WDOG unlock sequence.
 *
 * This function checks writes the WDOG unlock sequence
 *
 * @param[in] base WDOG base pointer.
 */
static inline void Wdog_Ip_UnlockCmd(WDOG_Type * const base)
{
    if ((base->CS & WDOG_CS_CMD32EN_MASK) != 0U)
    {
        base->CNT = WDOG_IP_FEATURE_UNLOCK_VALUE;
        (void)base->CNT;
    }
    else
    {
        base->CNT = WDOG_IP_FEATURE_UNLOCK16_FIRST_VALUE;
        (void)base->CNT;
        base->CNT = WDOG_IP_FEATURE_UNLOCK16_SECOND_VALUE;
    }
}

/*!
 * @brief Unlocks the WDOG module.
 *
 * This function unlocks the WDOG. If the unlock is unsuccessfull, 
 * the status WDOG_IP_STATUS_TIMEOUT is returned.
 *
 * @param[in] base WDOG base pointer.
 * @return TRUE if the module is unlocked, FALSE if the module is locked.
 */
static Wdog_Ip_StatusType Wdog_Ip_Unlock(WDOG_Type * const base)
{
    Wdog_Ip_StatusType status = WDOG_IP_STATUS_SUCCESS;

    uint32 TimeoutTicks = OsIf_MicrosToTicks(WDOG_IP_OSIF_TIMEOUT_VAL, WDOG_IP_TIMEOUT_METHOD);
    uint32 CurrentTicks = OsIf_GetCounter(WDOG_IP_TIMEOUT_METHOD); /* initialize current counter */
    uint32 ElapsedTicks = 0u; /* elapsed will give timeout */

    Wdog_Ip_UnlockCmd(base);

    /*Waiting for registers to be unlocked (ULK == 1) */
    while ((((base->CS & WDOG_CS_ULK_MASK) >> WDOG_CS_ULK_SHIFT) == 0U) && (ElapsedTicks < TimeoutTicks))
    {
        ElapsedTicks += OsIf_GetElapsed(&CurrentTicks, WDOG_IP_TIMEOUT_METHOD);
    }

    if(ElapsedTicks >= TimeoutTicks)
    {
        status = WDOG_IP_STATUS_TIMEOUT;
    }

    return status;
}

/*!
 * @brief Clears the Interrupt Flag.
 *
 * This function clears the Interrupt Flag (FLG).
 *
 * @param[in] base WDOG base pointer.
 */
static inline void Wdog_Ip_ClearIntFlag(WDOG_Type * const base)
{
    if (Wdog_Ip_Unlock(base) == WDOG_IP_STATUS_SUCCESS)
    {
        base->CS = (base->CS & ~WDOG_CS_FLG_MASK) | WDOG_CS_FLG(1U);

#ifdef ERRATA_E9005
        /* Read-after-write sequence to guarantee required serialization of memory operations */
        (void)base->CS;
#endif
    }
}

/*!
 * @brief Verifies if the WDOG updates are allowed.
 *
 * This function verifies if software is allowed to reconfigure the WDOG without
 * a reset.
 *
 * @param[in] base WDOG base pointer.
 * @return the state of the WDOG updates:
 *         - FALSE: updates are not allowed
 *         - TRUE: updates are allowed
 */
static inline boolean Wdog_Ip_IsUpdateEnabled(const WDOG_Type * base)
{
    return ((base->CS & WDOG_CS_UPDATE_MASK) >> WDOG_CS_UPDATE_SHIFT) != 0U;
}

/*!
 * @brief Checks if the last configuration of the WDOG was successful.
 *
 * This function checks if the last configuration of the WDOG was successful.
 *
 * @param[in] base WDOG base pointer.
 * @return WDOG_IP_STATUS_SUCCESS if the configuration was successful, WDOG_IP_STATUS_TIMEOUT if not.
 */
static Wdog_Ip_StatusType Wdog_Ip_IsReconfigurationComplete(const WDOG_Type * base)
{
    Wdog_Ip_StatusType status = WDOG_IP_STATUS_SUCCESS;

    uint32 TimeoutTicks = OsIf_MicrosToTicks(WDOG_IP_OSIF_TIMEOUT_VAL, WDOG_IP_TIMEOUT_METHOD);
    uint32 CurrentTicks = OsIf_GetCounter(WDOG_IP_TIMEOUT_METHOD); /* initialize current counter */
    uint32 ElapsedTicks = 0u; /* elapsed will give timeout */

    /* Waiting for the reconfiguration is successful (RCS==1) */
    while ((((base->CS & WDOG_CS_RCS_MASK) >> WDOG_CS_RCS_SHIFT) == 0U) && (ElapsedTicks < TimeoutTicks))
    {
        ElapsedTicks += OsIf_GetElapsed(&CurrentTicks, WDOG_IP_TIMEOUT_METHOD);
    }

    if(ElapsedTicks >= TimeoutTicks)
    {
        status = WDOG_IP_STATUS_TIMEOUT;
    }

    return status;
}

#if (WDOG_IP_DEINIT == STD_ON)
/*FUNCTION**********************************************************************
 *
 * Function Name : Wdog_Ip_HwDeInit
 * Description   : De-init WDOG module.
 *
 *END**************************************************************************/
static void Wdog_Ip_HwDeInit(WDOG_Type * const base)
{
    /* Disable WDOG, enables support for 32-bit refresh/unlock command, LPO clock source,
       allow updates and disable watchdog interrupts, window mode, wait/debug/stop mode */
    base->CS    = WDOG_IP_FEATURE_CS_RESET_VALUE;
    /* Default timeout value */
    base->TOVAL = WDOG_IP_FEATURE_TO_RESET_VALUE;
    /* Clear window value */
    base->WIN   = WDOG_IP_FEATURE_WIN_RESET_VALUE;

    /* Refresh counter value */
    Wdog_Ip_Trigger(base);
}
#endif /* (WDOG_IP_DEINIT == STD_ON) */

/*FUNCTION**********************************************************************
 *
 * Function Name : Wdog_Ip_HwConfig
 * Description   : Configures the WDOG_CS register.
 *
 *END**************************************************************************/
static Wdog_Ip_StatusType Wdog_Ip_HwConfig(const Wdog_Ip_ConfigType * ConfigPtr, uint32 * u32Cs)
{
    Wdog_Ip_StatusType status = WDOG_IP_STATUS_SUCCESS;

    /* If window mode enabled and window value greater than or equal to the timeout value. Or timeout value is 0 */
    if (((ConfigPtr->WinEnable) && (ConfigPtr->WindowValue >= ConfigPtr->TimeoutValue)) \
        || (ConfigPtr->TimeoutValue <= WDOG_IP_FEATURE_MINIMUM_TIMEOUT_VALUE))
    {
        status = WDOG_IP_STATUS_ERROR;
    }
    else
    {
        /* Clear the bits used for configuration */
        *u32Cs &= ~(WDOG_CS_WIN_MASK | WDOG_CS_PRES_MASK | WDOG_CS_CLK_MASK | WDOG_CS_INT_MASK |
                WDOG_CS_UPDATE_MASK | WDOG_CS_DBG_MASK | WDOG_CS_WAIT_MASK | WDOG_CS_STOP_MASK);
        /* Construct CS register new value */
        *u32Cs |=  WDOG_CS_CLK(ConfigPtr->clkSource);
        *u32Cs |=  WDOG_CS_PRES(ConfigPtr->PrescalerEnable ? 1UL : 0UL);
        *u32Cs |=  WDOG_CS_INT(ConfigPtr->IntEnable ? 1UL : 0UL);
        *u32Cs |=  WDOG_CS_UPDATE(ConfigPtr->UpdateEnable ? 1UL : 0UL);
        *u32Cs |=  WDOG_CS_DBG(ConfigPtr->opMode.bDebug ? 1UL : 0UL);
        *u32Cs |=  WDOG_CS_WAIT(ConfigPtr->opMode.bWait ? 1UL : 0UL);
        *u32Cs |=  WDOG_CS_STOP(ConfigPtr->opMode.bStop ? 1UL : 0UL);

        /* Reset interrupt flags */
        *u32Cs |=  WDOG_CS_FLG_MASK;
    }

    return status;
}

#if (WDOG_IP_ENABLE_TEST_MODE == STD_ON)
/*!
 * @brief Read the current WDOG test mode.
 *
 * This function reads the test mode setting of the WDOG from the CS register.
 *
 * @param[in] base WDOG base pointer.
 * @return uint32 value of the CS_TST setting.
 */
static inline uint32 Wdog_Ip_ReadTestMode(const WDOG_Type * base)
{
    return ((base->CS & WDOG_CS_TST_MASK) >> WDOG_CS_TST_SHIFT);
}
#endif /* WDOG_IP_ENABLE_TEST_MODE == STD_ON */

/*==================================================================================================
*                                 GLOBAL FUNCTIONS PROTOTYPES
==================================================================================================*/

void Wdog_Ip_IrqHandler(uint8 Instance);

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/

/*FUNCTION**********************************************************************
 *
 * Function Name : Wdog_Ip_Init
 * Description   : initialize the WDOG driver
 *
 * @implements     Wdog_Ip_Init_Activity
 *END**************************************************************************/
Wdog_Ip_StatusType Wdog_Ip_Init(const uint8 Instance,
                       const Wdog_Ip_ConfigType * const ConfigPtr)
{
    WDOG_Type * base = s_wdogBase[Instance];

#if (WDOG_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(Instance < WDOG_INSTANCE_COUNT);
    DevAssert(ConfigPtr != NULL_PTR);
    DevAssert(!Wdog_Ip_IsEnabled(base));
#endif

    Wdog_Ip_StatusType status = WDOG_IP_STATUS_SUCCESS;
    uint32 u32Cs = 0x00U;

    if (!Wdog_Ip_IsUpdateEnabled(base))
    {
        status = WDOG_IP_STATUS_ERROR;
    }
    else
    {
        /* Configure the WDOG module */
        status = Wdog_Ip_HwConfig(ConfigPtr, &u32Cs);
    }

    if (status == WDOG_IP_STATUS_SUCCESS)
    {
        /* Enable WDOG in 32-bit mode */
        u32Cs |=  WDOG_CS_EN_MASK | WDOG_CS_CMD32EN_MASK;

        /************************************************************************************* 
           OsIf_SuspendAllInterrupts() and OsIf_ResumeAllInterrupts() are used to 
           guard uinterruptible code sequences of unlocking the WDOG and writing to 
           the WDOG registers. When programming target is flash, the Suspend/Resume interrupts
           sequence takes too long and the WDOG locks before writing to the registers, so
           care must be taken to guard all time-critical code, not just the unlock sequence.
        **************************************************************************************/
        OsIf_SuspendAllInterrupts();

        if (Wdog_Ip_Unlock(base) == WDOG_IP_STATUS_SUCCESS)
        {
            base->TOVAL = ConfigPtr->TimeoutValue;

            if (ConfigPtr->WinEnable)
            {
                u32Cs |=  WDOG_CS_WIN_MASK;

                base->WIN = ConfigPtr->WindowValue;
            }

            /* Write CS value to register */
            base->CS = u32Cs;

            if(ConfigPtr->IntEnable == TRUE)
            {
                Wdog_Ip_apCallbackPtr[Instance] = ConfigPtr->pfWdogCallback;
            }
            else
            {
                Wdog_Ip_apCallbackPtr[Instance] = NULL_PTR;
            }

            status = Wdog_Ip_IsReconfigurationComplete(base);
        }
        else
        {
            status = WDOG_IP_STATUS_TIMEOUT;
        }

        OsIf_ResumeAllInterrupts();
    }

    return status;
}
#if (WDOG_IP_DEINIT == STD_ON)
/*FUNCTION**********************************************************************
 *
 * Function Name : Wdog_Ip_DeInit
 * Description   : De-initialize the WDOG driver
 *
 * @implements     Wdog_Ip_DeInit_Activity
 *END**************************************************************************/
Wdog_Ip_StatusType Wdog_Ip_DeInit(const uint8 Instance)
{
#if (WDOG_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(Instance < WDOG_INSTANCE_COUNT);
#endif

    WDOG_Type * base = s_wdogBase[Instance];
    Wdog_Ip_StatusType status = WDOG_IP_STATUS_SUCCESS;

    /* If allowed reconfigures WDOG */
    if (Wdog_Ip_IsUpdateEnabled(base))
    {
        OsIf_SuspendAllInterrupts();

        if (Wdog_Ip_Unlock(base) == WDOG_IP_STATUS_SUCCESS)
        {
            /* Disable WDOG */
            Wdog_Ip_HwDeInit(base);

            Wdog_Ip_apCallbackPtr[Instance] = NULL_PTR;

            status = Wdog_Ip_IsReconfigurationComplete(base);
        }
        else
        {
            status = WDOG_IP_STATUS_TIMEOUT;
        }

        OsIf_ResumeAllInterrupts();
    }
    else
    {
        status = WDOG_IP_STATUS_ERROR;
    }

    return status;
}
#endif/* (WDOG_IP_DEINIT == STD_ON) */

/*FUNCTION**********************************************************************
 *
 * Function Name : Wdog_Ip_Service
 * Description   : Refreshes the WDOG counter
 *
 * @implements     Wdog_Ip_Service_Activity
 *END**************************************************************************/
void Wdog_Ip_Service(const uint8 Instance)
{
#if (WDOG_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(Instance < WDOG_INSTANCE_COUNT);
#endif

    WDOG_Type * base = s_wdogBase[Instance];

    Wdog_Ip_Trigger(base);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Wdog_Ip_SetTimeout
 * Description   : Set time value of the WDOG timeout.
 *
 * @implements     Wdog_Ip_SetTimeout_Activity
 *END**************************************************************************/
Wdog_Ip_StatusType Wdog_Ip_SetTimeout(const uint8 Instance,
                             uint16 Timeout, uint16 WindowValue)
{
#if (WDOG_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(Instance < WDOG_INSTANCE_COUNT);
#endif

    WDOG_Type * base = s_wdogBase[Instance];
    Wdog_Ip_StatusType status = WDOG_IP_STATUS_SUCCESS;
    boolean windowEnable = (WindowValue > (uint16)0) ? (boolean)1U : (boolean)0U;

    /* If allowed reconfigures WDOG */
    if (Wdog_Ip_IsUpdateEnabled(base))
    {
        OsIf_SuspendAllInterrupts();

        if (Wdog_Ip_Unlock(base) == WDOG_IP_STATUS_SUCCESS)
        {
            base->TOVAL = Timeout;

            /* If enable window mode */
            if (windowEnable)
            {
                /* Set window value for the WDOG */
                base->WIN = WindowValue;
            }

            base->CS = (base->CS & ~WDOG_CS_WIN_MASK) | WDOG_CS_WIN(windowEnable ? 1UL : 0UL);

            status = Wdog_Ip_IsReconfigurationComplete(base);
        }
        else
        {
            status = WDOG_IP_STATUS_TIMEOUT;
        }

        OsIf_ResumeAllInterrupts();
    }
    else
    {
        status = WDOG_IP_STATUS_ERROR;
    }

    return status;
}

#if (WDOG_IP_ENABLE_TEST_MODE == STD_ON)
/*FUNCTION**********************************************************************
 *
 * Function Name : Wdog_Ip_SetTestMode
 * Description   : Set test mode of the WDOG.
 *
 * @implements     Wdog_Ip_SetTestMode_Activity
 *END**************************************************************************/
Wdog_Ip_StatusType Wdog_Ip_SetTestMode(const uint8 Instance,
                              Wdog_Ip_TestModeType TestMode)
{
#if (WDOG_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(Instance < WDOG_INSTANCE_COUNT);
#endif

    WDOG_Type * base = s_wdogBase[Instance];
    uint32 regValue = base->CS;
    Wdog_Ip_StatusType status = WDOG_IP_STATUS_SUCCESS;

    /* If allowed reconfigures WDOG */
    if (Wdog_Ip_IsUpdateEnabled(base))
    {
        regValue &= ~(WDOG_CS_TST_MASK);
        regValue |= WDOG_CS_TST(TestMode);

        OsIf_SuspendAllInterrupts();

        if (Wdog_Ip_Unlock(base) == WDOG_IP_STATUS_SUCCESS)
        {
            base->CS = regValue;
            status = Wdog_Ip_IsReconfigurationComplete(base);
        }
        else
        {
            status = WDOG_IP_STATUS_TIMEOUT;
        }

        OsIf_ResumeAllInterrupts();
    }
    else
    {
        status = WDOG_IP_STATUS_ERROR;
    }

    return status;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Wdog_Ip_GetTestMode
 * Description   : Get the current test mode of the WDOG.
 *
 * @implements     Wdog_Ip_GetTestMode_Activity
 *END**************************************************************************/
Wdog_Ip_TestModeType Wdog_Ip_GetTestMode(const uint8 Instance)
{
#if (WDOG_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(Instance < WDOG_INSTANCE_COUNT);
#endif

    WDOG_Type * base = s_wdogBase[Instance];
    Wdog_Ip_TestModeType testMode = WDOG_IP_TST_DISABLED;

    switch (Wdog_Ip_ReadTestMode(base))
    {
        case 0U:
            testMode = WDOG_IP_TST_DISABLED;
            break;
        case 1U:
            testMode = WDOG_IP_TST_USER;
            break;
        case 2U:
            testMode = WDOG_IP_TST_LOW;
            break;
        case 3U:
            testMode = WDOG_IP_TST_HIGH;
            break;
        default:
            testMode = WDOG_IP_TST_DISABLED;
            break;
    }

    return testMode;
}
#endif /* WDOG_IP_ENABLE_TEST_MODE == STD_ON */

/*FUNCTION**********************************************************************
 *
 * Function Name : Wdog_Ip_Config
 * Description   : Configures the WDOG
 *
 * @implements     Wdog_Ip_Config_Activity
 *END**************************************************************************/
Wdog_Ip_StatusType Wdog_Ip_Config(const uint8 Instance,  
                            const Wdog_Ip_ConfigType * const ConfigPtr)
{
#if (WDOG_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(Instance < WDOG_INSTANCE_COUNT);
    DevAssert(ConfigPtr != NULL_PTR);
#endif
    
    WDOG_Type * base           = s_wdogBase[Instance];
    Wdog_Ip_StatusType status            = WDOG_IP_STATUS_SUCCESS;
    uint32 u32Cs = 0x00U;

    boolean bWdogEnabled = Wdog_Ip_IsEnabled(base);
    boolean bUpdateEnabled = Wdog_Ip_IsUpdateEnabled(base);

    if (bUpdateEnabled == FALSE)
    {
        status = WDOG_IP_STATUS_ERROR;
    }
    else
    {
        if (bWdogEnabled == TRUE)
        {
            /* Stop the WDOG counter */
            base->CS &= ~WDOG_CS_EN_MASK;
        }

            /* Configure the WDOG module */
            status = Wdog_Ip_HwConfig(ConfigPtr, &u32Cs);
        }

    if (status == WDOG_IP_STATUS_SUCCESS)
    {
        if (bWdogEnabled == TRUE)
        {
            /* Enable WDOG in 32-bit mode */
            u32Cs |=  WDOG_CS_EN_MASK | WDOG_CS_CMD32EN_MASK;
        }

        OsIf_SuspendAllInterrupts();

        if (Wdog_Ip_Unlock(base) == WDOG_IP_STATUS_SUCCESS)
        {
            base->TOVAL = ConfigPtr->TimeoutValue;
            
            if (ConfigPtr->WinEnable)
            {
                u32Cs |=  WDOG_CS_WIN_MASK;

                base->WIN = ConfigPtr->WindowValue;
            }

            /* Write CS value to register */
            base->CS = u32Cs;

            if(ConfigPtr->IntEnable)
            {
                Wdog_Ip_apCallbackPtr[Instance] = ConfigPtr->pfWdogCallback;
            }
            else
            {
                Wdog_Ip_apCallbackPtr[Instance] = NULL_PTR;
            }

            status = Wdog_Ip_IsReconfigurationComplete(base);
        }
        else
        {
            status = WDOG_IP_STATUS_TIMEOUT;
        }

        OsIf_ResumeAllInterrupts();
    }

    return status;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Wdog_Ip_StartTimer
 * Description   : Starts the WDOG counter.
 *
 * @implements     Wdog_Ip_StartTimer_Activity
 *END**************************************************************************/
Wdog_Ip_StatusType Wdog_Ip_StartTimer(const uint8 Instance)
{
#if (WDOG_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(Instance < WDOG_INSTANCE_COUNT);
#endif
    
    WDOG_Type * base = s_wdogBase[Instance];
    Wdog_Ip_StatusType status = WDOG_IP_STATUS_SUCCESS;

    if (Wdog_Ip_IsEnabled(base) == FALSE)
    {
        if (Wdog_Ip_IsUpdateEnabled(base))
        {
            OsIf_SuspendAllInterrupts();

            if (Wdog_Ip_Unlock(base) == WDOG_IP_STATUS_SUCCESS)
            {
                base->CS |= WDOG_CS_EN_MASK;

                status = Wdog_Ip_IsReconfigurationComplete(base);
            }
            else
            {
                status = WDOG_IP_STATUS_TIMEOUT;    
            }

            OsIf_ResumeAllInterrupts();
        }
        else
        {
            status = WDOG_IP_STATUS_ERROR; 
        }
    }

    return status;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Wdog_Ip_StopTimer
 * Description   : Stops the WDOG counter.
 *
 * @implements     Wdog_Ip_StopTimer_Activity
 *END**************************************************************************/
Wdog_Ip_StatusType Wdog_Ip_StopTimer(const uint8 Instance)
{
#if (WDOG_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(Instance < WDOG_INSTANCE_COUNT);
#endif

    WDOG_Type * base = s_wdogBase[Instance];
    Wdog_Ip_StatusType status = WDOG_IP_STATUS_SUCCESS;

    if (Wdog_Ip_IsEnabled(base) == TRUE)
    {
        if (Wdog_Ip_IsUpdateEnabled(base))
        {
            OsIf_SuspendAllInterrupts();

            if (Wdog_Ip_Unlock(base) == WDOG_IP_STATUS_SUCCESS)
            {
                base->CS &= ~WDOG_CS_EN_MASK;

                status = Wdog_Ip_IsReconfigurationComplete(base);
            }
            else
            {
                status = WDOG_IP_STATUS_TIMEOUT; 
            }

            OsIf_ResumeAllInterrupts();
        }
        else
        {
            status = WDOG_IP_STATUS_ERROR; 
        }
    }

    return status;
}

/**
* @Description    This function handles the WDOG interrupt request.
*
* @implements     Wdog_Ip_IrqHandler_Activity
*/
void Wdog_Ip_IrqHandler(uint8 Instance)
{
#if (WDOG_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(Instance < WDOG_INSTANCE_COUNT);
#endif

    WDOG_Type * base = s_wdogBase[Instance];

    if (Wdog_Ip_GetIntFlag(base))
    {
        Wdog_Ip_ClearIntFlag(base);

        if((Wdog_Ip_apCallbackPtr[Instance] != ((void *)0)) && (Wdog_Ip_IsIntEnabled(base)))
        {
            Wdog_Ip_apCallbackPtr[Instance]();
        }
    }
}

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

#endif /* (WDOG_IP_ENABLE == STD_ON) */

#ifdef __cplusplus
}
#endif

/** @} */
