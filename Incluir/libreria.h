//
// Created by Mia Trujillo on 29/11/2023.
//

#ifndef POLIZAS_H
#define POLIZAS_H
#include <iostream>
#include <string>

class Poliza{
public:
    // Constructor Implicito
    Poliza(){};
    // Constructor Explicito
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

protected:
    std::string Nombre;
    std::string CURP;
    std::string DayBirth;
    int YearBirth;
    int Edad;
    int Deducible;
    int MontoMax;
};

class PolizaCasa : Poliza{
public:
    // Constructor Implicito
    PolizaCasa(){
        std::cout << "¡Hoy lo apoyaremos en la creación de su poliza! Por favor escriba los datos que se le pidan: " << std::endl << "Nombre Completo: ";
        std::cin >> this -> Nombre;
        std::cout << "CURP: ";
        std::cin >> this -> CURP;
        std::cout << "Día y Fecha de Nacimiento (Ej. 10 de Noviembre): ";
        std::cin >> this -> DayBirth;
        std::cout << "Año de Nacimiento: ";
        std::cin >> this -> YearBirth;
        std::cout << "Tamaño de la Casa: ";
        std::cin >> this->HouseLength;
        std::cout << "Año de Construcción: ";
        std::cin >> this->ConstructionYear;
        std::cout << "Dirección: ";
        std::cin >> this->Direccion;
        std::cout << "------ POLIZA DE CASA ------" << std::endl << "| Datos Generales |" << std::endl << "Nombre Completo: " << Nombre << std::endl << "CURP: " << CURP << std::endl << "Día de Nacimiento: " << DayBirth << std::endl << "Edad: " << YearBirth << "El Monto Máximo que se le va a otorgar es de: " << MontoMax << std::endl << "Su Deducible Final será de: " << Deducible;
        std::cout << "| Datos de la Casa |" << std::endl << "Tamaño de la Casa: " << HouseLength << std::endl << "Año de Construcción de la Casa: " << ConstructionYear << std::endl << "Dirección de la Casa: " << Direccion;
        std::cout << "----------------------------" << std::endl << "¡Su Poliza de Casa se ha creado exitosamente!";
    };

    //Setters
    void setHouseLength(int houselength){
        this->HouseLength = houselength;
    }
    void setConstructionYear(int constructionyear){
        this->ConstructionYear = constructionyear;
    }
    void setDireccion(std::string direccion){
        this->Direccion = direccion;
    }

    //Getters
    int getHouseLength(){
        return this->HouseLength;
    }
    int getConstructionYear(){
        return this->ConstructionYear;
    }
    std::string getDireccion(){
        return this->Direccion;
    }

private:
    int HouseLength;
    int ConstructionYear;
    std::string Direccion;
};

class PolizaVida : Poliza{
public:
    // Constructor Implicito
    PolizaVida(){
        std::cout << "¡Hoy lo apoyaremos en la creación de su poliza! Por favor escriba los datos que se le pidan: " << std::endl << "Nombre Completo: ";
        std::cin >> this -> Nombre;
        std::cout << "CURP: ";
        std::cin >> this -> CURP;
        std::cout << "Día y Fecha de Nacimiento (Ej. 10 de Noviembre): ";
        std::cin >> this -> DayBirth;
        std::cout << "Año de Nacimiento: ";
        std::cin >> this -> YearBirth;
        std::cout << "¿Se encuentra enfermo?: ";
        std::cin >> this->Enfermo;
        std::cout << "Tipo de sangre: ";
        std::cin >> this->BloodType;
        std::cout << "------ POLIZA DE VIDA ------" << std::endl << "| Datos Generales |" << std::endl << "Nombre Completo: " << Nombre << std::endl << "CURP: " << CURP << std::endl << "Día de Nacimiento: " << DayBirth << std::endl << "Edad: " << YearBirth << "El Monto Máximo que se le va a otorgar es de: " << MontoMax << std::endl << "Su Deducible Final será de: " << Deducible;
        std::cout << "| Datos del Paciente |" << std::endl << "¿Esta enfermo?: " << Enfermo << std::endl << "Tipo de Sangre del Paciente: " << BloodType;
        std::cout << "----------------------------" << std::endl << "¡Su Poliza de Vida se ha creado exitosamente!";
    };

    //Setters
    void setEnfermo(bool enfermo){
        this->Enfermo = enfermo;
    }
    void setBloodType(std::string bloodtype){
        this->BloodType = bloodtype;
    }

    //Getters
    bool getEnfermo(){
        return this->Enfermo;
    }
    std::string getBloodType(){
        return this->BloodType;
    }

private:
    bool Enfermo;
    std::string BloodType;
};

class PolizaCarro : Poliza{
public:
    // Constructor Implicito
    PolizaCarro(){
        std::cout << "¡Hoy lo apoyaremos en la creación de su poliza! Por favor escriba los datos que se le pidan: " << std::endl << "Nombre Completo: ";
        std::cin >> this -> Nombre;
        std::cout << "CURP: ";
        std::cin >> this -> CURP;
        std::cout << "Día y Fecha de Nacimiento (Ej. 10 de Noviembre): ";
        std::cin >> this -> DayBirth;
        std::cout << "Año de Nacimiento: ";
        std::cin >> this -> YearBirth;
        std::cout << "Año del Carro: ";
        std::cin >> this->YearCar;
        std::cout << "Kilometraje Actual: ";
        std::cin >> this->Kilometraje;
        std::cout << "Modelo: ";
        std::cin >> this->Modelo;
        std::cout << "Marca: ";
        std::cin >> this->Marca;
        std::cout << "Placa: ";
        std::cin >> this->Placa;
        std::cout << "Número de Serie: ";
        std::cin >> this->SeriesNumber;
        std::cout << "Color: ";
        std::cin >> this->Color;
        std::cout << "------ POLIZA DE CARRO ------" << std::endl << "| Datos Generales |" << std::endl << "Nombre Completo: " << Nombre << std::endl << "CURP: " << CURP << std::endl << "Día de Nacimiento: " << DayBirth << std::endl << "Edad: " << YearBirth << "El Monto Máximo que se le va a otorgar es de: " << MontoMax << std::endl << "Su Deducible Final será de: " << Deducible;
        std::cout << "| Datos del Vehiculo |" << std::endl << "Año de Salida del Carro: " << YearCar << std::endl << "Kilometraje Actual del Carro: " << Kilometraje << std::endl << "Modelo del Carro:  " << Modelo << std::endl << "Marca del Carro: " << Marca << std::endl << "Placa del Vehiculo: " << Placa << std::endl << "Número de Serie del Vehiculo: " << SeriesNumber << std::endl << "Color del Carro: " << Color;
        std::cout << "----------------------------" << std::endl << "¡Su Poliza de Carro se ha creado exitosamente!";
    };

    //Setters
    void setYearCar(int yearcar){
        this->YearCar = yearcar;
    }
    void setKilometraje(int kilometraje){
        this->Kilometraje = kilometraje;
    }
    void setModelo(std::string modelo){
        this->Modelo = modelo;
    }
    void setMarca(std::string marca){
        this->Marca = marca;
    }
    void setPlaca(std::string placa){
        this->Placa = placa;
    }
    void setSeriesNumber(int seriesnumber){
        this->SeriesNumber = seriesnumber;
    }
    void setColor(std::string color){
        this->Color = color;
    }

    //Getters
    int getYearCar(){
        return this->YearCar;
    }
    int getKilometraje(){
        return this->Kilometraje;
    }
    std::string getModelo(){
        return this->Modelo;
    }
    std::string getMarca(){
        return this->Marca;
    }
    std::string getPlaca(){
        return this->Placa;
    }
    int getSeriesNumber(){
        return this->SeriesNumber;
    }
    std::string getColor(){
        return this->Color;
    }

private:
    int YearCar;
    int Kilometraje;
    int SeriesNumber;
    std::string Modelo;
    std::string Marca;
    std::string Placa;
    std::string Color;
};

#endif