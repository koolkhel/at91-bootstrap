/* ----------------------------------------------------------------------------
 *         ATMEL Microcontroller Software Support  -  ROUSSET  -
 * ----------------------------------------------------------------------------
 * Copyright (c) 2007, Stelian Pop <stelian.pop@leadtechdesign.com>
 * Copyright (c) 2007 Lead Tech Design <www.leadtechdesign.com>
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 * File Name           : at91cap9adk.h
 * Object              :
 * Creation            :
 *-----------------------------------------------------------------------------
 */
#ifndef _AT91CAP9ADK_H
#define _AT91CAP9ADK_H

/* ******************************************************************* */
/* PMC Settings                                                        */
/*                                                                     */
/* The main oscillator is enabled as soon as possible in the c_startup */
/* and MCK is switched on the main oscillator.                         */
/* PLL initialization is done later in the hw_init() function          */
/* ******************************************************************* */

#define MASTER_CLOCK		(200000000/2)
#define PLL_LOCK_TIMEOUT	1000000

/* PLLA = 12 MHz * (49 + 1) / 3 = 200 MHz */
#define PLLA_SETTINGS	0x2031be03
/* Set PLLB to 12 MHz * (7 + 1) / 1 = 96 MHz */
#define PLLB_SETTINGS	0x10073e01

/* Switch MCK on PLLA output PCK = PLLA = 2 * MCK */
#define MCKR_SETTINGS		(AT91C_PMC_PRES_CLK | AT91C_PMC_MDIV_2)
#define MCKR_CSS_SETTINGS	(AT91C_PMC_CSS_PLLA_CLK | MCKR_SETTINGS)

/* ******************************************************************* */
/* NorFlash Settings                                                  */
/*                                                                     */
/* ******************************************************************* */

/* ******************************************************************* */
/* SDDRC Settings                                                     */
/*                                                                     */
/* ******************************************************************* */

/* ******************************************************************* */
/* BootStrap Settings                                                  */
/*                                                                     */
/* ******************************************************************* */

#define IMG_ADDRESS 			0x8000			/* Image Address in DataFlash */
#define	IMG_SIZE			0x38000			/* Image Size in NorFlash    */

#define MACH_TYPE       		1442       		/* AT91CAP9ADK */
#define JUMP_ADDR			0x73000000		/* Final Jump Address 	      */

/* ******************************************************************* */
/* Application Settings                                                */
/* ******************************************************************* */
#define CFG_HW_INIT
#define CFG_SDDRC
#define	CFG_DEBUG

#define CFG_NORFLASH

#endif	/* _AT91CAP9ADK_H */
