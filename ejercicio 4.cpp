#include <iostream>

using namespace std;

int main()
{
    float calificaciones[3][3];
    float suma = 0;
    float promedioGeneral;

    cout << "===== CALIFICACIONES DE ESTUDIANTES =====" << endl;

    // Solicitar las 9 calificaciones
    for (int fila = 0; fila < 3; fila++)
    {
        cout << "\nEstudiante " << fila + 1 << endl;

        for (int columna = 0; columna < 3; columna++)
        {
            cout << "Calificacion de la materia "
                 << columna + 1 << ": ";

            cin >> calificaciones[fila][columna];
        }
    }

    // Mostrar la matriz
    cout << "\n===== MATRIZ DE CALIFICACIONES =====" << endl;

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            cout << calificaciones[fila][columna] << "\t";
        }

        cout << endl;
    }

    // Sumar todas las calificaciones
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            suma = suma + calificaciones[fila][columna];
        }
    }

    // Calcular promedio general
    promedioGeneral = suma / 9;

    cout << "\nSuma total: " << suma << endl;

    cout << "Promedio general: "
         << promedioGeneral << endl;

    // Calcular promedio individual de cada estudiante
    cout << "\n===== PROMEDIO POR ESTUDIANTE =====" << endl;

    for (int fila = 0; fila < 3; fila++)
    {
        float sumaEstudiante = 0;

        for (int columna = 0; columna < 3; columna++)
        {
            sumaEstudiante =
                sumaEstudiante + calificaciones[fila][columna];
        }

        float promedioEstudiante =
            sumaEstudiante / 3;

        cout << "Estudiante " << fila + 1
             << ": " << promedioEstudiante << endl;
    }

    return 0;
}