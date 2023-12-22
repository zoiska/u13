//
// Created by zoisk on 22.12.23.
//

#include <cmath>
#include "Bruch.h"

namespace bruch {
    void Bruch::kuerzen() {
        int teiler = ggt();
        n /= teiler;
        z /= teiler;
    }

    int Bruch::ggt() {
        int a = z;
        int b = n;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    Bruch::Bruch(int e1, int e2) {
        if(e1 == 0) {
            this->z = e2;
            this->n = 1;
        }
        else {
            this->z = e2;
            this->n = e1;
        }
        kuerzen();
    }

    int Bruch::Zähler() {
        return this->z;
    }

    int Bruch::Nenner() {
        return this->n;
    }

    double Bruch::reell() {
        if(n != 0 && z == 0) {
            return 0;
        }
        else {
            return static_cast<double>(z) / static_cast<double>(n);
        }
    }
} // bruch