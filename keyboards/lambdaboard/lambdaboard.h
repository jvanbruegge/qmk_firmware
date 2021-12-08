// Copyright 2021 Jan van Brügge (@jvanbruegge)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    L00, L01,          R00, R01,  \
    L10, L11,          R10, R11  \
) { \
    { L00, L01 }, \
    { L10, L11 }, \
    { R00, R01 }, \
    { R10, R11 }  \
}
