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
   glOrtho(-4.0, 4.0, -4.0, 4.0, -1.0, 1.0);
   
   glNewList(1,GL_COMPILE);
    glVertex2f(0.0, -0.5);
    glEndList();
   glNewList(2,GL_COMPILE);
    glVertex2f(-1.0, -1.0);
    glEndList();
   glNewList(3,GL_COMPILE);
    glVertex2f(1.0, -1.0);
    glEndList();
    
    glNewList(4,GL_COMPILE);
    
   glBegin(GL_TRIANGLES);
    glCallList(1);
    glCallList(2);
    glCallList(3);
    glEnd();
   glEndList();
  int i;
  
  for (i= 0; i<5; i++ ) {
   glColor3f((i*0.4), 2.0, 0.0);   
   glRotatef((i*90.0), 0.0, 0.0, 1.0)  ; 
   glCallList(4);
     
  } 
    glFlush();
   Sleep(3000);
   return 0;
}

