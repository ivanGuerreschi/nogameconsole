/* flag.h

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

#ifndef FLAG_H
#define FLAG_H

constexpr auto FC = 'P';

class Flag
{
public:
    Flag();
    char get_flagchar() { return flagchar; }
    int get_x_flag() { return flag_x; }
    int get_y_flag() { return flag_y; }

private:
    char flagchar = '@';
    int flag_x = 0;
    int flag_y = 0;
};

#endif /* FLAG_H */

