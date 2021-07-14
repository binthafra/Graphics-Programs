#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2 ;
    float b1,b2;
    float t,deg;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR line rotate PROGRAM: \n ");
    printf("Enter the coordinates of Line \n");

    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    setcolor(6);
    line(x1,y1,x2,y2);

    printf("Enter the angle of rotation: ");
    scanf("%f",&deg);
    t=((deg*3.14)/180);
    //t=(22*deg)/(180*7);
    b1=abs((x2*cos(t))-(y2*sin(t)));
    b2=abs((x2*sin(t))+(y2*cos(t)));
    line(x1,y1,b1,b2);
    getch();
    closegraph();
}
