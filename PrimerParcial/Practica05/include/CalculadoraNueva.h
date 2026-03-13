#ifndef CALCULADORANUEVA_H
#define CALCULADORANUEVA_H

#include "Calculadora.h"

class CalculadoraNueva : public Calculadora // Heredando de la clase Calculadora
{
    public:
        CalculadoraNueva();
        virtual ~CalculadoraNueva();

        // Definiendo metodos propios de la clase CalculadoraNueva
        float resta(float n1, float n2);
        float multiplicacion(float n1, float n2);
        float division(float n1, float n2);
    protected:

    private:
};

#endif // CALCULADORANUEVA_H
