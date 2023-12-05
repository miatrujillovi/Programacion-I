//
// Created by Mia Trujillo on 29/11/2023.
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

    void setData(){
        std::cout << "Ha seleccionado crear su Poliza de Casa, sin embargo, necesitaremos algunos datos más..." << std::endl;
        std::cout << "Escriba el tamaño de su hogar: ";
        std::cin >> this->HouseLength;
        std::cout << "Escriba el año de construcción de su hogar: ";
        std::cin >> this->ConstructionYear;
        std::cout << "Y por último, escriba su dirección: ";
        std::cin >> this->Direccion;
        getData();
    }

    void getData(){
        std::cout << "¡Se ha creado exitosamente su poliza de casa! Aquí estan los datos que ingreso: ";
        std::cout << "El tamaño de la casa es de: " << HouseLength << std::endl << "El año de contrucción del hogar es de: " << ConstructionYear << std::endl << Direccion;
    }

private:
    int HouseLength;
    int ConstructionYear;
    std::string Direccion;
};

class PolizaVida : public Poliza{
public:
    PolizaVida(){};
    PolizaVida(bool enfermo, std::string bloodtype, std::string nombre, std::string curp, std::string daybirth, int yearbirth, int edad, int deducible, int montomax):Poliza(std::string nombre, std::string curp, std::string daybirth, int yearbirth, int edad, int deducible, int montomax){
        this->Enfermo = enfermo;
        this->BloodType = bloodtype;
    }

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

    void setData(){
        std::cout << "Ha seleccionado crear su Poliza de Vida, sin embargo, necesitaremos algunos datos más..." << std::endl;
        std::cout << "¿Se encuentra enfermo?: ";
        std::cin >> this->Enfermo;
        std::cout << "Escriba su tipo de sangre: ";
        std::cin >> this->BloodType;
        getData();
    }

    void getData(){
        std::cout << "¡Se ha creado exitosamente su poliza de vida! Aquí estan los datos que ingreso: ";
        std::cout << "¿Se encuentra enfermo?" << Enfermo << std::endl << "Tipo de Sangre: " << BloodType << std::endl;
    }

private:
    bool Enfermo;
    std::string BloodType;
};

class PolizaCarro : public Poliza{
    PolizaCarro(){};
    PolizaCarro(int yearcar, int kilometraje, std::string modelo, std::string marca, std::string placa, int seriesnumber, std::string color, std::string nombre, std::string curp, std::string daybirth, int yearbirth, int edad, int deducible, int montomax):Poliza(std::string nombre, std::string curp, std::string daybirth, int yearbirth, int edad, int deducible, int montomax){
        this->YearCar = yearcar;
        this->Kilometraje = kilometraje;
        this->Modelo = modelo;
        this->Marca = marca;
        this->Placa = placa;
        this->SeriesNumber = seriesnumber;
        this->Color = color;
    }

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

    void setData(){
        std::cout << "Ha seleccionado crear su Poliza de Carro, sin embargo, necesitaremos algunos datos más..." << std::endl;
        std::cout << "Escriba el año del carro: ";
        std::cin >> this->YearCar;
        std::cout << "Escriba el kilometraje actual del carro: ";
        std::cin >> this->Kilometraje;
        std::cout << "Escriba el modelo del carro: ";
        std::cin >> this->Modelo;
        std::cout << "Escriba la marca del carro: ";
        std::cin >> this->Marca;
        std::cout << "Escriba la placa del carro: ";
        std::cin >> this->Placa;
        std::cout << "Escriba el número de serie: ";
        std::cin >> this->SeriesNumber;
        std::cout << "Escriba el color del carro: ";
        std::cin >> this->Color;
        getData();
    }

    void getData(){
        std::cout << "¡Se ha creado exitosamente su poliza de carro! Aquí estan los datos que ingreso: ";
        std::cout << "El año de su carro es: " << YearCar << std::endl << "Su kilometraje es de: " << Kilometraje << std::endl << Modelo << std::endl << Marca << std::endl << "Su placa es: " << Placa << std::endl << "Número de serie: " << SeriesNumber << std::endl << Color;
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