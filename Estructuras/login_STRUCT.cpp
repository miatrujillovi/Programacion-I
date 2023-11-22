#include <iostream>
#include <string>

// Definición de Estructura Correcta - Se pueden definir fuera de int main
	struct Usuarios{
	    std::string Usuario, Password;
	};

int main() {
    
    std::string Usuario, Password;

// Declaración de Estructura (Darles valor)
	Usuarios Admin;
	Admin.Usuario = "Root";
	Admin.Password = "1234";
        
// Pide el Usuario
  do{
        std::cout << "Introduzca al Usuario: " << std::endl;
        std::cin >> Usuario;
        
        if(Usuario != Admin.Usuario){
            std::cout << "Usuario no Reconocido." << std::endl;
        }
        
  }while(Usuario != Admin.Usuario);


// Pide la Contraseña
  do{
        std::cout << "Introduzca la Contraseña: " << std::endl;
        std::cin >> Password;
        
        if(Password != Admin.Password){
            std::cout << "Contraseña Incorrecta." << std::endl;
        }
            
  }while(Password != Admin.Password);


  return 0;
}
