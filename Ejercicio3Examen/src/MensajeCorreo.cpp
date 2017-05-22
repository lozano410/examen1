#include "MensajeCorreo.h"
#include <iostream>
#include <string.h>
using namespace std;

MensajeCorreo::MensajeCorreo()
{
    cout<<"***Ejecutando constructor***"<<endl;
    this->para = new char[35];
    strcpy(this->para,"lozano410@mumicipalidad.com.hn");
    this->cc = new char[35];
    strcpy(this->cc,"lozano410@municipalidad.com.hn");
    this->asunto = new char[35];
    strcpy(this->asunto,"Problemas en departamento");
    this->mensaje = new char[300]();
    strcpy(this->mensaje,"Querido julio\nEl motivo de la presente es para\nindicarle que no las PC de el DEP. tributario no encienden\nesperamos su ayuda lo mas pronto posible");

}
/
MensajeCorreo::MensajeCorreo(char * _para, char * _cc, char* _asunto,char * _mensaje)
{
    this->para = new char[strlen(_para)+1];
    strcpy(this->para,_para);
    this->cc = new char[strlen(_cc)+1];
    strcpy(this->cc,_cc);
    this->asunto = new char[strlen(_asunto)+1];
    strcpy(this->asunto,_asunto);
    this->mensaje = new char[strlen(_mensaje)+1];
    strcpy(this->mensaje,_mensaje);
}

MensajeCorreo::~MensajeCorreo()
{
    cout<<"Ejecutando Destructor"<<endl;
    delete [] this->para;
    delete [] this->cc;
    delete [] this->asunto;
    delete [] this->mensaje;

}


void MensajeCorreo::setPara(char * _para)
{
    delete [] this->para;
    this->para = new char[strlen(_para)+1];
    strcpy(this->para,_para);
}

void MensajeCorreo:: setCC(char * _cc)
{
    delete [] this->cc;
    this->cc = new char[strlen(_cc)+1];
    strcpy(this->cc,_cc);
}

void MensajeCorreo::setAsunto(char * _asunto)
{
    delete [] this->asunto;
    this->asunto = new char[strlen(_asunto)+1];
    strcpy(this->asunto,_asunto);
}

void MensajeCorreo::setMensaje(char * _mensaje)
{
    delete [] this->mensaje;
    this->mensaje = new char[strlen(_mensaje)+1];
    strcpy(this->mensaje,_mensaje);
}


char * MensajeCorreo::getPara()
{
    return this->para;
}

char * MensajeCorreo::getCC()
{
    return this->cc;
}

char * MensajeCorreo::getAsunto()
{
    return this->asunto;
}


char * MensajeCorreo::getMensaje()
{
    return this->mensaje;
}



void MensajeCorreo::mostrarMensaje()
{
    cout<<"   Para: "<<this->para<<endl;
    cout<<"     CC: "<<this->cc<<endl;
    cout<<" Asunto: "<<this->asunto<<endl;
    cout<<"Mensaje: "<<this->mensaje<<endl;

}
