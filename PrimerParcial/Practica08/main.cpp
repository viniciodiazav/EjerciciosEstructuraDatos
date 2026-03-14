#include <iostream>
#include "Estadistica.h"

using namespace std;

int main()
{
    float d[5];
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> d[i];
    }
    Estadistica e = Estadistica();
    cout << "Promedio: " << e.promedio(d) << endl;
    cout << "Minimo: " << e.minimo(d) << endl;
    cout << "Maximo: " << e.maximo(d) << endl;
    cout << "Suma: " << e.suma(d) << endl;
    cout << "Media: " << e.media(d) << endl;
    return 0;
}
