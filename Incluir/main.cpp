//
// Created by Mia Trujillo on 29/11/2023.
//
#include <iostream>
#include <variant>
#include "libreria.h"

std::variant<PolizaCasa, PolizaVida, PolizaCarro> Menu(){
    int Servicios;
    std::cout << "Escriba el número de la poliza que desea: ";
    std::cout << "1.- Poliza de Casa";
    std::cout << "2.- Poliza de Vida";
    std::cout << "3.- Poliza de Carro";
    std::cin >> Servicios;

    switch (Servicios) {
        case 1:{
            PolizaCasa Casa;
            return Casa;
        }
            break;
        case 2:{
            PolizaVida Vida;
            return Vida;
        }
            break;
        case 3:{
            PolizaCarro Carro;
            return Carro;
        }
            break;
        default:
            exit (0);
            break;
    }
}

int main(){

    Menu();

    return 0;
}