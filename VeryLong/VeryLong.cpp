//
// Created by zoisk on 25.04.24.
//

#include "VeryLong.h"

VeryLong::VeryLong(int arr[], int len) {
    if(arr[1] < 0){
        std::cout << "Ungültige eingabe!";
    }
    else{
        //this->longarr = arr;
        this->length = len;
    }
}
