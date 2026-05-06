#pragma once
#include <string>
using namespace std;
class Genero {
private:
    string nombre;
public:
    Genero();
    Genero(string nombre);
    ~Genero();

    string& getNombre() { return nombre; }

    void setNombre(string v) { nombre = v; }

    void mostrar();
};


