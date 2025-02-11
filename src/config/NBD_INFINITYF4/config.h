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

#define BOARD_NAME        NBD_INFINITYF4
#define MANUFACTURER_ID   NEBD

#define BEEPER_PIN           PB6
#define MOTOR1_PIN           PB1
#define MOTOR2_PIN           PB0
#define MOTOR3_PIN           PC9
#define MOTOR4_PIN           PA8
#define LED_STRIP_PIN        PB8
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
#define INVERTER1_PIN        PA10
#define LED0_PIN             PC0
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI3_SCK_PIN         PB3
#define SPI1_MISO_PIN        PA6
#define SPI2_MISO_PIN        PB14
#define SPI3_MISO_PIN        PB4
#define SPI1_MOSI_PIN        PA7
#define SPI2_MOSI_PIN        PB15
#define SPI3_MOSI_PIN        PB5
#define ESCSERIAL_PIN        PD2
#define CAMERA_CONTROL_PIN   PB9
#define ADC_VBAT_PIN         PC4
#define ADC_CURR_PIN         PC3
#define PINIO1_PIN           PC5
#define FLASH_CS_PIN         PA15
#define MAX7456_SPI_CS_PIN   PA4
#define GYRO_1_EXTI_PIN      PC13
#define GYRO_1_CS_PIN        PB12

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB9 , 2, -1) \
    TIMER_PIN_MAP( 1, PB1 , 2,  0) \
    TIMER_PIN_MAP( 2, PB0 , 3,  0) \
    TIMER_PIN_MAP( 3, PC9 , 2,  0) \
    TIMER_PIN_MAP( 4, PA8 , 1,  1) \
    TIMER_PIN_MAP( 5, PB8 , 1,  0) \
    TIMER_PIN_MAP( 6, PB6 , 1,  0) \



#define ADC1_DMA_OPT        1

//TODO #define ACC_HARDWARE NONE
//TODO #define MAG_HARDWARE NONE
//TODO #define BARO_HARDWARE NONE
//TODO #define SERIALRX_PROVIDER SBUS
//TODO #define MOTOR_PWM_PROTOCOL DSHOT600
//TODO #define CURRENT_METER ADC
//TODO #define BATTERY_METER ADC
//TODO #define IBATA_SCALE 245
#define BEEPER_PWM_HZ 1000
//TODO #define YAW_MOTORS_REVERSED ON
//TODO #define PID_PROCESS_DENOM 1
//TODO #define OSD_VBAT_POS 2388
//TODO #define OSD_TIM_2_POS 2370
//TODO #define OSD_VTX_CHANNEL_POS 2403
//TODO #define OSD_CURRENT_POS 2419
//TODO #define OSD_CRAFT_NAME_POS 2410
//TODO #define OSD_WARNINGS_POS 2281
#define SYSTEM_HSE_MHZ 8
#define MAX7456_SPI_INSTANCE SPI1
#define FLASH_SPI_INSTANCE SPI3
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI2
#define GYRO_1_ALIGN CW90_DEG
#define GYRO_1_ALIGN_YAW 900
//TODO #define PINIO_CONFIG 129,1,1,1
//TODO #define PINIO_BOX 40,255,255,255
