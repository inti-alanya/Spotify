#include "pch.h"
#include "Usuario.h"
#include <iostream>
using namespace std;
Usuario::Usuario(string nombre, string nombreUsuario, string email, int contrasena, bool suscripcion) : Persona(nombre)
{
	this->nombreUsuario = nombreUsuario;
	this->email = email;
	this->contrasena = contrasena;
	this->suscripcion = suscripcion;
	this->playlists = new Lista<Playlists*>();
}
Lista<Playlists*>* Usuario::getPlaylists() { return this->playlists; }

void Usuario::setPlaylists(Lista<Playlists*>* playlists) { this->playlists = playlists; }

string Usuario::getNombreUsuario() { return this->nombreUsuario; }
string Usuario::getEmail() { return this->email; }
int Usuario::getContrasena() { return this->contrasena; }
bool Usuario::getSuscripcion(){ return this->suscripcion; }
void Usuario::setSuscripcion(bool suscripcion) { this->suscripcion = suscripcion; }
void Usuario::mostrar() {
	cout << "Nombre: " << nombreUsuario << endl;
	cout << "Email: " << email << endl;
	cout << "Suscripcion: " << (suscripcion ? "Si" : "No") << endl;	
}