// Copyright 2021 Jan van Brügge (@jvanbruegge)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER jvanbruegge
#define PRODUCT      lambdaboard

/* key matrix size */
// Rows are doubled for other hand
#define MATRIX_ROWS 4
#define MATRIX_COLS 2

#define USE_I2C
#define SPLIT_USB_DETECT

#define MATRIX_ROW_PINS { B2, B6 }
#define MATRIX_COL_PINS { B5, B4 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
