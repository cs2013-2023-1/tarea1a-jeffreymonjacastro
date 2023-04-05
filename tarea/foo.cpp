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
    Matriz2D result;
    
    result.filas = m.columnas;
    result.columnas = m.filas;
    result.ptr = new float*[result.filas];
    
    for(int i = 0; i < result.filas; i++){
        result.ptr[i] = new float[result.columnas];
    }

    for (int i = 0; i < result.filas; ++i) {
        for (int j = 0; j < result.columnas; ++j) {
            result.ptr[i][j] = m.ptr[j][i];
        }
    }
    
    return result;
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
    Matriz2D result(m1.filas, m1.columnas);

    if(m1.filas == m2.filas && m1.columnas == m2.columnas){
        for (int i = 0; i < result.filas; ++i) {
            for (int j = 0; j < result.columnas; ++j) {
                result.ptr[i][j] = m1.ptr[i][j] + m2.ptr[i][j];
            }
        }

        return result;

    } else {
        cout << "Error: las matrices deben ser del mismo tamanio" << endl;

        result.ptr = nullptr;
    }

    return result;
}

Matriz2D operator-(const Matriz2D& m1, const Matriz2D& m2){
    // Sobrecarga del operador -
    Matriz2D result(m1.filas, m1.columnas);

    if(m1.filas == m2.filas && m1.columnas == m2.columnas){
        for (int i = 0; i < result.filas; ++i) {
            for (int j = 0; j < result.columnas; ++j) {
                result.ptr[i][j] = m1.ptr[i][j] - m2.ptr[i][j];
            }
        }
    } else {
        cout << "Error: las matrices deben ser del mismo tamanio" << endl;

        result.ptr = nullptr;
    }

    return result;
}

Matriz2D operator*(const Matriz2D& m1, const Matriz2D& m2){
    // Sobrecarga del operador *
    Matriz2D result(m1.filas, m2.columnas);

    if(m1.columnas == m2.filas){
        for (int i = 0; i < result.filas; ++i) {
            for (int j = 0; j < result.filas; ++j) {
                result.ptr[i][j] = 0.0;
            }
        }

        for (int i = 0; i < result.filas; ++i) {
            for (int j = 0; j < result.columnas; ++j) {
                for (int k = 0; k < m1.columnas; ++k) {
                    result.ptr[i][j] += m1.ptr[i][k] * m2.ptr[k][j];
                }
            }
        }
    } else {
        cout << "Error: las matrices deben ser del mismo tamanio" << endl;

        result.ptr = nullptr;
    }

    return result;
}

Matriz2D operator+(const Matriz2D& m, float n){
    // Sobrecarga del operador +
    Matriz2D result(m.filas, m.columnas);

    for (int i = 0; i < result.filas; ++i) {
        for (int j = 0; j < result.columnas; ++j) {
            result.ptr[i][j] = m.ptr[i][j] + n;
        }
    }

    return result;
}

Matriz2D operator-(const Matriz2D& m, float n){
    // Sobrecarga del operador -
    Matriz2D result(m.filas, m.columnas);

    for (int i = 0; i < result.filas; ++i) {
        for (int j = 0; j < result.columnas; ++j) {
            result.ptr[i][j] = m.ptr[i][j] - n;
        }
    }

    return result;
}

Matriz2D operator*(const Matriz2D& m, float n){
    // Sobrecarga del operador *
    Matriz2D result(m.filas, m.columnas);

    for (int i = 0; i < result.filas; ++i) {
        for (int j = 0; j < result.columnas; ++j) {
            result.ptr[i][j] = m.ptr[i][j] * n;
        }
    }

    return result;
}

Matriz2D operator/(const Matriz2D& m, float n){
    // Sobrecarga del operador /
    Matriz2D result(m.filas, m.columnas);

    for (int i = 0; i < result.filas; ++i) {
        for (int j = 0; j < result.columnas; ++j) {
            result.ptr[i][j] = m.ptr[i][j] / n;
        }
    }

    return result;
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