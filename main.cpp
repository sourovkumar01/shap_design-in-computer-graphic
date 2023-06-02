#include<windows.h>
#include<GL/glut.h>
#include<bits/stdc++.h>
void display(){
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3d(1,0,0);
 glBegin(GL_LINES);
 glVertex2f(-2.0,0.0);
 glVertex2f(2.0,0.0);
 glVertex2f(0.0,2.0);

 glEnd();
 glFlush();
}
int main(int argc, char * argv[]){
 glutInit(&argc, argv);
 glutInitWindowSize(640, 480);
 glutInitWindowPosition(10,10);
 glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE|GLUT_DEPTH);
 glutCreateWindow("Axis");
 glutDisplayFunc(display);
 glutMainLoop();
 return EXIT_SUCCESS;
}
