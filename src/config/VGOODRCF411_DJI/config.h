/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

/*
   This file has been auto generated from unified-targets repo.

   The auto generation is transitional only, please remove this comment once the file is edited.
*/

#define FC_TARGET_MCU     STM32F411

#define BOARD_NAME        VGOODRCF411_DJI
#define MANUFACTURER_ID   VGRC

#define BEEPER_PIN           PB2
#define MOTOR1_PIN           PB3
#define MOTOR2_PIN           PB4
#define MOTOR3_PIN           PB6
#define MOTOR4_PIN           PB7
#define RX_PPM_PIN           PB9
#define LED_STRIP_PIN        PA8
#define UART1_TX_PIN         PA9
#define UART2_TX_PIN         PA2
#define UART1_RX_PIN         PA10
#define UART2_RX_PIN         PA3
#define INVERTER1_PIN        PB10
#define LED0_PIN             PC13
#define LED1_PIN             PC14
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI1_MISO_PIN        PA6
#define SPI2_MISO_PIN        PB14
#define SPI1_MOSI_PIN        PA7
#define SPI2_MOSI_PIN        PB15
#define ESCSERIAL_PIN        PB9
#define ADC_VBAT_PIN         PA0
#define ADC_RSSI_PIN         PB1
#define ADC_CURR_PIN         PA1
#define MAX7456_SPI_CS_PIN   PB12
#define GYRO_1_EXTI_PIN      PB0
#define GYRO_1_CS_PIN        PA4

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB9 , 2, -1) \
    TIMER_PIN_MAP( 1, PB3 , 1,  0) \
    TIMER_PIN_MAP( 2, PB4 , 1,  0) \
    TIMER_PIN_MAP( 3, PB6 , 1,  0) \
    TIMER_PIN_MAP( 4, PB7 , 1,  0) \
    TIMER_PIN_MAP( 5, PA15, 1,  0) \
    TIMER_PIN_MAP( 6, PB8 , 2, -1) \
    TIMER_PIN_MAP( 7, PA8 , 1,  0) \



#define ADC1_DMA_OPT        1

//TODO #define SERIALRX_PROVIDER SBUS
//TODO #define CURRENT_METER ADC
//TODO #define BATTERY_METER ADC
#define BEEPER_INVERTED
#define MAX7456_SPI_INSTANCE SPI2
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
