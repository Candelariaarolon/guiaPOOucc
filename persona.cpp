
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include "persona.h"
using namespace std;


int persona::calcularIMC() {
    double imc = peso / (altura * altura);
    if (imc < 20) {
        return -1;
    } else if (imc >= 20 && imc <= 25) {
        return 0;
    } else {
        return 1;
    }
}

bool persona::esMayorEdad(){
    return edad >= 18;
}

void persona::comprobarSexo(char _sexo) {
    if (_sexo == 'F' || _sexo == 'f') {
        sexo = 'F';
    } else if (_sexo == 'M' || _sexo == 'm') {
        sexo = 'M';
    } else {
        sexo = 'H'; // Por defecto, se asume masculino si no se proporciona un sexo válido.
    }
}

void persona::generaDNI() {
    // Generar número aleatorio de 8 cifras
    srand(time(0)); 
    DNI = rand() % 100000000; // Genera un número entre 0 y 99999999
    // Calcular letra correspondiente al DNI
    char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    int indice = DNI % 23;
    char letraDNI = letras[indice];
    DNI = DNI * 10 + (letraDNI - 'A'); // Agregar la letra al final del DNI
}

