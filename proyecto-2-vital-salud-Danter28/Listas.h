#include "Nodos.h"

#ifndef _LISTAEJERCICIOS_
#define _LISTAEJERCICIOS_
class ListaEjercicios {
private:
	NodoEjercicio* primero;
	NodoEjercicio* actual;
public:
	ListaEjercicios(void);
	~ListaEjercicios(void);
	bool listaVacia();
	string toString();
	void insertarEjercicio(Ejercicio*);
	void eliminaEjercicio(Ejercicio*);
	void ActualizaEjercicio(Ejercicio*);
	Ejercicio* encuentraEjercicio(string);
	string buscarEjercicio(string);
};
#endif // !_LISTAEJERCICIOS_


class ListaPersonas{
private:
	Nodo* primero;
	Nodo* actual;
public:
	ListaPersonas(void);
	~ListaPersonas(void);
	bool listaVacia();
	string toString();
	void insertaPersona(Persona*);
	void eliminaPersona(Persona*);
	void ActualizaPersona(Persona*);
	Persona* encuentraPersona(/*parametro de busqueda*/);
	string buscarPersona(/*parametro de busqueda*/);

};

