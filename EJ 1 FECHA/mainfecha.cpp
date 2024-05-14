
#include <iostream>
using namespace std;
#include "fecha.h"


int main (){
    int dia, mes, anio; 
    cout<<"ingrese dia "<<endl; 
    cin>>dia; 
    cout<<"ingrese mes "<<endl; 
    cin>>mes; 
    cout<<"ingrese anio "<<endl;
    cin>>anio; 


    Fecha f1(dia, mes, anio);
    cout<<"fecha actual "<<endl; 
    f1.fechafinal();

    ++f1; 
    cout << "Fecha con incremento de 1 día: ";
    f1.fechafinal();

    f1 = f1 + 10; 
    cout << "Fecha incrementada en 10 (n) días: ";
    f1.fechafinal();

    return 0;
    
}
