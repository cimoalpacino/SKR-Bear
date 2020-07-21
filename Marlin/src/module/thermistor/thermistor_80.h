/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 3950 K, 4.7 kOhm pull-up
const short temptable_80[][2] PROGMEM = {
{ OV(27), 280 },	//guessed
{ OV(30), 270 },	//guessed
{ OV(35), 260 },
{ OV(38), 255 },
{ OV(42), 250 },
{ OV(45), 245 },
{ OV(49), 240 },
{ OV(53), 235 },
{ OV(58), 230 },
{ OV(64), 225 },
{ OV(69), 220 },
{ OV(77), 215 },
{ OV(83), 210 },
{ OV(94), 205 },
{ OV(100), 200 },
{ OV(113), 195 },
{ OV(123), 190 },
{ OV(138), 185 },
{ OV(150), 180 },
{ OV(168), 175 },
{ OV(184), 170 },
{ OV(222), 160 },
{ OV(268), 150 },
{ OV(323), 140 },
{ OV(376), 130 },
{ OV(444), 120 },
{ OV(516), 110 },
{ OV(588), 100 },
{ OV(663), 90 },
{ OV(738), 80 },
{ OV(800), 70 },
{ OV(858), 60 },
{ OV(902), 50 },
{ OV(937), 40 },
{ OV(966), 30 },
{ OV(976), 25 },
{ OV( 986),  20 },
{ OV(1000),  10 },
{ OV(1010),   0 }
};
