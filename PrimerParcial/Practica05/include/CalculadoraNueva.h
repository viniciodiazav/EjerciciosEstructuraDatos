#ifndef CALCULADORANUEVA_H
#define CALCULADORANUEVA_H
#include"Calculadora.h"

// Creando clase CalculadoraNueva heredando de la clase Calculadora
class CalculadoraNueva : public Calculadora
{
    public:
        CalculadoraNueva();
        virtual ~CalculadoraNueva();

        // Definiendo metodos propios de la clase CalculadoraNueva
        int resta(int n1, int n2);
        int multiplicacion(int n1, int n2);
        float division(int n1, int n2);

    protected:

    private:
};

#endif // CALCULADORANUEVA_H
