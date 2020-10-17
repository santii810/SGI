#include "glut.h"
#include <stdio.h>
#include "cuadrado.h"

/******************************************************************/
/* Funcion de dibujado                                            */
/* Parametros: Ninguno                                            */
/* Salida: Ninguna                                                */
/******************************************************************/
void Dibuja(void)
{
	/* Establece el color de borrado */
	glClearColor(1.0f, 0.0f, 0.0f, 0.0f);

	/* Borra el buffer de color */
	glClear(GL_COLOR_BUFFER_BIT);


	//pintaImagen3();

	//pintaImagen4();

	//pintaImagen5();

	pintaImagen6();

}

void pintaImagen6()
{
	float disctance = 1.1f;
	float baseCoord = -0.5f;
	int i = 0;
	for (i = 0; i < 5; i++) {
		disctance = disctance - 0.2f;

		float newBaseCoord = baseCoord - (0.05f * i);
		if (i % 2 == 0) {
			glColor3fv(blue);
		}
		else {
			glColor3fv(green);
		}

		/* Crea un poligono 2D (cuadrado) */
		glBegin(GL_POLYGON);
		glVertex2f(newBaseCoord, newBaseCoord); //vector fijo
		glVertex2f(newBaseCoord, baseCoord + disctance);
		glVertex2f(baseCoord + disctance, baseCoord + disctance);
		glVertex2f(baseCoord + disctance, newBaseCoord);
		glEnd();
	}

	glFlush();
}
void pintaImagen5()
{
	float disctance = 1.1f;
	float baseCoord = -0.5f;
	int i = 0;
	for (i = 0; i < 5; i++) {
		disctance = disctance - 0.2f;

		if (i % 2 == 0) {
			glColor3fv(black);
		}
		else {
			glColor3fv(green);
		}

		/* Crea un poligono 2D (cuadrado) */
		glBegin(GL_POLYGON);
		glVertex2f(baseCoord, baseCoord); //vector fijo
		glVertex2f(baseCoord, baseCoord + disctance);
		glVertex2f(baseCoord + disctance, baseCoord + disctance);
		glVertex2f(baseCoord + disctance, baseCoord);
		glEnd();
	}

	glFlush();
}


void pintaImagen4()
{


	/* Establece el color de dibujo */
	glColor3f(0.0f, 0.0f, 1.0f);

	/* Crea un poligono 2D (cuadrado) */
	glBegin(GL_POLYGON);
	glColor3fv(yellow);
	glVertex2f(-0.5f, 0.0f);
	glColor3fv(black);
	glVertex2f(0.0f, -0.5f);
	glColor3fv(green);
	glVertex2f(0.5f, 0.0f);
	glColor3fv(white);
	glVertex2f(0.0f, 0.5f);
	glEnd();


	//Tri�ngulo verde
	glColor3fv(green);

	glBegin(GL_TRIANGLES);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(0.0f, -0.5f);
	glEnd();


	//Tri�ngulo negro
	glColor3fv(black);

	glBegin(GL_TRIANGLES);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(-0.5f, 0.5f);
	glEnd();



	//triangulo amarillo
	glColor3fv(yellow);

	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(0.5f, 0.0f);
	glEnd();


	//tri�ngulo blanco
	glColor3fv(white);

	glBegin(GL_TRIANGLES);
	glVertex2f(0.5f, 0.0f);
	glVertex2f(0.5f, -0.5f);
	glVertex2f(0.0f, -0.5f);
	glEnd();

	/* Se asegura de que se ejecutan todas las ordenes */
	glFlush();
}

void pintaImagen3()
{
	/* Establece el color de dibujo */
	glColor3f(0.0f, 0.0f, 1.0f);

	/* Crea un poligono 2D (cuadrado) */
	glBegin(GL_POLYGON);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(0.0f, -0.5f);
	glVertex2f(0.5f, 0.0f);
	glVertex2f(0.0f, 0.5f);
	glEnd();


	//Tri�ngulo verde
	glColor3f(0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLES);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(0.0f, -0.5f);
	glEnd();




	//Tri�ngulo negro
	glColor3f(0.0f, 0.0f, 0.0f);

	glBegin(GL_TRIANGLES);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(-0.5f, 0.5f);
	glEnd();



	//triangulo amarillo
	glColor3f(1.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(0.5f, 0.0f);
	glEnd();


	//tri�ngulo blanco
	glColor3f(1.0f, 1.0f, 1.0f);

	glBegin(GL_TRIANGLES);
	glVertex2f(0.5f, 0.0f);
	glVertex2f(0.5f, -0.5f);
	glVertex2f(0.0f, -0.5f);
	glEnd();
}




/******************************************************************************************/
/* Establece el area visible                                                              */
/* Parametros: int ancho --> Ancho del area visible                                       */
/*             int alto --> Alto del area visible                                         */
/* Salida: Ninguna                                                                        */
/******************************************************************************************/
void TamanyoVentana(int ancho, int alto)
{
	glViewport(0, 0, ancho, alto);
}


/******************************************************************************************/
/* Inicia las propiedades de la vista                                                     */
/* Parametros: Ninguno                                                                    */
/* Salida: Ninguna                                                                        */
/******************************************************************************************/
void IniciaVista(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}


/******************************************************************************************/
/* Abre una ventana OpenGL                                                                */
/* Parametros: int numeroArgumentos --> El numero de argumentos en la llamada al programa */
/*             char ** listaArgumentos --> Vector de cadenas con cada argumento           */
/* Salida: Ninguna                                                                        */
/******************************************************************************************/
void AbreVentana(int numeroArgumentos, char** listaArgumentos)
{
	glutInit(&numeroArgumentos, listaArgumentos);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(listaArgumentos[0]);
	glutDisplayFunc(Dibuja);
	glutReshapeFunc(TamanyoVentana);
	IniciaVista();
}


/******************************************************************************************/
/* Funcion principal                                                                      */
/* Parametros: int numeroArgumentos --> El numero de argumentos en la llamada al programa */
/*             char ** listaArgumentos --> Vector de cadenas con cada argumento           */
/* Salida: Un entero que se devuelve al sistema al acabar la ejecucion del programa       */
/******************************************************************************************/
int main(int numArgumentos, char** listaArgumentos)
{
	/* Crea la ventana de la aplicaci�n */
	AbreVentana(numArgumentos, listaArgumentos);

	/* Establece el bucle principal de control de OpenGL */
	glutMainLoop();

	return (0);
}