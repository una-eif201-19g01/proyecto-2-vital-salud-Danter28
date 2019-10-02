#include"Socio.h"
Socio::Socio():Persona(){}
Socio::Socio(string cedula, string nombreCompleto, string email, string telefono):Persona(cedula,nombreCompleto,email,telefono){}
Socio::~Socio(){}
string Socio::getCedula(){}
string Socio::getNombreCompleto(){}
string Socio::getEmail(){}
string Socio::getTelefono(){}
void Socio::setCedula(string){}
void Socio::setNombreCompleto(string){}
void Socio::setEmail(string){}
void Socio::setTelefono(string){}
float Socio::getPeso(){}
float Socio::getMasaMuscular(){}
float Socio::getGrasaCorporal(){}
bool Socio::getTipoRutina(){}
Rutina* Socio::getRutina(){}
void Socio::setPeso(float){}
void Socio::setMasaMuscular(float){}
void Socio::setGrasaCorporal(float){}
void Socio::setTipoRutina(bool){}
void Socio::setRutina(Rutina*){}
