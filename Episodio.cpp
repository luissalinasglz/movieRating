#include "Episodio.h"

Episodio::Episodio()
{
    //ctor
}

Episodio::Episodio(string n, int t, int c){
    titulo=n;
    temporada=t;
    calificacion=c;
}

Episodio::~Episodio()
{
    //dtor
}
void Episodio::setTitulo(string t){
    titulo=t;
}

string Episodio::getTitulo(){
    return titulo;
}

void Episodio::setTemporada(int t){
    temporada=t;
}

int Episodio::getTemporada(){
    return temporada;
}

void Episodio::setCalificacion(int c){
    calificacion=c;
}

int Episodio::getCalificacion(){
    return calificacion;
}

void Episodio::imprimeDatos(){
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Temporada: "<<temporada<<endl;
    cout<<"Calificacion: "<<calificacion<<endl;
}
