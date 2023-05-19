# Makefile.am
#
# Copyright (C) 2023 Ivan Guerreschi
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

AM_CPPFLAGS = -I $(top_srcdir)/lib \
              -Wall -Wextra -Wshadow -Wnon-virtual-dtor \
			  -Wconversion -Wcast-align -Wunused \
			  -Wshadow -Wold-style-cast -Wno-missing-braces \
			  -Wpointer-arith -Wcast-qual -Wsign-conversion 

noinst_LIBRARIES = libnogameconsole.a
noinst_HEADERS =flag.h hero.h info.h map.h

libnogameconsole_a_SOURCES = $(libnogameconsole_a_HEADERS) flag.cc hero.cc info.cc map.cc
