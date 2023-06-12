// map.cc

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

#include "flag.h"
#include "hero.h"
#include "map.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

int YMINA1 = 0;
int XMINA1 = 0;
int YMINA2 = 0;
int XMINA2 = 0;
int YMINA3 = 0;
int XMINA3 = 0;
int YMINA4 = 0;
int XMINA4 = 0;
int YMINA5 = 0;
int XMINA5 = 0;

Map::Map (char mc) : mapchar (mc)
{
  std::srand (static_cast<unsigned int> (std::time (NULL)));
  YMINA1 = std::rand() % 10;
  XMINA1 = std::rand() % 10;
  YMINA2 = std::rand() % 10;
  XMINA2 = std::rand() % 10;
  YMINA3 = std::rand() % 10;
  XMINA3 = std::rand() % 10;
  YMINA4 = std::rand() % 10;
  XMINA4 = std::rand() % 10;
  YMINA5 = std::rand() % 10;
  XMINA5 = std::rand() % 10;
}

std::vector<std::vector<char>>
Map::make_map (int x_flag, int y_flag)
{
    std::vector<std::vector<char>> map (W, std::vector<char> (H, mapchar));

    map[static_cast<unsigned int> (x_flag)
	][static_cast<unsigned int> (y_flag)] = FC;

    return map;
}

void
Map::print_map(std::vector<std::vector<char>> map,
	       char hc, int hx, int hy)
{
    std::system ("clear");

    if ((hx == XMINA1 && hy == YMINA1) ||
	(hx == XMINA2 && hy == YMINA2) ||
	(hx == XMINA3 && hy == YMINA3) ||
	(hx == XMINA4 && hy == YMINA4) ||
	(hx == XMINA5 && hy == YMINA5))
      {

	std::cout << "GAMEOVER!" << std::endl;
	std::cout << "Pres q to exit" << std::endl;
	hc = '*';
      }
    
    map[static_cast<unsigned int> (hy)][static_cast<unsigned int> (hx)] = hc;

    for (auto w = map.begin (); w != map.end (); w++)
    {
        for (auto h = w->begin (); h != w->end (); h++)
            std::cout << *h;

        std::cout << std::endl;
    }
}
