#include <graphics.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,r,p;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS Mid_Point Circle PROGRAM: \n ");
    int h=200, k=200;//h,k are coordinates of the center of the circle
    printf("enter the value of radius:");
    scanf("%d",&r);
    x=0;
    y=r;
    p=1-r;
    while(x<=y)
    {
        if(p<0)
            p=p+2*x+3;
        else
        {
            p=p+2*(x-y)+5;
            y--;
        }
        x++;
        putpixel(x+h,y+k, YELLOW);
        putpixel(x+h,-y+k, YELLOW);
        putpixel(y+h,-x+k, YELLOW);
        putpixel(-y+h,-x+k, YELLOW);
        putpixel(-x+h,-y+k, YELLOW);
        putpixel(-x+h,y+k, YELLOW);
        putpixel(-y+h,x+k, YELLOW);
        putpixel(y+h,x+k, YELLOW);
    }
    getch();
    closegraph();
    return 0;
}
