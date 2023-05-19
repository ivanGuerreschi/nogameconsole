/* maps.h

   Copyright (C) 2023 Ivan Guerreschi.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef MAP_H
#define MAP_H

#include <vector>

constexpr auto W = 10;
constexpr auto H = 10;

class Map
{
public:
    Map(char mc);
    char get_mapchar() { return mapchar; }
    void set_mapchar(char mc) { mapchar = mc; }
    std::vector<std::vector<char>> make_map (int x_flag, int y_flag);
    void print_map(std::vector<std::vector<char>> map,
            char hc, int hx, int hy);

private:
    char mapchar = '*';
};

#endif /* MAP_H */
