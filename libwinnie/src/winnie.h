/*
winnie - an experimental window system

Copyright (C) 2013 Eleni Maria Stea

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Author: Eleni Maria Stea <elene.mst@gmail.com>
*/

#ifndef WINNIE_H_
#define WINNIE_H_

#include "geom.h"
#include "sdl/event.h"
#include "sdl/gfx.h"
#include "sdl/keyboard.h"
#include "sdl/mouse.h"
#include "text.h"
#include "window.h"
#include "wm.h"

bool winnie_init();
void winnie_shutdown();

bool winnie_open();
void winnie_close();

long winnie_get_time();

#endif
