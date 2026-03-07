// Ejercicio 2
// suma de 2 numeros como parametros

#include <iostream>

using namespace std;

/* Función que recibe dos numero enteros y regresa un numero
entero que sera la suma de estos dos */
int sumaEnteros(int numero1, int numero2) {
    return numero1 + numero2;
}

int main(void) {
    // Declaración de variables
    int numero1, numero2;

    // Entrada de los numeros
    cout << "Ingresa dos numeros enteros separados por un espacio: ";
    cin >> numero1;
    cin >> numero2;

    // Imprimir en la pantalla el resultado
    cout << numero1 << " + " << numero2 << " = " << sumaEnteros(numero1, numero2) << endl;

    return 0;
}
