#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{

    float x1,y1,x2,y2,x3,y3,sx,sy;
    initwindow(500,500, "CSE-4742");
    printf("Enter coordinates of point:\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    scanf("%f%f",&x3,&y3);
    outtextxy(250,200,"Original triangle");
    setcolor(GREEN);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    printf("Enter scaling factors:\n");
    scanf("%f%f",&sx,&sy);
    x1=x1*sx;
    y1=y1*sy;
    x2=x2*sx;
    y2=y2*sy;
    x3=x3*sx;
    y3=y3*sy;
    cleardevice();
    setcolor(GREEN);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    outtextxy(450,300,"After magnifiying");
    getch();
    return 0;
}
