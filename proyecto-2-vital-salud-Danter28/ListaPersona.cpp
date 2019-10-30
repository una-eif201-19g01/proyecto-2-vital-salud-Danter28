#include "ListaPersona.h"


ListaPersona::ListaPersona() {
	primero = NULL;
	actual = NULL;
}


bool ListaPersona::listaVacia() { //retorna si la lista está vacía
	if (primero == NULL)
		return true;
	else
		return false;
}
void ListaPersona::insertaPersona(Persona* per) {  //En este metodo se inserta el Persona n en un nodo para posteriormente insertarlo en la lista, guardandolos.

	actual = primero;
	if (primero == NULL) //Si la lista está vacia,  se crea un nuevo nodo para iniciar la lista, insertando el Persona que entra por parametro.
		primero = new NodoPersona(per, NULL);

	else { //Caso contrario se inserta el elemento
		while (actual->getSig()) {
			actual = actual->getSig();
		}
		actual->setSig(new NodoPersona(per, actual->getSig()));
	}
}
void ListaPersona::eliminaPersona(Persona* n) {//Busca y elimina un nodo determinado de la lista
	NodoPersona* anterior = NULL;
	actual = primero;
	while (actual && actual->getPersona()->getNombreCompleto() != n->getNombreCompleto()) { //cambia segun los parametros de busqueda
		anterior = actual; //Se usa una auxiliar anterior para guardar el campo del nodo anterior al que se va a borrar
		actual = actual->getSig(); //Avanza por la lista hasta encontrar el Persona a borrar.
	}
	if (!actual || actual->getPersona()->getNombreCompleto() != n->getNombreCompleto())//Si no lo encontro, cambia segun los parametros de busqueda
		return; //
	else {//Borra el nodo
		if (!anterior)//si es el primer elemento
			primero = actual->getSig();
		else//si es un elemento intermedio o el ultimo
			anterior->setSig(actual->getSig());
		delete actual;
	}
}
string ListaPersona::toString() { // toString de la clase, obtiene todos nodos, les extrae los datos y los imprime en pantalla, cambia segun el contenido de los nodos
	stringstream s1;
	actual = primero;
	s1 << "\nNombre de curso:\n\n";
	while (actual != NULL) {
		s1 << actual->getObj()->toString() << endl;
		actual = actual->getSig();
	}
	return s1.str();
}

Persona* ListaPersona::encuentraPersona(string nom) { //Busca un Persona y lo devuelve a partir de un nombre que digite el usuario, cambia segun el contenido del nodo
	actual = primero;
	while (actual != NULL) {
		if (actual->getObj()->getNombre() == nom) {
			return actual->getObj();
			break;
		}
		actual = actual->getSig();
		if (actual == NULL)
			return NULL;
	}
}

string ListaPersona::buscarPersona(string nom) {//Busca un Persona y retorna la informacion de este, cambia segun el contenido del nodo
	actual = primero;
	while (actual != NULL) {
		if (actual->getPersona()->getNombreCompleto() == nom) {
			return actual->getPersona()->toString();
			break;
		}
		actual = actual->getSig();
		if (actual == NULL)
			return NULL;
	}
}

void ListaPersona::ActualizaPersona(Persona* nuevo) { //Actualiza la informacion de un Persona que se encuentre en esta clase, cambia segunel contenido del nodo
	actual = primero;
	while (actual != NULL) {
		if (actual->getObj()->getNombre() == nueva->getNombre()) {
			actual->setObj(nueva);
			break;
		}
		actual = actual->getSig();
	}
}

ListaPersona::~ListaPersona() { // Destructor de la clase 
	actual = primero;
	while (primero) {
		actual = primero;
		primero = primero->getSig();
		delete actual;
	}
	actual = NULL;
	primero = NULL;
}

