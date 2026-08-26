//Con doble diagonal coloco comentarios de una linea
//Programación
//Profesor: Jaciel Luna
//Alumna: Azul Daniela Ovalle Mojica
//Grupo: 206

/*
Ejercicio 2
Operaciones aritméticas

- Crear variables de tipo entero y decimal.
- Realizar operaciones aritméticas utilizando:
  suma (+)
  resta (-)
  multiplicación (*)
  división (/)
  módulo (%)
- Mostrar los resultados de las operaciones en la consola.
*/

// Librerías
#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    int numero1 = 20;
    int numero2 = 5;

    // Declaración de una variable decimal
    float decimal1 = 10.5;
    float decimal2 = 2.5;

    // Operaciones aritméticas

    int suma = numero1 + numero2;
    int resta = numero1 - numero2;
    int multiplicacion = numero1 * numero2;
    int division = numero1 / numero2;
    int modulo = numero1 % numero2;

    // Mostrar resultados en consola

    cout << "OPERACIONES ARITMETICAS" << endl;

    cout << "Numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;

    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicacion: " << multiplicacion << endl;
    cout << "Division: " << division << endl;
    cout << "Modulo: " << modulo << endl;

    // Operaciones con numeros decimales

    cout << "\nOPERACIONES CON DECIMALES" << endl;

    cout << "Decimal 1: " << decimal1 << endl;
    cout << "Decimal 2: " << decimal2 << endl;

    cout << "Suma: " << decimal1 + decimal2 << endl;
    cout << "Resta: " << decimal1 - decimal2 << endl;
    cout << "Multiplicacion: " << decimal1 * decimal2 << endl;
    cout << "Division: " << decimal1 / decimal2 << endl;

    return 0;
}