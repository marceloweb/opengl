#include<GL/glut.h>

void display(void)
{
  glColor3f(1.0f, 0.0f, 0.0f);
  glPointSize(10.0f);
  glBegin(GL_POINTS);
    glVertex2i(3,1);
  glEnd();

  glutSwapBuffers();

}

void init(void)
{
  glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-10,10,-10,10);
  glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(320,240);
  glutInitWindowPosition(100,100);
  glutCreateWindow("OpenGL");
  glutDisplayFunc(display);
  init();
  glutMainLoop();
}
