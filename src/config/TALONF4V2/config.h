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

#define BOARD_NAME        TALONF4V2
#define MANUFACTURER_ID   HENA

#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_MPU6000
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

#define BEEPER_PIN           PB4
#define MOTOR1_PIN           PB0
#define MOTOR2_PIN           PB1
#define MOTOR3_PIN           PA3
#define MOTOR4_PIN           PA2
#define MOTOR5_PIN           PB8
#define LED_STRIP_PIN        PB8
#define UART1_TX_PIN         PA9
#define UART3_TX_PIN         PB10
#define UART4_TX_PIN         PA0
#define UART6_TX_PIN         PC6
#define UART1_RX_PIN         PA10
#define UART3_RX_PIN         PB11
#define UART4_RX_PIN         PA1
#define UART6_RX_PIN         PC7
#define INVERTER1_PIN        PC0
#define LED0_PIN             PB5
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI3_SCK_PIN         PC10
#define SPI1_MISO_PIN        PA6
#define SPI2_MISO_PIN        PB14
#define SPI3_MISO_PIN        PC11
#define SPI1_MOSI_PIN        PA7
#define SPI2_MOSI_PIN        PB15
#define SPI3_MOSI_PIN        PC12
#define CAMERA_CONTROL_PIN   PB9
#define ADC_VBAT_PIN         PC2
#define ADC_RSSI_PIN         PC3
#define ADC_CURR_PIN         PC1
#define SDCARD_CS_PIN        PB12
#define SDCARD_DETECT_PIN    PB7
#define PINIO1_PIN           PA14
#define FLASH_CS_PIN         PB12
#define MAX7456_SPI_CS_PIN   PA15
#define GYRO_1_EXTI_PIN      PC4
#define GYRO_1_CS_PIN        PA4
#define USB_DETECT_PIN       PC5

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB9 , 2, -1) \
    TIMER_PIN_MAP( 1, PB0 , 1, 0   # pin B00: DMA2 Stream 6 Channel 0) \
    TIMER_PIN_MAP( 2, PB1 , 3, 0   # pin B01: DMA2 Stream 2 Channel 0) \
    TIMER_PIN_MAP( 3, PA3 , 1, 1   # pin A03: DMA1 Stream 6 Channel 3) \
    TIMER_PIN_MAP( 4, PA2 , 1, 0   # pin A02: DMA1 Stream 1 Channel 3) \
    TIMER_PIN_MAP( 5, PB4 , 1, 0   # pin B04: DMA1 Stream 4 Channel 5) \
    TIMER_PIN_MAP( 6, PB8 , 1, 0   # pin B08: DMA1 Stream 7 Channel 2) \



#define SPI2_TX_DMA_OPT     0
#define ADC1_DMA_OPT        1

//TODO #define SERIALRX_PROVIDER SBUS
//TODO #define MAG_HARDWARE NONE
//TODO #define BARO_HARDWARE NONE
//TODO #define MOTOR_PWM_PROTOCOL DSHOT600
//TODO #define GYRO_TO_USE FIRST
#define RX_SPI_INSTANCE SPI0
//TODO #define RX_SPI_LED_INVERSION OFF
//TODO #define ADC_DEVICE 1
//TODO #define BLACKBOX_DEVICE SPIFLASH
//TODO #define DSHOT_BURST OFF
//TODO #define DSHOT_BITBANG AUTO
//TODO #define DSHOT_BITBANG_TIMER AUTO
//TODO #define CURRENT_METER ADC
//TODO #define BATTERY_METER ADC
//TODO #define IBATA_SCALE 250
#define BEEPER_INVERTED
//TODO #define BEEPER_OD OFF
#define BEEPER_PWM_HZ 0
#define SYSTEM_HSE_MHZ 8
//TODO #define VTX_SPI_BUS 0
//TODO #define MAX7456_CLOCK NOMINAL
#define MAX7456_SPI_INSTANCE SPI3
//TODO #define MAX7456_PREINIT_OPU OFF
//TODO #define LED_INVERSION 0
#define FLASH_SPI_INSTANCE SPI2
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
//TODO #define GYRO_1_I2CBUS 0
//TODO #define GYRO_1_I2C_ADDRESS 0
#define GYRO_1_ALIGN CW0_DEG
#define GYRO_1_ALIGN_ROLL 0
#define GYRO_1_ALIGN_PITCH 0
#define GYRO_1_ALIGN_YAW 0
//TODO #define PINIO_BOX 40,255,255,255
//TODO #define PINIO_CONFIG 1,1,1,1
