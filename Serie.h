#ifndef SERIE_H
#define SERIE_H

#include "Entretenimiento.h"
#include "Episodio.h"
#include <cmath>


class Serie : public Entretenimiento
{
    public:
        Serie();
        virtual ~Serie();
        Serie(string, string, int, int, int, int);
        void setnumE(int);
        int getnumE();
        void setTemporadas(int);
        int getTemporadas();
        void imprimeDatos();
        void crearEpisodios();
        void agregarEpisodio(Episodio& ep);
        Episodio getEpisodio(int);
        void operator ! (){
            int suma=0;
            for (int i=0; i<numE; i++){
                suma+=episodios[i].getCalificacion();
            }
            calificacion=suma/numE;
        }

    protected:

    private:
        int cuenta;
        int numE;
        int temporadas;
        Episodio* episodios;
};

#endif // SERIE_H
