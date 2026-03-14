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
        // Se le anade la palabra reservada vitual para aplicar el polimorfismo
        virtual int multiplicacion(int n1, int n2);
        virtual float division(int n1, int n2);

    protected:

    private:
};

#endif // CALCULADORANUEVA_H
