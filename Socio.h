#ifndef _SOCIO_
#define _SOCIO_
#include"Rutina.h"
class Socio :Persona {
private:
	float peso;
	float masaMuscular;
	float grasaCorporal;
	bool tipoRutina;
	Rutina* rutina;
public:
	Socio();
	Socio(string, string, string, string );
	~Socio();
	string getCedula();
	string getNombreCompleto();
	string getEmail();
	string getTelefono();
	void setCedula(string);
	void setNombreCompleto(string);
	void setEmail(string);
	void setTelefono(string);
	float getPeso();
	float getMasaMuscular();
	float getGrasaCorporal();
	bool getTipoRutina();
	Rutina* getRutina();
	void setPeso(float);
	void setMasaMuscular(float);
	void setGrasaCorporal(float);
	void setTipoRutina(bool);
	void setRutina(Rutina*);

};
#endif // !_SOCIO_

