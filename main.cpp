#include "Punkt/Punkt.h"
#include "Hoersaal/Hoersaal.h"
#include "Bruch/Bruch.h"
#include "VeryLong/VeryLong.h"

int main() {
//-----------------Punkt----------------
    Punkt punkt(3, 5);
    Punkt* punkt2 = new Punkt(5, 3);

    std::cout << "Punkt 1: (" << punkt.get_x() << ", " << punkt.get_y() << ")" << std::endl;
    std::cout << "Punkt 2: (" << punkt2->get_x() << ", " << punkt2->get_y() << ")" << std:: endl;

    punkt.translate(5, 3);
    punkt2->translate(6, 9);

    std::cout << "Punkt 1: (" << punkt.get_x() << ", " << punkt.get_y() << ")" << std::endl;
    std::cout << "Punkt 2: (" << punkt2->get_x() << ", " << punkt2->get_y() << ")" << std:: endl;

    punkt.abstand( *punkt2);

//-----------------Hoersaal----------------
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

//-----------------Bruch----------------
    Bruch b1(2, 1);
    Bruch b2(5, 2);
    Bruch erg1(0, 0);
    Bruch erg2(0, 0);
    Bruch erg3(0, 0);
    std::cout << b1.reell() << std::endl;

    erg1 = b1 * b2;
    std::cout << erg1.reell() << std::endl;

    erg2 = erg2.zahlenreihe(10);
    std::cout << "(" << erg2.Zaehler() << "/" << erg2.Nenner() << ")" << std::endl;
    std::cout << erg2.reell() << std::endl;

    double test1 = (1.0/2.0) - (1.0/3.0) + (1.0/4.0) - (1.0/5.0) + (1.0/6.0) - (1.0/7.0) + (1.0/8.0) - (1.0/9.0) + (1.0/10.0);
    std::cout << test1 << std::endl;    //Test für Zahlenreihe mit 10 Brüchen

    erg3 = erg3.zahlenreihe(20);
    std::cout << "(" << erg3.Zaehler() << "/" << erg3.Nenner() << ")" << std::endl;
    std::cout << erg3.reell() << std::endl;

    double test2 = (1.0/2.0) - (1.0/3.0) + (1.0/4.0) - (1.0/5.0) + (1.0/6.0) - (1.0/7.0) + (1.0/8.0) - (1.0/9.0) + (1.0/10.0) - (1.0/11.0) + (1.0/12.0) - (1.0/13.0) + (1.0/14.0) - (1.0/15.0) + (1.0/16.0) - (1.0/17.0) + (1.0/18.0) - (1.0/19.0) + (1.0/20.0);
    std::cout << test2 << std::endl;    //Test für Zahlenreihe mit 20 Brüchen

//-------------VeryLong-----------------
    int arr[5000];
    for(int i = 1; i <= 5000; i++) {
        arr[i-1] = rand() % 10;
    }

    VeryLong number1(arr, 5000);
    number1.print();


    int arr2[20] = {0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 0, 0, 0, 1, 2, 3, 4};
    VeryLong number2(arr2, 20);
    number2.print();
    number2.normalisiere();
    number2.print();

    int arr3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8};
    int arr4[10] = {9, 8, 7, 6, 5, 4, 3, 6, 5, 2};
    VeryLong number3(arr3, 10);
    VeryLong number4(arr4, 10);

    VeryLong newLong = number3 + number4;

    newLong.print();

    return 0;
}
