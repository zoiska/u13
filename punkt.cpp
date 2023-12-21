//
// Created by zoisk on 21.12.23.
//

#include <iostream>
#include <sstream>
#include "punkt.h"

namespace pnkt {

    punkt::punkt(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void punkt::translate() {
        this->x += x;
        this->y += y;
    }

    void punkt::drucke() {
        std::cout << "(" << get_x() << ", " << get_y() << ")" << std::endl;
    }

    std::string punkt::getCoords() {
        std::ostringstream convert;
        convert << "Meine Koordinaten sind ["
                << this->x << ", " << this->y << "].";
        return convert.str();
    }

    int punkt::get_x() {
        return x;
    }

    int punkt::get_y() {
        return y;
    }

}