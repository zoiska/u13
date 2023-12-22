//
// Created by zoisk on 21.12.23.
//

#ifndef U13_PUNKT_H
#define U13_PUNKT_H

#include <iostream>

namespace pnkt {

    class Punkt {
    private:
        int x;
        int y;
    public:
        Punkt(int x, int y);
        void translate(int x, int y);
        void drucke();
        std::string getCoords();
        int get_x();
        int get_y();
    };

}

#endif //U13_PUNKT_H