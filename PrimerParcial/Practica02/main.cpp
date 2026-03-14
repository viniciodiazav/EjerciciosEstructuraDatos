#include <iostream>
#include "ClaseSuma.h"

using namespace std;

int main() {
    // Definiendo la variable de el resultado
    float r;
    // Instanciando la clase ClaseSuma
    ClaseSuma suma = ClaseSuma();
    // Utilizando el motodo suma e igualandolo a la variable r
    r = suma.suma(23.6, 34.2);
    // Imprimiendo el resultado
    cout << "Resultado = " << r << endl;
    return 0;
}
