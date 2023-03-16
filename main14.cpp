#include <GL/gl.h>
#include <GL/glaux.h>

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
   glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
   glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
   glBegin(GL_POLYGON);
      glEdgeFlag(GL_FALSE);                
      glVertex2f(-0.5, -0.5); //a 
      glVertex2f(-0.5, 0.5); //b
      glEdgeFlag(GL_TRUE);
      glVertex2f(0.5, 0.5); //c
      glEdgeFlag(GL_FALSE);
      glVertex2f(0.5, -0.5); //d
   glEnd();
   glFlush();

   Sleep(3000);
   return 0;
}

