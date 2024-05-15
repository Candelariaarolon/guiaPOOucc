#include "matriz.h"

matriz::matriz(int f,int c){
  nfil=f;
  ncol=c;
  punteroMatriz=new int *[nfil];
  for (int i=0;i<ncol;i++){
    punteroMatriz[i]=new int[ncol];
  }
}

matriz::matriz(const matriz& z){
  nfil=z.nfil;
  ncol=z.ncol;
  punteroMatriz=new int *[nfil];
  for (int i=0;i<ncol;i++){
    punteroMatriz[i]=new int [ncol];
  }
  for (int i=0;i<nfil;i++){
    for (int j=0;j<ncol;j++){
      punteroMatriz[i][j]=z.punteroMatriz[i][j];
    }

  }
}

void matriz::operator=(matriz x){
  nfil=x.nfil;
  ncol=x.ncol;
  punteroMatriz=new int* [nfil];
  for (int i=0;i<ncol;i++){
    punteroMatriz[i]=new int [ncol];
  }
  for (int i=0;i<nfil;i++){
    for (int j=0;j<ncol;j++){
      punteroMatriz[i][j]=x.punteroMatriz[i][j];
    }
  }
}

matriz matriz::operator+(matriz x){
  int fmin=nfil;
  if (x.nfil<fmin) fmin=x.nfil;
  int cmin=ncol;
  if (x.ncol<cmin) cmin=x.ncol;
  matriz z(fmin,cmin);
  for (int i=0;i<fmin;i++){
    for (int j=0;j<cmin;j++){
      z.punteroMatriz[i][j]=punteroMatriz[i][j]+x.punteroMatriz[i][j];
    }
  }
  return z;
}

matriz matriz::operator-(matriz x){
  int fmin=nfil;
  if (x.nfil<fmin) fmin=x.nfil;
  int cmin=ncol;
  if (x.ncol<cmin) cmin=x.ncol;
  matriz z(fmin,cmin);
  for (int i=0;i<fmin;i++){
    for (int j=0;j<cmin;j++){
      z.punteroMatriz[i][j]=punteroMatriz[i][j]-x.punteroMatriz[i][j];
    }
  }
  return z;
}


int& matriz::operator()(int i, int j){
  return punteroMatriz[i][j];
}


int& matriz::operator[](int i){
  return punteroMatriz[i][i];
}


