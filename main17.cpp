#include <GL/gl.h>
#include <GL/glaux.h>
#define draw_triangle() \
glPolygonMode(GL_FRONT_AND_BACK, GL_LINE); \
glBegin(GL_TRIANGLES); \
glVertex2f(1.0, 1.0); \
glVertex2f(3.0, 1.0); \
glVertex2f(2.0, 2.5); \
glEnd();

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
   glOrtho(-8.0, 8.0, -8.0, 8.0, -8.0, 8.0);
  
   
   glColor3f(1.0, 0.0, 0.0);
   draw_triangle();
   
   
   glEnable(GL_LINE_STIPPLE);
   glLineStipple(1, 0xF0F0);
   glLoadIdentity();
   glOrtho(-8.0, 8.0, -8.0, 8.0, -8.0, 8.0);
   glColor3f(0.0, 1.0, 0.0);
   glTranslatef(-0.5, 0.0, 0.0);
   draw_triangle();
   
   
   
   glLineStipple(1, 0xF00F);
   glColor3f(0.0, 0.0, 1.0);
   glLoadIdentity();
   glOrtho(-8.0, 8.0, -8.0, 8.0, -8.0, 8.0);
   glScalef(1.5 , 0.5, 1.0);
   draw_triangle();
   
   
   glLineStipple(1, 0x8888);
   glColor3f(0.0, 1.0, 1.0);
   glLoadIdentity();
   glOrtho(-8.0, 8.0, -8.0, 8.0, -8.0, 8.0);
   glRotatef(90.0, 0.0, 0.0, 1.0);
   draw_triangle();
   
   glDisable(GL_LINE_STIPPLE);
   
   glFlush();
   
   Sleep(3000);
   return 0;
}

