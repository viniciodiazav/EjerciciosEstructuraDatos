#ifndef CALCULADORASOBREESCRITURA_H
#define CALCULADORASOBREESCRITURA_H

#include "CalculadoraNueva.h"

// Creamos la clase CalculadoraSobreescritura que hereda de la clase CalculadoraNueva
class CalculadoraSobreescritura : public CalculadoraNueva
{
    public:
        CalculadoraSobreescritura();
        virtual ~CalculadoraSobreescritura();

        // Definiendo los metodos que se van a sobreescribir
        int multiplicacion(int n1, int n2) override;
        float division(int n1, int n2) override;
        int potencia(int n1, int n2);
    protected:

    private:
};

#endif // CALCULADORASOBREESCRITURA_H
