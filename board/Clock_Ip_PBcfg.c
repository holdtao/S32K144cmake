/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Clocks v7.0
processor: S32K144
package_id: S32K144_LQFP100
mcu_data: PlatformSDK_S32K1_2021_08
processor_version: 0.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
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
*   Build Version        : S32K1_RTD_1_0_0_ASR_REL_4_4_REV_0000_20210810
*
*   (c) Copyright 2020 NXP Semiconductors
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
*   @file       Clock_Ip_PBcfg.c
*   @version    1.0.0
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup CLOCK_DRIVER_CONFIGURATION Clock Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Clock_Ip_PBcfg.h"
#include "StandardTypes.h"
#include "Clock_Ip.h"
#include "Clock_Ip_Private.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_PBCFG_VENDOR_ID_C                      43
#define CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_PBCFG_SW_MINOR_VERSION_C               0
#define CLOCK_IP_PBCFG_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and Clock_Ip_PBcfg.h file are of the same vendor */
#if (CLOCK_IP_PBCFG_VENDOR_ID_C != CLOCK_IP_PBCFG_VENDOR_ID)
    #error "Clock_Ip_PBcfg.c and Clock_Ip_PBcfg.h have different vendor ids"
#endif

/* Check if source file and Clock_Ip_PBcfg.h file are of the same Autosar version */
#if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_PBcfg.h are different"
#endif

/* Check if source file and Clock_Ip_PBcfg.h file are of the same Software version */
#if ((CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C != CLOCK_IP_PBCFG_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_MINOR_VERSION_C != CLOCK_IP_PBCFG_SW_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_PATCH_VERSION_C != CLOCK_IP_PBCFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_PBcfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if source file and StandardTypes.h file are of the same Autosar version */
#if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and StandardTypes.h are different"
#endif
#endif    /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/* Check if source file and Clock_Ip.h file are of the same vendor */
#if (CLOCK_IP_PBCFG_VENDOR_ID_C != CLOCK_IP_VENDOR_ID)
    #error "Clock_Ip_PBcfg.c and Clock_Ip.h have different vendor ids"
#endif

/* Check if source file and Clock_Ip.h file are of the same Autosar version */
#if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip.h are different"
#endif

/* Check if source file and Clock_Ip.h file are of the same Software version */
#if ((CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C != CLOCK_IP_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_MINOR_VERSION_C != CLOCK_IP_SW_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_PATCH_VERSION_C != CLOCK_IP_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip.h are different"
#endif

/* Check if source file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_PBCFG_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_PBcfg.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if source file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_Private.h are different"
#endif

/* Check if source file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_Private.h are different"
#endif
/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!Configuration
name: BOARD_BootClockRUN
called_from_default_init: true
outputs:
- {id: ADC0_CLK.outFreq, value: 8 MHz}
- {id: ADC1_CLK.outFreq, value: 8 MHz}
- {id: BUS_CLK.outFreq, value: 48 MHz}
- {id: CLKOUT0_CLK.outFreq, value: 48 MHz}
- {id: CMP0_CLK.outFreq, value: 48 MHz}
- {id: CORE_CLK.outFreq, value: 48 MHz}
- {id: CRC0_CLK.outFreq, value: 48 MHz}
- {id: DMA0_CLK.outFreq, value: 48 MHz}
- {id: DMAMUX0_CLK.outFreq, value: 48 MHz}
- {id: EIM0_CLK.outFreq, value: 48 MHz}
- {id: ERM0_CLK.outFreq, value: 48 MHz}
- {id: EWM0_CLK.outFreq, value: 48 MHz}
- {id: FIRCDIV1_CLK.outFreq, value: 48 MHz}
- {id: FIRCDIV2_CLK.outFreq, value: 48 MHz}
- {id: FIRCOUT.outFreq, value: 48 MHz}
- {id: FLASH_CLK.outFreq, value: 24 MHz}
- {id: FLEXCAN0_CLK.outFreq, value: 48 MHz}
- {id: FLEXCAN1_CLK.outFreq, value: 48 MHz}
- {id: FLEXCAN2_CLK.outFreq, value: 48 MHz}
- {id: FTFC0_CLK.outFreq, value: 24 MHz}
- {id: FTM0_CLK.outFreq, value: 8 MHz}
- {id: FTM1_CLK.outFreq, value: 8 MHz}
- {id: FTM2_CLK.outFreq, value: 8 MHz}
- {id: FTM3_CLK.outFreq, value: 8 MHz}
- {id: FlexIO0_CLK.outFreq, value: 8 MHz}
- {id: FlexIO_CLK.outFreq, value: 8 MHz}
- {id: LPI2C0_CLK.outFreq, value: 8 MHz}
- {id: LPIT0_CLK.outFreq, value: 8 MHz}
- {id: LPO_128K_CLK.outFreq, value: 128 kHz}
- {id: LPO_1K_CLK.outFreq, value: 1 kHz}
- {id: LPO_32K_CLK.outFreq, value: 32 kHz}
- {id: LPO_CLK.outFreq, value: 128 kHz}
- {id: LPSPI0_CLK.outFreq, value: 8 MHz}
- {id: LPSPI1_CLK.outFreq, value: 8 MHz}
- {id: LPSPI2_CLK.outFreq, value: 8 MHz}
- {id: LPTMR0_CLK.outFreq, value: 8 MHz}
- {id: LPUART0_CLK.outFreq, value: 8 MHz}
- {id: LPUART1_CLK.outFreq, value: 8 MHz}
- {id: LPUART2_CLK.outFreq, value: 8 MHz}
- {id: MPU0_CLK.outFreq, value: 48 MHz}
- {id: MSCM0_CLK.outFreq, value: 48 MHz}
- {id: PDB0_CLK.outFreq, value: 48 MHz}
- {id: PDB1_CLK.outFreq, value: 48 MHz}
- {id: PORTA_CLK.outFreq, value: 48 MHz}
- {id: PORTB_CLK.outFreq, value: 48 MHz}
- {id: PORTC_CLK.outFreq, value: 48 MHz}
- {id: PORTD_CLK.outFreq, value: 48 MHz}
- {id: PORTE_CLK.outFreq, value: 48 MHz}
- {id: RTC0_CLK.outFreq, value: 8 MHz}
- {id: RTC_CLK.outFreq, value: 8 MHz}
- {id: RTC_CLKIN.outFreq, value: 32.768 kHz}
- {id: SCGCLKOUT_CLK.outFreq, value: 48 MHz}
- {id: SIRCDIV1_CLK.outFreq, value: 8 MHz}
- {id: SIRCDIV2_CLK.outFreq, value: 8 MHz}
- {id: SIRCOUT.outFreq, value: 8 MHz}
- {id: SOSCDIV1_CLK.outFreq, value: 8 MHz}
- {id: SOSCDIV2_CLK.outFreq, value: 8 MHz}
- {id: SOSCOUT.outFreq, value: 8 MHz}
- {id: SPLLDIV1_CLK.outFreq, value: 100 MHz}
- {id: SPLLDIV2_CLK.outFreq, value: 100 MHz}
- {id: SYS_CLK.outFreq, value: 48 MHz}
- {id: TRACE_CLK.outFreq, value: 48 MHz}
settings:
- {id: PREDIV.scale, value: '1', locked: true}
- {id: SCG_SOSCCSR_SOSCEN_CFG, value: Enabled}
- {id: SCG_SPLLCSR_SPLLEN_CFG, value: Enabled}
- {id: SPLL_mul.scale, value: '25', locked: true}
sources:
- {id: RTC.RTC_CLK_EXT_IN.outFreq, value: 32.768 kHz, enabled: true}
- {id: SOSC.SOSC.outFreq, value: 8 MHz, enabled: true}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* *************************************************************************
 * Configuration structure for Clock Configuration 
 * ************************************************************************* */
 /*! @brief User Configuration structure clock_Cfg_0 */
 const Clock_Ip_ClockConfigType Mcu_aClockConfigPB[1] = {
    {
        0U,                          /* clkConfigId */
        2U,                       /* ircoscsCount */
        1U,                       /* xoscsCount */
        1U,                       /* pllsCount */
        28U,                       /* selectorsCount */
        20U,                       /* dividersCount */
        0U,                       /* dividerTriggersCount */
        0U,                       /* fracDivsCount */
        4U,                       /* extClksCount */
        40U,                       /* gatesCount */
        0U,                       /* pcfsCount */
        0U,                       /* cmusCount */
        0U,                       /* configureFrequenciesCount */


        /* IRCOSC initialization. */
        {

            #if CLOCK_IRCOSCS_NO > 0U
            {
                SIRC_CLK,       /* name */
                1U,                     /* Enabled ircosc */
                0U,                     /* Disabled regulator */
                1U,                     /* Ircosc range */
                1U,                     /* Ircosc enable in VLP mode */
                0U,                     /* Ircosc disable in STOP mode */
            },
            #endif

            #if CLOCK_IRCOSCS_NO > 1U
            {
                FIRC_CLK,       /* name */
                1U,                     /* Enabled ircosc */
                0U,                     /* Disabled regulator */
                0U,                     /* Ircosc range */
                0U,                     /* Ircosc disable in VLP mode */
                0U,                     /* Ircosc disable in STOP mode */
            },
            #endif
        },

        /* XOSC initialization. */
        {

            #if CLOCK_XOSCS_NO > 0U
            {
                SOSC_CLK,              /* Clock name associated to xosc */
                8000000U,              /* External oscillator frequency */ 
                1U,                     /* Enable xosc */
                0U,                   /* Startup stabilization time */
                0U,                   /* XOSC bypass option */ 
                0U,                   /* Comparator is not enabled */ 
                0U,                     /* Crystal overdrive protection */
                0U,                     /* High gain value */
                FEATURE_CLOCK_IP_HAS_MONITOR_DISABLE,                     /* Monitor type */
            },
            #endif
        },


        /* PLL initialization. */
        {

            #if CLOCK_PLLS_NO > 0U
            {
                SPLL_CLK,                /* name */
                1U,                     /* enable */
                SOSC_CLK,           /* inputReference */
                0U,                     /* Bypass */
                1U,                      /* predivider */
                0U,                     /* numeratorFracLoopDiv */
                25U,                   /* mulFactorDiv */
                0U,                     /* modulation */
                0U,                     /* Modulaton type: Spread spectrum modulation not bypassed */ 
                0U,                     /* modulationPeriod */
                1U,                     /* incrementStep */
                0U,                     /* sigmaDelta */
                0U,                     /* ditherControl */
                0U,                     /* ditherControlValue */
                FEATURE_CLOCK_IP_HAS_MONITOR_DISABLE,                     /* Monitor type */
            },
            #endif
        },



        /* SELECTOR initialization. */
        {

            #if CLOCK_SELECTORS_NO > 0U
            {
                SCS_RUN_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 1U
            {
                SCS_VLPR_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 2U
            {
                SCS_HSRUN_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 3U
            {
                SCG_CLKOUT_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 4U
            {
                RTC_CLK,                    /* Clock name associated to selector */
                SOSCDIV1_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 5U
            {
                LPO_CLK,                    /* Clock name associated to selector */
                LPO_128K_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 6U
            {
                TRACE_CLK,                    /* Clock name associated to selector */
                CORE_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 7U
            {
                CLKOUT0_CLK,                    /* Clock name associated to selector */
                SCG_CLKOUT_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 8U
            {
                FTM0_EXT_CLK,                    /* Clock name associated to selector */
                TCLK0_REF_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 9U
            {
                FTM1_EXT_CLK,                    /* Clock name associated to selector */
                TCLK0_REF_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 10U
            {
                FTM2_EXT_CLK,                    /* Clock name associated to selector */
                TCLK0_REF_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 11U
            {
                FTM3_EXT_CLK,                    /* Clock name associated to selector */
                TCLK0_REF_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 12U
            {
                FTM0_CLK,                    /* Clock name associated to selector */
                SIRCDIV1_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 13U
            {
                FTM1_CLK,                    /* Clock name associated to selector */
                SIRCDIV1_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 14U
            {
                FTM2_CLK,                    /* Clock name associated to selector */
                SIRCDIV1_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 15U
            {
                FTM3_CLK,                    /* Clock name associated to selector */
                SIRCDIV1_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 16U
            {
                ADC1_CLK,                    /* Clock name associated to selector */
                SIRCDIV2_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 17U
            {
                LPSPI0_CLK,                    /* Clock name associated to selector */
                SIRCDIV2_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 18U
            {
                LPSPI1_CLK,                    /* Clock name associated to selector */
                SIRCDIV2_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 19U
            {
                LPSPI2_CLK,                    /* Clock name associated to selector */
                SIRCDIV2_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 20U
            {
                LPIT0_CLK,                    /* Clock name associated to selector */
                SIRCDIV2_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 21U
            {
                ADC0_CLK,                    /* Clock name associated to selector */
                SIRCDIV2_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 22U
            {
                FlexIO_CLK,                    /* Clock name associated to selector */
                SIRCDIV2_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 23U
            {
                LPI2C0_CLK,                    /* Clock name associated to selector */
                SIRCDIV2_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 24U
            {
                LPUART0_CLK,                    /* Clock name associated to selector */
                SIRCDIV2_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 25U
            {
                LPUART1_CLK,                    /* Clock name associated to selector */
                SIRCDIV2_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 26U
            {
                LPUART2_CLK,                    /* Clock name associated to selector */
                SIRCDIV2_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_SELECTORS_NO > 27U
            {
                LPTMR0_CLK,                    /* Clock name associated to selector */
                SIRCDIV2_CLK,                    /* Name of the selected input source */
            },
            #endif
        },


        /* DIVIDER initialization. */
        {

            #if CLOCK_DIVIDERS_NO > 0U
            {
                SIRCDIV1_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 1U
            {
                SIRCDIV2_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 2U
            {
                FIRCDIV1_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 3U
            {
                FIRCDIV2_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 4U
            {
                SOSCDIV1_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 5U
            {
                SOSCDIV2_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 6U
            {
                SPLLDIV1_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 7U
            {
                SPLLDIV2_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 8U
            {
                CORE_RUN_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 9U
            {
                CORE_VLPR_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 10U
            {
                CORE_HSRUN_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 11U
            {
                BUS_RUN_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 12U
            {
                BUS_VLPR_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 13U
            {
                BUS_HSRUN_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 14U
            {
                SLOW_RUN_CLK,                    /* name */
                2U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 15U
            {
                SLOW_VLPR_CLK,                    /* name */
                2U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 16U
            {
                SLOW_HSRUN_CLK,                    /* name */
                2U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 17U
            {
                CLKOUT0_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 18U
            {
                LPTMR0_CLK,                    /* name */
                1U,                              /* value */
                {
                    1U,
                }
            },
            #endif

            #if CLOCK_DIVIDERS_NO > 19U
            {
                TRACE_CLK,                    /* name */
                1U,                              /* value */
                {
                    1U,
                }
            },
            #endif
        },


        /* DIVIDER TRIGGER Initialization. */
        {
            #if CLOCK_DIVIDER_TRIGGERS_NO > 0U
            {
                RESERVED_CLK,          /* divider name */
                IMMEDIATE_DIVIDER_UPDATE,                    /* trigger value */
                RESERVED_CLK,          /* input source name */
            },
            #endif
        },



        /* FRACTIONAL DIVIDER initialization. */
        {
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
        },


        /* EXTERNAL CLOCKS initialization. */
        {

            #if CLOCK_EXT_CLKS_NO > 0U
            {
                TCLK0_REF_CLK,                    /* name */
                0U,                              /* value */
            },
            #endif

            #if CLOCK_EXT_CLKS_NO > 1U
            {
                TCLK1_REF_CLK,                    /* name */
                0U,                              /* value */
            },
            #endif

            #if CLOCK_EXT_CLKS_NO > 2U
            {
                TCLK2_REF_CLK,                    /* name */
                0U,                              /* value */
            },
            #endif

            #if CLOCK_EXT_CLKS_NO > 3U
            {
                RTC_CLKIN,                    /* name */
                32768U,                              /* value */
            },
            #endif
        },



        /* CLOCK GATES initialization. */
        {

            #if CLOCK_GATES_NO > 0U
            {
                LPO_32K_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 1U
            {
                LPO_1K_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 2U
            {
                ADC0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 3U
            {
                ADC1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 4U
            {
                CLKOUT0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 5U
            {
                CMP0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 6U
            {
                CRC0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 7U
            {
                DMA0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 8U
            {
                DMAMUX0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 9U
            {
                EIM0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 10U
            {
                ERM0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 11U
            {
                EWM0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 12U
            {
                FLEXCAN0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 13U
            {
                FLEXCAN1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 14U
            {
                FLEXCAN2_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 15U
            {
                FlexIO_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 16U
            {
                FTFC_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 17U
            {
                FTM0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 18U
            {
                FTM1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 19U
            {
                FTM2_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 20U
            {
                FTM3_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 21U
            {
                LPI2C0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 22U
            {
                LPIT0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 23U
            {
                LPSPI0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 24U
            {
                LPSPI1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 25U
            {
                LPSPI2_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 26U
            {
                LPTMR0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 27U
            {
                LPUART0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 28U
            {
                LPUART1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 29U
            {
                LPUART2_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 30U
            {
                MPU0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 31U
            {
                MSCM0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 32U
            {
                PDB0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 33U
            {
                PDB1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 34U
            {
                PORTA_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 35U
            {
                PORTB_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 36U
            {
                PORTC_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 37U
            {
                PORTD_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 38U
            {
                PORTE_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_GATES_NO > 39U
            {
                RTC0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif
        },


        /* Progressive clock switching */ 
        {
            {
                RESERVED_CLK,
                0,
                0,
                RESERVED_CLK,
                0,
            },
        },


        /* Clock monitor */ 
        {
            {
                RESERVED_CLK,
                0U,
                0U,
                0U,
            },
        },


        /* Specific peripheral initialization. */
        {
            0U,
            {
                {
                    RESERVED_VALUE,
                    0U,
                },
            },
        },


        /* Configured frequency values. */
        {
            {
                RESERVED_CLK,
                0U,
            },
        },
    },
};


#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
