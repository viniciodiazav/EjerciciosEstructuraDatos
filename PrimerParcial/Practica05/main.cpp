#include <iostream>
#include "Calculadora.h"
#include "CalculadoraNueva.h"

using namespace std;

int main()
{
    // Instanciando la clase CalculadoraNueva con su propio tipo de dato
    CalculadoraNueva cn = CalculadoraNueva();

    // Utilizando los metodos de la clase padre
    cout << cn.suma() << endl;
    cout << cn.suma(1, 2) << endl;
    cout << cn.suma(3, 4, 5) << endl;

    // Utilizando los metodos propios de la clase CalculadoraNueva
    cout << cn.resta(8, 8) << endl;
    cout << cn.multiplicacion(4, 6) << endl;
    cout << cn.division(7, 2) << endl;

    return 0;
}
