#include<cstdio>
#include<windows.h>
#include<math.h>
#define PI 3.14159265358979323846
#include<GL/freeglut.h>
#include<GL/gl.h>
#include<GL/glut.h>

void display()
{
printf("hello");
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(840, 640);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Jatiyo Sangsod Bhaban");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
