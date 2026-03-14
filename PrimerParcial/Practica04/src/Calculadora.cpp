#include "Calculadora.h"
#include <iostream>

Calculadora::Calculadora() {}

Calculadora::~Calculadora() {}

// Anadiendo funcionalidad al metodo que recibe cero parametros
int Calculadora::suma() {
    int n1, n2;
    std::cout << "Ingrese dos numeros naturales separados por un espacio: ";
    std::cin >> n1;
    std::cin >> n2;
    return n1 +n2;
}
// Anadiendo funcionalidad al metodo que recibe dos parametros
int Calculadora::suma(int n1, int n2) {
    return n1 + n2;
}
// Anadiendo funcionalidad al metodo que recibe tres parametros
int Calculadora::suma(int n1, int n2, int n3) {
    return n1 + n2 + n3;
}
