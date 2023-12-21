//
// Created by zoisk on 21.12.23.
//

#ifndef U13_PUNKT_H
#define U13_PUNKT_H

namespace pnkt {

    class punkt {
    private:
        int x;
        int y;
    public:
        punkt(int x, int y);
        void translate();
        void drucke();
        std::string getCoords();
        int get_x();
        int get_y();
    };

}

#endif //U13_PUNKT_H