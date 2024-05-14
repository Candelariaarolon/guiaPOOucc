/*. Realizar una clase que permita representar una fecha.
 Definir los datos miembros de la clase.
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir un constructor que inicializa la fecha a una fecha dada.
 Definir un constructor que inicializa la fecha en 01/01/1900.
 Definir sobrecargas de los siguientes operadores:
o ++ y – incrementa o decrementa la fecha en 1 día.
o + y – suma a una fecha un cierto número de días.
 Realizar un programa principal que haga uso de la clase.*/

#include <iostream>
using namespace std;


class Fecha{

    private:
    int dia;
    int mes;
    int anio;

    public:
    Fecha();
    Fecha(int, int, int);
    Fecha(int, int, int);
    void setdia(int);
    void setmes(int);
    void setanio(int);
    int getdia();
    int getmes();
    int getanio();

    Fecha operator+(int cantdias); 
    Fecha operator-(int cantdias); 
    void operator++(); // Operador de incremento
    void operator--(); // Operador de decremento 

    void incrementar();
    void decrementar();


    void Fecha::operator++() {
    incrementar(); // Llama a la función de incremento de la fecha
}

    void Fecha::operator--() {
    decrementar(); // Llama a la función de decremento de la fecha
}
};

    //sobrecarga operadores

Fecha::Fecha(){

}

Fecha::Fecha(int _dia, int _mes, int _anio){
  dia=_dia;
  mes=_mes;
  anio=_anio;
}
    
Fecha::Fecha(int, int, int){
  dia=1;
  mes=1;
  anio=1990;
}

int Fecha::getdia() { 
  return dia; }

int Fecha::getmes() { 
  return mes; }

int Fecha::getanio() { 
  return anio; }


void Fecha::incrementar() {
  dia++;
  if (dia > 31) {
    dia = 1;
    mes++;
      if (mes > 12) {
        mes = 1;
        anio++;
        }
    }
}



void Fecha::decrementar() {
 dia--;
  if (dia < 1) {
    dia = 31;
    mes--;
        if (mes < 1) {
          mes = 12;
          anio--;
        }
    }
}

// El puntero this apunta al objeto actual, por lo que no necesitas declararlo explícitamente ni pasarlo como parámetro.


Fecha Fecha::operator+(int dias) {
    Fecha fechaPuntero(*this); // PUNTERO PARA COPIAR FECHA ACTUAL
    int totalDias = fechaPuntero.dia + dias; // le sumo los dias que quiera el usuario
    int maxDias = 31;

    while (totalDias > maxDias) {
        totalDias -= maxDias; // si se pasaba de 2 dias, ahora sera el dia 2 del prox mes 
          fechaPuntero.mes++; 
        if (fechaPuntero.mes > 12) {
            fechaPuntero.mes = 1; 
            fechaPuntero.anio++;
        }
        maxDias = 31; //RE INICAR PORQUE LO CAMBIE ARRIBA
    }

    fechaPuntero.dia = totalDias; // Establece el día en el total de días calculado
    return fechaPuntero;
}

Fecha Fecha::operator-(int dias) {
    Fecha fechaPuntero(*this); 
    int totalDias = fechaPuntero.dia - dias; 

    while (totalDias < 1) {
        fechaPuntero.mes--; 
        if (fechaPuntero.mes < 1) {
            fechaPuntero.mes = 12; 
            fechaPuntero.anio--; 
        }

        // DIAS PARA CADA MES 
        switch (fechaPuntero.mes) {
            case 1: case 2: case 3: case 5: case 7: case 8: case 10: case 12:
                totalDias += 31;
                break;
            case 4: case 6: case 9: case 11:
                totalDias += 30;
                break;
        }
    }

    fechaPuntero.dia = totalDias; 
    return fechaPuntero;
}



int main() {
    
    Fecha fecha1(14, 5, 2024);
    Fecha fecha2(1, 1, 1900); 

    // Mostrar la fecha actual
    cout << "Fecha actual: " << fecha1.getdia() << "/" << fecha1.getmes() << "/" << fecha1.getanio() << endl;

  
   
    fecha1 = fecha1 + 5;
    cout << "Fecha actual + 5 días: " << fecha1.getdia() << "/" << fecha1.getmes() << "/" << fecha1.getanio() << endl;

    
    fecha1 = fecha1 - 3;
    cout << "Fecha actual - 3 días: " << fecha1.getdia() << "/" << fecha1.getmes() << "/" << fecha1.getanio() << endl;

    return 0;
}
