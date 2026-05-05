#include "pch.h"
#include "Playlists.h"
Playlists::Playlists(string nombre, string fechaCreacion, Usuario* creador, bool modoRepeticion, bool visibilidad) {
	this->nombre = nombre;
	this->fechaCreacion = fechaCreacion;
	this->creador = creador;
	this->modoRepeticion = modoRepeticion;
	this->visibilidad = visibilidad;
	this->canciones = new ListaDobleCircular<Cancion*>();
}
string Playlists::getNombre() {
    return nombre;
}
void Playlists::setNombre(string nombre) {
    this->nombre = nombre;
}
ListaDobleCircular<Cancion*>* Playlists::getCanciones() {
    return canciones;
}
void Playlists::setCanciones(ListaDobleCircular<Cancion*>* canciones) {
    this->canciones = canciones;
}
string Playlists::getFechaCreacion() {
    return fechaCreacion;
}
Usuario* Playlists::getCreador() {
    return creador;
}
bool Playlists::getModoRepeticion() {
    return modoRepeticion;
}
void Playlists::setModoRepeticion(bool modoRepeticion) {
    this->modoRepeticion = modoRepeticion;
}
bool Playlists::getVisibilidad() {
    return visibilidad;
}
void Playlists::setVisibilidad(bool visibilidad) {
    this->visibilidad = visibilidad;
}
void Playlists::mostrar() {
    cout << "Nombre: " << nombre << endl;
    cout << "Fecha de Creacion: " << fechaCreacion << endl;
    cout << "Creador: " << creador->getNombre() << endl;
    cout << "Modo Repeticion: " << (modoRepeticion ? "Activado" : "Desactivado") << endl;
    cout << "Visibilidad: " << (visibilidad ? "Publica" : "Privada") << endl;
}
void Playlists::listarCanciones() {
    if (canciones == nullptr)
    {
        cout << "no hay musicas en la playlist" << endl; 
        return;
    }
    
}