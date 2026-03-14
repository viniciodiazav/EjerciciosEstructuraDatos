#include "Calculadora.h"
#include <iostream>

using namespace std;

Calculadora::Calculadora() {}

Calculadora::~Calculadora() {}

// Anadiendo funcionalidad a los metodos declarados
int Calculadora::suma(int n1, int n2) {
    cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    return n1 + n2;
}

int Calculadora::resta(int n1, int n2) {
    cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    return n1 - n2;
}

int Calculadora::multiplicacion(int n1, int n2) {
    cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    return n2 * n1;
}

float Calculadora::division(int n1, int n2) {
    // Veriicando que el dividor no sea 0
    if (n2 == 0) {
        cout << "No es posible divir entre 0" << endl;
        return 0;
    } else {
        // Aplicando casting al resultado
        cout << n1 << " / " << n2 << " = " << (float) n1 / n2 << endl;
        return n1 / n2;
    }
}
