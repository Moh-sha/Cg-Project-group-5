#include<GL/glu.h>
#include<GL/glut.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<GL/gl.h>

using namespace std;

void lamp2()
{
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.9f, -0.5f, 0.0f);
    glScalef(0.5,0.5,0);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);//Orange
    glVertex2f(-0.01f, 0.4f);
    glVertex2f(-0.01f, -0.3f);
    glVertex2f(0.01f, -0.3f);
    glVertex2f(0.01f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);//Blue
    glVertex2f(-0.04f, -0.3f);
    glVertex2f(-0.04f, -0.35f);
    glVertex2f(0.04f, -0.35f);
    glVertex2f(0.04f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.1f, 0.1f);//Dark blue
    glVertex2f(-0.06f, -0.35f);
    glVertex2f(-0.07f, -0.38f);
    glVertex2f(0.07f, -0.38f);
    glVertex2f(0.06f, -0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.75f, 0.75f, 0.75f);
    glVertex2f(-0.04f, 0.4f);
    glVertex2f(0.0f, 0.38f);
    glVertex2f(0.04f, 0.4f);
    glVertex2f(0.05f, 0.5f);
    glVertex2f(0.0f, 0.55f);
    glVertex2f(-0.05f,0.5f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 0.0f);//yellow
    glVertex2f(0.0f, 0.55f);
    glVertex2f(0.05f, 0.5f);
    glVertex2f(0.025f, 0.6f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 0.0f);//yellow
    glVertex2f(0.0f, 0.55f);
    glVertex2f(-0.05f,0.5f);
    glVertex2f(-0.025f, 0.6f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);//red
    glVertex2f(0.025f,0.6f);
    glVertex2f(0.0f,0.55f);
    glVertex2f(-0.025f,0.6f);
    glVertex2f(0.0f,0.65f);
    glEnd();
    glPopMatrix();
    glFlush();

    }




int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 720);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Lamp2");
    glutDisplayFunc(lamp2);





  glutMainLoop();
    return 0;
}
