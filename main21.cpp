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
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
   glOrtho(-8.0, 8.0, -8.0, 8.0, -1.0, 1.0);
   glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
   glPushMatrix();
   glScalef(2.0, 2.0, 2.0);
   glRotatef(45.0, 0.0, 0.0, 1.0);
   //glTranslatef(-4.0, 0.0, 0.0); 
   glBegin(GL_POLYGON);
      glVertex2f(-0.5, -0.5);
      glVertex2f(-0.5, 0.5);
      glVertex2f(0.5, 0.5);
      glVertex2f(0.5, -0.5);
   glEnd();
   
   
   glLoadIdentity();
   glOrtho(-8.0, 8.0, -8.0, 8.0, -1.0, 1.0);
   glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
   //glTranslatef(-4.0, 0.0, 0.0);
   glPopMatrix();
   glBegin(GL_POLYGON);
      glVertex2f(-0.6, -0.6);
      glVertex2f(-0.6, 0.6);
      glVertex2f(0.6, 0.6);
      glVertex2f(0.6, -0.6);
   glEnd();
   
   glFlush();

   Sleep(3000);
   return 0;
}

