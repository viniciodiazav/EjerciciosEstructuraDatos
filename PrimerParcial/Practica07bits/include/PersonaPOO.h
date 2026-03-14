#ifndef PERSONAPOO_H
#define PERSONAPOO_H

// Creando clase PersonaPOO
class PersonaPOO
{
    public:
        PersonaPOO();
        virtual ~PersonaPOO();

        // Definiendo sus atributos
        char nombre[30];
        char ap[30];
        char am[30];
        char genero;
        short edad;

    protected:

    private:
};

#endif // PERSONAPOO_H
