#include "Nodos.h"
////////////////////////////////////////////////////////////
//////Nodo Principal///////////////////////////////////////

Nodo::Nodo(Nodo* sig) {
	siguiente = sig;
}

void Nodo::setSigNodo(Nodo* sig) {
	siguiente = sig;
}

Nodo* Nodo::getSig() {
	return siguiente;
}

Nodo::~Nodo()
{
}

//////////////////////////////////////////////////////
//////Nodo Ejercicio/////////////////////////////////

NodoEjercicio::NodoEjercicio(Ejercicio* ejer, Nodo* sig) :Nodo(sig) {
	ejercicio = new Ejercicio(); //se pueden setear los parametros desde aqui
	ejercicio = ejer;
}

void NodoEjercicio::setEjercicio(Ejercicio* ejer) {
	ejercicio = ejer;

}

Ejercicio* NodoEjercicio::getEjercicio() {
	return ejercicio;
}

Nodo* NodoEjercicio::getSig() {
	return Nodo::getSig();
}
void NodoEjercicio::setSigNodo(Nodo* nuevo) {
	Nodo::setSigNodo(nuevo);
}

NodoEjercicio::~NodoEjercicio()
{
}

////////////////////////////////////////////////////
//////Nodo Persona/////////////////////////////////

NodoPersona::NodoPersona(Persona* per, Nodo* sig):Nodo(sig) {
	persona = new Persona(); //se pueden setear los parametros desde aqui
	persona = per;
}

void NodoPersona::setPersona(Persona* per) {
	persona = per;

}

Persona* NodoPersona::getPersona() {
	return persona;
}

NodoPersona::~NodoPersona()
{
}