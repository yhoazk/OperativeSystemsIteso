/************************************************************************************
 * configs/stm32f103-minimum//src/stm32_wireless.c
 *
 *   Copyright (C) 2017 Gregory Nutt. All rights reserved.
 *   Author: Laurent Latil <laurent@latil.nom.fr>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ************************************************************************************/

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>

#include <stdint.h>
#include <stdbool.h>
#include <debug.h>
#include <errno.h>

#include <nuttx/spi/spi.h>
#include <nuttx/wireless/nrf24l01.h>
#include <arch/board/board.h>

#include "up_arch.h"
#include "chip.h"
#include "stm32.h"

#include "stm32f103_minimum.h"

#ifdef CONFIG_WL_NRF24L01

/************************************************************************************
 * Private Function Prototypes
 ************************************************************************************/

static int stm32tiny_wl_irq_attach(xcpt_t isr, FAR void *arg);
static void stm32tiny_wl_chip_enable(bool enable);

/************************************************************************************
 * Private Data
 ************************************************************************************/

static FAR struct nrf24l01_config_s nrf_cfg =
{
  .irqattach = stm32tiny_wl_irq_attach,
  .chipenable = stm32tiny_wl_chip_enable,
};

static xcpt_t g_isr;
static FAR void *g_arg;

/************************************************************************************
 * Private Functions
 ************************************************************************************/

static int stm32tiny_wl_irq_attach(xcpt_t isr, FAR void *arg)
{
  winfo("Attach IRQ\n");
  g_isr = isr;
  g_arg = arg;
  (void)stm32_gpiosetevent(GPIO_NRF24L01_IRQ, false, true, false, g_isr, g_arg);
  return OK;
}

static void stm32tiny_wl_chip_enable(bool enable)
{
  winfo("CE:%d\n", enable);
  stm32_gpiowrite(GPIO_NRF24L01_CE, enable);
}

/************************************************************************************
 * Public Functions
 ************************************************************************************/

/************************************************************************************
 * Name: stm32_wlinitialize
 *
 * Description:
 *   Initialize the NRF24L01 wireless module
 *
 * Input Parmeters:
 *   None
 *
 * Returned Value:
 *   None
 *
 ************************************************************************************/

void stm32_wlinitialize(void)
{
#ifndef CONFIG_STM32_SPI1
# error "STM32_SPI1 is required to support nRF24L01 module on this board"
#endif

  FAR struct spi_dev_s *spidev;
  int result;

  /* Setup CE & IRQ line IOs */

  stm32_configgpio(GPIO_NRF24L01_CE);
  stm32_configgpio(GPIO_NRF24L01_IRQ);

  /* Init SPI bus */

  spidev = stm32_spibus_initialize(1);
  if (!spidev)
    {
      werr("ERROR: Failed to initialize SPI bus\n");
      return;
    }

  result = nrf24l01_register(spidev, &nrf_cfg);
  if (result != OK)
    {
      werr("ERROR: Failed to register initialize SPI bus\n");
      return;
    }
}

#endif /* CONFIG_WL_NRF24L01 */
