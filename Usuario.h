#pragma once
#include "Persona.h"
#include "Lista.hpp"
#include "Playlists.h"
class Usuario :
    public Persona
{
private:
	Lista<Playlists*>* playlists;
	string nombreUsuario;
	int contrasena;
	bool suscripcion;
public:
	Usuario(string nombre, string pais, string nombreUsuario, int contrasena, bool suscripcion);
	Lista<Playlists*>* getPlaylists();
	void setPlaylists(Lista<Playlists*>* playlists);
	string getNombreUsuario();
	int getContrasena();
	bool getSuscripcion();
	void setSuscripcion(bool suscripcion);
	void mostrar() override;

};

