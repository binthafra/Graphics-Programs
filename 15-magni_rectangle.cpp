#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,sx,sy;
    initwindow(500,500, "CSE-4742");
    printf("Enter the co-ordinates of the rectangle :");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    setcolor(YELLOW);
    rectangle(x1,y1,x2,y2);

    printf("Enter scaling factors sx,sy:\n");
    scanf("%f%f",&sx,&sy);
    x1=x1*sx;
    y1=y1*sy;
    x2=x2*sx;
    y2=y2*sy;
    cleardevice();
    setcolor(YELLOW);
    rectangle(x1,y1,x2,y2);
    getch();
    return 0;
}
