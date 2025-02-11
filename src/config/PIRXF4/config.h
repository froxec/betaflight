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

#define FC_TARGET_MCU     STM32F405

#define BOARD_NAME        PIRXF4
#define MANUFACTURER_ID   LEGA

#define USE_GYRO_SPI_MPU6500
#define USE_ACC_SPI_MPU6500
#define USE_MAX7456
#define USE_SDCARD

#define BEEPER_PIN           PA15
#define MOTOR1_PIN           PB4
#define MOTOR2_PIN           PB5
#define MOTOR3_PIN           PB8
#define MOTOR4_PIN           PB9
#define UART1_TX_PIN         PB6
#define UART2_TX_PIN         PA2
#define UART3_TX_PIN         PB10
#define UART4_TX_PIN         PA0
#define UART6_TX_PIN         PC6
#define UART1_RX_PIN         PB7
#define UART2_RX_PIN         PA3
#define UART3_RX_PIN         PB11
#define UART4_RX_PIN         PA1
#define UART6_RX_PIN         PC7
#define INVERTER3_PIN        PB1
#define INVERTER6_PIN        PA8
#define LED0_PIN             PC13
#define LED1_PIN             PC14
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI1_MISO_PIN        PA6
#define SPI2_MISO_PIN        PB14
#define SPI1_MOSI_PIN        PA7
#define SPI2_MOSI_PIN        PB15
#define ESCSERIAL_PIN        PB9
#define ADC_VBAT_PIN         PC2
#define ADC_RSSI_PIN         PC1
#define ADC_CURR_PIN         PC3
#define SDCARD_DETECT_PIN    PC15
#define MAX7456_SPI_CS_PIN   PB12
#define GYRO_1_CS_PIN        PC4
#define USB_DETECT_PIN       PA9

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB4 , 1,  0) \
    TIMER_PIN_MAP( 1, PB5 , 1,  0) \
    TIMER_PIN_MAP( 2, PB8 , 1,  0) \
    TIMER_PIN_MAP( 3, PB9 , 1, -1) \



#define ADC1_DMA_OPT        1

//TODO #define BLACKBOX_DEVICE NONE
//TODO #define DSHOT_BURST ON
//TODO #define CURRENT_METER ADC
//TODO #define BATTERY_METER ADC
#define BEEPER_INVERTED
//TODO #define BEEPER_OD OFF
#define SYSTEM_HSE_MHZ 8
#define MAX7456_SPI_INSTANCE SPI2
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
