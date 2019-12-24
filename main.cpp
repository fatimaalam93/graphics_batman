#include<stdio.h>
#include<GL/gl.h>

#include <GL/glut.h>


int x = 80, y = 20, w = 10, h = 10;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    ///1st
    glColor3f(0,0,0);
    for(int i = 1; i<=17; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

///2nd
    x = 70;
    y+=10;
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=17; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

///3rd

    x=60;
    y+=10;
glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

     glColor3f(1,1,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=5; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=5; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

    ///4th line
    x=50;
    y+=10;
     glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

 glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
     glColor3f(1,1,0);
    for(int i = 1; i<=4; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=4; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    ///5th

    x=40;
    y+=10;

   glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=5; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }


glColor3f(1,1,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
glColor3f(1,1,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=5; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }


///6th line
    x=30;
    y+=10;
        glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

    glColor3f(0,0,0);
    for(int i = 1; i<=7; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
glColor3f(0,0,0);
    for(int i = 1; i<=5; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

    glColor3f(0,0,0);
    for(int i = 1; i<=7; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
      glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    ///7th line

    x=20;
    y+=10;
     glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
     glColor3f(0,0,0);
    for(int i = 1; i<=23; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    ///8th line

    x=10;
    y+=10;
     glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
     glColor3f(0,0,0);
    for(int i = 1; i<=25; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

     ///9th line

    x=10;
    y+=10;
     glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
     glColor3f(0,0,0);
    for(int i = 1; i<=27; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

///10th line

    x=10;
    y+=10;
     glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
     glColor3f(0,0,0);
    for(int i = 1; i<=27; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

///11th line

    x=10;
    y+=10;
     glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
     glColor3f(0,0,0);
    for(int i = 1; i<=27; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

///12th line

    x=10;
    y+=10;
     glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
     glColor3f(0,0,0);
    for(int i = 1; i<=27; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

///13th line

    x=10;
    y+=10;
     glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
     glColor3f(0,0,0);
    for(int i = 1; i<=27; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

    ///14th line
    x=10;
    y+=10;

 glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

    glColor3f(0,0,0);
    for(int i = 1; i<=7; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=7; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
        glColor3f(0,0,0);
    for(int i = 1; i<=7; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
      glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

    ///15 th line
    x=20;
    y+=10;
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=5; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=4; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=5; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=4; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=5; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

    ///16th line
    x=30;
    y+=10;
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=4; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=4; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=5; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=4; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=4; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

    ///17th line
    x=40;
    y+=10;
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=4; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=5; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=4; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
     ///18th line
    x=50;
    y+=10;
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=5; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }

    ///19th line
    x=60;
    y+=10;
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=7; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=7; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
     ///20th line
    x=70;
    y+=10;
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(1,1,0);
    for(int i = 1; i<=17; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }
    glColor3f(0,0,0);
    for(int i = 1; i<=1; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }


 ///21th line
    x=80;
    y+=10;
    glColor3f(0,0,0);
    for(int i = 1; i<=17; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
        glEnd();
        x+=10;
    }














    glFlush();
}
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-50,400,-50,400);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Batman 8-)");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
