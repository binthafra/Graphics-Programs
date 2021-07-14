
#include <graphics.h>

int main()
{

    initwindow(500,500, "CSE-4742");
    printf("This is Sector program: \n ");
    //sector (x, y,start-angle,end angle, x-radius,y-radius)
    sector(200, 200, 0, 150, 50, 65);

    getch();
    closegraph();

    return 0;
}
