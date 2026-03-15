#include <iostream>
#include "Estadistica.h"

using namespace std;

int main()
{
    // Instanciamos la clase Estadistica
    Estadistica e = Estadistica();

    // Rellenamos con valores el arreglo dentro de el objeto estadisitica
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> e.d[i];
    }
    cout << "Promedio: " << e.promedio() << endl;
    cout << "Minimo: " << e.minimo() << endl;
    cout << "Maximo: " << e.maximo() << endl;
    cout << "Suma: " << e.suma() << endl;
    cout << "Media: " << e.media() << endl;
    return 0;
}
