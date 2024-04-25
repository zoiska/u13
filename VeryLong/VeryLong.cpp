//
// Created by zoisk on 25.04.24.
//

#include "VeryLong.h"

VeryLong::VeryLong(int arr[], int len) {
    if(arr[1] < 0){
        std::cout << "Ungültige eingabe!";
    }
    else{
        this->length = len;
        for(int i = 0; i < length; i++) {
            longarr[i] = arr[i];
        }
    }
}

void VeryLong::normalisiere() {
    int zeros = 0;
    int i = 0;
    while(longarr[i] == 0) {
        zeros++;
        i++;
    }
    this->length -= zeros;
    if(longarr[i] != 0) {
        for(int j = 0; j < length; j++) {
            longarr[j] = longarr[j + zeros];
        }
    }
}

void VeryLong::drucke() {
    for(int j = 0; j <= this->length - 1; j++) {
        std::cout << this->longarr[j];
    }
    std::cout << "\n";
}


int VeryLong::getLength() const {
    return this->length;
}

VeryLong VeryLong::operator+(VeryLong other) {}