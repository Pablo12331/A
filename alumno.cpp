#include<iostream>
#include"alumno.h"

using namespace std;

Alumno::Alumno(string nombre, string codigoAlumno, int edad)
{
    this->nombre = nombre;
    this->codigoAlumno = codigoAlumno;
    this->edad = edad;
}

string Alumno::getNombre()
{
    return this->nombre;
}

string Alumno::getCodigoAlumno()
{
    return this->codigoAlumno;
}

int Alumno::getEdad()
{
    return this->edad;
}

void Alumno::setNombre(string nombre)
{
    this->nombre = nombre;
}
void Alumno::setCodigoAlumno(string codigoAlumno)
{
    this->codigoAlumno = codigoAlumno;
}

void Alumno::setEdad(int edad)
{
    this->edad = edad;
}

void Alumno::datosAlumno()
{
    cout<<"Datos Alumno:"<<endl;
    cout<<"   Nombre: "<<this->edad<<endl;
    cout<<"   Codigo: "<<this->codigoAlumno<<endl;
    cout<<"   Edad: "<<this->edad<<endl;
}