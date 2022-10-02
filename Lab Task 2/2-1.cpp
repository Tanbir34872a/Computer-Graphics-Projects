
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void initGL() {
	glClearColor(0.62f, 0.12f, 0.94f, 1.0f);
}


void display() {
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.4f);
	glVertex2f(-0.65f, 0.5f);
	glVertex2f(0.8f, -0.6f);
	glVertex2f(0.5f, -0.8f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.4f);
	glVertex2f(-0.65f, 0.5f);
	glVertex2f(-0.65f, -0.5f);
	glVertex2f(-0.8f, -0.4f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.5f, -0.8f);
	glVertex2f(0.8f, -0.6f);
	glVertex2f(0.8f, 0.6f);
	glVertex2f(0.5f, 0.8f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.5f);
	glVertex2f(-0.8f, -0.4f);
	glVertex2f(0.5f, 0.8f);
	glVertex2f(0.8f, 0.6f);
	glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutInitWindowSize(500, 500);   // Set the window's initial width & height

	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title

	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
