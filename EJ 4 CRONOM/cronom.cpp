#include <iostream>
using namespace std;
#include "cronom.h"

Cronom::Cronom(int s, int m, int h) {
    seg=0;
    min=0;
    horas=0;
}

void Cronom::setSeg(int s){
  seg=s;
}
void Cronom::setMin(int m){
  min=m;
}
void Cronom::setHoras(int h){
  horas=h;
}
int Cronom::getSeg() {return seg;}
int Cronom::getMin() {return min;}
int Cronom::getHoras() {return horas;}


void Cronom::Reset() {
   seg=0; 
   min=0; 
   horas=0;
   };


Cronom Cronom::operator++() {
    ++seg;  

    if (seg >= 60) {
        seg = 0; 
        ++min;   

        if (min >= 60) {
            min = 0;    
            ++horas;   

            if (horas < 0) {
                horas = 0;  
            }
        }
    }

    return *this;  // Devolver el objeto modificado. 
    //Cuando haces una llamada a un método de instancia,el compilador automáticamente añade this. 
    // ++cronometro se convierte en Cronom::operator++(&cronometro), donde this es &cronometro.
}