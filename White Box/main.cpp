#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

float xa=0.2, ya=0.2, xb=-0.2, yb=0.2, xc=-0.2, yc=-0.2, xd=0.2, yd=-0.2;
float ty = 0.1, tx = 0.1;
float gx = 2, gy = 2, sx = 0.5, sy = 0.5;
float temp;
float theta = 30, theta1 = -30;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(0.5,0.5);
    glVertex2f(-0.5,0.5);
    glVertex2f(-0.5,-0.5);
    glVertex2f(0.5,-0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(xa, ya);
    glColor3f(0,1,0);
    glVertex2f(xb, yb);
    glColor3f(0,0,1);
    glVertex2f(xc, yc);
    glColor3f(0.5,0.5,0.7);
    glVertex2f(xd, yd);
    glEnd();
    glFlush();
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
        case 'w':
            ya = ya + ty;
            yb = yb + ty;
            yc = yc + ty;
            yd = yd + ty;
            if(xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 &&
               ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
            {
                printf("Inside ");
            }
            if(ya>0.5 && yb>0.5 && yc>0.5 && yd>0.5)
            {
                printf("Up ");
            }
            if(ya<-0.5 && yb<-0.5 && yc<-0.5 && yd<-0.5)
            {
                printf("Down ");
            }
            if(xa>0.5 && xb>0.5 && xc>0.5 && xd>0.5)
            {
                printf("Right ");
            }
            if(xa<-0.5 && xb<-0.5 && xc<-0.5 && xd<-0.5)
            {
                printf("Left ");
            }
            printf("\n");
            glutPostRedisplay();
            break;
        case 'a':
            xa = xa - tx;
            xb = xb - tx;
            xc = xc - tx;
            xd = xd - tx;
            if(xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 &&
               ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
            {
                printf("Inside ");
            }
            if(ya>0.5 && yb>0.5 && yc>0.5 && yd>0.5)
            {
                printf("Up ");
            }
            if(ya<-0.5 && yb<-0.5 && yc<-0.5 && yd<-0.5)
            {
                printf("Down ");
            }
            if(xa>0.5 && xb>0.5 && xc>0.5 && xd>0.5)
            {
                printf("Right ");
            }
            if(xa<-0.5 && xb<-0.5 && xc<-0.5 && xd<-0.5)
            {
                printf("Left ");
            }
            printf("\n");
            glutPostRedisplay();
            break;
        case 's':
            ya = ya - ty;
            yb = yb - ty;
            yc = yc - ty;
            yd = yd - ty;
            if(xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 &&
               ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
            {
                printf("Inside ");
            }
            if(ya>0.5 && yb>0.5 && yc>0.5 && yd>0.5)
            {
                printf("Up ");
            }
            if(ya<-0.5 && yb<-0.5 && yc<-0.5 && yd<-0.5)
            {
                printf("Down ");
            }
            if(xa>0.5 && xb>0.5 && xc>0.5 && xd>0.5)
            {
                printf("Right ");
            }
            if(xa<-0.5 && xb<-0.5 && xc<-0.5 && xd<-0.5)
            {
                printf("Left ");
            }
            printf("\n");
            glutPostRedisplay();
            break;
        case 'd':
            xa = xa + tx;
            xb = xb + tx;
            xc = xc + tx;
            xd = xd + tx;
            if(xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 &&
               ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
            {
                printf("Inside ");
            }
            if(ya>0.5 && yb>0.5 && yc>0.5 && yd>0.5)
            {
                printf("Up ");
            }
            if(ya<-0.5 && yb<-0.5 && yc<-0.5 && yd<-0.5)
            {
                printf("Down ");
            }
            if(xa>0.5 && xb>0.5 && xc>0.5 && xd>0.5)
            {
                printf("Right ");
            }
            if(xa<-0.5 && xb<-0.5 && xc<-0.5 && xd<-0.5)
            {
                printf("Left ");
            }
            printf("\n");
            glutPostRedisplay();
            break;
        //Clockwise Rotation
        case 'm':
            temp = xa;
            xa = xa*cos(theta) - ya*sin(theta);
            ya = temp*sin(theta) + ya*cos(theta);
            temp = xb;
            xb = xb*cos(theta) - yb*sin(theta);
            yb = temp*sin(theta) + yb*cos(theta);
            temp = xc;
            xc = xc*cos(theta) - yc*sin(theta);
            yc = temp*sin(theta) + yc*cos(theta);
            temp = xd;
            xd = xd*cos(theta) - yd*sin(theta);
            yd = temp*sin(theta) + yd*cos(theta);
            glutPostRedisplay();
            break;
        //Anti-clockwise Rotation
        case 'n':
            temp = xa;
            xa = xa*cos(theta1) - ya*sin(theta1);
            ya = temp*sin(theta1) + ya*cos(theta1);
            temp = xb;
            xb = xb*cos(theta1) - yb*sin(theta1);
            yb = temp*sin(theta1) + yb*cos(theta1);
            temp = xc;
            xc = xc*cos(theta1) - yc*sin(theta1);
            yc = temp*sin(theta1) + yc*cos(theta1);
            temp = xd;
            xd = xd*cos(theta1) - yd*sin(theta1);
            yd = temp*sin(theta1) + yd*cos(theta1);
            glutPostRedisplay();
            break;
        //2x Zoom
        case '+':
            xa = gx*xa;
            ya = gy*ya;
            xb = gx*xb;
            yb = gy*yb;
            xc = gx*xc;
            yc = gy*yc;
            xd = gx*xd;
            yd = gy*yd;
            glutPostRedisplay();
            break;
        //.5x Zoom Out
        case '-':
            xa = sx*xa;
            ya = sy*ya;
            xb = sx*xb;
            yb = sy*yb;
            xc = sx*xc;
            yc = sy*yc;
            xd = sx*xd;
            yd = sy*yd;
            glutPostRedisplay();
            break;
    }
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("RGB BOX");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
