#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 5

#define DIRECT_PINS { { GP27, GP28, GP29, GP6, GP7 } }

/* Rotary encoder */
#define ENCODERS_PAD_A { GP1 }
#define ENCODERS_PAD_B { GP2 }
#define ENCODER_RESOLUTION 4

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
