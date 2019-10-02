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
	virtual string getCedula() = 0;
	virtual string getNombreCompleto() = 0;
	virtual string getEmail() = 0;
	virtual string getTelefono() = 0;
	virtual void setCedula() = 0;
	virtual void setNombreCompleto() = 0;
	virtual void setEmail() = 0;
	virtual void setTelefono() = 0;


};
#endif // !_PERSONA_
