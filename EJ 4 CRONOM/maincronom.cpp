#include <iostream>
#include "cronom.h"

using namespace std;

int main() {
    
    Cronom cronometro(0,0,0); 
    int opcion;
    do {
        ++cronometro;
        cout << "Cronometro: " << cronometro.getHoras() << " horas, "
             << cronometro.getMin() << " minutos, " << cronometro.getSeg() << " segundos" << endl;

     
        cout << "Presione 0 para detener el cronometro, cualquier otra tecla para continuar: ";
        cin >> opcion;
    } while (opcion !=0);

    cout << "Detuviste el cronometro." << endl;
}
