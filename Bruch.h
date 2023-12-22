//
// Created by zoisk on 22.12.23.
//

#ifndef U13_BRUCH_H
#define U13_BRUCH_H

namespace bruch {

    class Bruch {
    private:
        int n;
        int z;
        void kuerzen();
        int ggt();
    public:
        Bruch(int n, int z);
        int Zähler();
        int Nenner();
        double reell();
    };

} // bruch

#endif //U13_BRUCH_H
