#include <iostream>
#include "Punkt.h"
#include "Hörsaal.h"

int main() {
    using namespace pnkt;

    Punkt punkt(3, 5);
    Punkt* punkt2 = new Punkt(5, 3);

    std::cout << "Punkt 1: (" << punkt.get_x() << ", " << punkt.get_y() << ")" << std::endl;
    std::cout << "Punkt 2: (" << punkt2->get_x() << ", " << punkt2->get_y() << ")" << std:: endl;

    punkt.translate(5, 3);
    punkt2->translate(3, 5);

    std::cout << "Punkt 1: (" << punkt.get_x() << ", " << punkt.get_y() << ")" << std::endl;
    std::cout << "Punkt 2: (" << punkt2->get_x() << ", " << punkt2->get_y() << ")" << std:: endl;


    using namespace hsaal;
    Hörsaal saal("LP1", 100);
    Hörsaal* saal2 = new Hörsaal("L2", 500);

    std::cout << "Hörsaal " << saal.get_name() << ", Sitzplätze: " << saal.get_sitzplaetze() << std::endl;
    std::cout << "Hörsaal " << saal2->get_name() << ", Sitzplätze: " << saal2->get_sitzplaetze() << std::endl;

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

    return 0;
}
