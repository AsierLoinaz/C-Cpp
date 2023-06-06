
#ifndef _ALUMNO_H_
#define _ALUMNO_H_

class Alumno
{
private:
	static int counter;

	int id;
	char *nombre;

public:
	Alumno(const char *nombre);
	~Alumno();
	Alumno(const Alumno &a);

	Alumno& operator=(const Alumno &a);

	int getID();
	char *getNombre();
};

#endif

