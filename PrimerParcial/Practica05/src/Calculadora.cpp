#include "Calculadora.h"
#include <iostream>

using namespace std;

Calculadora::Calculadora() {
    // Imprimiendo un mensaje cunado el objeto Calculadora sea instanciado
    cout << "--- se creeo el objeto Calculadora ---\n" << endl;
}

Calculadora::~Calculadora() {}

// Anadiendo funcionalidad al metodo sumar que recibe cero parametros
float Calculadora::suma() {
    float n1, n2;
    cout << "Ingrese dos numero separados por un espacio: ";
    cin >> n1;
    cin >> n2;
    return n1 + n2;
}

// Anadiendo funcionalidad al metodo sumar que recibe dos parametros
float Calculadora::suma(float n1, float n2) {
    return n1 + n2;
}

// Anadiendo funcionalidad al metodo sumar que recibe tres parametros
float Calculadora::suma(float n1, float n2, float n3) {
    return n1 + n2 + n3;
}
