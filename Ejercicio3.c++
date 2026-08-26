//Con doble diagonal coloco comentarios de una linea
//Programación
//Profesor: Jaciel Luna
//Alumna: Azul Daniela Ovalle Mojica
//Grupo: 206

/*
Ejercicio 3
Tipos de datos

- Crear variables utilizando diferentes tipos de datos.
- Utilizar enteros.
- Utilizar números decimales.
- Utilizar caracteres.
- Utilizar valores booleanos.
- Utilizar cadenas de texto.
- Mostrar los valores en la consola.
*/

// Librerías
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Tipos de datos

    int entero = 20;                // Número entero
    float flotante = 10.5f;         // Número decimal
    double decimalDoble = 15.6789;  // Decimal con mayor precisión
    char caracter = 'A';            // Un solo carácter
    bool booleano = true;            // Verdadero o falso
    string cadena = "Azul";          // Cadena de texto

    // Mostrar los datos

    cout << "===== TIPOS DE DATOS EN C++ =====" << endl;

    cout << "Entero: " << entero << endl;
    cout << "Float: " << flotante << endl;
    cout << "Double: " << decimalDoble << endl;
    cout << "Caracter: " << caracter << endl;
    cout << "Booleano: " << booleano << endl;
    cout << "Cadena: " << cadena << endl;

    return 0;
}