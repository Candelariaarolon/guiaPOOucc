#include <iostream>
#include "matriz.h"

using namespace std;

int main(){

//CREO TRES MATRICES USANDO EL CONSTRUCTOR MATRIZ( INT INT)
  matriz a(2,2),b(2,2),c(2,2);


  // LE ASIGNO LOS VALORES A CADA UNA, LOUEGO COUT
  for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
      a(i,j)=i*j;
    }
  }

 for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
      b(i,j)=i*j*2;
    }
  }

  cout<<"MATRIZ A";
  for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
      cout<<" "<<a(i,j);
    }

  }

  cout<<" MATRIZ B";
  for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
      cout<<" "<<b(i,j);
    }
  }

  b=a;
  cout<<"MATRIZ B=A";
  for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
      cout<<" "<<b(i,j);
    }
    cout<<"\n";
  }
  
  c=a+b;
  cout<<"MATRIZ C= A+B ";
  for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
      cout<<" "<<c(i,j);
    }
    cout<<"\n";
  }
}