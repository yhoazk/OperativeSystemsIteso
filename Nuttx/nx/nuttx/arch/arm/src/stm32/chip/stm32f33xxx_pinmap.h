/************************************************************************************
 * arch/arm/src/stm32/chip/stm32f33xxx_pinmap.h
 *
 *   Copyright (C) 2017 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *   Modified for STM32F334 by Mateusz Szafoni <raiden00@railab.me>
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

#ifndef __ARCH_ARM_SRC_STM32_CHIP_STM32F33XXX_PINMAP_H
#define __ARCH_ARM_SRC_STM32_CHIP_STM32F33XXX_PINMAP_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>

#include "stm32_gpio.h"

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/

/* Alternate Pin Functions.  All members of the STM32F33xxx family share the same
 * pin multiplexing (although they may differ in the pins physically available).
 *
 * Alternative pin selections are provided with a numeric suffix like _1, _2, etc.
 * Drivers, however, will use the pin selection without the numeric suffix.
 * Additional definitions are required in the board.h file.  For example, if
 * CAN1_RX connects vis PA11 on some board, then the following definitions should
 * appear inthe board.h header file for that board:
 *
 * #define GPIO_CAN1_RX GPIO_CAN1_RX_1
 *
 * The driver will then automatically configre PA11 as the CAN1 RX pin.
 */

/* WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!!
 * Additional effort is required to select specific GPIO options such as frequency,
 * open-drain/push-pull, and pull-up/down!  Just the basics are defined for most
 * pins in this file.
 */

/* ADC */

#define GPIO_ADC1_IN1       (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN0)
#define GPIO_ADC1_IN2       (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN1)
#define GPIO_ADC1_IN3       (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN2)
#define GPIO_ADC1_IN4       (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN3)
#undef GPIO_ADC1_IN5
#define GPIO_ADC1_IN6       (GPIO_ANALOG|GPIO_PORTC|GPIO_PIN0)
#define GPIO_ADC1_IN7       (GPIO_ANALOG|GPIO_PORTC|GPIO_PIN1)
#define GPIO_ADC1_IN8       (GPIO_ANALOG|GPIO_PORTC|GPIO_PIN2)
#define GPIO_ADC1_IN9       (GPIO_ANALOG|GPIO_PORTC|GPIO_PIN3)
#undef GPIO_ADC1_IN10
#define GPIO_ADC1_IN11      (GPIO_ANALOG|GPIO_PORTB|GPIO_PIN0)
#define GPIO_ADC1_IN12      (GPIO_ANALOG|GPIO_PORTB|GPIO_PIN1)
#define GPIO_ADC1_IN13      (GPIO_ANALOG|GPIO_PORTB|GPIO_PIN13)

#define GPIO_ADC2_IN1       (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN4)
#define GPIO_ADC2_IN2       (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN5)
#define GPIO_ADC2_IN3       (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN6)
#define GPIO_ADC2_IN4       (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN7)
#define GPIO_ADC2_IN5       (GPIO_ANALOG|GPIO_PORTC|GPIO_PIN4)
#define GPIO_ADC2_IN6       (GPIO_ANALOG|GPIO_PORTC|GPIO_PIN0)
#define GPIO_ADC2_IN7       (GPIO_ANALOG|GPIO_PORTC|GPIO_PIN1)
#define GPIO_ADC2_IN8       (GPIO_ANALOG|GPIO_PORTC|GPIO_PIN2)
#define GPIO_ADC2_IN9       (GPIO_ANALOG|GPIO_PORTC|GPIO_PIN3)
#undef GPIO_ADC2_IN10
#define GPIO_ADC2_IN11      (GPIO_ANALOG|GPIO_PORTC|GPIO_PIN5)
#define GPIO_ADC2_IN12      (GPIO_ANALOG|GPIO_PORTB|GPIO_PIN2)
#define GPIO_ADC2_IN13      (GPIO_ANALOG|GPIO_PORTB|GPIO_PIN12)
#define GPIO_ADC2_IN14      (GPIO_ANALOG|GPIO_PORTB|GPIO_PIN14)
#define GPIO_ADC2_IN15      (GPIO_ANALOG|GPIO_PORTB|GPIO_PIN15)

/* CAN */

#define GPIO_CAN_RX_1       (GPIO_ALT|GPIO_AF9|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN11)
#define GPIO_CAN_RX_2       (GPIO_ALT|GPIO_AF9|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN8)
#undef GPIO_CAN_RX_3
#define GPIO_CAN_TX_1       (GPIO_ALT|GPIO_AF9|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN12)
#define GPIO_CAN_TX_2       (GPIO_ALT|GPIO_AF9|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN9)
#undef GPIO_CAN_TX_3


/* Comparator Outputs */

#define GPIO_COMP2_OUT_1    (GPIO_ALT|GPIO_AF8|GPIO_PORTA|GPIO_PIN2)
#define GPIO_COMP2_OUT_2    (GPIO_ALT|GPIO_AF8|GPIO_PORTA|GPIO_PIN12)
#define GPIO_COMP2_OUT_3    (GPIO_ALT|GPIO_AF8|GPIO_PORTB|GPIO_PIN9)
#define GPIO_COMP4_OUT      (GPIO_ALT|GPIO_AF8|GPIO_PORTB|GPIO_PIN1)
#define GPIO_COMP6_OUT_1    (GPIO_ALT|GPIO_AF8|GPIO_PORTA|GPIO_PIN10)
#define GPIO_COMP6_OUT_2    (GPIO_ALT|GPIO_AF7|GPIO_PORTC|GPIO_PIN6)

/* Comparator Inputs non inverting*/

#define GPIO_COMP2_INP     (GPIO_ALT|GPIO_AF8|GPIO_PORTA|GPIO_PIN7)
#define GPIO_COMP4_INP     (GPIO_ALT|GPIO_AF8|GPIO_PORTB|GPIO_PIN0)
#define GPIO_COMP6_INP     (GPIO_ALT|GPIO_AF8|GPIO_PORTB|GPIO_PIN11)

/* Comparator Inputs inverting*/

#define GPIO_COMP2_INM      (GPIO_ALT|GPIO_AF8|GPIO_PORTA|GPIO_PIN4)
#define GPIO_COMP4_INM_1    (GPIO_ALT|GPIO_AF8|GPIO_PORTB|GPIO_PIN2)
#define GPIO_COMP4_INM_2    (GPIO_ALT|GPIO_AF8|GPIO_PORTA|GPIO_PIN4)
#define GPIO_COMP6_INM_1    (GPIO_ALT|GPIO_AF8|GPIO_PORTA|GPIO_PIN4)
#define GPIO_COMP6_INM_2    (GPIO_ALT|GPIO_AF8|GPIO_PORTB|GPIO_PIN15)


/* DAC -" Once the DAC channelx is enabled, the corresponding GPIO pin
 * (PA4 or PA5) is automatically connected to the analog converter output
 * (DACy_OUTx). In order to avoid parasitic consumption, the PA4 or PA5 pin
 * should first be configured to analog (AIN)".
 */

#define GPIO_DAC1_OUT1      (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN4)
#define GPIO_DAC1_OUT2      (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN5)
#define GPIO_DAC2_OUT1      (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN6)

/* I2C */

#define GPIO_I2C1_SCL_1     (GPIO_ALT|GPIO_AF4|GPIO_SPEED_50MHz|GPIO_OPENDRAIN|GPIO_PORTA|GPIO_PIN15)
#define GPIO_I2C1_SCL_2     (GPIO_ALT|GPIO_AF4|GPIO_SPEED_50MHz|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN6)
#define GPIO_I2C1_SCL_3     (GPIO_ALT|GPIO_AF4|GPIO_SPEED_50MHz|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN8)
#define GPIO_I2C1_SDA_1     (GPIO_ALT|GPIO_AF4|GPIO_SPEED_50MHz|GPIO_OPENDRAIN|GPIO_PORTA|GPIO_PIN14)
#define GPIO_I2C1_SDA_2     (GPIO_ALT|GPIO_AF4|GPIO_SPEED_50MHz|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN7)
#define GPIO_I2C1_SDA_3     (GPIO_ALT|GPIO_AF4|GPIO_SPEED_50MHz|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN9)
#define GPIO_I2C1_SMBA      (GPIO_ALT|GPIO_AF4|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN5)

/* IR */

#define GPIO_IR_OUT_1       (GPIO_ALT|GPIO_AF5|GPIO_PORTA|GPIO_PIN13)
#define GPIO_IR_OUT_2       (GPIO_ALT|GPIO_AF6|GPIO_PORTB|GPIO_PIN9)

/* JTAG/SWD */

#define GPIO_JTDI           (GPIO_ALT|GPIO_AF0|GPIO_PORTA|GPIO_PIN15)
#define GPIO_JTDO_TRACES_WO (GPIO_ALT|GPIO_AF0|GPIO_PORTB|GPIO_PIN3)
#define GPIO_NJTRST         (GPIO_ALT|GPIO_AF0|GPIO_PORTB|GPIO_PIN4)
#define GPIO_SWCLK_JTCK     (GPIO_ALT|GPIO_AF0|GPIO_PORTA|GPIO_PIN14)
#define GPIO_SWDIO_JTMS     (GPIO_ALT|GPIO_AF0|GPIO_PORTA|GPIO_PIN13)

/* MCO */

#define GPIO_MCO       	     (GPIO_ALT|GPIO_AF0|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN8)

/* SPI */

#define GPIO_SPI1_MISO_1    (GPIO_ALT|GPIO_AF5|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN6)
#define GPIO_SPI1_MISO_2    (GPIO_ALT|GPIO_AF5|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN4)
#define GPIO_SPI1_MOSI_1    (GPIO_ALT|GPIO_AF5|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN7)
#define GPIO_SPI1_MOSI_2    (GPIO_ALT|GPIO_AF5|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN5)
#define GPIO_SPI1_NSS_1     (GPIO_ALT|GPIO_AF5|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN4)
#define GPIO_SPI1_NSS_2     (GPIO_ALT|GPIO_AF5|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN15)
#define GPIO_SPI1_SCK_1     (GPIO_ALT|GPIO_AF5|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN5)
#define GPIO_SPI1_SCK_2     (GPIO_ALT|GPIO_AF5|GPIO_SPEED_50MHz|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN3)

/* Timers */

#define GPIO_TIM1_BKIN_1    (GPIO_ALT|GPIO_AF12|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN8)
#define GPIO_TIM1_BKIN_2    (GPIO_ALT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN14)
#define GPIO_TIM1_BKIN_3    (GPIO_ALT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN6)
#define GPIO_TIM1_BKIN_4    (GPIO_ALT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN12)
#define GPIO_TIM1_BKIN2_1   (GPIO_ALT|GPIO_AF12|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN11)
#define GPIO_TIM1_BKIN2_2   (GPIO_ALT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN3)
#define GPIO_TIM1_CH1IN_1   (GPIO_ALT|GPIO_FLOAT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN8)
#define GPIO_TIM1_CH1OUT_1  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN8)
#define GPIO_TIM1_CH1IN_2   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN0)
#define GPIO_TIM1_CH1OUT_2  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN0)
#define GPIO_TIM1_CH1N_1    (GPIO_ALT|GPIO_AF4|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN13)
#define GPIO_TIM1_CH1N_2    (GPIO_ALT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN11)
#define GPIO_TIM1_CH1N_3    (GPIO_ALT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN7)
#define GPIO_TIM1_CH1N_4    (GPIO_ALT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN13)
#define GPIO_TIM1_CH2IN     (GPIO_ALT|GPIO_FLOAT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN9)
#define GPIO_TIM1_CH2OUT    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN9)
#define GPIO_TIM1_CH2N_1    (GPIO_ALT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN12)
#define GPIO_TIM1_CH2N_2    (GPIO_ALT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN0)
#define GPIO_TIM1_CH2N_3    (GPIO_ALT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN14)
#define GPIO_TIM1_CH3IN_1   (GPIO_ALT|GPIO_FLOAT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN10)
#define GPIO_TIM1_CH3OUT_1  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN10)
#define GPIO_TIM1_CH3IN_2   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN2)
#define GPIO_TIM1_CH3OUT_2  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN2)
#define GPIO_TIM1_CH3N_1    (GPIO_ALT|GPIO_AF4|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN15)
#define GPIO_TIM1_CH3N_2    (GPIO_ALT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN1)
#define GPIO_TIM1_CH3N_3    (GPIO_ALT|GPIO_AF6|GPIO_SPEED_50MHz|GPIO_PORTF|GPIO_PIN0)
#define GPIO_TIM1_CH4IN_1   (GPIO_ALT|GPIO_FLOAT|GPIO_AF11|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN11)
#define GPIO_TIM1_CH4OUT_1  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF11|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN11)
#define GPIO_TIM1_CH4IN_2   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN3)
#define GPIO_TIM1_CH4OUT_2  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN3)
#define GPIO_TIM1_ETR_1     (GPIO_ALT|GPIO_FLOAT|GPIO_AF11|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN12)
#define GPIO_TIM1_ETR_2     (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN4)

#define GPIO_TIM2_CH1_ETR_1 (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN0)
#define GPIO_TIM2_CH1_ETR_2 (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN15)
#define GPIO_TIM2_CH1_ETR_3 (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN5)
#define GPIO_TIM2_CH2IN_1   (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN1)
#define GPIO_TIM2_CH2OUT_1  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN1)
#define GPIO_TIM2_CH2IN_2   (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN3)
#define GPIO_TIM2_CH2OUT_2  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN3)
#define GPIO_TIM2_CH3IN_1   (GPIO_ALT|GPIO_FLOAT|GPIO_AF10|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN9)
#define GPIO_TIM2_CH3OUT_1  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF10|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN9)
#define GPIO_TIM2_CH3IN_2   (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN2)
#define GPIO_TIM2_CH3OUT_2  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN2)
#define GPIO_TIM2_CH3IN_3   (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN10)
#define GPIO_TIM2_CH3OUT_3  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN10)
#define GPIO_TIM2_CH4IN_1   (GPIO_ALT|GPIO_FLOAT|GPIO_AF10|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN10)
#define GPIO_TIM2_CH4OUT_1  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF10|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN10)
#define GPIO_TIM2_CH4IN_2   (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN3)
#define GPIO_TIM2_CH4OUT_2  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN3)
#define GPIO_TIM2_CH4IN_3   (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN11)
#define GPIO_TIM2_CH4OUT_3  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN11)

#define GPIO_TIM3_CH1IN_1   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN6)
#define GPIO_TIM3_CH1OUT_1  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN6)
#define GPIO_TIM3_CH1IN_2   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN4)
#define GPIO_TIM3_CH1OUT_2  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN4)
#define GPIO_TIM3_CH1IN_3   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN6)
#define GPIO_TIM3_CH1OUT_3  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN6)
#define GPIO_TIM3_CH2IN_1   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN4)
#define GPIO_TIM3_CH2OUT_1  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN4)
#define GPIO_TIM3_CH2IN_2   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN7)
#define GPIO_TIM3_CH2OUT_2  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN7)
#define GPIO_TIM3_CH2IN_3   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN5)
#define GPIO_TIM3_CH2OUT_3  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN5)
#define GPIO_TIM3_CH2IN_4   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN7)
#define GPIO_TIM3_CH2OUT_4  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN7)
#define GPIO_TIM3_CH3IN_1   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN0)
#define GPIO_TIM3_CH3OUT_1  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN0)
#define GPIO_TIM3_CH3IN_2   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN8)
#define GPIO_TIM3_CH3OUT_2  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN8)
#define GPIO_TIM3_CH4IN_1   (GPIO_ALT|GPIO_FLOAT|GPIO_AF10|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN7)
#define GPIO_TIM3_CH4OUT_1  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF10|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN7)
#define GPIO_TIM3_CH4IN_2   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN1)
#define GPIO_TIM3_CH4OUT_2  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN1)
#define GPIO_TIM3_CH4IN_3   (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN9)
#define GPIO_TIM3_CH4OUT_3  (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN9)
#define GPIO_TIM3_ETR_1     (GPIO_ALT|GPIO_FLOAT|GPIO_AF10|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN3)
#define GPIO_TIM3_ETR_2     (GPIO_ALT|GPIO_FLOAT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTD|GPIO_PIN2)

#define GPIO_TIM15_BKIN     (GPIO_ALT|GPIO_AF9|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN9)
#define GPIO_TIM15_CH1IN_1  (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN14)
#define GPIO_TIM15_CH1OUT_1 (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN14)
#define GPIO_TIM15_CH1IN_2  (GPIO_ALT|GPIO_FLOAT|GPIO_AF9|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN2)
#define GPIO_TIM15_CH1OUT_2 (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF9|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN2)
#define GPIO_TIM15_CH1N_1   (GPIO_ALT|GPIO_AF2|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN15)
#define GPIO_TIM15_CH1N_2   (GPIO_ALT|GPIO_AF9|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN1)
#define GPIO_TIM15_CH2IN_1  (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN15)
#define GPIO_TIM15_CH2OUT_1 (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN15)
#define GPIO_TIM15_CH2IN_2  (GPIO_ALT|GPIO_FLOAT|GPIO_AF9|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN3)
#define GPIO_TIM15_CH2OUT_2 (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF9|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN3)

#define GPIO_TIM16_BKIN     (GPIO_ALT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN5)
#define GPIO_TIM16_CH1IN_1  (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN12)
#define GPIO_TIM16_CH1OUT_1 (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN12)
#define GPIO_TIM16_CH1IN_2  (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN6)
#define GPIO_TIM16_CH1OUT_2 (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN6)
#define GPIO_TIM16_CH1IN_3  (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN4)
#define GPIO_TIM16_CH1OUT_3 (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN4)
#define GPIO_TIM16_CH1IN_4  (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN8)
#define GPIO_TIM16_CH1OUT_4 (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN8)
#define GPIO_TIM16_CH1N_1   (GPIO_ALT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN13)
#define GPIO_TIM16_CH1N_2   (GPIO_ALT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN6)

#define GPIO_TIM17_BKIN_1   (GPIO_ALT|GPIO_AF10|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN4)
#define GPIO_TIM17_BKIN_2   (GPIO_ALT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN10)
#define GPIO_TIM17_CH1IN_1  (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN7)
#define GPIO_TIM17_CH1OUT_1 (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN7)
#define GPIO_TIM17_CH1IN_2  (GPIO_ALT|GPIO_FLOAT|GPIO_AF10|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN5)
#define GPIO_TIM17_CH1OUT_2 (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF10|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN5)
#define GPIO_TIM17_CH1IN_3  (GPIO_ALT|GPIO_FLOAT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN9)
#define GPIO_TIM17_CH1OUT_3 (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN9)
#define GPIO_TIM17_CH1N     (GPIO_ALT|GPIO_AF1|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN7)

/* HRTIM */

#define GPIO_HRTIM1_SCOUT_1  (GPIO_ALT|GPIO_AF11|GPIO_PORTB|GPIO_PIN3)
#define GPIO_HRTIM1_SCOUT_2  (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN1)
#define GPIO_HRTIM1_SCIN_1   (GPIO_ALT|GPIO_AF11|GPIO_PORTB|GPIO_PIN6)
#define GPIO_HRTIM1_SCIN_2   (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN2)
#define GPIO_HRTIM1_CHA1     (GPIO_ALT|GPIO_AF13|GPIO_PORTA|GPIO_PIN8)
#define GPIO_HRTIM1_CHA2     (GPIO_ALT|GPIO_AF13|GPIO_PORTA|GPIO_PIN9)
#define GPIO_HRTIM1_CHB1     (GPIO_ALT|GPIO_AF13|GPIO_PORTA|GPIO_PIN10)
#define GPIO_HRTIM1_CHB2     (GPIO_ALT|GPIO_AF13|GPIO_PORTA|GPIO_PIN11)
#define GPIO_HRTIM1_CHC1     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN12)
#define GPIO_HRTIM1_CHC2     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN13)
#define GPIO_HRTIM1_CHD1     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN14)
#define GPIO_HRTIM1_CHD2     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN15)
#define GPIO_HRTIM1_CHE1     (GPIO_ALT|GPIO_AF3|GPIO_PORTC|GPIO_PIN8)
#define GPIO_HRTIM1_CHE2     (GPIO_ALT|GPIO_AF3|GPIO_PORTC|GPIO_PIN9)
#define GPIO_HRTIM1_FLT1     (GPIO_ALT|GPIO_AF13|GPIO_PORTA|GPIO_PIN12)
#define GPIO_HRTIM1_FLT2     (GPIO_ALT|GPIO_AF13|GPIO_PORTA|GPIO_PIN15)
#define GPIO_HRTIM1_FLT3     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN10)
#define GPIO_HRTIM1_FLT4     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN11)
#define GPIO_HRTIM1_FLT5     (GPIO_ALT|GPIO_AF3|GPIO_PORTC|GPIO_PIN7)
#define GPIO_HRTIM1_EEV1     (GPIO_ALT|GPIO_AF3|GPIO_PORTC|GPIO_PIN12)
#define GPIO_HRTIM1_EEV2     (GPIO_ALT|GPIO_AF3|GPIO_PORTC|GPIO_PIN11)
#define GPIO_HRTIM1_EEV3     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN7)
#define GPIO_HRTIM1_EEV4     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN6)
#define GPIO_HRTIM1_EEV5     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN9)
#define GPIO_HRTIM1_EEV6     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN5)
#define GPIO_HRTIM1_EEV7     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN4)
#define GPIO_HRTIM1_EEV8     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN8)
#define GPIO_HRTIM1_EEV9     (GPIO_ALT|GPIO_AF13|GPIO_PORTB|GPIO_PIN3)
#define GPIO_HRTIM1_EEV10    (GPIO_ALT|GPIO_AF3|GPIO_PORTC|GPIO_PIN6)

/* OPAMP */

#define GPIO_OPAMP2_DIG      (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN6)
#define GPIO_OPAMP2_VINM_1   (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN5)
#define GPIO_OPAMP2_VINM_2   (GPIO_ANALOG|GPIO_PORTC|GPIO_PIN5)
#define GPIO_OPAMP2_VOUT     (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN6)
#define GPIO_OPAMP2_VINP_1   (GPIO_ANALOG|GPIO_PORTA|GPIO_PIN7)
#define GPIO_OPAMP2_VINP_2   (GPIO_ANALOG|GPIO_PORTB|GPIO_PIN0)
#define GPIO_OPAMP2_VINP_3   (GPIO_ANALOG|GPIO_PORTB|GPIO_PIN14)

/* TSC */

#define GPIO_TSC_G1_IO1     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN0)
#define GPIO_TSC_G1_IO2     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN1)
#define GPIO_TSC_G1_IO3     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN2)
#define GPIO_TSC_G1_IO4     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN3)
#define GPIO_TSC_G2_IO1     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN4)
#define GPIO_TSC_G2_IO2     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN5)
#define GPIO_TSC_G2_IO3     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN6)
#define GPIO_TSC_G2_IO4     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN7)
#define GPIO_TSC_G3_IO1     (GPIO_ALT|GPIO_AF3|GPIO_PORTC|GPIO_PIN5)
#define GPIO_TSC_G3_IO2     (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN0)
#define GPIO_TSC_G3_IO3     (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN1)
#define GPIO_TSC_G3_IO4     (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN2)
#define GPIO_TSC_G4_IO1     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN9)
#define GPIO_TSC_G4_IO2     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN10)
#define GPIO_TSC_G4_IO3     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN13)
#define GPIO_TSC_G4_IO4     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN14)
#define GPIO_TSC_G5_IO1     (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN3)
#define GPIO_TSC_G5_IO2     (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN4)
#define GPIO_TSC_G5_IO3     (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN6)
#define GPIO_TSC_G5_IO4     (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN7)
#define GPIO_TSC_G6_IO1     (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN11)
#define GPIO_TSC_G6_IO2     (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN12)
#define GPIO_TSC_G6_IO3     (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN13)
#define GPIO_TSC_G6_IO4     (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN14)
#define GPIO_TSC_SYNC_1     (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN10)
#define GPIO_TSC_SYNC_2     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN15)
#define GPIO_TSC_SYNC_3     (GPIO_ALT|GPIO_AF3|GPIO_PORTB|GPIO_PIN8)

/* USARTs/UARTs */

#define GPIO_USART1_CK      (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN8)
#define GPIO_USART1_CTS     (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN11)
#define GPIO_USART1_RTS     (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN12)
#define GPIO_USART1_RX_1    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN10)
#define GPIO_USART1_RX_2    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN7)
#define GPIO_USART1_RX_3    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN5)
#define GPIO_USART1_TX_1    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN9)
#define GPIO_USART1_TX_2    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN6)
#define GPIO_USART1_TX_3    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN4)

#define GPIO_USART2_CK_1    (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN4)
#define GPIO_USART2_CK_2    (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN5)
#define GPIO_USART2_CTS     (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN0)
#define GPIO_USART2_RTS     (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN1)
#define GPIO_USART2_RX_1    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN3)
#define GPIO_USART2_RX_2    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN15)
#define GPIO_USART2_RX_3    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN4)
#define GPIO_USART2_TX_1    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN2)
#define GPIO_USART2_TX_2    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTA|GPIO_PIN14)
#define GPIO_USART2_TX_3    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN3)

#define GPIO_USART3_CK_1    (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN12)
#define GPIO_USART3_CK_2    (GPIO_ALT|GPIO_AF7|GPIO_PORTC|GPIO_PIN12)
#define GPIO_USART3_CTS_1   (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN13)
#define GPIO_USART3_CTS_2   (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN13)
#define GPIO_USART3_RTS     (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN14)
#define GPIO_USART3_RX_1    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN11)
#define GPIO_USART3_RX_2    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN11)
#define GPIO_USART3_RX_3    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN8)
#define GPIO_USART3_TX_1    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN10)
#define GPIO_USART3_TX_2    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTC|GPIO_PIN10)
#define GPIO_USART3_TX_3    (GPIO_ALT|GPIO_PUSHPULL|GPIO_AF7|GPIO_PULLUP|GPIO_SPEED_50MHz|GPIO_PORTB|GPIO_PIN9)

/* Event Outputs */

#define GPIO_PA0_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN0)
#define GPIO_PA0_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN0)
#define GPIO_PA0_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN0)
#define GPIO_PA0_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN0)
#define GPIO_PA1_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN1)
#define GPIO_PA2_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN2)
#define GPIO_PA3_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN3)
#define GPIO_PA4_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN4)
#define GPIO_PA5_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN5)
#define GPIO_PA6_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN6)
#define GPIO_PA7_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN7)
#define GPIO_PA8_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN8)
#define GPIO_PA9_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN9)
#define GPIO_PA10_EVENT_OUT (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN10)
#define GPIO_PA11_EVENT_OUT (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN11)
#define GPIO_PA12_EVENT_OUT (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN12)
#define GPIO_PA13_EVENT_OUT (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN13)
#define GPIO_PA14_EVENT_OUT (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN14)
#define GPIO_PA15_EVENT_OUT (GPIO_ALT|GPIO_AF15|GPIO_PORTA|GPIO_PIN15)

#define GPIO_PB0_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN0)
#define GPIO_PB1_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN1)
#define GPIO_PB2_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN2)
#define GPIO_PB3_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN3)
#define GPIO_PB4_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN4)
#define GPIO_PB5_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN5)
#define GPIO_PB6_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN6)
#define GPIO_PB7_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN7)
#define GPIO_PB8_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN8)
#define GPIO_PB9_EVENT_OUT  (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN9)
#define GPIO_PB10_EVENT_OUT (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN10)
#define GPIO_PB11_EVENT_OUT (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN11)
#define GPIO_PB12_EVENT_OUT (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN12)
#define GPIO_PB13_EVENT_OUT (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN13)
#define GPIO_PB14_EVENT_OUT (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN14)
#define GPIO_PB15_EVENT_OUT (GPIO_ALT|GPIO_AF15|GPIO_PORTB|GPIO_PIN15)

#define GPIO_PC0_EVENT_OUT  (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN0)
#define GPIO_PC1_EVENT_OUT  (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN1)
#define GPIO_PC2_EVENT_OUT  (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN2)
#define GPIO_PC3_EVENT_OUT  (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN3)
#define GPIO_PC4_EVENT_OUT  (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN4)
#define GPIO_PC5_EVENT_OUT  (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN5)
#define GPIO_PC6_EVENT_OUT  (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN6)
#define GPIO_PC7_EVENT_OUT  (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN7)
#define GPIO_PC8_EVENT_OUT  (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN8)
#define GPIO_PC9_EVENT_OUT  (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN9)
#define GPIO_PC10_EVENT_OUT (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN10)
#define GPIO_PC11_EVENT_OUT (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN11)
#define GPIO_PC12_EVENT_OUT (GPIO_ALT|GPIO_AF1|GPIO_PORTC|GPIO_PIN12)

#define GPIO_PD2_EVENT_OUT  (GPIO_ALT|GPIO_AF1|GPIO_PORTD|GPIO_PIN2)

#endif /* __ARCH_ARM_SRC_STM32_CHIP_STM32F33XXX_PINMAP_H */
