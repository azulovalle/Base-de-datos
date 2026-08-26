#include <iostream>

using namespace std;

int main()
{
    int edades[5];

    cout << "===== LISTA DE EDADES =====" << endl;

    // Solicitar las 5 edades
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingresa la edad de la persona "
             << i + 1 << ": ";
        cin >> edades[i];
    }

    // Mostrar las edades
    cout << "\n===== EDADES REGISTRADAS =====" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Persona " << i + 1
             << ": " << edades[i] << " anos" << endl;
    }

    return 0;
}