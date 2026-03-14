#include "CalculadoraNueva.h"

CalculadoraNueva::CalculadoraNueva() {}

CalculadoraNueva::~CalculadoraNueva() {}

int CalculadoraNueva::resta(int n1, int n2) {
    return n1 - n2;
}

int CalculadoraNueva::multiplicacion(int n1, int n2) {
    return n1 * n2;
}

float CalculadoraNueva::division(int n1, int n2) {
    return (float) n1 / n2;
}
