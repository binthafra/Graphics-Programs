#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
# define pi 3.14159

int main()
{
    initwindow(500,500, "CSE-4742");
    int x, y,xc,yc,xr,yr,theta,theta_end;
    scanf("%d%d",&xc,&yc);
     printf("Enter the length of major & minor Axis\n");
    scanf("%d%d",&xr,&yr);
    theta=0;
    theta_end=(pi*90);
    while (theta<=theta_end)
    {
        x=xr*cos (theta) + xc;
        y=yr*sin (theta) + yc;
        putpixel(x+xc,y+yc,WHITE);
        theta=theta+1;
    }

    getch();
    closegraph();
}
