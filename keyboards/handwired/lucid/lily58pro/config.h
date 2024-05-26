// Copyright 2024 slingthat (@slingthat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


#define ENCODERS_PAD_A { GP14 }
#define ENCODERS_PAD_B { GP13 }
#define ENCODER_RESOLUTION 4

#define DIP_SWITCH_PINS { GP16 }

#define MASTER_LEFT


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
