#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR Line PROGRAM: \n ");

    float x, y,dx,dy,steps;
    int x0, x1, y0, y1,i;

    x0 = 100 , y0 = 200, x1 = 500, y1 = 300;
    dx =(x1 - x0);
    dy = (y1 - y0);

    if(dx>=dy)
           {
        steps = dx;
    }
    else
           {
        steps = dy;
    }
    dx = dx/steps;
    dy = dy/steps;
    x = x0;
    y = y0;
    i = 1;
    for(i=1;i<=steps;i++)
    {
        putpixel(x, y, RED);
        x =x+ dx;
        y =y+ dy;
    }
    getch();
    closegraph();

    return 0;
}
