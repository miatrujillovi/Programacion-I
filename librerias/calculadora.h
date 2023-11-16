#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <iostream>

int PedirDatos(int Dato1, int Dato2) {
    std::cout << "Escriba los números: " << std::endl;
    std::cin >> Dato1;
    std::cin >> Dato2;
    Seleccion(int Operacion);
}

int Seleccion(int Operacion) {
    std::cout << "Seleccione la operación que desea realizar: " << std::endl;
    std::cout << "1.- Suma";
    std::cout << "2.- Resta";
    std::cout << "3.- Multiplicación";
    std::cout << "4.- División";
    std::cout << "5.- Potencia";
    std::cout << "6.- Raiz";
    std::cin >> Operacion;

    switch (Operacion) {
        case 1:
            suma();
            break;
        case 2:
            resta();
            break;
        case 3:
            multi();
            break;
        case 4:
            divi();
            break;
        case 5:
            potencia();
            break;
        case 6:
            raiz();
            break;
        default:
            std::cout << "Seleccione una de las opciones dadas." << std:endl;
    }
}
