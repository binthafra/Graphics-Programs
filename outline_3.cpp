#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    int x = 150;
    int y = 150;
    int start_angle =0;
    int end_angle = 360;
    int radius = 100;
    initgraph(&gd, &gm, "");
    //line(0, 150, 450, 150);
    arc(x, y, start_angle, end_angle, radius);
    arc(150, 150, 0,360,70);
    line(250, 250, 150, 150);
   // line(250, 300, 150, 150);
   line(270, 270, 170, 170);
    getch();
    closegraph();

    return 0;
}

