#ifndef CALCULADORA_H
#define CALCULADORA_H


class Calculadora
{
    public:
        Calculadora();
        virtual ~Calculadora();

        int suma(int n1, int n2);
        int resta(int n1, int n2);
        int multiplicacion(int n1, int n2);
        float divicion(int n1, int n2);

    protected:

    private:
};

#endif // CALCULADORA_H
