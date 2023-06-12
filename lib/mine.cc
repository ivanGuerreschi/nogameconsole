// mine.cc

// Copyright (C) 2023 Ivan Guerreschi.

// This file is part of the nogameconsole.
   
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.

//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.

//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "mine.h"

Mine::Mine (char mnc, int ymine, int xmine)
{
  set_minechar (mnc);
  set_y_mine (ymine);
  set_x_mine (xmine);
} 
