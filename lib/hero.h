// hero.h

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

#ifndef HERO_H
#define HERO_H

#include <vector>

constexpr auto WH = 0;
constexpr auto HH = 0;

class Hero
{
public:
  Hero ();
  Hero (char hc);
  Hero (char hc, int hx, int hy);
  char get_herochar () { return herochar; }
  void set_herochar (char hc ) { herochar = hc; }
  int get_x_hero () { return hero_x; }
  void set_x_hero (int hx) { hero_x = hx; }
  int get_y_hero () { return hero_y; }
  void set_y_hero (int hy) { hero_y = hy; }
  
private:
  char herochar = '@';
  int hero_x = WH;
  int hero_y = HH;
};

#endif /* HERO_H */
