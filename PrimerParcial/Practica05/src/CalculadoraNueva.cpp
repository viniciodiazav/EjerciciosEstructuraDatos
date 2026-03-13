#include "CalculadoraNueva.h"
#include <iostream>

using namespace std;

CalculadoraNueva::CalculadoraNueva() {
    // Imprimiendo un mensaje en la consola cuando la clase CalculadoraNueva sea instanciada
    cout << "--- se creo el objeto CalculadoraNueva ---\n" << endl;
}

CalculadoraNueva::~CalculadoraNueva() {}

// Anadiendo funcionalidad al metodo resta()
float CalculadoraNueva::resta(float n1, float n2) {
    return n1 - n2;
}

// Anadiendo funcionalidad al metodo multiplicacion()
float CalculadoraNueva::multiplicacion(float n1, float n2) {
    return n1 * n2;
}

// Anadiendo funcionalidad al metodo division() y verificando que no se divida entre 0
float CalculadoraNueva::division(float n1, float n2) {
    if (n2 == 0) {
        cout << "No se puede diviri entre 0" << endl;
        return NULL;
    } else {
        return n1 / n2;
    }
}
