// Ejercicio 3
// calculadora basica suma, resta mult, div

#include <iostream>

using namespace std;

int main(void) {
    char opcion, operacion;
    float v1, v2, r; // Valor 1, Valor 2, Resultado
    cout << "Ingrese dos numeros reales separados por un espacio: ";
    cin >> v1;
    cin >> v2;
    cout << "Ingrese la opcion de operacion que desee:" << endl;
    cout << "a) suma" << endl;
    cout << "b) resta" << endl;
    cout << "c) multiplicacion" << endl;
    cout << "d) division" << endl;
    cout << "Seleccion: ";
    cin >> opcion;
    //cout << "\n" << endl;


    switch (opcion) {
        case 'a':
            r = v1 + v2;
            operacion = '+';
            break;
        case 'b':
            r = v1 - v2;
            operacion = '-';
            break;
        case 'c':
            r = v1 * v2;
            operacion = '*';
            break;
        case 'd':
            r = v1 / v2;
            operacion = '/';
            break;
    }

    cout << "Resultado de " << v1 << " " << operacion << " " << v2 << " = " << r << endl;


    return 0;
}
