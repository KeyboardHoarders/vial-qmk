/* Copyright 2021 duckyb
 * Modification for Vial support
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

#define ONESHOT_TIMEOUT 2000
#define FORCE_NKRO

/* Vial UID for eternal_keypad */
#define VIAL_KEYBOARD_UID { 0x7E, 0x2B, 0x98, 0x30, 0xC5, 0x3A, 0x23, 0x03 }

/* Vial secure unlock keystroke - top left (Esc) and bottom right key */
#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 7 }
