/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */

#define VENDOR_ID       0x1209
#define PRODUCT_ID      0xA1E6
#define DEVICE_VER      0x0008
#define MANUFACTURER    Linkomnia
#define PRODUCT         Atreus44
#define DESCRIPTION     QMK keyboard firmware for Atreus

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
//
#define NUM_LOCK_LED_PIN D2
#define CAPS_LOCK_LED_PIN D1
#define SCROLL_LOCK_LED_PIN D0

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_ROW_PINS { B0, B1, B2, B3 }
#define MATRIX_COL_PINS { F7, F6, F5, F4, F1, F0, D5, D6, D7, B4, B5, E6 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { D4,B7 }
#define ENCODERS_PAD_B { D3,B6 }

/* number of backlight levels */
#ifdef BACKLIGHT_ENABLE
  #define BACKLIGHT_PIN C7
  #define BACKLIGHT_LEVELS 7
//  #define BACKLIGHT_BREATHING
//  #define BREATHING_PERIOD 4
#endif

/* ws2812 RGB LED */
#define RGB_DI_PIN C7
#ifdef RGB_DI_PIN
   #define RGBLED_NUM 44
   #define RGBLIGHT_HUE_STEP 12
   #define RGBLIGHT_SAT_STEP 25
   #define RGBLIGHT_VAL_STEP 12
   #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
   #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
/*== all animations enable ==*/
   #define RGBLIGHT_ANIMATIONS
/*== or choose animations ==*/
//  #define RGBLIGHT_EFFECT_BREATHING
//   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//   #define RGBLIGHT_EFFECT_SNAKE
//   #define RGBLIGHT_EFFECT_KNIGHT
//   #define RGBLIGHT_EFFECT_CHRISTMAS
//   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//   #define RGBLIGHT_EFFECT_RGB_TEST
//   #define RGBLIGHT_EFFECT_ALTERNATING
#endif
#define RGBW

