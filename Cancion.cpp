#include "pch.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include "Cancion.h"

Cancion::Cancion() : titulo(""), duracion(0), genero(""), compositor(nullptr), anioLanzamiento(0)
{
}
Cancion::Cancion(string titulo, int duracion, string genero, Artista* compositor, int anioLanzamiento)
{
    this->titulo = titulo;
    this->duracion = duracion;
    this->genero = genero;
    this->compositor = compositor;
    this->anioLanzamiento = anioLanzamiento;
}

Cancion::~Cancion()
{
}

string Cancion::getTitulo()
{
    return titulo;
}

void Cancion::setTitulo(string titulo)
{
    this->titulo = titulo;
}

int Cancion::getDuracion() 
{
    return duracion;
}

void Cancion::setDuracion(int duracion)
{
    this->duracion = duracion;
}

string Cancion::getGenero()
{
    return genero;
}

void Cancion::setGenero(std::string genero)
{
    this->genero = genero;
}

Artista* Cancion::getCompositor()
{
    return this->compositor;
}
int Cancion::getAnioLanzamiento() 
{
	return this->anioLanzamiento;
}

string Cancion::duracionFormato() {
    int minutos = duracion / 60;
    int segundos = duracion % 60;
    stringstream ss;
    ss << setw(2) << setfill('0') << minutos << ":"
        << setw(2) << setfill('0') << segundos;
    return ss.str();
}
void Cancion::mostrar(int indice) {
    cout << "[" << indice << "] "
        << titulo << " - " << compositor->getNombreArtistico()
        << " | " << duracionFormato()
        << " | " << genero 
		<< " | " << anioLanzamiento
        << endl;
}
