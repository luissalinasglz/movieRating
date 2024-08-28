#include "Entretenimiento.h"

Entretenimiento::Entretenimiento()
{
    //ctor
}

Entretenimiento::~Entretenimiento()
{
    //dtor
}

Entretenimiento::Entretenimiento(string n, string g, int i, int d, int c, string t){
    nombre=n;
    genero=g;
    id=i;
    duracion=d;
    calificacion=c;
    tipo=t;
}

void Entretenimiento::imprimeDatos(){
}

void Entretenimiento::setNombre(string n){
    nombre=n;
}

string Entretenimiento::getNombre(){
    return nombre;
}

void Entretenimiento::setGenero (string g){
    genero=g;
}

string Entretenimiento::getGenero(){
    return genero;
}

void Entretenimiento::setId(int i){
    id=i;
}

int Entretenimiento::getId(){
    return id;
}

void Entretenimiento::setDuracion(int d){
    duracion=d;
}

int Entretenimiento::getDuracion(){
    return duracion;
}

void Entretenimiento::setCalificacion(int c){
    calificacion=c;
}

int Entretenimiento::getCalificacion(){
    return calificacion;
}

void Entretenimiento::setTipo(string t){
    tipo=t;
}

string Entretenimiento::getTipo(){
    return tipo;
}
