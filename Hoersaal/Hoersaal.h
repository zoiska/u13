//
// Created by zoisk on 21.12.23.
//

#ifndef U13_HOERSAAL_H
#define U13_HOERSAAL_H

#include <iostream>

class Hoersaal {
private:
    int sitzplaetze;
    std::string name;
    int besucher;
public:
    Hoersaal();
    Hoersaal(std::string name);
    Hoersaal(std::string name, int sitzplaetze);

    void drucken();
    int count();
    void reset();

    void set_sitzplaetze(int num);
    void set_name(std::string str);
    int get_sitzplaetze() const;
    std::string get_name() const;
    bool operator==(const Hoersaal& other);
};

#endif //U13_HOERSAAL_H
