#include "CalculadoraSobreescritura.h"

CalculadoraSobreescritura::CalculadoraSobreescritura() {}

CalculadoraSobreescritura::~CalculadoraSobreescritura() {}

// Calculando la multiplicacion con sumas
int CalculadoraSobreescritura::multiplicacion(int n1, int n2) {
    int r = 0, i = 0;
    while (i < n2) {
        r = r + n1;
        i++;
    }
    return r;
}

// Calculando la division con restas
float CalculadoraSobreescritura::division(int n1, int n2) {
    int r = 0;
    while (n1 > 0) {
        n1 = n1 - n2;
        r++;
    }
    return r;
}

int CalculadoraSobreescritura::potencia(int n1, int n2) {
    int r = 1;
    for (int i = 0; i < n2; i++) {
        r = r * n1;
    }
    return r;
}
