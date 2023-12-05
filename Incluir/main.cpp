//
// Created by Mia Trujillo on 29/11/2023.
//
#include <iostream>
#include "libreria.h"

int Menu(){
    int Servicios;
    std::cout << "Si desea crear otra poliza, escriba el número enumerado que desea: ";
    std::cout << "1.- Poliza de Casa";
    std::cout << "2.- Poliza de Vida";
    std::cout << "3.- Poliza de Carro";
    std::cin >> Servicios;

    switch (Servicios) {
        case 1:
            PolizaCasa.setData();
            break;
        case 2:
            PolizaVida.setData();
            break;
        case 3:
            PolizaCarro.setData();
            break;
        default:
            return 0;
            break;
    }
}

int main(){

    Poliza.setData();
    Menu();

    return 0;
}