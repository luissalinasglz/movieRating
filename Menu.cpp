#include "Menu.h"

Menu::Menu()
{
    int opcion = 1;
    char tipo;
    string nombre;
    string genero;
    int id=21;
    int duracion;
    int calificacion;
    int cuentaP=16;
    int cuentaS=4;
    const int cap = 30;
    int numE;
    int temp;
    int s;
    Pelicula* peliculas[cap];
    Serie* series[cap];

    //Creacion de los 20 videos, 16 peliculas y 4 series
    peliculas[0]=new Pelicula("The Da Vinci Code", "Misterio", 1, 149, 3);
    peliculas[1]=new Pelicula("The Lion King", "Aventura", 2, 118, 4);
    peliculas[2]=new Pelicula("WALL-E", "Aventura", 3, 97, 4);
    peliculas[3]=new Pelicula("Ratatouille", "Comedia", 4, 111, 4);
    peliculas[4]=new Pelicula("Grease", "Romance", 5, 110, 4);
    peliculas[5]=new Pelicula("La La Land", "Romance", 6, 128, 4);
    peliculas[6]=new Pelicula("The Greatest Showman", "Musical", 7, 105, 4);
    peliculas[7]=new Pelicula("Spider-Man: Into the Spider-Verse", "Accion", 8, 117, 5);
    peliculas[8]=new Pelicula("Spider-Man: Across the Spider-Verse", "Accion", 9, 140, 5);
    peliculas[9]=new Pelicula("Your Name", "Fantasia", 10, 106, 5);
    peliculas[10]=new Pelicula("Alice in Wonderland", "Fantasia", 11, 109, 2);
    peliculas[11]=new Pelicula("Tim Burton's Corpse Bride", "Fantasia", 12, 76, 3);
    peliculas[12]=new Pelicula("Coraline", "Fantasia", 13, 100, 3);
    peliculas[13]=new Pelicula("Hercules", "Aventura", 14, 92, 3);
    peliculas[14]=new Pelicula("Dune", "Ciencia Ficcion", 15, 155, 5);
    peliculas[15]=new Pelicula("Dune: Part Two", "Ciencia Ficcion", 16, 166, 5);

    series[0]=new Serie("The Queen's Gambit", "Drama", 17, 55, 7, 1);
    series[1]=new Serie("Dahmer - Monster: The Jeffrey Dahmer Story", "Crimen", 18, 60, 10, 1);
    series[2]=new Serie("Smiling Friends", "Comedia", 19, 11, 4, 1);
    series[3]=new Serie("Fallout", "Ciencia Ficcion", 20, 60, 3, 1);
    for (int i=0; i<4; i++){
        series[i]->crearEpisodios();
    }
    //Serie 1
    Episodio ep01("Openings", 1, 4);
    Episodio ep02("Exchanges", 1, 4);
    Episodio ep03("Doubled Pawns", 1, 5);
    Episodio ep04("Middle Game", 1, 5);
    Episodio ep05("Fork", 1, 5);
    Episodio ep06("Adjournment", 1, 5);
    Episodio ep07("End Game", 1, 5);
    series[0]->agregarEpisodio(ep01);
    series[0]->agregarEpisodio(ep02);
    series[0]->agregarEpisodio(ep03);
    series[0]->agregarEpisodio(ep04);
    series[0]->agregarEpisodio(ep05);
    series[0]->agregarEpisodio(ep06);
    series[0]->agregarEpisodio(ep07);
    !(*series[0]);
    //Serie 2
    Episodio ep11("Episode One", 1, 4);
    Episodio ep12("Please Don't Go", 1, 4);
    Episodio ep13("Doin' a Dahmer", 1, 5);
    Episodio ep14("The Good Boy Box", 1, 4);
    Episodio ep15("Blood on Their Hands", 1, 4);
    Episodio ep16("Silenced", 1, 5);
    Episodio ep17("Cassandra", 1, 4);
    Episodio ep18("Lionel", 1, 5);
    Episodio ep19("The Bogeyman", 1, 5);
    Episodio ep110("God of Forgiveness, God of Vengance", 1, 4);
    series[1]->agregarEpisodio(ep11);
    series[1]->agregarEpisodio(ep12);
    series[1]->agregarEpisodio(ep13);
    series[1]->agregarEpisodio(ep14);
    series[1]->agregarEpisodio(ep15);
    series[1]->agregarEpisodio(ep16);
    series[1]->agregarEpisodio(ep17);
    series[1]->agregarEpisodio(ep18);
    series[1]->agregarEpisodio(ep19);
    series[1]->agregarEpisodio(ep110);
    !(*series[1]);
    //Serie 3
    Episodio ep21("Desmond's Big Day Out", 1, 5);
    Episodio ep22("Mr. Frog", 1, 4);
    Episodio ep23("Shrimp's Oddyssey", 1, 5);
    Episodio ep24("A Silly Halloween Special", 1, 3);
    series[2]->agregarEpisodio(ep21);
    series[2]->agregarEpisodio(ep22);
    series[2]->agregarEpisodio(ep23);
    series[2]->agregarEpisodio(ep24);
    !(*series[2]);
    //Serie 4
    Episodio ep31("The End", 1, 3);
    Episodio ep32("The Target", 1, 3);
    Episodio ep33("The Head", 1, 4);
    series[3]->agregarEpisodio(ep31);
    series[3]->agregarEpisodio(ep32);
    series[3]->agregarEpisodio(ep33);
    !(*series[3]);

    while (opcion =! 0) {
        cout<<"1. Cargar datos"<<endl;
        cout<<"2. Mostrar los videos con una calificacion especifica o genero"<<endl;
        cout<<"3. Mostrar los episodios de una determinada serie con una calificacion determinada"<<endl;
        cout<<"4. Mostrar las peliculas con cierta calificacion"<<endl;
        cout<<"5. Calificar un video"<<endl;
        cout<<"0. Salir"<<endl;
        cin>>opcion;
        if (opcion==0){
            break;
        }
        switch (opcion){
            case 1:
                cout<<"\n¿Pelicula o serie? (P o S)"<<endl;
                cin>>tipo;
                cin.ignore();
                if (tipo=='P'){
                    if (cuentaP >= cap){
                        cout<<"No se pueden agregar mas Peliculas"<<endl;
                    } else {
                        cout<<"Nombre de la Pelicula: ";
                        getline(cin, nombre);
                        cout<<"Genero: ";
                        cin>>genero;
                        cout<<"Duracion: ";
                        cin>>duracion;
                        cout<<"Calificacion: ";
                        cin>>calificacion;
                        peliculas[cuentaP]=new Pelicula(nombre, genero, id, duracion, calificacion);
                        cuentaP++;
                        id++;
                        cout<<"La pelicula se ha agregado\n"<<endl;
                    }
                } else if (tipo=='S'){
                    if (cuentaS >= cap){
                        cout<<"No se pueden agregar mas Series"<<endl;
                    } else {
                        cout<<"Nombre de la Serie: ";
                        getline(cin, nombre);
                        cout<<"Genero: ";
                        cin>>genero;
                        cout<<"Duracion promedio por capitulo: ";
                        cin>>duracion;
                        cout<<"Numero de episodios: ";
                        cin>>numE;
                        cout<<"Numero de temporadas: ";
                        cin>>temp;
                        series[cuentaS]=new Serie(nombre, genero, id, duracion, numE, temp);
                        series[cuentaS]->crearEpisodios();
                        for(int i=0; i<numE; i++){
                            cin.ignore();
                            cout<<"Nombre del episodio "<<i+1<<": ";
                            getline(cin, nombre);
                            cout<<"Temporada a la que pertenece: ";
                            cin>>temp;
                            cout<<"Calificacion: ";
                            cin>>calificacion;
                            Episodio ep00(nombre, temp, calificacion);
                            series[cuentaS]->agregarEpisodio(ep00);
                        }
                        !(*series[cuentaS]);
                        cuentaS++;
                        id++;
                        cout<<"La serie se ha agregado\n"<<endl;
                    }
                }
                break;
            case 2:
                cout<<"\n¿Calificacion o Genero? (C o G)"<<endl;
                cin>>tipo;
                if (tipo=='C'){
                    cout<<"Calificacion a buscar: ";
                    cin>>calificacion;
                    for(int i=0; i<cuentaP; i++){
                        if (peliculas[i]->getCalificacion()==calificacion){
                            peliculas[i]->imprimeDatos();
                        }
                    }
                    for(int i=0; i<cuentaS; i++){
                        if (series[i]->getCalificacion()==calificacion){
                            series[i]->imprimeDatos();
                        }
                    }
                } else if (tipo=='G'){
                    cout<<"Genero a buscar: ";
                    cin>>genero;
                    for(int i=0; i<cuentaP; i++){
                        if (peliculas[i]->getGenero()==genero){
                            peliculas[i]->imprimeDatos();
                        }
                    }
                    for(int i=0; i<cuentaS; i++){
                        if (series[i]->getGenero()==genero){
                            series[i]->imprimeDatos();
                        }
                    }
                }
                break;
            case 3:
                cin.ignore();
                cout<<"Serie: ";
                getline(cin, nombre);
                for(int i=0; i<cuentaS; i++){
                    if (series[i]->getNombre()==nombre){
                        s=i;
                        break;
                    }
                }
                cout<<"Calificacion a buscar: ";
                cin>>calificacion;
                for(int i=0; i<series[s]->getnumE(); i++){
                    if (series[s]->getEpisodio(i).getCalificacion()==calificacion){
                        series[s]->getEpisodio(i).imprimeDatos();
                    }
                }
                break;
            case 4:
                cout<<"Calificacion a buscar: ";
                cin>>calificacion;
                for(int i=0; i<cuentaP; i++){
                    if(peliculas[i]->getCalificacion()==calificacion){
                        peliculas[i]->imprimeDatos();
                    }
                }
                break;
            case 5:
                cin.ignore();
                cout<<"Titulo a calificar: ";
                getline(cin, nombre);
                s=-1;
                for(int i=0; i<cuentaP; i++){
                    if (peliculas[i]->getNombre()==nombre){
                        s=i;
                        break;
                    }
                }
                if (s==-1){
                    for(int i=0; i<cuentaS; i++){
                        if (series[i]->getNombre()==nombre){
                            s=i;
                            break;
                        }
                    }
                cout<<"Valor otorgado: ";
                cin>>calificacion;
                series[s]->setCalificacion(calificacion);
                cout<<"Serie Calificada\n"<<endl;
                break;
                }
                cout<<"Valor otorgado: ";
                cin>>calificacion;
                peliculas[s]->setCalificacion(calificacion);
                cout<<"Pelicula calificada\n"<<endl;
                break;
        }
    }
}

Menu::~Menu()
{
    //dtor
}
