#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>

GLfloat m1=0.329412,m2=0.223529,m3=0.027451,
d1=0.780392,d2=0.568627,d3=0.113725,
s1=0.992157,s2=0.941176,s3=0.807843,
s=27.8974;
void init(void)
{
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0); //Activamos las luces en 0
glDepthFunc(GL_LESS); //comparación de profundidad
glEnable(GL_DEPTH_TEST); //activa GL_DEPTH_TEST
}
void reshape(int w, int h)
{
glViewport(0, 0, (GLsizei) w, (GLsizei) h);
// Activamos la matriz de proyeccion.
glMatrixMode(GL_PROJECTION);
// "limpiamos" esta con la matriz identidad.
glLoadIdentity();
// Usamos proyeccion ortogonal
glOrtho(-300, 300, -300, 300, -300, 300);// Activamos la matriz de modelado/visionado.
glMatrixMode(GL_MODELVIEW);
// "Limpiamos" la matriz
glLoadIdentity();
}
void ponerMaterial()
{
GLfloat mat_ambient[] = { m1,m2,m3};
GLfloat mat_diffuse[] = { d1, d2, d3 };
GLfloat mat_specular[] = { s1, s2, s3};
GLfloat shine[] = {s};
// "Limpiamos" el frame buffer con el color de "Clear", en este
// caso negro.
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glMatrixMode( GL_MODELVIEW_MATRIX );
glLoadIdentity();
// Rotacion de 25 grados en torno al eje x
glRotated(25.0, 1.0, 0.0, 0.0);
// Rotacion de -30 grados en torno al eje y
glRotated(-30.0, 0.0, 1.0, 0.0);
// Dibujamos una "Tetera" y le aplico el material
glPushMatrix();glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
glMaterialfv(GL_FRONT, GL_SHININESS, shine);
//setMaterial
glutSolidTeapot(125.0);
glFlush();
}
void keyboard(unsigned char key, int x, int y)
{
switch (key)
{
case '1':
m1=0.135;
m2=0.2225;
m3=0.1575;
d1=0.54;
d2=0.89;
d3=0.63;
s1=0.316228;
s2=0.316228;
s3=0.316228;
s=s;
break;
// Jadebreak;
case '2':
// Obsidian
m1=0.05375;
m2=0.05;
m3=0.06625;
d1=0.18275;
d2=0.17;
d3=0.22525;
s1=0.332741;
s2=0.328634;
s3=0.346435;
s=s;
break;
case '3':
// Pearl
m1=0.25;
m2=0.20725;
m3=0.20725;
d1=1;
d2=0.829;
d3=0.829;
s1=0.296648;
s2=0.296648;
s3=0.296648;
s=s;
break;
case '4':
m1=0.1745;
// Rubym2=0.01175;
m3=0.01175;
d1=0.61424;
d2=0.04136;
d3=0.04136;
s1=0.727811;
s2=0.626959;
s3=0.626959;
s=s;
break;
case '5':
//Turquoise
m1=0.1;
m2=0.18725;
m3=0.1745;
d1=0.396;
d2=0.74151;
d3=0.69102;
s1=0.297254;
s2=0.30829;
s3=0.306678;
s=s;
break;
case 27:
// 27 es Esc
exit(0);
// Sale del programa
}
glutPostRedisplay(); // actualización de visualización
}
int main(int argc, char **argv)
{
// Inicializo OpenGL
glutInit(&argc, argv);
// Activamos buffer simple y colores del tipo RGB
glutInitDisplayMode (GLUT_RGB | GLUT_DEPTH);
// Definimos una ventana de medidas 800 x 600 como ventana
// de visualizacion en pixels
glutInitWindowSize (800, 600);
// Posicionamos la ventana en la esquina superior izquierda de
// la pantalla.glutInitWindowPosition (0, 0);
// Creamos literalmente la ventana y le adjudicamos el nombre que se
// observara en su barra de titulo.
glutCreateWindow ("Tetera");
// Inicializamos el sistema
init();
glutDisplayFunc(ponerMaterial);
glutKeyboardFunc(keyboard); //invoca funcion de teclado
glutReshapeFunc(reshape);
glutMainLoop();
return 0;
}
