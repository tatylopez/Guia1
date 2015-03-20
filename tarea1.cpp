#include <GL/gl.h> 
#include <GL/glut.h> 
#include <math.h> 

void display(void)



{ 
 
	glColor3f (1.0, 1.0, 1.0);
	
	  GLfloat angulo; 
	  
	  int i;
	   glBegin(GL_POINTS);
	   for (i=0; i<360; i+=7)
	   
	   {
		    angulo = (GLfloat)i*3.14159f/180.0f; // grados a radianes 
		    //glVertex3f(0.0f, 0.0f, 0.0f);
		     glVertex3f(cos(angulo), sin(angulo), 0.0f);
		     
		      } 
		      
		      glEnd();
		       glFlush();


} 

void init (void)
{
	 glMatrixMode(GL_PROJECTION);
	 glLoadIdentity();
	  glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0); 
	  
	  }

int main(int argc, char** argv)
{
	 glutInit(&argc, argv);
	  glutInitDisplayMode (GLUT_SINGLE |GLUT_RGB);
	   glutInitWindowSize (850, 650);
	    glutInitWindowPosition (100,100);
	     glutCreateWindow("Hola "); 
	     
	     init (); 
	     glutDisplayFunc(display); 
	     glutMainLoop();
	      return 0;
	      
	       }
	          
 
