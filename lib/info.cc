/* info.cc

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

#include "info.h"

const std::string
Info::get_version()
{
    return version;
}

const std::string
Info::get_package()
{
    return package;
}

const std::string
Info::get_bugreport()
{
    return bugreport;
}

const std::string
Info::get_license()
{
    return license;
}