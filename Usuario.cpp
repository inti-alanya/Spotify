#include "pch.h"
#include "Usuario.h"
#include <iostream>
using namespace std;
Usuario::Usuario(string nombre, string pais, string nombreUsuario, int contrasena, bool suscripcion) : Persona(nombre, pais)
{
	this->nombreUsuario = nombreUsuario;
	this->contrasena = contrasena;
	this->suscripcion = suscripcion;
	this->playlists = new Lista<Playlists*>();
}
Lista<Playlists*>* Usuario::getPlaylists() { return this->playlists; }

void Usuario::setPlaylists(Lista<Playlists*>* playlists) { this->playlists = playlists; }

string Usuario::getNombreUsuario() { return this->nombreUsuario; }
int Usuario::getContrasena() { return this->contrasena; }
bool Usuario::getSuscripcion(){ return this->suscripcion; }
void Usuario::setSuscripcion(bool suscripcion) { this->suscripcion = suscripcion; }
void Usuario::mostrar() {
	cout << "Nombre: " << nombreUsuario << endl;
}