#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int deg;
    int l,t,r,b;
    float rad,x1,y1,x2,y2,x3,y3,x4,y4;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR rectangle rotate PROGRAM: \n ");
    printf("Enter the co-ordinates of the rectangle :");
    scanf("%d%d%d%d",&l,&t,&r,&b);

    line(l,b,r,b);
    line(l,b,l,t);
    line(r,b,r,t);
    line(l,t,r,t);
    printf("\nEnter the angle to rotate :");
    scanf("%d",&deg);
    rad=deg*(3.14/180);

    cleardevice();

    x1=abs(l*cos(rad)-b*sin(rad));
    y1=abs(l*sin(rad)+b*cos(rad));
    x2=abs(r*cos(rad)-b*sin(rad));
    y2=abs(r*sin(rad)+b*cos(rad));
    x3=abs(l*cos(rad)-t*sin(rad));
    y3=abs(l*sin(rad)+t*cos(rad));
    x4=abs(r*cos(rad)-t*sin(rad));
    y4=abs(r*sin(rad)+t*cos(rad));

    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x3,y3,x4,y4);
    line(x2,y2,x4,y4);

    getch();
    closegraph();
}
