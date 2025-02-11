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

#define FC_TARGET_MCU     STM32F7X2

#define BOARD_NAME        TALONF7V2
#define MANUFACTURER_ID   HENA

#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_MPU6000
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

#define BEEPER_PIN           PB4
#define MOTOR1_PIN           PB6
#define MOTOR2_PIN           PB7
#define MOTOR3_PIN           PB8
#define MOTOR4_PIN           PC8
#define MOTOR5_PIN           PA1
#define MOTOR6_PIN           PB9
#define MOTOR7_PIN           PC9
#define MOTOR8_PIN           PB1
#define LED_STRIP_PIN        PB1
#define UART1_TX_PIN         PA9
#define UART2_TX_PIN         PA2
#define UART3_TX_PIN         PB10
#define UART4_TX_PIN         PA0
#define UART5_TX_PIN         PC12
#define UART6_TX_PIN         PC6
#define UART1_RX_PIN         PA10
#define UART2_RX_PIN         PA3
#define UART3_RX_PIN         PB11
#define UART4_RX_PIN         PA1
#define UART5_RX_PIN         PD2
#define UART6_RX_PIN         PC7
#define LED0_PIN             PB0
#define RX_SPI_BIND_PIN      PB2
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI3_SCK_PIN         PC10
#define SPI1_MISO_PIN        PA6
#define SPI2_MISO_PIN        PB14
#define SPI3_MISO_PIN        PC11
#define SPI1_MOSI_PIN        PA7
#define SPI2_MOSI_PIN        PB15
#define SPI3_MOSI_PIN        PB5
#define CAMERA_CONTROL_PIN   PB3
#define ADC_VBAT_PIN         PC2
#define ADC_RSSI_PIN         PC3
#define ADC_CURR_PIN         PC1
#define FLASH_CS_PIN         PB12
#define MAX7456_SPI_CS_PIN   PA15
#define GYRO_1_EXTI_PIN      PC4
#define GYRO_1_CS_PIN        PA4

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB3 , 1, 0           # pin B03: DMA1 Stream 6 Channel 3) \
    TIMER_PIN_MAP( 1, PB6 , 1, 0           # pin B06: DMA1 Stream 0 Channel 2) \
    TIMER_PIN_MAP( 2, PB7 , 1, 0           # pin B07: DMA1 Stream 3 Channel 2) \
    TIMER_PIN_MAP( 3, PB8 , 1, 0           # pin B08: DMA1 Stream 7 Channel 2) \
    TIMER_PIN_MAP( 4, PB9 , 1, -1) \
    TIMER_PIN_MAP( 5, PA1 , 2, 0           # pin A01: DMA1 Stream 4 Channel 6) \
    TIMER_PIN_MAP( 6, PC8 , 2, 0           # pin C08: DMA2 Stream 2 Channel 0) \
    TIMER_PIN_MAP( 7, PC9 , 2, 0           # pin C09: DMA2 Stream 7 Channel 7) \
    TIMER_PIN_MAP( 8, PB1 , 2, 0           # pin B01: DMA1 Stream 2 Channel 5) \



#define ADC1_DMA_OPT        1

//TODO #define MAG_HARDWARE NONE
//TODO #define BARO_HARDWARE NONE
//TODO #define SERIALRX_PROVIDER SBUS
//TODO #define BLACKBOX_DEVICE SPIFLASH
//TODO #define DSHOT_BURST ON
//TODO #define MOTOR_PWM_PROTOCOL DSHOT600
//TODO #define CURRENT_METER ADC
//TODO #define BATTERY_METER ADC
//TODO #define VBAT_SCALE 160
//TODO #define IBATA_SCALE 150
#define BEEPER_INVERTED
//TODO #define BEEPER_OD OFF
//TODO #define PID_PROCESS_DENOM 1
//TODO #define OSD_VBAT_POS 2447
//TODO #define OSD_RSSI_POS 2074
//TODO #define OSD_TIM_2_POS 2456
//TODO #define OSD_VTX_CHANNEL_POS 2049
//TODO #define OSD_CURRENT_POS 2439
//TODO #define OSD_MAH_DRAWN_POS 2433
//TODO #define OSD_CRAFT_NAME_POS 2058
//TODO #define OSD_WARNINGS_POS 14378
#define MAX7456_SPI_INSTANCE SPI3
#define FLASH_SPI_INSTANCE SPI2
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW0_DEG
