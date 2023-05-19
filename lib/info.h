/* info.h

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

#ifndef INFO_H
#define INFO_H

#include <config.h>
#include <string>

class Info
{
public:
    const std::string get_version();
    const std::string get_package();
    const std::string get_bugreport();
    const std::string get_license();

private:
    const std::string version = VERSION;
    const std::string package = PACKAGE_STRING;
    const std::string bugreport = PACKAGE_BUGREPORT;
    const std::string license = "This program is free software: you can redistribute it and/or "
            "modify\n"
            "it under the terms of the GNU General Public License as published "
            "by\n"
            "the Free Software Foundation, either version 3 of the License, or\n"
            "(at your option) any later version.\n\n"

            "This program is distributed in the hope that it will be useful,\n"
            "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
            "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
            "GNU General Public License for more details.\n\n"

            "You should have received a copy of the GNU General Public License\n"
            "along with this program.  If not, see "
            "<https://www.gnu.org/licenses/>.\n";
};

#endif /* INFO_H */
