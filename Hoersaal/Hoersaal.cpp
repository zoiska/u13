//
// Created by zoisk on 21.12.23.
//

#include "Hoersaal.h"

Hoersaal::Hoersaal() {
    this->name = "";
    this->sitzplaetze = 0;
    this->besucher = 0;
}

Hoersaal::Hoersaal(std::string name) {
    this->name = name;
    this->sitzplaetze = 0;
    this->besucher = 0;
}

Hoersaal::Hoersaal(std::string name, int sitzplaetze) {
    this->name = name;
    this->sitzplaetze = sitzplaetze;
    this->besucher = 0;
}

void Hoersaal::drucken() {
        std::cout << name << ", " << sitzplaetze << ", " << besucher << std::endl;
}

int Hoersaal::count() {
    return ++besucher;
}

void Hoersaal::reset() {
    this->besucher = 0;
}

void Hoersaal::set_sitzplaetze(int num) {
    this->sitzplaetze = num;
}

void Hoersaal::set_name(std::string str) {
    this->name = str;
}

int Hoersaal::get_sitzplaetze() const {
    return sitzplaetze;
}

std::string Hoersaal::get_name() const {
    return name;
}

bool Hoersaal::operator==(const Hoersaal& other) {
    return this->name == other.get_name();
}