#include "Pelicula.h"

Pelicula::Pelicula()
{
    //ctor
}

Pelicula::~Pelicula()
{
    //dtor
}

Pelicula::Pelicula(string n, string g, int i, int d, int c):Entretenimiento(n, g, i, d, c, "Pelicula"){

}

void Pelicula::imprimeDatos(){
    cout<<getTipo()<<endl;
    cout<<"ID: "<<getId()<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Genero: "<<genero<<endl;
    cout<<"Duracion: "<<duracion<<" minutos"<<endl;
    cout<<"Calificacion: "<<calificacion<<"\n"<<endl;
}
