#ifndef _PERSONA_
#define _PERSONA_
#include<iostream>
#include<string>
using std::string;
class Persona {

private:
	string cedula;
	string nombreCompleto;
	string email;
	string telefono;
public:
	Persona();
	Persona(string,string,string,string);
	~Persona();
	string getCedula();
	string getNombreCompleto();
	string getEmail();
	string getTelefono();
	void setCedula();
	void setNombreCompleto();
	void setEmail();
	void setTelefono() ;


};
#endif // !_PERSONA_
