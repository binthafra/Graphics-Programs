#include <graphics.h>
#include <stdio.h>
#include <math.h>
# define pi 3.14159
int main()
{
    int r,theta;
    float p,T,x,y;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR Trigonometric circle PROGRAM: \n ");
    printf("Enter the radius ");
    scanf("%d",&r);
    int h=200, k=200;//h,k are coordinates of the center of the circle
    theta= 0;
    p=(pi*90);
    for(theta= 0;theta<=p; theta++)
    {
        x = r*cos(theta);
        y = r*sin(theta);
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
