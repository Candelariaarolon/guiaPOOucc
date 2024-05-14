#include <iostream>
#include "Cuenta.h"
using namespace std;

Cuenta::Cuenta(int num, float inter){
  numCuenta=num;
  saldo=0;
  tasaInteres=inter;

}

void Cuenta::setnumCuenta(int num){
    numCuenta= num;
}

void Cuenta::setsaldo(double sal){
    saldo= sal;
}

void Cuenta::settasaInteres(double inter){
    tasaInteres=inter;
}

int Cuenta::getnumCuenta(){
  return numCuenta;
}
float Cuenta::getsaldo(){
  return saldo;
}

float Cuenta::gettasaInteres(){
  return tasaInteres;
}

void Cuenta::deposito(float monto){
  saldo+=monto;
}

int Cuenta::extraccion(float monto){
  if (saldo>=monto) {
    saldo-=monto;
    return 1;
  }
  return 0;
}

void Cuenta::acredInteres(){
  saldo+=saldo*tasaInteres/100;

}

