#include"Socio.h"
Socio::Socio():Persona(){}
Socio::Socio(string cedula, string nombreCompleto, string email, string telefono):Persona(cedula,nombreCompleto,email,telefono){
	peso = 80.0;
	masaMuscular = 0.70;
	grasaCorporal = 0.30;
	tipoRutina = 1;
	rutina = nullptr;
}
Socio::~Socio(){}
string Socio::getCedula() { Persona::getCedula(); }
string Socio::getNombreCompleto() { Persona::getNombreCompleto(); }
string Socio::getEmail() { Persona::getEmail(); }
string Socio::getTelefono() { Persona::getTelefono(); }
void Socio::setCedula(string cedula) { Persona::setCedula(cedula); }
void Socio::setNombreCompleto(string nombre) { Persona::setNombreCompleto(nombre); }
void Socio::setEmail(string email) { Persona::setEmail(email); }
void Socio::setTelefono(string telefono) { Persona::setTelefono(telefono); }
float Socio::getPeso() { return peso; }
float Socio::getMasaMuscular() { return masaMuscular; }
float Socio::getGrasaCorporal() { return grasaCorporal; }
bool Socio::getTipoRutina() { return tipoRutina; }
Rutina* Socio::getRutina() { return rutina; }
void Socio::setPeso(float peso) { this->peso = peso; }
void Socio::setMasaMuscular(float masaM) { masaMuscular = masaM; }
void Socio::setGrasaCorporal(float grasaC) { grasaCorporal = grasaC; }
void Socio::setTipoRutina(int tipo) { tipoRutina = (tipo == 1)?true:false; }
void Socio::setRutina(Rutina* rutina) { this->rutina = rutina; }
