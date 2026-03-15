#ifndef ESTADISTICA_H
#define ESTADISTICA_H

// Creamos la clase Estadistica
class Estadistica
{
    public:
        Estadistica();
        virtual ~Estadistica();
        // Definimos un arreglo de 5 enteros como atributo
        int d[5];

        // Definimos sus metosos
        float promedio();
        float media();
        float suma();
        float minimo();
        float maximo();


    protected:

    private:
};

#endif // ESTADISTICA_H
