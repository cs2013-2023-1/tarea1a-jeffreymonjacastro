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
            ptr[i][j] = rand()%100 / 100.0;
        }
    }
}

Matriz2D::Matriz2D(int n){
    // Constructor con un parametro
    filas = n;
    columnas = n;
    ptr = new float*[filas];

    for(int i = 0; i < filas; i++){
        ptr[i] = new float[columnas];
    }

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            ptr[i][j] = rand()%100 / 100.0;
        }
    }
}

Matriz2D::Matriz2D(int n, int m){
    // Constructor con dos parametros
    filas = n;
    columnas = m;
    ptr = new float*[filas];

    for(int i = 0; i < filas; i++){
        ptr[i] = new float[columnas];
    }

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            ptr[i][j] = rand()%100 / 100.0;
        }
    }
}

Matriz2D::Matriz2D(const Matriz2D& m){
    // Constructor de copia
    filas = m.filas;
    columnas = m.columnas;

    ptr = new float*[filas];

    for(int i = 0; i < filas; i++){
        ptr[i] = new float[columnas];
    }

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            ptr[i][j] = m.ptr[i][j];
        }
    }
}

Matriz2D::Matriz2D(Matriz2D&& m){
    // Constructor de movimiento
    filas = m.filas;
    columnas = m.columnas;

    ptr = new float*[filas];

    for(int i = 0; i < filas; i++){
        ptr[i] = new float[columnas];
    }

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            ptr[i][j] = m.ptr[i][j];
        }
    }

    m.filas = 0;
    m.columnas = 0;

    for(int i = 0; i < filas; i++){
        delete [] m.ptr[i];
    }

    delete[] m.ptr;
    m.ptr = nullptr;
}

Matriz2D t(Matriz2D& m){
    // Transpuesta de una matriz
    Matriz2D newM;
    
    newM.filas = m.filas;
    newM.columnas = m.columnas;
    newM.ptr = new float*[newM.filas];
    
    for(int i = 0; i < newM.filas; i++){
        newM.ptr[i] = new float[newM.columnas];
    }

    for (int i = 0; i < newM.filas; ++i) {
        for (int j = 0; j < newM.columnas; ++j) {
            newM.ptr[i][j] = m.ptr[j][i];
        }
    }
    
    return newM;
}

std::ostream& operator<<(std::ostream& os, const Matriz2D& m){
    // Sobrecarga del operador <<
    for(int i = 0; i < m.filas; i++){
        for(int j = 0; j < m.columnas; j++){
            os << fixed << setprecision(2) << m.ptr[i][j] << " ";
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