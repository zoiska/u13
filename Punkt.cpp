//
// Created by zoisk on 21.12.23.
//

#include <iostream>
#include <sstream>
#include <cmath>
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

    int Punkt::abstand(Punkt pnkt2) {
        double x1 = this->get_x();
        double y1 = this->get_y();
        double x2 = pnkt2.get_x();
        double y2 = pnkt2.get_y();
        std::cout << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << std::endl;
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }

}