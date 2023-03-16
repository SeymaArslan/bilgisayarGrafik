#include <GL/gl.h>
#include <GL/glaux.h>
#include <math.h>

#define PI 3,141592653589;

int main(int agrc, char** argv)
{
    auxInitDisplayMode(AUX_SINGLE | AUX_RGBA);
    auxInitPosition(0, 0, 500, 500);
    auxInitWindow(argv[0]);
    
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    
    double angle;
    int i;
    
    //glColor3f(1.0, 0.0, 0.0);
       
    glBegin(GL_LINE_LOOP);
    for(i = 0; i < 2000; i++)
    {
    glColor3f(1.0, 1.0, 0.0);
    angle = (2*3.14*i/100); 
    glVertex2f(cos(angle), sin(angle));
    
    glColor3f(0.0, 0.0, 139.0);
    angle = (2*3.14*i/100); 
    glVertex2f(sin(angle/2), cos(angle/2));
    
    glColor3f(1.0, 1.0, 0.0);
    angle = (2*3.14*i/100); 
    glVertex2f(sin(angle/2), cos(angle/2));

    }
    glEnd();
    
    glFlush();
    Sleep(5000);
    return 0;
    
    }
