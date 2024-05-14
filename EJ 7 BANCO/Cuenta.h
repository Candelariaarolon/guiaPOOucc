/*7. Obtener una clase que represente una cuenta bancaria. Para la misma se tiene
como información:
 Número de cuenta.
 Saldo.
 Tasa de interés
Definir los datos miembro de la clase.
Obtener los métodos para:
 Crear una cuenta nueva (constructor) a partir de la asignación del número
de cuenta y una tasa de interés. Toda nueva cuenta se crea con saldo 0.
 Carga y visualización de los datos miembro.
 Realizar un depósito.
 Realizar una extracción.
 Acreditar intereses.
Considerar que algunas operaciones requieren comprobación antes de ser
realizadas
Definir un programa principal que gestione dos cuentas distintas.*/


class Cuenta{
protected:
  int numCuenta;
  float saldo;
  float tasaInteres;
public:
  Cuenta(int, float);
  void setnumCuenta(int);
  void setsaldo(double);
  void settasaInteres(double);

  int getnumCuenta();
  float getsaldo();
  float gettasaInteres();
  void deposito(float monto);
  int extraccion(float monto);
  void acredInteres();
};

