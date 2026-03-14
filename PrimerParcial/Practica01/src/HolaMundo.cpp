#include "HolaMundo.h"
#include <iostream>

using namespace std;

HolaMundo::HolaMundo() {
    // Imprimiendo mensaje cunado la clase HolaMundo sea instanciada
    cout << "--- instanciando clase HolaMundo ---" << endl;
}

HolaMundo::~HolaMundo() {}

void HolaMundo::saludar() {
    // Imprimiendo un Hola Mundo cuando se use el metodo saludar()
    cout << "Hola Mundo!" << endl;
}
