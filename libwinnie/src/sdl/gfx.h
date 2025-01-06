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

#ifndef _SDL_GFX_H_
#define _SDL_GFX_H_

#include "../pixmap.h"

bool init_gfx();
void destroy_gfx();

void gfx_update(const Rect &rect);

/* TODO: Move these to ../gfx.h & ../gfx.cc */

unsigned char *get_framebuffer();
Pixmap *get_framebuffer_pixmap();

Rect get_screen_size();
int get_color_depth();

void set_clipping_rect(const Rect &clip_rect);
const Rect &get_clipping_rect();

void get_rgb_order(int *r, int *g, int *b);

#endif // GFX_H_
