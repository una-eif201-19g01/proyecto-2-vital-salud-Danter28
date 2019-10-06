#include"Rutina.h"
Rutina::Rutina(){}
Rutina::Rutina(string objetivo, int tamanno) :objetivo(objetivo), tamanno(tamanno) { cantidad = 0;
for (int recorrer = 0; recorrer < tamanno; recorrer++) {

}
}
Rutina::~Rutina(){}
int Rutina::getCantidad() { return cantidad; }
int Rutina::getTamanno() { return tamanno; }
void Rutina::setTamanno(int tamanno) {
	this->tamanno = tamanno;
	if (tamanno > this->tamanno) {
		for (int annadir = cantidad; annadir < tamanno) {

		}
	}
	if (tamanno < this->tamanno) {
		int diferencia = this->tamanno - tamanno;
		while (diferencia > 0) {
			if (cantidad == tamanno)cantidad--;
			delete ejercicios[diferencia];
			diferencia--;
		}
	}
}
void Rutina::agregarEjercicio(Ejercicio*){}
void Rutina::eliminarEjercicio(){}