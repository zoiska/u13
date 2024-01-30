#include <iostream>
#include "Punkt.h"
#include "Hoersaal.h"
#include "Bruch.h"

int main() {
    Punkt punkt(3, 5);
    Punkt* punkt2 = new Punkt(5, 3);

    std::cout << "Punkt 1: (" << punkt.get_x() << ", " << punkt.get_y() << ")" << std::endl;
    std::cout << "Punkt 2: (" << punkt2->get_x() << ", " << punkt2->get_y() << ")" << std:: endl;

    punkt.translate(5, 3);
    punkt2->translate(6, 9);

    std::cout << "Punkt 1: (" << punkt.get_x() << ", " << punkt.get_y() << ")" << std::endl;
    std::cout << "Punkt 2: (" << punkt2->get_x() << ", " << punkt2->get_y() << ")" << std:: endl;

    punkt.abstand( *punkt2);


    Hoersaal saal("LP1", 100);
    Hoersaal* saal2 = new Hoersaal("L2", 500);

    std::cout << "Hoersaal " << saal.get_name() << ", Sitzplaetze: " << saal.get_sitzplaetze() << std::endl;
    std::cout << "Hoersaal " << saal2->get_name() << ", Sitzplaetze: " << saal2->get_sitzplaetze() << std::endl;

    if(saal.get_name()==saal2->get_name()) {
        std::cout << "Die Namen sind gleich." << std::endl;
    }
    else {
        std::cout << "Die Namen sind nicht gleich." << std::endl;
    }

    for(int i = 20; i > 0; i--){
        saal.count();
    }
    saal.drucken();


    Bruch b1(2, 1);
    std::cout << b1.reell() << std::endl;

    return 0;
}
