#ifndef PERSONA_H
#define PERSONA_H


class Persona{
    protected:
        int edad;
        char* nombre;

    public:
        Persona();
        Persona(int edad, char* nombre);
        Persona (const Persona &persona);
        ~Persona();
        int getEdad();
        char* getNombre();
        virtual void diHola();
};

class Alumno : public Persona{

    private: 
        int numAsignaturas;
        float* notas;
    
    public:
        Alumno();
        Alumno(int numAsignaturas, float* notas);
        Alumno(const Alumno &al);
        Alumno(int edad, char* nombre, int numAsignaturas, float* notas);

        ~Alumno();
        int getNumAsignaturas();
        float* getNotas();
        virtual void diHola();
    

};

#endif