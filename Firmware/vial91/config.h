// Copyright 2024 Michael Böhmländer
//
// Original Design, Code and Build by Victor Lucachi Copyright 2022
// https://github.com/victorlucachi
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Encoders */
#define ENCODERS_PAD_A { B1, B2 }
#define ENCODERS_PAD_B { F7, B3 }

/* 8 layers */
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

/* 32 macros */
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

/* LED configuration */
#define WS2812_DI_PIN D7
#define RGBLED_NUM 6