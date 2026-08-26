#include <iostream>

using namespace std;

int main()
{
    float calificaciones[5];
    float suma = 0;
    float promedio;
    int aprobados = 0;

    cout << "===== CALIFICACIONES =====" << endl;

    // Solicitar las 5 calificaciones
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingresa la calificacion del estudiante "
             << i + 1 << ": ";
        cin >> calificaciones[i];

        suma = suma + calificaciones[i];

        // Contar estudiantes aprobados
        if (calificaciones[i] >= 6)
        {
            aprobados++;
        }
    }

    // Mostrar las calificaciones
    cout << "\n===== CALIFICACIONES REGISTRADAS =====" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Estudiante " << i + 1
             << ": " << calificaciones[i] << endl;
    }

    // Calcular promedio
    promedio = suma / 5;

    cout << "\nSuma de calificaciones: "
         << suma << endl;

    cout << "Promedio del grupo: "
         << promedio << endl;

    cout << "Estudiantes aprobados: "
         << aprobados << endl;

    return 0;
}