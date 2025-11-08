/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

#define RGBLIGHT_LAYERS
#define QUICK_TAP_TERM 0
#define TAPPING_TERM 100

// Underglow
#define RGBLIGHT_DEFAULT_ON true
#define RGBLIGHT_DEFAULT_HUE 0
#define RGBLIGHT_DEFAULT_VAL 255
#undef RGBLIGHT_DEFAULT_MODE
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT  // Solid color

/*
#undef RGBLIGHT_LED_COUNT
#define RGBLIGHT_LED_COUNT 14    // Number of LEDs
#define RGBLIGHT_SLEEP
*/

// Enable RGB layers and set max layers
#define RGBLIGHT_MAX_LAYERS 4
