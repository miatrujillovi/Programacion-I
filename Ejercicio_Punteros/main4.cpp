//
// Created by Mia on 23/11/2023.
//
#include <iostream>

int main() {
    const char* OhMaiGad = "Hej Varld";
    // Apunta a la 1er Direccion de Memoria
    std::cout << OhMaiGad;

    // El for hace que vaya por cada uno de los caracteres de la Direccion de Memoria
    for (int i = 0; i < 9; i++) {
        std::cout << *OhMaiGad;
        OhMaiGad++;
    }

    return 0;
}