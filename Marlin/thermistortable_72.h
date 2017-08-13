/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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

// Vector 3 Main Thermistor
const short temptable_72[][2] PROGMEM = {
   {    1 * OVERSAMPLENR, 500 },
   {   12 * OVERSAMPLENR, 300 },
   {   14 * OVERSAMPLENR, 288 },
   {   23 * OVERSAMPLENR, 254 },
   {   31 * OVERSAMPLENR, 234 },
   {   40 * OVERSAMPLENR, 220 },
   {   66 * OVERSAMPLENR, 192 },
   {   80 * OVERSAMPLENR, 182 },
   {   92 * OVERSAMPLENR, 175 },
   {  109 * OVERSAMPLENR, 167 },
   {  120 * OVERSAMPLENR, 162 },
   {  124 * OVERSAMPLENR, 160 },
   {  131 * OVERSAMPLENR, 157 },
   {  142 * OVERSAMPLENR, 153 },
   {  147 * OVERSAMPLENR, 151 },
   {  156 * OVERSAMPLENR, 148 },
   {  163 * OVERSAMPLENR, 146 },
   {  181 * OVERSAMPLENR, 141 },
   {  196 * OVERSAMPLENR, 137 },
   {  218 * OVERSAMPLENR, 132 },
   {  278 * OVERSAMPLENR, 120 },
   {  295 * OVERSAMPLENR, 117 },
   {  307 * OVERSAMPLENR, 115 },
   {  319 * OVERSAMPLENR, 113 },
   {  325 * OVERSAMPLENR, 112 },
   {  338 * OVERSAMPLENR, 110 },
   {  345 * OVERSAMPLENR, 109 },
   {  352 * OVERSAMPLENR, 108 },
   {  359 * OVERSAMPLENR, 107 },
   {  366 * OVERSAMPLENR, 106 },
   {  373 * OVERSAMPLENR, 105 },
   {  380 * OVERSAMPLENR, 104 },
   {  387 * OVERSAMPLENR, 103 },
   {  394 * OVERSAMPLENR, 102 },
   {  401 * OVERSAMPLENR, 101 },
   {  409 * OVERSAMPLENR, 100 },
   {  416 * OVERSAMPLENR,  99 },
   {  424 * OVERSAMPLENR,  98 },
   {  432 * OVERSAMPLENR,  97 },
   {  439 * OVERSAMPLENR,  96 },
   {  447 * OVERSAMPLENR,  95 },
   {  455 * OVERSAMPLENR,  94 },
   {  462 * OVERSAMPLENR,  93 },
   {  470 * OVERSAMPLENR,  92 },
   {  478 * OVERSAMPLENR,  91 },
   {  486 * OVERSAMPLENR,  90 },
   {  494 * OVERSAMPLENR,  89 },
   {  502 * OVERSAMPLENR,  88 },
   {  511 * OVERSAMPLENR,  87 },
   {  519 * OVERSAMPLENR,  86 },
   {  527 * OVERSAMPLENR,  85 },
   {  535 * OVERSAMPLENR,  84 },
   {  543 * OVERSAMPLENR,  83 },
   {  552 * OVERSAMPLENR,  82 },
   {  560 * OVERSAMPLENR,  81 },
   {  568 * OVERSAMPLENR,  80 },
   {  576 * OVERSAMPLENR,  79 },
   {  585 * OVERSAMPLENR,  78 },
   {  593 * OVERSAMPLENR,  77 },
   {  601 * OVERSAMPLENR,  76 },
   {  610 * OVERSAMPLENR,  75 },
   {  618 * OVERSAMPLENR,  74 },
   {  626 * OVERSAMPLENR,  73 },
   {  634 * OVERSAMPLENR,  72 },
   {  643 * OVERSAMPLENR,  71 },
   {  651 * OVERSAMPLENR,  70 },
   {  659 * OVERSAMPLENR,  69 },
   {  667 * OVERSAMPLENR,  68 },
   {  675 * OVERSAMPLENR,  67 },
   {  691 * OVERSAMPLENR,  65 },
   {  707 * OVERSAMPLENR,  63 },
   {  714 * OVERSAMPLENR,  62 },
   {  722 * OVERSAMPLENR,  61 },
   {  737 * OVERSAMPLENR,  59 },
   {  744 * OVERSAMPLENR,  58 },
   {  752 * OVERSAMPLENR,  57 },
   {  766 * OVERSAMPLENR,  55 },
   {  773 * OVERSAMPLENR,  54 },
   {  787 * OVERSAMPLENR,  52 },
   {  794 * OVERSAMPLENR,  51 },
   {  807 * OVERSAMPLENR,  49 },
   {  814 * OVERSAMPLENR,  48 },
   {  826 * OVERSAMPLENR,  46 },
   {  833 * OVERSAMPLENR,  45 },
   {  845 * OVERSAMPLENR,  43 },
   {  856 * OVERSAMPLENR,  41 },
   {  862 * OVERSAMPLENR,  40 },
   {  872 * OVERSAMPLENR,  38 },
   {  883 * OVERSAMPLENR,  36 },
   {  892 * OVERSAMPLENR,  34 },
   {  902 * OVERSAMPLENR,  32 },
   {  915 * OVERSAMPLENR,  29 },
   {  923 * OVERSAMPLENR,  27 },
   {  935 * OVERSAMPLENR,  24 },
   {  942 * OVERSAMPLENR,  22 },
   {  952 * OVERSAMPLENR,  19 },
   {  963 * OVERSAMPLENR,  15 },
   {  973 * OVERSAMPLENR,  11 },
   {  981 * OVERSAMPLENR,   7 },
   {  990 * OVERSAMPLENR,   2 }
};
