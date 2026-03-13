// Practica 4
#include <iostream>
#include <Calculadora.h>

using namespace std;

int main()
{
    Calculadora c = Calculadora();

    cout << "====== Suma con 0 parametros ======" << endl;
    float r1;
    r1 = c.suma();
    cout << "Resultdo de su suma = " << r1 << "\n" << endl;

    cout << "====== Suma con 2 parametros ======" << endl;
    float n1, n2;
    cout << "Ingresa dos numero separados por un espacio: ";
    cin >> n1;
    cin >> n2;
    cout << "Resultado de su suma = " << c.suma(n1, n2) << "\n" << endl;

    cout << "====== Suma con 3 parametros ======" << endl;
    float n3;
    cout << "Ingresa tres numeros separados por un espacio: ";
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cout << "Resultado de su suma = " << c.suma(n1, n2, n3) << "\n" << endl;
    return 0;
}
