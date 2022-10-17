#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

float x(int X){return float((float(X)-500)/500);}
float y(int Y){return float((400-float(Y))/400);}
float f(float Y){return float(Y/255);}

void initGL() {
	glClearColor(f(144), f(158), f(169), 0.0f);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUADS);
	glColor3f(f(187), f(169), f(85));
	glVertex2f(x(0), y(800));
	glVertex2f(x(0), y(400));
	glVertex2f(x(1000), y(400));
	glVertex2f(x(1000), y(800));
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(f(211), f(193), f(157));
	glVertex2f(x(282), y(230));
	glVertex2f(x(824), y(148));
	glVertex2f(x(812), y(372));
	glVertex2f(x(280), y(360));
	glEnd();

	for(int a = 0; a < 3; a++){
        glBegin(GL_QUADS);
        glColor3f(f(117), f(139), f(150));
        glVertex2f(x(310), y(275 + 30*a));
        glVertex2f(x(310), y(292 + 30*a));
        glVertex2f(x(800 - a*10), y(265 + 55*a));
        glVertex2f(x(802 - a*10), y(230 + 55*a));
        glEnd();
	}

        glBegin(GL_QUADS);
        glColor3f(f(59), f(76), f(92));
        glVertex2f(x(310), y(237));
        glVertex2f(x(310), y(267));
        glVertex2f(x(802), y(220));
        glVertex2f(x(807), y(174));
        glEnd();

    glBegin(GL_QUADS);
	glColor3f(f(211), f(193), f(157));
	glVertex2f(x(256), y(359));
	glVertex2f(x(765), y(371));
	glVertex2f(x(760), y(550));
	glVertex2f(x(255), y(463));
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(f(211), f(193), f(157));
	glVertex2f(x(240), y(460));
	glVertex2f(x(740), y(547));
	glVertex2f(x(733), y(746));
	glVertex2f(x(238), y(570));
	glEnd();

    /////////////////////////////

	glBegin(GL_QUADS);
	glColor3f(f(97), f(111), f(117));
	glVertex2f(x(824), y(149));
	glVertex2f(x(842), y(158));
	glVertex2f(x(813), y(654));
	glVertex2f(x(733), y(747));
	glEnd();



	glBegin(GL_QUADS);
	glColor3f(f(97), f(111), f(117));
	glVertex2f(x(765), y(370));
	glVertex2f(x(812), y(372));
	glVertex2f(x(813), y(654));
	glVertex2f(x(733), y(747));
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(f(97), f(111), f(117));
	glVertex2f(x(765), y(370));
	glVertex2f(x(812), y(372));
	glVertex2f(x(813), y(654));
	glVertex2f(x(733), y(747));
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(f(97), f(111), f(117));
	glVertex2f(x(740), y(550));
	glVertex2f(x(758), y(548));
	glVertex2f(x(813), y(654));
	glVertex2f(x(733), y(747));
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(f(133), f(132), f(127));
	glVertex2f(x(833), y(90));
	glVertex2f(x(902), y(80));
	glVertex2f(x(865), y(666));
	glVertex2f(x(813), y(654));
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(f(59), f(76), f(92));
	glVertex2f(x(949), y(105));
	glVertex2f(x(902), y(80));
	glVertex2f(x(865), y(666));
	glVertex2f(x(919), y(638));
	glEnd();

	for(int a = 0; a < 3; a++){
        glBegin(GL_QUADS);
        glColor3f(f(117), f(139), f(150));
        glVertex2f(x(265), y(375 + 35*a));
        glVertex2f(x(265), y(390 + 35*a));
        glVertex2f(x(750-a*5), y(430 + 50*a));
        glVertex2f(x(755-a*5), y(400 + 50*a));
        glEnd();
	}

	for(int a = 0; a < 3; a++){
        glBegin(GL_QUADS);
        glColor3f(f(117), f(139), f(150));
        glVertex2f(x(245), y(475 + 30*a));
        glVertex2f(x(245), y(490 + 30*a));
        glVertex2f(x(725), y(605 + 55*a));
        glVertex2f(x(725), y(575 + 55*a));
        glEnd();
	}

	for(int a = 0; a < 9; a++){
        glBegin(GL_QUADS);
        glColor3f(f(117), f(146), f(160));
        glVertex2f(x(865 - a*3), y(140 + 60*a));
        glVertex2f(x(880 - a*3), y(140 + 60*a));
        glVertex2f(x(877 - a*3), y(175 + 60*a));
        glVertex2f(x(863 - a*3), y(175 + 60*a));
        glEnd();
	}


    glBegin(GL_QUADS);
	glColor3f(f(182), f(151), f(94));
	glVertex2f(x(600), y(800));
	glVertex2f(x(340), y(800));
	glVertex2f(x(0), y(660));
	glVertex2f(x(0), y(580));
	glEnd();
/*
    glBegin(GL_QUADS);
	glColor3f(0.68f, 0.85f, 0.90f);
	glVertex2f(x(), y());
	glVertex2f(x(), y());
	glVertex2f(x(), y());
	glVertex2f(x(), y());
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.68f, 0.85f, 0.90f);
	glVertex2f(x(), y());
	glVertex2f(x(), y());
	glVertex2f(x(), y());
	glVertex2f(x(), y());
	glEnd();


*/





	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutInitWindowSize(1000, 800);   // Set the window's initial width & height

	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title

	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
