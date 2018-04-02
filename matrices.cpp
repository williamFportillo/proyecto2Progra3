//
// Created by WilliamPC on 27/3/2018.
//
#include "matrices.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include "nodo.h"
using namespace std;

void matrices::consultarMatriz(string nombre, nodo*lista) {
    ifstream archivoMatrices(nombre, ios::in);
    if (!archivoMatrices) {
        cout << "Error al abrir el archivo [ " << nombre << " ]" << endl;
        cout <<"(Recordatorio... el formato del archivo debe ser .dat)"<<endl;
        return;
    }
    //string ma;
    // int linea = 0;
    nodo *nuevo=new nodo;
    int te;

    while (!archivoMatrices.eof()) {
        while(archivoMatrices>>te){
            nuevo->valor=te;
             insertarNodo(lista,nuevo);
        }
    }

    // getline(archivoMatrices, te);
    //linea++;
    // te += '\n';
    //cout << te;
    //cout <<"Cantidad de lineas: "<<linea<<endl;
    archivoMatrices.close();
}

void matrices::imprimir(int t, nodo *lista, string nombre) {
    ifstream archivoMatrices(nombre,ios::in);
    int valor;

    if (!archivoMatrices){
        cout<<"Error al leer Archivo";
        return;
    }
    int cont=0;
    while(archivoMatrices>>valor){
        if(cont!=t){
            if(valor==0){
                continue;
            }
            cont ++;
            cout<<valor <<" ";
        }else {
            cont=0;
            cout<<endl<<valor<<" ";
            cont++;

        }
    }
    cout<<endl;
    archivoMatrices.close();
}

void matrices::sumaMatriz(nodo *listaA , string nombreA , nodo *listaB ,string nombreB , int t)  {
    ofstream sumaMatrices("suma.dat");
    ifstream matrizA(nombreA,ios::in);
    ifstream matrizB(nombreB,ios::in);
    int valor1;
    int valor2;
    if (!matrizA && !matrizB){
        cout<<"Error al leer Archivo";
        return;
    }
    int cont=0;
    int slinea=0;


    while(matrizA>>valor1 && matrizB>>valor2){
        if(cont!=t){
            if(valor1==0 && valor2==0){
                continue;
            }
            cont ++;
            //cout<<(valor1+valor2)<<" ";
            if(slinea==3) {
                sumaMatrices<<'\n';

                slinea=0;

            }
            sumaMatrices<<valor1+valor2<<' ';
            slinea++;
        }else {
            cont=0;
            // cout<<endl<<(valor1+valor2)<<" ";
            if(slinea==3) {
                sumaMatrices<<'\n';

                slinea=0;

            }
            slinea++;
            sumaMatrices<<valor1+valor2<<' ';
            cont++;
        }
    }
    cout<<endl;
    matrizA.close();
    matrizB.close();
    sumaMatrices.close();
}

void matrices::sumaMatriz2(nodo *listaA , string nombreA , nodo *listaB ,string nombreB , int t)  {
    ofstream sumaMatrices("suma.dat");
    ifstream matrizA(nombreA,ios::in);
    ifstream matrizB(nombreB,ios::in);
    int valor1;
    int valor2;
    if (!matrizA && !matrizB){
        cout<<"Error al leer Archivo";
        return;
    }
    int cont=0;
    int slinea=0;


    while(matrizA>>valor1 && matrizB>>valor2){
        if(cont!=t){
            if(valor1==0 && valor2==0){
                continue;
            }
            cont ++;
            //cout<<(valor1+valor2)<<" ";
            if(slinea==2) {
                sumaMatrices<<'\n';

                slinea=0;

            }
            sumaMatrices<<valor1+valor2<<' ';
            slinea++;
        }else {
            cont=0;
            // cout<<endl<<(valor1+valor2)<<" ";
            if(slinea==2) {
                sumaMatrices<<'\n';

                slinea=0;

            }
            slinea++;
            sumaMatrices<<valor1+valor2<<' ';
            cont++;
        }
    }
    cout<<endl;
    matrizA.close();
    matrizB.close();
    sumaMatrices.close();
}

void matrices::imprimirSuma() {
    ifstream archivoSuma("suma.dat",ios::in);
    string te;
    while(!archivoSuma.eof()){
        getline(archivoSuma, te);
         te += '\n';
         cout << te;
    }
archivoSuma.close();
}

void matrices::restaMatriz(nodo *listaA , string nombreA , nodo *listaB ,string nombreB , int t)  {
    ofstream restaMatrices("resta.dat");
    ifstream matrizA(nombreA,ios::in);
    ifstream matrizB(nombreB,ios::in);
    int valor1;
    int valor2;
    if (!matrizA && !matrizB){
        cout<<"Error al leer Archivo";
        return;
    }
    int cont=0;
    int slinea=0;
    while(matrizA>>valor1 && matrizB>>valor2){
        if(cont!=t){
            if(valor1==0 && valor2==0){
                continue;
            }
            cont ++;
            //cout<<(valor1-valor2)<<" ";
            if(slinea==3) {
                restaMatrices<<'\n';
                slinea=0;

            }
            restaMatrices<<valor1-valor2<<' ';
            slinea++;

        }else {
            cont=0;
            //cout<<endl<<(valor1-valor2)<<" ";
            if(slinea==3) {
                restaMatrices<<'\n';
                slinea=0;
            }
            slinea++;
            restaMatrices<<valor1-valor2<<' ';
            cont++;

        }
    }
    cout<<endl;
    matrizA.close();
    matrizB.close();
    restaMatrices.close();
}

void matrices::restaMatriz2(nodo *listaA , string nombreA , nodo *listaB ,string nombreB , int t)  {
    ofstream restaMatrices("resta.dat");
    ifstream matrizA(nombreA,ios::in);
    ifstream matrizB(nombreB,ios::in);
    int valor1;
    int valor2;
    if (!matrizA && !matrizB){
        cout<<"Error al leer Archivo";
        return;
    }
    int cont=0;
    int slinea=0;
    while(matrizA>>valor1 && matrizB>>valor2){
        if(cont!=t){
            if(valor1==0 && valor2==0){
                continue;
            }
            cont ++;
            //cout<<(valor1-valor2)<<" ";
            if(slinea==2) {
                restaMatrices<<'\n';
                slinea=0;

            }
            restaMatrices<<valor1-valor2<<' ';
            slinea++;

        }else {
            cont=0;
            //cout<<endl<<(valor1-valor2)<<" ";
            if(slinea==2) {
                restaMatrices<<'\n';
                slinea=0;
            }
            slinea++;
            restaMatrices<<valor1-valor2<<' ';
            cont++;

        }
    }
    cout<<endl;
    matrizA.close();
    matrizB.close();
    restaMatrices.close();
}
void matrices::imprimirResta() {
    ifstream archivoResta("resta.dat",ios::in);
    string te;
    while(!archivoResta.eof()){
        getline(archivoResta, te);
        te += '\n';
        cout << te;
    }
    archivoResta.close();
}



int matrices::determinanteMatriz(nodo *lista, string nombre, int t) {
    ofstream determinaMatrices("determinante.dat");
    ifstream determinanteMatrices(nombre, ios::in);
    if (!determinanteMatrices) {
        cout << "Error al abrir el archivo [ " << nombre << " ]" << endl;
        cout <<"(Recordatorio... el formato del archivo debe ser .dat)"<<endl;
        return -1;
    }
    int v;
    int cont=0;
    int total=0;
    if (t==2){
        int arr[4];

        while(determinanteMatrices>>v){
            arr[cont]=v;
            cont++;

        }
        total=((arr[0]*arr[3])-(arr[1]*arr[2]));
        determinaMatrices<<"Determinante: ";
        determinaMatrices<<total;
        //return total;
    }else if(t==3) {
        int arr[9];
        while (determinanteMatrices>>v){
            arr[cont]=v;
            cont++;
        }
        total=(((arr[0])*(arr[4]*arr[8])-(arr[5]*arr[7]))-((arr[1])*(arr[3]*arr[8])-(arr[5]*arr[6]))+
               ((arr[2])*(arr[3]*arr[7])-(arr[4]*arr[6])));
        determinaMatrices<<"Determinante: ";
        determinaMatrices<<total;
        //return total;
    }
    determinanteMatrices.close();
}

void matrices::imprimirDeterminante() {
    ifstream archivoDeterminante("determinante.dat",ios::in);
    string te;
    while(!archivoDeterminante.eof()){
        getline(archivoDeterminante, te);
        te += '\n';
        cout << te;
    }
    archivoDeterminante.close();
}