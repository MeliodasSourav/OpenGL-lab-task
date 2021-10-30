#include<windows.h>
#include<GL/glut.h>
#include<math.h>

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void lineSegment(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(50,80 );
    glVertex2i(90,80);
    glVertex2i(60,60);
    glVertex2i(70,100);
    glVertex2i(55,80);
    glVertex2i(90,60);
    glVertex2i(70,100);
    glVertex2i(90,60);
    glVertex2i(60,60);
    glVertex2i(90,80);

 glEnd();

 glFlush();

}

int main(int argc, char* argv[])
{
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowPosition(50, 100);
 glutInitWindowSize(400, 300);
 glutCreateWindow("An Example OpenGL Program");
 init();
 glutDisplayFunc(lineSegment);
 glutMainLoop();

 return 0;
}
