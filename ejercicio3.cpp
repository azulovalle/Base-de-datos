#include <iostream>

using namespace std;

int main()
{
    int numeros[2][3];

    cout << "===== MATRIZ 2 X 3 =====" << endl;

    // Solicitar los 6 números
    for (int fila = 0; fila < 2; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            cout << "Ingresa el numero de la fila "
                 << fila + 1
                 << ", columna "
                 << columna + 1 << ": ";

            cin >> numeros[fila][columna];
        }
    }

    // Mostrar la matriz
    cout << "\n===== MATRIZ COMPLETA =====" << endl;

    for (int fila = 0; fila < 2; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            cout << numeros[fila][columna] << "\t";
        }

        cout << endl;
    }

    return 0;
}