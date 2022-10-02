#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void initGL() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}


void display() {
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUADS);
	glColor3f(0.65f, 0.85f, 0.9f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 1.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.3f, 1.0f, 0.3f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-1.0f, -0.5f);
	glVertex2f(1.0f, -0.5f);
	glVertex2f(1.0f, 0.0f);
	glEnd();

	glLineWidth(1);
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-1.0f, -0.7f);
	glVertex2f(1.0f, -0.7f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-1.0f, -0.9f);
	glVertex2f(1.0f, -0.9);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.9f, 0.8f);
	glVertex2f(-0.9f, -0.2f);
	glVertex2f(-0.5f, -0.2f);
	glVertex2f(-0.5f, 0.8f);
	glEnd();




    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-0.85f, 0.7f);    // x, y
	glVertex2f(-0.85f, 0.55f);
	glVertex2f(-0.75f, 0.55f);    // x, y
	glVertex2f(-0.75f, 0.7f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 1.0f); // Red
	glVertex2f(-0.65f, 0.7f);    // x, y
	glVertex2f(-0.65f, 0.55f);
	glVertex2f(-0.55f, 0.55f);    // x, y
	glVertex2f(-0.55f, 0.7f);
	glEnd();

/////////////////////////////////////////////////////////////////////////////////////////
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 1.0f); // Red
	glVertex2f(-0.85f, 0.45f);    // x, y
	glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.75f, 0.3f);    // x, y
	glVertex2f(-0.75f, 0.45f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 1.0f); // Red
	glVertex2f(-0.65f, 0.45f);    // x, y
	glVertex2f(-0.65f, 0.3f);
	glVertex2f(-0.55f, 0.3f);    // x, y
	glVertex2f(-0.55f, 0.45f);
	glEnd();
////////////////////////////////////////////////////////////////////////////////////////
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 1.0f); // Red
	glVertex2f(-0.85f, 0.2f);    // x, y
	glVertex2f(-0.85f, 0.05f);
	glVertex2f(-0.75f, 0.05f);    // x, y
	glVertex2f(-0.75f, 0.2f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 1.0f); // Red
	glVertex2f(-0.65f, 0.2f);    // x, y
	glVertex2f(-0.65f, 0.05f);
	glVertex2f(-0.55f, 0.05f);    // x, y
	glVertex2f(-0.55f, 0.2f);
	glEnd();


    glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.0f, -0.2f);    // x, y
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.25f,  0.5f);
	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.3f, -0.1f);    // x, y
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.5f,  0.6f);
	glEnd();



	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.6f, -0.2f);    // x, y
	glVertex2f(0.9f, -0.2f);
	glVertex2f(0.75f,  0.6f);
	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutInitWindowSize(800, 450);   // Set the window's initial width & height

	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title

	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
