//
// Created by zoisk on 22.12.23.
//

#include <cmath>
#include "Bruch.h"

namespace bruch {
    Bruch::Bruch(int tn, int tz) {
        if(tn == 0) {
            this->z = tz;
            this->n = 1;
        }
        else {
            this->z = tz;
            this->n = tn;
        }
        kuerzen();
    }

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

    int Bruch::Zaehler() const {
        return this->z;
    }

    int Bruch::Nenner() const {
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

    Bruch Bruch::operator+(const Bruch& other) const {
        int tz = this->z * other.Nenner() + other.Zaehler() * this->n;
        int tn = this->n * other.Nenner();
        return Bruch(tn, tz);
    }

    Bruch Bruch::operator-(const Bruch& other) const {
        int tz = this->z * other.Nenner() - other.Zaehler() * this->n;
        int tn = this->n * other.Nenner();
        return Bruch(tn, tz);
    }

    Bruch Bruch::operator*(const Bruch& other) const {
        int tz = this->z * other.Zaehler();
        int tn = this->n * other.Nenner();
        return Bruch(tn, tz);
    }

    Bruch Bruch::operator/(const Bruch& other) const {
        int tz = this->z * other.Nenner();
        int tn = this->n * other.Zaehler();
        return Bruch(tn, tz);
    }

} // bruch