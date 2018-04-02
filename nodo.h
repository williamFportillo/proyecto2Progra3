//
// Created by WilliamPC on 31/3/2018.
//
#ifndef PROYECTO2PROGRA3_NODO_H
#define PROYECTO2PROGRA3_NODO_H

    struct nodo{
        int valor;
        nodo *sig;
        nodo *ant;
        nodo(){
            sig =0;
            ant=0;
        }
    };

void insertarNodo(nodo *&, nodo *);
void mostrarLista(nodo *);
void insertarFinalR(nodo ** , nodo * );
void imprimirLista(nodo **);

#endif //PROYECTO2PROGRA3_NODO_H
