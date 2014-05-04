/*
 * Copyright (c) 2013 - 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __FSL_DEVICE_REGISTERS_H__
#define __FSL_DEVICE_REGISTERS_H__

/*
 * Include the cpu specific register header files.
 *
 * The CPU macro should be declared in the project or makefile.
 */
#if (defined(CPU_MK22FN512VDC12))
    #define K22F51212_SERIES
    /* Extension register headers. (These will eventually be merged into the CMSIS-style header.)*/
    #include "device/MK22F51212/MK22F51212_adc.h"
    #include "device/MK22F51212/MK22F51212_cmp.h"
    #include "device/MK22F51212/MK22F51212_crc.h"
    #include "device/MK22F51212/MK22F51212_dac.h"
    #include "device/MK22F51212/MK22F51212_dma.h"
    #include "device/MK22F51212/MK22F51212_dmamux.h"
    #include "device/MK22F51212/MK22F51212_ewm.h"
    #include "device/MK22F51212/MK22F51212_fb.h"
    #include "device/MK22F51212/MK22F51212_fmc.h"
    #include "device/MK22F51212/MK22F51212_ftfa.h"
    #include "device/MK22F51212/MK22F51212_ftm.h"
    #include "device/MK22F51212/MK22F51212_gpio.h"
    #include "device/MK22F51212/MK22F51212_i2c.h"
    #include "device/MK22F51212/MK22F51212_i2s.h"
    #include "device/MK22F51212/MK22F51212_llwu.h"
    #include "device/MK22F51212/MK22F51212_lptmr.h"
    #include "device/MK22F51212/MK22F51212_lpuart.h"
    #include "device/MK22F51212/MK22F51212_mcg.h"
    #include "device/MK22F51212/MK22F51212_mcm.h"
    #include "device/MK22F51212/MK22F51212_nv.h"
    #include "device/MK22F51212/MK22F51212_osc.h"
    #include "device/MK22F51212/MK22F51212_pdb.h"
    #include "device/MK22F51212/MK22F51212_pit.h"
    #include "device/MK22F51212/MK22F51212_pmc.h"
    #include "device/MK22F51212/MK22F51212_port.h"
    #include "device/MK22F51212/MK22F51212_rcm.h"
    #include "device/MK22F51212/MK22F51212_rfsys.h"
    #include "device/MK22F51212/MK22F51212_rfvbat.h"
    #include "device/MK22F51212/MK22F51212_rng.h"
    #include "device/MK22F51212/MK22F51212_rtc.h"
    #include "device/MK22F51212/MK22F51212_sim.h"
    #include "device/MK22F51212/MK22F51212_smc.h"
    #include "device/MK22F51212/MK22F51212_spi.h"
    #include "device/MK22F51212/MK22F51212_uart.h"
    #include "device/MK22F51212/MK22F51212_usb.h"
    #include "device/MK22F51212/MK22F51212_vref.h"
    #include "device/MK22F51212/MK22F51212_wdog.h"

    /* CMSIS-style register definitions*/
    #include "device/MK22F51212/MK22F51212.h"

#elif (defined(CPU_MK24FN1M0VLQ12))
    /* Extension register headers. (These will eventually be merged into the CMSIS-style header.)*/
    #include "device/MK24F12/MK24F12_adc.h"
    #include "device/MK24F12/MK24F12_aips.h"
    #include "device/MK24F12/MK24F12_axbs.h"
    #include "device/MK24F12/MK24F12_can.h"
    #include "device/MK24F12/MK24F12_cau.h"
    #include "device/MK24F12/MK24F12_cmp.h"
    #include "device/MK24F12/MK24F12_cmt.h"
    #include "device/MK24F12/MK24F12_crc.h"
    #include "device/MK24F12/MK24F12_dac.h"
    #include "device/MK24F12/MK24F12_dma.h"
    #include "device/MK24F12/MK24F12_dmamux.h"
    #include "device/MK24F12/MK24F12_ewm.h"
    #include "device/MK24F12/MK24F12_fb.h"
    #include "device/MK24F12/MK24F12_fmc.h"
    #include "device/MK24F12/MK24F12_ftfe.h"
    #include "device/MK24F12/MK24F12_ftm.h"
    #include "device/MK24F12/MK24F12_gpio.h"
    #include "device/MK24F12/MK24F12_i2c.h"
    #include "device/MK24F12/MK24F12_i2s.h"
    #include "device/MK24F12/MK24F12_llwu.h"
    #include "device/MK24F12/MK24F12_lptmr.h"
    #include "device/MK24F12/MK24F12_mcg.h"
    #include "device/MK24F12/MK24F12_mcm.h"
    #include "device/MK24F12/MK24F12_mpu.h"
    #include "device/MK24F12/MK24F12_nv.h"
    #include "device/MK24F12/MK24F12_osc.h"
    #include "device/MK24F12/MK24F12_pdb.h"
    #include "device/MK24F12/MK24F12_pit.h"
    #include "device/MK24F12/MK24F12_pmc.h"
    #include "device/MK24F12/MK24F12_port.h"
    #include "device/MK24F12/MK24F12_rcm.h"
    #include "device/MK24F12/MK24F12_rfsys.h"
    #include "device/MK24F12/MK24F12_rfvbat.h"
    #include "device/MK24F12/MK24F12_rng.h"
    #include "device/MK24F12/MK24F12_rtc.h"
    #include "device/MK24F12/MK24F12_sdhc.h"
    #include "device/MK24F12/MK24F12_sim.h"
    #include "device/MK24F12/MK24F12_smc.h"
    #include "device/MK24F12/MK24F12_spi.h"
    #include "device/MK24F12/MK24F12_uart.h"
    #include "device/MK24F12/MK24F12_usb.h"
    #include "device/MK24F12/MK24F12_usbdcd.h"
    #include "device/MK24F12/MK24F12_vref.h"
    #include "device/MK24F12/MK24F12_wdog.h"

    /* CMSIS-style register definitions*/
    #include "device/MK24F12/MK24F12.h"

#elif (defined(CPU_MK63FN1M0VMD12))
    /* Extension register headers. (These will eventually be merged into the CMSIS-style header.)*/
    #include "device/MK63F12/MK63F12_adc.h"
    #include "device/MK63F12/MK63F12_aips.h"
    #include "device/MK63F12/MK63F12_axbs.h"
    #include "device/MK63F12/MK63F12_can.h"
    #include "device/MK63F12/MK63F12_cau.h"
    #include "device/MK63F12/MK63F12_cmp.h"
    #include "device/MK63F12/MK63F12_cmt.h"
    #include "device/MK63F12/MK63F12_crc.h"
    #include "device/MK63F12/MK63F12_dac.h"
    #include "device/MK63F12/MK63F12_dma.h"
    #include "device/MK63F12/MK63F12_dmamux.h"
    #include "device/MK63F12/MK63F12_enet.h"
    #include "device/MK63F12/MK63F12_ewm.h"
    #include "device/MK63F12/MK63F12_fb.h"
    #include "device/MK63F12/MK63F12_fmc.h"
    #include "device/MK63F12/MK63F12_ftfe.h"
    #include "device/MK63F12/MK63F12_ftm.h"
    #include "device/MK63F12/MK63F12_gpio.h"
    #include "device/MK63F12/MK63F12_i2c.h"
    #include "device/MK63F12/MK63F12_i2s.h"
    #include "device/MK63F12/MK63F12_llwu.h"
    #include "device/MK63F12/MK63F12_lptmr.h"
    #include "device/MK63F12/MK63F12_mcg.h"
    #include "device/MK63F12/MK63F12_mcm.h"
    #include "device/MK63F12/MK63F12_mpu.h"
    #include "device/MK63F12/MK63F12_nv.h"
    #include "device/MK63F12/MK63F12_osc.h"
    #include "device/MK63F12/MK63F12_pdb.h"
    #include "device/MK63F12/MK63F12_pit.h"
    #include "device/MK63F12/MK63F12_pmc.h"
    #include "device/MK63F12/MK63F12_port.h"
    #include "device/MK63F12/MK63F12_rcm.h"
    #include "device/MK63F12/MK63F12_rfsys.h"
    #include "device/MK63F12/MK63F12_rfvbat.h"
    #include "device/MK63F12/MK63F12_rng.h"
    #include "device/MK63F12/MK63F12_rtc.h"
    #include "device/MK63F12/MK63F12_sdhc.h"
    #include "device/MK63F12/MK63F12_sim.h"
    #include "device/MK63F12/MK63F12_smc.h"
    #include "device/MK63F12/MK63F12_spi.h"
    #include "device/MK63F12/MK63F12_uart.h"
    #include "device/MK63F12/MK63F12_usb.h"
    #include "device/MK63F12/MK63F12_usbdcd.h"
    #include "device/MK63F12/MK63F12_vref.h"
    #include "device/MK63F12/MK63F12_wdog.h"

    /* CMSIS-style register definitions*/
    #include "device/MK63F12/MK63F12.h"

#elif (defined(CPU_MK63FN1M0VMD12WS))
    /* Extension register headers. (These will eventually be merged into the CMSIS-style header.)*/
    #include "device/MK63F12WS/MK63F12WS_adc.h"
    #include "device/MK63F12WS/MK63F12WS_aips.h"
    #include "device/MK63F12WS/MK63F12WS_axbs.h"
    #include "device/MK63F12WS/MK63F12WS_can.h"
    #include "device/MK63F12WS/MK63F12WS_cau.h"
    #include "device/MK63F12WS/MK63F12WS_cmp.h"
    #include "device/MK63F12WS/MK63F12WS_cmt.h"
    #include "device/MK63F12WS/MK63F12WS_crc.h"
    #include "device/MK63F12WS/MK63F12WS_dac.h"
    #include "device/MK63F12WS/MK63F12WS_dma.h"
    #include "device/MK63F12WS/MK63F12WS_dmamux.h"
    #include "device/MK63F12WS/MK63F12WS_dry.h"
    #include "device/MK63F12WS/MK63F12WS_enet.h"
    #include "device/MK63F12WS/MK63F12WS_ewm.h"
    #include "device/MK63F12WS/MK63F12WS_fb.h"
    #include "device/MK63F12WS/MK63F12WS_fmc.h"
    #include "device/MK63F12WS/MK63F12WS_ftfe.h"
    #include "device/MK63F12WS/MK63F12WS_ftm.h"
    #include "device/MK63F12WS/MK63F12WS_gpio.h"
    #include "device/MK63F12WS/MK63F12WS_i2c.h"
    #include "device/MK63F12WS/MK63F12WS_i2s.h"
    #include "device/MK63F12WS/MK63F12WS_llwu.h"
    #include "device/MK63F12WS/MK63F12WS_lptmr.h"
    #include "device/MK63F12WS/MK63F12WS_mcg.h"
    #include "device/MK63F12WS/MK63F12WS_mcm.h"
    #include "device/MK63F12WS/MK63F12WS_mpu.h"
    #include "device/MK63F12WS/MK63F12WS_nv.h"
    #include "device/MK63F12WS/MK63F12WS_osc.h"
    #include "device/MK63F12WS/MK63F12WS_pdb.h"
    #include "device/MK63F12WS/MK63F12WS_pit.h"
    #include "device/MK63F12WS/MK63F12WS_pmc.h"
    #include "device/MK63F12WS/MK63F12WS_port.h"
    #include "device/MK63F12WS/MK63F12WS_rcm.h"
    #include "device/MK63F12WS/MK63F12WS_rfsys.h"
    #include "device/MK63F12WS/MK63F12WS_rfvbat.h"
    #include "device/MK63F12WS/MK63F12WS_rng.h"
    #include "device/MK63F12WS/MK63F12WS_rtc.h"
    #include "device/MK63F12WS/MK63F12WS_sdhc.h"
    #include "device/MK63F12WS/MK63F12WS_sim.h"
    #include "device/MK63F12WS/MK63F12WS_smc.h"
    #include "device/MK63F12WS/MK63F12WS_spi.h"
    #include "device/MK63F12WS/MK63F12WS_uart.h"
    #include "device/MK63F12WS/MK63F12WS_usb.h"
    #include "device/MK63F12WS/MK63F12WS_usbdcd.h"
    #include "device/MK63F12WS/MK63F12WS_vref.h"
    #include "device/MK63F12WS/MK63F12WS_wdog.h"

    /* CMSIS-style register definitions*/
    #include "device/MK63F12WS/MK63F12WS.h"

#elif (defined(CPU_MK64FX512VDC12) || defined(CPU_MK64FN1M0VDC12) || defined(CPU_MK64FX512VLL12) || \
    defined(CPU_MK64FN1M0VLL12) || defined(CPU_MK64FX512VLQ12) || defined(CPU_MK64FN1M0VLQ12) || \
    defined(CPU_MK64FX512VMD12) || defined(CPU_MK64FN1M0VMD12))
    #define K64F12_SERIES

    /* Extension register headers. (These will eventually be merged into the CMSIS-style header.)*/
    #include "device/MK64F12/MK64F12_adc.h"
    #include "device/MK64F12/MK64F12_aips.h"
    #include "device/MK64F12/MK64F12_axbs.h"
    #include "device/MK64F12/MK64F12_can.h"
    #include "device/MK64F12/MK64F12_cau.h"
    #include "device/MK64F12/MK64F12_cmp.h"
    #include "device/MK64F12/MK64F12_cmt.h"
    #include "device/MK64F12/MK64F12_crc.h"
    #include "device/MK64F12/MK64F12_dac.h"
    #include "device/MK64F12/MK64F12_dma.h"
    #include "device/MK64F12/MK64F12_dmamux.h"
    #include "device/MK64F12/MK64F12_enet.h"
    #include "device/MK64F12/MK64F12_ewm.h"
    #include "device/MK64F12/MK64F12_fb.h"
    #include "device/MK64F12/MK64F12_fmc.h"
    #include "device/MK64F12/MK64F12_ftfe.h"
    #include "device/MK64F12/MK64F12_ftm.h"
    #include "device/MK64F12/MK64F12_gpio.h"
    #include "device/MK64F12/MK64F12_i2c.h"
    #include "device/MK64F12/MK64F12_i2s.h"
    #include "device/MK64F12/MK64F12_llwu.h"
    #include "device/MK64F12/MK64F12_lptmr.h"
    #include "device/MK64F12/MK64F12_mcg.h"
    #include "device/MK64F12/MK64F12_mcm.h"
    #include "device/MK64F12/MK64F12_mpu.h"
    #include "device/MK64F12/MK64F12_nv.h"
    #include "device/MK64F12/MK64F12_osc.h"
    #include "device/MK64F12/MK64F12_pdb.h"
    #include "device/MK64F12/MK64F12_pit.h"
    #include "device/MK64F12/MK64F12_pmc.h"
    #include "device/MK64F12/MK64F12_port.h"
    #include "device/MK64F12/MK64F12_rcm.h"
    #include "device/MK64F12/MK64F12_rfsys.h"
    #include "device/MK64F12/MK64F12_rfvbat.h"
    #include "device/MK64F12/MK64F12_rng.h"
    #include "device/MK64F12/MK64F12_rtc.h"
    #include "device/MK64F12/MK64F12_sdhc.h"
    #include "device/MK64F12/MK64F12_sim.h"
    #include "device/MK64F12/MK64F12_smc.h"
    #include "device/MK64F12/MK64F12_spi.h"
    #include "device/MK64F12/MK64F12_uart.h"
    #include "device/MK64F12/MK64F12_usb.h"
    #include "device/MK64F12/MK64F12_usbdcd.h"
    #include "device/MK64F12/MK64F12_vref.h"
    #include "device/MK64F12/MK64F12_wdog.h"

    /* CMSIS-style register definitions*/
    #include "device/MK64F12/MK64F12.h"

#elif (defined(CPU_MK70FN1M0VMF12) || defined(CPU_MK70FX512VMF12) || defined(CPU_MK70FN1M0VMF15) || \
    defined(CPU_MK70FX512VMF15) || defined(CPU_MK70FN1M0VMJ12) || defined(CPU_MK70FX512VMJ12) || \
    defined(CPU_MK70FN1M0VMJ15) || defined(CPU_MK70FX512VMJ15))
    #define K70F12_SERIES
    /* Extension register headers. (These will eventually be merged into the CMSIS-style header.)*/
    #include "device/MK70F12/MK70F12_adc.h"
    #include "device/MK70F12/MK70F12_aips.h"
    #include "device/MK70F12/MK70F12_axbs.h"
    #include "device/MK70F12/MK70F12_can.h"
    #include "device/MK70F12/MK70F12_cau.h"
    #include "device/MK70F12/MK70F12_cmp.h"
    #include "device/MK70F12/MK70F12_cmt.h"
    #include "device/MK70F12/MK70F12_crc.h"
    #include "device/MK70F12/MK70F12_dac.h"
    #include "device/MK70F12/MK70F12_ddr.h"
    #include "device/MK70F12/MK70F12_dma.h"
    #include "device/MK70F12/MK70F12_dmamux.h"
    #include "device/MK70F12/MK70F12_enet.h"
    #include "device/MK70F12/MK70F12_ewm.h"
    #include "device/MK70F12/MK70F12_fb.h"
    #include "device/MK70F12/MK70F12_fmc.h"
    #include "device/MK70F12/MK70F12_ftfe.h"
    #include "device/MK70F12/MK70F12_ftm.h"
    #include "device/MK70F12/MK70F12_gpio.h"
    #include "device/MK70F12/MK70F12_i2c.h"
    #include "device/MK70F12/MK70F12_i2s.h"
    #include "device/MK70F12/MK70F12_lcdc.h"
    #include "device/MK70F12/MK70F12_llwu.h"
    #include "device/MK70F12/MK70F12_lmem.h"
    #include "device/MK70F12/MK70F12_lptmr.h"
    #include "device/MK70F12/MK70F12_mcg.h"
    #include "device/MK70F12/MK70F12_mcm.h"
    #include "device/MK70F12/MK70F12_mpu.h"
    #include "device/MK70F12/MK70F12_nfc.h"
    #include "device/MK70F12/MK70F12_nv.h"
    #include "device/MK70F12/MK70F12_osc.h"
    #include "device/MK70F12/MK70F12_pdb.h"
    #include "device/MK70F12/MK70F12_pit.h"
    #include "device/MK70F12/MK70F12_pmc.h"
    #include "device/MK70F12/MK70F12_port.h"
    #include "device/MK70F12/MK70F12_rcm.h"
    #include "device/MK70F12/MK70F12_rfsys.h"
    #include "device/MK70F12/MK70F12_rfvbat.h"
    #include "device/MK70F12/MK70F12_rng.h"
    #include "device/MK70F12/MK70F12_rtc.h"
    #include "device/MK70F12/MK70F12_sdhc.h"
    #include "device/MK70F12/MK70F12_sim.h"
    #include "device/MK70F12/MK70F12_smc.h"
    #include "device/MK70F12/MK70F12_spi.h"
    #include "device/MK70F12/MK70F12_tsi.h"
    #include "device/MK70F12/MK70F12_uart.h"
    #include "device/MK70F12/MK70F12_usb.h"
    #include "device/MK70F12/MK70F12_usbdcd.h"
    #include "device/MK70F12/MK70F12_usbhs.h"
    #include "device/MK70F12/MK70F12_vref.h"
    #include "device/MK70F12/MK70F12_wdog.h"

    /* CMSIS-style register definitions*/
    #include "device/MK70F12/MK70F12.h"

#elif (defined(CPU_MK70FN1M0VMF12) || defined(CPU_MK70FX512VMF12) || defined(CPU_MK70FN1M0VMF15) || \
    defined(CPU_MK70FX512VMF15) || defined(CPU_MK70FN1M0VMJ12) || defined(CPU_MK70FX512VMJ12) || \
    defined(CPU_MK70FN1M0VMJ15) || defined(CPU_MK70FX512VMJ15))
    /* Extension register headers. (These will eventually be merged into the CMSIS-style header.)*/
    #include "device/MK70F15/MK70F15_adc.h"
    #include "device/MK70F15/MK70F15_aips.h"
    #include "device/MK70F15/MK70F15_axbs.h"
    #include "device/MK70F15/MK70F15_can.h"
    #include "device/MK70F15/MK70F15_cau.h"
    #include "device/MK70F15/MK70F15_cmp.h"
    #include "device/MK70F15/MK70F15_cmt.h"
    #include "device/MK70F15/MK70F15_crc.h"
    #include "device/MK70F15/MK70F15_dac.h"
    #include "device/MK70F15/MK70F15_ddr.h"
    #include "device/MK70F15/MK70F15_dma.h"
    #include "device/MK70F15/MK70F15_dmamux.h"
    #include "device/MK70F15/MK70F15_enet.h"
    #include "device/MK70F15/MK70F15_ewm.h"
    #include "device/MK70F15/MK70F15_fb.h"
    #include "device/MK70F15/MK70F15_fmc.h"
    #include "device/MK70F15/MK70F15_ftfe.h"
    #include "device/MK70F15/MK70F15_ftm.h"
    #include "device/MK70F15/MK70F15_gpio.h"
    #include "device/MK70F15/MK70F15_i2c.h"
    #include "device/MK70F15/MK70F15_i2s.h"
    #include "device/MK70F15/MK70F15_lcdc.h"
    #include "device/MK70F15/MK70F15_llwu.h"
    #include "device/MK70F15/MK70F15_lmem.h"
    #include "device/MK70F15/MK70F15_lptmr.h"
    #include "device/MK70F15/MK70F15_mcg.h"
    #include "device/MK70F15/MK70F15_mcm.h"
    #include "device/MK70F15/MK70F15_mpu.h"
    #include "device/MK70F15/MK70F15_nfc.h"
    #include "device/MK70F15/MK70F15_nv.h"
    #include "device/MK70F15/MK70F15_osc.h"
    #include "device/MK70F15/MK70F15_pdb.h"
    #include "device/MK70F15/MK70F15_pit.h"
    #include "device/MK70F15/MK70F15_pmc.h"
    #include "device/MK70F15/MK70F15_port.h"
    #include "device/MK70F15/MK70F15_rcm.h"
    #include "device/MK70F15/MK70F15_rfsys.h"
    #include "device/MK70F15/MK70F15_rfvbat.h"
    #include "device/MK70F15/MK70F15_rng.h"
    #include "device/MK70F15/MK70F15_rtc.h"
    #include "device/MK70F15/MK70F15_sdhc.h"
    #include "device/MK70F15/MK70F15_sim.h"
    #include "device/MK70F15/MK70F15_smc.h"
    #include "device/MK70F15/MK70F15_spi.h"
    #include "device/MK70F15/MK70F15_tsi.h"
    #include "device/MK70F15/MK70F15_uart.h"
    #include "device/MK70F15/MK70F15_usb.h"
    #include "device/MK70F15/MK70F15_usbdcd.h"
    #include "device/MK70F15/MK70F15_usbhs.h"
    #include "device/MK70F15/MK70F15_vref.h"
    #include "device/MK70F15/MK70F15_wdog.h"

    /* CMSIS-style register definitions*/
    #include "device/MK70F15/MK70F15.h"

#elif (defined(CPU_MK70FN1M0VMJ12WS) || defined(CPU_MK70FX512VMJ12WS) || defined(CPU_MK70FN1M0VMJ15WS) || \
    defined(CPU_MK70FX512VMJ15WS))
    /* Extension register headers. (These will eventually be merged into the CMSIS-style header.)*/
    #include "device/MK70F12WS/MK70F12WS_adc.h"
    #include "device/MK70F12WS/MK70F12WS_aips.h"
    #include "device/MK70F12WS/MK70F12WS_axbs.h"
    #include "device/MK70F12WS/MK70F12WS_can.h"
    #include "device/MK70F12WS/MK70F12WS_cau.h"
    #include "device/MK70F12WS/MK70F12WS_cmp.h"
    #include "device/MK70F12WS/MK70F12WS_cmt.h"
    #include "device/MK70F12WS/MK70F12WS_crc.h"
    #include "device/MK70F12WS/MK70F12WS_dac.h"
    #include "device/MK70F12WS/MK70F12WS_ddr.h"
    #include "device/MK70F12WS/MK70F12WS_dma.h"
    #include "device/MK70F12WS/MK70F12WS_dmamux.h"
    #include "device/MK70F12WS/MK70F12WS_dry.h"
    #include "device/MK70F12WS/MK70F12WS_enet.h"
    #include "device/MK70F12WS/MK70F12WS_ewm.h"
    #include "device/MK70F12WS/MK70F12WS_fb.h"
    #include "device/MK70F12WS/MK70F12WS_fmc.h"
    #include "device/MK70F12WS/MK70F12WS_ftfe.h"
    #include "device/MK70F12WS/MK70F12WS_ftm.h"
    #include "device/MK70F12WS/MK70F12WS_gpio.h"
    #include "device/MK70F12WS/MK70F12WS_i2c.h"
    #include "device/MK70F12WS/MK70F12WS_i2s.h"
    #include "device/MK70F12WS/MK70F12WS_lcdc.h"
    #include "device/MK70F12WS/MK70F12WS_llwu.h"
    #include "device/MK70F12WS/MK70F12WS_lmem.h"
    #include "device/MK70F12WS/MK70F12WS_lptmr.h"
    #include "device/MK70F12WS/MK70F12WS_mcg.h"
    #include "device/MK70F12WS/MK70F12WS_mcm.h"
    #include "device/MK70F12WS/MK70F12WS_mpu.h"
    #include "device/MK70F12WS/MK70F12WS_nfc.h"
    #include "device/MK70F12WS/MK70F12WS_nv.h"
    #include "device/MK70F12WS/MK70F12WS_osc.h"
    #include "device/MK70F12WS/MK70F12WS_pdb.h"
    #include "device/MK70F12WS/MK70F12WS_pit.h"
    #include "device/MK70F12WS/MK70F12WS_pmc.h"
    #include "device/MK70F12WS/MK70F12WS_port.h"
    #include "device/MK70F12WS/MK70F12WS_rcm.h"
    #include "device/MK70F12WS/MK70F12WS_rfsys.h"
    #include "device/MK70F12WS/MK70F12WS_rfvbat.h"
    #include "device/MK70F12WS/MK70F12WS_rng.h"
    #include "device/MK70F12WS/MK70F12WS_rtc.h"
    #include "device/MK70F12WS/MK70F12WS_sdhc.h"
    #include "device/MK70F12WS/MK70F12WS_sim.h"
    #include "device/MK70F12WS/MK70F12WS_smc.h"
    #include "device/MK70F12WS/MK70F12WS_spi.h"
    #include "device/MK70F12WS/MK70F12WS_tsi.h"
    #include "device/MK70F12WS/MK70F12WS_uart.h"
    #include "device/MK70F12WS/MK70F12WS_usb.h"
    #include "device/MK70F12WS/MK70F12WS_usbdcd.h"
    #include "device/MK70F12WS/MK70F12WS_usbhs.h"
    #include "device/MK70F12WS/MK70F12WS_vref.h"
    #include "device/MK70F12WS/MK70F12WS_wdog.h"

    /* CMSIS-style register definitions*/
    #include "device/MK70F12WS/MK70F12WS.h"

#elif (defined(CPU_MK70FN1M0VMJ12WS) || defined(CPU_MK70FX512VMJ12WS) || defined(CPU_MK70FN1M0VMJ15WS) || \
    defined(CPU_MK70FX512VMJ15WS))
    /* Extension register headers. (These will eventually be merged into the CMSIS-style header.)*/
    #include "device/MK70F15WS/MK70F15WS_adc.h"
    #include "device/MK70F15WS/MK70F15WS_aips.h"
    #include "device/MK70F15WS/MK70F15WS_axbs.h"
    #include "device/MK70F15WS/MK70F15WS_can.h"
    #include "device/MK70F15WS/MK70F15WS_cau.h"
    #include "device/MK70F15WS/MK70F15WS_cmp.h"
    #include "device/MK70F15WS/MK70F15WS_cmt.h"
    #include "device/MK70F15WS/MK70F15WS_crc.h"
    #include "device/MK70F15WS/MK70F15WS_dac.h"
    #include "device/MK70F15WS/MK70F15WS_ddr.h"
    #include "device/MK70F15WS/MK70F15WS_dma.h"
    #include "device/MK70F15WS/MK70F15WS_dmamux.h"
    #include "device/MK70F15WS/MK70F15WS_dry.h"
    #include "device/MK70F15WS/MK70F15WS_enet.h"
    #include "device/MK70F15WS/MK70F15WS_ewm.h"
    #include "device/MK70F15WS/MK70F15WS_fb.h"
    #include "device/MK70F15WS/MK70F15WS_fmc.h"
    #include "device/MK70F15WS/MK70F15WS_ftfe.h"
    #include "device/MK70F15WS/MK70F15WS_ftm.h"
    #include "device/MK70F15WS/MK70F15WS_gpio.h"
    #include "device/MK70F15WS/MK70F15WS_i2c.h"
    #include "device/MK70F15WS/MK70F15WS_i2s.h"
    #include "device/MK70F15WS/MK70F15WS_lcdc.h"
    #include "device/MK70F15WS/MK70F15WS_llwu.h"
    #include "device/MK70F15WS/MK70F15WS_lmem.h"
    #include "device/MK70F15WS/MK70F15WS_lptmr.h"
    #include "device/MK70F15WS/MK70F15WS_mcg.h"
    #include "device/MK70F15WS/MK70F15WS_mcm.h"
    #include "device/MK70F15WS/MK70F15WS_mpu.h"
    #include "device/MK70F15WS/MK70F15WS_nfc.h"
    #include "device/MK70F15WS/MK70F15WS_nv.h"
    #include "device/MK70F15WS/MK70F15WS_osc.h"
    #include "device/MK70F15WS/MK70F15WS_pdb.h"
    #include "device/MK70F15WS/MK70F15WS_pit.h"
    #include "device/MK70F15WS/MK70F15WS_pmc.h"
    #include "device/MK70F15WS/MK70F15WS_port.h"
    #include "device/MK70F15WS/MK70F15WS_rcm.h"
    #include "device/MK70F15WS/MK70F15WS_rfsys.h"
    #include "device/MK70F15WS/MK70F15WS_rfvbat.h"
    #include "device/MK70F15WS/MK70F15WS_rng.h"
    #include "device/MK70F15WS/MK70F15WS_rtc.h"
    #include "device/MK70F15WS/MK70F15WS_sdhc.h"
    #include "device/MK70F15WS/MK70F15WS_sim.h"
    #include "device/MK70F15WS/MK70F15WS_smc.h"
    #include "device/MK70F15WS/MK70F15WS_spi.h"
    #include "device/MK70F15WS/MK70F15WS_tsi.h"
    #include "device/MK70F15WS/MK70F15WS_uart.h"
    #include "device/MK70F15WS/MK70F15WS_usb.h"
    #include "device/MK70F15WS/MK70F15WS_usbdcd.h"
    #include "device/MK70F15WS/MK70F15WS_usbhs.h"
    #include "device/MK70F15WS/MK70F15WS_vref.h"
    #include "device/MK70F15WS/MK70F15WS_wdog.h"

    /* CMSIS-style register definitions*/
    #include "device/MK70F15WS/MK70F15WS.h"

#elif (defined(CPU_MKL25Z32VFM4) || defined(CPU_MKL25Z64VFM4) || defined(CPU_MKL25Z128VFM4) || \
    defined(CPU_MKL25Z32VFT4) || defined(CPU_MKL25Z64VFT4) || defined(CPU_MKL25Z128VFT4) || \
    defined(CPU_MKL25Z32VLH4) || defined(CPU_MKL25Z64VLH4) || defined(CPU_MKL25Z128VLH4) || \
    defined(CPU_MKL25Z32VLK4) || defined(CPU_MKL25Z64VLK4) || defined(CPU_MKL25Z128VLK4))
    #define KL25Z4_SERIES
    /* Extension register headers. (These will eventually be merged into the CMSIS-style header.)*/
    #include "device/MKL25Z4/MKL25Z4_adc.h"
    #include "device/MKL25Z4/MKL25Z4_cmp.h"
    #include "device/MKL25Z4/MKL25Z4_dac.h"
    #include "device/MKL25Z4/MKL25Z4_dma.h"
    #include "device/MKL25Z4/MKL25Z4_dmamux.h"
    #include "device/MKL25Z4/MKL25Z4_fgpio.h"
    #include "device/MKL25Z4/MKL25Z4_ftfa.h"
    #include "device/MKL25Z4/MKL25Z4_gpio.h"
    #include "device/MKL25Z4/MKL25Z4_i2c.h"
    #include "device/MKL25Z4/MKL25Z4_llwu.h"
    #include "device/MKL25Z4/MKL25Z4_lptmr.h"
    #include "device/MKL25Z4/MKL25Z4_mcg.h"
    #include "device/MKL25Z4/MKL25Z4_mcm.h"
    #include "device/MKL25Z4/MKL25Z4_mtb.h"
    #include "device/MKL25Z4/MKL25Z4_mtbdwt.h"
    #include "device/MKL25Z4/MKL25Z4_nv.h"
    #include "device/MKL25Z4/MKL25Z4_osc.h"
    #include "device/MKL25Z4/MKL25Z4_pit.h"
    #include "device/MKL25Z4/MKL25Z4_pmc.h"
    #include "device/MKL25Z4/MKL25Z4_port.h"
    #include "device/MKL25Z4/MKL25Z4_rcm.h"
    #include "device/MKL25Z4/MKL25Z4_rom.h"
    #include "device/MKL25Z4/MKL25Z4_rtc.h"
    #include "device/MKL25Z4/MKL25Z4_sim.h"
    #include "device/MKL25Z4/MKL25Z4_smc.h"
    #include "device/MKL25Z4/MKL25Z4_spi.h"
    #include "device/MKL25Z4/MKL25Z4_tpm.h"
    #include "device/MKL25Z4/MKL25Z4_tsi.h"
    #include "device/MKL25Z4/MKL25Z4_uart.h"
    #include "device/MKL25Z4/MKL25Z4_uart0.h"
    #include "device/MKL25Z4/MKL25Z4_usb.h"

    /* CMSIS-style register definitions*/
    #include "device/MKL25Z4/MKL25Z4.h"

#else
    #error "No valid CPU defined!"
#endif

#endif /* __FSL_DEVICE_REGISTERS_H__*/
/*******************************************************************************
 * EOF
 ******************************************************************************/