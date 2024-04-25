//
// Created by zoisk on 25.04.24.
//

#ifndef $VERYLONG_H
#define $VERYLONG_H

#include <iostream>

class VeryLong{
public:
    VeryLong(int arr[], int len);
    void normalisiere();
    void drucke();
    int getLength() const;
    VeryLong operator+(VeryLong other);
private:
    int length;
    int longarr[];
};

#endif //$VERYLONG_H
