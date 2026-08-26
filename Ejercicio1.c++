//Con doble diagonal coloco comentarios de una linea 
//Programación
//Profesor:Jaciel Luna
//Alumna:Azul Daniela Ovalle Mojica 
//Grupo:206 
/*
Ejercicio 1 
Primeros pasos de codigo
-Crea un comentario en el código y coloca el nombre de la asignatura 
- Representa las diferentes sintaxis que existen de crear comentarios en el lenguaje (en una línea, varias...). Escribe el nombre del profesor y tus datos generales
- Crea una variable (y una constante si el lenguaje lo soporta). 
- Crea variables representando todos los tipos de datos primitivos del lenguaje (cadenas de texto, enteros, booleanos...).  
- Imprime por terminal el texto: "¡Hola, [y el nombre del lenguaje]!"

*/

/*
//coloca comentarios en una linea
diagona asterisco coloca bloques de comentarios
*/
//librerias es para que el sistema jale la información
#include <iostream> // permite usar Cout y cin para imprimir o leer datos en la consola
#include <string> // permite trabajar con cadenas de texto 
#include <stdexcept> // Trabajar excepciones con try, catch 

//main es mi funcion principal que va a trabajar con enteros int variable de tipo entero
int main ()
{
    int variable = 25; // declaración de una variable, siempre con punto y coma
    const constante = 3.1416; // declaracion de una constante 

    /*declaración de tipo de datos*/
    int entero = 5; //tipo de dato entero almacena numeros sin decimales 
    float flotante = 6.13; // alamacena numeros con decimales de precición simple 
    double decimales dobles = 6.1325; // almacena decimales con mayor precisión
    char caracter = 'A' // almacena un solo caracter 
    bool boleano = true; //alamacena valores de verdadero o falso o false
    string cadena de caracteres = "Azul";

    //imprimir saludo al lenguaje de programación

    cout <<"Hola C++"; //imprime en consola el saludo
    
}
