#ifndef EPISODIO_H
#define EPISODIO_H
#include <iostream>
#include <string>

using namespace std;

class Episodio
{
    public:
        Episodio();
        Episodio(string, int, int);
        virtual ~Episodio();
        void setTitulo(string);
        string getTitulo();
        void setTemporada(int);
        int getTemporada();
        void setCalificacion(int);
        int getCalificacion();
        void imprimeDatos();


    protected:

    private:
        string titulo;
        int temporada;
        int calificacion;
};

#endif // EPISODIO_H
