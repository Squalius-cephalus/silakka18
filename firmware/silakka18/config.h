// Copyright 2024 Squalius-cephalus (@Squalius-cephalus)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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

#define ENCODERS_PAD_A { GP21, GP18 }
#define ENCODERS_PAD_B { GP20, GP19 }
#define ENCODER_DIRECTION_FLIP