#ifndef _PERSONA_H
#define _PERSONA_H

class Persona
{
	char *nombre;
	int edad;

public:
	Persona(const char* nombre, int edad);
	Persona(const Persona &p);
	virtual ~Persona();

	virtual void diHola();
	void diAdios();

	const char* getNombre();
	int getEdad();
};

#endif




