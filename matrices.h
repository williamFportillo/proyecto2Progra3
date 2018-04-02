//
// Created by WilliamPC on 27/3/2018.
//

#ifndef PROYECTO2PROGRA3_MATRICES_H
#define PROYECTO2PROGRA3_MATRICES_H
#include <iostream>
#include "nodo.h"
using namespace std;
class matrices{

public:
    static void consultarMatriz(string,nodo *lista);
    static void imprimir(int t, nodo *, string);
    static void  sumaMatriz(nodo *listaA ,string, nodo *listaB, string, int);
    static void  sumaMatriz2(nodo *listaA ,string, nodo *listaB, string, int);
    static void imprimirSuma();
    static void  restaMatriz(nodo *listaA ,string, nodo *listaB, string, int);
    static void  restaMatriz2(nodo *listaA ,string, nodo *listaB, string, int);
    static void imprimirResta();
    static int determinanteMatriz(nodo *lista, string , int t);
    static void imprimirDeterminante();
};
#endif //PROYECTO2PROGRA3_MATRICES_H
