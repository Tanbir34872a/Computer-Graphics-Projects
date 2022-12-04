#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#define PI          3.141516

GLfloat c = 0.0;

void update(int value) {

    if(c >= 90.0)
        c = 0.0f;
    c += 5.0f;

    glutPostRedisplay();
    glutTimerFunc(100, update, 0);
}

void left_down(){
glPushMatrix();
glTranslatef(0.0f, 0.05f, 0.0f);
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f( 0.0f, 0.0f);
        glVertex2f(-0.14f,-0.24f);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.26f,-0.24f);
        glVertex2f(-0.14f,-0.24f);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.26f,-0.24f);
        glVertex2f(-0.3f,-0.4f);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.12f,-0.4f);
        glVertex2f(-0.3f,-0.4f);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.12f,-0.4f);
        glVertex2f(-0.25f,-0.6f);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.25f,-0.6f);
        glVertex2f(-0.4f,-0.6f);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.44f,-0.7f);
        glVertex2f(-0.4f,-0.6f);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.44f,-0.7f);
        glVertex2f(-0.18f,-0.7f);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.30f,-0.9f);
        glVertex2f(-0.18f,-0.7f);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.30f,-0.9f);
        glVertex2f( 0.30f,-0.9f);
    glEnd();
glPopMatrix();
}

void updown(){
glPushMatrix();
glScalef(0.5,0.5,1);
    glPushMatrix();
    glScalef(1.0f, 1.0f, 1.0f);
        left_down();
    glPopMatrix();

    glPushMatrix();
    glScalef(-1.0f, 1.0f, 1.0f);
        left_down();
    glPopMatrix();

    glPushMatrix();
    glScalef(-1.0f, -1.0f, 1.0f);
        left_down();
    glPopMatrix();

    glPushMatrix();
    glScalef(1.0f, -1.0f, 1.0f);
        left_down();
    glPopMatrix();

glPopMatrix();
}

void whole(){
    glPushMatrix();
        updown();
    glPopMatrix();

    glPushMatrix();
    glRotated(90, 0, 0, 1);
        updown();
    glPopMatrix();
}

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
        glRotated(-c, 0, 0, 1);
        whole();
    glPopMatrix();

    glPushMatrix();
        glScalef(0.5, 0.5, 1);
        glTranslatef(1.3,1.3,0);
        glRotated(c, 0, 0, 1);
        whole();
    glPopMatrix();

    glPushMatrix();
        glScalef(0.5, 0.5, 1);
        glTranslatef(-1.3,-1.3,0);
        glRotated(c, 0, 0, 1);
        whole();
    glPopMatrix();

    glPushMatrix();
        glScalef(0.5, 0.5, 1);
        glTranslatef(1.3,-1.3,0);
        glRotated(c, 0, 0, 1);
        whole();
    glPopMatrix();

    glPushMatrix();
        glScalef(0.5, 0.5, 1);
        glTranslatef(-1.3,1.3,0);
        glRotated(c, 0, 0, 1);
        whole();
    glPopMatrix();

glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(700, 700);
   glutInitWindowPosition(0, 0);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(display);
   glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}
