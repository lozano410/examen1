#ifndef CORREO_H
#define CORREO_H
#include "MensajeCorreo.h"

class Correo
{
public:
    Correo();
    Correo(char *, char*, MensajeCorreo * );
    virtual ~Correo();


    MensajeCorreo enviarMenasaje();
    MensajeCorreo MostrarMensajesEnviados();



    void setCorreoElectronico(char*);
    void setNombre(char *);


    char * getCorreoElectronico();
    char * getNombre();


protected:

private:

    char * correoElectronico;
    char * nombre;
    MensajeCorreo * mensajesEnviados;




};

#endif // CORREO_H
