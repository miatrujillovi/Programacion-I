//
// Created by Mia on 23/11/2023.
//
#include <iostream>

void ModificarValor(int* SoyUnaVariable) {
    *SoyUnaVariable = 6;
}

int main () {
    int WIII = 9;
    ModificarValor(&WIII);
    std::cout << WIII;

    return 0;
}