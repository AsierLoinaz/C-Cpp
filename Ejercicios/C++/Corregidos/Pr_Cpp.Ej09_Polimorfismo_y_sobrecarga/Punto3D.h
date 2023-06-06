#ifndef PUNTO3D_H_
#define PUNTO3D_H_

#include "Punto.h"

class Punto3D: public Punto {
private:
	int z;
public:
	Punto3D();
	Punto3D(int, int, int);
	virtual ~Punto3D();
	int getZ();
	void setZ(int);
	virtual void visualizar();

	Punto3D operator*(Punto3D&);
	Punto3D& operator*(int);
};

#endif /* PUNTO3D_H_ */
