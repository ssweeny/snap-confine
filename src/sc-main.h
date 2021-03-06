/*
 * Copyright (C) 2015 Canonical Ltd
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
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

#ifndef SNAP_CONFINE_MAIN
#define SNAP_CONFINE_MAIN

/*! The void directory.
 *  Snap confine moves to that directory in case it cannot retain
 *  the current working directory across the pivot_root call.
 **/
#define SC_VOID_DIR "/var/lib/snapd/void"

int sc_main(int argc, char **argv);

#endif				// SNAP_CONFINE_MAIN
