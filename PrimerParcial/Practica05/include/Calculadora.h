#ifndef CALCULADORA_H
#define CALCULADORA_H


class Calculadora
{
    public:
        Calculadora();
        virtual ~Calculadora();

        float suma();
        float suma(float n1, float n2);
        float suma(float n1, float n2, float n3);

    protected:

    private:
};

#endif // CALCULADORA_H
