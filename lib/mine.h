// mine.h

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

#ifndef MINE_H
#define MINE_H

class Mine
{
public:
  Mine (char mnc, int ymine, int xmine);
  char get_minechar () { return minechar; }
  void set_minechar (char mnc) { minechar = mnc; }
  int get_y_mine () { return y_mine; }
  void set_y_mine (int ymine) { y_mine = ymine; }
  int get_x_mine () { return x_mine; }
  void set_x_mine (int xmine) { x_mine = xmine; }
  
private:
  char minechar = '*';
  int y_mine = 0;
  int x_mine = 0;
};

#endif /* MINE_H */
