#ifndef OCUADRADO_H
#define OCUADRADO_H

/* Variables Globales del modulo */
int VentanaAncho = 500, VentanaAlto = 500; /* Tamanyo de la ventana */
int VentanaX = 100, VentanaY = 100; /* Posicion de la ventana */
int Pulsaciones; /* Numero de pulsaciones del boton izquierdo del raton */
int InicioX, InicioY; /* Coordenadas del punto inicial */
int FinX, FinY; /* Coordenadas del punto final */
int tipoDibujo;

/* Abre una ventana OpenGL */
void AbreVentana (int numeroArgumentos, char ** listaArgumentos);

/* Funcion de dibujado */
void Dibuja(void);

/* Establece el area visible */
void TamanyoVentana (int alto, int ancho);

/* Inicia las funciones de Callback */
void IniciaFuncionesCallback (void);

/* Define las acciones tras una pulsacion del teclado */
void TecladoCallback (unsigned char tecla, int x, int y);

/* Funcion de callback de las acciones del raton */
void RatonCallback (int boton, int estado, int x, int y);
void MovimientoRatonCallBack(int x, int y);
void DibujaRectangulo();

#endif