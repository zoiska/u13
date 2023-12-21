#include <iostream>
#include "punkt.h"
#include "Hörsaal.h"

int main() {
    using namespace pnkt;
    punkt punkt(3, 5);
    punkt.drucke();
    punkt.translate();
    punkt.drucke();

    using namespace hsaal;
    Hörsaal saal;
    saal.drucken();
    saal.set_name("LP1");
    saal.set_sitzplaetze(56);
    saal.drucken();

    return 0;
}
