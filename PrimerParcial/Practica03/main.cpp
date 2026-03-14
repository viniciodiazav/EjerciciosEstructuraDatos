#include <iostream>
#include "Calculadora.h"

using namespace std;

int main()
{
    int n1, n2, r;
    char o;
    // Instanciando la clase Calculadora
    Calculadora c = Calculadora();
    // Solicitando los numeros
    cout << "Ingrese dos numero enteros separados por un espacio: ";
    cin >> n1;
    cin >> n2;
    cout << "Ingrese la operacion que desee\na) suma\nb) resta\nc) multiplicacion\nd) division\nSeleccione: ";
    cin >> o;
    // Realizando la operacion segun la opcion seleccionada
    switch (o) {
        case 'a':
            c.suma(n1, n2);
            break;
        case 'b':
            c.resta(n1, n2);
            break;
        case 'c':
            c.multiplicacion(n1, n2);
            break;
        case 'd':
            c.division(n1, n2);
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
    }
    return 0;
}
