#include <graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR FIRST PROGRAM: LETS DRAW ACIRCLE FOR  TESTING  ");
    circle(50,50,30);    //circle(x, y, radius);

    getch();
    closegraph();

    return 0;

}
