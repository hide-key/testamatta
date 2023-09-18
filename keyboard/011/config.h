#pragma once

// #include "config_common.h"

/* USB Device descriptor parameter */
/* #define VENDOR_ID       0x1D8C
#define PRODUCT_ID      0x1003
#define DEVICE_VER      0x0002
#define MAINTAINER      "hide-key"
#define MANUFACTURER    "testamatta Design Garage"
#define PRODUCT         "testamatta KEYBOARD #011" */

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

// wiring of each half
// #define MATRIX_ROW_PINS { GP1, GP2, GP3, GP4 }
// #define MATRIX_COL_PINS { GP6, GP7, GP26, GP27, GP28, GP29 }
// #define UNUSED_PINS

/* Set 0 if debouncing isn't needed */
// #define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* #else
  // fix iPhone and iPad power adapter issue
  // iOS device need lessthan 100
  #define USB_MAX_POWER_CONSUMPTION 100
#endif */
