#include "Correo.h"
#include "MensajeCorreo.h"
#include <iostream>
#include<string.h>

using namespace std;



Correo::Correo()
{
    cout<<"Constructor correo "<<endl;
    this->correoElectronico = new char[35];
    strcpy(this->correoElectronico,"lozano410@mumicipalidad.com.hn");
    this->nombre = new char [35];
    strcpy(this->nombre,"**julio lozano**");
    this->mensajesEnviados = new MensajeCorreo [25];

}


Correo::Correo(char * _correoElectronico, char* _nombre, MensajeCorreo * _mensajesEnviados)
{
    this->correoElectronico = new char[strlen(_correoElectronico)+1];
    strcpy(this->correoElectronico,_correoElectronico);
    this->nombre = new char[strlen(_nombre)+1];
    strcpy(this->nombre,_nombre);
    this->mensajesEnviados = new MensajeCorreo[20];
}



Correo::~Correo()
{
    delete [] this->correoElectronico;
    delete [] this->nombre;
    delete [] this-> mensajesEnviados;

}



MensajeCorreo Correo::enviarMenasaje()
{
    MensajeCorreo::setPara();
    MensajeCorreo::setCC();
    MensajeCorreo::setAsunto();
    MensajeCorreo::setMensaje(_mensaje);
}


MensajeCorreo Correo::MostrarMensajesEnviados()
{

}

void Correo::setCorreoElectronico(char* _correoElectronico)
{
    delete [] this->correoElectronico;
    this->correoElectronico = new char[strlen(_correoElectronico)+1];
    strcpy(this->correoElectronico,_correoElectronico);
}


void Correo::setNombre(char * _nombre)
{
    delete [] this->nombre;
    this->nombre = new char[strlen(_nombre)+1];
    strcpy(this->nombre,_nombre);
}




char * Correo::getCorreoElectronico()
{
    return this->correoElectronico;
}


char * Correo::getNombre()
{
    return this->nombre;
}
