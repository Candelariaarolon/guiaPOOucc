#include <iostream>
#include <string.h>
using namespace std;


class persona{
    private:
    string nombre;
    int edad;
    char sexo;
    double peso;
    double altura;


    public:
    
    persona();
    persona(string, int, char);
    persona(string, int, int, char, double, double); //relacion
    //dos constructores, uno con nombre y cant en 0
    string getnombre();
    int DNI;
    int getedad();
    int getDNI();
    char getsexo();
    double getpeso();
    double getaltura();
    void setnombre(string);
    void setedad(int);
    void setsexo(char);
    void setpeso(double);
    void setaltura(double);

    int calcularIMC();
    bool esMayorEdad();
    void comprobarSexo(char);
    void generaDNI();

};


persona::persona(string _nombre, int _edad, int _DNI , char _sexo, double _peso, double _altura){

nombre= _nombre;
edad= _edad;
DNI= _DNI;
sexo= _sexo;
peso= _peso;
altura= _altura;

}

persona::persona(string _nombre, int _edad, char _sexo){

nombre= _nombre;
edad= _edad;
DNI= 0;
sexo= _sexo;
peso= 0;
altura= 0;

}

persona::persona(){

}

void persona::setnombre(string _nombre){
    nombre=_nombre;
}

void persona::setedad(int _edad){
    edad= _edad;
}

void persona::setsexo(char _sexo){
    sexo= _sexo;
}

void persona::setpeso(double _peso){
    peso=_peso;
}

void persona::setaltura(double _altura){
    altura=_altura;
}

string persona::getnombre(){
    return nombre;
}

int persona::getedad(){
    return edad;
}

char persona::getsexo(){
    return sexo;
}

double persona::getaltura(){
    return altura;
}

double persona::getpeso(){
    return peso;
}