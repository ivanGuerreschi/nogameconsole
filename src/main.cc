#/* main.cc

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

#include "flag.h"
#include "hero.h"
#include "info.h"
#include "map.h"
#include <iostream>

int
main()
{
    Flag flag {};
    Hero hero { '@' , 0, 0 };
    Info info {};
    Map map { '*' };

    std::cout << info.get_package() << std::endl;

    auto newmap = map.make_map(flag.get_x_flag(), flag.get_y_flag());
   
    map.print_map(newmap, hero.get_herochar(), hero.get_x_hero(), hero.get_y_hero());

    auto command = true;

    while (command)
    {
        auto input = 'q';

        std::cin >> input;

        switch (input)
        {
            case 'q':
                command = false;
                break;
            case 'l':
                hero.set_x_hero(hero.get_x_hero() + 1);
                map.print_map(newmap, hero.get_herochar(), hero.get_x_hero(), hero.get_y_hero());
                break;
            case 'h':
                hero.set_x_hero(hero.get_x_hero() - 1);
                map.print_map(newmap, hero.get_herochar(), hero.get_x_hero(), hero.get_y_hero());
                break;
            case 'k':
                hero.set_y_hero(hero.get_y_hero() + 1);
                map.print_map(newmap, hero.get_herochar(), hero.get_x_hero(), hero.get_y_hero());
                break;
            case 'j':
                hero.set_y_hero(hero.get_y_hero() - 1);
                map.print_map(newmap, hero.get_herochar(), hero.get_x_hero(), hero.get_y_hero());
                break;
        }

        if (hero.get_x_hero() == flag.get_x_flag() && hero.get_y_hero() == flag.get_y_flag())
        {
            std::cout << "WIN!!" << std::endl; 
            std::cout << "Press q to exit" << std::endl;
            command = false;
        }
    }    

    return 0;
}