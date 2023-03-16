#include <GL/gl.h>
#include <GL/glaux.h>

int main(int argc, char** argv) {

    auxInitDisplayMode(AUX_SINGLE | AUX_RGBA);
    auxInitPosition(0, 0, 500,500);
    auxInitWindow(argv[0]);    
    
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glOrtho(-18.0, 18.0, -18.0, 18.0, -1.0, 1.0);
    
    glColor3f(0.0, 0.0, 1.0);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glPushMatrix();
    glTranslatef(3.0, -1.0, 0.0);
    glScalef(2.0, -3.0, 0.0);
    glRotatef(30.0, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.0, 1.0);
    glVertex2f(3.0, 1.0);
    glVertex2f(3.0, 3.0);
    glEnd();
    
    
    glColor3f(1.0, 1.0, 1.0);
    glLoadIdentity();
    glOrtho(-12.0, 12.0, -12.0, 12.0, -12.0, 12.0);
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(1, 0x3E37);
    glLineWidth(3.0);
    glRotatef(45.0, 0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(1.0, 1.0);
    glVertex2f(2.0, 1.0);
    glEnd();
    glDisable(GL_LINE_STIPPLE);
    
    glLoadIdentity();
    glOrtho(-4.0, 4.0, -4.0, 4.0, -4.0, 4.0);
    glPointSize(3.0);
    glTranslatef(2.0, -1.0, 0.0);
    glBegin(GL_POINTS);
    glVertex2f(1.5, 1.5);
    glEnd();
    
    glLoadIdentity();
    glOrtho(-8.0, 8.0, -8.0, 8.0, -8.0, 8.0);
    glLineWidth(1);
    glPopMatrix();
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(2.0, 2.0);
    glVertex2f(2.0, 4.0);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(2.0, 4.0);
    glVertex2f(4.0, 4.0);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(4.0, 4.0);
    glVertex2f(4.0, 2.0);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(4.0, 2.0);
    glVertex2f(2.0, 2.0);
    glEnd();
    glFlush();
    Sleep(3000);
    return 0;
    
}
