// Practica 2
#include <iostream>

using namespace std;

// Creando la funcion para la suma de dos numeros que recibe dos parametros
float sumaDeDosNumeros(float n1, float n2) {
    return n1 + n2;
}

int main() {
    // Definiendo las variables con su tipo de dato
    float n1, n2;
    cout << "Ingrese dos numeros separados por un espacio: ";
    // Obteniendo los valores desde la consla
    cin >> n1;
    cin >> n2;
    // Imprimiendo el resultado
    cout << n1 << " + " << n2 << " = " << sumaDeDosNumeros(n1, n2) << endl;
    return 0;
}
