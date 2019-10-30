#include "Nodos.h"

#ifndef _LISTAEJERCICIO_
#define _LISTAEJERCICIO_
class ListaEjercicio {
private:
	NodoEjercicio* primero;
	NodoEjercicio* actual;
public:
	ListaEjercicio(void);
	~ListaEjercicio(void);
	bool listaVacia();
	string toString();
	void insertarEjercicio(Ejercicio*);
	void eliminaEjercicio(Ejercicio*);
	void ActualizaEjercicio(Ejercicio*);
	Ejercicio* encuentraEjercicio(string);
	string buscarEjercicio(string);
};
#endif // !_LISTAEJERCICIOS_

