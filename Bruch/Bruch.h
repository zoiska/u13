//
// Created by zoisk on 22.12.23.
//

#ifndef U13_BRUCH_H
#define U13_BRUCH_H

class Bruch {
private:
    int n;
    int z;
    void kuerzen();
    int ggt();
public:
    Bruch(int n, int z);
    int Zaehler() const;
    int Nenner() const;
    double reell();
    Bruch operator+(const Bruch& other) const;
    Bruch operator-(const Bruch& other) const;
    Bruch operator*(const Bruch& other) const;
    Bruch operator/(const Bruch& other) const;
    Bruch zahlenreihe(int num);
};

#endif //U13_BRUCH_H
