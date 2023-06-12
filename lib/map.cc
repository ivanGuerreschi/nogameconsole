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
#include "mine.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Mine *mine1;
Mine *mine2;
Mine *mine3;
Mine *mine4;
Mine *mine5;

Map::Map (char mc) : mapchar (mc)
{
  std::srand (static_cast<unsigned int> (std::time (NULL)));
  mine1 = new Mine ('*', std::rand () % 10, std::rand () % 10);
  mine2 = new Mine ('*', std::rand () % 10, std::rand () % 10);
  mine3 = new Mine ('*', std::rand () % 10, std::rand () % 10);
  mine4 = new Mine ('*', std::rand () % 10, std::rand () % 10);
  mine5 = new Mine ('*', std::rand () % 10, std::rand () % 10);
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
    
    if ((hx == mine1->get_x_mine () && hy == mine1->get_x_mine ()) ||
	(hx == mine2->get_x_mine () && hy == mine2->get_x_mine ()) ||
	(hx == mine3->get_x_mine () && hy == mine3->get_x_mine ()) ||
	(hx == mine4->get_x_mine () && hy == mine4->get_x_mine ()) ||
	(hx == mine5->get_x_mine () && hy == mine5->get_x_mine ()))
      {

	std::cout << "GAMEOVER!" << std::endl;
	std::cout << "Pres q to exit" << std::endl;
	hc = '*';
	delete mine1;
	delete mine2;
	delete mine3;
	delete mine4;
	delete mine5;
      }
    
    map[static_cast<unsigned int> (hy)][static_cast<unsigned int> (hx)] = hc;

    for (auto w = map.begin (); w != map.end (); w++)
    {
        for (auto h = w->begin (); h != w->end (); h++)
            std::cout << *h;

        std::cout << std::endl;
    }
}
