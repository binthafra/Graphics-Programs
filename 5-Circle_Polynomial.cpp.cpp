#include <graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,r,x2;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS POLYNOMIAL CIRCLE PROGRAM : \n ");
    printf("Enter the radius ");
    scanf("%d",&r);
    int h=100, k=100;//h,k are coordinates of the center of the circle

    x2 = r/sqrt(2);
    for(x=0;x<=x2;x++)
    {
        y = sqrt(r*r - x*x); // r2 = x2 + y2 circle equation

        putpixel(x+h, y+k, WHITE);
        putpixel(x+h, -y+k, WHITE);
        putpixel(-x+h, -y+k, WHITE);
        putpixel(-x+h, y+k, WHITE);
        putpixel(y+h, x+k, WHITE);
        putpixel(y+h, -x+k, WHITE);
        putpixel(-y+h, -x+k, WHITE);
        putpixel(-y+h, x+k, WHITE);
    }

    getch();
    closegraph();

    return 0;

}
