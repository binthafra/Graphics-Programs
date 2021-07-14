# include <stdio.h>
# include <graphics.h>
#include<math.h>
int main()
{
    int x,y,d,x1,y1,x2,y2,r;
    int h=200,k=200;//h,k are coordinates of the center of the circle
    initwindow(500,500, "CSE-4742");
    printf("THIS IS Bresenham Circle PROGRAM: \n ");
    printf("Enter the radius ");
    scanf("%d",&r);;
    x=0;
    y=r;
    d=3-(2*r);
    while(x<=y)
    {

        if (d<0)
        {
           d=(d+(4*x)+6);
        }
        else
        {
            d=d+((4*(x-y)+10));
            y--;
        }
        x++;

        putpixel(x+h, y+k, GREEN);
        putpixel(x+h, -y+k, GREEN);
        putpixel(-x+h, -y+k, GREEN);
        putpixel(-x+h, y+k, GREEN);
        putpixel(y+h, x+k, GREEN);
        putpixel(y+h, -x+k, GREEN);
        putpixel(-y+h, -x+k, GREEN);
        putpixel(-y+h, x+k, GREEN);
    }
    getch();
    closegraph();

    return 0;
}
