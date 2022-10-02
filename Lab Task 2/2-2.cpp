#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void initGL() {
	glClearColor(0.0f, 0.7f, 0.0f, 1.0f);
}


void display() {
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUADS);
	glColor3f(0.68f, 0.85f, 0.90f);
	glVertex2f(-0.5f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, 0.2f);
	glVertex2f(-0.5f, 0.2f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.00f, 0.61f, 0.92f);
	glVertex2f(-0.5f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, -0.2f);
	glVertex2f(-0.5f, -0.2f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.00f, 0.0f, 0.0f);
	glVertex2f(-0.5f, 0.2f);
	glVertex2f(1.0f, 0.2f);
	glVertex2f(1.0f, -0.2f);
	glVertex2f(-0.5f, -0.2f);
	glEnd();






	//All the triangles


	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.5f, -0.2f);
	glVertex2f(-0.15f, -0.5f);
	glVertex2f(0.2f, -0.2f);
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.7f, -0.2f);
	glVertex2f(0.45f, -0.5f);
	glVertex2f(0.2f, -0.2f);
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.7f, -0.2f);
	glVertex2f(0.85f, -0.5f);
	glVertex2f(1.0f, -0.2f);
	glEnd();



	//All the lines:

    glLineWidth(3.0f);

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, -0.2f);
	glVertex2f(-0.15f, -0.5f);
	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.2f, -0.2f);
	glVertex2f(-0.15f, -0.5f);
	glEnd();


    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.2f, -0.2f);
	glVertex2f(0.45f, -0.5f);
	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.45f, -0.5f);
	glVertex2f(0.7f, -0.2f);
	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.85f, -0.5f);
	glVertex2f(0.7f, -0.2f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.85f, -0.5f);
	glVertex2f(1.0f, -0.2f);
	glEnd();


    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.75f);
	glVertex2f(-0.75f, 0.75f);
	glEnd();


    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.75f);
	glVertex2f(-0.8f, 0.75f);
	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.7f, -0.75f);
	glVertex2f(-0.7f, 0.75f);
	glEnd();


    glLineWidth(1.0f);

    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, 0.23f);
	glVertex2f(1.0f, 0.23f);
	glEnd();



    //All the remaining Quads
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.85f, -0.5f);
	glVertex2f(-0.65f, -0.5f);
	glVertex2f(-0.65f, 0.5f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.6f, 0.1f, 0.0f);
	glVertex2f(-0.1f, 0.2f);
	glVertex2f(0.3f, 0.2f);
	glVertex2f(0.3f, 0.9f);
	glVertex2f(-0.1f, 0.9f);
	glEnd();

    /////Windows/////
    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.05f, 0.75f);
	glVertex2f(0.005f, 0.75f);
	glVertex2f(0.005f, 0.85f);
	glVertex2f(-0.05f, 0.85f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.195f, 0.75f);
	glVertex2f(0.25f, 0.75f);
	glVertex2f(0.25f, 0.85f);
	glVertex2f(0.195f, 0.85f);
	glEnd();


    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.05f, 0.65f);
	glVertex2f(0.005f, 0.65f);
	glVertex2f(0.005f, 0.55f);
	glVertex2f(-0.05f, 0.55f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.195f, 0.65f);
	glVertex2f(0.25f, 0.65f);
	glVertex2f(0.25f, 0.55f);
	glVertex2f(0.195f, 0.55f);
	glEnd();


    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.05f, 0.45f);
	glVertex2f(0.005f, 0.45f);
	glVertex2f(0.005f, 0.35f);
	glVertex2f(-0.05f, 0.35f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.195f, 0.45f);
	glVertex2f(0.25f, 0.45f);
	glVertex2f(0.25f, 0.35f);
	glVertex2f(0.195f, 0.35f);
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
