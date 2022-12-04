#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1d8c
#define PRODUCT_ID      0x3000
#define DEVICE_VER      0x0000
#define MANUFACTURER    "hide-key"
#define PRODUCT         "testamatta Lion Head #000 XIAO-RP2040"

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { GP26 }
#define MATRIX_COL_PINS { GP7, GP0, GP1 }

// #define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

// #define SERIAL_USART_FULL_DUPLEX
// #define SERIAL_USART_TX_PIN GP0
// #define SERIAL_USART_RX_PIN GP1

#define SERIAL_DEBUG

#define TAPPING_TERM 500
#define PERMISSIVE_HOLD

#define SERIAL_PIO_USE_PIO1

#define NUMBER_OF_ENCODERS 2
#define ENCODERS_PAD_A { GP29, GP4 }
#define ENCODERS_PAD_B { GP6, GP3 }
#define ENCODER_RESOLUTION 4

// #define ENCODER_DIRECTION_FLIP
