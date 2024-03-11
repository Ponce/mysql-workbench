/*
 * Copyright (c) 2009, 2018, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0,
 * as published by the Free Software Foundation.
 *
 * This program is designed to work with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms, as
 * designated in a particular file or component or in included license
 * documentation.  The authors of MySQL hereby grant you an additional
 * permission to link the program and your derivative works with the
 * separately licensed software that they have either included with
 * the program or referenced in the documentation.
 * This program is distributed in the hope that it will be useful,  but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
 * the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA 
 */

#pragma once

#ifdef _MSC_VER

#pragma once

#include <list>
#include <vector>
#include <sigc++/sigc++.h>

#include <string>
#include <map>
#include <set>
#include <stdexcept>
#include <assert.h>
#include <algorithm>
#include <typeinfo>

#ifdef __APPLE__
#undef nil
#define nil empty
#endif
#include <sigc++/sigc++.h>
#include <stdio.h>

#include <glib.h>

#include <math.h>

#include <cairo/cairo.h>
#include <cairo/cairo-pdf.h>
#include <cairo/cairo-ps.h>
#include <cairo/cairo-svg.h>

#ifdef __APPLE__
#include <OpenGL/gl.h>
#elif defined(_MSC_VER)
#define snprintf _snprintf
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <gl/gl.h>
#include <float.h>
#define INFINITY FLT_MAX
#else
#include <GL/gl.h>
#endif

#include <gl/gl.h>
#include <gl/glu.h>

#include <wgl/glitz-wgl.h>

extern "C" {
#include <cairo/cairo-glitz.h>
};

#include <glib/gthread.h>

#endif
