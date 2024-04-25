//
// Created by zoisk on 21.12.23.
//

#ifndef U13_PUNKT_H
#define U13_PUNKT_H

#include <iostream>

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
    int abstand(Punkt pnkt2);
};

#endif //U13_PUNKT_H