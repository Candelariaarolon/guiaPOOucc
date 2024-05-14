#include <iostream>
using namespace std;
#include "Pass.h"
#include <string>
#include <cstdlib> 
#include <ctime>  

int main() {
    int longitud;
    char continuar;
    do {
        cout << "Ingrese la longitud de la contraseña que desea generar: ";
        cin >> longitud;

        Password pass1;
        pass1.cargarlong(longitud);
        pass1.generarpassword();

        pass1.vercontrasena();
        cout << "Es fuerte: " << (pass1.esFuerte() ? "Si" : "No") << endl;

        cout << "¿Desea generar otra contraseña? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return 0;
}