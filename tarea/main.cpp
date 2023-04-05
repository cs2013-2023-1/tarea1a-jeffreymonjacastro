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

    Matriz2D m3(2);

    Matriz2D m4(2);

    Matriz2D m7 = m3 + m4;    // Suma de matrices
    Matriz2D m8 = m3 - m4;    // Resta de matrices
    Matriz2D m9 = m3 * m4;    // Multiplicación de matrices

    Matriz2D m10 = m3 + 3;
    Matriz2D m11 = m3 - 1.2;
    Matriz2D m12 = m3 * 5;
    Matriz2D m13 = m3 / 7;

    cout << m3;
    cout << endl;
    cout << m4;
    cout << endl;
    cout << m7;
    cout << endl;
    cout << m8;
    cout << endl;
    cout << m9;
    cout << endl;
    cout << m10;
    cout << endl;
    cout << m11;
    cout << endl;
    cout << m12;
    cout << endl;
    cout << m13;
    cout << endl;

}