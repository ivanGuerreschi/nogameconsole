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
#include <iostream>

Map::Map (char mc) : mapchar (mc)
{}

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

    map[static_cast<unsigned int> (hy)][static_cast<unsigned int> (hx)] = hc;

    for (auto w = map.begin (); w != map.end (); w++)
    {
        for (auto h = w->begin (); h != w->end (); h++)
            std::cout << *h;

        std::cout << std::endl;
    }
}
