#pragma once
#include "Persona.h"
#include <string>
#include <iostream>
#include "Lista.hpp"
#include "Album.h"
class Artista :
    public Persona
{
private:
	string nombreArtistico;
	Lista<Album*>* albums;
public:
	Artista(string nombre, string pais, string nombreArtistico);
	string getNombreArtistico();
	Lista<Album*>* getAlbums();
	void setAlbums(Lista<Album*>* albums);
	void mostrar() override;
};

