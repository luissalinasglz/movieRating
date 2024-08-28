#ifndef ENTRETENIMIENTO_H
#define ENTRETENIMIENTO_H
#include <iostream>
#include <string>

using namespace std;

class Entretenimiento
{
    public:
        Entretenimiento();
        virtual ~Entretenimiento();
        Entretenimiento(string, string, int, int, int, string);
        virtual void imprimeDatos()=0;
        void setNombre(string);
        string getNombre();
        void setGenero (string);
        string getGenero();
        void setId(int);
        int getId();
        void setDuracion(int);
        int getDuracion();
        void setCalificacion(int);
        int getCalificacion();
        void setTipo(string);
        string getTipo();

    protected:
        string nombre;
        string genero;
        int duracion;
        int calificacion;

    private:
        int id;
        string tipo;

};

#endif // ENTRETENIMIENTO_H
