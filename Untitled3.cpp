#include <graphics.h>
#include <stdio.h>
#include <math.h>
# define pi 3.14159
int main()
{
    int r,theta,a,b;
    float p,T,x,y,xc,yc,theta_end;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR Trigonometric circle PROGRAM: \n ");
    printf("Enter the length of major & minor Axis\n");
    scanf("%d%d",&a,&b);
    int h=200, k=200;
    theta=0;
    theta_end=90;
    while (theta<=theta_end)
    {
        x=a*cos (theta) + xc;
        y=b*sin (theta) + yc;
        putpixel(x+xc,y+yc,RED);
        putpixel(-x+xc,y+yc,RED);
        putpixel(-x+xc,-y+yc,RED);
        putpixel(x+xc,-y+yc,RED);
        theta=theta+1;
    }

    getch();
    closegraph();

    return 0;

}
