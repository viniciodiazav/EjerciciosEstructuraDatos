#ifndef CALCULADORA_H
#define CALCULADORA_H

// Creando clase calculadora
class Calculadora
{
    public:
        Calculadora();
        virtual ~Calculadora();
        // Definiendo metodos con diferentes parametros
        int suma();
        // Le agregamos la palabra reservada virtual para que se pueda aplicar el polimorfismo
        int suma(int n1, int n2);
        int suma(int m1, int n2, int n3);
    protected:

    private:
};

#endif // CALCULADORA_H
