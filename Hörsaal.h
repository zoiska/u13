//
// Created by zoisk on 21.12.23.
//

#include <iostream>

#ifndef U13_HÖRSAAL_H
#define U13_HÖRSAAL_H

namespace hsaal {

    class Hörsaal {
    private:
        int sitzplaetze;
        std::string name;
        int besucher;
    public:
        Hörsaal();
        Hörsaal(std::string name);
        Hörsaal(std::string name, int sitzplaetze);

        void drucken();
        int count();
        void reset();

        void set_sitzplaetze(int num);
        void set_name(std::string str);
        int get_sitzplaetze();
        std::string get_name() const;
        bool operator==(const Hörsaal& other);
    };

} // hsaal

#endif //U13_HÖRSAAL_H
