#pragma once
#include<iostream> 
#include<string.h> 

using namespace std;

class Alumno
{
    private:
        string nombre, codigoAlumno;
        int edad;
    public:
        Alumno(string, string, int);
        string getNombre();
        string getCodigoAlumno();
        int getEdad();
        void setNombre(string);
        void setCodigoAlumno(string);
        void setEdad(int);
        void datosAlumno();
};