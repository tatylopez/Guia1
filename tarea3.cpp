#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
	glClear (GL_COLOR_BUFFER_BIT);
	
	
	glBegin(GL_QUADS);
	glColor3f (0.0, 0.0, 1.0);
	 glVertex2f(-0.7f, 0.3f); // V0
	
     glVertex2f(-0.7f, -0.3f); // V1
    
     glVertex2f(0.7f, -0.3f); // V2
     glVertex2f(0.7f, 0.3f); // V2
     // la colita esa q no puedo hacer
     
     glColor3f (0.0, 1.0, 0.0);
     glVertex2f(-0.85f, 0.26f);
     glVertex2f(-0.85f,0.10f);
     
     glVertex2f(-0.7f, 0.10f);
     glVertex2f(-0.7f,0.26f);
     
     
      glVertex2f(-0.85f, -0.26f);
    glVertex2f(-0.85f,-0.10f);
     
     glVertex2f(-0.7f, -0.10f);
     glVertex2f(-0.7f,-0.26f);
     
     
      
     

     
     glEnd();
     
     glBegin(GL_TRIANGLES);
	glColor3f (0.0, 1.0, 0.0);
	glVertex3f(0.9f, 0.0f, 0.0f); 
	glVertex3f(0.7f, 0.4f, 0.0f);
	glVertex3f(0.7f, -0.4f, 0.0f);
	
	glColor3f (0.0, 1.0, 0.0);
	glVertex3f(0.0f, 0.5f, 0.0f); 
	glVertex3f(0.4f, 0.3f, 0.0f);
	glVertex3f(-0.4f, 0.3f, 0.0f);
	
	glColor3f (0.0, 1.0, 0.0);
	glVertex3f(0.0f, -0.5f, 0.0f); 
	glVertex3f(-0.4f, -0.3f, 0.0f);
	glVertex3f(0.4f, -0.3f, 0.0f);
	
	
	glColor3f (0.0, 1.0, 1.0);
	glVertex3f(-0.4f, 0.3f, 0.0f); 
	glVertex3f(0.0f, 0.5f, 0.0f);
	glVertex3f(-0.7f, 0.5f, 0.0f);
	
	glColor3f (0.0, 1.0, 1.0);
	glVertex3f(0.0f, -0.5f, 0.0f); 
	glVertex3f(-0.4f, -0.3f, 0.0f);
	glVertex3f(-0.7f, -0.5f, 0.0f);
	
	
	
	
	
	
	glEnd();
	glFlush ();
	
	}
void init (void){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0,-1.0, 1.0);
	
	}
int main (int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400,400);
	glutInitWindowPosition (100, 100);
	glutCreateWindow("Hola");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;

}

