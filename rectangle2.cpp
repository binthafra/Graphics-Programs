#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
void axis()
{
    midx=getmaxx() / 2;
    midy=getmaxy() / 2;
    line(0,midy,midx*2,midy);
    line(midx,0,midx,midy*2);
    rectangle(x1,y1,x2,y2);
}

int main()
{
    int ang;
    float rx,xn1,yn1,xn2,yn2,x1n1,y1n1,x2n2,y2n2;
    printf("\n Enter the angle for rotation:\n");
    scanf("%d",&ang);
    cleardevice();
    outtextxy(500,200,"ROTATION");
    rx=(ang*3.14)/180;
    xn1=x1*cos(rx)-y1*sin(rx);
    yn1=y1*cos(rx)+x1*sin(rx);
    xn2=x2*cos(rx)-y2*sin(rx);
    yn2=y2*cos(rx)+x2*sin(rx);
    x1n1=x2*cos(rx)-y1*sin(rx);
    y1n1=y1*cos(rx)+x2*sin(rx);
    x2n2=x1*cos(rx)-y2*sin(rx);
    y2n2=y2*cos(rx)+x1*sin(rx);
    axis();
    line(xn1,yn1,x1n1,y1n1);
    line(x1n1,y1n1,xn2,yn2);
    line(xn2,yn2,x2n2,y2n2);
    line(x2n2,y2n2,xn1,yn1);
    getch();
}
