#include <iostream>
#include "AutoPOO.h"
#include "PersonaPOO.h"

using namespace std;

// Creando tipo de dato AutoPE en programacion estructurada
struct AutoPE {
    float precio;
    int anio;
};

// Creando tipo de dato PersonaPE en programacion estructurada
struct PersonaPE {
    char nombre[30];
    char ap[30];
    char am[30];
    char genero;
    short edad;
};

// Funcion para copiar cadenas de caracteres
void copiarPalabra(char vAsignar[30], char palabra[30]) {
    for (int i = 0; i < 30; i++) {
        vAsignar[i] = palabra[i];
        if (i == 29) {
            vAsignar[i] = '\0';
            break;
        }
        if (palabra[i] == '\0') {
            break;
        }
    }
}

int main()
{
    // Instanciando el tipo de dato AutoPE
    AutoPE aPE = AutoPE();
    // Accediendo a sus atributos
    aPE.precio = 250000.0;
    aPE.anio = 2018;

    // Instanciado clase AutoPOO
    AutoPOO aPOO = AutoPOO();
    // Accediendo a sus atributos
    aPOO.precio = 400000.0;
    aPOO.anio = 2023;

    // Instanciando el tipo de dato PersonaPE
    PersonaPE pPE = PersonaPE();
    // Accediendo a sus atributos
    copiarPalabra(pPE.nombre, "Vinicio");
    copiarPalabra(pPE.ap, "Diaz");
    copiarPalabra(pPE.am, "Avelar");
    pPE.genero = 'M';
    pPE.edad = 19;

    // Intsnaciando la clase PersonaPOO
    PersonaPOO pPOO = PersonaPOO();
    // Accediendo a sus atributos
    copiarPalabra(pPOO.nombre, "Isaac");
    copiarPalabra(pPOO.ap, "Oviedo");
    copiarPalabra(pPOO.am, "De la Cruz");
    pPOO.genero = 'M';
    pPOO.edad = 19;

    return 0;
}
