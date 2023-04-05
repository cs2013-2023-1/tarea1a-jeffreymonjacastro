#include "foo.h"

Matriz2D::Matriz2D(){
    // Constructor por defecto
    filas = 3;
    columnas = 3;
    ptr = new float*[filas];

    for(int i = 0; i < filas; i++){
        ptr[i] = new float[columnas];
    }

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            ptr[i][j] = rand()%;
        }
    }
}

Matriz2D::Matriz2D(int n){
    // Constructor con un parametro
}

Matriz2D::Matriz2D(int n, int m){
    // Constructor con dos parametros
}

Matriz2D::Matriz2D(const Matriz2D& m){
    // Constructor de copia
}

Matriz2D::Matriz2D(Matriz2D&& m){
    // Constructor de movimiento
}

Matriz2D t(Matriz2D& m){
    // Transpuesta de una matriz
}

std::ostream& operator<<(std::ostream& os, const Matriz2D& m){
    // Sobrecarga del operador <<
    for(int i = 0; i < m.filas; i++){
        for(int j = 0; j < m.columnas; j++){
            os << m.ptr[i][j] << " ";
        }

        os << endl;
    }

    return os;
}

Matriz2D operator+(const Matriz2D& m1, const Matriz2D& m2){
    // Sobrecarga del operador +
}

Matriz2D operator-(const Matriz2D& m1, const Matriz2D& m2){
    // Sobrecarga del operador -
}

Matriz2D operator*(const Matriz2D& m1, const Matriz2D& m2){
    // Sobrecarga del operador *
}

Matriz2D operator+(const Matriz2D& m, float n){
    // Sobrecarga del operador +
}

Matriz2D operator-(const Matriz2D& m, float n){
    // Sobrecarga del operador -
}

Matriz2D operator*(const Matriz2D& m, float n){
    // Sobrecarga del operador *
}

Matriz2D operator/(const Matriz2D& m, float n){
    // Sobrecarga del operador /
}

float Matriz2D::get(int i, int j){
    return ptr[i][j];
}

int Matriz2D::getFilas(){
    return filas;
}

int Matriz2D::getColumnas(){
    return columnas;
}