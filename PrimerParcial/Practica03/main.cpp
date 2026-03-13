// Practica 3
#include <iostream>

using namespace std;

int main() {
    float n1, n2, r;
    char o, op;
    cout << "Ingrese dos numeros separados por un espacio: ";
    cin >> n1;
    cin >> n2;
    cout << "Ingrese la opcion de operacion:\na) suma\nb) resta\nc) multiplicacion\nd) division\nSeleccione una opcion: ";
    cin >> o;
    switch (o) {
        case 'a':
            r = n1 + n2;
            op = '+';
            break;
        case 'b':
            r = n1 - n2;
            op = '-';
            break;
        case 'c':
            r = n1 * n2;
            op = '*';
            break;
        case 'd':
            r = n1 / n2;
            op = '/';
            break;
        default:
            op = 'n';
    }
    if (op != 'n') {
        cout << n1 << " " << op << " " << n2 << " = " << r << endl;
    } else {
        cout << "Opcion no valida" << endl;
    }
    return 0;
}
