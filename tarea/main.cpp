// =============================================================================
// Tarea 1a: Matrices Dinamicas, Constructores y Sobrecarga de Operadores
// =============================================================================
// 1. Utilizar unicamente los archivos de cabecera y codigo fuente provistos. Es
//    decir: main.cpp, foo.h y foo.cpp.
// 2. No se permite el uso de librerias adicionales.

#include "foo.h"

// Puede validar su codigo con la siguiente funcion main

auto random(int x, int y){ return rand() % (y-x+1) + x;}

int main(){
    srand(time(nullptr));

    Matriz2D m1(5,6);
    Matriz2D m2 = m1 / 5;
    cout << (m2.getFilas() == 5) << endl;
    cout << (m2.getColumnas() == 6) << endl;

    cout << m1 << endl;
    cout << endl;
    cout << m2 << endl;
    cout << endl;

    int i = random(0,4);
    int j = random(0,5);

    cout << i << " " << j << endl;

    cout << m2.get(i,j) << endl;

    cout << m1.get(i,j) / 5 << endl;

    if(m2.get(i,j) == (m1.get(i,j) / 5))
        cout << "True" << endl;
    else
        cout << "False" << endl;

}