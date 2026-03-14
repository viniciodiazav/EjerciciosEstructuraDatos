#include <iostream>
#include "Calculadora.h"

using namespace std;

int main()
{
    Calculadora c = Calculadora();
    // Utilizando el mismo metodo pero on diferentes parametros
    cout << c.suma() << endl;
    cout << c.suma(1, 6) << endl;
    cout << c.suma(8, 2, 9) << endl;
    return 0;
}
