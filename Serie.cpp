#include "Serie.h"

Serie::Serie()
{
    //ctor
}

Serie::~Serie()
{
    //dtor
}

Serie::Serie(string n, string g, int i, int d, int num, int temp):Entretenimiento(n, g, i, d, 0, "Serie"){
    cuenta = 0;
    numE=num;
    temporadas=temp;
    crearEpisodios();
}

void Serie::setnumE(int n){
    numE=n;
}

int Serie::getnumE(){
    return numE;
}

void Serie::setTemporadas(int t){
    temporadas=t;
}

int Serie::getTemporadas(){
    return temporadas;
}

void Serie::crearEpisodios(){
    episodios=new Episodio[numE];
}

Episodio Serie::getEpisodio(int a){
    return episodios[a];
}

void Serie::agregarEpisodio(Episodio& ep){
    if (cuenta < numE) {
        episodios[cuenta] = ep;
        cuenta++;
    }
}

void Serie::imprimeDatos(){
    cout<<getTipo()<<endl;
    cout<<"ID: "<<getId()<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Genero: "<<genero<<endl;
    cout<<"Temporadas: "<<temporadas<<endl;
    cout<<"Numero de episodios: "<<numE<<endl;
    cout<<"Duracion promedio por capitulo: "<<duracion<<" minutos"<<endl;
    cout<<"Calificacion: "<<calificacion<<endl;
    cout<<"-Episodios:"<<endl;
    for(int i=0; i<numE; i++){
        episodios[i].imprimeDatos();
    }
}
