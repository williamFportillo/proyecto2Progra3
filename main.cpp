#include <iostream>
#include "matrices.h"
using namespace std;

int main() {
    string archivoa;
    string archivob;
    nodo *listaA=0;
    nodo *listaB=0;
    int opc=0;
    int opc2=0;
    int tamano;
    do{
        cout <<"------ OPERACIONES CON MATRICES -------"<<endl;
        cout <<"1. Operaciones Matematicas: "<<endl;
        cout <<"2. Salir"<<endl;
        cout <<"Ingrese una opcion: ";
        cin >>opc2;
        switch (opc2){
            case 1:
                do{
                    cout <<"------ OPERACIONES MATEMATICAS -------"<<endl;
                    cout <<"1. Suma de matrices"<<endl;
                    cout <<"2. Resta de matrices"<<endl;
                    cout <<"3. Multiplicacion de matrices"<<endl;
                    cout <<"4. Calculo de determinante"<<endl;
                    cout <<"5. atras"<<endl;

                    cout <<"Ingrese una opcion: ";
                    cin >>opc;

                    switch (opc) {
                        case 1:
                            cout <<"Ingresar el tamaño de la matriz:"<<endl;
                            cin >> tamano;
                            do{

                                cout <<endl<< "Ingrese el nombre del archivo de la Matriz A: ";
                                cin >> archivoa;
                                while(archivoa=="a.dat"||archivoa=="b.dat"||archivoa=="B.dat"){
                                    cout << "Error al abrir el archivo [ " << archivoa << " ]" << endl;
                                    cout << "(Recordatorio... el formato del archivo debe ser .dat)" << endl;
                                    cout << endl << "Ingrese el nombre del archivo de la Matriz A: ";
                                    cin >> archivoa;
                                }
                                matrices::consultarMatriz(archivoa,listaA);
                                matrices::imprimir(tamano,listaA,archivoa);
                            }while(archivoa!="A.dat");
                            do{
                                cout << endl << "Ingrese el nombre del arhivo de la Matriz B: ";
                                cin >> archivob;
                                while(archivob=="a.dat"||archivob=="b.dat"||archivob=="A.dat"){
                                    cout << "Error al abrir el archivo [ " << archivob << " ]" << endl;
                                    cout << "(Recordatorio... el formato del archivo debe ser .dat)" << endl;
                                    cout << endl << "Ingrese el nombre del archivo de la Matriz B: ";
                                    cin >> archivob;
                                }
                                matrices::consultarMatriz(archivob,listaB);
                                matrices::imprimir(tamano,listaB,archivob);
                            }while(archivob!="B.dat");
                            if(tamano==3){
                                matrices::sumaMatriz(listaA,archivoa,listaB,archivob,tamano);
                            }if(tamano== 2){
                        matrices::sumaMatriz2(listaA,archivoa,listaB,archivob,tamano);
                    }

                            cout<<endl<<"--------------La suma total de las matrices es: -----------"<<endl;
                            matrices::imprimirSuma();

                            break;
                        case 2:
                            cout <<"Ingresar el tamaño de la matriz:"<<endl;
                            cin >> tamano;
                            do{
                                cout <<endl<< "Ingrese el nombre del archivo de la Matriz A: ";
                                cin >> archivoa;
                                while(archivoa=="a.dat"||archivoa=="b.dat"||archivoa=="B.dat"){
                                    cout << "Error al abrir el archivo [ " << archivoa << " ]" << endl;
                                    cout << "(Recordatorio... el formato del archivo debe ser .dat)" << endl;
                                    cout << endl << "Ingrese el nombre del archivo de la Matriz A: ";
                                    cin >> archivoa;
                                }
                                matrices::consultarMatriz(archivoa,listaA);
                                matrices::imprimir(tamano,listaA,archivoa);
                            }while(archivoa!="A.dat");
                            do{
                                cout << endl << "Ingrese el nombre del arhivo de la Matriz B: ";
                                cin >> archivob;
                                while(archivob=="a.dat"||archivob=="b.dat"||archivob=="A.dat"){
                                    cout << "Error al abrir el archivo [ " << archivob << " ]" << endl;
                                    cout << "(Recordatorio... el formato del archivo debe ser .dat)" << endl;
                                    cout << endl << "Ingrese el nombre del archivo de la Matriz B: ";
                                    cin >> archivob;
                                }
                                matrices::consultarMatriz(archivob,listaB);
                                matrices::imprimir(tamano,listaB,archivob);
                            }while(archivob!="B.dat");
                            if(tamano==3){
                                matrices::restaMatriz(listaA,archivoa,listaB,archivob,tamano);
                            }if(tamano== 2){
                        matrices::restaMatriz2(listaA,archivoa,listaB,archivob,tamano);
                    }

                            cout<<endl<<"--------------La resta total de las matrices es: -----------"<<endl;
                        matrices::imprimirResta();
                            break;
                        case 3:
                            cout <<"Ingresar el tamaño de la matriz:"<<endl;
                            cin >> tamano;
                            do{
                                cout <<endl<< "Ingrese el nombre del archivo de la Matriz A: ";
                                cin >> archivoa;
                                while(archivoa=="a.dat"||archivoa=="b.dat"||archivoa=="B.dat"){
                                    cout << "Error al abrir el archivo [ " << archivoa << " ]" << endl;
                                    cout << "(Recordatorio... el formato del archivo debe ser .dat)" << endl;
                                    cout << endl << "Ingrese el nombre del archivo de la Matriz A: ";
                                    cin >> archivoa;
                                }
                                matrices::consultarMatriz(archivoa,listaA);
                                matrices::imprimir(tamano,listaA,archivoa);
                            }while(archivoa!="A.dat");
                            do{
                                cout << endl << "Ingrese el nombre del arhivo de la Matriz B: ";
                                cin >> archivob;
                                while(archivob=="a.dat"||archivob=="b.dat"||archivob=="A.dat"){
                                    cout << "Error al abrir el archivo [ " << archivob << " ]" << endl;
                                    cout << "(Recordatorio... el formato del archivo debe ser .dat)" << endl;
                                    cout << endl << "Ingrese el nombre del archivo de la Matriz B: ";
                                    cin >> archivob;
                                }
                                matrices::consultarMatriz(archivob,listaB);
                                matrices::imprimir(tamano,listaB,archivob);
                            }while(archivob!="B.dat");
                            cout<<endl<<"--------------La multiplicacion de las matrices es:  -----------"<<endl;
                            break;
                        case 4:
                            cout <<"Ingresar el tamaño de la matriz:"<<endl;
                            cin >> tamano;
                            do{
                                cout <<endl<< "Ingrese el nombre del archivo de la Matriz A: ";
                                cin >> archivoa;
                                while(archivoa=="a.dat"||archivoa=="b.dat"||archivoa=="B.dat"){
                                    cout << "Error al abrir el archivo [ " << archivoa << " ]" << endl;
                                    cout << "(Recordatorio... el formato del archivo debe ser .dat)" << endl;
                                    cout << endl << "Ingrese el nombre del archivo de la Matriz A: ";
                                    cin >> archivoa;
                                }
                                matrices::consultarMatriz(archivoa,listaA);
                                matrices::imprimir(tamano,listaA,archivoa);
                            }while(archivoa!="A.dat");
                            matrices::determinanteMatriz(listaA,archivoa,tamano);
                            cout<<endl<<"--------------La determinante de la matriz  es:  -----------"<<endl;
                            matrices::imprimirDeterminante();
                            break;
                    }
                }while(opc!=5);
                break;
            case 2:
                return  0;
                break;
        }
    }while(opc!=2);


}