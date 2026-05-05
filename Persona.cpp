#include "pch.h"
#include "Persona.h"
Persona::Persona(string nombre, string pais) {
	this->nombre = nombre;
	this->pais = pais;
}
string Persona::getNombre() {
	return this->nombre;
}
string Persona::getPais() {
	return this->pais;
}