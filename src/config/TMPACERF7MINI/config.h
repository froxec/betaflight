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

#define BOARD_NAME        TMPACERF7MINI
#define MANUFACTURER_ID   TMTR

#define USE_ACCGYRO_BMI270
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC_SPI_ICM42688P
#define USE_FLASH_M25P16
#define USE_MAX7456

#define BEEPER_PIN           PC14
#define MOTOR1_PIN           PC9
#define MOTOR2_PIN           PC8
#define MOTOR3_PIN           PB0
#define MOTOR4_PIN           PB1
#define LED_STRIP_PIN        PA15
#define UART1_TX_PIN         PA9
#define UART2_TX_PIN         PA2
#define UART3_TX_PIN         PC10
#define UART4_TX_PIN         PA0
#define UART1_RX_PIN         PA10
#define UART2_RX_PIN         PA3
#define UART3_RX_PIN         PC11
#define UART4_RX_PIN         PA1
#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB9
#define LED0_PIN             PC15
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI3_SCK_PIN         PB3
#define SPI1_MISO_PIN        PA6
#define SPI2_MISO_PIN        PB14
#define SPI3_MISO_PIN        PB4
#define SPI1_MOSI_PIN        PA7
#define SPI2_MOSI_PIN        PB15
#define SPI3_MOSI_PIN        PB5
#define CAMERA_CONTROL_PIN   PA8
#define ADC_VBAT_PIN         PC0
#define ADC_CURR_PIN         PC1
#define FLASH_CS_PIN         PB12
#define MAX7456_SPI_CS_PIN   PC13
#define GYRO_1_EXTI_PIN      PA4
#define GYRO_1_CS_PIN        PC4

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PA15, 1,  0) \
    TIMER_PIN_MAP( 1, PA8 , 1,  0) \
    TIMER_PIN_MAP( 2, PC9 , 2,  0) \
    TIMER_PIN_MAP( 3, PC8 , 2,  0) \
    TIMER_PIN_MAP( 4, PB0 , 2,  0) \
    TIMER_PIN_MAP( 5, PB1 , 2,  0) \



#define ADC1_DMA_OPT        1

//TODO #define BARO_BUSTYPE I2C
#define BARO_I2C_INSTANCE (I2CDEV_1)
//TODO #define BLACKBOX_DEVICE SPIFLASH
//TODO #define CURRENT_METER ADC
//TODO #define BATTERY_METER ADC
//TODO #define IBATA_SCALE 179
#define BEEPER_INVERTED
//TODO #define BEEPER_OD OFF
#define MAX7456_SPI_INSTANCE SPI3
#define FLASH_SPI_INSTANCE SPI2
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
