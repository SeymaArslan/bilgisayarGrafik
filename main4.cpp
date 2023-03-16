#include <GL/gl.h>
#include <GL/glaux.h>

int main(int argc, char** argv)
{
   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
   auxInitPosition (0, 0, 500, 500);
   auxInitWindow (argv[0]);

   glClearColor (0.0, 0.0, 0.0, 0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
   
   glColor3f(1.0, 1.0, 1.0);
   
   int i;
   float x = 0.0;
   for (i = 1; i < 12; i=i+2)
   {
   glPointSize(i);
   glBegin(GL_POINTS);
      glColor3f(0.0, x, 0.0);
      glVertex2f(x, 0.0);
      x = x + 0.2;
   glEnd();
   }   
   
   glFlush();

   Sleep(3000);
   return 0;
}

