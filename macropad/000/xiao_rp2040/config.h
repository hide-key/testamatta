#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1d8c
#define PRODUCT_ID      0x1000
#define DEVICE_VER      0x0001
#define MANUFACTURER    "hide-key"
#define PRODUCT         "testamatta MacroPad #000 XIAO-RP2040"

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 5

#define MATRIX_ROW_PINS { GP1 }
#define MATRIX_COL_PINS { GP2, GP4, GP26, GP27, GP29 }

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

#define NUMBER_OF_ENCODERS 1
#define ENCODERS_PAD_A { GP0 }
#define ENCODERS_PAD_B { GP7 }
#define ENCODER_RESOLUTION 4

// #define ENCODER_DIRECTION_FLIP

#define RGB_DI_PIN GP28
#ifdef RGB_DI_PIN
#    define RGBLED_NUM 1
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_LIMIT_VAL 255
#    define RGBLIGHT_SLEEP
/*== all animations enable ==*/
#    define RGBLIGHT_ANIMATIONS
#endif
