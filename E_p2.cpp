#include<graphics.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
void plotcircle(float,float,float,float);

int main()
{

    int gd = DETECT, gm;;
    float h,k,x,y,a,b,l;
    initgraph(&gd, &gm, "");

    printf("Enter co-ordinate of center(h,k)= ");
    scanf("%f%f",&h,&k);
    printf("\n\n Enter the major and minor axis:");
    scanf("%f%f",&a,&b);
    x=0;
    plotcircle(h,k,x,y);
    while(x<=a)
    {
        x=x+0.5;
        l=(1-((x)*(x))/(a*a));
        if(l<0)
            l*=-1;
        y=(b*(sqrt(l)));
        plotcircle(h,k,x,y);
    }
    getch();
    closegraph();
}

void plotcircle(float h,float k,float x,float y)
{
            putpixel(x+h,y+k, CYAN);
            putpixel(x+h,-y+k, CYAN);

            putpixel(-x+h,-y+k, CYAN);
            putpixel(-x+h,y+k, CYAN);
}
