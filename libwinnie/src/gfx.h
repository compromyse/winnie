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

#ifndef GFX_H_
#define GFX_H_

#include "geom.h"
#include "pixmap.h"
void clear_screen(int r, int g, int b);
void fill_rect(const Rect &rect, int r, int g, int b);

void blit(unsigned char *src_img,
          const Rect &src_rect,
          unsigned char *dest_img,
          const Rect &dest_rect,
          int dest_x,
          int dest_y);
void blit_key(unsigned char *src_img,
              const Rect &src_rect,
              unsigned char *dest_img,
              const Rect &dest_rect,
              int dest_x,
              int dest_y,
              int key_r,
              int key_g,
              int key_b);

void
draw_line(Pixmap *pixmap, int x0, int y0, int x1, int y1, int r, int g, int b);
void draw_polygon(
    Pixmap *pixmap, int *vpos, int *vtex, int num_verts, int r, int g, int b);

void gfx_update(const Rect &rect);
#endif // GFX_H_
