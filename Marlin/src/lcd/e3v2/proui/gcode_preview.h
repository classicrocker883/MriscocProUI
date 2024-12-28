/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * DWIN G-code thumbnail preview
 * Author: Miguel A. Risco-Castillo
 * version: 3.1.2
 * Date: 2022/09/03
 */

class Preview {
public:
  static void drawFromSD();
  static void invalidate();
  static bool valid();
  static void show();
private:
  static bool hasPreview();
};

extern Preview preview;

typedef struct {
#if ENABLED(CV_LASER_MODULE)
  bool isConfig;
  bool isLaser;
#endif
  char name[13] = ""; // 8.3 + null
  uint32_t thumbstart;
  int thumbsize, thumbheight, thumbwidth;
  float time,
  filament,
  layer,
  width, height, length;

  void setnames(const char * const fn);
  void clears();

} fileprop_t;

extern fileprop_t fileprop;

// These can be enabled, but function use is unknown
#if ENABLED(CV_LASER_MODULE)
  void getLine(char *buf, const uint8_t bufsize);
  void getValue(const char *buf, const char * const key, float &value);
  void getFileHeader();
#endif