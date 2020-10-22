#include<iostream>
#include"arreglodinamico.h"

using namespace std;

int main(){

    ArregloDinamico arreglo;

    arreglo.insertar_final("Mi nombre");
    arreglo.insertar_final("es");
    arreglo.insertar_final("Ulises");
    arreglo.insertar_final("Daniel");
    arreglo.insertar_final("y esta");
    arreglo.insertar_final("es mi");
    arreglo.insertar_final("actividad");
    arreglo.insertar_final("numero 12.");

    for(size_t i = 0; i<arreglo.size(); i++){
        cout << arreglo[i] <<" ";
    }
    cout << endl << endl;

    arreglo.insertar_inicio("a todas y todos.");
    arreglo.insertar_inicio("Hola buenas tardes");

    for(size_t i = 0; i<arreglo.size(); i++){
        cout << arreglo[i] <<" ";
    }
    cout << endl << endl;

    return 0;
}