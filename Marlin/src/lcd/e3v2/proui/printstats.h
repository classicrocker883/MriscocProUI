/**
 * Print Stats page for PRO UI
 * Based on the original work of: Miguel A. Risco-Castillo (MRISCOC)
 * Version: 1.4.0
 * Date: 2022/12/03
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

class PrintStats {
public:
  static void draw();
  static void reset();
};

extern PrintStats printStats;

void gotoPrintStats();
void printStatsReset();
