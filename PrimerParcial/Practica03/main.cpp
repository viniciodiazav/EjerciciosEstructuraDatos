// Practica 3
#include <iostream>

using namespace std;

int main() {
    // Definiendo las variables
    float n1, n2, r;
    char o, op;

    cout << "Ingrese dos numeros separados por un espacio: ";
    cin >> n1;
    cin >> n2;
    cout << "Ingrese la opcion de operacion:\na) suma\nb) resta\nc) multiplicacion\nd) division\nSeleccione una opcion: ";
    cin >> o;

    // Control de flujo con switch segun la opcion que se eligio
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
            if (n2 != 0) {
                r = n1 / n2;
                op = '/';
            } else {
                r = 0;
                op = '/';
            }
            break;
        default:
            op = 'n';
    }

    // Verificando que la opcion de operacion elegida sea valida
    if (op == 'n') {
        cout << "Opcion no valida" << endl;

    } if (op == '/' && n2 == 0) { // Verificado que no sea una divicion entre 0
        cout << "No se pude divir por 0" << endl;

    } else {
        // Imprimiendo el resultado de la operacion
        cout << n1 << " " << op << " " << n2 << " = " << r << endl;
    }
    return 0;
}
