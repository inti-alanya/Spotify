#include "pch.h"
#include "Artista.h"

Artista::Artista(string nombre, string pais, string nombreArtistico) : Persona(nombre, pais) {
	this->nombreArtistico = nombreArtistico;
	this->albums = new Lista<Album*>();
}
string Artista::getNombreArtistico() {
	return this->nombreArtistico;
}
Lista<Album*>* Artista::getAlbums() {
	return this->albums;
}
void Artista::setAlbums(Lista<Album*>* albums) {
	this->albums = albums;
}
void Artista::mostrar() {
	cout << "Nombre: " << getNombre() << endl;
	cout << "Pais: " << getPais() << endl;
	cout << "Nombre Artistico: " << getNombreArtistico() << endl;
}