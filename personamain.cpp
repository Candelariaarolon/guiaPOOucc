/*2
 calcularIMC(): calculara si la persona esta en su peso ideal (peso en kg/(altura^2 en m)), Si el cálculo devuelve: Un valor menor que 20, la función devuelve un -1, Si el valor está entre 20 y 25 (incluidos), significa que la persona está por debajo de su peso ideal. La función devuelve un 0 Si devuelve un valor mayor que 25 significa que tiene sobrepeso, la función devuelve un 1. 
■ esMayorDeEdad(): indica si es mayor de edad, devuelve un booleano. 
■ comprobarSexo(char sexo): comprueba que el sexo introducido es correcto. Si no es correcto, sera H. No debe ser visible al exterior. 
■ generaDNI(): genera un número aleatorio de 8 cifras, genera a partir de este su número su letra correspondiente. Este método sera invocado cuando se construya el objeto. Puedes dividir el método para que te sea más fácil. No será visible al exterior. 
■ Métodos set de cada parámetro, excepto de DNI. 
Programa: 
● Ingresar por teclado el nombre, la edad, sexo, peso y altura. 
● Crear 3 objetos de la clase anterior ● Para cada objeto, deberá comprobar si esta en su peso ideal, tiene sobrepeso o por debajo de su peso ideal con un mensaje. 
● Indicar para cada objeto si es mayor de edad. ● Por último, mostrar la información de cada objeto. 
*/

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include "persona.h"
using namespace std;

int main() {
    string nombre;
    int edad, DNI;

    char sexo;
    double peso, altura;

    cout << "Ingrese el nombre: ";
    cin >> nombre;
    cout << "Ingrese la edad: ";
    cin >> edad;
    cout << "Ingrese el sexo (M/F): ";
    cin >> sexo;
    cout << "Ingrese el peso en kg: ";
    cin >> peso;
    cout << "Ingrese la altura en metros: ";
    cin >> altura;
    DNI = 0;


    // Crear objetos Persona
    persona persona1(nombre, edad, DNI, sexo, peso, altura);
    

    // Comprobar IMC y mayor edad para cada objeto
    cout << "Persona 1 - IMC: " << persona1.calcularIMC() << ", Mayor de edad: " << persona1.esMayorEdad() << endl;
    
    return 0;
}