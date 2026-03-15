#include "Estadistica.h"

Estadistica::Estadistica() {}

Estadistica::~Estadistica() {}

// Agerando funcionalidad de lo metodos
float Estadistica::suma() {
    float s = 0;
    for (int i = 0; i < 5; i++) {
        s = s + this->d[i]; /* Utilizamos la palabra reservada this-> para indicar
        que usaremos el arreglo propio de el objeto */
    }
    return s;
}

float Estadistica::promedio() {
    return suma() / 5;
}

float Estadistica::minimo() {
    float mn = this->d[0];
    for (int i = 1; i < 5; i++) {
        if (this->d[i] < mn) {
            mn = this->d[i];
            break;
        }
    }
    return mn;
}

float Estadistica::maximo() {
    float mx = this->d[0];
    for (int i = 1; i < 5; i++) {
        if (this->d[i] > mx) {
            mx = this->d[i];
            break;
        }
    }
    return mx;
}

float Estadistica::media() {
    int a = 0, i = 0;
    while (i < 5) {
        for (int j = i; j < 5; j++) {
            if (this->d[i] > this->d[j]) {
                a = this->d[i];
                this->d[i] = this->d[j];
                this->d[j] = a;
            }
        }
        i++;
    }
    return this->d[2];
}
