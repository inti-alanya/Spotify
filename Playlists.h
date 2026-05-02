#pragma once
#include "Cancion.h"
#include "ListaDobleCircular.hpp"
#include "Usuario.h"
class Playlists
{
private:
	string nombre;
	ListaDobleCircular<Cancion*>* canciones;
	string fechaCreacion;
	Usuario* creador;
	bool modoRepeticion;
	bool visibilidad;
public:
	Playlists(string nombre, string fechaCreacion, Usuario* creador, bool modoRepeticion, bool visibilidad);
	string getNombre();
	void setNombre(string nombre);
	ListaDobleCircular<Cancion*>* getCanciones();
	void setCanciones(ListaDobleCircular<Cancion*>* canciones);
	string getFechaCreacion();
	Usuario* getCreador();
	bool getModoRepeticion();
	void setModoRepeticion(bool modoRepeticion);
	bool getVisibilidad();
	void setVisibilidad(bool visibilidad);
	void mostrar();
	void listarCanciones();

};

