//Con doble diagonal coloco comentarios de una linea
//Programación
//Profesor: Jaciel Luna
//Alumna: Azul Daniela Ovalle Mojica
//Grupo: 206

/*
Ejercicio 2
Operaciones aritméticas

- Crear variables de tipo entero y decimal.
- Realizar operaciones aritméticas:
  suma (+)
  resta (-)
  multiplicación (*)
  división (/)
  módulo (%)
- Mostrar los resultados en la consola.
*/

// Clase principal
public class Operaciones
{
    public static void main(String[] args)
    {
        // Declaración de variables
        int numero1 = 20;
        int numero2 = 5;

        double decimal1 = 10.5;
        double decimal2 = 2.5;

        // Operaciones aritméticas
        int suma = numero1 + numero2;
        int resta = numero1 - numero2;
        int multiplicacion = numero1 * numero2;
        int division = numero1 / numero2;
        int modulo = numero1 % numero2;

        // Mostrar resultados
        System.out.println("OPERACIONES ARITMETICAS");

        System.out.println("Numero 1: " + numero1);
        System.out.println("Numero 2: " + numero2);

        System.out.println("Suma: " + suma);
        System.out.println("Resta: " + resta);
        System.out.println("Multiplicacion: " + multiplicacion);
        System.out.println("Division: " + division);
        System.out.println("Modulo: " + modulo);

        // Operaciones con decimales
        System.out.println("\nOPERACIONES CON DECIMALES");

        System.out.println("Suma: " + (decimal1 + decimal2));
        System.out.println("Resta: " + (decimal1 - decimal2));
        System.out.println("Multiplicacion: " + (decimal1 * decimal2));
        System.out.println("Division: " + (decimal1 / decimal2));
    }
}