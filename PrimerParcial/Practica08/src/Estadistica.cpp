#include "Estadistica.h"

Estadistica::Estadistica() {}

Estadistica::~Estadistica() {}

// Agerando funcionalidad de lo metodos
float Estadistica::suma(float d[5]) {
    float s = 0;
    for (int i = 0; i < 5; i++) {
        s = s + d[i];
    }
    return s;
}

float Estadistica::promedio(float d[5]) {
    return suma(d) / 5;
}

float Estadistica::minimo(float d[5]) {
    float mn = d[0];
    for (int i = 1; i < 5; i++) {
        if (d[i] < mn) {
            mn = d[i];
            break;
        }
    }
    return mn;
}

float Estadistica::maximo(float d[5]) {
    float mx = d[0];
    for (int i = 1; i < 5; i++) {
        if (d[i] > mx) {
            mx = d[i];
            break;
        }
    }
    return mx;
}

float Estadistica::media(float d[5]) {
    int a = 0, i = 0;
    while (i < 5) {
        for (int j = i; j < 5; j++) {
            if (d[i] > d[j]) {
                a = d[i];
                d[i] = d[j];
                d[j] = a;
            }
        }
        i++;
    }
    return d[2];
}
