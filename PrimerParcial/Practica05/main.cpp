#include <iostream>
#include "Calculadora.h"
#include "CalculadoraNueva.h"

using namespace std;

int main() {
    // Creacion de el objeto CalculadoraNueva con el tipo de dato de la clase padre
    Calculadora cn = CalculadoraNueva();
    // Creacion de el objet CalculadoraNueva con su propio tipo de dato
    CalculadoraNueva cn2 = CalculadoraNueva();

    // Metodos heredados de la clase padre Calculadora
    cout << cn.suma() << endl; // suma con cero parametros
    cout << "4.5 + 7.8 = " << cn.suma(4.5, 7.8) << endl; // suma con dos parametros
    cout << "3.5 + 1.2 + 6.7 = " << cn.suma(3.5, 1.2, 6.7) << endl; // suma con tres parametros

    // Metodos propios de la clase hija CalculadoraNueva
    cout << "1.4 - 0.6 = " << cn2.resta(1.4, 0.6) << endl;
    cout << "5.3 * 8 = " << cn2.multiplicacion( 5.3, 8) << endl;
    cout << "7.1 / 6.8 = " << cn2.division(7.1, 6.8) << endl;
    cout << "4.4 / 0 = " << cn2.division(4.4, 0) << endl;
    return 0;
}
