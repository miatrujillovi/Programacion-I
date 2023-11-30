//
// Created by Mia on 29/11/2023.
//

#ifndef POLIZAS_H
#define POLIZAS_H
#include <iostream>
#include <string>

class Poliza{
public:
    Poliza(){};
    Poliza(std::string nombre, std::string curp, std::string daybirth, int yearbirth, int edad, int deducible, int montomax){
        this->Nombre = nombre;
        this->CURP = curp;
        this->DayBirth = daybirth;
        this->YearBirth = yearbirth;
        this->Edad = 2023 - yearbirth;
        this->Deducible = 1000000;
        this->MontoMax = 1000000 * 0.05;
    }

    //Setters
    void setNombre(std::string nombre){
        this->Nombre = nombre;
    }
    void setCURP(std::string curp){
        this->CURP = curp;
    }
    void setDayBirth(std::string daybirth){
        this->DayBirth = daybirth;
    }
    void setYearBirth(int yearbirth){
        this->YearBirth = yearbirth;
    }

    //Getters
    std::string getNombre(){
        return this->Nombre;
    }
    std::string getCURP(){
        return this->CURP;
    }
    std::string getDayBirth(){
        return this->DayBirth;
    }
    int getYearBirth(){
        return this->YearBirth;
    }

    void setData(){
        std::cout << "¡Hoy lo apoyaremos en la creación de su poliza! Escriba su nombre completo: ";
        std::cin >> this -> Nombre;
        std::cout << "Ahora, necesitaremos su CURP: ";
        std::cin >> this -> CURP;
        std::cout << "También introduzca su día y mes de nacimiento (Ej. 10 de Noviembre): ";
        std::cin >> this -> DayBirth;
        std::cout << "Y por último, su año de nacimiento: ";
        std::cin >> this -> YearBirth;
        getData();

    }
    void getData(){
        std::cout << "!Ha registrado sus datos correctamente! Aquí esta su perfil: ";
        std::cout << Nombre << std::endl << CURP << std::endl << DayBirth << std::endl << Edad << std::endl << MontoMax << std::endl << Deducible;
    }

private:
    std::string Nombre;
    std::string CURP;
    std::string DayBirth;
    int YearBirth;
    int Edad;
    int Deducible;
    int MontoMax;
};

class PolizaCasa : public Poliza{
public:
    PolizaCasa(){};
    PolizaCasa(int houselength, int constructionyear, std::string direccion, std::string nombre, std::string curp, std::string daybirth, int yearbirth, int edad, int deducible, int montomax) : Poliza(std::string nombre, std::string curp, std::string daybirth, int yearbirth, int edad, int deducible, int montomax){
        this->HouseLength = houselength;
        this->ConstructionYear = constructionyear;
        this->Direccion = direccion;
    }
private:
    int HouseLength;
    int ConstructionYear;
    std::string Direccion;
};
#endif