
/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
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

#ifndef M4_RIDDLE_CONSOLE_H
#define M4_RIDDLE_CONSOLE_H

#include "m4/console.h"

namespace M4 {
namespace Riddle {

class Console : public M4::Console {
private:
	bool cmdGlobal(int argc, const char **argv);
	bool cmdKittyScreaming(int argc, const char **argv);
	bool cmdStart(int argc, const char **argv);
	bool cmdRestoreConv(int argc, const char **argv);

public:
	Console();
	~Console() override {}
};

} // End of namespace Riddle
} // End of namespace M4

#endif
