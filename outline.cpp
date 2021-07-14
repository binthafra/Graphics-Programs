#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    line(150, 150, 350, 150);
    line(150, 150, 150, 400);
    line(150, 400, 200,400);
    //line(200, 200, 300, 200);
    rectangle(200,200,300,300);
    line(350, 150, 350, 400);
    line(300, 400, 350,400);


    getch();
    closegraph();

    return 0;
}


