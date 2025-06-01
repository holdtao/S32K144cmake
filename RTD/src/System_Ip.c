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
*   @defgroup   System_Ip System IP
*   @ingroup    Platform
*
*   @addtogroup System_Ip
*   @{
*/

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "System_Ip.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_SYSTEM_IP_VENDOR_ID_C                    43
#define PLATFORM_SYSTEM_IP_SW_MAJOR_VERSION_C                   1
#define PLATFORM_SYSTEM_IP_SW_MINOR_VERSION_C                   0
#define PLATFORM_SYSTEM_IP_SW_PATCH_VERSION_C                   0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and System_Ip header file are of the same vendor */
#if (PLATFORM_SYSTEM_IP_VENDOR_ID_C != PLATFORM_SYSTEM_IP_VENDOR_ID)
    #error "System_Ip.c and System_Ip.h have different vendor ids"
#endif

/* Check if current file and System_Ip header file are of the same Software version */
#if ((PLATFORM_SYSTEM_IP_SW_MAJOR_VERSION_C != PLATFORM_SYSTEM_IP_SW_MAJOR_VERSION) || \
     (PLATFORM_SYSTEM_IP_SW_MINOR_VERSION_C != PLATFORM_SYSTEM_IP_SW_MINOR_VERSION) || \
     (PLATFORM_SYSTEM_IP_SW_PATCH_VERSION_C != PLATFORM_SYSTEM_IP_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of System_Ip.c and System_Ip.h are different"
#endif


#include "Mcal.h"


/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#if ((STD_ON == SYSTEM_IP_ENABLE_USER_MODE_SUPPORT) && (defined (MCAL_ENABLE_USER_MODE_SUPPORT)))
    #define Call_System_Ip_ConfigIrq(eIrq,bEnable)  \
                OsIf_Trusted_Call2params(System_Ip_ConfigIrqPrivileged,(eIrq),(bEnable))
#ifdef MCM_HAS_WABS_SUPPORTED
    #define Call_System_Ip_ClearWriteAbortFlag()  \
                OsIf_Trusted_Call(System_Ip_ClearWriteAbortFlagPrivileged)
#endif
#ifdef MCM_HAS_PLATFORM_REVISION
    #define Call_System_Ip_GetPlatformRevision()  \
                OsIf_Trusted_Call_Return(System_Ip_GetPlatformRevisionPrivileged)
#endif
#else /*STD_ON == SYSTEM_IP_ENABLE_USER_MODE_SUPPORT*/
    #define Call_System_Ip_ConfigIrq(eIrq,bEnable)  \
                System_Ip_ConfigIrqPrivileged((eIrq), (bEnable))
#ifdef MCM_HAS_WABS_SUPPORTED    
    #define Call_System_Ip_ClearWriteAbortFlag()  \
                System_Ip_ClearWriteAbortFlagPrivileged()
#endif
#ifdef MCM_HAS_PLATFORM_REVISION
    #define Call_System_Ip_GetPlatformRevision()  \
                System_Ip_GetPlatformRevisionPrivileged()
#endif
#endif /*STD_ON == SYSTEM_IP_ENABLE_USER_MODE_SUPPORT*/


#define PLATFORM_START_SEC_CODE
#include "Platform_MemMap.h"

#if (SYSTEM_IP_ARM_CORTEXM4 == STD_ON)
static inline void System_Ip_ConfigIrqPrivileged(System_Ip_IrqType eIrq, boolean bEnable);
#endif
#ifdef MCM_HAS_WABS_SUPPORTED
static inline void System_Ip_ClearWriteAbortFlagPrivileged(void);
#endif
#ifdef MCM_HAS_PLATFORM_REVISION
static inline uint32 System_Ip_GetPlatformRevisionPrivileged(void);
#endif
/**
 * @brief         Enables/disables core-related interrupt exceptions.
 *
 * @details       This function is non-reentrant and configures core-related interrupt
 *
 * */
#if (SYSTEM_IP_ARM_CORTEXM4 == STD_ON)
static inline void System_Ip_ConfigIrqPrivileged(System_Ip_IrqType eIrq, boolean bEnable)
{
#if (SYSTEM_IP_DEV_ERROR_DETECT == STD_ON)
    /* Check interrupt to be enabled */
    DevAssert((sint32)eIrq < 32U);
#endif /*(SYSTEM_IP_DEV_ERROR_DETECT == STD_ON) */
    uint32 regValTemp = IP_MCM->ISCR;
#ifdef MCM_HAS_WABS_SUPPORTED    
    regValTemp &= ~(MCM_ISCR_WABS_MASK);
#endif
    
    if (bEnable)
    {
        regValTemp |= (1UL << (uint32)eIrq);
    }
    else
    {
        regValTemp &= ~(1UL << (uint32)eIrq);
    }
    IP_MCM->ISCR = regValTemp;
}
#endif
#ifdef MCM_HAS_WABS_SUPPORTED
/**
 * @brief         Clears Write Abort on Slave flag.
 *
 * @details       This function is reentrant and clears the flag indicating when a
 *                write abort has occurred on the AHBS interface.
 *
 * */
static inline void System_Ip_ClearWriteAbortFlagPrivileged(void)
{
    IP_MCM->ISCR = MCM_ISCR_WABS_MASK;
}
#endif

#ifdef MCM_HAS_PLATFORM_REVISION
/**
 * @brief         Returns platform revision.
 *
 * @details       This function is reentrant and returns a software-visible revision number.
 * */
static inline uint32 System_Ip_GetPlatformRevisionPrivileged(void)
{
    return IP_MCM->PLREV;
}
#endif

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/


#if (SYSTEM_IP_ARM_CORTEXM4 == STD_ON)
/**
 * @brief         Enables/disables core-related interrupt exceptions.
 *
 * @details       This function is non-reentrant and configures core-related interrupt
 *                exceptions, as defined per each platform.
 *
 * @param[in]     eIrq: core-related interrupt event.
 * @param[in]     bEnable: FALSE - disable interrupt, TRUE - enable interrupt.
 * @return        void
 *
 * @api
 *
 * @implements    System_Ip_ConfigIrq_Activity
 *
 * */
void System_Ip_ConfigIrq(System_Ip_IrqType eIrq, boolean bEnable)
{
    Call_System_Ip_ConfigIrq(eIrq, bEnable);
}
#endif
#ifdef MCM_HAS_WABS_SUPPORTED
/**
 * @brief         Clears Write Abort on Slave flag.
 *
 * @details       This function is reentrant and clears the flag indicating when a
 *                write abort has occurred on the AHBS interface.
 *
 * @return        void
 *
 * @api
 *
 * @implements    System_Ip_ClearWriteAbortFlag_Activity
 *
 * */
void System_Ip_ClearWriteAbortFlag(void)
{
    Call_System_Ip_ClearWriteAbortFlag();
}
#endif

#ifdef MCM_HAS_PLATFORM_REVISION
/**
 * @brief         Returns platform revision.
 *
 * @details       This function is reentrant and returns a software-visible revision number.
 *
 * @return        void
 *
 * @api
 *
 * @implements    System_Ip_GetPlatformRevision_Activity
 *
 * */
uint32 System_Ip_GetPlatformRevision(void)
{
    return Call_System_Ip_GetPlatformRevision();
}
#endif

#define PLATFORM_STOP_SEC_CODE
#include "Platform_MemMap.h"

/** @} */
