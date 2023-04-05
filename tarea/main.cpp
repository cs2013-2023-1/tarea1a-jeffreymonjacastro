// =============================================================================
// Tarea 1a: Matrices Dinamicas, Constructores y Sobrecarga de Operadores
// =============================================================================
// 1. Utilizar unicamente los archivos de cabecera y codigo fuente provistos. Es
//    decir: main.cpp, foo.h y foo.cpp.
// 2. No se permite el uso de librerias adicionales.

#include "foo.h"

// Puede validar su codigo con la siguiente funcion main
int main(){
    srand(time(nullptr));

    Matriz2D m1(2,3);
    Matriz2D m2 = m1;
    Matriz2D m3 = t(m2);
    Matriz2D m4 = m1 * m3;

    cout << m1;
    cout << endl;
    cout << m3;
    cout << endl;
    cout << m4;
    cout << endl;

}