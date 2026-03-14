#include <iostream>
#include "CalculadoraSobreescritura.h"

using namespace std;

int main()
{
    CalculadoraSobreescritura cs = CalculadoraSobreescritura();
    // Multiplicacion
    cout << cs.multiplicacion(6, 4) << endl;
    // Division
    cout << cs.division(30, 6) << endl;
    // Potencia
    cout << cs.potencia(3, 4) << endl;
    return 0;
}
