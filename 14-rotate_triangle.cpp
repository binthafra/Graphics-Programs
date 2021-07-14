#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    double s,c, angle;
    initwindow(500,500, "CSE-4742");
    printf("This is Triangle Rotation program: \n ");
    setcolor(CYAN);
    printf("Enter coordinates of triangle: ");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2, &x3, &y3);

    line(x1,y1,x2,y2);
    line(x2,y2, x3,y3);
    line(x3, y3, x1, y1);
    printf("Enter rotation angle: ");
    scanf("%lf", &angle);
    cleardevice();

    c = cos(angle *3.14/180);
    s = sin(angle *3.14/180);
    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);
    x3 = floor(x3 * c + y3 * s);
    y3 = floor(-x3 * s + y3 * c);

    line(x1, y1,x2, y2);
    line(x2,y2, x3,y3);
    line(x3, y3, x1, y1);
    getch();
    closegraph();
    return 0;
}
