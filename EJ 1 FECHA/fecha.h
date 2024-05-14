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
    void setDia(int); 
    void setMes(int); 
    void setAnio(int);

    
    int getDia(); 
    int getMes(); 
    int getAnio(); 
    void fechafinal();  
    Fecha operator++();          
    Fecha operator--();          
    Fecha operator+(int dias);   
    Fecha operator-(int dias);  
};
