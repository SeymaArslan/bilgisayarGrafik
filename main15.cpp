#include <GL/gl.h>
#include <GL/glaux.h>
#include <math.h>

int main(int argc, char** argv)
{
   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
   auxInitPosition (0, 0, 500, 500);
   auxInitWindow (argv[0]);

   glClearColor (0.0, 0.0, 0.0, 0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0, 1.0, 1.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-2.0, 2.0, -2.0, 2.0, -1.0, 1.0);
//double angle;
int i,EDGES;
float PI;
EDGES=30;
PI = 3.1415926535897;
//int circle_points = 100;

/* draw a circle */
for (i = 1; i < EDGES; i++) {
glBegin(GL_LINE_STRIP);
glVertex2f(cos((2*PI*i)/EDGES), sin((2*PI*i)/EDGES));
glVertex2f(cos((2*PI*(i+1))/EDGES),sin((2*PI*(i+1))/EDGES));
glEnd();
}


   glFlush();

   Sleep(3000);
   return 0;
}
