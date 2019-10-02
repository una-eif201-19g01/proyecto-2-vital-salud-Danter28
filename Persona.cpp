#include "Persona.h"
Persona::Persona():cedula("0"),nombreCompleto(" "),email(" "),telefono("0000-0000") {}
Persona::Persona(string cedula, string nombreCompleto, string email, string telefono):cedula(cedula),nombreCompleto(nombreCompleto),
email(email),telefono(telefono) {}
Persona::~Persona() {}