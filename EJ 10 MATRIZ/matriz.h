/* Construir la clase Matriz que permita representar un arreglo bidimensional de
enteros. Obtener las siguientes sobrecargas:
 Operador + para sumar dos Matrices.
 Operador – para restar dos Matrices.
 Operador * para calcular el producto de 2 Matrices.
 Operador () para subindicar cada elemento de la matriz.
 Operador [] para subindicar los elementos de la diagonal principal
Realizar un programa principal que haga uso de la clase.
*/


class matriz{
private:
  int nfil;
  int ncol;
  int **punteroMatriz;
public:
  matriz(int,int);
  // un  constructor a partir de copia direc de matriz
  //asegura la no modificación del objeto original durante la copia, 
  matriz(const matriz&);
  // el retorno de los operadores de suma y resta matriciales son matrices
  matriz operator+(matriz x); 
  matriz operator-(matriz x);
  void operator=(matriz x);
  //operadores devuelvan una referencia a un entero, lo cual es útil cuando deseas modificar el valor de un elemento de la matriz directamente a través de estos operadores
  int& operator[](int i);
  int& operator()(int i, int j);
  
};

