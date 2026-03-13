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

    return 0;
}
