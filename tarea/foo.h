#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

class Matriz2D{
private:
    float** ptr;
    int filas;
    int columnas;

public:
    Matriz2D();
    Matriz2D(int);
    Matriz2D(int, int);
    Matriz2D(const Matriz2D&);
    Matriz2D(Matriz2D&&);

    float get(int, int);
    int getFilas();
    int getColumnas();

// Funciones Amigas
friend Matriz2D t(Matriz2D&);
friend ostream& operator<<(ostream&, const Matriz2D&);
friend Matriz2D operator+(const Matriz2D&, const Matriz2D&);
friend Matriz2D operator-(const Matriz2D&, const Matriz2D&);
friend Matriz2D operator*(const Matriz2D&, const Matriz2D&);
friend Matriz2D operator+(const Matriz2D&, float);
friend Matriz2D operator-(const Matriz2D&, float);
friend Matriz2D operator*(const Matriz2D&, float);
friend Matriz2D operator/(const Matriz2D&, float);

};

