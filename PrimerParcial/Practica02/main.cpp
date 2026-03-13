// Practica 2
#include <iostream>

using namespace std;

float sumaDeDosNumeros(float n1, float n2) {
    return n1 + n2;
}

int main() {
    float n1, n2;
    cout << "Ingrese dos numeros separados por un espacio: ";
    cin >> n1;
    cin >> n2;
    cout << n1 << " + " << n2 << " = " << sumaDeDosNumeros(n1, n2) << endl;
    return 0;
}
