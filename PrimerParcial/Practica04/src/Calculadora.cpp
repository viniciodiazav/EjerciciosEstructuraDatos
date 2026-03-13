#include "Calculadora.h"
#include <iostream>

using namespace std;

Calculadora::Calculadora() {
    cout << "--- se creeo el objeto Calculadora ---\n" << endl;
}

Calculadora::~Calculadora() {}

float Calculadora::suma() {
    float n1, n2;
    cout << "Ingrese dos numero separados por un espacio: ";
    cin >> n1;
    cin >> n2;
    return n1 + n2;
}

float Calculadora::suma(float n1, float n2) {
    return n1 + n2;
}

float Calculadora::suma(float n1, float n2, float n3) {
    return n1 + n2 + n3;
}
