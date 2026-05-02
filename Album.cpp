#include "pch.h"
#include "Album.h"

Album::Album():canciones() {}

Album::~Album() {}

Lista<Cancion*>* Album::getCanciones() { return canciones; }

void Album::setCanciones(Lista<Cancion*>* canciones) { this->canciones = canciones; }

void Album::mostrar(int indice) {
cout << "["<<indice<<"]" << 
nombre << endl;