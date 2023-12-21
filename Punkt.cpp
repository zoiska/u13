//
// Created by zoisk on 21.12.23.
//

#include <iostream>
#include <sstream>
#include "Punkt.h"

namespace pnkt {

    Punkt::Punkt(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void Punkt::translate(int x, int y) {
        this->x += x;
        this->y += y;
    }

    void Punkt::drucke() {
        std::cout << "(" << get_x() << ", " << get_y() << ")" << std::endl;
    }

    std::string Punkt::getCoords() {
        std::ostringstream convert;
        convert << "Meine Koordinaten sind ["
                << this->x << ", " << this->y << "].";
        return convert.str();
    }

    int Punkt::get_x() {
        return x;
    }

    int Punkt::get_y() {
        return y;
    }

}