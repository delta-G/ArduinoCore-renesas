#pragma once

#ifdef __cplusplus
extern "C" unsigned int PINCOUNT_fn();
extern "C" unsigned int I2C_COUNT_fn();
extern "C" unsigned int SPI_COUNT_fn();
extern "C" unsigned int UART_COUNT_fn();
extern "C" unsigned int SCI_COUNT_fn();
#endif

#define PIN(X,Y) (X * 16 + Y)

// Pin count
// ----
#define PINS_COUNT           (PINCOUNT_fn())
#define NUM_DIGITAL_PINS     (121u)
#define NUM_ANALOG_INPUTS    (8u)
#define NUM_ANALOG_OUTPUTS   (2u)

#define PIN_A0   (15u)
#define PIN_A1   (16u)
#define PIN_A2   (17u)
#define PIN_A3   (18u)
#define PIN_A4   (19u)
#define PIN_A5   (20u)
#define PIN_A6   (21u)
#define PIN_A7   (22u)

#define DAC      (21u)
#define DAC1     (22u)

static const uint8_t A0 = PIN_A0;
static const uint8_t A1 = PIN_A1;
static const uint8_t A2 = PIN_A2;
static const uint8_t A3 = PIN_A3;
static const uint8_t A4 = PIN_A4;
static const uint8_t A5 = PIN_A5;
static const uint8_t A6 = PIN_A6;
static const uint8_t A7 = PIN_A7;

// Digital pins
// -----------
#define D0  (0u)
#define D1  (1u)
#define D2  (2u)
#define D3  (3u)
#define D4  (4u)
#define D5  (5u)
#define D6  (6u)
#define D7  (7u)

// LEDs
// ----
#define PIN_LED     (35u)
#define LED_BUILTIN PIN_LED
#define LEDR        (34u)
#define LEDG        (35u)
#define LEDB        (36u)

/****** RTC CORE DEFINES *******/
#define RTC_HOWMANY       1

/****** UART CORE DEFINES ******/

/* TODO: add CTS/RTS pins */
#define SERIAL_HOWMANY	    5
#define UART1_TX_PIN        14
#define UART1_RX_PIN        13
#define UART2_TX_PIN        49
#define UART2_RX_PIN        50
#define UART3_TX_PIN        53
#define UART3_RX_PIN        54
#define UART4_TX_PIN        57
#define UART4_RX_PIN        58
#define UART5_TX_PIN        92
#define UART5_RX_PIN        93

/****** WIRE CORE DEFINES ******/

#define WIRE_HOWMANY      4
#define WIRE_SDA_PIN      11
#define WIRE_SCL_PIN      12
#define WIRE1_SDA_PIN     37
#define WIRE1_SCL_PIN     38
#define WIRE2_SDA_PIN     39
#define WIRE2_SCL_PIN     40
#define WIRE3_SDA_PIN     96
#define WIRE3_SCL_PIN     97

/****** SPI CORE DEFINES ******/

#define SPI_HOWMANY       2

#define PIN_SPI_MOSI      8
#define PIN_SPI_MISO      9
#define PIN_SPI_SCK       10
#define PIN_SPI_CS        7
#define IS_SPI_SCI        1

#define PIN_SPI1_MOSI     46
#define PIN_SPI1_MISO     45
#define PIN_SPI1_SCK      47
#define PIN_SPI1_CS       48
#define IS_SPI1_SCI       0

static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;
static const uint8_t CS  =  PIN_SPI_CS;

/****** CAN CORE DEFINES ******/

#define CANFD_HOWMANY     2

#if defined __has_include
#  if __has_include ("r_canfd.h")
#    define IS_CAN_FD (1)
#  else
#    define IS_CAN_FD (0)
#  endif
#else
#  define IS_CAN_FD (0)
#endif

#define PIN_CAN0_TX       (41)
#define PIN_CAN0_RX       (42)
#define PIN_CAN0_STBY     (-1)

#define PIN_CAN1_TX       (43)
#define PIN_CAN1_RX       (44)
#define PIN_CAN1_STBY     (-1)

/****** GTP CORE DEFINES *******/

#define GTP32_HOWMANY     4
#define GTP16_HOWMANY     6
#define GPT_HOWMANY       10

/****** AGT CORE DEFINES *******/
#define AGT_HOWMANY       6

/****** ETHERNET CORE DEFINES *******/
#define ETHERNET_HOWMANY   1

#define EXT_INTERRUPTS_HOWMANY 8

#define USE_4BIT_SDCARD   1

#define USB_VID           (0x2341)
#define USB_PID           (0x0068)
#define USB_NAME          "Portenta H33"

#define ARDUINO_FLASH_TYPE  HP_FLASH
#define EEPROM_BASE_ADDRESS 0x08000000
#define EEPROM_LENGHT       0x2000
#define EEPROM_BLOCK        0x40

/* Portenta Vision Shield compatibility */
#define LORA_RESET          2 //PWM2
#define LORA_BOOT0          3 //PWM3
#define LORA_IRQ_DUMB       4 //PWM4
#define SerialLoRa          Serial3