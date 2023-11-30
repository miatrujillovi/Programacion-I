//
// Created by Mia on 29/11/2023.
//
#include <iostream>
#include "libreria.h"

int Menu(){
    int Servicios;

    std::cout << "¡Ha creado exitosamente su poliza! Aquí estan los datos que se han registrado: ";
    // Mostrar los Inputs del Usuario + Edad Calculada + Deducible + Monto Máximo del Seguro
    std::cout << "Si desea crear otra poliza, escriba el número enumerado que desea: ";
    std::cout << "1.- Poliza de Casa";
    std::cout << "2.- Poliza de Vida";
    std::cout << "3.- Poliza de Coche";
    std::cin >> Servicios;

    switch (Servicios) {
        case 1:
            // Función para pedir Datos de Casa
            break;
        case 2:
            // Función para Pedir Datos de Vida
            break;
        case 3:
            // Función para Pedir Datos de Coche
            break;
        default:
            return 0;
            break;
    }
}

int main(){

    return 0;
}