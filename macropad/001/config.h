#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1d8c
#define PRODUCT_ID      0x1001
#define DEVICE_VER      0x0001
#define MANUFACTURER    "hide-key"
#define PRODUCT         "TESTAMATTA MacroPad #001"

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { 13, 9, 8 }
#define MATRIX_COL_PINS { 12, 10, 11 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

#define SERIAL_DEBUG

#define TAPPING_TERM 500
#define PERMISSIVE_HOLD

#define SERIAL_PIO_USE_PIO1
