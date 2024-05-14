#include "cuenta.h"
#include <iostream>

using namespace std;

int main(){

  int numcuenta1, numcuenta2;

  float tasa1, tasa2, montoplata, montoextraer;


  cout<<"ingrese los datos de las cuentas: "<<endl;
  cout<<"ingrese num de cuenta para la primera";
  cin>>numcuenta1;
  cout<<"ingrese tasa de interes";
  cin>>tasa1;

  cout<<"ingrese num de cuenta para la segunda";
  cin>>numcuenta2;
  cout<<"ingrese tasa de interes";
  cin>>tasa2;

  Cuenta Cuenta1(numcuenta1, tasa1);
  cout<<"Numero de cuenta 1 "<<Cuenta1.getnumCuenta();
  cout<<"Tasa de Interes de cuenta 1 "<<Cuenta1.gettasaInteres();
  cout<<"Saldo de la cuenta 1 "<<Cuenta1.getsaldo();

   Cuenta Cuenta2(numcuenta2, tasa2);
  cout<<"Numero de cuenta 2 "<<Cuenta2.getnumCuenta();
  cout<<"Tasa de Interes de cuenta 2 "<<Cuenta2.gettasaInteres();
  cout<<"Saldo de la cuenta 2"<<Cuenta2.getsaldo();

  cout<<"eleija la cuenta en la que quiere realizar operaciones (1 o 2)"<<endl;
  int opcion;
  cin>>opcion;

  if (opcion==1){
    int eleccion;
    eleccion=0;

    cout<<"Para depositar en cuenta 1, ingrese el monto: ";
    cin>>montoplata;
    Cuenta1.deposito(montoplata);

    do{

    cout<<"Ingrese el monto que quiere extraer de la cuenta: ";
    cin>>montoextraer;

    if (Cuenta1.extraccion(montoextraer)){
      cout<<"El saldo actualizado es: "<<Cuenta1.getsaldo();

    }
    else
    {
      cout<<"Saldo insuficiente. se canceló la extraccion. ";
      cout<<"El saldo sigue siendo: "<<Cuenta1.getsaldo();

    }
    Cuenta1.acredInteres();
    cout<<"Saldo cuenta 1 "<<Cuenta1.getsaldo();

    cout<<"Ingrese 1 para continuar 0 para terminar";
    cin>>eleccion;
  } while (eleccion!=0);

  }

  else if (opcion==2){
    int eleccion;
    eleccion=0;

    cout<<"Para depositar en cuenta 2, ingrese el monto: ";
    cin>>montoplata;
    Cuenta2.deposito(montoplata);

    do{

    cout<<"Ingrese el monto que quiere extraer de la cuenta: ";
    cin>>montoextraer;

    if (Cuenta2.extraccion(montoextraer)){
      cout<<"El saldo actualizado es: "<<Cuenta2.getsaldo();

    }
    else
    {
      cout<<"Saldo insuficiente. se canceló la extraccion. ";
      cout<<"El saldo sigue siendo: "<<Cuenta2.getsaldo();

    }
    Cuenta2.acredInteres();
    cout<<"Saldo cuenta 1 "<<Cuenta2.getsaldo();

    cout<<"Ingrese 1 para continuar 0 para terminar";
    cin>>eleccion;
  } while (eleccion!=0);


  }






}