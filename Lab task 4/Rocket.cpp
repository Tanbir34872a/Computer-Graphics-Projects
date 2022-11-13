#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#define PI          3.141516


GLfloat rx = 0.0f;
GLfloat ry = 0.0f;
GLfloat c = 0.0f;
GLfloat s = 0.0f;


GLfloat speed = 0.2f;

void update(int value) {

    if(rx <-1.5)
        rx = 1.5f;
    rx -= speed;

    if(ry > 1.5)
        ry = -1.5f;
    ry += speed;

    if(c > 2.0)
        c = -1.5f;
    c += speed/2;
    if(s < -1.5)
        s = 1.5f;
    s -= speed/50;


glutPostRedisplay();
glutTimerFunc(100, update, 0);
}



void display() {
    glClearColor(0.6f, 0.85f, 0.9f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);

glPushMatrix();
glTranslatef(c, 0.0f, 0.0f);

    int i;
    GLfloat p1=0.5f; GLfloat q1= 0.5f; GLfloat r1 = 0.25f;
    int tringle2=40;
    GLfloat tp2 =2.0f * PI  ;

    p1=-0.4f; q1= 0.7f; r1 = 0.2f;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
            p1+(r1*cos(i*tp2/tringle2)),
            q1+(r1*sin(i*tp2/tringle2))
        );
    }
    glEnd ();

    p1=-0.6f; q1= 0.7f; r1 = 0.15f;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
            p1+(r1*cos(i*tp2/tringle2)),
            q1+(r1*sin(i*tp2/tringle2))
        );
    }
    glEnd ();

    p1=-0.2f; q1= 0.7f; r1 = 0.1f;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
            p1+(r1*cos(i*tp2/tringle2)),
            q1+(r1*sin(i*tp2/tringle2))
        );
    }
    glEnd ();

    p1=-0.7f; q1= 0.3f; r1 = 0.15f;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
            p1+(r1*cos(i*tp2/tringle2)),
            q1+(r1*sin(i*tp2/tringle2))
        );
    }
    glEnd ();

    p1=-0.85f; q1= 0.3f; r1 = 0.1f;
    glBegin (GL_TRIANGLE_FAN);
        glColor3ub ( 255,255,255);
        glVertex2f (p1,q1);
        for(i= 0;i<=tringle2; i++)
        {
            glVertex2f (
                p1+(r1*cos(i*tp2/tringle2)),
                q1+(r1*sin(i*tp2/tringle2))
            );
        }
    glEnd ();

    p1=-0.5f; q1= 0.3f; r1 = 0.12f;
    glBegin (GL_TRIANGLE_FAN);
        glColor3ub ( 255,255,255);
        glVertex2f (p1,q1);
        for(i= 0;i<=tringle2; i++)
        {
            glVertex2f (
                p1+(r1*cos(i*tp2/tringle2)),
                q1+(r1*sin(i*tp2/tringle2))
            );
        }
    glEnd ();
glPopMatrix();



glPushMatrix();
glTranslatef(0.0f, s, 0.0f);
    p1=0.5f; q1= 0.5f; r1 = 0.3f;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255, 0);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
            p1+(r1*cos(i*tp2/tringle2)),
            q1+(r1*sin(i*tp2/tringle2))
        );
    }
    glEnd ();

glPopMatrix();





glPushMatrix();
glTranslatef(rx,-rx, 0.0f);
    glBegin(GL_QUADS);
        glColor3f(0.5f, 0.0f, 0.1f);
        glVertex2f( 0.2f, -0.2f);
        glVertex2f( 0.5f,  0.0f);
        glVertex2f(0.8f, -0.5f);
        glVertex2f(0.5f, -0.7f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.15f,  0.2f);
        glVertex2f(0.2f, -0.2f);
        glVertex2f(0.5f,  0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.9f, 0.0f);
        glVertex2f(0.55f,-0.65f);
        glVertex2f(0.6f,-0.85f);
        glVertex2f(0.75f,-0.75f);
    glEnd();

    float o=0.19,j=0.12;

    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.9f, 0.0f);
        glVertex2f( 0.55f+o,-0.65f+j);
        glVertex2f( 0.6f +o,-0.85f+j);
        glVertex2f( 0.7f +o,-0.75f+j);
    glEnd();
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
