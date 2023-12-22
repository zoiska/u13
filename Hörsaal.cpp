//
// Created by zoisk on 21.12.23.
//

#include "Hörsaal.h"

namespace hsaal {

    Hörsaal::Hörsaal() {
        this->name = "";
        this->sitzplaetze = 0;
        this->besucher = 0;
    }

    Hörsaal::Hörsaal(std::string name) {
        this->name = name;
        this->sitzplaetze = 0;
        this->besucher = 0;
    }

    Hörsaal::Hörsaal(std::string name, int sitzplaetze) {
        this->name = name;
        this->sitzplaetze = sitzplaetze;
        this->besucher = 0;
    }

    void Hörsaal::drucken() {
            std::cout << name << ", " << sitzplaetze << ", " << besucher << std::endl;
    }

    int Hörsaal::count() {
        return ++besucher;
    }

    void Hörsaal::reset() {
        this->besucher = 0;
    }

    void Hörsaal::set_sitzplaetze(int num) {
        this->sitzplaetze = num;
    }

    void Hörsaal::set_name(std::string str) {
        this->name = str;
    }

    int Hörsaal::get_sitzplaetze() {
        return sitzplaetze;
    }

    std::string Hörsaal::get_name() const {
        return name;
    }

    bool Hörsaal::operator==(const Hörsaal& other) {
        return this->name == other.get_name();
    }
}