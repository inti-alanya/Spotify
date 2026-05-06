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
	string email;
	int contrasena;
	bool suscripcion;
public:
	Usuario(string nombre, string nombreUsuario, string email, int contrasena, bool suscripcion);
	Lista<Playlists*>* getPlaylists();
	void setPlaylists(Lista<Playlists*>* playlists);
	string getNombreUsuario();
	string getEmail();
	int getContrasena();
	bool getSuscripcion();
	void setSuscripcion(bool suscripcion);
	void mostrar() override;

};

