/*
 * Copyright 2008 Vincent Sanders <vince@simtec.co.uk>
 *
 * This file is part of NetSurf, http://www.netsurf-browser.org/
 *
 * NetSurf is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * NetSurf is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef NETSURF_MOTIF_FONT_H
#define NETSURF_MOTIF_FONT_H

extern struct gui_layout_table *motif_layout_table;
extern struct gui_utf8_table *motif_utf8_table;

/**
 * Initialise framebuffer font handling.
 */
bool motif_font_init(void);

/**
 * Finalise framebuffer font handling.
 */
bool motif_font_finalise(void);

/**
 * Find the position in a string where an x coordinate falls.
 *
 * \param[in] fstyle style for this text
 * \param[in] string UTF-8 string to measure
 * \param[in] length length of string, in bytes
 * \param[in] x coordinate to search for
 * \param[out] char_offset updated to offset in string of actual_x, [0..length]
 * \param[out] actual_x updated to x coordinate of character closest to x
 * \return NSERROR_OK and char_offset and actual_x updated or
 *          appropriate error code on faliure
 */
nserror motif_font_position(const struct plot_font_style *fstyle, const char *string, size_t length, int x, size_t *char_offset, int *actual_x);

/**
 * Measure the width of a string.
 *
 * \param[in] fstyle plot style for this text
 * \param[in] string UTF-8 string to measure
 * \param[in] length length of string, in bytes
 * \param[out] width updated to width of string[0..length)
 * \return NSERROR_OK and width updated or appropriate error code on faliure
 */
nserror motif_font_width(const struct plot_font_style *fstyle, const char *string, size_t length, int *width);


#include "motif/font_internal.h"

#endif /* NETSURF_FB_FONT_H */

