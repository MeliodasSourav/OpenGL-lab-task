#include <windows.h>
#include <GL/glut.h>
#include<stdio.h>

float xmin=0.1,xmax=0.7,ymin=0.2,ymax=0.5;
float x1=0.5, y1=0.3, x2=0.9, y2=0.7;


void display(void)
{
    glColor3f(0, 1, 0);
    glBegin(GL_LINES);
    glVertex2f(xmin,ymax);
    glVertex2f(xmax,ymax);

    glVertex2f(xmin,ymin);
    glVertex2f(xmax, ymin);

    glVertex2f(xmin,ymax);
    glVertex2f(xmin, ymin);

    glVertex2f(xmax,ymax);
    glVertex2f(xmax,ymin);

    glEnd();



    glColor3f(0, 1, 0);
    glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glEnd();
 glFlush();

int flag1, flag2;


    //inside
    if(x1>=xmin && x1<=xmax && y1>=ymin && y1<=ymax)
    {
        flag1 = 0;
    }
    //up-left
    else if(x1<xmin && y1>ymax)
    {
        flag1 = 1;
    }
    //up-right
    else if(x1>xmax && y1>ymax)
    {
        flag1 = 2;
    }
    //down-left
    else if(x1<xmin && y1<ymin)
    {
        flag1 = 3;
    }
    //down-right
    else if(x1>xmax && y1<ymin)
    {
        flag1 = 4;
    }
    //up
    else if(y1>=ymax)
    {
        flag1 = 5;
    }
    //left
    else if(x1<=xmin)
    {
        flag1 = 6;
    }
    //right
    else if(x1>=xmax)
    {
        flag1 = 7;
    }
    //down
    else if(y1<=ymin)
    {
        flag1 = 8;
    }


    printf("%d\n", flag1);




    //inside
    if(x2>=xmin && x2<=xmax && y2>=ymin && y2<=ymax)
    {
        flag2 = 0;
    }
    //up-left
    else if(x2<xmin && y2>ymax)
    {
        flag2 = 1;
    }
    //up-right
    else if(x2>xmax && y2>ymax)
    {
        flag2 = 2;
    }
    //down-left
    else if(x2<xmin && y2<ymin)
    {
        flag2 = 3;
    }
    //down-right
    else if(x2>xmax && y2<ymin)
    {
        flag2 = 4;
    }
    //up
    else if(y2>=ymax)
    {
        flag2 = 5;
    }
    //left
    else if(x2<=xmin)
    {
        flag2 = 6;
    }
    //right
    else if(x2>=xmax)
    {
        flag2 = 7;
    }
    //down
    else if(y2<=ymin)
    {
        flag2 = 8;
    }


    printf("%d\n", flag2);


}



int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(300, 300);
    glutCreateWindow("CSE UAP 4-2 B1");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
