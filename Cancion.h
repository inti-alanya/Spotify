#pragma once
#include <iostream>
#include <string>
#include "Artista.h"
using namespace std;
class Cancion
{
private:
	string titulo;
	int duracion;
	string genero;
	Artista* compositor;
	int anioLanzamiento;

public:		
	Cancion();
	Cancion(string titulo, int duracion, string genero, Artista* compositor, int anioLanzamiento);
	~Cancion();

	string getTitulo();
	void setTitulo(string titulo);

	int getDuracion();
	void setDuracion(int duracion);

	string getGenero();
	void setGenero(string genero);

	Artista* getCompositor();

	int getAnioLanzamiento();

	string duracionFormato();

	void   mostrar(int indice);
};

