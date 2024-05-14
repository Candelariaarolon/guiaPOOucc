/*6. Crear una clase llamada Password que siga las siguientes condiciones:
 Los atributos son longitud y contraseña. Por defecto, la longitud será de 8
caracteres
Generar los siguientes constructores:
 Un constructor por defecto.
 Un constructor con la longitud pasada como parámetro.
Generar los siguientes métodos:
 generarPassword(): genera la contraseña del objeto con la longitud que
corresponda.
 esFuerte(): devuelve si es fuerte o no. Para que sea fuerte debe tener más de
2 mayúsculas, más de 1 minúscula y más de 5 números.
 Método para visualización de la contraseña y la longitud.
 Método para cargar la longitud.
Realizar un programa principal que haga uso de la clase*/


#include <iostream>
#include "Pass.h"
#include <string>
#include <cstdlib> 
#include <ctime>   
using namespace std;


Password::Password(){
    longitud=8;
}

Password::Password(int _long, string _contra){
    longitud= _long;
    contrasena= _contra;
}


void Password::setcontrasena(string _contra){
    contrasena= _contra;
}

void Password::setlongitud(int _long){
    longitud= _long;
}

string Password::getcontrasena(){
    return contrasena;
}

int Password::getlongitud(){
    return longitud;
}



void Password::cargarlong(int n) {

    setlongitud(n);
}



void Password::generarpassword() {

    srand(time(0));
    string pass = "";
    for (int i = 0; i < longitud; ++i) {

        int randomCharType = rand() % 3;
        char randomChar;
        switch (randomCharType) {
            case 0: 
                randomChar = rand() % 10 + '0';
                break;
            case 1: 
                randomChar = rand() % 26 + 'A';
                break;
            case 2: 
                randomChar = rand() % 26 + 'a';
                break;
        }
        pass += randomChar;
    }
    contrasena = pass;
}

bool Password::esFuerte() {
    int cantMayus = 0, cantMinus = 0, cantnumero= 0;
    for (char c : contrasena) {
        if (isupper(c))
            cantMayus++;
        else if (islower(c))
            cantMinus++;
        else if (isdigit(c))
            cantnumero++;
    }
    return (cantMayus > 2 && cantMinus > 1 && cantnumero > 5);
}

void Password::vercontrasena() {
    cout << "Contraseña: " << contrasena << endl;
}

