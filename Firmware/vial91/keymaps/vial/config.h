// Copyright 2024 Michael Böhmländer
//
// Original Design, Code and Build by Victor Lucachi Copyright 2022
// https://github.com/victorlucachi
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VIAL_KEYBOARD_UID {0x02, 0xDD, 0x90, 0x6F, 0xDA, 0x3E, 0x9F, 0x56}

/* 8 layers */
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

/* 32 macros */
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

/* LED configuration */
#define WS2812_DI_PIN D7
#define RGBLED_NUM 6

/* VIAL unlock keys - upper row left and right key*/
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 2 }
