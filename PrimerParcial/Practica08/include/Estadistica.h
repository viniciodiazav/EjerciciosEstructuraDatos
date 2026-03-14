#ifndef ESTADISTICA_H
#define ESTADISTICA_H


class Estadistica
{
    public:
        Estadistica();
        virtual ~Estadistica();

        float promedio(float d[5]);
        float media(float d[5]);
        float suma(float d[5]);
        float minimo(float d[5]);
        float maximo(float d[5]);


    protected:

    private:
};

#endif // ESTADISTICA_H
