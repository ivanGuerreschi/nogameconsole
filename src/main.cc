// main.cc

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
#include "info.h"
#include "map.h"
#include "mine.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

int
main ()
{
  Flag flag {};
  Hero hero { '@' , 0, 0 };
  Info info {};
  Map map { 'O' };
  
  std::srand (static_cast<unsigned int> (std::time (NULL)));
  Mine mine1 { '*', std::rand () % 10, std::rand () % 10 };
  Mine mine2 { '*', std::rand () % 10, std::rand () % 10 };
  Mine mine3 { '*', std::rand () % 10, std::rand () % 10 };
  Mine mine4 { '*', std::rand () % 10, std::rand () % 10 };
  Mine mine5 { '*', std::rand () % 10, std::rand () % 10 };
 
  std::cout << info.get_package () << std::endl;

  auto newmap = map.make_map (flag.get_x_flag (), flag.get_y_flag ());

  map.print_map (newmap, hero.get_herochar (), hero.get_x_hero (), hero.get_y_hero ());

  auto loop = true;

  while (loop)
    {
      auto command = 'q';

      std::cin >> command;

      switch (command)
        {
        case 'q':
          loop = false;
          break;
	case 'l':
          hero.set_x_hero (hero.get_x_hero () + 1);
	  if (hero.get_x_hero () > 9)
	    hero.set_x_hero(9);
          map.print_map (newmap, hero.get_herochar (), hero.get_x_hero (), hero.get_y_hero ());
          break;
        case 'h':
          hero.set_x_hero (hero.get_x_hero () - 1);
	  if (hero.get_x_hero () < 0)
	    hero.set_x_hero(0);
          map.print_map (newmap, hero.get_herochar (), hero.get_x_hero (), hero.get_y_hero ());
          break;
        case 'k':
          hero.set_y_hero (hero.get_y_hero () + 1);
	  if (hero.get_y_hero () > 9)
	    hero.set_y_hero(9);
          map.print_map (newmap, hero.get_herochar (), hero.get_x_hero (), hero.get_y_hero ());
          break;
        case 'j':
          hero.set_y_hero (hero.get_y_hero() - 1);
	  if (hero.get_y_hero () < 0)
	    hero.set_y_hero(0);
          map.print_map (newmap, hero.get_herochar (), hero.get_x_hero (), hero.get_y_hero ());
          break;
        }

      if (hero.get_x_hero () == flag.get_x_flag () && hero.get_y_hero () == flag.get_y_flag ())
        {
          std::cout << "WIN!!" << std::endl;
	  loop = false;
        }      
      
      if ((hero.get_x_hero () == mine1.get_x_mine () && hero.get_y_hero () == mine1.get_y_mine ()) ||
	  (hero.get_x_hero () == mine2.get_x_mine () && hero.get_y_hero () == mine2.get_y_mine ()) ||
	  (hero.get_x_hero () == mine3.get_x_mine () && hero.get_y_hero () == mine3.get_y_mine ()) ||
	  (hero.get_x_hero () == mine4.get_x_mine () && hero.get_y_hero () == mine4.get_y_mine ()) ||
	  (hero.get_x_hero () == mine5.get_x_mine () && hero.get_y_hero () == mine5.get_y_mine ()))
	{

	  std::cout << "GAMEOVER!!" << std::endl;
	  hero.set_herochar ('*');
	  loop = false;

	}
    }
  
  return 0;
}
