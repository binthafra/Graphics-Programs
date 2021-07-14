# include <stdio.h>
# include <graphics.h>
#include<math.h>
int main()
{
    int dx,dy,x,y,p,x1,y1,x2,y2,dT,d,dS;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR BRESENHAM LINE PROGRAM: \n ");
    printf("\n\n\tEnter the co-ordinates of first point : ");
    scanf("%d %d",&x1,&y1);
    printf("\n\n\tEnter the co-ordinates of second point : ");
    scanf("%d %d",&x2,&y2);
    dx=(x2 - x1);
    dy=(y2 - y1);
    dT = 2*((dy)-(dx));
    dS=2*dy;
    d = 2*dy - dx;
    x = x1;
    y = y1;
    putpixel(x,y,WHITE);
    while(x <= x2)
    {
        x++;
        if(d < 0)
        {
            d=d+dS;
        }
        else
        {
            y++;
            d=d+dT;

        }
        putpixel(x,y,WHITE);
    }
    getch();
    closegraph();

    return 0;
}
