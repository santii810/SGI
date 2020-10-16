#ifndef OCUADRADO_H
#define OCUADRADO_H

/* Abre una ventana OpenGL */
void AbreVentana (int numeroArgumentos, char ** listaArgumentos);

/* Funcion de dibujado */
void Dibuja(void);

void pintaImagen6();

void pintaImagen5();

void pintaImagen4();

void pintaImagen3();

/* Establece el area visible */
void TamanyoVentana (int alto, int ancho);

/* Inicia las propiedades de la vista */
void IniciaVista (void);


float black[] = { 0.0f, 0.0f, 0.0f };
float blue[] = { 0.0f, 0.0f, 1.0f };
float yellow[] = { 1.0f, 1.0f, 0.0f };
float green[] = { 0.0f, 1.0f, 0.0f };
float white[] = { 1.0f, 1.0f, 1.0f };

#endif