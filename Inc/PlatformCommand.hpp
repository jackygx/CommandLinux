/*
 * Copyright (c) 2018 Guo Xiang
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __PLATFORM_COMMAND_HPP__
#define __PLATFORM_COMMAND_HPP__

#include <stdlib.h>

namespace Platform {

	inline int System(const CConstStringPtr &cmd)
	{
		return system(cmd->ToCStr());
	}
}

using namespace Platform;

#endif /* __PLATFORM_COMMAND_HPP__ */

