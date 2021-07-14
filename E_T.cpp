#include <graphics.h>
#include <stdio.h>
#include <math.h>
# define pi 3.14159
int main()
{
    int r,theta,a,b;
    float p,T,x,y;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR Trigonometric circle PROGRAM: \n ");
    printf("Enter the radius ");
    scanf("%d%d",&a,&b);
    int h=100, k=100;//h,k are coordinates of the center of the circle
    theta= 0;
    p=(pi*90);
    for(theta= 0;theta<=p; theta++)
    {
        x = a*cos(theta)+h ;
        y = b*sin(theta)+k;
        putpixel(x+h, y+k, WHITE);
    }

    getch();
    closegraph();

    return 0;

}
