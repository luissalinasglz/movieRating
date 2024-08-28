#ifndef PELICULA_H
#define PELICULA_H

#include "Entretenimiento.h"


class Pelicula : public Entretenimiento
{
    public:
        Pelicula();
        virtual ~Pelicula();
        Pelicula(string, string, int, int, int);
        void imprimeDatos();

    protected:

    private:
};

#endif // PELICULA_H
