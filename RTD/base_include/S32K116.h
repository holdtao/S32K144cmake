/*
** ###################################################################
**     Processor:           S32K116_M4
**     Compiler:            Keil ARM C/C++ Compiler
**     Reference manual:    S32K1XX RM Rev.13
**     Version:             rev. 1.0, 2021-02-18
**     Build:               b210218
**
**     Abstract:
**         Peripheral Access Layer for S32K116_M4
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2021 NXP
**
**     NXP Confidential. This software is owned or controlled by NXP and may only be
**     used strictly in accordance with the applicable license terms. By expressly
**     accepting such terms or by downloading, installing, activating and/or otherwise
**     using the software, you are agreeing that you have read, and that you agree to
**     comply with and are bound by, such license terms. If you do not agree to be
**     bound by the applicable license terms, then you may not retain, install,
**     activate or otherwise use the software. The production use license in
**     Section 2.3 is expressly granted for this software.
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 Taru Shree 18-Feb-21  Initial release based on 
**                                      S32K1xx RM Rev 13.
**
** ###################################################################
*/

/*!
 * @file S32K116.h
 * @version 1.0
 * @date 2021-02-18
 * @brief Peripheral Access Layer for S32K116
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */

/* Prevention from multiple including the same memory map */
#if !defined(S32K116_H_)  /* Check if memory map has not been already included */
#define S32K116_H_

/* ----------------------------------------------------------------------------
   -- IP Header Files
   ---------------------------------------------------------------------------- */

/* IP Header Files List */
#include "S32K116_ADC.h"
#include "S32K116_AIPS.h"
#include "S32K116_CMP.h"
#include "S32K116_CMU.h"
#include "S32K116_CRC.h"
#include "S32K116_DMA.h"
#include "S32K116_DMAMUX.h"
#include "S32K116_EIM.h"
#include "S32K116_ERM.h"
#include "S32K116_FLEXCAN.h"
#include "S32K116_FLEXIO.h"
#include "S32K116_FTFC.h"
#include "S32K116_FTM.h"
#include "S32K116_GPIO.h"
#include "S32K116_LMEM.h"
#include "S32K116_LPI2C.h"
#include "S32K116_LPIT.h"
#include "S32K116_LPSPI.h"
#include "S32K116_LPTMR.h"
#include "S32K116_LPUART.h"
#include "S32K116_MCM.h"
#include "S32K116_MPU.h"
#include "S32K116_MSCM.h"
#include "S32K116_MTB_DWT.h"
#include "S32K116_NVIC.h"
#include "S32K116_PCC.h"
#include "S32K116_PDB.h"
#include "S32K116_PMC.h"
#include "S32K116_PORT.h"
#include "S32K116_RCM.h"
#include "S32K116_RTC.h"
#include "S32K116_SCB.h"
#include "S32K116_SCG.h"
#include "S32K116_SIM.h"
#include "S32K116_SMC.h"
#include "S32K116_SYSTICK.h"
#include "S32K116_TRGMUX.h"
#include "S32K116_WDOG.h"

#endif  /* #if !defined(S32K116_H_) */
