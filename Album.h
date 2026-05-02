#pragma once
#include "Lista.hpp"
#include "Cancion.h"
using namespace System;
using namespace std;
class Album
{
private:
	Lista<Cancion*>* canciones;
	string nombre;
public:
	Album();
	~Album();
	Lista<Cancion*>* getCanciones();
	void setCanciones(Lista<Cancion*>* canciones);
	void mostrar(int indice);
};

