// persona.h
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Persona
{
protected://atributos
    string apellido;
    string nombres;
    string direcion;
    string dni;
    string fecha_nacimiento;

public://metodos y funciones
//constructor
    Persona(string _apellidos, string _nombres, string _dni)
    {
        apellido = _apellidos;
        nombres = _nombres;
        dni = _dni;
        //direcion = _direccion;
    }
    // metodos de getter an setter
    string getApellidos()
    {
        cout<< apellido;
    }

    void setApellidos(string _apellidos)
    {
        apellido = _apellidos;
    }

    string getNombres()
    {
        return nombres;
    }

    void setNombre(string _nombre)
    {
        nombres = _nombre;
    }

    /*string getDireccion(){
        return direcion;
    }

    void setDireccion(string _direccion){
       direcion= _direccion; 
    }*/

    string getDNI(){
        return dni;
    }

    void setDNI(string _dni){
       dni= _dni; 
    }
};