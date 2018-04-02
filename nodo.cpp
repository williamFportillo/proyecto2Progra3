//
// Created by WilliamPC on 31/3/2018.
//

#include "nodo.h"
#include <iostream>

/*
void insertarFinalR(nodo ** actual , nodo * nuevo) {
    if (*actual == 0) {
        *actual = nuevo;
    } else if ((*actual)->sig == 0) {
        nuevo->ant = *actual;
        insertarFinalR(&(*actual)->sig, nuevo);
    } else
        insertarFinalR(&(*actual)->sig, nuevo);
}
 */

/*
void imprimirLista(nodo ** actual){
    if(*actual ==0 ){
        return;
    }else{
        std::cout<<(*actual)->valor<<" ";
        imprimirLista(&(*actual)->sig);
    }
}
*/
void insertarNodo(nodo *&lista, nodo * n) {
    nodo *nuevo;
    nuevo =n;
    nodo *aux1=lista;
    nodo *aux2;
    while((aux1!=NULL)){
aux2=aux1;
        aux1=aux1->sig;
    }
    if(lista==aux1){
        lista=nuevo;
    }
    else{
        aux2->sig=nuevo;
    }

    nuevo->sig=aux1;
  //  int cont=0;
   /*while(actual!=0){
    std::cout << actual->valor << " ";

    actual = actual->sig;
    */
       //cont++;

    }


/*void mostrarLista(nodo *lista){
    nodo *actual = new nodo();
    actual=lista;

    while(actual!=NULL){
        std::cout <<actual->valor<<" ";
        actual = actual->sig;
    }
}
 */